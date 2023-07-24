/*
 * Copyright (c) 2023.
 *
 * This file is part of tree-sitter-aidl.
 *
 * tree-sitter-aidl is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * tree-sitter-aidl is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with android-tree-sitter.  If not, see <https://www.gnu.org/licenses/>.
 */

const DIGITS = token(sep1(/[0-9]+/, /_+/))
const HEX_DIGITS = token(sep1(/[A-Fa-f0-9]+/, '_'))
const PREC = {
    // https://introcs.cs.princeton.edu/java/11precedence/
    COMMENT: 0,      // //  /*  */
    ASSIGN: 1,       // =  += -=  *=  /=  %=  &=  ^=  |=  <<=  >>=  >>>=
    DECL: 2,
    ELEMENT_VAL: 2,
    TERNARY: 3,      // ?:
    OR: 4,           // ||
    AND: 5,          // &&
    BIT_OR: 6,       // |
    BIT_XOR: 7,      // ^
    BIT_AND: 8,      // &
    EQUALITY: 9,     // ==  !=
    GENERIC: 10,
    REL: 10,         // <  <=  >  >=  instanceof
    SHIFT: 11,       // <<  >>  >>>
    ADD: 12,         // +  -
    MULT: 13,        // *  /  %
    CAST: 14,        // (Type)
    OBJ_INST: 14,    // new
    UNARY: 15,       // ++a  --a  a++  a--  +  -  !  ~
    ARRAY: 16,       // [Index]
    OBJ_ACCESS: 16,  // .
    PARENS: 16,      // (Expression)
    CLASS_LITERAL: 17,  // .
    DIMENSIONS_EXPR: 18,
};

