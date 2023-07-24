#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 328
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 161
#define ALIAS_COUNT 1
#define TOKEN_COUNT 80
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 21
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 45

enum {
  sym_identifier = 1,
  sym_decimal_integer_literal = 2,
  sym_hex_integer_literal = 3,
  sym_octal_integer_literal = 4,
  sym_binary_integer_literal = 5,
  sym_decimal_floating_point_literal = 6,
  sym_hex_floating_point_literal = 7,
  sym_true = 8,
  sym_false = 9,
  sym_character_literal = 10,
  anon_sym_DQUOTE = 11,
  sym_string_fragment = 12,
  sym_escape_sequence = 13,
  sym_null_literal = 14,
  anon_sym_LPAREN = 15,
  anon_sym_AMP = 16,
  anon_sym_RPAREN = 17,
  anon_sym_EQ = 18,
  anon_sym_GT = 19,
  anon_sym_LT = 20,
  anon_sym_GT_EQ = 21,
  anon_sym_LT_EQ = 22,
  anon_sym_EQ_EQ = 23,
  anon_sym_BANG_EQ = 24,
  anon_sym_AMP_AMP = 25,
  anon_sym_PIPE_PIPE = 26,
  anon_sym_PLUS = 27,
  anon_sym_DASH = 28,
  anon_sym_STAR = 29,
  anon_sym_SLASH = 30,
  anon_sym_PIPE = 31,
  anon_sym_CARET = 32,
  anon_sym_PERCENT = 33,
  anon_sym_LT_LT = 34,
  anon_sym_GT_GT = 35,
  anon_sym_GT_GT_GT = 36,
  anon_sym_DASH_GT = 37,
  anon_sym_COMMA = 38,
  anon_sym_LBRACK = 39,
  anon_sym_RBRACK = 40,
  anon_sym_DOT = 41,
  anon_sym_class = 42,
  anon_sym_QMARK = 43,
  anon_sym_extends = 44,
  anon_sym_SEMI = 45,
  anon_sym_LBRACE = 46,
  anon_sym_RBRACE = 47,
  anon_sym_assert = 48,
  anon_sym_COLON = 49,
  anon_sym_return = 50,
  anon_sym_yield = 51,
  anon_sym_AT = 52,
  anon_sym_package = 53,
  anon_sym_import = 54,
  anon_sym_static = 55,
  anon_sym_oneway = 56,
  anon_sym_in = 57,
  anon_sym_out = 58,
  anon_sym_inout = 59,
  anon_sym_default = 60,
  anon_sym_interface = 61,
  anon_sym_byte = 62,
  anon_sym_short = 63,
  anon_sym_int = 64,
  anon_sym_long = 65,
  anon_sym_char = 66,
  anon_sym_float = 67,
  anon_sym_double = 68,
  sym_boolean_type = 69,
  sym_void_type = 70,
  anon_sym_DOT_DOT_DOT = 71,
  anon_sym_throws = 72,
  anon_sym_open = 73,
  anon_sym_module = 74,
  anon_sym_record = 75,
  sym_this = 76,
  sym_super = 77,
  sym_line_comment = 78,
  sym_block_comment = 79,
  sym_program = 80,
  sym__literal = 81,
  sym_string_literal = 82,
  sym_expression = 83,
  sym_cast_expression = 84,
  sym_assignment_expression = 85,
  sym_binary_expression = 86,
  sym_lambda_expression = 87,
  sym_inferred_parameters = 88,
  sym_primary_expression = 89,
  sym_parenthesized_expression = 90,
  sym_class_literal = 91,
  sym_field_access = 92,
  sym_array_access = 93,
  sym_type_arguments = 94,
  sym_wildcard = 95,
  sym__wildcard_bounds = 96,
  sym_dimensions = 97,
  sym_statement = 98,
  sym_block = 99,
  sym_expression_statement = 100,
  sym_assert_statement = 101,
  sym_return_statement = 102,
  sym_yield_statement = 103,
  sym__annotation = 104,
  sym_marker_annotation = 105,
  sym_annotation = 106,
  sym_annotation_argument_list = 107,
  sym_element_value_pair = 108,
  sym__element_value = 109,
  sym_element_value_array_initializer = 110,
  sym_declaration = 111,
  sym_package_declaration = 112,
  sym_import_declaration = 113,
  sym_single_type_import = 114,
  sym_type_import_on_demand = 115,
  sym_single_static_import = 116,
  sym_static_import_on_demand = 117,
  sym_asterisk = 118,
  sym_modifiers = 119,
  sym_type_parameters = 120,
  sym_type_parameter = 121,
  sym_type_bound = 122,
  sym_scoped_identifier = 123,
  sym_interface_declaration = 124,
  sym_interface_body = 125,
  sym__variable_declarator_list = 126,
  sym_variable_declarator = 127,
  sym__type = 128,
  sym__unannotated_type = 129,
  sym_annotated_type = 130,
  sym_scoped_type_identifier = 131,
  sym_generic_type = 132,
  sym_array_type = 133,
  sym_integral_type = 134,
  sym_floating_point_type = 135,
  sym__method_header = 136,
  sym__method_declarator = 137,
  sym_formal_parameters = 138,
  sym_formal_parameter = 139,
  sym_receiver_parameter = 140,
  sym_spread_parameter = 141,
  sym_throws = 142,
  sym_local_variable_declaration = 143,
  sym_method_declaration = 144,
  aux_sym_program_repeat1 = 145,
  aux_sym_string_literal_repeat1 = 146,
  aux_sym_cast_expression_repeat1 = 147,
  aux_sym_inferred_parameters_repeat1 = 148,
  aux_sym_dimensions_expr_repeat1 = 149,
  aux_sym_type_arguments_repeat1 = 150,
  aux_sym_dimensions_repeat1 = 151,
  aux_sym_annotation_argument_list_repeat1 = 152,
  aux_sym_element_value_array_initializer_repeat1 = 153,
  aux_sym_modifiers_repeat1 = 154,
  aux_sym_type_parameters_repeat1 = 155,
  aux_sym_type_bound_repeat1 = 156,
  aux_sym_type_list_repeat1 = 157,
  aux_sym_interface_body_repeat1 = 158,
  aux_sym__variable_declarator_list_repeat1 = 159,
  aux_sym_formal_parameters_repeat1 = 160,
  alias_sym_type_identifier = 161,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_decimal_integer_literal] = "decimal_integer_literal",
  [sym_hex_integer_literal] = "hex_integer_literal",
  [sym_octal_integer_literal] = "octal_integer_literal",
  [sym_binary_integer_literal] = "binary_integer_literal",
  [sym_decimal_floating_point_literal] = "decimal_floating_point_literal",
  [sym_hex_floating_point_literal] = "hex_floating_point_literal",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_character_literal] = "character_literal",
  [anon_sym_DQUOTE] = "\"",
  [sym_string_fragment] = "string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [sym_null_literal] = "null_literal",
  [anon_sym_LPAREN] = "(",
  [anon_sym_AMP] = "&",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_GT_GT_GT] = ">>>",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT] = ".",
  [anon_sym_class] = "class",
  [anon_sym_QMARK] = "\?",
  [anon_sym_extends] = "extends",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_assert] = "assert",
  [anon_sym_COLON] = ":",
  [anon_sym_return] = "return",
  [anon_sym_yield] = "yield",
  [anon_sym_AT] = "@",
  [anon_sym_package] = "package",
  [anon_sym_import] = "import",
  [anon_sym_static] = "static",
  [anon_sym_oneway] = "oneway",
  [anon_sym_in] = "in",
  [anon_sym_out] = "out",
  [anon_sym_inout] = "inout",
  [anon_sym_default] = "default",
  [anon_sym_interface] = "interface",
  [anon_sym_byte] = "byte",
  [anon_sym_short] = "short",
  [anon_sym_int] = "int",
  [anon_sym_long] = "long",
  [anon_sym_char] = "char",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [sym_boolean_type] = "boolean_type",
  [sym_void_type] = "void_type",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_throws] = "throws",
  [anon_sym_open] = "identifier",
  [anon_sym_module] = "identifier",
  [anon_sym_record] = "identifier",
  [sym_this] = "this",
  [sym_super] = "super",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_program] = "program",
  [sym__literal] = "_literal",
  [sym_string_literal] = "string_literal",
  [sym_expression] = "expression",
  [sym_cast_expression] = "cast_expression",
  [sym_assignment_expression] = "assignment_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_lambda_expression] = "lambda_expression",
  [sym_inferred_parameters] = "inferred_parameters",
  [sym_primary_expression] = "primary_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_class_literal] = "class_literal",
  [sym_field_access] = "field_access",
  [sym_array_access] = "array_access",
  [sym_type_arguments] = "type_arguments",
  [sym_wildcard] = "wildcard",
  [sym__wildcard_bounds] = "_wildcard_bounds",
  [sym_dimensions] = "dimensions",
  [sym_statement] = "statement",
  [sym_block] = "block",
  [sym_expression_statement] = "expression_statement",
  [sym_assert_statement] = "assert_statement",
  [sym_return_statement] = "return_statement",
  [sym_yield_statement] = "yield_statement",
  [sym__annotation] = "_annotation",
  [sym_marker_annotation] = "marker_annotation",
  [sym_annotation] = "annotation",
  [sym_annotation_argument_list] = "annotation_argument_list",
  [sym_element_value_pair] = "element_value_pair",
  [sym__element_value] = "_element_value",
  [sym_element_value_array_initializer] = "element_value_array_initializer",
  [sym_declaration] = "declaration",
  [sym_package_declaration] = "package_declaration",
  [sym_import_declaration] = "import_declaration",
  [sym_single_type_import] = "single_type_import",
  [sym_type_import_on_demand] = "type_import_on_demand",
  [sym_single_static_import] = "single_static_import",
  [sym_static_import_on_demand] = "static_import_on_demand",
  [sym_asterisk] = "asterisk",
  [sym_modifiers] = "modifiers",
  [sym_type_parameters] = "type_parameters",
  [sym_type_parameter] = "type_parameter",
  [sym_type_bound] = "type_bound",
  [sym_scoped_identifier] = "scoped_identifier",
  [sym_interface_declaration] = "interface_declaration",
  [sym_interface_body] = "interface_body",
  [sym__variable_declarator_list] = "_variable_declarator_list",
  [sym_variable_declarator] = "variable_declarator",
  [sym__type] = "_type",
  [sym__unannotated_type] = "_unannotated_type",
  [sym_annotated_type] = "annotated_type",
  [sym_scoped_type_identifier] = "scoped_type_identifier",
  [sym_generic_type] = "generic_type",
  [sym_array_type] = "array_type",
  [sym_integral_type] = "integral_type",
  [sym_floating_point_type] = "floating_point_type",
  [sym__method_header] = "_method_header",
  [sym__method_declarator] = "_method_declarator",
  [sym_formal_parameters] = "formal_parameters",
  [sym_formal_parameter] = "formal_parameter",
  [sym_receiver_parameter] = "receiver_parameter",
  [sym_spread_parameter] = "spread_parameter",
  [sym_throws] = "throws",
  [sym_local_variable_declaration] = "local_variable_declaration",
  [sym_method_declaration] = "method_declaration",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_cast_expression_repeat1] = "cast_expression_repeat1",
  [aux_sym_inferred_parameters_repeat1] = "inferred_parameters_repeat1",
  [aux_sym_dimensions_expr_repeat1] = "dimensions_expr_repeat1",
  [aux_sym_type_arguments_repeat1] = "type_arguments_repeat1",
  [aux_sym_dimensions_repeat1] = "dimensions_repeat1",
  [aux_sym_annotation_argument_list_repeat1] = "annotation_argument_list_repeat1",
  [aux_sym_element_value_array_initializer_repeat1] = "element_value_array_initializer_repeat1",
  [aux_sym_modifiers_repeat1] = "modifiers_repeat1",
  [aux_sym_type_parameters_repeat1] = "type_parameters_repeat1",
  [aux_sym_type_bound_repeat1] = "type_bound_repeat1",
  [aux_sym_type_list_repeat1] = "type_list_repeat1",
  [aux_sym_interface_body_repeat1] = "interface_body_repeat1",
  [aux_sym__variable_declarator_list_repeat1] = "_variable_declarator_list_repeat1",
  [aux_sym_formal_parameters_repeat1] = "formal_parameters_repeat1",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_decimal_integer_literal] = sym_decimal_integer_literal,
  [sym_hex_integer_literal] = sym_hex_integer_literal,
  [sym_octal_integer_literal] = sym_octal_integer_literal,
  [sym_binary_integer_literal] = sym_binary_integer_literal,
  [sym_decimal_floating_point_literal] = sym_decimal_floating_point_literal,
  [sym_hex_floating_point_literal] = sym_hex_floating_point_literal,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_character_literal] = sym_character_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_string_fragment] = sym_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_null_literal] = sym_null_literal,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_GT_GT_GT] = anon_sym_GT_GT_GT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_yield] = anon_sym_yield,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_oneway] = anon_sym_oneway,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_inout] = anon_sym_inout,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_short] = anon_sym_short,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_double] = anon_sym_double,
  [sym_boolean_type] = sym_boolean_type,
  [sym_void_type] = sym_void_type,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_throws] = anon_sym_throws,
  [anon_sym_open] = sym_identifier,
  [anon_sym_module] = sym_identifier,
  [anon_sym_record] = sym_identifier,
  [sym_this] = sym_this,
  [sym_super] = sym_super,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_program] = sym_program,
  [sym__literal] = sym__literal,
  [sym_string_literal] = sym_string_literal,
  [sym_expression] = sym_expression,
  [sym_cast_expression] = sym_cast_expression,
  [sym_assignment_expression] = sym_assignment_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_lambda_expression] = sym_lambda_expression,
  [sym_inferred_parameters] = sym_inferred_parameters,
  [sym_primary_expression] = sym_primary_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_class_literal] = sym_class_literal,
  [sym_field_access] = sym_field_access,
  [sym_array_access] = sym_array_access,
  [sym_type_arguments] = sym_type_arguments,
  [sym_wildcard] = sym_wildcard,
  [sym__wildcard_bounds] = sym__wildcard_bounds,
  [sym_dimensions] = sym_dimensions,
  [sym_statement] = sym_statement,
  [sym_block] = sym_block,
  [sym_expression_statement] = sym_expression_statement,
  [sym_assert_statement] = sym_assert_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_yield_statement] = sym_yield_statement,
  [sym__annotation] = sym__annotation,
  [sym_marker_annotation] = sym_marker_annotation,
  [sym_annotation] = sym_annotation,
  [sym_annotation_argument_list] = sym_annotation_argument_list,
  [sym_element_value_pair] = sym_element_value_pair,
  [sym__element_value] = sym__element_value,
  [sym_element_value_array_initializer] = sym_element_value_array_initializer,
  [sym_declaration] = sym_declaration,
  [sym_package_declaration] = sym_package_declaration,
  [sym_import_declaration] = sym_import_declaration,
  [sym_single_type_import] = sym_single_type_import,
  [sym_type_import_on_demand] = sym_type_import_on_demand,
  [sym_single_static_import] = sym_single_static_import,
  [sym_static_import_on_demand] = sym_static_import_on_demand,
  [sym_asterisk] = sym_asterisk,
  [sym_modifiers] = sym_modifiers,
  [sym_type_parameters] = sym_type_parameters,
  [sym_type_parameter] = sym_type_parameter,
  [sym_type_bound] = sym_type_bound,
  [sym_scoped_identifier] = sym_scoped_identifier,
  [sym_interface_declaration] = sym_interface_declaration,
  [sym_interface_body] = sym_interface_body,
  [sym__variable_declarator_list] = sym__variable_declarator_list,
  [sym_variable_declarator] = sym_variable_declarator,
  [sym__type] = sym__type,
  [sym__unannotated_type] = sym__unannotated_type,
  [sym_annotated_type] = sym_annotated_type,
  [sym_scoped_type_identifier] = sym_scoped_type_identifier,
  [sym_generic_type] = sym_generic_type,
  [sym_array_type] = sym_array_type,
  [sym_integral_type] = sym_integral_type,
  [sym_floating_point_type] = sym_floating_point_type,
  [sym__method_header] = sym__method_header,
  [sym__method_declarator] = sym__method_declarator,
  [sym_formal_parameters] = sym_formal_parameters,
  [sym_formal_parameter] = sym_formal_parameter,
  [sym_receiver_parameter] = sym_receiver_parameter,
  [sym_spread_parameter] = sym_spread_parameter,
  [sym_throws] = sym_throws,
  [sym_local_variable_declaration] = sym_local_variable_declaration,
  [sym_method_declaration] = sym_method_declaration,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_cast_expression_repeat1] = aux_sym_cast_expression_repeat1,
  [aux_sym_inferred_parameters_repeat1] = aux_sym_inferred_parameters_repeat1,
  [aux_sym_dimensions_expr_repeat1] = aux_sym_dimensions_expr_repeat1,
  [aux_sym_type_arguments_repeat1] = aux_sym_type_arguments_repeat1,
  [aux_sym_dimensions_repeat1] = aux_sym_dimensions_repeat1,
  [aux_sym_annotation_argument_list_repeat1] = aux_sym_annotation_argument_list_repeat1,
  [aux_sym_element_value_array_initializer_repeat1] = aux_sym_element_value_array_initializer_repeat1,
  [aux_sym_modifiers_repeat1] = aux_sym_modifiers_repeat1,
  [aux_sym_type_parameters_repeat1] = aux_sym_type_parameters_repeat1,
  [aux_sym_type_bound_repeat1] = aux_sym_type_bound_repeat1,
  [aux_sym_type_list_repeat1] = aux_sym_type_list_repeat1,
  [aux_sym_interface_body_repeat1] = aux_sym_interface_body_repeat1,
  [aux_sym__variable_declarator_list_repeat1] = aux_sym__variable_declarator_list_repeat1,
  [aux_sym_formal_parameters_repeat1] = aux_sym_formal_parameters_repeat1,
  [alias_sym_type_identifier] = alias_sym_type_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_octal_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_floating_point_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_floating_point_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_character_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_null_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yield] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_oneway] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [sym_boolean_type] = {
    .visible = true,
    .named = true,
  },
  [sym_void_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_throws] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_record] = {
    .visible = true,
    .named = true,
  },
  [sym_this] = {
    .visible = true,
    .named = true,
  },
  [sym_super] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_cast_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_lambda_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_inferred_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_class_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_field_access] = {
    .visible = true,
    .named = true,
  },
  [sym_array_access] = {
    .visible = true,
    .named = true,
  },
  [sym_type_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard] = {
    .visible = true,
    .named = true,
  },
  [sym__wildcard_bounds] = {
    .visible = false,
    .named = true,
  },
  [sym_dimensions] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assert_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_yield_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__annotation] = {
    .visible = false,
    .named = true,
  },
  [sym_marker_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_element_value_pair] = {
    .visible = true,
    .named = true,
  },
  [sym__element_value] = {
    .visible = false,
    .named = true,
  },
  [sym_element_value_array_initializer] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_package_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_import_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_single_type_import] = {
    .visible = true,
    .named = true,
  },
  [sym_type_import_on_demand] = {
    .visible = true,
    .named = true,
  },
  [sym_single_static_import] = {
    .visible = true,
    .named = true,
  },
  [sym_static_import_on_demand] = {
    .visible = true,
    .named = true,
  },
  [sym_asterisk] = {
    .visible = true,
    .named = true,
  },
  [sym_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_type_bound] = {
    .visible = true,
    .named = true,
  },
  [sym_scoped_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_body] = {
    .visible = true,
    .named = true,
  },
  [sym__variable_declarator_list] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_declarator] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__unannotated_type] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_annotated_type] = {
    .visible = true,
    .named = true,
  },
  [sym_scoped_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_integral_type] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_point_type] = {
    .visible = true,
    .named = true,
  },
  [sym__method_header] = {
    .visible = false,
    .named = true,
  },
  [sym__method_declarator] = {
    .visible = false,
    .named = true,
  },
  [sym_formal_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_formal_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_receiver_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_spread_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_throws] = {
    .visible = true,
    .named = true,
  },
  [sym_local_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_method_declaration] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cast_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inferred_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dimensions_expr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dimensions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_annotation_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_element_value_array_initializer_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modifiers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_bound_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interface_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__variable_declarator_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_formal_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_arguments = 1,
  field_array = 2,
  field_body = 3,
  field_declarator = 4,
  field_dimensions = 5,
  field_element = 6,
  field_field = 7,
  field_index = 8,
  field_key = 9,
  field_left = 10,
  field_member = 11,
  field_name = 12,
  field_object = 13,
  field_operator = 14,
  field_parameters = 15,
  field_right = 16,
  field_scope = 17,
  field_type = 18,
  field_type_name = 19,
  field_type_parameters = 20,
  field_value = 21,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_array] = "array",
  [field_body] = "body",
  [field_declarator] = "declarator",
  [field_dimensions] = "dimensions",
  [field_element] = "element",
  [field_field] = "field",
  [field_index] = "index",
  [field_key] = "key",
  [field_left] = "left",
  [field_member] = "member",
  [field_name] = "name",
  [field_object] = "object",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_right] = "right",
  [field_scope] = "scope",
  [field_type] = "type",
  [field_type_name] = "type_name",
  [field_type_parameters] = "type_parameters",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 2},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 2},
  [11] = {.index = 14, .length = 2},
  [13] = {.index = 16, .length = 3},
  [14] = {.index = 19, .length = 2},
  [15] = {.index = 21, .length = 2},
  [16] = {.index = 23, .length = 2},
  [18] = {.index = 25, .length = 1},
  [19] = {.index = 26, .length = 2},
  [20] = {.index = 28, .length = 2},
  [21] = {.index = 30, .length = 2},
  [22] = {.index = 32, .length = 3},
  [24] = {.index = 35, .length = 2},
  [25] = {.index = 37, .length = 2},
  [26] = {.index = 39, .length = 2},
  [27] = {.index = 41, .length = 1},
  [28] = {.index = 42, .length = 2},
  [30] = {.index = 44, .length = 1},
  [31] = {.index = 45, .length = 3},
  [33] = {.index = 48, .length = 4},
  [34] = {.index = 52, .length = 5},
  [35] = {.index = 57, .length = 2},
  [36] = {.index = 59, .length = 3},
  [37] = {.index = 62, .length = 2},
  [38] = {.index = 64, .length = 2},
  [39] = {.index = 66, .length = 1},
  [40] = {.index = 67, .length = 5},
  [41] = {.index = 72, .length = 5},
  [42] = {.index = 77, .length = 2},
  [43] = {.index = 79, .length = 5},
  [44] = {.index = 84, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 0},
  [2] =
    {field_dimensions, 1},
    {field_element, 0},
  [4] =
    {field_declarator, 0},
  [5] =
    {field_type, 0},
  [6] =
    {field_arguments, 2},
    {field_name, 1},
  [8] =
    {field_body, 2},
    {field_name, 1},
  [10] =
    {field_left, 0},
    {field_right, 2},
  [12] =
    {field_body, 2},
    {field_parameters, 0},
  [14] =
    {field_field, 2},
    {field_object, 0},
  [16] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [19] =
    {field_dimensions, 1},
    {field_name, 0},
  [21] =
    {field_declarator, 1, .inherited = true},
    {field_type, 0},
  [23] =
    {field_declarator, 0},
    {field_declarator, 1, .inherited = true},
  [25] =
    {field_type, 1},
  [26] =
    {field_type, 1},
    {field_value, 3},
  [28] =
    {field_type, 0, .inherited = true},
    {field_type, 1, .inherited = true},
  [30] =
    {field_name, 2},
    {field_scope, 0},
  [32] =
    {field_body, 3},
    {field_name, 1},
    {field_type_parameters, 2},
  [35] =
    {field_array, 0},
    {field_index, 2},
  [37] =
    {field_body, 3},
    {field_name, 2},
  [39] =
    {field_declarator, 2, .inherited = true},
    {field_type, 1},
  [41] =
    {field_declarator, 1},
  [42] =
    {field_declarator, 0, .inherited = true},
    {field_declarator, 1, .inherited = true},
  [44] =
    {field_name, 2},
  [45] =
    {field_type, 1},
    {field_type, 2, .inherited = true},
    {field_value, 4},
  [48] =
    {field_dimensions, 1, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_parameters, 1, .inherited = true},
    {field_type, 0},
  [52] =
    {field_dimensions, 0, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_parameters, 0, .inherited = true},
    {field_type, 0, .inherited = true},
    {field_type_parameters, 0, .inherited = true},
  [57] =
    {field_field, 4},
    {field_object, 0},
  [59] =
    {field_body, 4},
    {field_name, 2},
    {field_type_parameters, 3},
  [62] =
    {field_key, 0},
    {field_value, 2},
  [64] =
    {field_member, 4},
    {field_scope, 2},
  [66] =
    {field_type_name, 2},
  [67] =
    {field_dimensions, 1, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_parameters, 1, .inherited = true},
    {field_type, 1, .inherited = true},
    {field_type_parameters, 1, .inherited = true},
  [72] =
    {field_dimensions, 2, .inherited = true},
    {field_name, 2, .inherited = true},
    {field_parameters, 2, .inherited = true},
    {field_type, 1},
    {field_type_parameters, 0},
  [77] =
    {field_name, 0},
    {field_parameters, 1},
  [79] =
    {field_dimensions, 3, .inherited = true},
    {field_name, 3, .inherited = true},
    {field_parameters, 3, .inherited = true},
    {field_type, 2},
    {field_type_parameters, 0},
  [84] =
    {field_dimensions, 2},
    {field_name, 0},
    {field_parameters, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_type_identifier,
  },
  [12] = {
    [0] = alias_sym_type_identifier,
    [2] = alias_sym_type_identifier,
  },
  [17] = {
    [2] = alias_sym_type_identifier,
  },
  [23] = {
    [0] = alias_sym_type_identifier,
    [3] = alias_sym_type_identifier,
  },
  [29] = {
    [3] = alias_sym_type_identifier,
  },
  [32] = {
    [1] = alias_sym_type_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 9,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 100,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 123,
  [131] = 121,
  [132] = 132,
  [133] = 99,
  [134] = 134,
  [135] = 135,
  [136] = 116,
  [137] = 114,
  [138] = 109,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 111,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 139,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 146,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 170,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 151,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 204,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 232,
  [237] = 237,
  [238] = 230,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 297,
  [325] = 325,
  [326] = 325,
  [327] = 327,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 6688
    ? (c < 2984
      ? (c < 2365
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'a'
                  ? (c >= '$' && c <= '_')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2185
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2544
            ? (c < 2474
              ? (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2654
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2929
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3200
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6103
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43261
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11492 || (c < 12704
          ? (c < 11720
            ? (c < 11631
              ? (c < 11559
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : c <= 11623)))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))))
            : (c <= 11726 || (c < 12353
              ? (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12294 || (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)))
              : (c <= 12438 || (c < 12540
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12735 || (c < 42786
            ? (c < 42240
              ? (c < 19968
                ? (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 13312 || c == 19903))
                : (c <= 19968 || (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : c <= 42237)))
              : (c <= 42508 || (c < 42623
                ? (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : c <= 42783)))))
            : (c <= 42888 || (c < 43015
              ? (c < 42965
                ? (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : c <= 43013)))
              : (c <= 43018 || (c < 43138
                ? (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))))))))))
      : (c <= 43262 || (c < 65345
        ? (c < 43816
          ? (c < 43646
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43503 || (c < 43588
                ? (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44032
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65136
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : c <= 65019)
                : (c <= 65140 || (c < 65313
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66928
          ? (c < 66208
            ? (c < 65549
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 66176
                  ? (c >= 65664 && c <= 65786)
                  : c <= 66204)))))
            : (c <= 66256 || (c < 66504
              ? (c < 66384
                ? (c < 66349
                  ? (c >= 66304 && c <= 66335)
                  : (c <= 66368 || (c >= 66370 && c <= 66377)))
                : (c <= 66421 || (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66511 || (c < 66776
                ? (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66771)
                : (c <= 66811 || (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : c <= 66915)))))))
          : (c <= 66938 || (c < 67506
            ? (c < 67003
              ? (c < 66967
                ? (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : c <= 67001)))
              : (c <= 67004 || (c < 67424
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? c == '$'
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < '_'
                  ? (c >= '$' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 6400
    ? (c < 2979
      ? (c < 2365
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < '_'
                ? (c < '0'
                  ? c == '$'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 170
                  ? (c >= 'a' && c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1749
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2866
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2947
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3872
        ? (c < 3406
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3055 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3200
                  ? (c >= 3174 && c <= 3183)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3664
            ? (c < 3507
              ? (c < 3450
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3430 && c <= 3439)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3585
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3673 || (c < 3762
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3881 || (c < 4802
          ? (c < 4295
            ? (c < 4193
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6112
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6121 || (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))))))))))))
    : (c <= 6430 || (c < 43216
      ? (c < 8490
        ? (c < 7968
          ? (c < 7086
            ? (c < 6784
              ? (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6617)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6793 || (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : c <= 7072)))))
            : (c <= 7141 || (c < 7401
              ? (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))
              : (c <= 7404 || (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))))))
          : (c <= 8005 || (c < 8160
            ? (c < 8064
              ? (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))
              : (c <= 8116 || (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))))
            : (c <= 8172 || (c < 8455
              ? (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))
              : (c <= 8455 || (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))))))))
        : (c <= 8493 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42623
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65296
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64285
            ? (c < 55203
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 65008
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : (c <= 64911 || (c >= 64914 && c <= 64967)))
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65305 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66720
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67463
            ? (c < 66979
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : c <= 66977)))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67647
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : c <= 67644)))
              : (c <= 67669 || (c < 67828
                ? (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(86);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == ';') ADVANCE(104);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '?') ADVANCE(103);
      if (lookahead == '@') ADVANCE(108);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == '^') ADVANCE(92);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '|') ADVANCE(91);
      if (lookahead == '}') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(110);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(86);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == ';') ADVANCE(104);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '?') ADVANCE(103);
      if (lookahead == '@') ADVANCE(108);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == '^') ADVANCE(92);
      if (lookahead == '|') ADVANCE(91);
      if (lookahead == '}') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(110);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(72);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(104);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '?') ADVANCE(103);
      if (lookahead == '@') ADVANCE(108);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(110);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(111);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(109);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 12:
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(4);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(70);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 20:
      if (lookahead == '{') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == '}') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 23:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 24:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(49);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(47);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 36:
      if (eof) ADVANCE(38);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(86);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == ';') ADVANCE(104);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '?') ADVANCE(103);
      if (lookahead == '@') ADVANCE(108);
      if (lookahead == '[') ADVANCE(99);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == '^') ADVANCE(92);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '|') ADVANCE(91);
      if (lookahead == '}') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(110);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '+') ADVANCE(86);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == ';') ADVANCE(104);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '@') ADVANCE(108);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == '^') ADVANCE(92);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '|') ADVANCE(91);
      if (lookahead == '}') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(110);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(24);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(25);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(9);
      if (lookahead == '_') ADVANCE(13);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(22);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(39);
      if (lookahead == '_') ADVANCE(13);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(22);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(42);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(23);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(42);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(42);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_octal_integer_literal);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_octal_integer_literal);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(46);
      if (lookahead == '_') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(48);
      if (lookahead == '_') ADVANCE(24);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(23);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_character_literal);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(84);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(95);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(94);
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(97);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(111);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(85);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(8);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 'p') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == 'y') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(19);
      if (lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == 'h') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == 'x') ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == 'm') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'p') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(38);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 15:
      if (lookahead == 'h') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(50);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(81);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 56:
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(88);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 61:
      if (lookahead == 'w') ADVANCE(91);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 64:
      if (lookahead == 'k') ADVANCE(93);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_this);
      END_STATE();
    case 100:
      if (lookahead == 'w') ADVANCE(123);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_void_type);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(129);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_inout);
      END_STATE();
    case 114:
      if (lookahead == 'f') ADVANCE(131);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 116:
      if (lookahead == 'y') ADVANCE(133);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(134);
      END_STATE();
    case 118:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 121:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_super);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_oneway);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_throws);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_boolean_type);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 142:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 37},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 37},
  [6] = {.lex_state = 37},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 37},
  [9] = {.lex_state = 37},
  [10] = {.lex_state = 37},
  [11] = {.lex_state = 37},
  [12] = {.lex_state = 37},
  [13] = {.lex_state = 37},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 37},
  [16] = {.lex_state = 37},
  [17] = {.lex_state = 37},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 37},
  [20] = {.lex_state = 37},
  [21] = {.lex_state = 37},
  [22] = {.lex_state = 37},
  [23] = {.lex_state = 37},
  [24] = {.lex_state = 37},
  [25] = {.lex_state = 37},
  [26] = {.lex_state = 37},
  [27] = {.lex_state = 37},
  [28] = {.lex_state = 37},
  [29] = {.lex_state = 37},
  [30] = {.lex_state = 37},
  [31] = {.lex_state = 37},
  [32] = {.lex_state = 37},
  [33] = {.lex_state = 37},
  [34] = {.lex_state = 37},
  [35] = {.lex_state = 37},
  [36] = {.lex_state = 37},
  [37] = {.lex_state = 37},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 37},
  [40] = {.lex_state = 37},
  [41] = {.lex_state = 37},
  [42] = {.lex_state = 37},
  [43] = {.lex_state = 37},
  [44] = {.lex_state = 37},
  [45] = {.lex_state = 37},
  [46] = {.lex_state = 37},
  [47] = {.lex_state = 37},
  [48] = {.lex_state = 37},
  [49] = {.lex_state = 37},
  [50] = {.lex_state = 37},
  [51] = {.lex_state = 37},
  [52] = {.lex_state = 37},
  [53] = {.lex_state = 37},
  [54] = {.lex_state = 37},
  [55] = {.lex_state = 37},
  [56] = {.lex_state = 37},
  [57] = {.lex_state = 37},
  [58] = {.lex_state = 37},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 3},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 2},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 3},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 3},
  [225] = {.lex_state = 3},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 3},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 3},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 3},
  [247] = {.lex_state = 3},
  [248] = {.lex_state = 3},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 3},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 3},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 3},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 1},
  [276] = {.lex_state = 3},
  [277] = {.lex_state = 1},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 3},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 3},
  [282] = {.lex_state = 3},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 1},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 3},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 3},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 3},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 1},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 1},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 1},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 1},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_decimal_integer_literal] = ACTIONS(1),
    [sym_hex_integer_literal] = ACTIONS(1),
    [sym_octal_integer_literal] = ACTIONS(1),
    [sym_binary_integer_literal] = ACTIONS(1),
    [sym_decimal_floating_point_literal] = ACTIONS(1),
    [sym_hex_floating_point_literal] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_character_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_null_literal] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_GT_GT_GT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_yield] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_oneway] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_inout] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_short] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [sym_boolean_type] = ACTIONS(1),
    [sym_void_type] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_throws] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [sym_this] = ACTIONS(1),
    [sym_super] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(321),
    [sym__literal] = STATE(75),
    [sym_string_literal] = STATE(74),
    [sym_expression] = STATE(124),
    [sym_cast_expression] = STATE(97),
    [sym_assignment_expression] = STATE(97),
    [sym_binary_expression] = STATE(97),
    [sym_lambda_expression] = STATE(97),
    [sym_inferred_parameters] = STATE(315),
    [sym_primary_expression] = STATE(76),
    [sym_parenthesized_expression] = STATE(75),
    [sym_class_literal] = STATE(75),
    [sym_field_access] = STATE(67),
    [sym_array_access] = STATE(67),
    [sym_statement] = STATE(3),
    [sym_block] = STATE(38),
    [sym_expression_statement] = STATE(38),
    [sym_assert_statement] = STATE(38),
    [sym_return_statement] = STATE(38),
    [sym_yield_statement] = STATE(38),
    [sym__annotation] = STATE(139),
    [sym_marker_annotation] = STATE(139),
    [sym_annotation] = STATE(139),
    [sym_declaration] = STATE(38),
    [sym_package_declaration] = STATE(49),
    [sym_import_declaration] = STATE(49),
    [sym_single_type_import] = STATE(46),
    [sym_type_import_on_demand] = STATE(46),
    [sym_single_static_import] = STATE(46),
    [sym_static_import_on_demand] = STATE(46),
    [sym_modifiers] = STATE(140),
    [sym_interface_declaration] = STATE(49),
    [sym__unannotated_type] = STATE(157),
    [sym_scoped_type_identifier] = STATE(176),
    [sym_generic_type] = STATE(183),
    [sym_array_type] = STATE(165),
    [sym_integral_type] = STATE(165),
    [sym_floating_point_type] = STATE(165),
    [sym_formal_parameters] = STATE(315),
    [sym_local_variable_declaration] = STATE(38),
    [aux_sym_program_repeat1] = STATE(3),
    [aux_sym_dimensions_expr_repeat1] = STATE(199),
    [aux_sym_modifiers_repeat1] = STATE(131),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_decimal_integer_literal] = ACTIONS(9),
    [sym_hex_integer_literal] = ACTIONS(9),
    [sym_octal_integer_literal] = ACTIONS(11),
    [sym_binary_integer_literal] = ACTIONS(11),
    [sym_decimal_floating_point_literal] = ACTIONS(11),
    [sym_hex_floating_point_literal] = ACTIONS(9),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_character_literal] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_null_literal] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_SEMI] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_assert] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_yield] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_package] = ACTIONS(29),
    [anon_sym_import] = ACTIONS(31),
    [anon_sym_oneway] = ACTIONS(33),
    [anon_sym_in] = ACTIONS(33),
    [anon_sym_out] = ACTIONS(33),
    [anon_sym_inout] = ACTIONS(33),
    [anon_sym_interface] = ACTIONS(35),
    [anon_sym_byte] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(37),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_float] = ACTIONS(39),
    [anon_sym_double] = ACTIONS(39),
    [sym_boolean_type] = ACTIONS(41),
    [sym_void_type] = ACTIONS(41),
    [anon_sym_open] = ACTIONS(43),
    [anon_sym_module] = ACTIONS(43),
    [anon_sym_record] = ACTIONS(43),
    [sym_this] = ACTIONS(45),
    [sym_super] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__literal] = STATE(75),
    [sym_string_literal] = STATE(74),
    [sym_expression] = STATE(124),
    [sym_cast_expression] = STATE(97),
    [sym_assignment_expression] = STATE(97),
    [sym_binary_expression] = STATE(97),
    [sym_lambda_expression] = STATE(97),
    [sym_inferred_parameters] = STATE(315),
    [sym_primary_expression] = STATE(76),
    [sym_parenthesized_expression] = STATE(75),
    [sym_class_literal] = STATE(75),
    [sym_field_access] = STATE(67),
    [sym_array_access] = STATE(67),
    [sym_statement] = STATE(2),
    [sym_block] = STATE(38),
    [sym_expression_statement] = STATE(38),
    [sym_assert_statement] = STATE(38),
    [sym_return_statement] = STATE(38),
    [sym_yield_statement] = STATE(38),
    [sym__annotation] = STATE(139),
    [sym_marker_annotation] = STATE(139),
    [sym_annotation] = STATE(139),
    [sym_declaration] = STATE(38),
    [sym_package_declaration] = STATE(49),
    [sym_import_declaration] = STATE(49),
    [sym_single_type_import] = STATE(46),
    [sym_type_import_on_demand] = STATE(46),
    [sym_single_static_import] = STATE(46),
    [sym_static_import_on_demand] = STATE(46),
    [sym_modifiers] = STATE(140),
    [sym_interface_declaration] = STATE(49),
    [sym__unannotated_type] = STATE(157),
    [sym_scoped_type_identifier] = STATE(176),
    [sym_generic_type] = STATE(183),
    [sym_array_type] = STATE(165),
    [sym_integral_type] = STATE(165),
    [sym_floating_point_type] = STATE(165),
    [sym_formal_parameters] = STATE(315),
    [sym_local_variable_declaration] = STATE(38),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_dimensions_expr_repeat1] = STATE(199),
    [aux_sym_modifiers_repeat1] = STATE(131),
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_identifier] = ACTIONS(51),
    [sym_decimal_integer_literal] = ACTIONS(54),
    [sym_hex_integer_literal] = ACTIONS(54),
    [sym_octal_integer_literal] = ACTIONS(57),
    [sym_binary_integer_literal] = ACTIONS(57),
    [sym_decimal_floating_point_literal] = ACTIONS(57),
    [sym_hex_floating_point_literal] = ACTIONS(54),
    [sym_true] = ACTIONS(54),
    [sym_false] = ACTIONS(54),
    [sym_character_literal] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [sym_null_literal] = ACTIONS(54),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_assert] = ACTIONS(72),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_yield] = ACTIONS(78),
    [anon_sym_AT] = ACTIONS(81),
    [anon_sym_package] = ACTIONS(84),
    [anon_sym_import] = ACTIONS(87),
    [anon_sym_oneway] = ACTIONS(90),
    [anon_sym_in] = ACTIONS(90),
    [anon_sym_out] = ACTIONS(90),
    [anon_sym_inout] = ACTIONS(90),
    [anon_sym_interface] = ACTIONS(93),
    [anon_sym_byte] = ACTIONS(96),
    [anon_sym_short] = ACTIONS(96),
    [anon_sym_int] = ACTIONS(96),
    [anon_sym_long] = ACTIONS(96),
    [anon_sym_char] = ACTIONS(96),
    [anon_sym_float] = ACTIONS(99),
    [anon_sym_double] = ACTIONS(99),
    [sym_boolean_type] = ACTIONS(102),
    [sym_void_type] = ACTIONS(102),
    [anon_sym_open] = ACTIONS(105),
    [anon_sym_module] = ACTIONS(105),
    [anon_sym_record] = ACTIONS(105),
    [sym_this] = ACTIONS(108),
    [sym_super] = ACTIONS(111),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__literal] = STATE(75),
    [sym_string_literal] = STATE(74),
    [sym_expression] = STATE(124),
    [sym_cast_expression] = STATE(97),
    [sym_assignment_expression] = STATE(97),
    [sym_binary_expression] = STATE(97),
    [sym_lambda_expression] = STATE(97),
    [sym_inferred_parameters] = STATE(315),
    [sym_primary_expression] = STATE(76),
    [sym_parenthesized_expression] = STATE(75),
    [sym_class_literal] = STATE(75),
    [sym_field_access] = STATE(67),
    [sym_array_access] = STATE(67),
    [sym_statement] = STATE(2),
    [sym_block] = STATE(38),
    [sym_expression_statement] = STATE(38),
    [sym_assert_statement] = STATE(38),
    [sym_return_statement] = STATE(38),
    [sym_yield_statement] = STATE(38),
    [sym__annotation] = STATE(139),
    [sym_marker_annotation] = STATE(139),
    [sym_annotation] = STATE(139),
    [sym_declaration] = STATE(38),
    [sym_package_declaration] = STATE(49),
    [sym_import_declaration] = STATE(49),
    [sym_single_type_import] = STATE(46),
    [sym_type_import_on_demand] = STATE(46),
    [sym_single_static_import] = STATE(46),
    [sym_static_import_on_demand] = STATE(46),
    [sym_modifiers] = STATE(140),
    [sym_interface_declaration] = STATE(49),
    [sym__unannotated_type] = STATE(157),
    [sym_scoped_type_identifier] = STATE(176),
    [sym_generic_type] = STATE(183),
    [sym_array_type] = STATE(165),
    [sym_integral_type] = STATE(165),
    [sym_floating_point_type] = STATE(165),
    [sym_formal_parameters] = STATE(315),
    [sym_local_variable_declaration] = STATE(38),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_dimensions_expr_repeat1] = STATE(199),
    [aux_sym_modifiers_repeat1] = STATE(131),
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_identifier] = ACTIONS(7),
    [sym_decimal_integer_literal] = ACTIONS(9),
    [sym_hex_integer_literal] = ACTIONS(9),
    [sym_octal_integer_literal] = ACTIONS(11),
    [sym_binary_integer_literal] = ACTIONS(11),
    [sym_decimal_floating_point_literal] = ACTIONS(11),
    [sym_hex_floating_point_literal] = ACTIONS(9),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_character_literal] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_null_literal] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_SEMI] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_assert] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_yield] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_package] = ACTIONS(29),
    [anon_sym_import] = ACTIONS(31),
    [anon_sym_oneway] = ACTIONS(33),
    [anon_sym_in] = ACTIONS(33),
    [anon_sym_out] = ACTIONS(33),
    [anon_sym_inout] = ACTIONS(33),
    [anon_sym_interface] = ACTIONS(35),
    [anon_sym_byte] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(37),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_float] = ACTIONS(39),
    [anon_sym_double] = ACTIONS(39),
    [sym_boolean_type] = ACTIONS(41),
    [sym_void_type] = ACTIONS(41),
    [anon_sym_open] = ACTIONS(43),
    [anon_sym_module] = ACTIONS(43),
    [anon_sym_record] = ACTIONS(43),
    [sym_this] = ACTIONS(45),
    [sym_super] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__literal] = STATE(75),
    [sym_string_literal] = STATE(74),
    [sym_expression] = STATE(124),
    [sym_cast_expression] = STATE(97),
    [sym_assignment_expression] = STATE(97),
    [sym_binary_expression] = STATE(97),
    [sym_lambda_expression] = STATE(97),
    [sym_inferred_parameters] = STATE(315),
    [sym_primary_expression] = STATE(76),
    [sym_parenthesized_expression] = STATE(75),
    [sym_class_literal] = STATE(75),
    [sym_field_access] = STATE(67),
    [sym_array_access] = STATE(67),
    [sym_statement] = STATE(5),
    [sym_block] = STATE(38),
    [sym_expression_statement] = STATE(38),
    [sym_assert_statement] = STATE(38),
    [sym_return_statement] = STATE(38),
    [sym_yield_statement] = STATE(38),
    [sym__annotation] = STATE(139),
    [sym_marker_annotation] = STATE(139),
    [sym_annotation] = STATE(139),
    [sym_declaration] = STATE(38),
    [sym_package_declaration] = STATE(49),
    [sym_import_declaration] = STATE(49),
    [sym_single_type_import] = STATE(46),
    [sym_type_import_on_demand] = STATE(46),
    [sym_single_static_import] = STATE(46),
    [sym_static_import_on_demand] = STATE(46),
    [sym_modifiers] = STATE(140),
    [sym_interface_declaration] = STATE(49),
    [sym__unannotated_type] = STATE(157),
    [sym_scoped_type_identifier] = STATE(176),
    [sym_generic_type] = STATE(183),
    [sym_array_type] = STATE(165),
    [sym_integral_type] = STATE(165),
    [sym_floating_point_type] = STATE(165),
    [sym_formal_parameters] = STATE(315),
    [sym_local_variable_declaration] = STATE(38),
    [aux_sym_program_repeat1] = STATE(5),
    [aux_sym_dimensions_expr_repeat1] = STATE(199),
    [aux_sym_modifiers_repeat1] = STATE(131),
    [sym_identifier] = ACTIONS(7),
    [sym_decimal_integer_literal] = ACTIONS(9),
    [sym_hex_integer_literal] = ACTIONS(9),
    [sym_octal_integer_literal] = ACTIONS(11),
    [sym_binary_integer_literal] = ACTIONS(11),
    [sym_decimal_floating_point_literal] = ACTIONS(11),
    [sym_hex_floating_point_literal] = ACTIONS(9),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_character_literal] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_null_literal] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_SEMI] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_assert] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_yield] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_package] = ACTIONS(29),
    [anon_sym_import] = ACTIONS(31),
    [anon_sym_oneway] = ACTIONS(33),
    [anon_sym_in] = ACTIONS(33),
    [anon_sym_out] = ACTIONS(33),
    [anon_sym_inout] = ACTIONS(33),
    [anon_sym_interface] = ACTIONS(35),
    [anon_sym_byte] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(37),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_float] = ACTIONS(39),
    [anon_sym_double] = ACTIONS(39),
    [sym_boolean_type] = ACTIONS(41),
    [sym_void_type] = ACTIONS(41),
    [anon_sym_open] = ACTIONS(43),
    [anon_sym_module] = ACTIONS(43),
    [anon_sym_record] = ACTIONS(43),
    [sym_this] = ACTIONS(45),
    [sym_super] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__literal] = STATE(75),
    [sym_string_literal] = STATE(74),
    [sym_expression] = STATE(124),
    [sym_cast_expression] = STATE(97),
    [sym_assignment_expression] = STATE(97),
    [sym_binary_expression] = STATE(97),
    [sym_lambda_expression] = STATE(97),
    [sym_inferred_parameters] = STATE(315),
    [sym_primary_expression] = STATE(76),
    [sym_parenthesized_expression] = STATE(75),
    [sym_class_literal] = STATE(75),
    [sym_field_access] = STATE(67),
    [sym_array_access] = STATE(67),
    [sym_statement] = STATE(2),
    [sym_block] = STATE(38),
    [sym_expression_statement] = STATE(38),
    [sym_assert_statement] = STATE(38),
    [sym_return_statement] = STATE(38),
    [sym_yield_statement] = STATE(38),
    [sym__annotation] = STATE(139),
    [sym_marker_annotation] = STATE(139),
    [sym_annotation] = STATE(139),
    [sym_declaration] = STATE(38),
    [sym_package_declaration] = STATE(49),
    [sym_import_declaration] = STATE(49),
    [sym_single_type_import] = STATE(46),
    [sym_type_import_on_demand] = STATE(46),
    [sym_single_static_import] = STATE(46),
    [sym_static_import_on_demand] = STATE(46),
    [sym_modifiers] = STATE(140),
    [sym_interface_declaration] = STATE(49),
    [sym__unannotated_type] = STATE(157),
    [sym_scoped_type_identifier] = STATE(176),
    [sym_generic_type] = STATE(183),
    [sym_array_type] = STATE(165),
    [sym_integral_type] = STATE(165),
    [sym_floating_point_type] = STATE(165),
    [sym_formal_parameters] = STATE(315),
    [sym_local_variable_declaration] = STATE(38),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_dimensions_expr_repeat1] = STATE(199),
    [aux_sym_modifiers_repeat1] = STATE(131),
    [sym_identifier] = ACTIONS(7),
    [sym_decimal_integer_literal] = ACTIONS(9),
    [sym_hex_integer_literal] = ACTIONS(9),
    [sym_octal_integer_literal] = ACTIONS(11),
    [sym_binary_integer_literal] = ACTIONS(11),
    [sym_decimal_floating_point_literal] = ACTIONS(11),
    [sym_hex_floating_point_literal] = ACTIONS(9),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_character_literal] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_null_literal] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_SEMI] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(118),
    [anon_sym_assert] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [anon_sym_yield] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_package] = ACTIONS(29),
    [anon_sym_import] = ACTIONS(31),
    [anon_sym_oneway] = ACTIONS(33),
    [anon_sym_in] = ACTIONS(33),
    [anon_sym_out] = ACTIONS(33),
    [anon_sym_inout] = ACTIONS(33),
    [anon_sym_interface] = ACTIONS(35),
    [anon_sym_byte] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(37),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_float] = ACTIONS(39),
    [anon_sym_double] = ACTIONS(39),
    [sym_boolean_type] = ACTIONS(41),
    [sym_void_type] = ACTIONS(41),
    [anon_sym_open] = ACTIONS(43),
    [anon_sym_module] = ACTIONS(43),
    [anon_sym_record] = ACTIONS(43),
    [sym_this] = ACTIONS(45),
    [sym_super] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym_identifier] = ACTIONS(122),
    [sym_decimal_integer_literal] = ACTIONS(122),
    [sym_hex_integer_literal] = ACTIONS(122),
    [sym_octal_integer_literal] = ACTIONS(120),
    [sym_binary_integer_literal] = ACTIONS(120),
    [sym_decimal_floating_point_literal] = ACTIONS(120),
    [sym_hex_floating_point_literal] = ACTIONS(122),
    [sym_true] = ACTIONS(122),
    [sym_false] = ACTIONS(122),
    [sym_character_literal] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(120),
    [sym_null_literal] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_AMP] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_AMP_AMP] = ACTIONS(120),
    [anon_sym_PIPE_PIPE] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_CARET] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(120),
    [anon_sym_LT_LT] = ACTIONS(120),
    [anon_sym_GT_GT] = ACTIONS(122),
    [anon_sym_GT_GT_GT] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(120),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_assert] = ACTIONS(122),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_return] = ACTIONS(122),
    [anon_sym_yield] = ACTIONS(122),
    [anon_sym_AT] = ACTIONS(120),
    [anon_sym_package] = ACTIONS(122),
    [anon_sym_import] = ACTIONS(122),
    [anon_sym_oneway] = ACTIONS(122),
    [anon_sym_in] = ACTIONS(122),
    [anon_sym_out] = ACTIONS(122),
    [anon_sym_inout] = ACTIONS(122),
    [anon_sym_interface] = ACTIONS(122),
    [anon_sym_byte] = ACTIONS(122),
    [anon_sym_short] = ACTIONS(122),
    [anon_sym_int] = ACTIONS(122),
    [anon_sym_long] = ACTIONS(122),
    [anon_sym_char] = ACTIONS(122),
    [anon_sym_float] = ACTIONS(122),
    [anon_sym_double] = ACTIONS(122),
    [sym_boolean_type] = ACTIONS(122),
    [sym_void_type] = ACTIONS(122),
    [anon_sym_open] = ACTIONS(122),
    [anon_sym_module] = ACTIONS(122),
    [anon_sym_record] = ACTIONS(122),
    [sym_this] = ACTIONS(122),
    [sym_super] = ACTIONS(122),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(124),
    [sym_identifier] = ACTIONS(126),
    [sym_decimal_integer_literal] = ACTIONS(126),
    [sym_hex_integer_literal] = ACTIONS(126),
    [sym_octal_integer_literal] = ACTIONS(124),
    [sym_binary_integer_literal] = ACTIONS(124),
    [sym_decimal_floating_point_literal] = ACTIONS(124),
    [sym_hex_floating_point_literal] = ACTIONS(126),
    [sym_true] = ACTIONS(126),
    [sym_false] = ACTIONS(126),
    [sym_character_literal] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(124),
    [sym_null_literal] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(124),
    [anon_sym_AMP] = ACTIONS(126),
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(126),
    [anon_sym_GT_EQ] = ACTIONS(124),
    [anon_sym_LT_EQ] = ACTIONS(124),
    [anon_sym_EQ_EQ] = ACTIONS(124),
    [anon_sym_BANG_EQ] = ACTIONS(124),
    [anon_sym_AMP_AMP] = ACTIONS(124),
    [anon_sym_PIPE_PIPE] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym_STAR] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(126),
    [anon_sym_PIPE] = ACTIONS(126),
    [anon_sym_CARET] = ACTIONS(124),
    [anon_sym_PERCENT] = ACTIONS(124),
    [anon_sym_LT_LT] = ACTIONS(124),
    [anon_sym_GT_GT] = ACTIONS(126),
    [anon_sym_GT_GT_GT] = ACTIONS(124),
    [anon_sym_COMMA] = ACTIONS(124),
    [anon_sym_RBRACK] = ACTIONS(124),
    [anon_sym_SEMI] = ACTIONS(124),
    [anon_sym_LBRACE] = ACTIONS(124),
    [anon_sym_RBRACE] = ACTIONS(124),
    [anon_sym_assert] = ACTIONS(126),
    [anon_sym_COLON] = ACTIONS(124),
    [anon_sym_return] = ACTIONS(126),
    [anon_sym_yield] = ACTIONS(126),
    [anon_sym_AT] = ACTIONS(124),
    [anon_sym_package] = ACTIONS(126),
    [anon_sym_import] = ACTIONS(126),
    [anon_sym_oneway] = ACTIONS(126),
    [anon_sym_in] = ACTIONS(126),
    [anon_sym_out] = ACTIONS(126),
    [anon_sym_inout] = ACTIONS(126),
    [anon_sym_interface] = ACTIONS(126),
    [anon_sym_byte] = ACTIONS(126),
    [anon_sym_short] = ACTIONS(126),
    [anon_sym_int] = ACTIONS(126),
    [anon_sym_long] = ACTIONS(126),
    [anon_sym_char] = ACTIONS(126),
    [anon_sym_float] = ACTIONS(126),
    [anon_sym_double] = ACTIONS(126),
    [sym_boolean_type] = ACTIONS(126),
    [sym_void_type] = ACTIONS(126),
    [anon_sym_open] = ACTIONS(126),
    [anon_sym_module] = ACTIONS(126),
    [anon_sym_record] = ACTIONS(126),
    [sym_this] = ACTIONS(126),
    [sym_super] = ACTIONS(126),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__literal] = STATE(75),
    [sym_string_literal] = STATE(74),
    [sym_expression] = STATE(132),
    [sym_cast_expression] = STATE(97),
    [sym_assignment_expression] = STATE(97),
    [sym_binary_expression] = STATE(97),
    [sym_lambda_expression] = STATE(97),
    [sym_inferred_parameters] = STATE(315),
    [sym_primary_expression] = STATE(76),
    [sym_parenthesized_expression] = STATE(75),
    [sym_class_literal] = STATE(75),
    [sym_field_access] = STATE(67),
    [sym_array_access] = STATE(67),
    [sym__annotation] = STATE(155),
    [sym_marker_annotation] = STATE(155),
    [sym_annotation] = STATE(155),
    [sym_modifiers] = STATE(148),
    [sym__type] = STATE(237),
    [sym__unannotated_type] = STATE(135),
    [sym_annotated_type] = STATE(215),
    [sym_scoped_type_identifier] = STATE(176),
    [sym_generic_type] = STATE(183),
    [sym_array_type] = STATE(165),
    [sym_integral_type] = STATE(165),
    [sym_floating_point_type] = STATE(165),
    [sym_formal_parameters] = STATE(315),
    [sym_formal_parameter] = STATE(239),
    [sym_receiver_parameter] = STATE(66),
    [sym_spread_parameter] = STATE(239),
    [aux_sym_dimensions_expr_repeat1] = STATE(117),
    [aux_sym_modifiers_repeat1] = STATE(121),
    [sym_identifier] = ACTIONS(128),
    [sym_decimal_integer_literal] = ACTIONS(9),
    [sym_hex_integer_literal] = ACTIONS(9),
    [sym_octal_integer_literal] = ACTIONS(11),
    [sym_binary_integer_literal] = ACTIONS(11),
    [sym_decimal_floating_point_literal] = ACTIONS(11),
    [sym_hex_floating_point_literal] = ACTIONS(9),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_character_literal] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_null_literal] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(130),
    [anon_sym_AT] = ACTIONS(132),
    [anon_sym_oneway] = ACTIONS(134),
    [anon_sym_in] = ACTIONS(134),
    [anon_sym_out] = ACTIONS(134),
    [anon_sym_inout] = ACTIONS(134),
    [anon_sym_byte] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(37),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_float] = ACTIONS(39),
    [anon_sym_double] = ACTIONS(39),
    [sym_boolean_type] = ACTIONS(41),
    [sym_void_type] = ACTIONS(41),
    [anon_sym_open] = ACTIONS(136),
    [anon_sym_module] = ACTIONS(136),
    [anon_sym_record] = ACTIONS(136),
    [sym_this] = ACTIONS(45),
    [sym_super] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 28,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      sym_this,
    ACTIONS(47), 1,
      sym_super,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_string_literal,
    STATE(76), 1,
      sym_primary_expression,
    STATE(107), 1,
      sym_expression,
    STATE(176), 1,
      sym_scoped_type_identifier,
    STATE(183), 1,
      sym_generic_type,
    STATE(188), 1,
      sym__unannotated_type,
    STATE(232), 1,
      sym_element_value_pair,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(67), 2,
      sym_field_access,
      sym_array_access,
    STATE(315), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(75), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(97), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    STATE(326), 5,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      sym__element_value,
      sym_element_value_array_initializer,
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [115] = 28,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      sym_this,
    ACTIONS(47), 1,
      sym_super,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      sym_string_literal,
    STATE(76), 1,
      sym_primary_expression,
    STATE(107), 1,
      sym_expression,
    STATE(176), 1,
      sym_scoped_type_identifier,
    STATE(183), 1,
      sym_generic_type,
    STATE(188), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(67), 2,
      sym_field_access,
      sym_array_access,
    STATE(315), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(75), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(97), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    STATE(234), 5,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      sym__element_value,
      sym_element_value_array_initializer,
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [230] = 28,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      sym_this,
    ACTIONS(47), 1,
      sym_super,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      sym_string_literal,
    STATE(76), 1,
      sym_primary_expression,
    STATE(107), 1,
      sym_expression,
    STATE(176), 1,
      sym_scoped_type_identifier,
    STATE(183), 1,
      sym_generic_type,
    STATE(188), 1,
      sym__unannotated_type,
    STATE(236), 1,
      sym_element_value_pair,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(67), 2,
      sym_field_access,
      sym_array_access,
    STATE(315), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(75), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(97), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    STATE(325), 5,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      sym__element_value,
      sym_element_value_array_initializer,
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [345] = 27,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      sym_this,
    ACTIONS(47), 1,
      sym_super,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      sym_string_literal,
    STATE(76), 1,
      sym_primary_expression,
    STATE(107), 1,
      sym_expression,
    STATE(176), 1,
      sym_scoped_type_identifier,
    STATE(183), 1,
      sym_generic_type,
    STATE(188), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(67), 2,
      sym_field_access,
      sym_array_access,
    STATE(315), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(75), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(97), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    STATE(288), 5,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      sym__element_value,
      sym_element_value_array_initializer,
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [457] = 27,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      sym_this,
    ACTIONS(47), 1,
      sym_super,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      sym_string_literal,
    STATE(76), 1,
      sym_primary_expression,
    STATE(107), 1,
      sym_expression,
    STATE(176), 1,
      sym_scoped_type_identifier,
    STATE(183), 1,
      sym_generic_type,
    STATE(188), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(67), 2,
      sym_field_access,
      sym_array_access,
    STATE(315), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(75), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(97), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    STATE(288), 5,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      sym__element_value,
      sym_element_value_array_initializer,
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [569] = 26,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      sym_this,
    ACTIONS(47), 1,
      sym_super,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_string_literal,
    STATE(76), 1,
      sym_primary_expression,
    STATE(107), 1,
      sym_expression,
    STATE(176), 1,
      sym_scoped_type_identifier,
    STATE(183), 1,
      sym_generic_type,
    STATE(188), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(67), 2,
      sym_field_access,
      sym_array_access,
    STATE(315), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(75), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(97), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    STATE(284), 5,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      sym__element_value,
      sym_element_value_array_initializer,
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [678] = 26,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      sym_this,
    ACTIONS(47), 1,
      sym_super,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_string_literal,
    STATE(76), 1,
      sym_primary_expression,
    STATE(107), 1,
      sym_expression,
    STATE(176), 1,
      sym_scoped_type_identifier,
    STATE(183), 1,
      sym_generic_type,
    STATE(188), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(67), 2,
      sym_field_access,
      sym_array_access,
    STATE(315), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(75), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(97), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    STATE(288), 5,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      sym__element_value,
      sym_element_value_array_initializer,
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [787] = 26,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      sym_this,
    ACTIONS(47), 1,
      sym_super,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_string_literal,
    STATE(76), 1,
      sym_primary_expression,
    STATE(110), 1,
      sym_expression,
    STATE(176), 1,
      sym_scoped_type_identifier,
    STATE(183), 1,
      sym_generic_type,
    STATE(188), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(67), 2,
      sym_field_access,
      sym_array_access,
    STATE(315), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(75), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(97), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    STATE(284), 5,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      sym__element_value,
      sym_element_value_array_initializer,
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [896] = 25,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym_this,
    ACTIONS(47), 1,
      sym_super,
    STATE(74), 1,
      sym_string_literal,
    STATE(76), 1,
      sym_primary_expression,
    STATE(86), 1,
      sym_block,
    STATE(88), 1,
      sym_expression,
    STATE(176), 1,
      sym_scoped_type_identifier,
    STATE(183), 1,
      sym_generic_type,
    STATE(188), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(67), 2,
      sym_field_access,
      sym_array_access,
    STATE(315), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(75), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(97), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [998] = 24,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_this,
    ACTIONS(47), 1,
      sym_super,
    ACTIONS(154), 1,
      anon_sym_SEMI,
    STATE(74), 1,
      sym_string_literal,
    STATE(76), 1,
      sym_primary_expression,
    STATE(120), 1,
      sym_expression,
    STATE(176), 1,
      sym_scoped_type_identifier,
    STATE(183), 1,
      sym_generic_type,
    STATE(188), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(67), 2,
      sym_field_access,
      sym_array_access,
    STATE(315), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(75), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(97), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [1097] = 23,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_this,
    ACTIONS(47), 1,
      sym_super,
    STATE(74), 1,
      sym_string_literal,
    STATE(76), 1,
      sym_primary_expression,
    STATE(125), 1,
      sym_expression,
    STATE(176), 1,
      sym_scoped_type_identifier,
    STATE(183), 1,
      sym_generic_type,
    STATE(188), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(67), 2,
      sym_field_access,
      sym_array_access,
    STATE(315), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(75), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(97), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [1193] = 23,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_this,
    ACTIONS(47), 1,
      sym_super,
    STATE(74), 1,
      sym_string_literal,
    STATE(76), 1,
      sym_primary_expression,
    STATE(126), 1,
      sym_expression,
    STATE(176), 1,
      sym_scoped_type_identifier,
    STATE(183), 1,
      sym_generic_type,
    STATE(188), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(67), 2,
      sym_field_access,
      sym_array_access,
    STATE(315), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(75), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(97), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [1289] = 23,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_this,
    ACTIONS(47), 1,
      sym_super,
    STATE(74), 1,
      sym_string_literal,
    STATE(76), 1,
      sym_primary_expression,
    STATE(94), 1,
      sym_expression,
    STATE(176), 1,
      sym_scoped_type_identifier,
    STATE(183), 1,
      sym_generic_type,
    STATE(188), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(67), 2,
      sym_field_access,
      sym_array_access,
    STATE(315), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(75), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(97), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [1385] = 23,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_this,
    ACTIONS(47), 1,
      sym_super,
    STATE(74), 1,
      sym_string_literal,
    STATE(76), 1,
      sym_primary_expression,
    STATE(92), 1,
      sym_expression,
    STATE(176), 1,
      sym_scoped_type_identifier,
    STATE(183), 1,
      sym_generic_type,
    STATE(188), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(67), 2,
      sym_field_access,
      sym_array_access,
    STATE(315), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(75), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(97), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [1481] = 23,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_this,
    ACTIONS(47), 1,
      sym_super,
    STATE(74), 1,
      sym_string_literal,
    STATE(76), 1,
      sym_primary_expression,
    STATE(89), 1,
      sym_expression,
    STATE(176), 1,
      sym_scoped_type_identifier,
    STATE(183), 1,
      sym_generic_type,
    STATE(188), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(67), 2,
      sym_field_access,
      sym_array_access,
    STATE(315), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(75), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(97), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [1577] = 23,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_this,
    ACTIONS(47), 1,
      sym_super,
    STATE(74), 1,
      sym_string_literal,
    STATE(76), 1,
      sym_primary_expression,
    STATE(90), 1,
      sym_expression,
    STATE(176), 1,
      sym_scoped_type_identifier,
    STATE(183), 1,
      sym_generic_type,
    STATE(188), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(67), 2,
      sym_field_access,
      sym_array_access,
    STATE(315), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(75), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(97), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [1673] = 23,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_this,
    ACTIONS(47), 1,
      sym_super,
    STATE(74), 1,
      sym_string_literal,
    STATE(76), 1,
      sym_primary_expression,
    STATE(95), 1,
      sym_expression,
    STATE(176), 1,
      sym_scoped_type_identifier,
    STATE(183), 1,
      sym_generic_type,
    STATE(188), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(67), 2,
      sym_field_access,
      sym_array_access,
    STATE(315), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(75), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(97), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [1769] = 23,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_this,
    ACTIONS(47), 1,
      sym_super,
    STATE(74), 1,
      sym_string_literal,
    STATE(76), 1,
      sym_primary_expression,
    STATE(93), 1,
      sym_expression,
    STATE(176), 1,
      sym_scoped_type_identifier,
    STATE(183), 1,
      sym_generic_type,
    STATE(188), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(67), 2,
      sym_field_access,
      sym_array_access,
    STATE(315), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(75), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(97), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [1865] = 23,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_this,
    ACTIONS(47), 1,
      sym_super,
    STATE(74), 1,
      sym_string_literal,
    STATE(76), 1,
      sym_primary_expression,
    STATE(84), 1,
      sym_expression,
    STATE(176), 1,
      sym_scoped_type_identifier,
    STATE(183), 1,
      sym_generic_type,
    STATE(188), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(67), 2,
      sym_field_access,
      sym_array_access,
    STATE(315), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(75), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(97), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [1961] = 23,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_this,
    ACTIONS(47), 1,
      sym_super,
    STATE(74), 1,
      sym_string_literal,
    STATE(76), 1,
      sym_primary_expression,
    STATE(82), 1,
      sym_expression,
    STATE(176), 1,
      sym_scoped_type_identifier,
    STATE(183), 1,
      sym_generic_type,
    STATE(188), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(67), 2,
      sym_field_access,
      sym_array_access,
    STATE(315), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(75), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(97), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [2057] = 23,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_this,
    ACTIONS(47), 1,
      sym_super,
    STATE(74), 1,
      sym_string_literal,
    STATE(76), 1,
      sym_primary_expression,
    STATE(98), 1,
      sym_expression,
    STATE(176), 1,
      sym_scoped_type_identifier,
    STATE(183), 1,
      sym_generic_type,
    STATE(188), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(67), 2,
      sym_field_access,
      sym_array_access,
    STATE(315), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(75), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(97), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [2153] = 23,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_this,
    ACTIONS(47), 1,
      sym_super,
    STATE(74), 1,
      sym_string_literal,
    STATE(76), 1,
      sym_primary_expression,
    STATE(128), 1,
      sym_expression,
    STATE(176), 1,
      sym_scoped_type_identifier,
    STATE(183), 1,
      sym_generic_type,
    STATE(188), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(67), 2,
      sym_field_access,
      sym_array_access,
    STATE(315), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(75), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(97), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [2249] = 23,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_this,
    ACTIONS(47), 1,
      sym_super,
    STATE(74), 1,
      sym_string_literal,
    STATE(76), 1,
      sym_primary_expression,
    STATE(85), 1,
      sym_expression,
    STATE(176), 1,
      sym_scoped_type_identifier,
    STATE(183), 1,
      sym_generic_type,
    STATE(188), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(67), 2,
      sym_field_access,
      sym_array_access,
    STATE(315), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(75), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(97), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [2345] = 23,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_this,
    ACTIONS(47), 1,
      sym_super,
    STATE(74), 1,
      sym_string_literal,
    STATE(76), 1,
      sym_primary_expression,
    STATE(96), 1,
      sym_expression,
    STATE(176), 1,
      sym_scoped_type_identifier,
    STATE(183), 1,
      sym_generic_type,
    STATE(188), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(67), 2,
      sym_field_access,
      sym_array_access,
    STATE(315), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(75), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(97), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [2441] = 23,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_this,
    ACTIONS(47), 1,
      sym_super,
    STATE(74), 1,
      sym_string_literal,
    STATE(76), 1,
      sym_primary_expression,
    STATE(83), 1,
      sym_expression,
    STATE(176), 1,
      sym_scoped_type_identifier,
    STATE(183), 1,
      sym_generic_type,
    STATE(188), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(67), 2,
      sym_field_access,
      sym_array_access,
    STATE(315), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(75), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(97), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [2537] = 23,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_this,
    ACTIONS(47), 1,
      sym_super,
    STATE(74), 1,
      sym_string_literal,
    STATE(76), 1,
      sym_primary_expression,
    STATE(118), 1,
      sym_expression,
    STATE(176), 1,
      sym_scoped_type_identifier,
    STATE(183), 1,
      sym_generic_type,
    STATE(188), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(67), 2,
      sym_field_access,
      sym_array_access,
    STATE(315), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(75), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(97), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [2633] = 23,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_this,
    ACTIONS(47), 1,
      sym_super,
    STATE(74), 1,
      sym_string_literal,
    STATE(76), 1,
      sym_primary_expression,
    STATE(91), 1,
      sym_expression,
    STATE(176), 1,
      sym_scoped_type_identifier,
    STATE(183), 1,
      sym_generic_type,
    STATE(188), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(67), 2,
      sym_field_access,
      sym_array_access,
    STATE(315), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(75), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(97), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [2729] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(156), 11,
      ts_builtin_sym_end,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(158), 31,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_yield,
      anon_sym_package,
      anon_sym_import,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_super,
      sym_identifier,
  [2780] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(160), 11,
      ts_builtin_sym_end,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(162), 31,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_yield,
      anon_sym_package,
      anon_sym_import,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_super,
      sym_identifier,
  [2831] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(164), 11,
      ts_builtin_sym_end,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(166), 31,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_yield,
      anon_sym_package,
      anon_sym_import,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_super,
      sym_identifier,
  [2882] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(168), 11,
      ts_builtin_sym_end,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(170), 31,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_yield,
      anon_sym_package,
      anon_sym_import,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_super,
      sym_identifier,
  [2933] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(172), 11,
      ts_builtin_sym_end,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(174), 31,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_yield,
      anon_sym_package,
      anon_sym_import,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_super,
      sym_identifier,
  [2984] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(176), 11,
      ts_builtin_sym_end,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(178), 31,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_yield,
      anon_sym_package,
      anon_sym_import,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_super,
      sym_identifier,
  [3035] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(180), 11,
      ts_builtin_sym_end,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(182), 31,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_yield,
      anon_sym_package,
      anon_sym_import,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_super,
      sym_identifier,
  [3086] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(184), 11,
      ts_builtin_sym_end,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(186), 31,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_yield,
      anon_sym_package,
      anon_sym_import,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_super,
      sym_identifier,
  [3137] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(188), 11,
      ts_builtin_sym_end,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(190), 31,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_yield,
      anon_sym_package,
      anon_sym_import,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_super,
      sym_identifier,
  [3188] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(192), 11,
      ts_builtin_sym_end,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(194), 31,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_yield,
      anon_sym_package,
      anon_sym_import,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_super,
      sym_identifier,
  [3239] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(196), 11,
      ts_builtin_sym_end,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(198), 31,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_yield,
      anon_sym_package,
      anon_sym_import,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_super,
      sym_identifier,
  [3290] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(200), 11,
      ts_builtin_sym_end,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(202), 31,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_yield,
      anon_sym_package,
      anon_sym_import,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_super,
      sym_identifier,
  [3341] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(204), 11,
      ts_builtin_sym_end,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(206), 31,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_yield,
      anon_sym_package,
      anon_sym_import,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_super,
      sym_identifier,
  [3392] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(208), 11,
      ts_builtin_sym_end,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(210), 31,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_yield,
      anon_sym_package,
      anon_sym_import,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_super,
      sym_identifier,
  [3443] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(212), 11,
      ts_builtin_sym_end,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(214), 31,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_yield,
      anon_sym_package,
      anon_sym_import,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_super,
      sym_identifier,
  [3494] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(216), 11,
      ts_builtin_sym_end,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(218), 31,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_yield,
      anon_sym_package,
      anon_sym_import,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_super,
      sym_identifier,
  [3545] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(220), 11,
      ts_builtin_sym_end,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(222), 31,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_yield,
      anon_sym_package,
      anon_sym_import,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_super,
      sym_identifier,
  [3596] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(224), 11,
      ts_builtin_sym_end,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(226), 31,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_yield,
      anon_sym_package,
      anon_sym_import,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_super,
      sym_identifier,
  [3647] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(228), 11,
      ts_builtin_sym_end,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(230), 31,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_yield,
      anon_sym_package,
      anon_sym_import,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_super,
      sym_identifier,
  [3698] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(232), 11,
      ts_builtin_sym_end,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(234), 31,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_yield,
      anon_sym_package,
      anon_sym_import,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_super,
      sym_identifier,
  [3749] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(236), 11,
      ts_builtin_sym_end,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(238), 31,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_yield,
      anon_sym_package,
      anon_sym_import,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_super,
      sym_identifier,
  [3800] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(240), 11,
      ts_builtin_sym_end,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(242), 31,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_yield,
      anon_sym_package,
      anon_sym_import,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_super,
      sym_identifier,
  [3851] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(244), 11,
      ts_builtin_sym_end,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(246), 31,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
      anon_sym_assert,
      anon_sym_return,
      anon_sym_yield,
      anon_sym_package,
      anon_sym_import,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_super,
      sym_identifier,
  [3902] = 11,
    ACTIONS(254), 1,
      anon_sym_EQ,
    ACTIONS(256), 1,
      anon_sym_LT,
    ACTIONS(259), 1,
      anon_sym_DASH_GT,
    ACTIONS(261), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_AT,
    STATE(162), 1,
      sym_type_arguments,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(248), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
    ACTIONS(250), 6,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(252), 18,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [3962] = 15,
    ACTIONS(254), 1,
      anon_sym_EQ,
    ACTIONS(256), 1,
      anon_sym_LT,
    ACTIONS(259), 1,
      anon_sym_DASH_GT,
    ACTIONS(261), 1,
      anon_sym_LBRACK,
    ACTIONS(270), 1,
      anon_sym_AMP,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_DOT,
    STATE(162), 1,
      sym_type_arguments,
    STATE(254), 1,
      aux_sym_inferred_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(268), 2,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(248), 5,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(250), 5,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(252), 12,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [4029] = 18,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(286), 1,
      anon_sym_LT,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    ACTIONS(291), 1,
      anon_sym_AT,
    STATE(113), 1,
      sym_type_parameters,
    STATE(134), 1,
      sym_modifiers,
    STATE(146), 1,
      sym_scoped_type_identifier,
    STATE(170), 1,
      sym_generic_type,
    STATE(174), 1,
      sym__unannotated_type,
    STATE(318), 1,
      sym__method_header,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(300), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(303), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(61), 2,
      sym_method_declaration,
      aux_sym_interface_body_repeat1,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(294), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    STATE(121), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_modifiers_repeat1,
    ACTIONS(297), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [4100] = 18,
    ACTIONS(132), 1,
      anon_sym_AT,
    ACTIONS(306), 1,
      sym_identifier,
    ACTIONS(308), 1,
      anon_sym_LT,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
    STATE(113), 1,
      sym_type_parameters,
    STATE(134), 1,
      sym_modifiers,
    STATE(146), 1,
      sym_scoped_type_identifier,
    STATE(170), 1,
      sym_generic_type,
    STATE(174), 1,
      sym__unannotated_type,
    STATE(318), 1,
      sym__method_header,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(63), 2,
      sym_method_declaration,
      aux_sym_interface_body_repeat1,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(134), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    STATE(121), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_modifiers_repeat1,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [4171] = 18,
    ACTIONS(132), 1,
      anon_sym_AT,
    ACTIONS(306), 1,
      sym_identifier,
    ACTIONS(308), 1,
      anon_sym_LT,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    STATE(113), 1,
      sym_type_parameters,
    STATE(134), 1,
      sym_modifiers,
    STATE(146), 1,
      sym_scoped_type_identifier,
    STATE(170), 1,
      sym_generic_type,
    STATE(174), 1,
      sym__unannotated_type,
    STATE(318), 1,
      sym__method_header,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(61), 2,
      sym_method_declaration,
      aux_sym_interface_body_repeat1,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(134), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    STATE(121), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_modifiers_repeat1,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [4242] = 18,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    ACTIONS(132), 1,
      anon_sym_AT,
    ACTIONS(306), 1,
      sym_identifier,
    STATE(66), 1,
      sym_receiver_parameter,
    STATE(115), 1,
      aux_sym_dimensions_expr_repeat1,
    STATE(121), 1,
      aux_sym_modifiers_repeat1,
    STATE(146), 1,
      sym_scoped_type_identifier,
    STATE(148), 1,
      sym_modifiers,
    STATE(159), 1,
      sym__unannotated_type,
    STATE(170), 1,
      sym_generic_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(239), 2,
      sym_formal_parameter,
      sym_spread_parameter,
    STATE(155), 3,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(134), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [4312] = 5,
    ACTIONS(254), 1,
      anon_sym_EQ,
    ACTIONS(259), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(250), 7,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(252), 20,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [4354] = 15,
    ACTIONS(132), 1,
      anon_sym_AT,
    ACTIONS(306), 1,
      sym_identifier,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      sym_scoped_type_identifier,
    STATE(148), 1,
      sym_modifiers,
    STATE(170), 1,
      sym_generic_type,
    STATE(173), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(262), 2,
      sym_formal_parameter,
      sym_spread_parameter,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(134), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    STATE(121), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_modifiers_repeat1,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [4416] = 4,
    ACTIONS(254), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(250), 6,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(252), 21,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [4455] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(316), 7,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(318), 21,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [4492] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(320), 7,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(322), 21,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [4529] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 7,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(326), 21,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [4566] = 14,
    ACTIONS(132), 1,
      anon_sym_AT,
    ACTIONS(306), 1,
      sym_identifier,
    STATE(146), 1,
      sym_scoped_type_identifier,
    STATE(148), 1,
      sym_modifiers,
    STATE(170), 1,
      sym_generic_type,
    STATE(173), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(283), 2,
      sym_formal_parameter,
      sym_spread_parameter,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(134), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    STATE(121), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_modifiers_repeat1,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [4625] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(328), 6,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(330), 21,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [4661] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(332), 6,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(334), 21,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [4697] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 6,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(338), 21,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [4733] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(250), 6,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(252), 21,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [4769] = 5,
    ACTIONS(344), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 6,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(342), 19,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [4809] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(348), 6,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(350), 21,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [4845] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(352), 6,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(354), 21,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [4881] = 15,
    ACTIONS(132), 1,
      anon_sym_AT,
    ACTIONS(306), 1,
      sym_identifier,
    ACTIONS(356), 1,
      anon_sym_GT,
    ACTIONS(358), 1,
      anon_sym_QMARK,
    STATE(146), 1,
      sym_scoped_type_identifier,
    STATE(170), 1,
      sym_generic_type,
    STATE(178), 1,
      sym__unannotated_type,
    STATE(215), 1,
      sym_annotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(268), 2,
      sym_wildcard,
      sym__type,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(108), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [4940] = 10,
    ACTIONS(256), 1,
      anon_sym_LT,
    ACTIONS(259), 1,
      anon_sym_DASH_GT,
    ACTIONS(261), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_AT,
    ACTIONS(360), 1,
      anon_sym_EQ,
    STATE(162), 1,
      sym_type_arguments,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(250), 6,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(252), 13,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [4989] = 8,
    ACTIONS(254), 1,
      anon_sym_EQ,
    ACTIONS(259), 1,
      anon_sym_DASH_GT,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    STATE(254), 1,
      aux_sym_inferred_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(250), 7,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(252), 14,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_LBRACK,
      anon_sym_DOT,
  [5034] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(365), 6,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(367), 19,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5068] = 10,
    ACTIONS(377), 1,
      anon_sym_SLASH,
    ACTIONS(381), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(365), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(369), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(373), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(379), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(367), 11,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5116] = 13,
    ACTIONS(365), 1,
      anon_sym_PIPE,
    ACTIONS(377), 1,
      anon_sym_SLASH,
    ACTIONS(381), 1,
      anon_sym_GT_GT,
    ACTIONS(383), 1,
      anon_sym_AMP,
    ACTIONS(387), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(369), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(373), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(379), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(385), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(367), 8,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5170] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(389), 6,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(391), 19,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5204] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 6,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(395), 19,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5238] = 14,
    ACTIONS(132), 1,
      anon_sym_AT,
    ACTIONS(306), 1,
      sym_identifier,
    ACTIONS(358), 1,
      anon_sym_QMARK,
    STATE(146), 1,
      sym_scoped_type_identifier,
    STATE(170), 1,
      sym_generic_type,
    STATE(178), 1,
      sym__unannotated_type,
    STATE(215), 1,
      sym_annotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(292), 2,
      sym_wildcard,
      sym__type,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(108), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [5294] = 15,
    ACTIONS(377), 1,
      anon_sym_SLASH,
    ACTIONS(381), 1,
      anon_sym_GT_GT,
    ACTIONS(383), 1,
      anon_sym_AMP,
    ACTIONS(387), 1,
      anon_sym_CARET,
    ACTIONS(397), 1,
      anon_sym_AMP_AMP,
    ACTIONS(399), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(401), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(369), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(373), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(379), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(385), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5352] = 5,
    ACTIONS(377), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(365), 5,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(367), 17,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5390] = 14,
    ACTIONS(377), 1,
      anon_sym_SLASH,
    ACTIONS(381), 1,
      anon_sym_GT_GT,
    ACTIONS(383), 1,
      anon_sym_AMP,
    ACTIONS(387), 1,
      anon_sym_CARET,
    ACTIONS(397), 1,
      anon_sym_AMP_AMP,
    ACTIONS(401), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(369), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(373), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(379), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(385), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(367), 7,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5446] = 13,
    ACTIONS(377), 1,
      anon_sym_SLASH,
    ACTIONS(381), 1,
      anon_sym_GT_GT,
    ACTIONS(383), 1,
      anon_sym_AMP,
    ACTIONS(387), 1,
      anon_sym_CARET,
    ACTIONS(401), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(369), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(373), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(379), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(385), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(367), 8,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5500] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(403), 6,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(405), 19,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5534] = 15,
    ACTIONS(377), 1,
      anon_sym_SLASH,
    ACTIONS(381), 1,
      anon_sym_GT_GT,
    ACTIONS(383), 1,
      anon_sym_AMP,
    ACTIONS(387), 1,
      anon_sym_CARET,
    ACTIONS(397), 1,
      anon_sym_AMP_AMP,
    ACTIONS(399), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(401), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(369), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(373), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(379), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(385), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(407), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5592] = 6,
    ACTIONS(377), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(373), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(365), 5,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(367), 15,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5632] = 12,
    ACTIONS(365), 1,
      anon_sym_PIPE,
    ACTIONS(377), 1,
      anon_sym_SLASH,
    ACTIONS(381), 1,
      anon_sym_GT_GT,
    ACTIONS(383), 1,
      anon_sym_AMP,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(369), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(373), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(379), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(385), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(367), 9,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5684] = 8,
    ACTIONS(377), 1,
      anon_sym_SLASH,
    ACTIONS(381), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(373), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(379), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(365), 4,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(367), 13,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5728] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 6,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(342), 19,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5762] = 11,
    ACTIONS(377), 1,
      anon_sym_SLASH,
    ACTIONS(381), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(365), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(369), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(373), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(379), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(385), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(367), 9,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5812] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(411), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(409), 16,
      anon_sym_package,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      sym_identifier,
  [5845] = 6,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      anon_sym_DOT,
    STATE(114), 1,
      sym_annotation_argument_list,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(417), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(413), 16,
      anon_sym_package,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      sym_identifier,
  [5884] = 13,
    ACTIONS(132), 1,
      anon_sym_AT,
    ACTIONS(306), 1,
      sym_identifier,
    STATE(146), 1,
      sym_scoped_type_identifier,
    STATE(170), 1,
      sym_generic_type,
    STATE(178), 1,
      sym__unannotated_type,
    STATE(215), 1,
      sym_annotated_type,
    STATE(251), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(112), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [5936] = 13,
    ACTIONS(132), 1,
      anon_sym_AT,
    ACTIONS(306), 1,
      sym_identifier,
    STATE(146), 1,
      sym_scoped_type_identifier,
    STATE(170), 1,
      sym_generic_type,
    STATE(178), 1,
      sym__unannotated_type,
    STATE(215), 1,
      sym_annotated_type,
    STATE(248), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(112), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [5988] = 13,
    ACTIONS(132), 1,
      anon_sym_AT,
    ACTIONS(306), 1,
      sym_identifier,
    STATE(146), 1,
      sym_scoped_type_identifier,
    STATE(170), 1,
      sym_generic_type,
    STATE(178), 1,
      sym__unannotated_type,
    STATE(215), 1,
      sym_annotated_type,
    STATE(227), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(112), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [6040] = 13,
    ACTIONS(132), 1,
      anon_sym_AT,
    ACTIONS(306), 1,
      sym_identifier,
    STATE(146), 1,
      sym_scoped_type_identifier,
    STATE(170), 1,
      sym_generic_type,
    STATE(178), 1,
      sym__unannotated_type,
    STATE(215), 1,
      sym_annotated_type,
    STATE(269), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(112), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [6092] = 13,
    ACTIONS(132), 1,
      anon_sym_AT,
    ACTIONS(306), 1,
      sym_identifier,
    STATE(146), 1,
      sym_scoped_type_identifier,
    STATE(170), 1,
      sym_generic_type,
    STATE(178), 1,
      sym__unannotated_type,
    STATE(215), 1,
      sym_annotated_type,
    STATE(280), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(112), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [6144] = 13,
    ACTIONS(132), 1,
      anon_sym_AT,
    ACTIONS(306), 1,
      sym_identifier,
    STATE(146), 1,
      sym_scoped_type_identifier,
    STATE(170), 1,
      sym_generic_type,
    STATE(178), 1,
      sym__unannotated_type,
    STATE(215), 1,
      sym_annotated_type,
    STATE(295), 1,
      sym__type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(112), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [6196] = 15,
    ACTIONS(377), 1,
      anon_sym_SLASH,
    ACTIONS(381), 1,
      anon_sym_GT_GT,
    ACTIONS(383), 1,
      anon_sym_AMP,
    ACTIONS(387), 1,
      anon_sym_CARET,
    ACTIONS(397), 1,
      anon_sym_AMP_AMP,
    ACTIONS(399), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(401), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(369), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(373), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(379), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(385), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(421), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6251] = 12,
    ACTIONS(132), 1,
      anon_sym_AT,
    ACTIONS(306), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_QMARK,
    STATE(146), 1,
      sym_scoped_type_identifier,
    STATE(170), 1,
      sym_generic_type,
    STATE(175), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(151), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [6300] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(427), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(425), 16,
      anon_sym_package,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      sym_identifier,
  [6330] = 15,
    ACTIONS(377), 1,
      anon_sym_SLASH,
    ACTIONS(381), 1,
      anon_sym_GT_GT,
    ACTIONS(383), 1,
      anon_sym_AMP,
    ACTIONS(387), 1,
      anon_sym_CARET,
    ACTIONS(397), 1,
      anon_sym_AMP_AMP,
    ACTIONS(399), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(401), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(369), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(373), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(379), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(385), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(421), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6384] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(431), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(429), 16,
      anon_sym_package,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      sym_identifier,
  [6414] = 11,
    ACTIONS(132), 1,
      anon_sym_AT,
    ACTIONS(306), 1,
      sym_identifier,
    STATE(146), 1,
      sym_scoped_type_identifier,
    STATE(170), 1,
      sym_generic_type,
    STATE(175), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(151), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [6460] = 11,
    ACTIONS(132), 1,
      anon_sym_AT,
    ACTIONS(306), 1,
      sym_identifier,
    STATE(146), 1,
      sym_scoped_type_identifier,
    STATE(170), 1,
      sym_generic_type,
    STATE(177), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(119), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [6506] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(435), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(433), 16,
      anon_sym_package,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      sym_identifier,
  [6536] = 11,
    ACTIONS(132), 1,
      anon_sym_AT,
    ACTIONS(306), 1,
      sym_identifier,
    STATE(146), 1,
      sym_scoped_type_identifier,
    STATE(170), 1,
      sym_generic_type,
    STATE(186), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(151), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [6582] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(439), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(437), 16,
      anon_sym_package,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      sym_identifier,
  [6612] = 11,
    ACTIONS(132), 1,
      anon_sym_AT,
    ACTIONS(306), 1,
      sym_identifier,
    STATE(146), 1,
      sym_scoped_type_identifier,
    STATE(170), 1,
      sym_generic_type,
    STATE(182), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(151), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [6658] = 16,
    ACTIONS(377), 1,
      anon_sym_SLASH,
    ACTIONS(381), 1,
      anon_sym_GT_GT,
    ACTIONS(383), 1,
      anon_sym_AMP,
    ACTIONS(387), 1,
      anon_sym_CARET,
    ACTIONS(397), 1,
      anon_sym_AMP_AMP,
    ACTIONS(399), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(401), 1,
      anon_sym_PIPE,
    ACTIONS(441), 1,
      anon_sym_SEMI,
    ACTIONS(443), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(369), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(373), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(379), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(385), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [6714] = 11,
    ACTIONS(132), 1,
      anon_sym_AT,
    ACTIONS(306), 1,
      sym_identifier,
    STATE(146), 1,
      sym_scoped_type_identifier,
    STATE(170), 1,
      sym_generic_type,
    STATE(179), 1,
      sym__unannotated_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(151), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [6760] = 15,
    ACTIONS(377), 1,
      anon_sym_SLASH,
    ACTIONS(381), 1,
      anon_sym_GT_GT,
    ACTIONS(383), 1,
      anon_sym_AMP,
    ACTIONS(387), 1,
      anon_sym_CARET,
    ACTIONS(397), 1,
      anon_sym_AMP_AMP,
    ACTIONS(399), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(401), 1,
      anon_sym_PIPE,
    ACTIONS(445), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(369), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(373), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(379), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(385), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [6813] = 6,
    ACTIONS(132), 1,
      anon_sym_AT,
    ACTIONS(449), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(451), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    STATE(123), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_modifiers_repeat1,
    ACTIONS(447), 10,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      sym_identifier,
  [6848] = 6,
    ACTIONS(453), 1,
      anon_sym_LPAREN,
    ACTIONS(455), 1,
      anon_sym_DOT,
    STATE(137), 1,
      sym_annotation_argument_list,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(417), 3,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_AT,
    ACTIONS(413), 14,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      sym_identifier,
  [6883] = 6,
    ACTIONS(459), 1,
      anon_sym_LT,
    ACTIONS(461), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(464), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    STATE(123), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_modifiers_repeat1,
    ACTIONS(457), 10,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      sym_identifier,
  [6918] = 15,
    ACTIONS(377), 1,
      anon_sym_SLASH,
    ACTIONS(381), 1,
      anon_sym_GT_GT,
    ACTIONS(383), 1,
      anon_sym_AMP,
    ACTIONS(387), 1,
      anon_sym_CARET,
    ACTIONS(397), 1,
      anon_sym_AMP_AMP,
    ACTIONS(399), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(401), 1,
      anon_sym_PIPE,
    ACTIONS(467), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(369), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(373), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(379), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(385), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [6971] = 15,
    ACTIONS(377), 1,
      anon_sym_SLASH,
    ACTIONS(381), 1,
      anon_sym_GT_GT,
    ACTIONS(383), 1,
      anon_sym_AMP,
    ACTIONS(387), 1,
      anon_sym_CARET,
    ACTIONS(397), 1,
      anon_sym_AMP_AMP,
    ACTIONS(399), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(401), 1,
      anon_sym_PIPE,
    ACTIONS(469), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(369), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(373), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(379), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(385), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [7024] = 15,
    ACTIONS(377), 1,
      anon_sym_SLASH,
    ACTIONS(381), 1,
      anon_sym_GT_GT,
    ACTIONS(383), 1,
      anon_sym_AMP,
    ACTIONS(387), 1,
      anon_sym_CARET,
    ACTIONS(397), 1,
      anon_sym_AMP_AMP,
    ACTIONS(399), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(401), 1,
      anon_sym_PIPE,
    ACTIONS(471), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(369), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(373), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(379), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(385), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [7077] = 7,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(477), 1,
      anon_sym_LBRACK,
    STATE(129), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(195), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
    ACTIONS(475), 6,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(473), 7,
      anon_sym_DOT,
      anon_sym_throws,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
  [7114] = 15,
    ACTIONS(377), 1,
      anon_sym_SLASH,
    ACTIONS(381), 1,
      anon_sym_GT_GT,
    ACTIONS(383), 1,
      anon_sym_AMP,
    ACTIONS(387), 1,
      anon_sym_CARET,
    ACTIONS(397), 1,
      anon_sym_AMP_AMP,
    ACTIONS(399), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(401), 1,
      anon_sym_PIPE,
    ACTIONS(479), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(369), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(373), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(379), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(385), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [7167] = 7,
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    ACTIONS(488), 1,
      anon_sym_AT,
    STATE(129), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(195), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
    ACTIONS(483), 6,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(481), 7,
      anon_sym_DOT,
      anon_sym_throws,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
  [7204] = 5,
    ACTIONS(491), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(494), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    STATE(130), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_modifiers_repeat1,
    ACTIONS(457), 11,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      sym_identifier,
  [7237] = 5,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(497), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    STATE(130), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_modifiers_repeat1,
    ACTIONS(447), 11,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      sym_identifier,
  [7270] = 15,
    ACTIONS(377), 1,
      anon_sym_SLASH,
    ACTIONS(381), 1,
      anon_sym_GT_GT,
    ACTIONS(383), 1,
      anon_sym_AMP,
    ACTIONS(387), 1,
      anon_sym_CARET,
    ACTIONS(397), 1,
      anon_sym_AMP_AMP,
    ACTIONS(399), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(401), 1,
      anon_sym_PIPE,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(369), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(373), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(379), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(385), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [7323] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(411), 5,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_AT,
    ACTIONS(409), 14,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      sym_identifier,
  [7351] = 12,
    ACTIONS(306), 1,
      sym_identifier,
    ACTIONS(308), 1,
      anon_sym_LT,
    STATE(113), 1,
      sym_type_parameters,
    STATE(146), 1,
      sym_scoped_type_identifier,
    STATE(170), 1,
      sym_generic_type,
    STATE(174), 1,
      sym__unannotated_type,
    STATE(303), 1,
      sym__method_header,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [7397] = 13,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(477), 1,
      anon_sym_LBRACK,
    ACTIONS(501), 1,
      sym_identifier,
    ACTIONS(505), 1,
      anon_sym_DOT,
    ACTIONS(507), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(511), 1,
      sym_this,
    STATE(127), 1,
      aux_sym_dimensions_repeat1,
    STATE(169), 1,
      sym_dimensions,
    STATE(291), 1,
      sym_variable_declarator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(503), 2,
      anon_sym_AMP,
      anon_sym_RPAREN,
    ACTIONS(509), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(195), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [7444] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(439), 3,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_AT,
    ACTIONS(437), 14,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      sym_identifier,
  [7470] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(435), 3,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_AT,
    ACTIONS(433), 14,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      sym_identifier,
  [7496] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(427), 3,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_AT,
    ACTIONS(425), 14,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      sym_identifier,
  [7522] = 4,
    ACTIONS(515), 1,
      anon_sym_AT,
    ACTIONS(518), 1,
      anon_sym_package,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(513), 15,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      sym_identifier,
  [7550] = 10,
    ACTIONS(306), 1,
      sym_identifier,
    ACTIONS(520), 1,
      anon_sym_interface,
    STATE(146), 1,
      sym_scoped_type_identifier,
    STATE(164), 1,
      sym__unannotated_type,
    STATE(170), 1,
      sym_generic_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [7590] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(524), 3,
      anon_sym_LT,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(522), 14,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      sym_identifier,
  [7616] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(431), 3,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_AT,
    ACTIONS(429), 14,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      sym_identifier,
  [7642] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(528), 3,
      anon_sym_LT,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(526), 14,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      sym_identifier,
  [7668] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(532), 2,
      anon_sym_RPAREN,
      anon_sym_AT,
    ACTIONS(530), 14,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      sym_identifier,
  [7693] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(536), 2,
      anon_sym_RPAREN,
      anon_sym_AT,
    ACTIONS(534), 14,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      sym_identifier,
  [7718] = 6,
    ACTIONS(542), 1,
      anon_sym_LT,
    ACTIONS(544), 1,
      anon_sym_DOT,
    STATE(171), 1,
      sym_type_arguments,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(538), 5,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(540), 8,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [7749] = 6,
    ACTIONS(542), 1,
      anon_sym_LT,
    ACTIONS(546), 1,
      anon_sym_DOT,
    STATE(162), 1,
      sym_type_arguments,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(248), 5,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(268), 8,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [7780] = 9,
    ACTIONS(306), 1,
      sym_identifier,
    STATE(146), 1,
      sym_scoped_type_identifier,
    STATE(166), 1,
      sym__unannotated_type,
    STATE(170), 1,
      sym_generic_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(39), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(41), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [7817] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(550), 2,
      anon_sym_RPAREN,
      anon_sym_AT,
    ACTIONS(548), 14,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      sym_identifier,
  [7842] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(554), 2,
      anon_sym_RPAREN,
      anon_sym_AT,
    ACTIONS(552), 14,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      sym_identifier,
  [7867] = 5,
    ACTIONS(558), 1,
      anon_sym_QMARK,
    ACTIONS(560), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(151), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
    ACTIONS(556), 10,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      sym_identifier,
  [7896] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(563), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(565), 9,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [7920] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(567), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(569), 9,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [7944] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(571), 7,
      anon_sym_DOT,
      anon_sym_throws,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(573), 8,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [7968] = 4,
    ACTIONS(515), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(513), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    ACTIONS(575), 10,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      sym_identifier,
  [7994] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(578), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(580), 9,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8018] = 10,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(477), 1,
      anon_sym_LBRACK,
    ACTIONS(582), 1,
      anon_sym_DOT,
    STATE(127), 1,
      aux_sym_dimensions_repeat1,
    STATE(169), 1,
      sym_dimensions,
    STATE(243), 1,
      sym_variable_declarator,
    STATE(310), 1,
      sym__variable_declarator_list,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(509), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
    STATE(195), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8056] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(584), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(586), 9,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8080] = 11,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(477), 1,
      anon_sym_LBRACK,
    ACTIONS(501), 1,
      sym_identifier,
    ACTIONS(507), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(511), 1,
      sym_this,
    STATE(127), 1,
      aux_sym_dimensions_repeat1,
    STATE(169), 1,
      sym_dimensions,
    STATE(291), 1,
      sym_variable_declarator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(509), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(195), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8120] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(481), 7,
      anon_sym_DOT,
      anon_sym_throws,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(483), 8,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8144] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(588), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(590), 8,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8167] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(592), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(594), 8,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8190] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(596), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(598), 8,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8213] = 9,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(477), 1,
      anon_sym_LBRACK,
    STATE(127), 1,
      aux_sym_dimensions_repeat1,
    STATE(169), 1,
      sym_dimensions,
    STATE(243), 1,
      sym_variable_declarator,
    STATE(320), 1,
      sym__variable_declarator_list,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(509), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
    STATE(195), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8248] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(538), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(540), 8,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8271] = 9,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(477), 1,
      anon_sym_LBRACK,
    ACTIONS(600), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(127), 1,
      aux_sym_dimensions_repeat1,
    STATE(169), 1,
      sym_dimensions,
    STATE(296), 1,
      sym_variable_declarator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(509), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
    STATE(195), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8306] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(602), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(604), 8,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8329] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(606), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(608), 8,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8352] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(610), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(612), 8,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8375] = 4,
    ACTIONS(544), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(538), 5,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(540), 8,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8400] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(614), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(616), 8,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8423] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(618), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(620), 8,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8446] = 9,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(477), 1,
      anon_sym_LBRACK,
    ACTIONS(507), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(127), 1,
      aux_sym_dimensions_repeat1,
    STATE(169), 1,
      sym_dimensions,
    STATE(291), 1,
      sym_variable_declarator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(509), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
    STATE(195), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8481] = 8,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(477), 1,
      anon_sym_LBRACK,
    STATE(127), 1,
      aux_sym_dimensions_repeat1,
    STATE(169), 1,
      sym_dimensions,
    STATE(252), 1,
      sym__method_declarator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(622), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
    STATE(195), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8513] = 7,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(477), 1,
      anon_sym_LBRACK,
    STATE(127), 1,
      aux_sym_dimensions_repeat1,
    STATE(169), 1,
      sym_dimensions,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(195), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
    ACTIONS(624), 5,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8543] = 6,
    ACTIONS(542), 1,
      anon_sym_LT,
    ACTIONS(626), 1,
      anon_sym_DOT,
    STATE(171), 1,
      sym_type_arguments,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(538), 5,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(540), 5,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8571] = 8,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(477), 1,
      anon_sym_LBRACK,
    STATE(127), 1,
      aux_sym_dimensions_repeat1,
    STATE(169), 1,
      sym_dimensions,
    STATE(264), 1,
      sym__method_declarator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(622), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
    STATE(195), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8603] = 7,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(477), 1,
      anon_sym_LBRACK,
    STATE(127), 1,
      aux_sym_dimensions_repeat1,
    STATE(169), 1,
      sym_dimensions,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(195), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
    ACTIONS(503), 5,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8633] = 8,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(477), 1,
      anon_sym_LBRACK,
    STATE(127), 1,
      aux_sym_dimensions_repeat1,
    STATE(169), 1,
      sym_dimensions,
    STATE(256), 1,
      sym__method_declarator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(622), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
    STATE(195), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8665] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(631), 2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(629), 10,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      sym_identifier,
  [8686] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(635), 2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(633), 10,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
      anon_sym_float,
      anon_sym_double,
      sym_boolean_type,
      sym_void_type,
      sym_identifier,
  [8707] = 9,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(477), 1,
      anon_sym_LBRACK,
    ACTIONS(637), 1,
      sym_identifier,
    ACTIONS(639), 1,
      sym_this,
    STATE(127), 1,
      aux_sym_dimensions_repeat1,
    STATE(169), 1,
      sym_dimensions,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(624), 2,
      anon_sym_AMP,
      anon_sym_RPAREN,
    STATE(195), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8740] = 4,
    ACTIONS(626), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(538), 5,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(540), 5,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8762] = 7,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(477), 1,
      anon_sym_LBRACK,
    STATE(127), 1,
      aux_sym_dimensions_repeat1,
    STATE(267), 1,
      sym_dimensions,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(641), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(195), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8790] = 8,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(477), 1,
      anon_sym_LBRACK,
    ACTIONS(643), 1,
      anon_sym_DOT,
    STATE(127), 1,
      aux_sym_dimensions_repeat1,
    STATE(267), 1,
      sym_dimensions,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(641), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(195), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8820] = 8,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(477), 1,
      anon_sym_LBRACK,
    ACTIONS(637), 1,
      sym_identifier,
    ACTIONS(639), 1,
      sym_this,
    STATE(127), 1,
      aux_sym_dimensions_repeat1,
    STATE(169), 1,
      sym_dimensions,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(195), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8849] = 7,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(477), 1,
      anon_sym_LBRACK,
    STATE(127), 1,
      aux_sym_dimensions_repeat1,
    STATE(270), 1,
      sym_dimensions,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(645), 2,
      anon_sym_SEMI,
      anon_sym_throws,
    STATE(195), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8876] = 7,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(477), 1,
      anon_sym_LBRACK,
    ACTIONS(582), 1,
      anon_sym_DOT,
    STATE(127), 1,
      aux_sym_dimensions_repeat1,
    STATE(169), 1,
      sym_dimensions,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(195), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8902] = 5,
    ACTIONS(558), 1,
      anon_sym_LBRACK,
    ACTIONS(647), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(556), 2,
      anon_sym_package,
      sym_identifier,
    STATE(189), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8923] = 5,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(650), 1,
      sym_identifier,
    STATE(282), 1,
      sym_type_parameter,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(197), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8943] = 5,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(650), 1,
      sym_identifier,
    STATE(253), 1,
      sym_type_parameter,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(197), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8963] = 4,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(652), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(200), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8980] = 4,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(654), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(196), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8997] = 4,
    ACTIONS(658), 1,
      anon_sym_static,
    STATE(277), 1,
      sym_scoped_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(656), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
  [9014] = 4,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(660), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(189), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [9031] = 4,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(662), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(189), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [9048] = 4,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(664), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(189), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [9065] = 3,
    ACTIONS(668), 1,
      sym_super,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(666), 5,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
  [9080] = 4,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(670), 1,
      anon_sym_package,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(189), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [9097] = 4,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(672), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(189), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [9114] = 3,
    STATE(293), 1,
      sym_variable_declarator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(509), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
  [9128] = 3,
    STATE(287), 1,
      sym_scoped_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(674), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
  [9142] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(676), 5,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
  [9154] = 3,
    STATE(122), 1,
      sym_scoped_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(678), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
  [9168] = 3,
    STATE(307), 1,
      sym_scoped_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(680), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
  [9182] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(682), 5,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_throws,
  [9194] = 4,
    STATE(289), 1,
      sym__wildcard_bounds,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(684), 2,
      anon_sym_GT,
      anon_sym_COMMA,
    ACTIONS(686), 2,
      anon_sym_extends,
      sym_super,
  [9210] = 3,
    STATE(278), 1,
      sym_variable_declarator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(509), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
  [9224] = 3,
    STATE(285), 1,
      sym_variable_declarator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(509), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
  [9238] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(688), 5,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_throws,
  [9250] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(690), 5,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_throws,
  [9262] = 3,
    STATE(100), 1,
      sym_scoped_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(692), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
  [9276] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(694), 5,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_throws,
  [9288] = 4,
    STATE(276), 1,
      sym__wildcard_bounds,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(686), 2,
      anon_sym_extends,
      sym_super,
    ACTIONS(696), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [9304] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(503), 5,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9316] = 3,
    STATE(275), 1,
      sym_scoped_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(698), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
  [9330] = 4,
    ACTIONS(702), 1,
      anon_sym_extends,
    STATE(279), 1,
      sym_type_bound,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(700), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [9345] = 5,
    ACTIONS(308), 1,
      anon_sym_LT,
    ACTIONS(704), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_interface_body,
    STATE(274), 1,
      sym_type_parameters,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9362] = 4,
    ACTIONS(706), 1,
      anon_sym_DQUOTE,
    STATE(221), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(708), 2,
      sym_string_fragment,
      sym_escape_sequence,
    ACTIONS(710), 2,
      sym_line_comment,
      sym_block_comment,
  [9377] = 5,
    ACTIONS(308), 1,
      anon_sym_LT,
    ACTIONS(704), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_interface_body,
    STATE(294), 1,
      sym_type_parameters,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9394] = 4,
    ACTIONS(712), 1,
      anon_sym_DQUOTE,
    STATE(221), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(710), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(714), 2,
      sym_string_fragment,
      sym_escape_sequence,
  [9409] = 4,
    ACTIONS(717), 1,
      anon_sym_AMP,
    STATE(222), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(720), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [9424] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(722), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
  [9435] = 4,
    ACTIONS(702), 1,
      anon_sym_extends,
    STATE(281), 1,
      sym_type_bound,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(724), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [9450] = 4,
    ACTIONS(726), 1,
      anon_sym_AMP,
    STATE(222), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(728), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [9465] = 4,
    ACTIONS(730), 1,
      anon_sym_DQUOTE,
    STATE(219), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(710), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(732), 2,
      sym_string_fragment,
      sym_escape_sequence,
  [9480] = 4,
    ACTIONS(726), 1,
      anon_sym_AMP,
    STATE(225), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(734), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [9495] = 4,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    STATE(228), 1,
      aux_sym_annotation_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9509] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(741), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9519] = 4,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
    ACTIONS(745), 1,
      anon_sym_COMMA,
    STATE(228), 1,
      aux_sym_annotation_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9533] = 4,
    ACTIONS(747), 1,
      sym_identifier,
    ACTIONS(749), 1,
      anon_sym_STAR,
    STATE(317), 1,
      sym_asterisk,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9547] = 4,
    ACTIONS(745), 1,
      anon_sym_COMMA,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    STATE(230), 1,
      aux_sym_annotation_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9561] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(753), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9571] = 4,
    ACTIONS(755), 1,
      anon_sym_COMMA,
    ACTIONS(757), 1,
      anon_sym_RBRACE,
    STATE(266), 1,
      aux_sym_element_value_array_initializer_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9585] = 4,
    ACTIONS(759), 1,
      anon_sym_GT,
    ACTIONS(761), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      aux_sym_type_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9599] = 4,
    ACTIONS(745), 1,
      anon_sym_COMMA,
    ACTIONS(764), 1,
      anon_sym_RPAREN,
    STATE(238), 1,
      aux_sym_annotation_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9613] = 4,
    ACTIONS(766), 1,
      anon_sym_AMP,
    ACTIONS(768), 1,
      anon_sym_RPAREN,
    STATE(257), 1,
      aux_sym_cast_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9627] = 4,
    ACTIONS(745), 1,
      anon_sym_COMMA,
    ACTIONS(770), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      aux_sym_annotation_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9641] = 4,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    ACTIONS(772), 1,
      anon_sym_COMMA,
    STATE(259), 1,
      aux_sym_formal_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9655] = 4,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(777), 1,
      anon_sym_SEMI,
    STATE(240), 1,
      aux_sym_type_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9669] = 4,
    ACTIONS(779), 1,
      anon_sym_COMMA,
    ACTIONS(781), 1,
      anon_sym_SEMI,
    STATE(240), 1,
      aux_sym_type_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9683] = 4,
    ACTIONS(772), 1,
      anon_sym_COMMA,
    ACTIONS(783), 1,
      anon_sym_RPAREN,
    STATE(244), 1,
      aux_sym_formal_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9697] = 4,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(787), 1,
      anon_sym_SEMI,
    STATE(265), 1,
      aux_sym__variable_declarator_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9711] = 4,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
    ACTIONS(791), 1,
      anon_sym_COMMA,
    STATE(244), 1,
      aux_sym_formal_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9725] = 4,
    ACTIONS(794), 1,
      anon_sym_COMMA,
    ACTIONS(797), 1,
      anon_sym_SEMI,
    STATE(245), 1,
      aux_sym__variable_declarator_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9739] = 4,
    ACTIONS(799), 1,
      anon_sym_GT,
    ACTIONS(801), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      aux_sym_type_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9753] = 4,
    ACTIONS(803), 1,
      anon_sym_GT,
    ACTIONS(805), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym_type_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9767] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(720), 3,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_COMMA,
  [9777] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(807), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9787] = 4,
    ACTIONS(809), 1,
      anon_sym_AMP,
    ACTIONS(812), 1,
      anon_sym_RPAREN,
    STATE(250), 1,
      aux_sym_cast_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9801] = 4,
    ACTIONS(779), 1,
      anon_sym_COMMA,
    ACTIONS(814), 1,
      anon_sym_SEMI,
    STATE(241), 1,
      aux_sym_type_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9815] = 4,
    ACTIONS(816), 1,
      anon_sym_SEMI,
    ACTIONS(818), 1,
      anon_sym_throws,
    STATE(302), 1,
      sym_throws,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9829] = 4,
    ACTIONS(801), 1,
      anon_sym_COMMA,
    ACTIONS(820), 1,
      anon_sym_GT,
    STATE(246), 1,
      aux_sym_type_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9843] = 4,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(822), 1,
      anon_sym_RPAREN,
    STATE(255), 1,
      aux_sym_inferred_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9857] = 4,
    ACTIONS(824), 1,
      anon_sym_RPAREN,
    ACTIONS(826), 1,
      anon_sym_COMMA,
    STATE(255), 1,
      aux_sym_inferred_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9871] = 4,
    ACTIONS(818), 1,
      anon_sym_throws,
    ACTIONS(829), 1,
      anon_sym_SEMI,
    STATE(304), 1,
      sym_throws,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9885] = 4,
    ACTIONS(766), 1,
      anon_sym_AMP,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
    STATE(250), 1,
      aux_sym_cast_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9899] = 4,
    ACTIONS(833), 1,
      anon_sym_COMMA,
    ACTIONS(836), 1,
      anon_sym_RBRACE,
    STATE(258), 1,
      aux_sym_element_value_array_initializer_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9913] = 4,
    ACTIONS(772), 1,
      anon_sym_COMMA,
    ACTIONS(838), 1,
      anon_sym_RPAREN,
    STATE(244), 1,
      aux_sym_formal_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9927] = 4,
    ACTIONS(840), 1,
      anon_sym_GT,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym_type_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9941] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(845), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9951] = 4,
    ACTIONS(772), 1,
      anon_sym_COMMA,
    ACTIONS(838), 1,
      anon_sym_RPAREN,
    STATE(242), 1,
      aux_sym_formal_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9965] = 4,
    ACTIONS(749), 1,
      anon_sym_STAR,
    ACTIONS(847), 1,
      sym_identifier,
    STATE(319), 1,
      sym_asterisk,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9979] = 4,
    ACTIONS(818), 1,
      anon_sym_throws,
    ACTIONS(849), 1,
      anon_sym_SEMI,
    STATE(300), 1,
      sym_throws,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9993] = 4,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(851), 1,
      anon_sym_SEMI,
    STATE(245), 1,
      aux_sym__variable_declarator_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10007] = 4,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    ACTIONS(853), 1,
      anon_sym_COMMA,
    STATE(258), 1,
      aux_sym_element_value_array_initializer_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10021] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(855), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10031] = 4,
    ACTIONS(805), 1,
      anon_sym_COMMA,
    ACTIONS(857), 1,
      anon_sym_GT,
    STATE(247), 1,
      aux_sym_type_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10045] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(859), 2,
      anon_sym_AMP,
      anon_sym_RPAREN,
  [10054] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(861), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [10063] = 3,
    ACTIONS(863), 1,
      sym_identifier,
    STATE(272), 1,
      sym_element_value_pair,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10074] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(736), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10083] = 3,
    ACTIONS(411), 1,
      anon_sym_DOT,
    ACTIONS(865), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10094] = 3,
    ACTIONS(704), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_interface_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10105] = 3,
    ACTIONS(419), 1,
      anon_sym_DOT,
    ACTIONS(867), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10116] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(684), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [10125] = 3,
    ACTIONS(869), 1,
      anon_sym_DOT,
    ACTIONS(871), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10136] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(873), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10145] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(875), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [10154] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(777), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10163] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(877), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [10172] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(759), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [10181] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(789), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10190] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(879), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10199] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(881), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10208] = 3,
    ACTIONS(883), 1,
      anon_sym_LPAREN,
    STATE(187), 1,
      sym_formal_parameters,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10219] = 3,
    ACTIONS(419), 1,
      anon_sym_DOT,
    ACTIONS(885), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10230] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(836), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10239] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(887), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [10248] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(824), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10257] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(889), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10266] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(840), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [10275] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(891), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10284] = 3,
    ACTIONS(704), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_interface_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10295] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(893), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [10304] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(895), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10313] = 2,
    ACTIONS(847), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10321] = 2,
    ACTIONS(897), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10329] = 2,
    ACTIONS(899), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10337] = 2,
    ACTIONS(901), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10345] = 2,
    ACTIONS(903), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10353] = 2,
    ACTIONS(905), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10361] = 2,
    ACTIONS(907), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10369] = 2,
    ACTIONS(909), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10377] = 2,
    ACTIONS(911), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10385] = 2,
    ACTIONS(913), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10393] = 2,
    ACTIONS(915), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10401] = 2,
    ACTIONS(917), 1,
      sym_this,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10409] = 2,
    ACTIONS(919), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10417] = 2,
    ACTIONS(921), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10425] = 2,
    ACTIONS(923), 1,
      anon_sym_class,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10433] = 2,
    ACTIONS(925), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10441] = 2,
    ACTIONS(927), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10449] = 2,
    ACTIONS(929), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10457] = 2,
    ACTIONS(259), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10465] = 2,
    ACTIONS(931), 1,
      sym_this,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10473] = 2,
    ACTIONS(933), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10481] = 2,
    ACTIONS(935), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10489] = 2,
    ACTIONS(937), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10497] = 2,
    ACTIONS(939), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10505] = 2,
    ACTIONS(941), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10513] = 2,
    ACTIONS(346), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10521] = 2,
    ACTIONS(943), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10529] = 2,
    ACTIONS(945), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10537] = 2,
    ACTIONS(764), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10545] = 2,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10553] = 2,
    ACTIONS(757), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 115,
  [SMALL_STATE(11)] = 230,
  [SMALL_STATE(12)] = 345,
  [SMALL_STATE(13)] = 457,
  [SMALL_STATE(14)] = 569,
  [SMALL_STATE(15)] = 678,
  [SMALL_STATE(16)] = 787,
  [SMALL_STATE(17)] = 896,
  [SMALL_STATE(18)] = 998,
  [SMALL_STATE(19)] = 1097,
  [SMALL_STATE(20)] = 1193,
  [SMALL_STATE(21)] = 1289,
  [SMALL_STATE(22)] = 1385,
  [SMALL_STATE(23)] = 1481,
  [SMALL_STATE(24)] = 1577,
  [SMALL_STATE(25)] = 1673,
  [SMALL_STATE(26)] = 1769,
  [SMALL_STATE(27)] = 1865,
  [SMALL_STATE(28)] = 1961,
  [SMALL_STATE(29)] = 2057,
  [SMALL_STATE(30)] = 2153,
  [SMALL_STATE(31)] = 2249,
  [SMALL_STATE(32)] = 2345,
  [SMALL_STATE(33)] = 2441,
  [SMALL_STATE(34)] = 2537,
  [SMALL_STATE(35)] = 2633,
  [SMALL_STATE(36)] = 2729,
  [SMALL_STATE(37)] = 2780,
  [SMALL_STATE(38)] = 2831,
  [SMALL_STATE(39)] = 2882,
  [SMALL_STATE(40)] = 2933,
  [SMALL_STATE(41)] = 2984,
  [SMALL_STATE(42)] = 3035,
  [SMALL_STATE(43)] = 3086,
  [SMALL_STATE(44)] = 3137,
  [SMALL_STATE(45)] = 3188,
  [SMALL_STATE(46)] = 3239,
  [SMALL_STATE(47)] = 3290,
  [SMALL_STATE(48)] = 3341,
  [SMALL_STATE(49)] = 3392,
  [SMALL_STATE(50)] = 3443,
  [SMALL_STATE(51)] = 3494,
  [SMALL_STATE(52)] = 3545,
  [SMALL_STATE(53)] = 3596,
  [SMALL_STATE(54)] = 3647,
  [SMALL_STATE(55)] = 3698,
  [SMALL_STATE(56)] = 3749,
  [SMALL_STATE(57)] = 3800,
  [SMALL_STATE(58)] = 3851,
  [SMALL_STATE(59)] = 3902,
  [SMALL_STATE(60)] = 3962,
  [SMALL_STATE(61)] = 4029,
  [SMALL_STATE(62)] = 4100,
  [SMALL_STATE(63)] = 4171,
  [SMALL_STATE(64)] = 4242,
  [SMALL_STATE(65)] = 4312,
  [SMALL_STATE(66)] = 4354,
  [SMALL_STATE(67)] = 4416,
  [SMALL_STATE(68)] = 4455,
  [SMALL_STATE(69)] = 4492,
  [SMALL_STATE(70)] = 4529,
  [SMALL_STATE(71)] = 4566,
  [SMALL_STATE(72)] = 4625,
  [SMALL_STATE(73)] = 4661,
  [SMALL_STATE(74)] = 4697,
  [SMALL_STATE(75)] = 4733,
  [SMALL_STATE(76)] = 4769,
  [SMALL_STATE(77)] = 4809,
  [SMALL_STATE(78)] = 4845,
  [SMALL_STATE(79)] = 4881,
  [SMALL_STATE(80)] = 4940,
  [SMALL_STATE(81)] = 4989,
  [SMALL_STATE(82)] = 5034,
  [SMALL_STATE(83)] = 5068,
  [SMALL_STATE(84)] = 5116,
  [SMALL_STATE(85)] = 5170,
  [SMALL_STATE(86)] = 5204,
  [SMALL_STATE(87)] = 5238,
  [SMALL_STATE(88)] = 5294,
  [SMALL_STATE(89)] = 5352,
  [SMALL_STATE(90)] = 5390,
  [SMALL_STATE(91)] = 5446,
  [SMALL_STATE(92)] = 5500,
  [SMALL_STATE(93)] = 5534,
  [SMALL_STATE(94)] = 5592,
  [SMALL_STATE(95)] = 5632,
  [SMALL_STATE(96)] = 5684,
  [SMALL_STATE(97)] = 5728,
  [SMALL_STATE(98)] = 5762,
  [SMALL_STATE(99)] = 5812,
  [SMALL_STATE(100)] = 5845,
  [SMALL_STATE(101)] = 5884,
  [SMALL_STATE(102)] = 5936,
  [SMALL_STATE(103)] = 5988,
  [SMALL_STATE(104)] = 6040,
  [SMALL_STATE(105)] = 6092,
  [SMALL_STATE(106)] = 6144,
  [SMALL_STATE(107)] = 6196,
  [SMALL_STATE(108)] = 6251,
  [SMALL_STATE(109)] = 6300,
  [SMALL_STATE(110)] = 6330,
  [SMALL_STATE(111)] = 6384,
  [SMALL_STATE(112)] = 6414,
  [SMALL_STATE(113)] = 6460,
  [SMALL_STATE(114)] = 6506,
  [SMALL_STATE(115)] = 6536,
  [SMALL_STATE(116)] = 6582,
  [SMALL_STATE(117)] = 6612,
  [SMALL_STATE(118)] = 6658,
  [SMALL_STATE(119)] = 6714,
  [SMALL_STATE(120)] = 6760,
  [SMALL_STATE(121)] = 6813,
  [SMALL_STATE(122)] = 6848,
  [SMALL_STATE(123)] = 6883,
  [SMALL_STATE(124)] = 6918,
  [SMALL_STATE(125)] = 6971,
  [SMALL_STATE(126)] = 7024,
  [SMALL_STATE(127)] = 7077,
  [SMALL_STATE(128)] = 7114,
  [SMALL_STATE(129)] = 7167,
  [SMALL_STATE(130)] = 7204,
  [SMALL_STATE(131)] = 7237,
  [SMALL_STATE(132)] = 7270,
  [SMALL_STATE(133)] = 7323,
  [SMALL_STATE(134)] = 7351,
  [SMALL_STATE(135)] = 7397,
  [SMALL_STATE(136)] = 7444,
  [SMALL_STATE(137)] = 7470,
  [SMALL_STATE(138)] = 7496,
  [SMALL_STATE(139)] = 7522,
  [SMALL_STATE(140)] = 7550,
  [SMALL_STATE(141)] = 7590,
  [SMALL_STATE(142)] = 7616,
  [SMALL_STATE(143)] = 7642,
  [SMALL_STATE(144)] = 7668,
  [SMALL_STATE(145)] = 7693,
  [SMALL_STATE(146)] = 7718,
  [SMALL_STATE(147)] = 7749,
  [SMALL_STATE(148)] = 7780,
  [SMALL_STATE(149)] = 7817,
  [SMALL_STATE(150)] = 7842,
  [SMALL_STATE(151)] = 7867,
  [SMALL_STATE(152)] = 7896,
  [SMALL_STATE(153)] = 7920,
  [SMALL_STATE(154)] = 7944,
  [SMALL_STATE(155)] = 7968,
  [SMALL_STATE(156)] = 7994,
  [SMALL_STATE(157)] = 8018,
  [SMALL_STATE(158)] = 8056,
  [SMALL_STATE(159)] = 8080,
  [SMALL_STATE(160)] = 8120,
  [SMALL_STATE(161)] = 8144,
  [SMALL_STATE(162)] = 8167,
  [SMALL_STATE(163)] = 8190,
  [SMALL_STATE(164)] = 8213,
  [SMALL_STATE(165)] = 8248,
  [SMALL_STATE(166)] = 8271,
  [SMALL_STATE(167)] = 8306,
  [SMALL_STATE(168)] = 8329,
  [SMALL_STATE(169)] = 8352,
  [SMALL_STATE(170)] = 8375,
  [SMALL_STATE(171)] = 8400,
  [SMALL_STATE(172)] = 8423,
  [SMALL_STATE(173)] = 8446,
  [SMALL_STATE(174)] = 8481,
  [SMALL_STATE(175)] = 8513,
  [SMALL_STATE(176)] = 8543,
  [SMALL_STATE(177)] = 8571,
  [SMALL_STATE(178)] = 8603,
  [SMALL_STATE(179)] = 8633,
  [SMALL_STATE(180)] = 8665,
  [SMALL_STATE(181)] = 8686,
  [SMALL_STATE(182)] = 8707,
  [SMALL_STATE(183)] = 8740,
  [SMALL_STATE(184)] = 8762,
  [SMALL_STATE(185)] = 8790,
  [SMALL_STATE(186)] = 8820,
  [SMALL_STATE(187)] = 8849,
  [SMALL_STATE(188)] = 8876,
  [SMALL_STATE(189)] = 8902,
  [SMALL_STATE(190)] = 8923,
  [SMALL_STATE(191)] = 8943,
  [SMALL_STATE(192)] = 8963,
  [SMALL_STATE(193)] = 8980,
  [SMALL_STATE(194)] = 8997,
  [SMALL_STATE(195)] = 9014,
  [SMALL_STATE(196)] = 9031,
  [SMALL_STATE(197)] = 9048,
  [SMALL_STATE(198)] = 9065,
  [SMALL_STATE(199)] = 9080,
  [SMALL_STATE(200)] = 9097,
  [SMALL_STATE(201)] = 9114,
  [SMALL_STATE(202)] = 9128,
  [SMALL_STATE(203)] = 9142,
  [SMALL_STATE(204)] = 9154,
  [SMALL_STATE(205)] = 9168,
  [SMALL_STATE(206)] = 9182,
  [SMALL_STATE(207)] = 9194,
  [SMALL_STATE(208)] = 9210,
  [SMALL_STATE(209)] = 9224,
  [SMALL_STATE(210)] = 9238,
  [SMALL_STATE(211)] = 9250,
  [SMALL_STATE(212)] = 9262,
  [SMALL_STATE(213)] = 9276,
  [SMALL_STATE(214)] = 9288,
  [SMALL_STATE(215)] = 9304,
  [SMALL_STATE(216)] = 9316,
  [SMALL_STATE(217)] = 9330,
  [SMALL_STATE(218)] = 9345,
  [SMALL_STATE(219)] = 9362,
  [SMALL_STATE(220)] = 9377,
  [SMALL_STATE(221)] = 9394,
  [SMALL_STATE(222)] = 9409,
  [SMALL_STATE(223)] = 9424,
  [SMALL_STATE(224)] = 9435,
  [SMALL_STATE(225)] = 9450,
  [SMALL_STATE(226)] = 9465,
  [SMALL_STATE(227)] = 9480,
  [SMALL_STATE(228)] = 9495,
  [SMALL_STATE(229)] = 9509,
  [SMALL_STATE(230)] = 9519,
  [SMALL_STATE(231)] = 9533,
  [SMALL_STATE(232)] = 9547,
  [SMALL_STATE(233)] = 9561,
  [SMALL_STATE(234)] = 9571,
  [SMALL_STATE(235)] = 9585,
  [SMALL_STATE(236)] = 9599,
  [SMALL_STATE(237)] = 9613,
  [SMALL_STATE(238)] = 9627,
  [SMALL_STATE(239)] = 9641,
  [SMALL_STATE(240)] = 9655,
  [SMALL_STATE(241)] = 9669,
  [SMALL_STATE(242)] = 9683,
  [SMALL_STATE(243)] = 9697,
  [SMALL_STATE(244)] = 9711,
  [SMALL_STATE(245)] = 9725,
  [SMALL_STATE(246)] = 9739,
  [SMALL_STATE(247)] = 9753,
  [SMALL_STATE(248)] = 9767,
  [SMALL_STATE(249)] = 9777,
  [SMALL_STATE(250)] = 9787,
  [SMALL_STATE(251)] = 9801,
  [SMALL_STATE(252)] = 9815,
  [SMALL_STATE(253)] = 9829,
  [SMALL_STATE(254)] = 9843,
  [SMALL_STATE(255)] = 9857,
  [SMALL_STATE(256)] = 9871,
  [SMALL_STATE(257)] = 9885,
  [SMALL_STATE(258)] = 9899,
  [SMALL_STATE(259)] = 9913,
  [SMALL_STATE(260)] = 9927,
  [SMALL_STATE(261)] = 9941,
  [SMALL_STATE(262)] = 9951,
  [SMALL_STATE(263)] = 9965,
  [SMALL_STATE(264)] = 9979,
  [SMALL_STATE(265)] = 9993,
  [SMALL_STATE(266)] = 10007,
  [SMALL_STATE(267)] = 10021,
  [SMALL_STATE(268)] = 10031,
  [SMALL_STATE(269)] = 10045,
  [SMALL_STATE(270)] = 10054,
  [SMALL_STATE(271)] = 10063,
  [SMALL_STATE(272)] = 10074,
  [SMALL_STATE(273)] = 10083,
  [SMALL_STATE(274)] = 10094,
  [SMALL_STATE(275)] = 10105,
  [SMALL_STATE(276)] = 10116,
  [SMALL_STATE(277)] = 10125,
  [SMALL_STATE(278)] = 10136,
  [SMALL_STATE(279)] = 10145,
  [SMALL_STATE(280)] = 10154,
  [SMALL_STATE(281)] = 10163,
  [SMALL_STATE(282)] = 10172,
  [SMALL_STATE(283)] = 10181,
  [SMALL_STATE(284)] = 10190,
  [SMALL_STATE(285)] = 10199,
  [SMALL_STATE(286)] = 10208,
  [SMALL_STATE(287)] = 10219,
  [SMALL_STATE(288)] = 10230,
  [SMALL_STATE(289)] = 10239,
  [SMALL_STATE(290)] = 10248,
  [SMALL_STATE(291)] = 10257,
  [SMALL_STATE(292)] = 10266,
  [SMALL_STATE(293)] = 10275,
  [SMALL_STATE(294)] = 10284,
  [SMALL_STATE(295)] = 10295,
  [SMALL_STATE(296)] = 10304,
  [SMALL_STATE(297)] = 10313,
  [SMALL_STATE(298)] = 10321,
  [SMALL_STATE(299)] = 10329,
  [SMALL_STATE(300)] = 10337,
  [SMALL_STATE(301)] = 10345,
  [SMALL_STATE(302)] = 10353,
  [SMALL_STATE(303)] = 10361,
  [SMALL_STATE(304)] = 10369,
  [SMALL_STATE(305)] = 10377,
  [SMALL_STATE(306)] = 10385,
  [SMALL_STATE(307)] = 10393,
  [SMALL_STATE(308)] = 10401,
  [SMALL_STATE(309)] = 10409,
  [SMALL_STATE(310)] = 10417,
  [SMALL_STATE(311)] = 10425,
  [SMALL_STATE(312)] = 10433,
  [SMALL_STATE(313)] = 10441,
  [SMALL_STATE(314)] = 10449,
  [SMALL_STATE(315)] = 10457,
  [SMALL_STATE(316)] = 10465,
  [SMALL_STATE(317)] = 10473,
  [SMALL_STATE(318)] = 10481,
  [SMALL_STATE(319)] = 10489,
  [SMALL_STATE(320)] = 10497,
  [SMALL_STATE(321)] = 10505,
  [SMALL_STATE(322)] = 10513,
  [SMALL_STATE(323)] = 10521,
  [SMALL_STATE(324)] = 10529,
  [SMALL_STATE(325)] = 10537,
  [SMALL_STATE(326)] = 10545,
  [SMALL_STATE(327)] = 10553,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(59),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(74),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(74),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(226),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(38),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(34),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(212),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(216),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(194),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(131),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(323),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(172),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(163),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(165),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(65),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(75),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(322),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_body, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_body, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 4, .production_id = 22),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_declaration, 4, .production_id = 22),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_body, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_body, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_statement, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_statement, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_import_on_demand, 6, .production_id = 39),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_static_import_on_demand, 6, .production_id = 39),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable_declaration, 3, .production_id = 15),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable_declaration, 3, .production_id = 15),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_statement, 5),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_statement, 5),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 5, .production_id = 36),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_declaration, 5, .production_id = 36),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_declaration, 4, .production_id = 30),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_declaration, 4, .production_id = 30),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_declaration, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable_declaration, 4, .production_id = 26),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable_declaration, 4, .production_id = 26),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 4, .production_id = 25),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_declaration, 4, .production_id = 25),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 3, .production_id = 8),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_declaration, 3, .production_id = 8),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_static_import, 6, .production_id = 38),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_static_import, 6, .production_id = 38),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield_statement, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yield_statement, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_declaration, 3, .production_id = 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_declaration, 3, .production_id = 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_import_on_demand, 5),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_import_on_demand, 5),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_type_import, 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_type_import, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unannotated_type, 1, .production_id = 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_primary_expression, 1), SHIFT(79),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_primary_expression, 1), REDUCE(sym__unannotated_type, 1, .production_id = 1),
  [264] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym_primary_expression, 1), REDUCE(sym__unannotated_type, 1, .production_id = 1), SHIFT(193),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unannotated_type, 1, .production_id = 1),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_primary_expression, 1), REDUCE(sym__unannotated_type, 1, .production_id = 1),
  [273] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym_primary_expression, 1), REDUCE(sym__unannotated_type, 1, .production_id = 1), SHIFT(301),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [279] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym_primary_expression, 1), REDUCE(sym__unannotated_type, 1, .production_id = 1), SHIFT(193),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(147),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(191),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(204),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(121),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(172),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(163),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(165),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3, .production_id = 11),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3, .production_id = 11),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_access, 4, .production_id = 24),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_access, 4, .production_id = 24),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 5, .production_id = 35),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 5, .production_id = 35),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_literal, 3, .dynamic_precedence = 17),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_literal, 3, .dynamic_precedence = 17),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_primary_expression, 1), SHIFT(301),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 13),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 13),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expression, 4, .production_id = 19),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4, .production_id = 19),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda_expression, 3, .production_id = 10),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_expression, 3, .production_id = 10),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expression, 5, .production_id = 31),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 5, .production_id = 31),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 9),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_identifier, 3, .production_id = 21),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 3, .production_id = 21),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_marker_annotation, 2, .production_id = 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_annotation, 2, .production_id = 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element_value, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_argument_list, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_argument_list, 3),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_argument_list, 4),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_argument_list, 4),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 3, .production_id = 7),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 3, .production_id = 7),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_argument_list, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_argument_list, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 1),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(204),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(123),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimensions, 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimensions, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dimensions_repeat1, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(298),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(212),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(212),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(130),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 1),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_expr_repeat1, 1), REDUCE(aux_sym_modifiers_repeat1, 1),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dimensions_expr_repeat1, 1),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 2, .production_id = 34),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 2, .production_id = 34),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 3, .production_id = 40),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 3, .production_id = 40),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_receiver_parameter, 5),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_receiver_parameter, 5),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_receiver_parameter, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_receiver_parameter, 2),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unannotated_type, 1),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unannotated_type, 1),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_receiver_parameter, 4),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_receiver_parameter, 4),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_receiver_parameter, 3),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_receiver_parameter, 3),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dimensions_expr_repeat1, 2),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimensions_expr_repeat1, 2),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_expr_repeat1, 2), SHIFT_REPEAT(204),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 12),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 12),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_type_identifier, 4, .production_id = 23),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 4, .production_id = 23),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dimensions_repeat1, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 3),
  [575] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dimensions_expr_repeat1, 1), REDUCE(aux_sym_modifiers_repeat1, 1),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_type_identifier, 4, .production_id = 29),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 4, .production_id = 29),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 17),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 17),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 3),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10, .production_id = 1),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10, .production_id = 1),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_type, 1),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_type, 1),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 2),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 2),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 4),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 2, .production_id = 4),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, .production_id = 4),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integral_type, 1),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integral_type, 1),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotated_type, 2),
  [626] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__unannotated_type, 1), SHIFT(192),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 4),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declarator, 1, .production_id = 3),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_declarator, 2, .production_id = 42),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_expr_repeat1, 2), SHIFT_REPEAT(212),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 4),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 2),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 2),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 3),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 5),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 1),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 2, .production_id = 32),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [714] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(221),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2), SHIFT_REPEAT(102),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1, .production_id = 1),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 3),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 2),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_argument_list_repeat1, 2),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_argument_list_repeat1, 2), SHIFT_REPEAT(271),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_value_array_initializer, 3),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_value_array_initializer, 2),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(190),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2), SHIFT_REPEAT(105),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_throws, 3),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_declarator_list, 1, .production_id = 5),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [791] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2), SHIFT_REPEAT(71),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__variable_declarator_list_repeat1, 2, .production_id = 28), SHIFT_REPEAT(208),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__variable_declarator_list_repeat1, 2, .production_id = 28),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_value_array_initializer, 5),
  [809] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cast_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(104),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cast_expression_repeat1, 2, .production_id = 20),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_throws, 2),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_header, 2, .production_id = 33),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inferred_parameters_repeat1, 2),
  [826] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inferred_parameters_repeat1, 2), SHIFT_REPEAT(223),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_header, 4, .production_id = 43),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [833] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_value_array_initializer_repeat1, 2), SHIFT_REPEAT(15),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_value_array_initializer_repeat1, 2),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2),
  [842] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2), SHIFT_REPEAT(87),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_value_array_initializer, 4),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_header, 3, .production_id = 41),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_declarator_list, 2, .production_id = 16),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declarator, 2, .production_id = 14),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cast_expression_repeat1, 2, .production_id = 18),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_declarator, 3, .production_id = 44),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__variable_declarator_list_repeat1, 2, .production_id = 27),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 3, .production_id = 32),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 2, .production_id = 1),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_value_pair, 3, .production_id = 37),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spread_parameter, 3),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 3),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter, 2, .production_id = 6),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spread_parameter, 4),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wildcard_bounds, 2),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter, 3, .production_id = 18),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_header, 4, .production_id = 41),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inferred_parameters, 3),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_header, 3, .production_id = 33),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_header, 5, .production_id = 43),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inferred_parameters, 4),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asterisk, 1),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [941] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_aidl(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
