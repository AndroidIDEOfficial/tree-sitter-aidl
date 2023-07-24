#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 334
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 164
#define ALIAS_COUNT 1
#define TOKEN_COUNT 82
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
  anon_sym_COLON_COLON = 43,
  anon_sym_new = 44,
  anon_sym_QMARK = 45,
  anon_sym_extends = 46,
  anon_sym_SEMI = 47,
  anon_sym_LBRACE = 48,
  anon_sym_RBRACE = 49,
  anon_sym_assert = 50,
  anon_sym_COLON = 51,
  anon_sym_return = 52,
  anon_sym_yield = 53,
  anon_sym_AT = 54,
  anon_sym_package = 55,
  anon_sym_import = 56,
  anon_sym_static = 57,
  anon_sym_oneway = 58,
  anon_sym_in = 59,
  anon_sym_out = 60,
  anon_sym_inout = 61,
  anon_sym_default = 62,
  anon_sym_interface = 63,
  anon_sym_byte = 64,
  anon_sym_short = 65,
  anon_sym_int = 66,
  anon_sym_long = 67,
  anon_sym_char = 68,
  anon_sym_float = 69,
  anon_sym_double = 70,
  sym_boolean_type = 71,
  sym_void_type = 72,
  anon_sym_DOT_DOT_DOT = 73,
  anon_sym_throws = 74,
  anon_sym_open = 75,
  anon_sym_module = 76,
  anon_sym_record = 77,
  sym_this = 78,
  sym_super = 79,
  sym_line_comment = 80,
  sym_block_comment = 81,
  sym_program = 82,
  sym__literal = 83,
  sym_string_literal = 84,
  sym_expression = 85,
  sym_cast_expression = 86,
  sym_assignment_expression = 87,
  sym_binary_expression = 88,
  sym_lambda_expression = 89,
  sym_inferred_parameters = 90,
  sym_primary_expression = 91,
  sym_parenthesized_expression = 92,
  sym_class_literal = 93,
  sym_field_access = 94,
  sym_array_access = 95,
  sym_method_reference = 96,
  sym_type_arguments = 97,
  sym_wildcard = 98,
  sym__wildcard_bounds = 99,
  sym_dimensions = 100,
  sym_statement = 101,
  sym_block = 102,
  sym_expression_statement = 103,
  sym_assert_statement = 104,
  sym_return_statement = 105,
  sym_yield_statement = 106,
  sym__annotation = 107,
  sym_marker_annotation = 108,
  sym_annotation = 109,
  sym_annotation_argument_list = 110,
  sym_element_value_pair = 111,
  sym__element_value = 112,
  sym_element_value_array_initializer = 113,
  sym_declaration = 114,
  sym_package_declaration = 115,
  sym_import_declaration = 116,
  sym_single_type_import = 117,
  sym_type_import_on_demand = 118,
  sym_single_static_import = 119,
  sym_static_import_on_demand = 120,
  sym_asterisk = 121,
  sym_modifiers = 122,
  sym_type_parameters = 123,
  sym_type_parameter = 124,
  sym_type_bound = 125,
  sym_scoped_identifier = 126,
  sym_interface_declaration = 127,
  sym_interface_body = 128,
  sym__variable_declarator_list = 129,
  sym_variable_declarator = 130,
  sym__type = 131,
  sym__unannotated_type = 132,
  sym_annotated_type = 133,
  sym_scoped_type_identifier = 134,
  sym_generic_type = 135,
  sym_array_type = 136,
  sym_integral_type = 137,
  sym_floating_point_type = 138,
  sym__method_header = 139,
  sym__method_declarator = 140,
  sym_formal_parameters = 141,
  sym_formal_parameter = 142,
  sym_receiver_parameter = 143,
  sym_spread_parameter = 144,
  sym_throws = 145,
  sym_local_variable_declaration = 146,
  sym_method_declaration = 147,
  aux_sym_program_repeat1 = 148,
  aux_sym_string_literal_repeat1 = 149,
  aux_sym_cast_expression_repeat1 = 150,
  aux_sym_inferred_parameters_repeat1 = 151,
  aux_sym_dimensions_expr_repeat1 = 152,
  aux_sym_type_arguments_repeat1 = 153,
  aux_sym_dimensions_repeat1 = 154,
  aux_sym_annotation_argument_list_repeat1 = 155,
  aux_sym_element_value_array_initializer_repeat1 = 156,
  aux_sym_modifiers_repeat1 = 157,
  aux_sym_type_parameters_repeat1 = 158,
  aux_sym_type_bound_repeat1 = 159,
  aux_sym_type_list_repeat1 = 160,
  aux_sym_interface_body_repeat1 = 161,
  aux_sym__variable_declarator_list_repeat1 = 162,
  aux_sym_formal_parameters_repeat1 = 163,
  alias_sym_type_identifier = 164,
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
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_new] = "new",
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
  [sym_method_reference] = "method_reference",
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
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_new] = anon_sym_new,
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
  [sym_method_reference] = sym_method_reference,
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
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
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
  [sym_method_reference] = {
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
  [10] = 9,
  [11] = 11,
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
  [114] = 101,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 108,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 127,
  [134] = 132,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 113,
  [140] = 121,
  [141] = 123,
  [142] = 118,
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
  [155] = 155,
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
  [172] = 148,
  [173] = 173,
  [174] = 144,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 169,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 149,
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
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 209,
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
  [236] = 234,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 235,
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
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 323,
  [331] = 331,
  [332] = 326,
  [333] = 333,
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
      if (eof) ADVANCE(39);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '%') ADVANCE(94);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == ',') ADVANCE(99);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == ';') ADVANCE(106);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == '?') ADVANCE(105);
      if (lookahead == '@') ADVANCE(111);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == ']') ADVANCE(101);
      if (lookahead == '^') ADVANCE(93);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '}') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(113);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '%') ADVANCE(94);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == ',') ADVANCE(99);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == ';') ADVANCE(106);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == '?') ADVANCE(105);
      if (lookahead == '@') ADVANCE(111);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == ']') ADVANCE(101);
      if (lookahead == '^') ADVANCE(93);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '}') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(113);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == ',') ADVANCE(99);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == ';') ADVANCE(106);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '?') ADVANCE(105);
      if (lookahead == '@') ADVANCE(111);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(113);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(114);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(112);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(104);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 13:
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(4);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(71);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 21:
      if (lookahead == '{') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == '}') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 24:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 25:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(50);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(48);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 37:
      if (eof) ADVANCE(39);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '%') ADVANCE(94);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == ',') ADVANCE(99);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == ';') ADVANCE(106);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == '?') ADVANCE(105);
      if (lookahead == '@') ADVANCE(111);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == ']') ADVANCE(101);
      if (lookahead == '^') ADVANCE(93);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '}') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '%') ADVANCE(94);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == ',') ADVANCE(99);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == ';') ADVANCE(106);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == '@') ADVANCE(111);
      if (lookahead == ']') ADVANCE(101);
      if (lookahead == '^') ADVANCE(93);
      if (lookahead == '{') ADVANCE(107);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '}') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(113);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(25);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(40);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(26);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(9);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(23);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(40);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(23);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(43);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(24);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(43);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(43);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_octal_integer_literal);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_octal_integer_literal);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(47);
      if (lookahead == '_') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(49);
      if (lookahead == '_') ADVANCE(25);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(24);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(29);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_character_literal);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(68);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(85);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '>') ADVANCE(96);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(95);
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(98);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(114);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(86);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>') ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(8);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(104);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(114);
      END_STATE();
    case 115:
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
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 'p') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(39);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == 'h') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(51);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 32:
      if (lookahead == 'w') ADVANCE(61);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(67);
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(83);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(90);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 63:
      if (lookahead == 'w') ADVANCE(93);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 66:
      if (lookahead == 'k') ADVANCE(95);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_this);
      END_STATE();
    case 102:
      if (lookahead == 'w') ADVANCE(125);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_void_type);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 111:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_inout);
      END_STATE();
    case 116:
      if (lookahead == 'f') ADVANCE(133);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 118:
      if (lookahead == 'y') ADVANCE(135);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(136);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 123:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_super);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_oneway);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_throws);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_boolean_type);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 144:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 38},
  [2] = {.lex_state = 38},
  [3] = {.lex_state = 38},
  [4] = {.lex_state = 38},
  [5] = {.lex_state = 38},
  [6] = {.lex_state = 38},
  [7] = {.lex_state = 38},
  [8] = {.lex_state = 38},
  [9] = {.lex_state = 38},
  [10] = {.lex_state = 38},
  [11] = {.lex_state = 38},
  [12] = {.lex_state = 38},
  [13] = {.lex_state = 38},
  [14] = {.lex_state = 38},
  [15] = {.lex_state = 38},
  [16] = {.lex_state = 38},
  [17] = {.lex_state = 38},
  [18] = {.lex_state = 38},
  [19] = {.lex_state = 38},
  [20] = {.lex_state = 38},
  [21] = {.lex_state = 38},
  [22] = {.lex_state = 38},
  [23] = {.lex_state = 38},
  [24] = {.lex_state = 38},
  [25] = {.lex_state = 38},
  [26] = {.lex_state = 38},
  [27] = {.lex_state = 38},
  [28] = {.lex_state = 38},
  [29] = {.lex_state = 38},
  [30] = {.lex_state = 38},
  [31] = {.lex_state = 38},
  [32] = {.lex_state = 38},
  [33] = {.lex_state = 38},
  [34] = {.lex_state = 38},
  [35] = {.lex_state = 38},
  [36] = {.lex_state = 38},
  [37] = {.lex_state = 38},
  [38] = {.lex_state = 38},
  [39] = {.lex_state = 38},
  [40] = {.lex_state = 38},
  [41] = {.lex_state = 38},
  [42] = {.lex_state = 38},
  [43] = {.lex_state = 38},
  [44] = {.lex_state = 38},
  [45] = {.lex_state = 38},
  [46] = {.lex_state = 38},
  [47] = {.lex_state = 38},
  [48] = {.lex_state = 38},
  [49] = {.lex_state = 38},
  [50] = {.lex_state = 38},
  [51] = {.lex_state = 38},
  [52] = {.lex_state = 38},
  [53] = {.lex_state = 38},
  [54] = {.lex_state = 38},
  [55] = {.lex_state = 38},
  [56] = {.lex_state = 38},
  [57] = {.lex_state = 38},
  [58] = {.lex_state = 38},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 3},
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
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 3},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 3},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 3},
  [221] = {.lex_state = 3},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 3},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 3},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 3},
  [233] = {.lex_state = 3},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 3},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 3},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 3},
  [252] = {.lex_state = 3},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 3},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 3},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 3},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 3},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 1},
  [282] = {.lex_state = 3},
  [283] = {.lex_state = 1},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 3},
  [287] = {.lex_state = 3},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 1},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 1},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 3},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 1},
  [301] = {.lex_state = 3},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
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
  [320] = {.lex_state = 1},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 1},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 1},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
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
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
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
    [sym_program] = STATE(304),
    [sym__literal] = STATE(78),
    [sym_string_literal] = STATE(77),
    [sym_expression] = STATE(136),
    [sym_cast_expression] = STATE(94),
    [sym_assignment_expression] = STATE(94),
    [sym_binary_expression] = STATE(94),
    [sym_lambda_expression] = STATE(94),
    [sym_inferred_parameters] = STATE(312),
    [sym_primary_expression] = STATE(73),
    [sym_parenthesized_expression] = STATE(78),
    [sym_class_literal] = STATE(78),
    [sym_field_access] = STATE(69),
    [sym_array_access] = STATE(69),
    [sym_method_reference] = STATE(78),
    [sym_statement] = STATE(5),
    [sym_block] = STATE(49),
    [sym_expression_statement] = STATE(49),
    [sym_assert_statement] = STATE(49),
    [sym_return_statement] = STATE(49),
    [sym_yield_statement] = STATE(49),
    [sym__annotation] = STATE(148),
    [sym_marker_annotation] = STATE(148),
    [sym_annotation] = STATE(148),
    [sym_declaration] = STATE(49),
    [sym_package_declaration] = STATE(45),
    [sym_import_declaration] = STATE(45),
    [sym_single_type_import] = STATE(51),
    [sym_type_import_on_demand] = STATE(51),
    [sym_single_static_import] = STATE(51),
    [sym_static_import_on_demand] = STATE(51),
    [sym_modifiers] = STATE(147),
    [sym_interface_declaration] = STATE(45),
    [sym__type] = STATE(308),
    [sym__unannotated_type] = STATE(150),
    [sym_annotated_type] = STATE(202),
    [sym_scoped_type_identifier] = STATE(174),
    [sym_generic_type] = STATE(186),
    [sym_array_type] = STATE(165),
    [sym_integral_type] = STATE(165),
    [sym_floating_point_type] = STATE(165),
    [sym_formal_parameters] = STATE(312),
    [sym_local_variable_declaration] = STATE(49),
    [aux_sym_program_repeat1] = STATE(5),
    [aux_sym_dimensions_expr_repeat1] = STATE(110),
    [aux_sym_modifiers_repeat1] = STATE(132),
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
    [sym__literal] = STATE(78),
    [sym_string_literal] = STATE(77),
    [sym_expression] = STATE(136),
    [sym_cast_expression] = STATE(94),
    [sym_assignment_expression] = STATE(94),
    [sym_binary_expression] = STATE(94),
    [sym_lambda_expression] = STATE(94),
    [sym_inferred_parameters] = STATE(312),
    [sym_primary_expression] = STATE(73),
    [sym_parenthesized_expression] = STATE(78),
    [sym_class_literal] = STATE(78),
    [sym_field_access] = STATE(69),
    [sym_array_access] = STATE(69),
    [sym_method_reference] = STATE(78),
    [sym_statement] = STATE(2),
    [sym_block] = STATE(49),
    [sym_expression_statement] = STATE(49),
    [sym_assert_statement] = STATE(49),
    [sym_return_statement] = STATE(49),
    [sym_yield_statement] = STATE(49),
    [sym__annotation] = STATE(148),
    [sym_marker_annotation] = STATE(148),
    [sym_annotation] = STATE(148),
    [sym_declaration] = STATE(49),
    [sym_package_declaration] = STATE(45),
    [sym_import_declaration] = STATE(45),
    [sym_single_type_import] = STATE(51),
    [sym_type_import_on_demand] = STATE(51),
    [sym_single_static_import] = STATE(51),
    [sym_static_import_on_demand] = STATE(51),
    [sym_modifiers] = STATE(147),
    [sym_interface_declaration] = STATE(45),
    [sym__type] = STATE(308),
    [sym__unannotated_type] = STATE(150),
    [sym_annotated_type] = STATE(202),
    [sym_scoped_type_identifier] = STATE(174),
    [sym_generic_type] = STATE(186),
    [sym_array_type] = STATE(165),
    [sym_integral_type] = STATE(165),
    [sym_floating_point_type] = STATE(165),
    [sym_formal_parameters] = STATE(312),
    [sym_local_variable_declaration] = STATE(49),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_dimensions_expr_repeat1] = STATE(110),
    [aux_sym_modifiers_repeat1] = STATE(132),
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
    [sym__literal] = STATE(78),
    [sym_string_literal] = STATE(77),
    [sym_expression] = STATE(136),
    [sym_cast_expression] = STATE(94),
    [sym_assignment_expression] = STATE(94),
    [sym_binary_expression] = STATE(94),
    [sym_lambda_expression] = STATE(94),
    [sym_inferred_parameters] = STATE(312),
    [sym_primary_expression] = STATE(73),
    [sym_parenthesized_expression] = STATE(78),
    [sym_class_literal] = STATE(78),
    [sym_field_access] = STATE(69),
    [sym_array_access] = STATE(69),
    [sym_method_reference] = STATE(78),
    [sym_statement] = STATE(2),
    [sym_block] = STATE(49),
    [sym_expression_statement] = STATE(49),
    [sym_assert_statement] = STATE(49),
    [sym_return_statement] = STATE(49),
    [sym_yield_statement] = STATE(49),
    [sym__annotation] = STATE(148),
    [sym_marker_annotation] = STATE(148),
    [sym_annotation] = STATE(148),
    [sym_declaration] = STATE(49),
    [sym_package_declaration] = STATE(45),
    [sym_import_declaration] = STATE(45),
    [sym_single_type_import] = STATE(51),
    [sym_type_import_on_demand] = STATE(51),
    [sym_single_static_import] = STATE(51),
    [sym_static_import_on_demand] = STATE(51),
    [sym_modifiers] = STATE(147),
    [sym_interface_declaration] = STATE(45),
    [sym__type] = STATE(308),
    [sym__unannotated_type] = STATE(150),
    [sym_annotated_type] = STATE(202),
    [sym_scoped_type_identifier] = STATE(174),
    [sym_generic_type] = STATE(186),
    [sym_array_type] = STATE(165),
    [sym_integral_type] = STATE(165),
    [sym_floating_point_type] = STATE(165),
    [sym_formal_parameters] = STATE(312),
    [sym_local_variable_declaration] = STATE(49),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_dimensions_expr_repeat1] = STATE(110),
    [aux_sym_modifiers_repeat1] = STATE(132),
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
    [anon_sym_RBRACE] = ACTIONS(114),
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
    [sym__literal] = STATE(78),
    [sym_string_literal] = STATE(77),
    [sym_expression] = STATE(136),
    [sym_cast_expression] = STATE(94),
    [sym_assignment_expression] = STATE(94),
    [sym_binary_expression] = STATE(94),
    [sym_lambda_expression] = STATE(94),
    [sym_inferred_parameters] = STATE(312),
    [sym_primary_expression] = STATE(73),
    [sym_parenthesized_expression] = STATE(78),
    [sym_class_literal] = STATE(78),
    [sym_field_access] = STATE(69),
    [sym_array_access] = STATE(69),
    [sym_method_reference] = STATE(78),
    [sym_statement] = STATE(3),
    [sym_block] = STATE(49),
    [sym_expression_statement] = STATE(49),
    [sym_assert_statement] = STATE(49),
    [sym_return_statement] = STATE(49),
    [sym_yield_statement] = STATE(49),
    [sym__annotation] = STATE(148),
    [sym_marker_annotation] = STATE(148),
    [sym_annotation] = STATE(148),
    [sym_declaration] = STATE(49),
    [sym_package_declaration] = STATE(45),
    [sym_import_declaration] = STATE(45),
    [sym_single_type_import] = STATE(51),
    [sym_type_import_on_demand] = STATE(51),
    [sym_single_static_import] = STATE(51),
    [sym_static_import_on_demand] = STATE(51),
    [sym_modifiers] = STATE(147),
    [sym_interface_declaration] = STATE(45),
    [sym__type] = STATE(308),
    [sym__unannotated_type] = STATE(150),
    [sym_annotated_type] = STATE(202),
    [sym_scoped_type_identifier] = STATE(174),
    [sym_generic_type] = STATE(186),
    [sym_array_type] = STATE(165),
    [sym_integral_type] = STATE(165),
    [sym_floating_point_type] = STATE(165),
    [sym_formal_parameters] = STATE(312),
    [sym_local_variable_declaration] = STATE(49),
    [aux_sym_program_repeat1] = STATE(3),
    [aux_sym_dimensions_expr_repeat1] = STATE(110),
    [aux_sym_modifiers_repeat1] = STATE(132),
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
    [sym__literal] = STATE(78),
    [sym_string_literal] = STATE(77),
    [sym_expression] = STATE(136),
    [sym_cast_expression] = STATE(94),
    [sym_assignment_expression] = STATE(94),
    [sym_binary_expression] = STATE(94),
    [sym_lambda_expression] = STATE(94),
    [sym_inferred_parameters] = STATE(312),
    [sym_primary_expression] = STATE(73),
    [sym_parenthesized_expression] = STATE(78),
    [sym_class_literal] = STATE(78),
    [sym_field_access] = STATE(69),
    [sym_array_access] = STATE(69),
    [sym_method_reference] = STATE(78),
    [sym_statement] = STATE(2),
    [sym_block] = STATE(49),
    [sym_expression_statement] = STATE(49),
    [sym_assert_statement] = STATE(49),
    [sym_return_statement] = STATE(49),
    [sym_yield_statement] = STATE(49),
    [sym__annotation] = STATE(148),
    [sym_marker_annotation] = STATE(148),
    [sym_annotation] = STATE(148),
    [sym_declaration] = STATE(49),
    [sym_package_declaration] = STATE(45),
    [sym_import_declaration] = STATE(45),
    [sym_single_type_import] = STATE(51),
    [sym_type_import_on_demand] = STATE(51),
    [sym_single_static_import] = STATE(51),
    [sym_static_import_on_demand] = STATE(51),
    [sym_modifiers] = STATE(147),
    [sym_interface_declaration] = STATE(45),
    [sym__type] = STATE(308),
    [sym__unannotated_type] = STATE(150),
    [sym_annotated_type] = STATE(202),
    [sym_scoped_type_identifier] = STATE(174),
    [sym_generic_type] = STATE(186),
    [sym_array_type] = STATE(165),
    [sym_integral_type] = STATE(165),
    [sym_floating_point_type] = STATE(165),
    [sym_formal_parameters] = STATE(312),
    [sym_local_variable_declaration] = STATE(49),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_dimensions_expr_repeat1] = STATE(110),
    [aux_sym_modifiers_repeat1] = STATE(132),
    [ts_builtin_sym_end] = ACTIONS(118),
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
  [6] = {
    [sym__literal] = STATE(78),
    [sym_string_literal] = STATE(77),
    [sym_expression] = STATE(129),
    [sym_cast_expression] = STATE(94),
    [sym_assignment_expression] = STATE(94),
    [sym_binary_expression] = STATE(94),
    [sym_lambda_expression] = STATE(94),
    [sym_inferred_parameters] = STATE(312),
    [sym_primary_expression] = STATE(73),
    [sym_parenthesized_expression] = STATE(78),
    [sym_class_literal] = STATE(78),
    [sym_field_access] = STATE(69),
    [sym_array_access] = STATE(69),
    [sym_method_reference] = STATE(78),
    [sym__annotation] = STATE(172),
    [sym_marker_annotation] = STATE(172),
    [sym_annotation] = STATE(172),
    [sym_modifiers] = STATE(154),
    [sym__type] = STATE(224),
    [sym__unannotated_type] = STATE(137),
    [sym_annotated_type] = STATE(202),
    [sym_scoped_type_identifier] = STATE(174),
    [sym_generic_type] = STATE(186),
    [sym_array_type] = STATE(165),
    [sym_integral_type] = STATE(165),
    [sym_floating_point_type] = STATE(165),
    [sym_formal_parameters] = STATE(312),
    [sym_formal_parameter] = STATE(271),
    [sym_receiver_parameter] = STATE(70),
    [sym_spread_parameter] = STATE(271),
    [aux_sym_dimensions_expr_repeat1] = STATE(126),
    [aux_sym_modifiers_repeat1] = STATE(134),
    [sym_identifier] = ACTIONS(120),
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
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_AT] = ACTIONS(124),
    [anon_sym_oneway] = ACTIONS(126),
    [anon_sym_in] = ACTIONS(126),
    [anon_sym_out] = ACTIONS(126),
    [anon_sym_inout] = ACTIONS(126),
    [anon_sym_byte] = ACTIONS(37),
    [anon_sym_short] = ACTIONS(37),
    [anon_sym_int] = ACTIONS(37),
    [anon_sym_long] = ACTIONS(37),
    [anon_sym_char] = ACTIONS(37),
    [anon_sym_float] = ACTIONS(39),
    [anon_sym_double] = ACTIONS(39),
    [sym_boolean_type] = ACTIONS(41),
    [sym_void_type] = ACTIONS(41),
    [anon_sym_open] = ACTIONS(128),
    [anon_sym_module] = ACTIONS(128),
    [anon_sym_record] = ACTIONS(128),
    [sym_this] = ACTIONS(45),
    [sym_super] = ACTIONS(47),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [sym_identifier] = ACTIONS(132),
    [sym_decimal_integer_literal] = ACTIONS(132),
    [sym_hex_integer_literal] = ACTIONS(132),
    [sym_octal_integer_literal] = ACTIONS(130),
    [sym_binary_integer_literal] = ACTIONS(130),
    [sym_decimal_floating_point_literal] = ACTIONS(130),
    [sym_hex_floating_point_literal] = ACTIONS(132),
    [sym_true] = ACTIONS(132),
    [sym_false] = ACTIONS(132),
    [sym_character_literal] = ACTIONS(130),
    [anon_sym_DQUOTE] = ACTIONS(130),
    [sym_null_literal] = ACTIONS(132),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_AMP] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(130),
    [anon_sym_GT] = ACTIONS(132),
    [anon_sym_LT] = ACTIONS(132),
    [anon_sym_GT_EQ] = ACTIONS(130),
    [anon_sym_LT_EQ] = ACTIONS(130),
    [anon_sym_EQ_EQ] = ACTIONS(130),
    [anon_sym_BANG_EQ] = ACTIONS(130),
    [anon_sym_AMP_AMP] = ACTIONS(130),
    [anon_sym_PIPE_PIPE] = ACTIONS(130),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [anon_sym_STAR] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(132),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_CARET] = ACTIONS(130),
    [anon_sym_PERCENT] = ACTIONS(130),
    [anon_sym_LT_LT] = ACTIONS(130),
    [anon_sym_GT_GT] = ACTIONS(132),
    [anon_sym_GT_GT_GT] = ACTIONS(130),
    [anon_sym_COMMA] = ACTIONS(130),
    [anon_sym_RBRACK] = ACTIONS(130),
    [anon_sym_SEMI] = ACTIONS(130),
    [anon_sym_LBRACE] = ACTIONS(130),
    [anon_sym_RBRACE] = ACTIONS(130),
    [anon_sym_assert] = ACTIONS(132),
    [anon_sym_COLON] = ACTIONS(130),
    [anon_sym_return] = ACTIONS(132),
    [anon_sym_yield] = ACTIONS(132),
    [anon_sym_AT] = ACTIONS(130),
    [anon_sym_package] = ACTIONS(132),
    [anon_sym_import] = ACTIONS(132),
    [anon_sym_oneway] = ACTIONS(132),
    [anon_sym_in] = ACTIONS(132),
    [anon_sym_out] = ACTIONS(132),
    [anon_sym_inout] = ACTIONS(132),
    [anon_sym_interface] = ACTIONS(132),
    [anon_sym_byte] = ACTIONS(132),
    [anon_sym_short] = ACTIONS(132),
    [anon_sym_int] = ACTIONS(132),
    [anon_sym_long] = ACTIONS(132),
    [anon_sym_char] = ACTIONS(132),
    [anon_sym_float] = ACTIONS(132),
    [anon_sym_double] = ACTIONS(132),
    [sym_boolean_type] = ACTIONS(132),
    [sym_void_type] = ACTIONS(132),
    [anon_sym_open] = ACTIONS(132),
    [anon_sym_module] = ACTIONS(132),
    [anon_sym_record] = ACTIONS(132),
    [sym_this] = ACTIONS(132),
    [sym_super] = ACTIONS(132),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [sym_identifier] = ACTIONS(136),
    [sym_decimal_integer_literal] = ACTIONS(136),
    [sym_hex_integer_literal] = ACTIONS(136),
    [sym_octal_integer_literal] = ACTIONS(134),
    [sym_binary_integer_literal] = ACTIONS(134),
    [sym_decimal_floating_point_literal] = ACTIONS(134),
    [sym_hex_floating_point_literal] = ACTIONS(136),
    [sym_true] = ACTIONS(136),
    [sym_false] = ACTIONS(136),
    [sym_character_literal] = ACTIONS(134),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [sym_null_literal] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_AMP] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(134),
    [anon_sym_GT] = ACTIONS(136),
    [anon_sym_LT] = ACTIONS(136),
    [anon_sym_GT_EQ] = ACTIONS(134),
    [anon_sym_LT_EQ] = ACTIONS(134),
    [anon_sym_EQ_EQ] = ACTIONS(134),
    [anon_sym_BANG_EQ] = ACTIONS(134),
    [anon_sym_AMP_AMP] = ACTIONS(134),
    [anon_sym_PIPE_PIPE] = ACTIONS(134),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_SLASH] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_CARET] = ACTIONS(134),
    [anon_sym_PERCENT] = ACTIONS(134),
    [anon_sym_LT_LT] = ACTIONS(134),
    [anon_sym_GT_GT] = ACTIONS(136),
    [anon_sym_GT_GT_GT] = ACTIONS(134),
    [anon_sym_COMMA] = ACTIONS(134),
    [anon_sym_RBRACK] = ACTIONS(134),
    [anon_sym_SEMI] = ACTIONS(134),
    [anon_sym_LBRACE] = ACTIONS(134),
    [anon_sym_RBRACE] = ACTIONS(134),
    [anon_sym_assert] = ACTIONS(136),
    [anon_sym_COLON] = ACTIONS(134),
    [anon_sym_return] = ACTIONS(136),
    [anon_sym_yield] = ACTIONS(136),
    [anon_sym_AT] = ACTIONS(134),
    [anon_sym_package] = ACTIONS(136),
    [anon_sym_import] = ACTIONS(136),
    [anon_sym_oneway] = ACTIONS(136),
    [anon_sym_in] = ACTIONS(136),
    [anon_sym_out] = ACTIONS(136),
    [anon_sym_inout] = ACTIONS(136),
    [anon_sym_interface] = ACTIONS(136),
    [anon_sym_byte] = ACTIONS(136),
    [anon_sym_short] = ACTIONS(136),
    [anon_sym_int] = ACTIONS(136),
    [anon_sym_long] = ACTIONS(136),
    [anon_sym_char] = ACTIONS(136),
    [anon_sym_float] = ACTIONS(136),
    [anon_sym_double] = ACTIONS(136),
    [sym_boolean_type] = ACTIONS(136),
    [sym_void_type] = ACTIONS(136),
    [anon_sym_open] = ACTIONS(136),
    [anon_sym_module] = ACTIONS(136),
    [anon_sym_record] = ACTIONS(136),
    [sym_this] = ACTIONS(136),
    [sym_super] = ACTIONS(136),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 32,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_this,
    ACTIONS(47), 1,
      sym_super,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_primary_expression,
    STATE(77), 1,
      sym_string_literal,
    STATE(109), 1,
      sym_expression,
    STATE(124), 1,
      aux_sym_dimensions_expr_repeat1,
    STATE(174), 1,
      sym_scoped_type_identifier,
    STATE(186), 1,
      sym_generic_type,
    STATE(192), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(234), 1,
      sym_element_value_pair,
    STATE(308), 1,
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
    STATE(69), 2,
      sym_field_access,
      sym_array_access,
    STATE(312), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    STATE(326), 2,
      sym__element_value,
      sym_element_value_array_initializer,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(177), 3,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(78), 4,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
      sym_method_reference,
    STATE(94), 4,
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
  [127] = 32,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_this,
    ACTIONS(47), 1,
      sym_super,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      sym_primary_expression,
    STATE(77), 1,
      sym_string_literal,
    STATE(109), 1,
      sym_expression,
    STATE(124), 1,
      aux_sym_dimensions_expr_repeat1,
    STATE(174), 1,
      sym_scoped_type_identifier,
    STATE(186), 1,
      sym_generic_type,
    STATE(192), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(236), 1,
      sym_element_value_pair,
    STATE(308), 1,
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
    STATE(69), 2,
      sym_field_access,
      sym_array_access,
    STATE(312), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    STATE(332), 2,
      sym__element_value,
      sym_element_value_array_initializer,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(177), 3,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(78), 4,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
      sym_method_reference,
    STATE(94), 4,
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
  [254] = 32,
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
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      sym_primary_expression,
    STATE(77), 1,
      sym_string_literal,
    STATE(109), 1,
      sym_expression,
    STATE(124), 1,
      aux_sym_dimensions_expr_repeat1,
    STATE(174), 1,
      sym_scoped_type_identifier,
    STATE(186), 1,
      sym_generic_type,
    STATE(192), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(308), 1,
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
    STATE(69), 2,
      sym_field_access,
      sym_array_access,
    STATE(240), 2,
      sym__element_value,
      sym_element_value_array_initializer,
    STATE(312), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(177), 3,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(78), 4,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
      sym_method_reference,
    STATE(94), 4,
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
  [381] = 31,
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
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      sym_primary_expression,
    STATE(77), 1,
      sym_string_literal,
    STATE(109), 1,
      sym_expression,
    STATE(124), 1,
      aux_sym_dimensions_expr_repeat1,
    STATE(174), 1,
      sym_scoped_type_identifier,
    STATE(186), 1,
      sym_generic_type,
    STATE(192), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(308), 1,
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
    STATE(69), 2,
      sym_field_access,
      sym_array_access,
    STATE(294), 2,
      sym__element_value,
      sym_element_value_array_initializer,
    STATE(312), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(177), 3,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(78), 4,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
      sym_method_reference,
    STATE(94), 4,
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
  [505] = 31,
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
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      sym_primary_expression,
    STATE(77), 1,
      sym_string_literal,
    STATE(109), 1,
      sym_expression,
    STATE(124), 1,
      aux_sym_dimensions_expr_repeat1,
    STATE(174), 1,
      sym_scoped_type_identifier,
    STATE(186), 1,
      sym_generic_type,
    STATE(192), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(308), 1,
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
    STATE(69), 2,
      sym_field_access,
      sym_array_access,
    STATE(294), 2,
      sym__element_value,
      sym_element_value_array_initializer,
    STATE(312), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(177), 3,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(78), 4,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
      sym_method_reference,
    STATE(94), 4,
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
  [629] = 30,
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
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_primary_expression,
    STATE(77), 1,
      sym_string_literal,
    STATE(109), 1,
      sym_expression,
    STATE(124), 1,
      aux_sym_dimensions_expr_repeat1,
    STATE(174), 1,
      sym_scoped_type_identifier,
    STATE(186), 1,
      sym_generic_type,
    STATE(192), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(308), 1,
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
    STATE(69), 2,
      sym_field_access,
      sym_array_access,
    STATE(294), 2,
      sym__element_value,
      sym_element_value_array_initializer,
    STATE(312), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(177), 3,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(78), 4,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
      sym_method_reference,
    STATE(94), 4,
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
  [750] = 30,
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
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_primary_expression,
    STATE(77), 1,
      sym_string_literal,
    STATE(109), 1,
      sym_expression,
    STATE(124), 1,
      aux_sym_dimensions_expr_repeat1,
    STATE(174), 1,
      sym_scoped_type_identifier,
    STATE(186), 1,
      sym_generic_type,
    STATE(192), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(308), 1,
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
    STATE(69), 2,
      sym_field_access,
      sym_array_access,
    STATE(278), 2,
      sym__element_value,
      sym_element_value_array_initializer,
    STATE(312), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(177), 3,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(78), 4,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
      sym_method_reference,
    STATE(94), 4,
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
  [871] = 30,
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
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_primary_expression,
    STATE(77), 1,
      sym_string_literal,
    STATE(122), 1,
      sym_expression,
    STATE(124), 1,
      aux_sym_dimensions_expr_repeat1,
    STATE(174), 1,
      sym_scoped_type_identifier,
    STATE(186), 1,
      sym_generic_type,
    STATE(192), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(308), 1,
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
    STATE(69), 2,
      sym_field_access,
      sym_array_access,
    STATE(278), 2,
      sym__element_value,
      sym_element_value_array_initializer,
    STATE(312), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(177), 3,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(78), 4,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
      sym_method_reference,
    STATE(94), 4,
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
  [992] = 29,
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
    ACTIONS(124), 1,
      anon_sym_AT,
    STATE(73), 1,
      sym_primary_expression,
    STATE(77), 1,
      sym_string_literal,
    STATE(85), 1,
      sym_block,
    STATE(98), 1,
      sym_expression,
    STATE(174), 1,
      sym_scoped_type_identifier,
    STATE(186), 1,
      sym_generic_type,
    STATE(192), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(308), 1,
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
    STATE(69), 2,
      sym_field_access,
      sym_array_access,
    STATE(312), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(78), 4,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
      sym_method_reference,
    STATE(94), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    STATE(124), 4,
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
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [1110] = 28,
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
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(154), 1,
      anon_sym_SEMI,
    STATE(73), 1,
      sym_primary_expression,
    STATE(77), 1,
      sym_string_literal,
    STATE(130), 1,
      sym_expression,
    STATE(174), 1,
      sym_scoped_type_identifier,
    STATE(186), 1,
      sym_generic_type,
    STATE(192), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(308), 1,
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
    STATE(69), 2,
      sym_field_access,
      sym_array_access,
    STATE(312), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(78), 4,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
      sym_method_reference,
    STATE(94), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    STATE(124), 4,
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
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [1225] = 27,
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
    ACTIONS(124), 1,
      anon_sym_AT,
    STATE(73), 1,
      sym_primary_expression,
    STATE(77), 1,
      sym_string_literal,
    STATE(90), 1,
      sym_expression,
    STATE(174), 1,
      sym_scoped_type_identifier,
    STATE(186), 1,
      sym_generic_type,
    STATE(192), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(308), 1,
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
    STATE(69), 2,
      sym_field_access,
      sym_array_access,
    STATE(312), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(78), 4,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
      sym_method_reference,
    STATE(94), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    STATE(124), 4,
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
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [1337] = 27,
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
    ACTIONS(124), 1,
      anon_sym_AT,
    STATE(73), 1,
      sym_primary_expression,
    STATE(77), 1,
      sym_string_literal,
    STATE(96), 1,
      sym_expression,
    STATE(174), 1,
      sym_scoped_type_identifier,
    STATE(186), 1,
      sym_generic_type,
    STATE(192), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(308), 1,
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
    STATE(69), 2,
      sym_field_access,
      sym_array_access,
    STATE(312), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(78), 4,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
      sym_method_reference,
    STATE(94), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    STATE(124), 4,
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
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [1449] = 27,
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
    ACTIONS(124), 1,
      anon_sym_AT,
    STATE(73), 1,
      sym_primary_expression,
    STATE(77), 1,
      sym_string_literal,
    STATE(97), 1,
      sym_expression,
    STATE(174), 1,
      sym_scoped_type_identifier,
    STATE(186), 1,
      sym_generic_type,
    STATE(192), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(308), 1,
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
    STATE(69), 2,
      sym_field_access,
      sym_array_access,
    STATE(312), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(78), 4,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
      sym_method_reference,
    STATE(94), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    STATE(124), 4,
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
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [1561] = 27,
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
    ACTIONS(124), 1,
      anon_sym_AT,
    STATE(73), 1,
      sym_primary_expression,
    STATE(77), 1,
      sym_string_literal,
    STATE(100), 1,
      sym_expression,
    STATE(174), 1,
      sym_scoped_type_identifier,
    STATE(186), 1,
      sym_generic_type,
    STATE(192), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(308), 1,
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
    STATE(69), 2,
      sym_field_access,
      sym_array_access,
    STATE(312), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(78), 4,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
      sym_method_reference,
    STATE(94), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    STATE(124), 4,
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
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [1673] = 27,
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
    ACTIONS(124), 1,
      anon_sym_AT,
    STATE(73), 1,
      sym_primary_expression,
    STATE(77), 1,
      sym_string_literal,
    STATE(91), 1,
      sym_expression,
    STATE(174), 1,
      sym_scoped_type_identifier,
    STATE(186), 1,
      sym_generic_type,
    STATE(192), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(308), 1,
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
    STATE(69), 2,
      sym_field_access,
      sym_array_access,
    STATE(312), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(78), 4,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
      sym_method_reference,
    STATE(94), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    STATE(124), 4,
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
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [1785] = 27,
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
    ACTIONS(124), 1,
      anon_sym_AT,
    STATE(73), 1,
      sym_primary_expression,
    STATE(77), 1,
      sym_string_literal,
    STATE(131), 1,
      sym_expression,
    STATE(174), 1,
      sym_scoped_type_identifier,
    STATE(186), 1,
      sym_generic_type,
    STATE(192), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(308), 1,
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
    STATE(69), 2,
      sym_field_access,
      sym_array_access,
    STATE(312), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(78), 4,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
      sym_method_reference,
    STATE(94), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    STATE(124), 4,
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
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [1897] = 27,
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
    ACTIONS(124), 1,
      anon_sym_AT,
    STATE(73), 1,
      sym_primary_expression,
    STATE(77), 1,
      sym_string_literal,
    STATE(86), 1,
      sym_expression,
    STATE(174), 1,
      sym_scoped_type_identifier,
    STATE(186), 1,
      sym_generic_type,
    STATE(192), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(308), 1,
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
    STATE(69), 2,
      sym_field_access,
      sym_array_access,
    STATE(312), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(78), 4,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
      sym_method_reference,
    STATE(94), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    STATE(124), 4,
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
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [2009] = 27,
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
    ACTIONS(124), 1,
      anon_sym_AT,
    STATE(73), 1,
      sym_primary_expression,
    STATE(77), 1,
      sym_string_literal,
    STATE(92), 1,
      sym_expression,
    STATE(174), 1,
      sym_scoped_type_identifier,
    STATE(186), 1,
      sym_generic_type,
    STATE(192), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(308), 1,
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
    STATE(69), 2,
      sym_field_access,
      sym_array_access,
    STATE(312), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(78), 4,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
      sym_method_reference,
    STATE(94), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    STATE(124), 4,
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
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [2121] = 27,
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
    ACTIONS(124), 1,
      anon_sym_AT,
    STATE(73), 1,
      sym_primary_expression,
    STATE(77), 1,
      sym_string_literal,
    STATE(93), 1,
      sym_expression,
    STATE(174), 1,
      sym_scoped_type_identifier,
    STATE(186), 1,
      sym_generic_type,
    STATE(192), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(308), 1,
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
    STATE(69), 2,
      sym_field_access,
      sym_array_access,
    STATE(312), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(78), 4,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
      sym_method_reference,
    STATE(94), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    STATE(124), 4,
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
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [2233] = 27,
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
    ACTIONS(124), 1,
      anon_sym_AT,
    STATE(73), 1,
      sym_primary_expression,
    STATE(77), 1,
      sym_string_literal,
    STATE(95), 1,
      sym_expression,
    STATE(174), 1,
      sym_scoped_type_identifier,
    STATE(186), 1,
      sym_generic_type,
    STATE(192), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(308), 1,
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
    STATE(69), 2,
      sym_field_access,
      sym_array_access,
    STATE(312), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(78), 4,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
      sym_method_reference,
    STATE(94), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    STATE(124), 4,
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
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [2345] = 27,
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
    ACTIONS(124), 1,
      anon_sym_AT,
    STATE(73), 1,
      sym_primary_expression,
    STATE(77), 1,
      sym_string_literal,
    STATE(89), 1,
      sym_expression,
    STATE(174), 1,
      sym_scoped_type_identifier,
    STATE(186), 1,
      sym_generic_type,
    STATE(192), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(308), 1,
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
    STATE(69), 2,
      sym_field_access,
      sym_array_access,
    STATE(312), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(78), 4,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
      sym_method_reference,
    STATE(94), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    STATE(124), 4,
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
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [2457] = 27,
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
    ACTIONS(124), 1,
      anon_sym_AT,
    STATE(73), 1,
      sym_primary_expression,
    STATE(77), 1,
      sym_string_literal,
    STATE(99), 1,
      sym_expression,
    STATE(174), 1,
      sym_scoped_type_identifier,
    STATE(186), 1,
      sym_generic_type,
    STATE(192), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(308), 1,
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
    STATE(69), 2,
      sym_field_access,
      sym_array_access,
    STATE(312), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(78), 4,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
      sym_method_reference,
    STATE(94), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    STATE(124), 4,
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
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [2569] = 27,
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
    ACTIONS(124), 1,
      anon_sym_AT,
    STATE(73), 1,
      sym_primary_expression,
    STATE(77), 1,
      sym_string_literal,
    STATE(128), 1,
      sym_expression,
    STATE(174), 1,
      sym_scoped_type_identifier,
    STATE(186), 1,
      sym_generic_type,
    STATE(192), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(308), 1,
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
    STATE(69), 2,
      sym_field_access,
      sym_array_access,
    STATE(312), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(78), 4,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
      sym_method_reference,
    STATE(94), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    STATE(124), 4,
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
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [2681] = 27,
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
    ACTIONS(124), 1,
      anon_sym_AT,
    STATE(73), 1,
      sym_primary_expression,
    STATE(77), 1,
      sym_string_literal,
    STATE(88), 1,
      sym_expression,
    STATE(174), 1,
      sym_scoped_type_identifier,
    STATE(186), 1,
      sym_generic_type,
    STATE(192), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(308), 1,
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
    STATE(69), 2,
      sym_field_access,
      sym_array_access,
    STATE(312), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(78), 4,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
      sym_method_reference,
    STATE(94), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    STATE(124), 4,
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
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [2793] = 27,
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
    ACTIONS(124), 1,
      anon_sym_AT,
    STATE(73), 1,
      sym_primary_expression,
    STATE(77), 1,
      sym_string_literal,
    STATE(87), 1,
      sym_expression,
    STATE(174), 1,
      sym_scoped_type_identifier,
    STATE(186), 1,
      sym_generic_type,
    STATE(192), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(308), 1,
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
    STATE(69), 2,
      sym_field_access,
      sym_array_access,
    STATE(312), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(78), 4,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
      sym_method_reference,
    STATE(94), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    STATE(124), 4,
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
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [2905] = 27,
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
    ACTIONS(124), 1,
      anon_sym_AT,
    STATE(73), 1,
      sym_primary_expression,
    STATE(77), 1,
      sym_string_literal,
    STATE(135), 1,
      sym_expression,
    STATE(174), 1,
      sym_scoped_type_identifier,
    STATE(186), 1,
      sym_generic_type,
    STATE(192), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(308), 1,
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
    STATE(69), 2,
      sym_field_access,
      sym_array_access,
    STATE(312), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(78), 4,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
      sym_method_reference,
    STATE(94), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    STATE(124), 4,
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
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [3017] = 27,
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
    ACTIONS(124), 1,
      anon_sym_AT,
    STATE(73), 1,
      sym_primary_expression,
    STATE(77), 1,
      sym_string_literal,
    STATE(125), 1,
      sym_expression,
    STATE(174), 1,
      sym_scoped_type_identifier,
    STATE(186), 1,
      sym_generic_type,
    STATE(192), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(308), 1,
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
    STATE(69), 2,
      sym_field_access,
      sym_array_access,
    STATE(312), 2,
      sym_inferred_parameters,
      sym_formal_parameters,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(78), 4,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
      sym_method_reference,
    STATE(94), 4,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
      sym_lambda_expression,
    STATE(124), 4,
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
    ACTIONS(9), 6,
      sym_decimal_integer_literal,
      sym_hex_integer_literal,
      sym_hex_floating_point_literal,
      sym_true,
      sym_false,
      sym_null_literal,
  [3129] = 3,
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
  [3180] = 3,
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
  [3231] = 3,
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
  [3282] = 3,
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
  [3333] = 3,
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
  [3384] = 3,
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
  [3435] = 3,
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
  [3486] = 3,
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
  [3537] = 3,
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
  [3588] = 3,
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
  [3639] = 3,
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
  [3690] = 3,
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
  [3741] = 3,
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
  [3792] = 3,
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
  [3843] = 3,
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
  [3894] = 3,
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
  [3945] = 3,
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
  [3996] = 3,
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
  [4047] = 3,
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
  [4098] = 3,
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
  [4149] = 3,
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
  [4200] = 3,
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
  [4251] = 3,
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
  [4302] = 11,
    ACTIONS(254), 1,
      anon_sym_EQ,
    ACTIONS(256), 1,
      anon_sym_LT,
    ACTIONS(259), 1,
      anon_sym_DASH_GT,
    ACTIONS(264), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_AT,
    STATE(167), 1,
      sym_type_arguments,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(261), 2,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
    ACTIONS(248), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
    ACTIONS(250), 7,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_COLON,
    ACTIONS(252), 17,
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
  [4363] = 15,
    ACTIONS(254), 1,
      anon_sym_EQ,
    ACTIONS(256), 1,
      anon_sym_LT,
    ACTIONS(259), 1,
      anon_sym_DASH_GT,
    ACTIONS(270), 1,
      anon_sym_AMP,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_DOT,
    STATE(167), 1,
      sym_type_arguments,
    STATE(268), 1,
      aux_sym_inferred_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(261), 2,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
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
  [4431] = 18,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(285), 1,
      anon_sym_LT,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      sym_type_parameters,
    STATE(138), 1,
      sym_modifiers,
    STATE(144), 1,
      sym_scoped_type_identifier,
    STATE(169), 1,
      sym_generic_type,
    STATE(181), 1,
      sym__unannotated_type,
    STATE(311), 1,
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
    STATE(62), 2,
      sym_method_declaration,
      aux_sym_interface_body_repeat1,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(126), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    STATE(134), 4,
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
  [4502] = 18,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(292), 1,
      anon_sym_LT,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    ACTIONS(297), 1,
      anon_sym_AT,
    STATE(116), 1,
      sym_type_parameters,
    STATE(138), 1,
      sym_modifiers,
    STATE(144), 1,
      sym_scoped_type_identifier,
    STATE(169), 1,
      sym_generic_type,
    STATE(181), 1,
      sym__unannotated_type,
    STATE(311), 1,
      sym__method_header,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(306), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(309), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(62), 2,
      sym_method_declaration,
      aux_sym_interface_body_repeat1,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(300), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    STATE(134), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_modifiers_repeat1,
    ACTIONS(303), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [4573] = 18,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(285), 1,
      anon_sym_LT,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      sym_type_parameters,
    STATE(138), 1,
      sym_modifiers,
    STATE(144), 1,
      sym_scoped_type_identifier,
    STATE(169), 1,
      sym_generic_type,
    STATE(181), 1,
      sym__unannotated_type,
    STATE(311), 1,
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
    ACTIONS(126), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    STATE(134), 4,
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
  [4644] = 18,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(283), 1,
      sym_identifier,
    STATE(70), 1,
      sym_receiver_parameter,
    STATE(117), 1,
      aux_sym_dimensions_expr_repeat1,
    STATE(134), 1,
      aux_sym_modifiers_repeat1,
    STATE(144), 1,
      sym_scoped_type_identifier,
    STATE(154), 1,
      sym_modifiers,
    STATE(169), 1,
      sym_generic_type,
    STATE(170), 1,
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
    STATE(271), 2,
      sym_formal_parameter,
      sym_spread_parameter,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(172), 3,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
    ACTIONS(126), 4,
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
  [4714] = 5,
    ACTIONS(254), 1,
      anon_sym_EQ,
    ACTIONS(259), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(250), 8,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_COLON,
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
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4757] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(314), 8,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_COLON,
    ACTIONS(316), 21,
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
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4795] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(318), 8,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_COLON,
    ACTIONS(320), 21,
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
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4833] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(322), 8,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_COLON,
    ACTIONS(324), 21,
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
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4871] = 4,
    ACTIONS(254), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(250), 7,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_COLON,
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
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4911] = 15,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      sym_scoped_type_identifier,
    STATE(154), 1,
      sym_modifiers,
    STATE(169), 1,
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
    STATE(238), 2,
      sym_formal_parameter,
      sym_spread_parameter,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(126), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    STATE(134), 4,
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
  [4973] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(328), 7,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_COLON,
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
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5010] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(332), 7,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_COLON,
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
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5047] = 6,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(344), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 7,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_COLON,
    ACTIONS(338), 18,
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
  [5090] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(346), 7,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_COLON,
    ACTIONS(348), 21,
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
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5127] = 14,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(283), 1,
      sym_identifier,
    STATE(144), 1,
      sym_scoped_type_identifier,
    STATE(154), 1,
      sym_modifiers,
    STATE(169), 1,
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
    STATE(288), 2,
      sym_formal_parameter,
      sym_spread_parameter,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(126), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    STATE(134), 4,
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
  [5186] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(350), 7,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_COLON,
    ACTIONS(352), 21,
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
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5223] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(354), 7,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_COLON,
    ACTIONS(356), 21,
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
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5260] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(250), 7,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_COLON,
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
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5297] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(358), 7,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_COLON,
    ACTIONS(360), 21,
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
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5334] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(362), 7,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_COLON,
    ACTIONS(364), 21,
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
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5371] = 8,
    ACTIONS(254), 1,
      anon_sym_EQ,
    ACTIONS(259), 1,
      anon_sym_DASH_GT,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    STATE(268), 1,
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
    ACTIONS(252), 15,
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
      anon_sym_COLON_COLON,
  [5417] = 10,
    ACTIONS(256), 1,
      anon_sym_LT,
    ACTIONS(259), 1,
      anon_sym_DASH_GT,
    ACTIONS(264), 1,
      anon_sym_DOT,
    ACTIONS(268), 1,
      anon_sym_AT,
    ACTIONS(369), 1,
      anon_sym_EQ,
    STATE(167), 1,
      sym_type_arguments,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(261), 2,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
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
  [5467] = 15,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(371), 1,
      anon_sym_GT,
    ACTIONS(373), 1,
      anon_sym_QMARK,
    STATE(144), 1,
      sym_scoped_type_identifier,
    STATE(169), 1,
      sym_generic_type,
    STATE(182), 1,
      sym__unannotated_type,
    STATE(202), 1,
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
    STATE(241), 2,
      sym_wildcard,
      sym__type,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(111), 4,
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
  [5526] = 14,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(373), 1,
      anon_sym_QMARK,
    STATE(144), 1,
      sym_scoped_type_identifier,
    STATE(169), 1,
      sym_generic_type,
    STATE(182), 1,
      sym__unannotated_type,
    STATE(202), 1,
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
    STATE(286), 2,
      sym_wildcard,
      sym__type,
    STATE(165), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(111), 4,
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
  [5582] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(375), 6,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(377), 19,
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
  [5616] = 10,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(395), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(379), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(383), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(389), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(393), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(381), 11,
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
  [5664] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(397), 6,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(399), 19,
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
  [5698] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(401), 6,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(403), 19,
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
  [5732] = 6,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(389), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(379), 5,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(381), 15,
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
  [5772] = 12,
    ACTIONS(379), 1,
      anon_sym_PIPE,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(395), 1,
      anon_sym_GT_GT,
    ACTIONS(405), 1,
      anon_sym_AMP,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(383), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(389), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(393), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(407), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(381), 9,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5824] = 13,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(395), 1,
      anon_sym_GT_GT,
    ACTIONS(405), 1,
      anon_sym_AMP,
    ACTIONS(409), 1,
      anon_sym_PIPE,
    ACTIONS(411), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(383), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(389), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(393), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(407), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(381), 8,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5878] = 8,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(395), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(389), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(393), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(379), 4,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(381), 13,
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
  [5922] = 11,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(395), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(379), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(383), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(389), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(393), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(407), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(381), 9,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5972] = 3,
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
    ACTIONS(338), 19,
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
  [6006] = 13,
    ACTIONS(379), 1,
      anon_sym_PIPE,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(395), 1,
      anon_sym_GT_GT,
    ACTIONS(405), 1,
      anon_sym_AMP,
    ACTIONS(411), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(383), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(389), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(393), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(407), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(381), 8,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [6060] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(379), 6,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(381), 19,
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
  [6094] = 5,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(389), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(379), 5,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(381), 17,
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
  [6132] = 15,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(395), 1,
      anon_sym_GT_GT,
    ACTIONS(405), 1,
      anon_sym_AMP,
    ACTIONS(409), 1,
      anon_sym_PIPE,
    ACTIONS(411), 1,
      anon_sym_CARET,
    ACTIONS(413), 1,
      anon_sym_AMP_AMP,
    ACTIONS(415), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(383), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(389), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(393), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(407), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(377), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [6190] = 15,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(395), 1,
      anon_sym_GT_GT,
    ACTIONS(405), 1,
      anon_sym_AMP,
    ACTIONS(409), 1,
      anon_sym_PIPE,
    ACTIONS(411), 1,
      anon_sym_CARET,
    ACTIONS(413), 1,
      anon_sym_AMP_AMP,
    ACTIONS(415), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(383), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(389), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(393), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(407), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(417), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [6248] = 14,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(395), 1,
      anon_sym_GT_GT,
    ACTIONS(405), 1,
      anon_sym_AMP,
    ACTIONS(409), 1,
      anon_sym_PIPE,
    ACTIONS(411), 1,
      anon_sym_CARET,
    ACTIONS(413), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(383), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(389), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(393), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(407), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(381), 7,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [6304] = 6,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_DOT,
    STATE(113), 1,
      sym_annotation_argument_list,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(423), 6,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(419), 15,
      anon_sym_package,
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
  [6343] = 13,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(283), 1,
      sym_identifier,
    STATE(144), 1,
      sym_scoped_type_identifier,
    STATE(169), 1,
      sym_generic_type,
    STATE(182), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(292), 1,
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
    STATE(124), 4,
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
  [6395] = 13,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(283), 1,
      sym_identifier,
    STATE(144), 1,
      sym_scoped_type_identifier,
    STATE(169), 1,
      sym_generic_type,
    STATE(182), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(249), 1,
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
    STATE(124), 4,
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
  [6447] = 13,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(283), 1,
      sym_identifier,
    STATE(144), 1,
      sym_scoped_type_identifier,
    STATE(169), 1,
      sym_generic_type,
    STATE(182), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(221), 1,
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
    STATE(124), 4,
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
  [6499] = 13,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(283), 1,
      sym_identifier,
    STATE(144), 1,
      sym_scoped_type_identifier,
    STATE(169), 1,
      sym_generic_type,
    STATE(182), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(287), 1,
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
    STATE(124), 4,
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
  [6551] = 13,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(283), 1,
      sym_identifier,
    STATE(144), 1,
      sym_scoped_type_identifier,
    STATE(169), 1,
      sym_generic_type,
    STATE(182), 1,
      sym__unannotated_type,
    STATE(202), 1,
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
    STATE(124), 4,
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
  [6603] = 13,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(283), 1,
      sym_identifier,
    STATE(144), 1,
      sym_scoped_type_identifier,
    STATE(169), 1,
      sym_generic_type,
    STATE(182), 1,
      sym__unannotated_type,
    STATE(202), 1,
      sym_annotated_type,
    STATE(253), 1,
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
    STATE(124), 4,
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
  [6655] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(429), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(427), 15,
      anon_sym_package,
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
  [6687] = 15,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(395), 1,
      anon_sym_GT_GT,
    ACTIONS(405), 1,
      anon_sym_AMP,
    ACTIONS(409), 1,
      anon_sym_PIPE,
    ACTIONS(411), 1,
      anon_sym_CARET,
    ACTIONS(413), 1,
      anon_sym_AMP_AMP,
    ACTIONS(415), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(383), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(389), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(393), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(407), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(431), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6742] = 12,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(433), 1,
      anon_sym_package,
    STATE(144), 1,
      sym_scoped_type_identifier,
    STATE(169), 1,
      sym_generic_type,
    STATE(178), 1,
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
    STATE(149), 4,
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
  [6791] = 12,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(435), 1,
      anon_sym_QMARK,
    STATE(144), 1,
      sym_scoped_type_identifier,
    STATE(169), 1,
      sym_generic_type,
    STATE(178), 1,
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
    STATE(149), 4,
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
  [6840] = 11,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(283), 1,
      sym_identifier,
    STATE(144), 1,
      sym_scoped_type_identifier,
    STATE(169), 1,
      sym_generic_type,
    STATE(183), 1,
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
    STATE(149), 4,
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
  [6886] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(439), 6,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(437), 15,
      anon_sym_package,
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
  [6916] = 6,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_DOT,
    STATE(139), 1,
      sym_annotation_argument_list,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(423), 2,
      anon_sym_LBRACK,
      anon_sym_AT,
    ACTIONS(419), 16,
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
  [6952] = 7,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(449), 1,
      anon_sym_LBRACK,
    STATE(120), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(201), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
    ACTIONS(445), 7,
      anon_sym_DOT,
      anon_sym_throws,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(447), 7,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
  [6990] = 11,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(283), 1,
      sym_identifier,
    STATE(144), 1,
      sym_scoped_type_identifier,
    STATE(169), 1,
      sym_generic_type,
    STATE(184), 1,
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
  [7036] = 11,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(283), 1,
      sym_identifier,
    STATE(144), 1,
      sym_scoped_type_identifier,
    STATE(169), 1,
      sym_generic_type,
    STATE(190), 1,
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
    STATE(149), 4,
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
  [7082] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(453), 6,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(451), 15,
      anon_sym_package,
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
  [7112] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(429), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_AT,
    ACTIONS(427), 16,
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
  [7142] = 7,
    ACTIONS(459), 1,
      anon_sym_LBRACK,
    ACTIONS(462), 1,
      anon_sym_AT,
    STATE(120), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(201), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
    ACTIONS(455), 7,
      anon_sym_DOT,
      anon_sym_throws,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(457), 7,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
  [7180] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(467), 6,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(465), 15,
      anon_sym_package,
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
  [7210] = 15,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(395), 1,
      anon_sym_GT_GT,
    ACTIONS(405), 1,
      anon_sym_AMP,
    ACTIONS(409), 1,
      anon_sym_PIPE,
    ACTIONS(411), 1,
      anon_sym_CARET,
    ACTIONS(413), 1,
      anon_sym_AMP_AMP,
    ACTIONS(415), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(383), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(389), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(393), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(407), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(431), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7264] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(471), 6,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(469), 15,
      anon_sym_package,
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
  [7294] = 11,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(283), 1,
      sym_identifier,
    STATE(144), 1,
      sym_scoped_type_identifier,
    STATE(169), 1,
      sym_generic_type,
    STATE(178), 1,
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
    STATE(149), 4,
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
  [7340] = 16,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(395), 1,
      anon_sym_GT_GT,
    ACTIONS(405), 1,
      anon_sym_AMP,
    ACTIONS(409), 1,
      anon_sym_PIPE,
    ACTIONS(411), 1,
      anon_sym_CARET,
    ACTIONS(413), 1,
      anon_sym_AMP_AMP,
    ACTIONS(415), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(473), 1,
      anon_sym_SEMI,
    ACTIONS(475), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(383), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(389), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(393), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(407), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [7396] = 11,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(283), 1,
      sym_identifier,
    STATE(144), 1,
      sym_scoped_type_identifier,
    STATE(169), 1,
      sym_generic_type,
    STATE(180), 1,
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
    STATE(149), 4,
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
  [7442] = 5,
    ACTIONS(479), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(482), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    STATE(127), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_modifiers_repeat1,
    ACTIONS(477), 11,
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
  [7475] = 15,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(395), 1,
      anon_sym_GT_GT,
    ACTIONS(405), 1,
      anon_sym_AMP,
    ACTIONS(409), 1,
      anon_sym_PIPE,
    ACTIONS(411), 1,
      anon_sym_CARET,
    ACTIONS(413), 1,
      anon_sym_AMP_AMP,
    ACTIONS(415), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(485), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(383), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(389), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(393), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(407), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [7528] = 15,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(395), 1,
      anon_sym_GT_GT,
    ACTIONS(405), 1,
      anon_sym_AMP,
    ACTIONS(409), 1,
      anon_sym_PIPE,
    ACTIONS(411), 1,
      anon_sym_CARET,
    ACTIONS(413), 1,
      anon_sym_AMP_AMP,
    ACTIONS(415), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(383), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(389), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(393), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(407), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [7581] = 15,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(395), 1,
      anon_sym_GT_GT,
    ACTIONS(405), 1,
      anon_sym_AMP,
    ACTIONS(409), 1,
      anon_sym_PIPE,
    ACTIONS(411), 1,
      anon_sym_CARET,
    ACTIONS(413), 1,
      anon_sym_AMP_AMP,
    ACTIONS(415), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(489), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(383), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(389), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(393), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(407), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [7634] = 15,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(395), 1,
      anon_sym_GT_GT,
    ACTIONS(405), 1,
      anon_sym_AMP,
    ACTIONS(409), 1,
      anon_sym_PIPE,
    ACTIONS(411), 1,
      anon_sym_CARET,
    ACTIONS(413), 1,
      anon_sym_AMP_AMP,
    ACTIONS(415), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(383), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(389), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(393), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(407), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [7687] = 5,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(495), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    STATE(127), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_modifiers_repeat1,
    ACTIONS(493), 11,
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
  [7720] = 6,
    ACTIONS(497), 1,
      anon_sym_LT,
    ACTIONS(499), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(502), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    STATE(133), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_modifiers_repeat1,
    ACTIONS(477), 10,
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
  [7755] = 6,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(505), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(507), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    STATE(133), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_modifiers_repeat1,
    ACTIONS(493), 10,
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
  [7790] = 15,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(395), 1,
      anon_sym_GT_GT,
    ACTIONS(405), 1,
      anon_sym_AMP,
    ACTIONS(409), 1,
      anon_sym_PIPE,
    ACTIONS(411), 1,
      anon_sym_CARET,
    ACTIONS(413), 1,
      anon_sym_AMP_AMP,
    ACTIONS(415), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(509), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(383), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(389), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(393), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(407), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [7843] = 15,
    ACTIONS(391), 1,
      anon_sym_SLASH,
    ACTIONS(395), 1,
      anon_sym_GT_GT,
    ACTIONS(405), 1,
      anon_sym_AMP,
    ACTIONS(409), 1,
      anon_sym_PIPE,
    ACTIONS(411), 1,
      anon_sym_CARET,
    ACTIONS(413), 1,
      anon_sym_AMP_AMP,
    ACTIONS(415), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(511), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(383), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(387), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(389), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(393), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(407), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [7896] = 13,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(449), 1,
      anon_sym_LBRACK,
    ACTIONS(513), 1,
      sym_identifier,
    ACTIONS(517), 1,
      anon_sym_DOT,
    ACTIONS(519), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(523), 1,
      sym_this,
    STATE(115), 1,
      aux_sym_dimensions_repeat1,
    STATE(168), 1,
      sym_dimensions,
    STATE(285), 1,
      sym_variable_declarator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(515), 3,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
    ACTIONS(521), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(201), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [7944] = 12,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(285), 1,
      anon_sym_LT,
    STATE(116), 1,
      sym_type_parameters,
    STATE(144), 1,
      sym_scoped_type_identifier,
    STATE(169), 1,
      sym_generic_type,
    STATE(181), 1,
      sym__unannotated_type,
    STATE(305), 1,
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
  [7990] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(439), 2,
      anon_sym_LBRACK,
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
  [8017] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(467), 2,
      anon_sym_LBRACK,
      anon_sym_AT,
    ACTIONS(465), 16,
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
  [8044] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(471), 2,
      anon_sym_LBRACK,
      anon_sym_AT,
    ACTIONS(469), 16,
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
  [8071] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(453), 2,
      anon_sym_LBRACK,
      anon_sym_AT,
    ACTIONS(451), 16,
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
  [8098] = 6,
    ACTIONS(525), 1,
      anon_sym_LT,
    ACTIONS(527), 1,
      anon_sym_DOT,
    STATE(167), 1,
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
    ACTIONS(268), 9,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8130] = 6,
    ACTIONS(525), 1,
      anon_sym_LT,
    ACTIONS(533), 1,
      anon_sym_DOT,
    STATE(166), 1,
      sym_type_arguments,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(529), 5,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(531), 9,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8162] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(537), 3,
      anon_sym_LT,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(535), 14,
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
  [8188] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(541), 3,
      anon_sym_LT,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(539), 14,
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
  [8214] = 10,
    ACTIONS(283), 1,
      sym_identifier,
    ACTIONS(543), 1,
      anon_sym_interface,
    STATE(144), 1,
      sym_scoped_type_identifier,
    STATE(169), 1,
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
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [8254] = 5,
    ACTIONS(548), 1,
      anon_sym_AT,
    ACTIONS(551), 1,
      anon_sym_package,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(553), 5,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
      anon_sym_interface,
    ACTIONS(545), 10,
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
  [8284] = 5,
    ACTIONS(557), 1,
      anon_sym_QMARK,
    ACTIONS(559), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(149), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
    ACTIONS(555), 11,
      anon_sym_package,
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
  [8314] = 11,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(449), 1,
      anon_sym_LBRACK,
    ACTIONS(515), 1,
      anon_sym_COLON_COLON,
    ACTIONS(562), 1,
      anon_sym_DOT,
    STATE(115), 1,
      aux_sym_dimensions_repeat1,
    STATE(168), 1,
      sym_dimensions,
    STATE(256), 1,
      sym_variable_declarator,
    STATE(306), 1,
      sym__variable_declarator_list,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(521), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
    STATE(201), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8355] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(566), 2,
      anon_sym_RPAREN,
      anon_sym_AT,
    ACTIONS(564), 14,
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
  [8380] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(568), 7,
      anon_sym_DOT,
      anon_sym_new,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(570), 9,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8405] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(572), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(574), 10,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8430] = 9,
    ACTIONS(283), 1,
      sym_identifier,
    STATE(144), 1,
      sym_scoped_type_identifier,
    STATE(169), 1,
      sym_generic_type,
    STATE(176), 1,
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
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [8467] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(576), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(578), 10,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8492] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(582), 2,
      anon_sym_RPAREN,
      anon_sym_AT,
    ACTIONS(580), 14,
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
  [8517] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(586), 2,
      anon_sym_RPAREN,
      anon_sym_AT,
    ACTIONS(584), 14,
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
  [8542] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(588), 7,
      anon_sym_DOT,
      anon_sym_new,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(590), 9,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8567] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(594), 2,
      anon_sym_RPAREN,
      anon_sym_AT,
    ACTIONS(592), 14,
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
  [8592] = 3,
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
    ACTIONS(598), 10,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8617] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(600), 7,
      anon_sym_DOT,
      anon_sym_throws,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(602), 9,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8642] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(604), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(606), 10,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8667] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(608), 7,
      anon_sym_DOT,
      anon_sym_new,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(610), 9,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8692] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(455), 7,
      anon_sym_DOT,
      anon_sym_throws,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(457), 9,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8717] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(529), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(531), 9,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8741] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(612), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(614), 9,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8765] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(616), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(618), 9,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8789] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(620), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(622), 9,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8813] = 4,
    ACTIONS(533), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(529), 5,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(531), 9,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8839] = 11,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(449), 1,
      anon_sym_LBRACK,
    ACTIONS(513), 1,
      sym_identifier,
    ACTIONS(519), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(523), 1,
      sym_this,
    STATE(115), 1,
      aux_sym_dimensions_repeat1,
    STATE(168), 1,
      sym_dimensions,
    STATE(285), 1,
      sym_variable_declarator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(521), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(201), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8879] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(624), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(626), 9,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8903] = 4,
    ACTIONS(548), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(553), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    ACTIONS(545), 10,
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
  [8929] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(628), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(630), 9,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8953] = 6,
    ACTIONS(525), 1,
      anon_sym_LT,
    ACTIONS(632), 1,
      anon_sym_DOT,
    STATE(166), 1,
      sym_type_arguments,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(529), 5,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(531), 6,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8982] = 9,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(449), 1,
      anon_sym_LBRACK,
    STATE(115), 1,
      aux_sym_dimensions_repeat1,
    STATE(168), 1,
      sym_dimensions,
    STATE(256), 1,
      sym_variable_declarator,
    STATE(321), 1,
      sym__variable_declarator_list,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(521), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
    STATE(201), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [9017] = 9,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(449), 1,
      anon_sym_LBRACK,
    ACTIONS(635), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(115), 1,
      aux_sym_dimensions_repeat1,
    STATE(168), 1,
      sym_dimensions,
    STATE(297), 1,
      sym_variable_declarator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(521), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
    STATE(201), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [9052] = 4,
    ACTIONS(637), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(431), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(551), 10,
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
  [9077] = 7,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(449), 1,
      anon_sym_LBRACK,
    STATE(115), 1,
      aux_sym_dimensions_repeat1,
    STATE(168), 1,
      sym_dimensions,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(201), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
    ACTIONS(639), 6,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
  [9108] = 9,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(449), 1,
      anon_sym_LBRACK,
    ACTIONS(519), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(115), 1,
      aux_sym_dimensions_repeat1,
    STATE(168), 1,
      sym_dimensions,
    STATE(285), 1,
      sym_variable_declarator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(521), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
    STATE(201), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [9143] = 9,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(449), 1,
      anon_sym_LBRACK,
    ACTIONS(641), 1,
      sym_identifier,
    ACTIONS(643), 1,
      sym_this,
    STATE(115), 1,
      aux_sym_dimensions_repeat1,
    STATE(168), 1,
      sym_dimensions,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(639), 3,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_COLON_COLON,
    STATE(201), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [9177] = 8,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(449), 1,
      anon_sym_LBRACK,
    STATE(115), 1,
      aux_sym_dimensions_repeat1,
    STATE(168), 1,
      sym_dimensions,
    STATE(258), 1,
      sym__method_declarator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(645), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
    STATE(201), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [9209] = 7,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(449), 1,
      anon_sym_LBRACK,
    STATE(115), 1,
      aux_sym_dimensions_repeat1,
    STATE(168), 1,
      sym_dimensions,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(201), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
    ACTIONS(515), 5,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9239] = 8,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(449), 1,
      anon_sym_LBRACK,
    STATE(115), 1,
      aux_sym_dimensions_repeat1,
    STATE(168), 1,
      sym_dimensions,
    STATE(254), 1,
      sym__method_declarator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(645), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
    STATE(201), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [9271] = 8,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(449), 1,
      anon_sym_LBRACK,
    STATE(115), 1,
      aux_sym_dimensions_repeat1,
    STATE(168), 1,
      sym_dimensions,
    STATE(262), 1,
      sym__method_declarator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(645), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
    STATE(201), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [9303] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(649), 2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(647), 10,
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
  [9324] = 4,
    ACTIONS(632), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(529), 5,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(531), 6,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COLON_COLON,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [9347] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(653), 2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(651), 10,
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
  [9368] = 8,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(449), 1,
      anon_sym_LBRACK,
    ACTIONS(657), 1,
      anon_sym_DOT,
    STATE(115), 1,
      aux_sym_dimensions_repeat1,
    STATE(245), 1,
      sym_dimensions,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(655), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(201), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [9398] = 7,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(449), 1,
      anon_sym_LBRACK,
    STATE(115), 1,
      aux_sym_dimensions_repeat1,
    STATE(245), 1,
      sym_dimensions,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(655), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(201), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [9426] = 8,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(449), 1,
      anon_sym_LBRACK,
    ACTIONS(641), 1,
      sym_identifier,
    ACTIONS(643), 1,
      sym_this,
    STATE(115), 1,
      aux_sym_dimensions_repeat1,
    STATE(168), 1,
      sym_dimensions,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(201), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [9455] = 7,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(449), 1,
      anon_sym_LBRACK,
    STATE(115), 1,
      aux_sym_dimensions_repeat1,
    STATE(274), 1,
      sym_dimensions,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(659), 2,
      anon_sym_SEMI,
      anon_sym_throws,
    STATE(201), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [9482] = 8,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(449), 1,
      anon_sym_LBRACK,
    ACTIONS(515), 1,
      anon_sym_COLON_COLON,
    ACTIONS(562), 1,
      anon_sym_DOT,
    STATE(115), 1,
      aux_sym_dimensions_repeat1,
    STATE(168), 1,
      sym_dimensions,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(201), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [9511] = 5,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(661), 1,
      sym_identifier,
    STATE(261), 1,
      sym_type_parameter,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(204), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [9531] = 4,
    ACTIONS(663), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(557), 2,
      anon_sym_LBRACK,
      sym_identifier,
    STATE(194), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [9549] = 5,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(661), 1,
      sym_identifier,
    STATE(282), 1,
      sym_type_parameter,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(204), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [9569] = 4,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(666), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [9586] = 4,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(668), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [9603] = 4,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(670), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(197), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [9620] = 3,
    ACTIONS(674), 1,
      sym_super,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(672), 5,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
  [9635] = 4,
    ACTIONS(678), 1,
      anon_sym_static,
    STATE(293), 1,
      sym_scoped_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(676), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
  [9652] = 4,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(680), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [9669] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(515), 6,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_SEMI,
  [9682] = 4,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(682), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(196), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [9699] = 4,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(684), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(194), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [9716] = 4,
    STATE(275), 1,
      sym__wildcard_bounds,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(686), 2,
      anon_sym_GT,
      anon_sym_COMMA,
    ACTIONS(688), 2,
      anon_sym_extends,
      sym_super,
  [9732] = 3,
    STATE(290), 1,
      sym_variable_declarator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(521), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
  [9746] = 3,
    STATE(284), 1,
      sym_variable_declarator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(521), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
  [9760] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(690), 5,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_throws,
  [9772] = 3,
    STATE(114), 1,
      sym_scoped_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(692), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
  [9786] = 3,
    STATE(300), 1,
      sym_scoped_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(694), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
  [9800] = 4,
    STATE(301), 1,
      sym__wildcard_bounds,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(688), 2,
      anon_sym_extends,
      sym_super,
    ACTIONS(696), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [9816] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(698), 5,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_throws,
  [9828] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(700), 5,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_throws,
  [9840] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(702), 5,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
  [9852] = 3,
    STATE(325), 1,
      sym_scoped_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(704), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
  [9866] = 3,
    STATE(289), 1,
      sym_variable_declarator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(521), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
  [9880] = 3,
    STATE(101), 1,
      sym_scoped_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(706), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
  [9894] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(708), 5,
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_throws,
  [9906] = 3,
    STATE(291), 1,
      sym_scoped_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(710), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
  [9920] = 4,
    ACTIONS(712), 1,
      anon_sym_AMP,
    STATE(220), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(715), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [9935] = 4,
    ACTIONS(717), 1,
      anon_sym_AMP,
    STATE(232), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(719), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [9950] = 5,
    ACTIONS(285), 1,
      anon_sym_LT,
    ACTIONS(721), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_interface_body,
    STATE(298), 1,
      sym_type_parameters,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9967] = 4,
    ACTIONS(723), 1,
      anon_sym_DQUOTE,
    STATE(229), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(725), 2,
      sym_string_fragment,
      sym_escape_sequence,
    ACTIONS(727), 2,
      sym_line_comment,
      sym_block_comment,
  [9982] = 5,
    ACTIONS(344), 1,
      anon_sym_COLON_COLON,
    ACTIONS(729), 1,
      anon_sym_AMP,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    STATE(267), 1,
      aux_sym_cast_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9999] = 4,
    ACTIONS(733), 1,
      anon_sym_DQUOTE,
    STATE(225), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(727), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(735), 2,
      sym_string_fragment,
      sym_escape_sequence,
  [10014] = 4,
    ACTIONS(525), 1,
      anon_sym_LT,
    STATE(277), 1,
      sym_type_arguments,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(738), 2,
      anon_sym_new,
      sym_identifier,
  [10029] = 4,
    ACTIONS(742), 1,
      anon_sym_extends,
    STATE(273), 1,
      sym_type_bound,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(740), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [10044] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(744), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
  [10055] = 4,
    ACTIONS(746), 1,
      anon_sym_DQUOTE,
    STATE(225), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(727), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(748), 2,
      sym_string_fragment,
      sym_escape_sequence,
  [10070] = 4,
    ACTIONS(742), 1,
      anon_sym_extends,
    STATE(296), 1,
      sym_type_bound,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(750), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [10085] = 5,
    ACTIONS(285), 1,
      anon_sym_LT,
    ACTIONS(721), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_interface_body,
    STATE(276), 1,
      sym_type_parameters,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10102] = 4,
    ACTIONS(717), 1,
      anon_sym_AMP,
    STATE(220), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(752), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [10117] = 4,
    ACTIONS(754), 1,
      anon_sym_GT,
    ACTIONS(756), 1,
      anon_sym_COMMA,
    STATE(233), 1,
      aux_sym_type_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10131] = 4,
    ACTIONS(759), 1,
      anon_sym_RPAREN,
    ACTIONS(761), 1,
      anon_sym_COMMA,
    STATE(244), 1,
      aux_sym_annotation_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10145] = 4,
    ACTIONS(761), 1,
      anon_sym_COMMA,
    ACTIONS(763), 1,
      anon_sym_RPAREN,
    STATE(265), 1,
      aux_sym_annotation_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10159] = 4,
    ACTIONS(761), 1,
      anon_sym_COMMA,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
    STATE(235), 1,
      aux_sym_annotation_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10173] = 4,
    ACTIONS(767), 1,
      sym_identifier,
    ACTIONS(769), 1,
      anon_sym_STAR,
    STATE(317), 1,
      sym_asterisk,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10187] = 4,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    STATE(264), 1,
      aux_sym_formal_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10201] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(775), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10211] = 4,
    ACTIONS(777), 1,
      anon_sym_COMMA,
    ACTIONS(779), 1,
      anon_sym_RBRACE,
    STATE(272), 1,
      aux_sym_element_value_array_initializer_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10225] = 4,
    ACTIONS(781), 1,
      anon_sym_GT,
    ACTIONS(783), 1,
      anon_sym_COMMA,
    STATE(251), 1,
      aux_sym_type_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10239] = 4,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(788), 1,
      anon_sym_SEMI,
    STATE(242), 1,
      aux_sym__variable_declarator_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10253] = 4,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    STATE(263), 1,
      aux_sym_formal_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10267] = 4,
    ACTIONS(761), 1,
      anon_sym_COMMA,
    ACTIONS(790), 1,
      anon_sym_RPAREN,
    STATE(265), 1,
      aux_sym_annotation_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10281] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(792), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10291] = 4,
    ACTIONS(794), 1,
      anon_sym_COMMA,
    ACTIONS(797), 1,
      anon_sym_SEMI,
    STATE(246), 1,
      aux_sym_type_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10305] = 4,
    ACTIONS(799), 1,
      anon_sym_COMMA,
    ACTIONS(801), 1,
      anon_sym_SEMI,
    STATE(246), 1,
      aux_sym_type_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10319] = 4,
    ACTIONS(803), 1,
      anon_sym_COMMA,
    ACTIONS(805), 1,
      anon_sym_SEMI,
    STATE(242), 1,
      aux_sym__variable_declarator_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10333] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(715), 3,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_COMMA,
  [10343] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(807), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10353] = 4,
    ACTIONS(783), 1,
      anon_sym_COMMA,
    ACTIONS(809), 1,
      anon_sym_GT,
    STATE(266), 1,
      aux_sym_type_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10367] = 4,
    ACTIONS(811), 1,
      anon_sym_GT,
    ACTIONS(813), 1,
      anon_sym_COMMA,
    STATE(233), 1,
      aux_sym_type_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10381] = 4,
    ACTIONS(799), 1,
      anon_sym_COMMA,
    ACTIONS(815), 1,
      anon_sym_SEMI,
    STATE(247), 1,
      aux_sym_type_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10395] = 4,
    ACTIONS(817), 1,
      anon_sym_SEMI,
    ACTIONS(819), 1,
      anon_sym_throws,
    STATE(310), 1,
      sym_throws,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10409] = 4,
    ACTIONS(821), 1,
      anon_sym_RPAREN,
    ACTIONS(823), 1,
      anon_sym_COMMA,
    STATE(255), 1,
      aux_sym_inferred_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10423] = 4,
    ACTIONS(803), 1,
      anon_sym_COMMA,
    ACTIONS(826), 1,
      anon_sym_SEMI,
    STATE(248), 1,
      aux_sym__variable_declarator_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10437] = 4,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    ACTIONS(831), 1,
      anon_sym_RBRACE,
    STATE(257), 1,
      aux_sym_element_value_array_initializer_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10451] = 4,
    ACTIONS(819), 1,
      anon_sym_throws,
    ACTIONS(833), 1,
      anon_sym_SEMI,
    STATE(314), 1,
      sym_throws,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10465] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(835), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10475] = 4,
    ACTIONS(837), 1,
      anon_sym_AMP,
    ACTIONS(840), 1,
      anon_sym_RPAREN,
    STATE(260), 1,
      aux_sym_cast_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10489] = 4,
    ACTIONS(813), 1,
      anon_sym_COMMA,
    ACTIONS(842), 1,
      anon_sym_GT,
    STATE(252), 1,
      aux_sym_type_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10503] = 4,
    ACTIONS(819), 1,
      anon_sym_throws,
    ACTIONS(844), 1,
      anon_sym_SEMI,
    STATE(307), 1,
      sym_throws,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10517] = 4,
    ACTIONS(846), 1,
      anon_sym_RPAREN,
    ACTIONS(848), 1,
      anon_sym_COMMA,
    STATE(263), 1,
      aux_sym_formal_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10531] = 4,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    ACTIONS(851), 1,
      anon_sym_RPAREN,
    STATE(263), 1,
      aux_sym_formal_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10545] = 4,
    ACTIONS(853), 1,
      anon_sym_RPAREN,
    ACTIONS(855), 1,
      anon_sym_COMMA,
    STATE(265), 1,
      aux_sym_annotation_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10559] = 4,
    ACTIONS(858), 1,
      anon_sym_GT,
    ACTIONS(860), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym_type_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10573] = 4,
    ACTIONS(729), 1,
      anon_sym_AMP,
    ACTIONS(863), 1,
      anon_sym_RPAREN,
    STATE(260), 1,
      aux_sym_cast_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10587] = 4,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(865), 1,
      anon_sym_RPAREN,
    STATE(255), 1,
      aux_sym_inferred_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10601] = 4,
    ACTIONS(769), 1,
      anon_sym_STAR,
    ACTIONS(867), 1,
      sym_identifier,
    STATE(303), 1,
      sym_asterisk,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10615] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(869), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10625] = 4,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
    ACTIONS(773), 1,
      anon_sym_COMMA,
    STATE(243), 1,
      aux_sym_formal_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10639] = 4,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    ACTIONS(871), 1,
      anon_sym_COMMA,
    STATE(257), 1,
      aux_sym_element_value_array_initializer_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10653] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(873), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [10662] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(875), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [10671] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(877), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [10680] = 3,
    ACTIONS(721), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_interface_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10691] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(879), 2,
      anon_sym_new,
      sym_identifier,
  [10700] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(881), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10709] = 3,
    ACTIONS(883), 1,
      sym_identifier,
    STATE(280), 1,
      sym_element_value_pair,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10720] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(853), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10729] = 3,
    ACTIONS(429), 1,
      anon_sym_DOT,
    ACTIONS(885), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10740] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(754), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [10749] = 3,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(344), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10760] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(887), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10769] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(889), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10778] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(858), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [10787] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(891), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [10796] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(846), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10805] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(893), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10814] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(895), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10823] = 3,
    ACTIONS(443), 1,
      anon_sym_DOT,
    ACTIONS(897), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10834] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(797), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10843] = 3,
    ACTIONS(899), 1,
      anon_sym_DOT,
    ACTIONS(901), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10854] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(831), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10863] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(903), 2,
      anon_sym_AMP,
      anon_sym_RPAREN,
  [10872] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(905), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [10881] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(907), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10890] = 3,
    ACTIONS(721), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_interface_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10901] = 3,
    ACTIONS(909), 1,
      anon_sym_LPAREN,
    STATE(191), 1,
      sym_formal_parameters,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10912] = 3,
    ACTIONS(443), 1,
      anon_sym_DOT,
    ACTIONS(911), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10923] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(686), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [10932] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(821), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10941] = 2,
    ACTIONS(913), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10949] = 2,
    ACTIONS(915), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10957] = 2,
    ACTIONS(917), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10965] = 2,
    ACTIONS(919), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10973] = 2,
    ACTIONS(921), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10981] = 2,
    ACTIONS(344), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10989] = 2,
    ACTIONS(923), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10997] = 2,
    ACTIONS(925), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11005] = 2,
    ACTIONS(927), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11013] = 2,
    ACTIONS(259), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11021] = 2,
    ACTIONS(929), 1,
      anon_sym_class,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11029] = 2,
    ACTIONS(931), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11037] = 2,
    ACTIONS(933), 1,
      sym_this,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11045] = 2,
    ACTIONS(935), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11053] = 2,
    ACTIONS(937), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11061] = 2,
    ACTIONS(939), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11069] = 2,
    ACTIONS(941), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11077] = 2,
    ACTIONS(943), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11085] = 2,
    ACTIONS(945), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11093] = 2,
    ACTIONS(947), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11101] = 2,
    ACTIONS(767), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11109] = 2,
    ACTIONS(949), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11117] = 2,
    ACTIONS(951), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11125] = 2,
    ACTIONS(759), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11133] = 2,
    ACTIONS(953), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11141] = 2,
    ACTIONS(955), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11149] = 2,
    ACTIONS(779), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11157] = 2,
    ACTIONS(957), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11165] = 2,
    ACTIONS(959), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11173] = 2,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11181] = 2,
    ACTIONS(961), 1,
      sym_this,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 127,
  [SMALL_STATE(11)] = 254,
  [SMALL_STATE(12)] = 381,
  [SMALL_STATE(13)] = 505,
  [SMALL_STATE(14)] = 629,
  [SMALL_STATE(15)] = 750,
  [SMALL_STATE(16)] = 871,
  [SMALL_STATE(17)] = 992,
  [SMALL_STATE(18)] = 1110,
  [SMALL_STATE(19)] = 1225,
  [SMALL_STATE(20)] = 1337,
  [SMALL_STATE(21)] = 1449,
  [SMALL_STATE(22)] = 1561,
  [SMALL_STATE(23)] = 1673,
  [SMALL_STATE(24)] = 1785,
  [SMALL_STATE(25)] = 1897,
  [SMALL_STATE(26)] = 2009,
  [SMALL_STATE(27)] = 2121,
  [SMALL_STATE(28)] = 2233,
  [SMALL_STATE(29)] = 2345,
  [SMALL_STATE(30)] = 2457,
  [SMALL_STATE(31)] = 2569,
  [SMALL_STATE(32)] = 2681,
  [SMALL_STATE(33)] = 2793,
  [SMALL_STATE(34)] = 2905,
  [SMALL_STATE(35)] = 3017,
  [SMALL_STATE(36)] = 3129,
  [SMALL_STATE(37)] = 3180,
  [SMALL_STATE(38)] = 3231,
  [SMALL_STATE(39)] = 3282,
  [SMALL_STATE(40)] = 3333,
  [SMALL_STATE(41)] = 3384,
  [SMALL_STATE(42)] = 3435,
  [SMALL_STATE(43)] = 3486,
  [SMALL_STATE(44)] = 3537,
  [SMALL_STATE(45)] = 3588,
  [SMALL_STATE(46)] = 3639,
  [SMALL_STATE(47)] = 3690,
  [SMALL_STATE(48)] = 3741,
  [SMALL_STATE(49)] = 3792,
  [SMALL_STATE(50)] = 3843,
  [SMALL_STATE(51)] = 3894,
  [SMALL_STATE(52)] = 3945,
  [SMALL_STATE(53)] = 3996,
  [SMALL_STATE(54)] = 4047,
  [SMALL_STATE(55)] = 4098,
  [SMALL_STATE(56)] = 4149,
  [SMALL_STATE(57)] = 4200,
  [SMALL_STATE(58)] = 4251,
  [SMALL_STATE(59)] = 4302,
  [SMALL_STATE(60)] = 4363,
  [SMALL_STATE(61)] = 4431,
  [SMALL_STATE(62)] = 4502,
  [SMALL_STATE(63)] = 4573,
  [SMALL_STATE(64)] = 4644,
  [SMALL_STATE(65)] = 4714,
  [SMALL_STATE(66)] = 4757,
  [SMALL_STATE(67)] = 4795,
  [SMALL_STATE(68)] = 4833,
  [SMALL_STATE(69)] = 4871,
  [SMALL_STATE(70)] = 4911,
  [SMALL_STATE(71)] = 4973,
  [SMALL_STATE(72)] = 5010,
  [SMALL_STATE(73)] = 5047,
  [SMALL_STATE(74)] = 5090,
  [SMALL_STATE(75)] = 5127,
  [SMALL_STATE(76)] = 5186,
  [SMALL_STATE(77)] = 5223,
  [SMALL_STATE(78)] = 5260,
  [SMALL_STATE(79)] = 5297,
  [SMALL_STATE(80)] = 5334,
  [SMALL_STATE(81)] = 5371,
  [SMALL_STATE(82)] = 5417,
  [SMALL_STATE(83)] = 5467,
  [SMALL_STATE(84)] = 5526,
  [SMALL_STATE(85)] = 5582,
  [SMALL_STATE(86)] = 5616,
  [SMALL_STATE(87)] = 5664,
  [SMALL_STATE(88)] = 5698,
  [SMALL_STATE(89)] = 5732,
  [SMALL_STATE(90)] = 5772,
  [SMALL_STATE(91)] = 5824,
  [SMALL_STATE(92)] = 5878,
  [SMALL_STATE(93)] = 5922,
  [SMALL_STATE(94)] = 5972,
  [SMALL_STATE(95)] = 6006,
  [SMALL_STATE(96)] = 6060,
  [SMALL_STATE(97)] = 6094,
  [SMALL_STATE(98)] = 6132,
  [SMALL_STATE(99)] = 6190,
  [SMALL_STATE(100)] = 6248,
  [SMALL_STATE(101)] = 6304,
  [SMALL_STATE(102)] = 6343,
  [SMALL_STATE(103)] = 6395,
  [SMALL_STATE(104)] = 6447,
  [SMALL_STATE(105)] = 6499,
  [SMALL_STATE(106)] = 6551,
  [SMALL_STATE(107)] = 6603,
  [SMALL_STATE(108)] = 6655,
  [SMALL_STATE(109)] = 6687,
  [SMALL_STATE(110)] = 6742,
  [SMALL_STATE(111)] = 6791,
  [SMALL_STATE(112)] = 6840,
  [SMALL_STATE(113)] = 6886,
  [SMALL_STATE(114)] = 6916,
  [SMALL_STATE(115)] = 6952,
  [SMALL_STATE(116)] = 6990,
  [SMALL_STATE(117)] = 7036,
  [SMALL_STATE(118)] = 7082,
  [SMALL_STATE(119)] = 7112,
  [SMALL_STATE(120)] = 7142,
  [SMALL_STATE(121)] = 7180,
  [SMALL_STATE(122)] = 7210,
  [SMALL_STATE(123)] = 7264,
  [SMALL_STATE(124)] = 7294,
  [SMALL_STATE(125)] = 7340,
  [SMALL_STATE(126)] = 7396,
  [SMALL_STATE(127)] = 7442,
  [SMALL_STATE(128)] = 7475,
  [SMALL_STATE(129)] = 7528,
  [SMALL_STATE(130)] = 7581,
  [SMALL_STATE(131)] = 7634,
  [SMALL_STATE(132)] = 7687,
  [SMALL_STATE(133)] = 7720,
  [SMALL_STATE(134)] = 7755,
  [SMALL_STATE(135)] = 7790,
  [SMALL_STATE(136)] = 7843,
  [SMALL_STATE(137)] = 7896,
  [SMALL_STATE(138)] = 7944,
  [SMALL_STATE(139)] = 7990,
  [SMALL_STATE(140)] = 8017,
  [SMALL_STATE(141)] = 8044,
  [SMALL_STATE(142)] = 8071,
  [SMALL_STATE(143)] = 8098,
  [SMALL_STATE(144)] = 8130,
  [SMALL_STATE(145)] = 8162,
  [SMALL_STATE(146)] = 8188,
  [SMALL_STATE(147)] = 8214,
  [SMALL_STATE(148)] = 8254,
  [SMALL_STATE(149)] = 8284,
  [SMALL_STATE(150)] = 8314,
  [SMALL_STATE(151)] = 8355,
  [SMALL_STATE(152)] = 8380,
  [SMALL_STATE(153)] = 8405,
  [SMALL_STATE(154)] = 8430,
  [SMALL_STATE(155)] = 8467,
  [SMALL_STATE(156)] = 8492,
  [SMALL_STATE(157)] = 8517,
  [SMALL_STATE(158)] = 8542,
  [SMALL_STATE(159)] = 8567,
  [SMALL_STATE(160)] = 8592,
  [SMALL_STATE(161)] = 8617,
  [SMALL_STATE(162)] = 8642,
  [SMALL_STATE(163)] = 8667,
  [SMALL_STATE(164)] = 8692,
  [SMALL_STATE(165)] = 8717,
  [SMALL_STATE(166)] = 8741,
  [SMALL_STATE(167)] = 8765,
  [SMALL_STATE(168)] = 8789,
  [SMALL_STATE(169)] = 8813,
  [SMALL_STATE(170)] = 8839,
  [SMALL_STATE(171)] = 8879,
  [SMALL_STATE(172)] = 8903,
  [SMALL_STATE(173)] = 8929,
  [SMALL_STATE(174)] = 8953,
  [SMALL_STATE(175)] = 8982,
  [SMALL_STATE(176)] = 9017,
  [SMALL_STATE(177)] = 9052,
  [SMALL_STATE(178)] = 9077,
  [SMALL_STATE(179)] = 9108,
  [SMALL_STATE(180)] = 9143,
  [SMALL_STATE(181)] = 9177,
  [SMALL_STATE(182)] = 9209,
  [SMALL_STATE(183)] = 9239,
  [SMALL_STATE(184)] = 9271,
  [SMALL_STATE(185)] = 9303,
  [SMALL_STATE(186)] = 9324,
  [SMALL_STATE(187)] = 9347,
  [SMALL_STATE(188)] = 9368,
  [SMALL_STATE(189)] = 9398,
  [SMALL_STATE(190)] = 9426,
  [SMALL_STATE(191)] = 9455,
  [SMALL_STATE(192)] = 9482,
  [SMALL_STATE(193)] = 9511,
  [SMALL_STATE(194)] = 9531,
  [SMALL_STATE(195)] = 9549,
  [SMALL_STATE(196)] = 9569,
  [SMALL_STATE(197)] = 9586,
  [SMALL_STATE(198)] = 9603,
  [SMALL_STATE(199)] = 9620,
  [SMALL_STATE(200)] = 9635,
  [SMALL_STATE(201)] = 9652,
  [SMALL_STATE(202)] = 9669,
  [SMALL_STATE(203)] = 9682,
  [SMALL_STATE(204)] = 9699,
  [SMALL_STATE(205)] = 9716,
  [SMALL_STATE(206)] = 9732,
  [SMALL_STATE(207)] = 9746,
  [SMALL_STATE(208)] = 9760,
  [SMALL_STATE(209)] = 9772,
  [SMALL_STATE(210)] = 9786,
  [SMALL_STATE(211)] = 9800,
  [SMALL_STATE(212)] = 9816,
  [SMALL_STATE(213)] = 9828,
  [SMALL_STATE(214)] = 9840,
  [SMALL_STATE(215)] = 9852,
  [SMALL_STATE(216)] = 9866,
  [SMALL_STATE(217)] = 9880,
  [SMALL_STATE(218)] = 9894,
  [SMALL_STATE(219)] = 9906,
  [SMALL_STATE(220)] = 9920,
  [SMALL_STATE(221)] = 9935,
  [SMALL_STATE(222)] = 9950,
  [SMALL_STATE(223)] = 9967,
  [SMALL_STATE(224)] = 9982,
  [SMALL_STATE(225)] = 9999,
  [SMALL_STATE(226)] = 10014,
  [SMALL_STATE(227)] = 10029,
  [SMALL_STATE(228)] = 10044,
  [SMALL_STATE(229)] = 10055,
  [SMALL_STATE(230)] = 10070,
  [SMALL_STATE(231)] = 10085,
  [SMALL_STATE(232)] = 10102,
  [SMALL_STATE(233)] = 10117,
  [SMALL_STATE(234)] = 10131,
  [SMALL_STATE(235)] = 10145,
  [SMALL_STATE(236)] = 10159,
  [SMALL_STATE(237)] = 10173,
  [SMALL_STATE(238)] = 10187,
  [SMALL_STATE(239)] = 10201,
  [SMALL_STATE(240)] = 10211,
  [SMALL_STATE(241)] = 10225,
  [SMALL_STATE(242)] = 10239,
  [SMALL_STATE(243)] = 10253,
  [SMALL_STATE(244)] = 10267,
  [SMALL_STATE(245)] = 10281,
  [SMALL_STATE(246)] = 10291,
  [SMALL_STATE(247)] = 10305,
  [SMALL_STATE(248)] = 10319,
  [SMALL_STATE(249)] = 10333,
  [SMALL_STATE(250)] = 10343,
  [SMALL_STATE(251)] = 10353,
  [SMALL_STATE(252)] = 10367,
  [SMALL_STATE(253)] = 10381,
  [SMALL_STATE(254)] = 10395,
  [SMALL_STATE(255)] = 10409,
  [SMALL_STATE(256)] = 10423,
  [SMALL_STATE(257)] = 10437,
  [SMALL_STATE(258)] = 10451,
  [SMALL_STATE(259)] = 10465,
  [SMALL_STATE(260)] = 10475,
  [SMALL_STATE(261)] = 10489,
  [SMALL_STATE(262)] = 10503,
  [SMALL_STATE(263)] = 10517,
  [SMALL_STATE(264)] = 10531,
  [SMALL_STATE(265)] = 10545,
  [SMALL_STATE(266)] = 10559,
  [SMALL_STATE(267)] = 10573,
  [SMALL_STATE(268)] = 10587,
  [SMALL_STATE(269)] = 10601,
  [SMALL_STATE(270)] = 10615,
  [SMALL_STATE(271)] = 10625,
  [SMALL_STATE(272)] = 10639,
  [SMALL_STATE(273)] = 10653,
  [SMALL_STATE(274)] = 10662,
  [SMALL_STATE(275)] = 10671,
  [SMALL_STATE(276)] = 10680,
  [SMALL_STATE(277)] = 10691,
  [SMALL_STATE(278)] = 10700,
  [SMALL_STATE(279)] = 10709,
  [SMALL_STATE(280)] = 10720,
  [SMALL_STATE(281)] = 10729,
  [SMALL_STATE(282)] = 10740,
  [SMALL_STATE(283)] = 10749,
  [SMALL_STATE(284)] = 10760,
  [SMALL_STATE(285)] = 10769,
  [SMALL_STATE(286)] = 10778,
  [SMALL_STATE(287)] = 10787,
  [SMALL_STATE(288)] = 10796,
  [SMALL_STATE(289)] = 10805,
  [SMALL_STATE(290)] = 10814,
  [SMALL_STATE(291)] = 10823,
  [SMALL_STATE(292)] = 10834,
  [SMALL_STATE(293)] = 10843,
  [SMALL_STATE(294)] = 10854,
  [SMALL_STATE(295)] = 10863,
  [SMALL_STATE(296)] = 10872,
  [SMALL_STATE(297)] = 10881,
  [SMALL_STATE(298)] = 10890,
  [SMALL_STATE(299)] = 10901,
  [SMALL_STATE(300)] = 10912,
  [SMALL_STATE(301)] = 10923,
  [SMALL_STATE(302)] = 10932,
  [SMALL_STATE(303)] = 10941,
  [SMALL_STATE(304)] = 10949,
  [SMALL_STATE(305)] = 10957,
  [SMALL_STATE(306)] = 10965,
  [SMALL_STATE(307)] = 10973,
  [SMALL_STATE(308)] = 10981,
  [SMALL_STATE(309)] = 10989,
  [SMALL_STATE(310)] = 10997,
  [SMALL_STATE(311)] = 11005,
  [SMALL_STATE(312)] = 11013,
  [SMALL_STATE(313)] = 11021,
  [SMALL_STATE(314)] = 11029,
  [SMALL_STATE(315)] = 11037,
  [SMALL_STATE(316)] = 11045,
  [SMALL_STATE(317)] = 11053,
  [SMALL_STATE(318)] = 11061,
  [SMALL_STATE(319)] = 11069,
  [SMALL_STATE(320)] = 11077,
  [SMALL_STATE(321)] = 11085,
  [SMALL_STATE(322)] = 11093,
  [SMALL_STATE(323)] = 11101,
  [SMALL_STATE(324)] = 11109,
  [SMALL_STATE(325)] = 11117,
  [SMALL_STATE(326)] = 11125,
  [SMALL_STATE(327)] = 11133,
  [SMALL_STATE(328)] = 11141,
  [SMALL_STATE(329)] = 11149,
  [SMALL_STATE(330)] = 11157,
  [SMALL_STATE(331)] = 11165,
  [SMALL_STATE(332)] = 11173,
  [SMALL_STATE(333)] = 11181,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(59),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(77),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(77),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(223),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(49),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(35),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(34),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(209),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(219),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(200),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(132),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(324),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(171),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(173),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(165),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(65),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(78),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(283),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_import_on_demand, 6, .production_id = 39),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_static_import_on_demand, 6, .production_id = 39),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable_declaration, 3, .production_id = 15),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable_declaration, 3, .production_id = 15),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 4, .production_id = 25),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_declaration, 4, .production_id = 25),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable_declaration, 4, .production_id = 26),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable_declaration, 4, .production_id = 26),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 3, .production_id = 8),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_declaration, 3, .production_id = 8),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_declaration, 4, .production_id = 30),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_declaration, 4, .production_id = 30),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_static_import, 6, .production_id = 38),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_static_import, 6, .production_id = 38),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 4, .production_id = 22),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_declaration, 4, .production_id = 22),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_statement, 5),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_statement, 5),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_type_import, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_type_import, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_declaration, 3, .production_id = 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_declaration, 3, .production_id = 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 5, .production_id = 36),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_declaration, 5, .production_id = 36),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_declaration, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield_statement, 3),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yield_statement, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_body, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_body, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_statement, 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_statement, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_import_on_demand, 5),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_import_on_demand, 5),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_body, 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_body, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unannotated_type, 1, .production_id = 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_primary_expression, 1), SHIFT(83),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_primary_expression, 1), REDUCE(sym__unannotated_type, 1, .production_id = 1),
  [264] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym_primary_expression, 1), REDUCE(sym__unannotated_type, 1, .production_id = 1), SHIFT(198),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unannotated_type, 1, .production_id = 1),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_primary_expression, 1), REDUCE(sym__unannotated_type, 1, .production_id = 1),
  [273] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym_primary_expression, 1), REDUCE(sym__unannotated_type, 1, .production_id = 1), SHIFT(319),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [279] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym_primary_expression, 1), REDUCE(sym__unannotated_type, 1, .production_id = 1), SHIFT(198),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(143),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(193),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(217),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(134),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(171),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(173),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(165),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3, .production_id = 11),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3, .production_id = 11),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_access, 4, .production_id = 24),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_access, 4, .production_id = 24),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 5, .production_id = 35),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 5, .production_id = 35),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_literal, 3, .dynamic_precedence = 17),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_literal, 3, .dynamic_precedence = 17),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_reference, 4),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_reference, 4),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_reference, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_reference, 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_primary_expression, 1), SHIFT(319),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda_expression, 3, .production_id = 10),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_expression, 3, .production_id = 10),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 13),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 13),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expression, 5, .production_id = 31),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 5, .production_id = 31),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expression, 4, .production_id = 19),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4, .production_id = 19),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 9),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_marker_annotation, 2, .production_id = 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_annotation, 2, .production_id = 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_identifier, 3, .production_id = 21),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 3, .production_id = 21),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element_value, 1),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 3, .production_id = 7),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 3, .production_id = 7),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimensions, 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimensions, 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_argument_list, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_argument_list, 2),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dimensions_repeat1, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(316),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(209),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_argument_list, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_argument_list, 3),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_argument_list, 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_argument_list, 4),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(209),
  [482] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(127),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(217),
  [502] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(133),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 1),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unannotated_type, 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unannotated_type, 1),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 3, .production_id = 40),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 3, .production_id = 40),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 2, .production_id = 34),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 2, .production_id = 34),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [545] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dimensions_expr_repeat1, 1), REDUCE(aux_sym_modifiers_repeat1, 1),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_expr_repeat1, 1), REDUCE(aux_sym_modifiers_repeat1, 1),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dimensions_expr_repeat1, 1),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 1),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dimensions_expr_repeat1, 2),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimensions_expr_repeat1, 2),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_expr_repeat1, 2), SHIFT_REPEAT(217),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_receiver_parameter, 4),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_receiver_parameter, 4),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 2),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 2),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_type_identifier, 4, .production_id = 29),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 4, .production_id = 29),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_type_identifier, 4, .production_id = 23),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 4, .production_id = 23),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_receiver_parameter, 2),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_receiver_parameter, 2),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_receiver_parameter, 5),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_receiver_parameter, 5),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 4),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_receiver_parameter, 3),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_receiver_parameter, 3),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 12),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 12),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dimensions_repeat1, 3),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 3),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 17),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 17),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 3),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10, .production_id = 1),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10, .production_id = 1),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 2, .production_id = 4),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, .production_id = 4),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integral_type, 1),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integral_type, 1),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_type, 1),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_type, 1),
  [632] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__unannotated_type, 1), SHIFT(203),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimensions_expr_repeat1, 1),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotated_type, 2),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 4),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declarator, 1, .production_id = 3),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_declarator, 2, .production_id = 42),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_expr_repeat1, 2), SHIFT_REPEAT(209),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 2),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 5),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 1),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 2),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 4),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 3),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2), SHIFT_REPEAT(103),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 2),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(225),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 2, .production_id = 32),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1, .production_id = 1),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 3),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [756] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(195),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_value_array_initializer, 2),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__variable_declarator_list_repeat1, 2, .production_id = 28), SHIFT_REPEAT(216),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__variable_declarator_list_repeat1, 2, .production_id = 28),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declarator, 2, .production_id = 14),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2), SHIFT_REPEAT(102),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_throws, 3),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_declarator_list, 2, .production_id = 16),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_value_array_initializer, 5),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_throws, 2),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_header, 4, .production_id = 43),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inferred_parameters_repeat1, 2),
  [823] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inferred_parameters_repeat1, 2), SHIFT_REPEAT(228),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_declarator_list, 1, .production_id = 5),
  [828] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_value_array_initializer_repeat1, 2), SHIFT_REPEAT(14),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_value_array_initializer_repeat1, 2),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_header, 2, .production_id = 33),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_value_array_initializer, 4),
  [837] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cast_expression_repeat1, 2, .production_id = 20), SHIFT_REPEAT(106),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cast_expression_repeat1, 2, .production_id = 20),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_header, 3, .production_id = 41),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [848] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2), SHIFT_REPEAT(75),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_argument_list_repeat1, 2),
  [855] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_argument_list_repeat1, 2), SHIFT_REPEAT(279),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2),
  [860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2), SHIFT_REPEAT(84),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_value_array_initializer, 3),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 3, .production_id = 32),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_declarator, 3, .production_id = 44),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 3),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_value_pair, 3, .production_id = 37),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spread_parameter, 4),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter, 2, .production_id = 6),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wildcard_bounds, 2),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__variable_declarator_list_repeat1, 2, .production_id = 27),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spread_parameter, 3),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cast_expression_repeat1, 2, .production_id = 18),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 2, .production_id = 1),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter, 3, .production_id = 18),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [915] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_header, 4, .production_id = 41),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_header, 5, .production_id = 43),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_header, 3, .production_id = 33),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inferred_parameters, 4),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inferred_parameters, 3),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asterisk, 1),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
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