module.exports = grammar({
    name: 'aidl',

    extras: $ => [
        $.line_comment,
        $.block_comment,
        /\s/
    ],

    supertypes: $ => [
        $.expression,
        $.declaration,
        $.statement,
        $.primary_expression,
        $._literal,
        $._type,
        $._simple_type,
        $._unannotated_type,
        $.comment,
    ],

    inline: $ => [
        $._name,
        $._simple_type,
        $._reserved_identifier,
    ],

    conflicts: $ => [
        [$.modifiers, $.annotated_type, $.receiver_parameter],
        [$.modifiers, $.annotated_type, $.package_declaration],
        [$.package_declaration, $.modifiers],
        [$._unannotated_type, $.primary_expression, $.inferred_parameters],
        [$._unannotated_type, $.primary_expression],
        [$._unannotated_type, $.primary_expression, $.scoped_type_identifier],
        [$._unannotated_type, $.scoped_type_identifier],
        [$._unannotated_type, $.generic_type],
        [$.generic_type, $.primary_expression],
        [$.expression, $.statement],
        // Only conflicts in switch expressions
        [$.lambda_expression, $.primary_expression],
        [$.inferred_parameters, $.primary_expression],
        [$.class_literal, $.field_access],
    ],

    word: $ => $.identifier,

    rules: {
        program: $ => repeat($.statement),

        // Literals

        _literal: $ => choice(
            $.decimal_integer_literal,
            $.hex_integer_literal,
            $.octal_integer_literal,
            $.binary_integer_literal,
            $.decimal_floating_point_literal,
            $.hex_floating_point_literal,
            $.true,
            $.false,
            $.character_literal,
            $.string_literal,
            $.null_literal
        ),

        decimal_integer_literal: $ => token(seq(
            DIGITS,
            optional(choice('l', 'L'))
        )),

        hex_integer_literal: $ => token(seq(
            choice('0x', '0X'),
            HEX_DIGITS,
            optional(choice('l', 'L'))
        )),

        octal_integer_literal: $ => token(seq(
            choice('0o', '0O'),
            sep1(/[0-7]+/, '_'),
            optional(choice('l', 'L'))
        )),

        binary_integer_literal: $ => token(seq(
            choice('0b', '0B'),
            sep1(/[01]+/, '_'),
            optional(choice('l', 'L'))
        )),

        decimal_floating_point_literal: $ => token(choice(
            seq(DIGITS, '.', optional(DIGITS), optional(seq((/[eE]/), optional(choice('-', '+')), DIGITS)), optional(/[fFdD]/)),
            seq('.', DIGITS, optional(seq((/[eE]/), optional(choice('-', '+')), DIGITS)), optional(/[fFdD]/)),
            seq(DIGITS, /[eEpP]/, optional(choice('-', '+')), DIGITS, optional(/[fFdD]/)),
            seq(DIGITS, optional(seq((/[eE]/), optional(choice('-', '+')), DIGITS)), (/[fFdD]/))
        )),

        hex_floating_point_literal: $ => token(seq(
            choice('0x', '0X'),
            choice(
                seq(HEX_DIGITS, optional('.')),
                seq(optional(HEX_DIGITS), '.', HEX_DIGITS)
            ),
            optional(seq(
                /[eEpP]/,
                optional(choice('-', '+')),
                DIGITS,
                optional(/[fFdD]/)
            ))
        )),

        true: $ => 'true',

        false: $ => 'false',

        character_literal: $ => token(seq(
            '\'',
            repeat1(choice(
                /[^\\'\n]/,
                /\\./,
                /\\\n/
            )),
            '\''
        )),

        string_literal: $ => seq(
            '"',
            repeat(choice(
                $.string_fragment,
                $.escape_sequence,
            )),
            '"'
        ),

        // Workaround to https://github.com/tree-sitter/tree-sitter/issues/1156
        // We give names to the token() constructs containing a regexp
        // so as to obtain a node in the CST.
        //
        string_fragment: $ =>
            token.immediate(prec(1, /[^"\\]+/)),

        escape_sequence: () => token.immediate(seq(
            '\\',
            choice(
                /[^xu0-7]/,
                /[0-7]{1,3}/,
                /x[0-9a-fA-F]{2}/,
                /u[0-9a-fA-F]{4}/,
                /u{[0-9a-fA-F]+}/
            ))),

        null_literal: $ => 'null',

        // Expressions

        expression: $ => choice(
            $.assignment_expression,
            $.binary_expression,
            $.lambda_expression,
            $.primary_expression,
            $.cast_expression
        ),

        cast_expression: $ => prec(PREC.CAST, seq(
            '(',
            sep1(field('type', $._type), '&'),
            ')',
            field('value', $.expression)
        )),

        assignment_expression: $ => prec.right(PREC.ASSIGN, seq(
            field('left', choice(
                $.identifier,
                $._reserved_identifier,
                $.field_access,
                $.array_access
            )),
            '=',
            field('right', $.expression)
        )),

        binary_expression: $ => choice(
            ...[
                ['>', PREC.REL],
                ['<', PREC.REL],
                ['>=', PREC.REL],
                ['<=', PREC.REL],
                ['==', PREC.EQUALITY],
                ['!=', PREC.EQUALITY],
                ['&&', PREC.AND],
                ['||', PREC.OR],
                ['+', PREC.ADD],
                ['-', PREC.ADD],
                ['*', PREC.MULT],
                ['/', PREC.MULT],
                ['&', PREC.BIT_AND],
                ['|', PREC.BIT_OR],
                ['^', PREC.BIT_XOR],
                ['%', PREC.MULT],
                ['<<', PREC.SHIFT],
                ['>>', PREC.SHIFT],
                ['>>>', PREC.SHIFT],
            ].map(([operator, precedence]) =>
                prec.left(precedence, seq(
                    field('left', $.expression),
                    field('operator', operator),
                    field('right', $.expression)
                ))
            )),

        lambda_expression: $ => seq(
            field('parameters', choice(
                $.identifier, $.formal_parameters, $.inferred_parameters, $._reserved_identifier
            )),
            '->',
            field('body', choice($.expression, $.block))
        ),

        inferred_parameters: $ => seq(
            '(',
            commaSep1(choice($.identifier, $._reserved_identifier)),
            ')'
        ),

        primary_expression: $ => choice(
            $._literal,
            $.class_literal,
            $.this,
            $.identifier,
            $._reserved_identifier,
            $.parenthesized_expression,
            $.field_access,
            $.array_access,
        ),

        dimensions_expr: $ => prec.right(PREC.DIMENSIONS_EXPR, seq(repeat($._annotation), '[', $.expression, ']')),

        parenthesized_expression: $ => seq('(', $.expression, ')'),

        condition: $ => seq('(', $.expression, ')'),

        class_literal: $ => prec.dynamic(PREC.CLASS_LITERAL, seq($._unannotated_type, '.', 'class')),

        field_access: $ => seq(
            field('object', choice($.primary_expression, $.super)),
            optional(seq(
                '.',
                $.super
            )),
            '.',
            field('field', choice($.identifier, $._reserved_identifier, $.this))
        ),

        array_access: $ => seq(
            field('array', $.primary_expression),
            '[',
            field('index', $.expression),
            ']',
        ),

        argument_list: $ => seq('(', commaSep($.expression), ')'),

        type_arguments: $ => seq(
            '<',
            commaSep(choice($._type, $.wildcard)),
            '>'
        ),

        wildcard: $ => seq(
            repeat($._annotation),
            '?',
            optional($._wildcard_bounds)
        ),

        _wildcard_bounds: $ => choice(
            seq('extends', $._type),
            seq($.super, $._type)
        ),

        dimensions: $ => prec.right(repeat1(
            seq(repeat($._annotation), '[', ']')
        )),

        // Statements

        statement: $ => choice(
            $.declaration,
            $.expression_statement,
            $.block,
            ';',
            $.assert_statement,
            $.return_statement,
            $.yield_statement,
            $.local_variable_declaration,
        ),

        block: $ => seq(
            '{', repeat($.statement), '}'
        ),

        expression_statement: $ => seq(
            $.expression,
            ';'
        ),

        assert_statement: $ => choice(
            seq('assert', $.expression, ';'),
            seq('assert', $.expression, ':', $.expression, ';')
        ),

        return_statement: $ => seq(
            'return',
            optional($.expression),
            ';'
        ),

        yield_statement: $ => seq(
            'yield',
            $.expression,
            ';'
        ),

        // Annotations

        _annotation: $ => choice(
            $.marker_annotation,
            $.annotation
        ),

        marker_annotation: $ => seq(
            '@',
            field('name', $._name)
        ),

        annotation: $ => seq(
            '@',
            field('name', $._name),
            field('arguments', $.annotation_argument_list)
        ),

        annotation_argument_list: $ => seq(
            '(',
            choice(
                $._element_value,
                commaSep($.element_value_pair),
            ),
            ')'
        ),

        element_value_pair: $ => seq(
            field('key', $.identifier),
            '=',
            field('value', $._element_value)
        ),

        _element_value: $ => prec(PREC.ELEMENT_VAL, choice(
            $.expression,
            $.element_value_array_initializer,
            $._annotation
        )),

        element_value_array_initializer: $ => seq(
            '{',
            commaSep($._element_value),
            optional(','),
            '}'
        ),

        // Declarations

        declaration: $ => prec(PREC.DECL, choice(
            $.package_declaration,
            $.import_declaration,
            $.interface_declaration,
        )),

        package_declaration: $ => seq(
            repeat($._annotation),
            'package',
            field('name', $._name),
            ';'
        ),

        import_declaration: $ => choice(
            $.single_type_import,
            $.type_import_on_demand,
            $.single_static_import,
            $.static_import_on_demand
        ),

        single_type_import: $ => seq(
            'import',
            $._name,
            ';'
        ),

        type_import_on_demand: $ => seq(
            'import',
            $._name,
            '.',
            $.asterisk,
            ';'
        ),

        single_static_import: $ => seq(
            'import',
            'static',
            field('scope', $._name),
            '.',
            field('member', $.identifier),
            ';'
        ),

        static_import_on_demand: $ => seq(
            'import',
            'static',
            field('type_name', $._name),
            '.',
            $.asterisk,
            ';'
        ),

        asterisk: $ => '*',

        modifiers: $ => repeat1(choice(
            $._annotation,
            'oneway',
            'in',
            'out',
            'inout'
        )),

        type_parameters: $ => seq(
            '<', commaSep1($.type_parameter), '>'
        ),

        type_parameter: $ => seq(
            repeat($._annotation),
            alias($.identifier, $.type_identifier),
            optional($.type_bound)
        ),

        type_bound: $ => seq('extends', $._type, repeat(seq('&', $._type))),

        type_list: $ => seq(
            $._type,
            repeat(seq(',', $._type))
        ),

        _name: $ => choice(
            $.identifier,
            $._reserved_identifier,
            $.scoped_identifier
        ),

        scoped_identifier: $ => seq(
            field('scope', $._name),
            '.',
            field('name', $.identifier)
        ),

        field_declaration: $ => seq(
            optional($.modifiers),
            field('type', $._unannotated_type),
            $._variable_declarator_list,
            ';'
        ),

        _default_value: $ => seq(
            'default',
            field('value', $._element_value)
        ),

        interface_declaration: $ => seq(
            optional($.modifiers),
            'interface',
            field('name', $.identifier),
            field('type_parameters', optional($.type_parameters)),
            field('body', $.interface_body)
        ),

        interface_body: $ => seq(
            '{',
            repeat($.method_declaration),
            '}'
        ),

        _variable_declarator_list: $ => commaSep1(
            field('declarator', $.variable_declarator)
        ),

        variable_declarator: $ => seq(
            field('name', choice($.identifier, $._reserved_identifier)),
            field('dimensions', optional($.dimensions))
        ),

        // Types

        _type: $ => choice(
            $._unannotated_type,
            $.annotated_type
        ),

        _unannotated_type: $ => choice(
            $._simple_type,
            $.array_type
        ),

        _simple_type: $ => choice(
            $.void_type,
            $.integral_type,
            $.floating_point_type,
            $.boolean_type,
            alias($.identifier, $.type_identifier),
            $.scoped_type_identifier,
            $.generic_type
        ),

        annotated_type: $ => seq(
            repeat1($._annotation),
            $._unannotated_type
        ),

        scoped_type_identifier: $ => seq(
            choice(
                alias($.identifier, $.type_identifier),
                $.scoped_type_identifier,
                $.generic_type
            ),
            '.',
            repeat($._annotation),
            alias($.identifier, $.type_identifier)
        ),

        generic_type: $ => prec.dynamic(PREC.GENERIC, seq(
            choice(
                alias($.identifier, $.type_identifier),
                $.scoped_type_identifier
            ),
            $.type_arguments
        )),

        array_type: $ => seq(
            field('element', $._unannotated_type),
            field('dimensions', $.dimensions)
        ),

        integral_type: $ => choice(
            'byte',
            'short',
            'int',
            'long',
            'char'
        ),

        floating_point_type: $ => choice(
            'float',
            'double'
        ),

        boolean_type: $ => 'boolean',

        void_type: $ => 'void',

        _method_header: $ => seq(
            optional(seq(
                field('type_parameters', $.type_parameters),
                repeat($._annotation)
            )),
            field('type', $._unannotated_type),
            $._method_declarator,
            optional($.throws)
        ),

        _method_declarator: $ => seq(
            field('name', choice($.identifier, $._reserved_identifier)),
            field('parameters', $.formal_parameters),
            field('dimensions', optional($.dimensions))
        ),

        formal_parameters: $ => seq(
            '(',
            optional($.receiver_parameter),
            commaSep(choice($.formal_parameter, $.spread_parameter)),
            ')'
        ),

        formal_parameter: $ => seq(
            optional($.modifiers),
            field('type', $._unannotated_type),
            $.variable_declarator
        ),

        receiver_parameter: $ => seq(
            repeat($._annotation),
            $._unannotated_type,
            optional(seq($.identifier, '.')),
            $.this
        ),

        spread_parameter: $ => seq(
            optional($.modifiers),
            $._unannotated_type,
            '...',
            $.variable_declarator
        ),

        throws: $ => seq(
            'throws', commaSep1($._type)
        ),

        local_variable_declaration: $ => seq(
            optional($.modifiers),
            field('type', $._unannotated_type),
            $._variable_declarator_list,
            ';'
        ),

        method_declaration: $ => seq(
            optional($.modifiers),
            $._method_header,
            ';'
        ),

        _reserved_identifier: $ => alias(choice(
            'open',
            'module',
            'record'
        ), $.identifier),

        this: $ => 'this',

        super: $ => 'super',

        // https://docs.oracle.com/javase/specs/jls/se8/html/jls-3.html#jls-IdentifierChars
        identifier: $ => /[\p{L}_$][\p{L}\p{Nd}_$]*/,

        // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
        comment: $ => choice(
            $.line_comment,
            $.block_comment,
        ),

        line_comment: $ => token(prec(PREC.COMMENT, seq('//', /[^\n]*/))),

        block_comment: $ => token(prec(PREC.COMMENT,
            seq(
                '/*',
                /[^*]*\*+([^/*][^*]*\*+)*/,
                '/'
            )
        )),
    }
});

function sep1(rule, separator) {
    return seq(rule, repeat(seq(separator, rule)));
}

function commaSep1(rule) {
    return seq(rule, repeat(seq(',', rule)))
}

function commaSep(rule) {
    return optional(commaSep1(rule))
}
