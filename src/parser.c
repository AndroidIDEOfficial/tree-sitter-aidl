#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 314
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 157
#define ALIAS_COUNT 1
#define TOKEN_COUNT 79
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 21
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 44

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
  anon_sym_LBRACK = 37,
  anon_sym_RBRACK = 38,
  anon_sym_DOT = 39,
  anon_sym_class = 40,
  anon_sym_COMMA = 41,
  anon_sym_QMARK = 42,
  anon_sym_extends = 43,
  anon_sym_SEMI = 44,
  anon_sym_LBRACE = 45,
  anon_sym_RBRACE = 46,
  anon_sym_assert = 47,
  anon_sym_COLON = 48,
  anon_sym_return = 49,
  anon_sym_yield = 50,
  anon_sym_AT = 51,
  anon_sym_package = 52,
  anon_sym_import = 53,
  anon_sym_static = 54,
  anon_sym_oneway = 55,
  anon_sym_in = 56,
  anon_sym_out = 57,
  anon_sym_inout = 58,
  anon_sym_default = 59,
  anon_sym_interface = 60,
  anon_sym_byte = 61,
  anon_sym_short = 62,
  anon_sym_int = 63,
  anon_sym_long = 64,
  anon_sym_char = 65,
  anon_sym_float = 66,
  anon_sym_double = 67,
  sym_boolean_type = 68,
  sym_void_type = 69,
  anon_sym_DOT_DOT_DOT = 70,
  anon_sym_throws = 71,
  anon_sym_open = 72,
  anon_sym_module = 73,
  anon_sym_record = 74,
  sym_this = 75,
  sym_super = 76,
  sym_line_comment = 77,
  sym_block_comment = 78,
  sym_program = 79,
  sym__literal = 80,
  sym_string_literal = 81,
  sym_expression = 82,
  sym_cast_expression = 83,
  sym_assignment_expression = 84,
  sym_binary_expression = 85,
  sym_primary_expression = 86,
  sym_parenthesized_expression = 87,
  sym_class_literal = 88,
  sym_field_access = 89,
  sym_array_access = 90,
  sym_type_arguments = 91,
  sym_wildcard = 92,
  sym__wildcard_bounds = 93,
  sym_dimensions = 94,
  sym_statement = 95,
  sym_block = 96,
  sym_expression_statement = 97,
  sym_assert_statement = 98,
  sym_return_statement = 99,
  sym_yield_statement = 100,
  sym__annotation = 101,
  sym_marker_annotation = 102,
  sym_annotation = 103,
  sym_annotation_argument_list = 104,
  sym_element_value_pair = 105,
  sym__element_value = 106,
  sym_element_value_array_initializer = 107,
  sym_declaration = 108,
  sym_package_declaration = 109,
  sym_import_declaration = 110,
  sym_single_type_import = 111,
  sym_type_import_on_demand = 112,
  sym_single_static_import = 113,
  sym_static_import_on_demand = 114,
  sym_asterisk = 115,
  sym_modifiers = 116,
  sym_type_parameters = 117,
  sym_type_parameter = 118,
  sym_type_bound = 119,
  sym_scoped_identifier = 120,
  sym_interface_declaration = 121,
  sym_interface_body = 122,
  sym__variable_declarator_list = 123,
  sym_variable_declarator = 124,
  sym__type = 125,
  sym__unannotated_type = 126,
  sym_annotated_type = 127,
  sym_scoped_type_identifier = 128,
  sym_generic_type = 129,
  sym_array_type = 130,
  sym_integral_type = 131,
  sym_floating_point_type = 132,
  sym__method_header = 133,
  sym__method_declarator = 134,
  sym_formal_parameters = 135,
  sym_formal_parameter = 136,
  sym_receiver_parameter = 137,
  sym_spread_parameter = 138,
  sym_throws = 139,
  sym_local_variable_declaration = 140,
  sym_method_declaration = 141,
  aux_sym_program_repeat1 = 142,
  aux_sym_string_literal_repeat1 = 143,
  aux_sym_cast_expression_repeat1 = 144,
  aux_sym_dimensions_expr_repeat1 = 145,
  aux_sym_type_arguments_repeat1 = 146,
  aux_sym_dimensions_repeat1 = 147,
  aux_sym_annotation_argument_list_repeat1 = 148,
  aux_sym_element_value_array_initializer_repeat1 = 149,
  aux_sym_modifiers_repeat1 = 150,
  aux_sym_type_parameters_repeat1 = 151,
  aux_sym_type_bound_repeat1 = 152,
  aux_sym_type_list_repeat1 = 153,
  aux_sym_interface_body_repeat1 = 154,
  aux_sym__variable_declarator_list_repeat1 = 155,
  aux_sym_formal_parameters_repeat1 = 156,
  alias_sym_type_identifier = 157,
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT] = ".",
  [anon_sym_class] = "class",
  [anon_sym_COMMA] = ",",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [anon_sym_COMMA] = {
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
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
  [11] = {.index = 13, .length = 3},
  [12] = {.index = 16, .length = 2},
  [13] = {.index = 18, .length = 2},
  [14] = {.index = 20, .length = 2},
  [16] = {.index = 22, .length = 1},
  [17] = {.index = 23, .length = 2},
  [18] = {.index = 25, .length = 2},
  [19] = {.index = 27, .length = 2},
  [20] = {.index = 29, .length = 3},
  [22] = {.index = 32, .length = 2},
  [23] = {.index = 34, .length = 2},
  [24] = {.index = 36, .length = 2},
  [25] = {.index = 38, .length = 1},
  [26] = {.index = 39, .length = 2},
  [28] = {.index = 41, .length = 1},
  [29] = {.index = 42, .length = 3},
  [31] = {.index = 45, .length = 4},
  [32] = {.index = 49, .length = 5},
  [33] = {.index = 54, .length = 2},
  [34] = {.index = 56, .length = 3},
  [35] = {.index = 59, .length = 2},
  [36] = {.index = 61, .length = 2},
  [37] = {.index = 63, .length = 1},
  [38] = {.index = 64, .length = 5},
  [39] = {.index = 69, .length = 5},
  [40] = {.index = 74, .length = 2},
  [41] = {.index = 76, .length = 5},
  [42] = {.index = 81, .length = 3},
  [43] = {.index = 84, .length = 1},
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
    {field_arguments, 2},
    {field_name, 1},
  [7] =
    {field_body, 2},
    {field_name, 1},
  [9] =
    {field_left, 0},
    {field_right, 2},
  [11] =
    {field_field, 2},
    {field_object, 0},
  [13] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [16] =
    {field_dimensions, 1},
    {field_name, 0},
  [18] =
    {field_declarator, 1, .inherited = true},
    {field_type, 0},
  [20] =
    {field_declarator, 0},
    {field_declarator, 1, .inherited = true},
  [22] =
    {field_type, 1},
  [23] =
    {field_type, 1},
    {field_value, 3},
  [25] =
    {field_type, 0, .inherited = true},
    {field_type, 1, .inherited = true},
  [27] =
    {field_name, 2},
    {field_scope, 0},
  [29] =
    {field_body, 3},
    {field_name, 1},
    {field_type_parameters, 2},
  [32] =
    {field_array, 0},
    {field_index, 2},
  [34] =
    {field_body, 3},
    {field_name, 2},
  [36] =
    {field_declarator, 2, .inherited = true},
    {field_type, 1},
  [38] =
    {field_declarator, 1},
  [39] =
    {field_declarator, 0, .inherited = true},
    {field_declarator, 1, .inherited = true},
  [41] =
    {field_name, 2},
  [42] =
    {field_type, 1},
    {field_type, 2, .inherited = true},
    {field_value, 4},
  [45] =
    {field_dimensions, 1, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_parameters, 1, .inherited = true},
    {field_type, 0},
  [49] =
    {field_dimensions, 0, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_parameters, 0, .inherited = true},
    {field_type, 0, .inherited = true},
    {field_type_parameters, 0, .inherited = true},
  [54] =
    {field_field, 4},
    {field_object, 0},
  [56] =
    {field_body, 4},
    {field_name, 2},
    {field_type_parameters, 3},
  [59] =
    {field_key, 0},
    {field_value, 2},
  [61] =
    {field_member, 4},
    {field_scope, 2},
  [63] =
    {field_type_name, 2},
  [64] =
    {field_dimensions, 1, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_parameters, 1, .inherited = true},
    {field_type, 1, .inherited = true},
    {field_type_parameters, 1, .inherited = true},
  [69] =
    {field_dimensions, 2, .inherited = true},
    {field_name, 2, .inherited = true},
    {field_parameters, 2, .inherited = true},
    {field_type, 1},
    {field_type_parameters, 0},
  [74] =
    {field_name, 0},
    {field_parameters, 1},
  [76] =
    {field_dimensions, 3, .inherited = true},
    {field_name, 3, .inherited = true},
    {field_parameters, 3, .inherited = true},
    {field_type, 2},
    {field_type_parameters, 0},
  [81] =
    {field_dimensions, 2},
    {field_name, 0},
    {field_parameters, 1},
  [84] =
    {field_type, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_type_identifier,
  },
  [10] = {
    [0] = alias_sym_type_identifier,
    [2] = alias_sym_type_identifier,
  },
  [15] = {
    [2] = alias_sym_type_identifier,
  },
  [21] = {
    [0] = alias_sym_type_identifier,
    [3] = alias_sym_type_identifier,
  },
  [27] = {
    [3] = alias_sym_type_identifier,
  },
  [30] = {
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
  [8] = 6,
  [9] = 9,
  [10] = 10,
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
  [80] = 58,
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
  [115] = 95,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 122,
  [124] = 124,
  [125] = 125,
  [126] = 121,
  [127] = 127,
  [128] = 94,
  [129] = 109,
  [130] = 105,
  [131] = 131,
  [132] = 132,
  [133] = 107,
  [134] = 134,
  [135] = 135,
  [136] = 106,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 135,
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
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 137,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 157,
  [182] = 142,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
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
  [202] = 194,
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
  [231] = 224,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
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
  [250] = 225,
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
  [310] = 298,
  [311] = 311,
  [312] = 305,
  [313] = 313,
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
      if (eof) ADVANCE(37);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '%') ADVANCE(91);
      if (lookahead == '&') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '+') ADVANCE(85);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == '0') ADVANCE(39);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == ';') ADVANCE(102);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '?') ADVANCE(101);
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == ']') ADVANCE(96);
      if (lookahead == '^') ADVANCE(90);
      if (lookahead == '{') ADVANCE(103);
      if (lookahead == '|') ADVANCE(89);
      if (lookahead == '}') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(108);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '%') ADVANCE(91);
      if (lookahead == '&') ADVANCE(72);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '+') ADVANCE(85);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == ';') ADVANCE(102);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '?') ADVANCE(101);
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == ']') ADVANCE(96);
      if (lookahead == '^') ADVANCE(90);
      if (lookahead == '|') ADVANCE(89);
      if (lookahead == '}') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(108);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(71);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '.') ADVANCE(98);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(102);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(108);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(109);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(107);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 11:
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(4);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(19);
      if (lookahead == 'x') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(69);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 19:
      if (lookahead == '{') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == '}') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 22:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 23:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(48);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(46);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 34:
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 35:
      if (eof) ADVANCE(37);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '%') ADVANCE(91);
      if (lookahead == '&') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '*') ADVANCE(87);
      if (lookahead == '+') ADVANCE(85);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == '0') ADVANCE(39);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == ';') ADVANCE(102);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '?') ADVANCE(101);
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == ']') ADVANCE(96);
      if (lookahead == '^') ADVANCE(90);
      if (lookahead == '{') ADVANCE(103);
      if (lookahead == '|') ADVANCE(89);
      if (lookahead == '}') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(108);
      END_STATE();
    case 36:
      if (eof) ADVANCE(37);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '&') ADVANCE(71);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(39);
      if (lookahead == ';') ADVANCE(102);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == '?') ADVANCE(101);
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == '{') ADVANCE(103);
      if (lookahead == '}') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(108);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(23);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(38);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(24);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(9);
      if (lookahead == '_') ADVANCE(12);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(21);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(38);
      if (lookahead == '_') ADVANCE(12);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(21);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(41);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(22);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(41);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(41);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_octal_integer_literal);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_octal_integer_literal);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(45);
      if (lookahead == '_') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(47);
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(13);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(22);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_character_literal);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(66);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '*') ADVANCE(63);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '*') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_string_fragment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(83);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '>') ADVANCE(93);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(92);
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(109);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(84);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>') ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(8);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 110:
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
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 36},
  [3] = {.lex_state = 36},
  [4] = {.lex_state = 36},
  [5] = {.lex_state = 36},
  [6] = {.lex_state = 36},
  [7] = {.lex_state = 36},
  [8] = {.lex_state = 36},
  [9] = {.lex_state = 36},
  [10] = {.lex_state = 36},
  [11] = {.lex_state = 36},
  [12] = {.lex_state = 36},
  [13] = {.lex_state = 36},
  [14] = {.lex_state = 36},
  [15] = {.lex_state = 36},
  [16] = {.lex_state = 36},
  [17] = {.lex_state = 36},
  [18] = {.lex_state = 36},
  [19] = {.lex_state = 36},
  [20] = {.lex_state = 36},
  [21] = {.lex_state = 36},
  [22] = {.lex_state = 36},
  [23] = {.lex_state = 36},
  [24] = {.lex_state = 36},
  [25] = {.lex_state = 36},
  [26] = {.lex_state = 36},
  [27] = {.lex_state = 36},
  [28] = {.lex_state = 36},
  [29] = {.lex_state = 36},
  [30] = {.lex_state = 36},
  [31] = {.lex_state = 36},
  [32] = {.lex_state = 36},
  [33] = {.lex_state = 36},
  [34] = {.lex_state = 36},
  [35] = {.lex_state = 36},
  [36] = {.lex_state = 36},
  [37] = {.lex_state = 36},
  [38] = {.lex_state = 36},
  [39] = {.lex_state = 36},
  [40] = {.lex_state = 36},
  [41] = {.lex_state = 36},
  [42] = {.lex_state = 36},
  [43] = {.lex_state = 36},
  [44] = {.lex_state = 36},
  [45] = {.lex_state = 36},
  [46] = {.lex_state = 36},
  [47] = {.lex_state = 36},
  [48] = {.lex_state = 36},
  [49] = {.lex_state = 36},
  [50] = {.lex_state = 36},
  [51] = {.lex_state = 36},
  [52] = {.lex_state = 36},
  [53] = {.lex_state = 36},
  [54] = {.lex_state = 36},
  [55] = {.lex_state = 36},
  [56] = {.lex_state = 36},
  [57] = {.lex_state = 36},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 36},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 1},
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
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
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
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 36},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 36},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 36},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 36},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 36},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 36},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 36},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 36},
  [214] = {.lex_state = 36},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 36},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 2},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 36},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 36},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 36},
  [235] = {.lex_state = 0},
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
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 36},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 36},
  [257] = {.lex_state = 36},
  [258] = {.lex_state = 36},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 36},
  [261] = {.lex_state = 1},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 36},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 1},
  [268] = {.lex_state = 1},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 36},
  [273] = {.lex_state = 36},
  [274] = {.lex_state = 36},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 36},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 36},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 1},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 1},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 1},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_program] = STATE(308),
    [sym__literal] = STATE(71),
    [sym_string_literal] = STATE(73),
    [sym_expression] = STATE(114),
    [sym_cast_expression] = STATE(85),
    [sym_assignment_expression] = STATE(85),
    [sym_binary_expression] = STATE(85),
    [sym_primary_expression] = STATE(69),
    [sym_parenthesized_expression] = STATE(71),
    [sym_class_literal] = STATE(71),
    [sym_field_access] = STATE(66),
    [sym_array_access] = STATE(66),
    [sym_statement] = STATE(3),
    [sym_block] = STATE(35),
    [sym_expression_statement] = STATE(35),
    [sym_assert_statement] = STATE(35),
    [sym_return_statement] = STATE(35),
    [sym_yield_statement] = STATE(35),
    [sym__annotation] = STATE(135),
    [sym_marker_annotation] = STATE(135),
    [sym_annotation] = STATE(135),
    [sym_declaration] = STATE(35),
    [sym_package_declaration] = STATE(57),
    [sym_import_declaration] = STATE(57),
    [sym_single_type_import] = STATE(54),
    [sym_type_import_on_demand] = STATE(54),
    [sym_single_static_import] = STATE(54),
    [sym_static_import_on_demand] = STATE(54),
    [sym_modifiers] = STATE(131),
    [sym_interface_declaration] = STATE(57),
    [sym__unannotated_type] = STATE(152),
    [sym_scoped_type_identifier] = STATE(177),
    [sym_generic_type] = STATE(181),
    [sym_array_type] = STATE(163),
    [sym_integral_type] = STATE(163),
    [sym_floating_point_type] = STATE(163),
    [sym_local_variable_declaration] = STATE(35),
    [aux_sym_program_repeat1] = STATE(3),
    [aux_sym_dimensions_expr_repeat1] = STATE(188),
    [aux_sym_modifiers_repeat1] = STATE(121),
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
    [sym__literal] = STATE(71),
    [sym_string_literal] = STATE(73),
    [sym_expression] = STATE(114),
    [sym_cast_expression] = STATE(85),
    [sym_assignment_expression] = STATE(85),
    [sym_binary_expression] = STATE(85),
    [sym_primary_expression] = STATE(69),
    [sym_parenthesized_expression] = STATE(71),
    [sym_class_literal] = STATE(71),
    [sym_field_access] = STATE(66),
    [sym_array_access] = STATE(66),
    [sym_statement] = STATE(2),
    [sym_block] = STATE(35),
    [sym_expression_statement] = STATE(35),
    [sym_assert_statement] = STATE(35),
    [sym_return_statement] = STATE(35),
    [sym_yield_statement] = STATE(35),
    [sym__annotation] = STATE(135),
    [sym_marker_annotation] = STATE(135),
    [sym_annotation] = STATE(135),
    [sym_declaration] = STATE(35),
    [sym_package_declaration] = STATE(57),
    [sym_import_declaration] = STATE(57),
    [sym_single_type_import] = STATE(54),
    [sym_type_import_on_demand] = STATE(54),
    [sym_single_static_import] = STATE(54),
    [sym_static_import_on_demand] = STATE(54),
    [sym_modifiers] = STATE(131),
    [sym_interface_declaration] = STATE(57),
    [sym__unannotated_type] = STATE(152),
    [sym_scoped_type_identifier] = STATE(177),
    [sym_generic_type] = STATE(181),
    [sym_array_type] = STATE(163),
    [sym_integral_type] = STATE(163),
    [sym_floating_point_type] = STATE(163),
    [sym_local_variable_declaration] = STATE(35),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_dimensions_expr_repeat1] = STATE(188),
    [aux_sym_modifiers_repeat1] = STATE(121),
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
    [sym__literal] = STATE(71),
    [sym_string_literal] = STATE(73),
    [sym_expression] = STATE(114),
    [sym_cast_expression] = STATE(85),
    [sym_assignment_expression] = STATE(85),
    [sym_binary_expression] = STATE(85),
    [sym_primary_expression] = STATE(69),
    [sym_parenthesized_expression] = STATE(71),
    [sym_class_literal] = STATE(71),
    [sym_field_access] = STATE(66),
    [sym_array_access] = STATE(66),
    [sym_statement] = STATE(2),
    [sym_block] = STATE(35),
    [sym_expression_statement] = STATE(35),
    [sym_assert_statement] = STATE(35),
    [sym_return_statement] = STATE(35),
    [sym_yield_statement] = STATE(35),
    [sym__annotation] = STATE(135),
    [sym_marker_annotation] = STATE(135),
    [sym_annotation] = STATE(135),
    [sym_declaration] = STATE(35),
    [sym_package_declaration] = STATE(57),
    [sym_import_declaration] = STATE(57),
    [sym_single_type_import] = STATE(54),
    [sym_type_import_on_demand] = STATE(54),
    [sym_single_static_import] = STATE(54),
    [sym_static_import_on_demand] = STATE(54),
    [sym_modifiers] = STATE(131),
    [sym_interface_declaration] = STATE(57),
    [sym__unannotated_type] = STATE(152),
    [sym_scoped_type_identifier] = STATE(177),
    [sym_generic_type] = STATE(181),
    [sym_array_type] = STATE(163),
    [sym_integral_type] = STATE(163),
    [sym_floating_point_type] = STATE(163),
    [sym_local_variable_declaration] = STATE(35),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_dimensions_expr_repeat1] = STATE(188),
    [aux_sym_modifiers_repeat1] = STATE(121),
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
    [sym__literal] = STATE(71),
    [sym_string_literal] = STATE(73),
    [sym_expression] = STATE(114),
    [sym_cast_expression] = STATE(85),
    [sym_assignment_expression] = STATE(85),
    [sym_binary_expression] = STATE(85),
    [sym_primary_expression] = STATE(69),
    [sym_parenthesized_expression] = STATE(71),
    [sym_class_literal] = STATE(71),
    [sym_field_access] = STATE(66),
    [sym_array_access] = STATE(66),
    [sym_statement] = STATE(5),
    [sym_block] = STATE(35),
    [sym_expression_statement] = STATE(35),
    [sym_assert_statement] = STATE(35),
    [sym_return_statement] = STATE(35),
    [sym_yield_statement] = STATE(35),
    [sym__annotation] = STATE(135),
    [sym_marker_annotation] = STATE(135),
    [sym_annotation] = STATE(135),
    [sym_declaration] = STATE(35),
    [sym_package_declaration] = STATE(57),
    [sym_import_declaration] = STATE(57),
    [sym_single_type_import] = STATE(54),
    [sym_type_import_on_demand] = STATE(54),
    [sym_single_static_import] = STATE(54),
    [sym_static_import_on_demand] = STATE(54),
    [sym_modifiers] = STATE(131),
    [sym_interface_declaration] = STATE(57),
    [sym__unannotated_type] = STATE(152),
    [sym_scoped_type_identifier] = STATE(177),
    [sym_generic_type] = STATE(181),
    [sym_array_type] = STATE(163),
    [sym_integral_type] = STATE(163),
    [sym_floating_point_type] = STATE(163),
    [sym_local_variable_declaration] = STATE(35),
    [aux_sym_program_repeat1] = STATE(5),
    [aux_sym_dimensions_expr_repeat1] = STATE(188),
    [aux_sym_modifiers_repeat1] = STATE(121),
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
    [sym__literal] = STATE(71),
    [sym_string_literal] = STATE(73),
    [sym_expression] = STATE(114),
    [sym_cast_expression] = STATE(85),
    [sym_assignment_expression] = STATE(85),
    [sym_binary_expression] = STATE(85),
    [sym_primary_expression] = STATE(69),
    [sym_parenthesized_expression] = STATE(71),
    [sym_class_literal] = STATE(71),
    [sym_field_access] = STATE(66),
    [sym_array_access] = STATE(66),
    [sym_statement] = STATE(2),
    [sym_block] = STATE(35),
    [sym_expression_statement] = STATE(35),
    [sym_assert_statement] = STATE(35),
    [sym_return_statement] = STATE(35),
    [sym_yield_statement] = STATE(35),
    [sym__annotation] = STATE(135),
    [sym_marker_annotation] = STATE(135),
    [sym_annotation] = STATE(135),
    [sym_declaration] = STATE(35),
    [sym_package_declaration] = STATE(57),
    [sym_import_declaration] = STATE(57),
    [sym_single_type_import] = STATE(54),
    [sym_type_import_on_demand] = STATE(54),
    [sym_single_static_import] = STATE(54),
    [sym_static_import_on_demand] = STATE(54),
    [sym_modifiers] = STATE(131),
    [sym_interface_declaration] = STATE(57),
    [sym__unannotated_type] = STATE(152),
    [sym_scoped_type_identifier] = STATE(177),
    [sym_generic_type] = STATE(181),
    [sym_array_type] = STATE(163),
    [sym_integral_type] = STATE(163),
    [sym_floating_point_type] = STATE(163),
    [sym_local_variable_declaration] = STATE(35),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_dimensions_expr_repeat1] = STATE(188),
    [aux_sym_modifiers_repeat1] = STATE(121),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 27,
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
    ACTIONS(120), 1,
      sym_identifier,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_primary_expression,
    STATE(73), 1,
      sym_string_literal,
    STATE(102), 1,
      sym_expression,
    STATE(177), 1,
      sym_scoped_type_identifier,
    STATE(180), 1,
      sym__unannotated_type,
    STATE(181), 1,
      sym_generic_type,
    STATE(250), 1,
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
    STATE(66), 2,
      sym_field_access,
      sym_array_access,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(71), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(85), 3,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    STATE(305), 5,
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
  [110] = 27,
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
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_primary_expression,
    STATE(73), 1,
      sym_string_literal,
    STATE(102), 1,
      sym_expression,
    STATE(177), 1,
      sym_scoped_type_identifier,
    STATE(180), 1,
      sym__unannotated_type,
    STATE(181), 1,
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
    STATE(66), 2,
      sym_field_access,
      sym_array_access,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(71), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(85), 3,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    STATE(253), 5,
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
  [220] = 27,
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
    ACTIONS(120), 1,
      sym_identifier,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      sym_primary_expression,
    STATE(73), 1,
      sym_string_literal,
    STATE(102), 1,
      sym_expression,
    STATE(177), 1,
      sym_scoped_type_identifier,
    STATE(180), 1,
      sym__unannotated_type,
    STATE(181), 1,
      sym_generic_type,
    STATE(225), 1,
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
    STATE(66), 2,
      sym_field_access,
      sym_array_access,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(71), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(85), 3,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    STATE(312), 5,
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
  [330] = 26,
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
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_primary_expression,
    STATE(73), 1,
      sym_string_literal,
    STATE(102), 1,
      sym_expression,
    STATE(177), 1,
      sym_scoped_type_identifier,
    STATE(180), 1,
      sym__unannotated_type,
    STATE(181), 1,
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
    STATE(66), 2,
      sym_field_access,
      sym_array_access,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(71), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(85), 3,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    STATE(283), 5,
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
  [437] = 26,
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
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_primary_expression,
    STATE(73), 1,
      sym_string_literal,
    STATE(102), 1,
      sym_expression,
    STATE(177), 1,
      sym_scoped_type_identifier,
    STATE(180), 1,
      sym__unannotated_type,
    STATE(181), 1,
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
    STATE(66), 2,
      sym_field_access,
      sym_array_access,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(71), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(85), 3,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    STATE(283), 5,
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
  [544] = 25,
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
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_primary_expression,
    STATE(73), 1,
      sym_string_literal,
    STATE(102), 1,
      sym_expression,
    STATE(177), 1,
      sym_scoped_type_identifier,
    STATE(180), 1,
      sym__unannotated_type,
    STATE(181), 1,
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
    STATE(66), 2,
      sym_field_access,
      sym_array_access,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(71), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(85), 3,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    STATE(283), 5,
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
  [648] = 25,
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
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_primary_expression,
    STATE(73), 1,
      sym_string_literal,
    STATE(102), 1,
      sym_expression,
    STATE(177), 1,
      sym_scoped_type_identifier,
    STATE(180), 1,
      sym__unannotated_type,
    STATE(181), 1,
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
    STATE(66), 2,
      sym_field_access,
      sym_array_access,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(71), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(85), 3,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    STATE(271), 5,
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
  [752] = 26,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_this,
    ACTIONS(47), 1,
      sym_super,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_AT,
    STATE(69), 1,
      sym_primary_expression,
    STATE(73), 1,
      sym_string_literal,
    STATE(116), 1,
      sym_expression,
    STATE(174), 1,
      sym__unannotated_type,
    STATE(177), 1,
      sym_scoped_type_identifier,
    STATE(181), 1,
      sym_generic_type,
    STATE(204), 1,
      sym_annotated_type,
    STATE(226), 1,
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
    STATE(66), 2,
      sym_field_access,
      sym_array_access,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(71), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(85), 3,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    STATE(110), 4,
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
  [858] = 25,
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
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_primary_expression,
    STATE(73), 1,
      sym_string_literal,
    STATE(111), 1,
      sym_expression,
    STATE(177), 1,
      sym_scoped_type_identifier,
    STATE(180), 1,
      sym__unannotated_type,
    STATE(181), 1,
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
    STATE(66), 2,
      sym_field_access,
      sym_array_access,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(71), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(85), 3,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
    STATE(271), 5,
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
  [962] = 23,
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
    ACTIONS(140), 1,
      anon_sym_SEMI,
    STATE(69), 1,
      sym_primary_expression,
    STATE(73), 1,
      sym_string_literal,
    STATE(118), 1,
      sym_expression,
    STATE(177), 1,
      sym_scoped_type_identifier,
    STATE(180), 1,
      sym__unannotated_type,
    STATE(181), 1,
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
    STATE(66), 2,
      sym_field_access,
      sym_array_access,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(71), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(85), 3,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
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
  [1056] = 22,
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
    STATE(69), 1,
      sym_primary_expression,
    STATE(73), 1,
      sym_string_literal,
    STATE(88), 1,
      sym_expression,
    STATE(177), 1,
      sym_scoped_type_identifier,
    STATE(180), 1,
      sym__unannotated_type,
    STATE(181), 1,
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
    STATE(66), 2,
      sym_field_access,
      sym_array_access,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(71), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(85), 3,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
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
  [1147] = 22,
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
    STATE(69), 1,
      sym_primary_expression,
    STATE(73), 1,
      sym_string_literal,
    STATE(89), 1,
      sym_expression,
    STATE(177), 1,
      sym_scoped_type_identifier,
    STATE(180), 1,
      sym__unannotated_type,
    STATE(181), 1,
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
    STATE(66), 2,
      sym_field_access,
      sym_array_access,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(71), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(85), 3,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
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
  [1238] = 22,
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
    STATE(69), 1,
      sym_primary_expression,
    STATE(73), 1,
      sym_string_literal,
    STATE(90), 1,
      sym_expression,
    STATE(177), 1,
      sym_scoped_type_identifier,
    STATE(180), 1,
      sym__unannotated_type,
    STATE(181), 1,
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
    STATE(66), 2,
      sym_field_access,
      sym_array_access,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(71), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(85), 3,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
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
  [1329] = 22,
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
    STATE(69), 1,
      sym_primary_expression,
    STATE(73), 1,
      sym_string_literal,
    STATE(91), 1,
      sym_expression,
    STATE(177), 1,
      sym_scoped_type_identifier,
    STATE(180), 1,
      sym__unannotated_type,
    STATE(181), 1,
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
    STATE(66), 2,
      sym_field_access,
      sym_array_access,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(71), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(85), 3,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
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
  [1420] = 22,
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
    STATE(69), 1,
      sym_primary_expression,
    STATE(73), 1,
      sym_string_literal,
    STATE(92), 1,
      sym_expression,
    STATE(177), 1,
      sym_scoped_type_identifier,
    STATE(180), 1,
      sym__unannotated_type,
    STATE(181), 1,
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
    STATE(66), 2,
      sym_field_access,
      sym_array_access,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(71), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(85), 3,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
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
  [1511] = 22,
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
    STATE(69), 1,
      sym_primary_expression,
    STATE(73), 1,
      sym_string_literal,
    STATE(93), 1,
      sym_expression,
    STATE(177), 1,
      sym_scoped_type_identifier,
    STATE(180), 1,
      sym__unannotated_type,
    STATE(181), 1,
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
    STATE(66), 2,
      sym_field_access,
      sym_array_access,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(71), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(85), 3,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
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
  [1602] = 22,
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
    STATE(69), 1,
      sym_primary_expression,
    STATE(73), 1,
      sym_string_literal,
    STATE(86), 1,
      sym_expression,
    STATE(177), 1,
      sym_scoped_type_identifier,
    STATE(180), 1,
      sym__unannotated_type,
    STATE(181), 1,
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
    STATE(66), 2,
      sym_field_access,
      sym_array_access,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(71), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(85), 3,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
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
  [1693] = 22,
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
    STATE(69), 1,
      sym_primary_expression,
    STATE(73), 1,
      sym_string_literal,
    STATE(78), 1,
      sym_expression,
    STATE(177), 1,
      sym_scoped_type_identifier,
    STATE(180), 1,
      sym__unannotated_type,
    STATE(181), 1,
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
    STATE(66), 2,
      sym_field_access,
      sym_array_access,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(71), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(85), 3,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
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
  [1784] = 22,
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
    STATE(69), 1,
      sym_primary_expression,
    STATE(73), 1,
      sym_string_literal,
    STATE(82), 1,
      sym_expression,
    STATE(177), 1,
      sym_scoped_type_identifier,
    STATE(180), 1,
      sym__unannotated_type,
    STATE(181), 1,
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
    STATE(66), 2,
      sym_field_access,
      sym_array_access,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(71), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(85), 3,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
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
  [1875] = 22,
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
    STATE(69), 1,
      sym_primary_expression,
    STATE(73), 1,
      sym_string_literal,
    STATE(119), 1,
      sym_expression,
    STATE(177), 1,
      sym_scoped_type_identifier,
    STATE(180), 1,
      sym__unannotated_type,
    STATE(181), 1,
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
    STATE(66), 2,
      sym_field_access,
      sym_array_access,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(71), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(85), 3,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
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
  [1966] = 22,
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
    STATE(69), 1,
      sym_primary_expression,
    STATE(73), 1,
      sym_string_literal,
    STATE(77), 1,
      sym_expression,
    STATE(177), 1,
      sym_scoped_type_identifier,
    STATE(180), 1,
      sym__unannotated_type,
    STATE(181), 1,
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
    STATE(66), 2,
      sym_field_access,
      sym_array_access,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(71), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(85), 3,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
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
  [2057] = 22,
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
    STATE(69), 1,
      sym_primary_expression,
    STATE(73), 1,
      sym_string_literal,
    STATE(79), 1,
      sym_expression,
    STATE(177), 1,
      sym_scoped_type_identifier,
    STATE(180), 1,
      sym__unannotated_type,
    STATE(181), 1,
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
    STATE(66), 2,
      sym_field_access,
      sym_array_access,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(71), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(85), 3,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
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
  [2148] = 22,
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
    STATE(69), 1,
      sym_primary_expression,
    STATE(73), 1,
      sym_string_literal,
    STATE(84), 1,
      sym_expression,
    STATE(177), 1,
      sym_scoped_type_identifier,
    STATE(180), 1,
      sym__unannotated_type,
    STATE(181), 1,
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
    STATE(66), 2,
      sym_field_access,
      sym_array_access,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(71), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(85), 3,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
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
  [2239] = 22,
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
    STATE(69), 1,
      sym_primary_expression,
    STATE(73), 1,
      sym_string_literal,
    STATE(87), 1,
      sym_expression,
    STATE(177), 1,
      sym_scoped_type_identifier,
    STATE(180), 1,
      sym__unannotated_type,
    STATE(181), 1,
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
    STATE(66), 2,
      sym_field_access,
      sym_array_access,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(71), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(85), 3,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
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
  [2330] = 22,
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
    STATE(69), 1,
      sym_primary_expression,
    STATE(73), 1,
      sym_string_literal,
    STATE(120), 1,
      sym_expression,
    STATE(177), 1,
      sym_scoped_type_identifier,
    STATE(180), 1,
      sym__unannotated_type,
    STATE(181), 1,
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
    STATE(66), 2,
      sym_field_access,
      sym_array_access,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(71), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(85), 3,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
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
  [2421] = 22,
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
    STATE(69), 1,
      sym_primary_expression,
    STATE(73), 1,
      sym_string_literal,
    STATE(117), 1,
      sym_expression,
    STATE(177), 1,
      sym_scoped_type_identifier,
    STATE(180), 1,
      sym__unannotated_type,
    STATE(181), 1,
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
    STATE(66), 2,
      sym_field_access,
      sym_array_access,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(71), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(85), 3,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
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
  [2512] = 22,
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
    STATE(69), 1,
      sym_primary_expression,
    STATE(73), 1,
      sym_string_literal,
    STATE(108), 1,
      sym_expression,
    STATE(177), 1,
      sym_scoped_type_identifier,
    STATE(180), 1,
      sym__unannotated_type,
    STATE(181), 1,
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
    STATE(66), 2,
      sym_field_access,
      sym_array_access,
    ACTIONS(43), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(71), 3,
      sym__literal,
      sym_parenthesized_expression,
      sym_class_literal,
    STATE(85), 3,
      sym_cast_expression,
      sym_assignment_expression,
      sym_binary_expression,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(11), 4,
      sym_octal_integer_literal,
      sym_binary_integer_literal,
      sym_decimal_floating_point_literal,
      sym_character_literal,
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
  [2603] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(142), 11,
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
    ACTIONS(144), 31,
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
  [2654] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(146), 11,
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
    ACTIONS(148), 31,
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
  [2705] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(150), 11,
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
    ACTIONS(152), 31,
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
  [2756] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(154), 11,
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
    ACTIONS(156), 31,
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
  [2807] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(158), 11,
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
    ACTIONS(160), 31,
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
  [2858] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(162), 11,
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
    ACTIONS(164), 31,
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
  [2909] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(166), 11,
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
    ACTIONS(168), 31,
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
  [2960] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(170), 11,
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
    ACTIONS(172), 31,
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
  [3011] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(174), 11,
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
    ACTIONS(176), 31,
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
  [3062] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(178), 11,
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
    ACTIONS(180), 31,
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
  [3113] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(182), 11,
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
    ACTIONS(184), 31,
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
  [3164] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(186), 11,
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
    ACTIONS(188), 31,
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
  [3215] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(190), 11,
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
    ACTIONS(192), 31,
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
  [3266] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(194), 11,
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
    ACTIONS(196), 31,
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
  [3317] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(198), 11,
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
    ACTIONS(200), 31,
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
  [3368] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 11,
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
    ACTIONS(204), 31,
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
  [3419] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(206), 11,
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
    ACTIONS(208), 31,
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
  [3470] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(210), 11,
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
    ACTIONS(212), 31,
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
  [3521] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(214), 11,
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
    ACTIONS(216), 31,
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
  [3572] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(218), 11,
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
    ACTIONS(220), 31,
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
  [3623] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(222), 11,
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
    ACTIONS(224), 31,
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
  [3674] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(226), 11,
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
    ACTIONS(228), 31,
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
  [3725] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(230), 11,
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
    ACTIONS(232), 31,
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
  [3776] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(234), 11,
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
    ACTIONS(236), 31,
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
  [3827] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(238), 11,
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
    ACTIONS(240), 31,
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
  [3878] = 10,
    ACTIONS(248), 1,
      anon_sym_EQ,
    ACTIONS(250), 1,
      anon_sym_LT,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_AT,
    STATE(160), 1,
      sym_type_arguments,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(242), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
    ACTIONS(244), 5,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(246), 19,
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
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [3935] = 18,
    ACTIONS(262), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_LT,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    ACTIONS(270), 1,
      anon_sym_AT,
    STATE(112), 1,
      sym_type_parameters,
    STATE(127), 1,
      sym_modifiers,
    STATE(137), 1,
      sym_scoped_type_identifier,
    STATE(157), 1,
      sym_generic_type,
    STATE(169), 1,
      sym__unannotated_type,
    STATE(311), 1,
      sym__method_header,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(279), 2,
      anon_sym_float,
      anon_sym_double,
    ACTIONS(282), 2,
      sym_boolean_type,
      sym_void_type,
    STATE(59), 2,
      sym_method_declaration,
      aux_sym_interface_body_repeat1,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(273), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    STATE(126), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_modifiers_repeat1,
    ACTIONS(276), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [4006] = 18,
    ACTIONS(138), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym_identifier,
    ACTIONS(287), 1,
      anon_sym_LT,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      sym_type_parameters,
    STATE(127), 1,
      sym_modifiers,
    STATE(137), 1,
      sym_scoped_type_identifier,
    STATE(157), 1,
      sym_generic_type,
    STATE(169), 1,
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
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(291), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    STATE(126), 4,
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
  [4077] = 18,
    ACTIONS(138), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym_identifier,
    ACTIONS(287), 1,
      anon_sym_LT,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      sym_type_parameters,
    STATE(127), 1,
      sym_modifiers,
    STATE(137), 1,
      sym_scoped_type_identifier,
    STATE(157), 1,
      sym_generic_type,
    STATE(169), 1,
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
    STATE(59), 2,
      sym_method_declaration,
      aux_sym_interface_body_repeat1,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(291), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    STATE(126), 4,
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
  [4148] = 18,
    ACTIONS(138), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym_identifier,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      sym_receiver_parameter,
    STATE(104), 1,
      aux_sym_dimensions_expr_repeat1,
    STATE(126), 1,
      aux_sym_modifiers_repeat1,
    STATE(137), 1,
      sym_scoped_type_identifier,
    STATE(143), 1,
      sym_modifiers,
    STATE(150), 1,
      sym__unannotated_type,
    STATE(157), 1,
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
    STATE(255), 2,
      sym_formal_parameter,
      sym_spread_parameter,
    STATE(148), 3,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(291), 4,
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
  [4218] = 15,
    ACTIONS(138), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym_identifier,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      sym_scoped_type_identifier,
    STATE(143), 1,
      sym_modifiers,
    STATE(156), 1,
      sym__unannotated_type,
    STATE(157), 1,
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
    STATE(245), 2,
      sym_formal_parameter,
      sym_spread_parameter,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(291), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    STATE(126), 4,
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
  [4280] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(299), 7,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(301), 21,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [4317] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(303), 7,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(305), 21,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [4354] = 4,
    ACTIONS(248), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(244), 6,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(246), 21,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [4393] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(307), 7,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(309), 21,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [4430] = 14,
    ACTIONS(138), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym_identifier,
    STATE(137), 1,
      sym_scoped_type_identifier,
    STATE(143), 1,
      sym_modifiers,
    STATE(156), 1,
      sym__unannotated_type,
    STATE(157), 1,
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
    STATE(282), 2,
      sym_formal_parameter,
      sym_spread_parameter,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(291), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    STATE(126), 4,
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
  [4489] = 5,
    ACTIONS(315), 1,
      anon_sym_LBRACK,
    ACTIONS(317), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(311), 6,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(313), 19,
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
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [4529] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(319), 6,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(321), 21,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [4565] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(244), 6,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(246), 21,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [4601] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(323), 6,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(325), 21,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [4637] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(327), 6,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(329), 21,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [4673] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 6,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(333), 21,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [4709] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(335), 6,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(337), 21,
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
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [4745] = 15,
    ACTIONS(138), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym_identifier,
    ACTIONS(339), 1,
      anon_sym_GT,
    ACTIONS(341), 1,
      anon_sym_QMARK,
    STATE(137), 1,
      sym_scoped_type_identifier,
    STATE(157), 1,
      sym_generic_type,
    STATE(167), 1,
      sym__unannotated_type,
    STATE(204), 1,
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
    STATE(232), 2,
      sym_wildcard,
      sym__type,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(103), 4,
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
  [4804] = 15,
    ACTIONS(343), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_AMP_AMP,
    ACTIONS(355), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(361), 1,
      anon_sym_SLASH,
    ACTIONS(363), 1,
      anon_sym_PIPE,
    ACTIONS(365), 1,
      anon_sym_CARET,
    ACTIONS(369), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(347), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(349), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(351), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(367), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(345), 6,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [4862] = 8,
    ACTIONS(361), 1,
      anon_sym_SLASH,
    ACTIONS(369), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(367), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(371), 4,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
    ACTIONS(373), 13,
      anon_sym_RPAREN,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [4906] = 3,
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
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [4940] = 10,
    ACTIONS(248), 1,
      anon_sym_EQ,
    ACTIONS(250), 1,
      anon_sym_LT,
    ACTIONS(256), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_AT,
    ACTIONS(379), 1,
      anon_sym_AMP,
    STATE(160), 1,
      sym_type_arguments,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(253), 2,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
    ACTIONS(244), 4,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(246), 13,
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
  [4988] = 14,
    ACTIONS(138), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym_identifier,
    ACTIONS(341), 1,
      anon_sym_QMARK,
    STATE(137), 1,
      sym_scoped_type_identifier,
    STATE(157), 1,
      sym_generic_type,
    STATE(167), 1,
      sym__unannotated_type,
    STATE(204), 1,
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
    STATE(274), 2,
      sym_wildcard,
      sym__type,
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(103), 4,
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
  [5044] = 11,
    ACTIONS(361), 1,
      anon_sym_SLASH,
    ACTIONS(369), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(347), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(349), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(351), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(367), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(371), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(373), 9,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5094] = 9,
    ACTIONS(250), 1,
      anon_sym_LT,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(256), 1,
      anon_sym_DOT,
    ACTIONS(260), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      anon_sym_EQ,
    STATE(160), 1,
      sym_type_arguments,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(244), 5,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(246), 14,
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
  [5140] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(384), 6,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(386), 19,
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
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5174] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(311), 6,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(313), 19,
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
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5208] = 10,
    ACTIONS(361), 1,
      anon_sym_SLASH,
    ACTIONS(369), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(347), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(349), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(367), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(371), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(373), 11,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5256] = 6,
    ACTIONS(361), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(371), 5,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(373), 15,
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
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5296] = 12,
    ACTIONS(343), 1,
      anon_sym_AMP,
    ACTIONS(361), 1,
      anon_sym_SLASH,
    ACTIONS(369), 1,
      anon_sym_GT_GT,
    ACTIONS(371), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(347), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(349), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(351), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(367), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(373), 9,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5348] = 13,
    ACTIONS(343), 1,
      anon_sym_AMP,
    ACTIONS(361), 1,
      anon_sym_SLASH,
    ACTIONS(365), 1,
      anon_sym_CARET,
    ACTIONS(369), 1,
      anon_sym_GT_GT,
    ACTIONS(371), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(347), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(349), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(351), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(367), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(373), 8,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5402] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(371), 6,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(373), 19,
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
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5436] = 5,
    ACTIONS(361), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(371), 5,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(373), 17,
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
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5474] = 14,
    ACTIONS(343), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_AMP_AMP,
    ACTIONS(361), 1,
      anon_sym_SLASH,
    ACTIONS(363), 1,
      anon_sym_PIPE,
    ACTIONS(365), 1,
      anon_sym_CARET,
    ACTIONS(369), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(347), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(349), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(351), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(367), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(373), 7,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5530] = 13,
    ACTIONS(343), 1,
      anon_sym_AMP,
    ACTIONS(361), 1,
      anon_sym_SLASH,
    ACTIONS(363), 1,
      anon_sym_PIPE,
    ACTIONS(365), 1,
      anon_sym_CARET,
    ACTIONS(369), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(347), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(349), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(351), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(367), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(373), 8,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [5584] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(390), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(388), 16,
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
  [5617] = 6,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_DOT,
    STATE(107), 1,
      sym_annotation_argument_list,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(396), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(392), 16,
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
  [5656] = 13,
    ACTIONS(138), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym_identifier,
    STATE(137), 1,
      sym_scoped_type_identifier,
    STATE(157), 1,
      sym_generic_type,
    STATE(167), 1,
      sym__unannotated_type,
    STATE(204), 1,
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
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(110), 4,
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
  [5708] = 13,
    ACTIONS(138), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym_identifier,
    STATE(137), 1,
      sym_scoped_type_identifier,
    STATE(157), 1,
      sym_generic_type,
    STATE(167), 1,
      sym__unannotated_type,
    STATE(204), 1,
      sym_annotated_type,
    STATE(207), 1,
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
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(110), 4,
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
  [5760] = 13,
    ACTIONS(138), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym_identifier,
    STATE(137), 1,
      sym_scoped_type_identifier,
    STATE(157), 1,
      sym_generic_type,
    STATE(167), 1,
      sym__unannotated_type,
    STATE(204), 1,
      sym_annotated_type,
    STATE(277), 1,
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
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(110), 4,
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
  [5812] = 13,
    ACTIONS(138), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym_identifier,
    STATE(137), 1,
      sym_scoped_type_identifier,
    STATE(157), 1,
      sym_generic_type,
    STATE(167), 1,
      sym__unannotated_type,
    STATE(204), 1,
      sym_annotated_type,
    STATE(275), 1,
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
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(110), 4,
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
  [5864] = 13,
    ACTIONS(138), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym_identifier,
    STATE(137), 1,
      sym_scoped_type_identifier,
    STATE(157), 1,
      sym_generic_type,
    STATE(167), 1,
      sym__unannotated_type,
    STATE(204), 1,
      sym_annotated_type,
    STATE(257), 1,
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
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(110), 4,
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
  [5916] = 13,
    ACTIONS(138), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym_identifier,
    STATE(137), 1,
      sym_scoped_type_identifier,
    STATE(157), 1,
      sym_generic_type,
    STATE(167), 1,
      sym__unannotated_type,
    STATE(204), 1,
      sym_annotated_type,
    STATE(285), 1,
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
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(110), 4,
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
  [5968] = 15,
    ACTIONS(343), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_AMP_AMP,
    ACTIONS(355), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(361), 1,
      anon_sym_SLASH,
    ACTIONS(363), 1,
      anon_sym_PIPE,
    ACTIONS(365), 1,
      anon_sym_CARET,
    ACTIONS(369), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(347), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(349), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(351), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(367), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(400), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6023] = 12,
    ACTIONS(138), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym_identifier,
    ACTIONS(402), 1,
      anon_sym_QMARK,
    STATE(137), 1,
      sym_scoped_type_identifier,
    STATE(157), 1,
      sym_generic_type,
    STATE(171), 1,
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
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(142), 4,
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
  [6072] = 11,
    ACTIONS(138), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym_identifier,
    STATE(137), 1,
      sym_scoped_type_identifier,
    STATE(157), 1,
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
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(142), 4,
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
  [6118] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(406), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(404), 16,
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
  [6148] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(410), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(408), 16,
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
  [6178] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(414), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(412), 16,
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
  [6208] = 16,
    ACTIONS(343), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_AMP_AMP,
    ACTIONS(355), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(361), 1,
      anon_sym_SLASH,
    ACTIONS(363), 1,
      anon_sym_PIPE,
    ACTIONS(365), 1,
      anon_sym_CARET,
    ACTIONS(369), 1,
      anon_sym_GT_GT,
    ACTIONS(416), 1,
      anon_sym_SEMI,
    ACTIONS(418), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(347), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(349), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(351), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(367), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [6264] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(422), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(420), 16,
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
  [6294] = 11,
    ACTIONS(138), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym_identifier,
    STATE(137), 1,
      sym_scoped_type_identifier,
    STATE(157), 1,
      sym_generic_type,
    STATE(171), 1,
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
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(142), 4,
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
  [6340] = 15,
    ACTIONS(343), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_AMP_AMP,
    ACTIONS(355), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(361), 1,
      anon_sym_SLASH,
    ACTIONS(363), 1,
      anon_sym_PIPE,
    ACTIONS(365), 1,
      anon_sym_CARET,
    ACTIONS(369), 1,
      anon_sym_GT_GT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(347), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(349), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(351), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(367), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
    ACTIONS(400), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6394] = 11,
    ACTIONS(138), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym_identifier,
    STATE(137), 1,
      sym_scoped_type_identifier,
    STATE(157), 1,
      sym_generic_type,
    STATE(168), 1,
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
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(113), 4,
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
  [6440] = 11,
    ACTIONS(138), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym_identifier,
    STATE(137), 1,
      sym_scoped_type_identifier,
    STATE(157), 1,
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
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    STATE(142), 4,
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
  [6486] = 15,
    ACTIONS(343), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_AMP_AMP,
    ACTIONS(355), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(361), 1,
      anon_sym_SLASH,
    ACTIONS(363), 1,
      anon_sym_PIPE,
    ACTIONS(365), 1,
      anon_sym_CARET,
    ACTIONS(369), 1,
      anon_sym_GT_GT,
    ACTIONS(424), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(347), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(349), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(351), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(367), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [6539] = 6,
    ACTIONS(426), 1,
      anon_sym_LPAREN,
    ACTIONS(428), 1,
      anon_sym_DOT,
    STATE(133), 1,
      sym_annotation_argument_list,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(396), 3,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_AT,
    ACTIONS(392), 14,
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
  [6574] = 15,
    ACTIONS(343), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_AMP_AMP,
    ACTIONS(355), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(361), 1,
      anon_sym_SLASH,
    ACTIONS(363), 1,
      anon_sym_PIPE,
    ACTIONS(365), 1,
      anon_sym_CARET,
    ACTIONS(369), 1,
      anon_sym_GT_GT,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(347), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(349), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(351), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(367), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [6627] = 15,
    ACTIONS(343), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_AMP_AMP,
    ACTIONS(355), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(361), 1,
      anon_sym_SLASH,
    ACTIONS(363), 1,
      anon_sym_PIPE,
    ACTIONS(365), 1,
      anon_sym_CARET,
    ACTIONS(369), 1,
      anon_sym_GT_GT,
    ACTIONS(432), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(347), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(349), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(351), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(367), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [6680] = 15,
    ACTIONS(343), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_AMP_AMP,
    ACTIONS(355), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(361), 1,
      anon_sym_SLASH,
    ACTIONS(363), 1,
      anon_sym_PIPE,
    ACTIONS(365), 1,
      anon_sym_CARET,
    ACTIONS(369), 1,
      anon_sym_GT_GT,
    ACTIONS(434), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(347), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(349), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(351), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(367), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [6733] = 15,
    ACTIONS(343), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_AMP_AMP,
    ACTIONS(355), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(361), 1,
      anon_sym_SLASH,
    ACTIONS(363), 1,
      anon_sym_PIPE,
    ACTIONS(365), 1,
      anon_sym_CARET,
    ACTIONS(369), 1,
      anon_sym_GT_GT,
    ACTIONS(436), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(347), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(349), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(351), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(367), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [6786] = 15,
    ACTIONS(343), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_AMP_AMP,
    ACTIONS(355), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(361), 1,
      anon_sym_SLASH,
    ACTIONS(363), 1,
      anon_sym_PIPE,
    ACTIONS(365), 1,
      anon_sym_CARET,
    ACTIONS(369), 1,
      anon_sym_GT_GT,
    ACTIONS(438), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(347), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(349), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(351), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(357), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(367), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [6839] = 5,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(442), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    STATE(122), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_modifiers_repeat1,
    ACTIONS(440), 11,
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
  [6872] = 5,
    ACTIONS(446), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(449), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    STATE(122), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_modifiers_repeat1,
    ACTIONS(444), 11,
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
  [6905] = 6,
    ACTIONS(452), 1,
      anon_sym_LT,
    ACTIONS(454), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(457), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    STATE(123), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_modifiers_repeat1,
    ACTIONS(444), 10,
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
  [6940] = 7,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    STATE(125), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(191), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
    ACTIONS(462), 6,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(460), 7,
      anon_sym_DOT,
      anon_sym_throws,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
  [6977] = 7,
    ACTIONS(470), 1,
      anon_sym_LBRACK,
    ACTIONS(473), 1,
      anon_sym_AT,
    STATE(125), 1,
      aux_sym_dimensions_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(191), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
    ACTIONS(468), 6,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(466), 7,
      anon_sym_DOT,
      anon_sym_throws,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
  [7014] = 6,
    ACTIONS(138), 1,
      anon_sym_AT,
    ACTIONS(476), 1,
      anon_sym_LT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(478), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    STATE(123), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_modifiers_repeat1,
    ACTIONS(440), 10,
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
  [7049] = 12,
    ACTIONS(285), 1,
      sym_identifier,
    ACTIONS(287), 1,
      anon_sym_LT,
    STATE(112), 1,
      sym_type_parameters,
    STATE(137), 1,
      sym_scoped_type_identifier,
    STATE(157), 1,
      sym_generic_type,
    STATE(169), 1,
      sym__unannotated_type,
    STATE(300), 1,
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
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [7095] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(390), 5,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_AT,
    ACTIONS(388), 14,
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
  [7123] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(422), 3,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_AT,
    ACTIONS(420), 14,
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
  [7149] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(406), 3,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_AT,
    ACTIONS(404), 14,
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
  [7175] = 10,
    ACTIONS(285), 1,
      sym_identifier,
    ACTIONS(480), 1,
      anon_sym_interface,
    STATE(137), 1,
      sym_scoped_type_identifier,
    STATE(157), 1,
      sym_generic_type,
    STATE(166), 1,
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
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [7215] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(484), 3,
      anon_sym_LT,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(482), 14,
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
  [7241] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(414), 3,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_AT,
    ACTIONS(412), 14,
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
  [7267] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(488), 3,
      anon_sym_LT,
      anon_sym_RBRACE,
      anon_sym_AT,
    ACTIONS(486), 14,
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
  [7293] = 4,
    ACTIONS(492), 1,
      anon_sym_AT,
    ACTIONS(495), 1,
      anon_sym_package,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(490), 15,
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
  [7321] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(410), 3,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_AT,
    ACTIONS(408), 14,
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
  [7347] = 6,
    ACTIONS(501), 1,
      anon_sym_LT,
    ACTIONS(503), 1,
      anon_sym_DOT,
    STATE(155), 1,
      sym_type_arguments,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(497), 5,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(499), 8,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [7378] = 6,
    ACTIONS(501), 1,
      anon_sym_LT,
    ACTIONS(505), 1,
      anon_sym_DOT,
    STATE(160), 1,
      sym_type_arguments,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(242), 5,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(260), 8,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [7409] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(509), 2,
      anon_sym_RPAREN,
      anon_sym_AT,
    ACTIONS(507), 14,
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
  [7434] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(513), 2,
      anon_sym_RPAREN,
      anon_sym_AT,
    ACTIONS(511), 14,
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
  [7459] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(517), 2,
      anon_sym_RPAREN,
      anon_sym_AT,
    ACTIONS(515), 14,
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
  [7484] = 5,
    ACTIONS(521), 1,
      anon_sym_QMARK,
    ACTIONS(523), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(142), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
    ACTIONS(519), 10,
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
  [7513] = 9,
    ACTIONS(285), 1,
      sym_identifier,
    STATE(137), 1,
      sym_scoped_type_identifier,
    STATE(157), 1,
      sym_generic_type,
    STATE(161), 1,
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
    STATE(163), 3,
      sym_array_type,
      sym_integral_type,
      sym_floating_point_type,
    ACTIONS(37), 5,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_char,
  [7550] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(528), 2,
      anon_sym_RPAREN,
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
  [7575] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(530), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(532), 9,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [7599] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(466), 7,
      anon_sym_DOT,
      anon_sym_throws,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(468), 8,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [7623] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(534), 7,
      anon_sym_DOT,
      anon_sym_throws,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(536), 8,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [7647] = 4,
    ACTIONS(492), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(490), 4,
      anon_sym_oneway,
      anon_sym_in,
      anon_sym_out,
      anon_sym_inout,
    ACTIONS(538), 10,
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
  [7673] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(541), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(543), 9,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [7697] = 11,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(545), 1,
      sym_identifier,
    ACTIONS(547), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(551), 1,
      sym_this,
    STATE(124), 1,
      aux_sym_dimensions_repeat1,
    STATE(162), 1,
      sym_dimensions,
    STATE(269), 1,
      sym_variable_declarator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(549), 3,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
    STATE(191), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [7737] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(553), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(555), 9,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [7761] = 10,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(557), 1,
      anon_sym_DOT,
    STATE(124), 1,
      aux_sym_dimensions_repeat1,
    STATE(162), 1,
      sym_dimensions,
    STATE(227), 1,
      sym_variable_declarator,
    STATE(301), 1,
      sym__variable_declarator_list,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(549), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
    STATE(191), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [7799] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(559), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(561), 9,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [7823] = 3,
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
    ACTIONS(565), 8,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [7846] = 3,
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
    ACTIONS(569), 8,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [7869] = 9,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(547), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(124), 1,
      aux_sym_dimensions_repeat1,
    STATE(162), 1,
      sym_dimensions,
    STATE(269), 1,
      sym_variable_declarator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(549), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
    STATE(191), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [7904] = 4,
    ACTIONS(503), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(497), 5,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(499), 8,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [7929] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(571), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(573), 8,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [7952] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(575), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(577), 8,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [7975] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(579), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(581), 8,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [7998] = 9,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(583), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(124), 1,
      aux_sym_dimensions_repeat1,
    STATE(162), 1,
      sym_dimensions,
    STATE(279), 1,
      sym_variable_declarator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(549), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
    STATE(191), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8033] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(585), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(587), 8,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8056] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(497), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(499), 8,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8079] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(589), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(591), 8,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8102] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(593), 6,
      anon_sym_DOT,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
    ACTIONS(595), 8,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_DOT_DOT_DOT,
  [8125] = 9,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    STATE(124), 1,
      aux_sym_dimensions_repeat1,
    STATE(162), 1,
      sym_dimensions,
    STATE(227), 1,
      sym_variable_declarator,
    STATE(291), 1,
      sym__variable_declarator_list,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(549), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
    STATE(191), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8160] = 7,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    STATE(124), 1,
      aux_sym_dimensions_repeat1,
    STATE(162), 1,
      sym_dimensions,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(191), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
    ACTIONS(597), 5,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8190] = 8,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    STATE(124), 1,
      aux_sym_dimensions_repeat1,
    STATE(162), 1,
      sym_dimensions,
    STATE(237), 1,
      sym__method_declarator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(599), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
    STATE(191), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8222] = 8,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    STATE(124), 1,
      aux_sym_dimensions_repeat1,
    STATE(162), 1,
      sym_dimensions,
    STATE(236), 1,
      sym__method_declarator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(599), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
    STATE(191), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8254] = 8,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    STATE(124), 1,
      aux_sym_dimensions_repeat1,
    STATE(162), 1,
      sym_dimensions,
    STATE(251), 1,
      sym__method_declarator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(599), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
    STATE(191), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8286] = 7,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    STATE(124), 1,
      aux_sym_dimensions_repeat1,
    STATE(162), 1,
      sym_dimensions,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(191), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
    ACTIONS(601), 5,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8316] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(605), 2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(603), 10,
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
  [8337] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(609), 2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(607), 10,
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
  [8358] = 8,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(557), 1,
      anon_sym_DOT,
    STATE(124), 1,
      aux_sym_dimensions_repeat1,
    STATE(162), 1,
      sym_dimensions,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(597), 2,
      anon_sym_AMP,
      anon_sym_RPAREN,
    STATE(191), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8388] = 8,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(613), 1,
      anon_sym_DOT,
    STATE(124), 1,
      aux_sym_dimensions_repeat1,
    STATE(238), 1,
      sym_dimensions,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(611), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(191), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8418] = 7,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    STATE(124), 1,
      aux_sym_dimensions_repeat1,
    STATE(238), 1,
      sym_dimensions,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(611), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(191), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8446] = 6,
    ACTIONS(501), 1,
      anon_sym_LT,
    ACTIONS(615), 1,
      anon_sym_DOT,
    STATE(155), 1,
      sym_type_arguments,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(497), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
    ACTIONS(499), 4,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT,
  [8472] = 7,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    STATE(124), 1,
      aux_sym_dimensions_repeat1,
    STATE(263), 1,
      sym_dimensions,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(618), 2,
      anon_sym_SEMI,
      anon_sym_throws,
    STATE(191), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8499] = 8,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(620), 1,
      sym_identifier,
    ACTIONS(622), 1,
      sym_this,
    STATE(124), 1,
      aux_sym_dimensions_repeat1,
    STATE(162), 1,
      sym_dimensions,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(191), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8528] = 7,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(464), 1,
      anon_sym_LBRACK,
    ACTIONS(557), 1,
      anon_sym_DOT,
    STATE(124), 1,
      aux_sym_dimensions_repeat1,
    STATE(162), 1,
      sym_dimensions,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(191), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8554] = 4,
    ACTIONS(615), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(497), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
    ACTIONS(499), 4,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_AT,
  [8574] = 5,
    ACTIONS(521), 1,
      anon_sym_LBRACK,
    ACTIONS(624), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(519), 2,
      anon_sym_package,
      sym_identifier,
    STATE(182), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8595] = 5,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(627), 1,
      sym_identifier,
    STATE(272), 1,
      sym_type_parameter,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(193), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8615] = 5,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(627), 1,
      sym_identifier,
    STATE(258), 1,
      sym_type_parameter,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(193), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8635] = 4,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(629), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(182), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8652] = 4,
    ACTIONS(633), 1,
      anon_sym_static,
    STATE(268), 1,
      sym_scoped_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(631), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
  [8669] = 3,
    ACTIONS(637), 1,
      sym_super,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(635), 5,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
  [8684] = 4,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(639), 1,
      anon_sym_package,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(182), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8701] = 4,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(641), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(185), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8718] = 4,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(643), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(192), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8735] = 4,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(645), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(182), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8752] = 4,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(647), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(182), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8769] = 4,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(649), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(182), 4,
      sym__annotation,
      sym_marker_annotation,
      sym_annotation,
      aux_sym_dimensions_expr_repeat1,
  [8786] = 3,
    STATE(95), 1,
      sym_scoped_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(651), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
  [8800] = 3,
    STATE(267), 1,
      sym_scoped_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(653), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
  [8814] = 4,
    STATE(260), 1,
      sym__wildcard_bounds,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(655), 2,
      anon_sym_GT,
      anon_sym_COMMA,
    ACTIONS(657), 2,
      anon_sym_extends,
      sym_super,
  [8830] = 3,
    STATE(259), 1,
      sym_variable_declarator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(549), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
  [8844] = 3,
    STATE(297), 1,
      sym_scoped_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(659), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
  [8858] = 4,
    STATE(264), 1,
      sym__wildcard_bounds,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(657), 2,
      anon_sym_extends,
      sym_super,
    ACTIONS(661), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [8874] = 3,
    STATE(261), 1,
      sym_scoped_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(663), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
  [8888] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(665), 5,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_this,
      sym_identifier,
  [8900] = 3,
    STATE(115), 1,
      sym_scoped_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(667), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
  [8914] = 3,
    STATE(266), 1,
      sym_variable_declarator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(549), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
  [8928] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(597), 5,
      anon_sym_AMP,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [8940] = 3,
    STATE(280), 1,
      sym_variable_declarator,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(549), 4,
      anon_sym_open,
      anon_sym_module,
      anon_sym_record,
      sym_identifier,
  [8954] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(669), 4,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_throws,
  [8965] = 4,
    ACTIONS(671), 1,
      anon_sym_AMP,
    STATE(217), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(673), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [8980] = 5,
    ACTIONS(287), 1,
      anon_sym_LT,
    ACTIONS(675), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_interface_body,
    STATE(262), 1,
      sym_type_parameters,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8997] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(677), 4,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_throws,
  [9008] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(679), 4,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_throws,
  [9019] = 4,
    ACTIONS(683), 1,
      anon_sym_extends,
    STATE(273), 1,
      sym_type_bound,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(681), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [9034] = 5,
    ACTIONS(287), 1,
      anon_sym_LT,
    ACTIONS(675), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_interface_body,
    STATE(276), 1,
      sym_type_parameters,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9051] = 4,
    ACTIONS(685), 1,
      anon_sym_AMP,
    STATE(213), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(688), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [9066] = 4,
    ACTIONS(683), 1,
      anon_sym_extends,
    STATE(281), 1,
      sym_type_bound,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(690), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [9081] = 4,
    ACTIONS(692), 1,
      anon_sym_DQUOTE,
    STATE(216), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(694), 2,
      sym_string_fragment,
      sym_escape_sequence,
    ACTIONS(696), 2,
      sym_line_comment,
      sym_block_comment,
  [9096] = 4,
    ACTIONS(698), 1,
      anon_sym_DQUOTE,
    STATE(216), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(696), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(700), 2,
      sym_string_fragment,
      sym_escape_sequence,
  [9111] = 4,
    ACTIONS(671), 1,
      anon_sym_AMP,
    STATE(213), 1,
      aux_sym_type_bound_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(703), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [9126] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(705), 4,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_AT,
      anon_sym_throws,
  [9137] = 4,
    ACTIONS(707), 1,
      anon_sym_DQUOTE,
    STATE(215), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(696), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(709), 2,
      sym_string_fragment,
      sym_escape_sequence,
  [9152] = 4,
    ACTIONS(711), 1,
      sym_identifier,
    ACTIONS(713), 1,
      anon_sym_STAR,
    STATE(286), 1,
      sym_asterisk,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9166] = 4,
    ACTIONS(715), 1,
      anon_sym_COMMA,
    ACTIONS(717), 1,
      anon_sym_SEMI,
    STATE(244), 1,
      aux_sym_type_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9180] = 4,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    ACTIONS(719), 1,
      anon_sym_COMMA,
    STATE(246), 1,
      aux_sym_element_value_array_initializer_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9194] = 4,
    ACTIONS(721), 1,
      anon_sym_GT,
    ACTIONS(723), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym_type_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9208] = 4,
    ACTIONS(725), 1,
      anon_sym_RPAREN,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    STATE(228), 1,
      aux_sym_annotation_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9222] = 4,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
    STATE(224), 1,
      aux_sym_annotation_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9236] = 4,
    ACTIONS(731), 1,
      anon_sym_AMP,
    ACTIONS(733), 1,
      anon_sym_RPAREN,
    STATE(229), 1,
      aux_sym_cast_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9250] = 4,
    ACTIONS(735), 1,
      anon_sym_COMMA,
    ACTIONS(737), 1,
      anon_sym_SEMI,
    STATE(242), 1,
      aux_sym__variable_declarator_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9264] = 4,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    STATE(228), 1,
      aux_sym_annotation_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9278] = 4,
    ACTIONS(731), 1,
      anon_sym_AMP,
    ACTIONS(744), 1,
      anon_sym_RPAREN,
    STATE(247), 1,
      aux_sym_cast_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9292] = 4,
    ACTIONS(713), 1,
      anon_sym_STAR,
    ACTIONS(746), 1,
      sym_identifier,
    STATE(307), 1,
      sym_asterisk,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9306] = 4,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    ACTIONS(748), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      aux_sym_annotation_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9320] = 4,
    ACTIONS(750), 1,
      anon_sym_GT,
    ACTIONS(752), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      aux_sym_type_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9334] = 4,
    ACTIONS(754), 1,
      anon_sym_COMMA,
    ACTIONS(757), 1,
      anon_sym_SEMI,
    STATE(233), 1,
      aux_sym__variable_declarator_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9348] = 4,
    ACTIONS(759), 1,
      anon_sym_GT,
    ACTIONS(761), 1,
      anon_sym_COMMA,
    STATE(234), 1,
      aux_sym_type_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9362] = 4,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    ACTIONS(767), 1,
      anon_sym_SEMI,
    STATE(235), 1,
      aux_sym_type_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9376] = 4,
    ACTIONS(769), 1,
      anon_sym_SEMI,
    ACTIONS(771), 1,
      anon_sym_throws,
    STATE(290), 1,
      sym_throws,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9390] = 4,
    ACTIONS(771), 1,
      anon_sym_throws,
    ACTIONS(773), 1,
      anon_sym_SEMI,
    STATE(287), 1,
      sym_throws,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9404] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(775), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9414] = 4,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
    ACTIONS(779), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym_formal_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9428] = 4,
    ACTIONS(781), 1,
      anon_sym_RPAREN,
    ACTIONS(783), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym_formal_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9442] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(786), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9452] = 4,
    ACTIONS(735), 1,
      anon_sym_COMMA,
    ACTIONS(788), 1,
      anon_sym_SEMI,
    STATE(233), 1,
      aux_sym__variable_declarator_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9466] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(790), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9476] = 4,
    ACTIONS(715), 1,
      anon_sym_COMMA,
    ACTIONS(792), 1,
      anon_sym_SEMI,
    STATE(235), 1,
      aux_sym_type_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9490] = 4,
    ACTIONS(779), 1,
      anon_sym_COMMA,
    ACTIONS(794), 1,
      anon_sym_RPAREN,
    STATE(239), 1,
      aux_sym_formal_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9504] = 4,
    ACTIONS(796), 1,
      anon_sym_COMMA,
    ACTIONS(799), 1,
      anon_sym_RBRACE,
    STATE(246), 1,
      aux_sym_element_value_array_initializer_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9518] = 4,
    ACTIONS(801), 1,
      anon_sym_AMP,
    ACTIONS(804), 1,
      anon_sym_RPAREN,
    STATE(247), 1,
      aux_sym_cast_expression_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9532] = 4,
    ACTIONS(779), 1,
      anon_sym_COMMA,
    ACTIONS(794), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      aux_sym_formal_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9546] = 4,
    ACTIONS(806), 1,
      anon_sym_GT,
    ACTIONS(808), 1,
      anon_sym_COMMA,
    STATE(249), 1,
      aux_sym_type_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9560] = 4,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    ACTIONS(811), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      aux_sym_annotation_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9574] = 4,
    ACTIONS(771), 1,
      anon_sym_throws,
    ACTIONS(813), 1,
      anon_sym_SEMI,
    STATE(288), 1,
      sym_throws,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9588] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(815), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9598] = 4,
    ACTIONS(817), 1,
      anon_sym_COMMA,
    ACTIONS(819), 1,
      anon_sym_RBRACE,
    STATE(222), 1,
      aux_sym_element_value_array_initializer_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9612] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(821), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9622] = 4,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
    ACTIONS(779), 1,
      anon_sym_COMMA,
    STATE(248), 1,
      aux_sym_formal_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9636] = 4,
    ACTIONS(752), 1,
      anon_sym_COMMA,
    ACTIONS(823), 1,
      anon_sym_GT,
    STATE(249), 1,
      aux_sym_type_arguments_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9650] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(688), 3,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_COMMA,
  [9660] = 4,
    ACTIONS(723), 1,
      anon_sym_COMMA,
    ACTIONS(825), 1,
      anon_sym_GT,
    STATE(223), 1,
      aux_sym_type_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9674] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(827), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9683] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(829), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [9692] = 3,
    ACTIONS(398), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9703] = 3,
    ACTIONS(675), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_interface_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9714] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(833), 2,
      anon_sym_SEMI,
      anon_sym_throws,
  [9723] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(655), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [9732] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(739), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9741] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(835), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9750] = 3,
    ACTIONS(398), 1,
      anon_sym_DOT,
    ACTIONS(837), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9761] = 3,
    ACTIONS(839), 1,
      anon_sym_DOT,
    ACTIONS(841), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9772] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(843), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9781] = 3,
    ACTIONS(845), 1,
      sym_identifier,
    STATE(265), 1,
      sym_element_value_pair,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9792] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(847), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9801] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(759), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [9810] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(849), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [9819] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(806), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [9828] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(851), 2,
      anon_sym_AMP,
      anon_sym_RPAREN,
  [9837] = 3,
    ACTIONS(675), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_interface_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9848] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(853), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [9857] = 3,
    ACTIONS(855), 1,
      anon_sym_LPAREN,
    STATE(178), 1,
      sym_formal_parameters,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9868] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(857), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9877] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(859), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9886] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(861), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [9895] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(781), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9904] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(799), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9913] = 3,
    ACTIONS(390), 1,
      anon_sym_DOT,
    ACTIONS(863), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9924] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(767), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9933] = 2,
    ACTIONS(865), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9941] = 2,
    ACTIONS(867), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9949] = 2,
    ACTIONS(869), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9957] = 2,
    ACTIONS(819), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9965] = 2,
    ACTIONS(871), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9973] = 2,
    ACTIONS(873), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9981] = 2,
    ACTIONS(875), 1,
      sym_this,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9989] = 2,
    ACTIONS(877), 1,
      sym_this,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9997] = 2,
    ACTIONS(879), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10005] = 2,
    ACTIONS(881), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10013] = 2,
    ACTIONS(883), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10021] = 2,
    ACTIONS(885), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10029] = 2,
    ACTIONS(746), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10037] = 2,
    ACTIONS(887), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10045] = 2,
    ACTIONS(889), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10053] = 2,
    ACTIONS(891), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10061] = 2,
    ACTIONS(893), 1,
      anon_sym_class,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10069] = 2,
    ACTIONS(895), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10077] = 2,
    ACTIONS(897), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10085] = 2,
    ACTIONS(811), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10093] = 2,
    ACTIONS(899), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10101] = 2,
    ACTIONS(901), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10109] = 2,
    ACTIONS(903), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10117] = 2,
    ACTIONS(317), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10125] = 2,
    ACTIONS(905), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10133] = 2,
    ACTIONS(907), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10141] = 2,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10149] = 2,
    ACTIONS(909), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 110,
  [SMALL_STATE(8)] = 220,
  [SMALL_STATE(9)] = 330,
  [SMALL_STATE(10)] = 437,
  [SMALL_STATE(11)] = 544,
  [SMALL_STATE(12)] = 648,
  [SMALL_STATE(13)] = 752,
  [SMALL_STATE(14)] = 858,
  [SMALL_STATE(15)] = 962,
  [SMALL_STATE(16)] = 1056,
  [SMALL_STATE(17)] = 1147,
  [SMALL_STATE(18)] = 1238,
  [SMALL_STATE(19)] = 1329,
  [SMALL_STATE(20)] = 1420,
  [SMALL_STATE(21)] = 1511,
  [SMALL_STATE(22)] = 1602,
  [SMALL_STATE(23)] = 1693,
  [SMALL_STATE(24)] = 1784,
  [SMALL_STATE(25)] = 1875,
  [SMALL_STATE(26)] = 1966,
  [SMALL_STATE(27)] = 2057,
  [SMALL_STATE(28)] = 2148,
  [SMALL_STATE(29)] = 2239,
  [SMALL_STATE(30)] = 2330,
  [SMALL_STATE(31)] = 2421,
  [SMALL_STATE(32)] = 2512,
  [SMALL_STATE(33)] = 2603,
  [SMALL_STATE(34)] = 2654,
  [SMALL_STATE(35)] = 2705,
  [SMALL_STATE(36)] = 2756,
  [SMALL_STATE(37)] = 2807,
  [SMALL_STATE(38)] = 2858,
  [SMALL_STATE(39)] = 2909,
  [SMALL_STATE(40)] = 2960,
  [SMALL_STATE(41)] = 3011,
  [SMALL_STATE(42)] = 3062,
  [SMALL_STATE(43)] = 3113,
  [SMALL_STATE(44)] = 3164,
  [SMALL_STATE(45)] = 3215,
  [SMALL_STATE(46)] = 3266,
  [SMALL_STATE(47)] = 3317,
  [SMALL_STATE(48)] = 3368,
  [SMALL_STATE(49)] = 3419,
  [SMALL_STATE(50)] = 3470,
  [SMALL_STATE(51)] = 3521,
  [SMALL_STATE(52)] = 3572,
  [SMALL_STATE(53)] = 3623,
  [SMALL_STATE(54)] = 3674,
  [SMALL_STATE(55)] = 3725,
  [SMALL_STATE(56)] = 3776,
  [SMALL_STATE(57)] = 3827,
  [SMALL_STATE(58)] = 3878,
  [SMALL_STATE(59)] = 3935,
  [SMALL_STATE(60)] = 4006,
  [SMALL_STATE(61)] = 4077,
  [SMALL_STATE(62)] = 4148,
  [SMALL_STATE(63)] = 4218,
  [SMALL_STATE(64)] = 4280,
  [SMALL_STATE(65)] = 4317,
  [SMALL_STATE(66)] = 4354,
  [SMALL_STATE(67)] = 4393,
  [SMALL_STATE(68)] = 4430,
  [SMALL_STATE(69)] = 4489,
  [SMALL_STATE(70)] = 4529,
  [SMALL_STATE(71)] = 4565,
  [SMALL_STATE(72)] = 4601,
  [SMALL_STATE(73)] = 4637,
  [SMALL_STATE(74)] = 4673,
  [SMALL_STATE(75)] = 4709,
  [SMALL_STATE(76)] = 4745,
  [SMALL_STATE(77)] = 4804,
  [SMALL_STATE(78)] = 4862,
  [SMALL_STATE(79)] = 4906,
  [SMALL_STATE(80)] = 4940,
  [SMALL_STATE(81)] = 4988,
  [SMALL_STATE(82)] = 5044,
  [SMALL_STATE(83)] = 5094,
  [SMALL_STATE(84)] = 5140,
  [SMALL_STATE(85)] = 5174,
  [SMALL_STATE(86)] = 5208,
  [SMALL_STATE(87)] = 5256,
  [SMALL_STATE(88)] = 5296,
  [SMALL_STATE(89)] = 5348,
  [SMALL_STATE(90)] = 5402,
  [SMALL_STATE(91)] = 5436,
  [SMALL_STATE(92)] = 5474,
  [SMALL_STATE(93)] = 5530,
  [SMALL_STATE(94)] = 5584,
  [SMALL_STATE(95)] = 5617,
  [SMALL_STATE(96)] = 5656,
  [SMALL_STATE(97)] = 5708,
  [SMALL_STATE(98)] = 5760,
  [SMALL_STATE(99)] = 5812,
  [SMALL_STATE(100)] = 5864,
  [SMALL_STATE(101)] = 5916,
  [SMALL_STATE(102)] = 5968,
  [SMALL_STATE(103)] = 6023,
  [SMALL_STATE(104)] = 6072,
  [SMALL_STATE(105)] = 6118,
  [SMALL_STATE(106)] = 6148,
  [SMALL_STATE(107)] = 6178,
  [SMALL_STATE(108)] = 6208,
  [SMALL_STATE(109)] = 6264,
  [SMALL_STATE(110)] = 6294,
  [SMALL_STATE(111)] = 6340,
  [SMALL_STATE(112)] = 6394,
  [SMALL_STATE(113)] = 6440,
  [SMALL_STATE(114)] = 6486,
  [SMALL_STATE(115)] = 6539,
  [SMALL_STATE(116)] = 6574,
  [SMALL_STATE(117)] = 6627,
  [SMALL_STATE(118)] = 6680,
  [SMALL_STATE(119)] = 6733,
  [SMALL_STATE(120)] = 6786,
  [SMALL_STATE(121)] = 6839,
  [SMALL_STATE(122)] = 6872,
  [SMALL_STATE(123)] = 6905,
  [SMALL_STATE(124)] = 6940,
  [SMALL_STATE(125)] = 6977,
  [SMALL_STATE(126)] = 7014,
  [SMALL_STATE(127)] = 7049,
  [SMALL_STATE(128)] = 7095,
  [SMALL_STATE(129)] = 7123,
  [SMALL_STATE(130)] = 7149,
  [SMALL_STATE(131)] = 7175,
  [SMALL_STATE(132)] = 7215,
  [SMALL_STATE(133)] = 7241,
  [SMALL_STATE(134)] = 7267,
  [SMALL_STATE(135)] = 7293,
  [SMALL_STATE(136)] = 7321,
  [SMALL_STATE(137)] = 7347,
  [SMALL_STATE(138)] = 7378,
  [SMALL_STATE(139)] = 7409,
  [SMALL_STATE(140)] = 7434,
  [SMALL_STATE(141)] = 7459,
  [SMALL_STATE(142)] = 7484,
  [SMALL_STATE(143)] = 7513,
  [SMALL_STATE(144)] = 7550,
  [SMALL_STATE(145)] = 7575,
  [SMALL_STATE(146)] = 7599,
  [SMALL_STATE(147)] = 7623,
  [SMALL_STATE(148)] = 7647,
  [SMALL_STATE(149)] = 7673,
  [SMALL_STATE(150)] = 7697,
  [SMALL_STATE(151)] = 7737,
  [SMALL_STATE(152)] = 7761,
  [SMALL_STATE(153)] = 7799,
  [SMALL_STATE(154)] = 7823,
  [SMALL_STATE(155)] = 7846,
  [SMALL_STATE(156)] = 7869,
  [SMALL_STATE(157)] = 7904,
  [SMALL_STATE(158)] = 7929,
  [SMALL_STATE(159)] = 7952,
  [SMALL_STATE(160)] = 7975,
  [SMALL_STATE(161)] = 7998,
  [SMALL_STATE(162)] = 8033,
  [SMALL_STATE(163)] = 8056,
  [SMALL_STATE(164)] = 8079,
  [SMALL_STATE(165)] = 8102,
  [SMALL_STATE(166)] = 8125,
  [SMALL_STATE(167)] = 8160,
  [SMALL_STATE(168)] = 8190,
  [SMALL_STATE(169)] = 8222,
  [SMALL_STATE(170)] = 8254,
  [SMALL_STATE(171)] = 8286,
  [SMALL_STATE(172)] = 8316,
  [SMALL_STATE(173)] = 8337,
  [SMALL_STATE(174)] = 8358,
  [SMALL_STATE(175)] = 8388,
  [SMALL_STATE(176)] = 8418,
  [SMALL_STATE(177)] = 8446,
  [SMALL_STATE(178)] = 8472,
  [SMALL_STATE(179)] = 8499,
  [SMALL_STATE(180)] = 8528,
  [SMALL_STATE(181)] = 8554,
  [SMALL_STATE(182)] = 8574,
  [SMALL_STATE(183)] = 8595,
  [SMALL_STATE(184)] = 8615,
  [SMALL_STATE(185)] = 8635,
  [SMALL_STATE(186)] = 8652,
  [SMALL_STATE(187)] = 8669,
  [SMALL_STATE(188)] = 8684,
  [SMALL_STATE(189)] = 8701,
  [SMALL_STATE(190)] = 8718,
  [SMALL_STATE(191)] = 8735,
  [SMALL_STATE(192)] = 8752,
  [SMALL_STATE(193)] = 8769,
  [SMALL_STATE(194)] = 8786,
  [SMALL_STATE(195)] = 8800,
  [SMALL_STATE(196)] = 8814,
  [SMALL_STATE(197)] = 8830,
  [SMALL_STATE(198)] = 8844,
  [SMALL_STATE(199)] = 8858,
  [SMALL_STATE(200)] = 8874,
  [SMALL_STATE(201)] = 8888,
  [SMALL_STATE(202)] = 8900,
  [SMALL_STATE(203)] = 8914,
  [SMALL_STATE(204)] = 8928,
  [SMALL_STATE(205)] = 8940,
  [SMALL_STATE(206)] = 8954,
  [SMALL_STATE(207)] = 8965,
  [SMALL_STATE(208)] = 8980,
  [SMALL_STATE(209)] = 8997,
  [SMALL_STATE(210)] = 9008,
  [SMALL_STATE(211)] = 9019,
  [SMALL_STATE(212)] = 9034,
  [SMALL_STATE(213)] = 9051,
  [SMALL_STATE(214)] = 9066,
  [SMALL_STATE(215)] = 9081,
  [SMALL_STATE(216)] = 9096,
  [SMALL_STATE(217)] = 9111,
  [SMALL_STATE(218)] = 9126,
  [SMALL_STATE(219)] = 9137,
  [SMALL_STATE(220)] = 9152,
  [SMALL_STATE(221)] = 9166,
  [SMALL_STATE(222)] = 9180,
  [SMALL_STATE(223)] = 9194,
  [SMALL_STATE(224)] = 9208,
  [SMALL_STATE(225)] = 9222,
  [SMALL_STATE(226)] = 9236,
  [SMALL_STATE(227)] = 9250,
  [SMALL_STATE(228)] = 9264,
  [SMALL_STATE(229)] = 9278,
  [SMALL_STATE(230)] = 9292,
  [SMALL_STATE(231)] = 9306,
  [SMALL_STATE(232)] = 9320,
  [SMALL_STATE(233)] = 9334,
  [SMALL_STATE(234)] = 9348,
  [SMALL_STATE(235)] = 9362,
  [SMALL_STATE(236)] = 9376,
  [SMALL_STATE(237)] = 9390,
  [SMALL_STATE(238)] = 9404,
  [SMALL_STATE(239)] = 9414,
  [SMALL_STATE(240)] = 9428,
  [SMALL_STATE(241)] = 9442,
  [SMALL_STATE(242)] = 9452,
  [SMALL_STATE(243)] = 9466,
  [SMALL_STATE(244)] = 9476,
  [SMALL_STATE(245)] = 9490,
  [SMALL_STATE(246)] = 9504,
  [SMALL_STATE(247)] = 9518,
  [SMALL_STATE(248)] = 9532,
  [SMALL_STATE(249)] = 9546,
  [SMALL_STATE(250)] = 9560,
  [SMALL_STATE(251)] = 9574,
  [SMALL_STATE(252)] = 9588,
  [SMALL_STATE(253)] = 9598,
  [SMALL_STATE(254)] = 9612,
  [SMALL_STATE(255)] = 9622,
  [SMALL_STATE(256)] = 9636,
  [SMALL_STATE(257)] = 9650,
  [SMALL_STATE(258)] = 9660,
  [SMALL_STATE(259)] = 9674,
  [SMALL_STATE(260)] = 9683,
  [SMALL_STATE(261)] = 9692,
  [SMALL_STATE(262)] = 9703,
  [SMALL_STATE(263)] = 9714,
  [SMALL_STATE(264)] = 9723,
  [SMALL_STATE(265)] = 9732,
  [SMALL_STATE(266)] = 9741,
  [SMALL_STATE(267)] = 9750,
  [SMALL_STATE(268)] = 9761,
  [SMALL_STATE(269)] = 9772,
  [SMALL_STATE(270)] = 9781,
  [SMALL_STATE(271)] = 9792,
  [SMALL_STATE(272)] = 9801,
  [SMALL_STATE(273)] = 9810,
  [SMALL_STATE(274)] = 9819,
  [SMALL_STATE(275)] = 9828,
  [SMALL_STATE(276)] = 9837,
  [SMALL_STATE(277)] = 9848,
  [SMALL_STATE(278)] = 9857,
  [SMALL_STATE(279)] = 9868,
  [SMALL_STATE(280)] = 9877,
  [SMALL_STATE(281)] = 9886,
  [SMALL_STATE(282)] = 9895,
  [SMALL_STATE(283)] = 9904,
  [SMALL_STATE(284)] = 9913,
  [SMALL_STATE(285)] = 9924,
  [SMALL_STATE(286)] = 9933,
  [SMALL_STATE(287)] = 9941,
  [SMALL_STATE(288)] = 9949,
  [SMALL_STATE(289)] = 9957,
  [SMALL_STATE(290)] = 9965,
  [SMALL_STATE(291)] = 9973,
  [SMALL_STATE(292)] = 9981,
  [SMALL_STATE(293)] = 9989,
  [SMALL_STATE(294)] = 9997,
  [SMALL_STATE(295)] = 10005,
  [SMALL_STATE(296)] = 10013,
  [SMALL_STATE(297)] = 10021,
  [SMALL_STATE(298)] = 10029,
  [SMALL_STATE(299)] = 10037,
  [SMALL_STATE(300)] = 10045,
  [SMALL_STATE(301)] = 10053,
  [SMALL_STATE(302)] = 10061,
  [SMALL_STATE(303)] = 10069,
  [SMALL_STATE(304)] = 10077,
  [SMALL_STATE(305)] = 10085,
  [SMALL_STATE(306)] = 10093,
  [SMALL_STATE(307)] = 10101,
  [SMALL_STATE(308)] = 10109,
  [SMALL_STATE(309)] = 10117,
  [SMALL_STATE(310)] = 10125,
  [SMALL_STATE(311)] = 10133,
  [SMALL_STATE(312)] = 10141,
  [SMALL_STATE(313)] = 10149,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(58),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(73),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(73),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(219),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(35),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(32),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(31),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(194),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(195),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(186),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(121),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(296),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(158),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(159),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(163),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(66),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(71),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(309),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_statement, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_statement, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yield_statement, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yield_statement, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 4, .production_id = 20),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_declaration, 4, .production_id = 20),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_body, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_body, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_import_on_demand, 6, .production_id = 37),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_static_import_on_demand, 6, .production_id = 37),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 4, .production_id = 23),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_declaration, 4, .production_id = 23),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable_declaration, 4, .production_id = 24),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable_declaration, 4, .production_id = 24),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_static_import, 6, .production_id = 36),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_static_import, 6, .production_id = 36),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_declaration, 4, .production_id = 28),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_declaration, 4, .production_id = 28),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_import_on_demand, 5),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_import_on_demand, 5),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_variable_declaration, 3, .production_id = 13),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_variable_declaration, 3, .production_id = 13),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 5, .production_id = 34),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_declaration, 5, .production_id = 34),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 3, .production_id = 7),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_declaration, 3, .production_id = 7),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_type_import, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_type_import, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_statement, 5),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_statement, 5),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_body, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interface_body, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_declaration, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_declaration, 3, .production_id = 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_declaration, 3, .production_id = 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unannotated_type, 1, .production_id = 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_primary_expression, 1), SHIFT(76),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_primary_expression, 1), REDUCE(sym__unannotated_type, 1, .production_id = 1),
  [256] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym_primary_expression, 1), REDUCE(sym__unannotated_type, 1, .production_id = 1), SHIFT(189),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unannotated_type, 1, .production_id = 1),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(138),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(184),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(202),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(126),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(158),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(159),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_body_repeat1, 2), SHIFT_REPEAT(163),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_access, 4, .production_id = 22),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_access, 4, .production_id = 22),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 5, .production_id = 33),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 5, .production_id = 33),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 3, .production_id = 9),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 3, .production_id = 9),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_literal, 3, .dynamic_precedence = 17),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_literal, 3, .dynamic_precedence = 17),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 8),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 11),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 11),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expression, 4, .production_id = 17),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 4, .production_id = 17),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_primary_expression, 1), REDUCE(sym__unannotated_type, 1, .production_id = 1),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cast_expression, 5, .production_id = 29),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 5, .production_id = 29),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_identifier, 3, .production_id = 19),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 3, .production_id = 19),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_marker_annotation, 2, .production_id = 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_annotation, 2, .production_id = 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element_value, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_argument_list, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_argument_list, 3),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_argument_list, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_argument_list, 2),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 3, .production_id = 6),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 3, .production_id = 6),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation_argument_list, 4),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_argument_list, 4),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(194),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(122),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(202),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2), SHIFT_REPEAT(123),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimensions, 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimensions, 1),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dimensions_repeat1, 2),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(303),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 2), SHIFT_REPEAT(194),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 1),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 2, .production_id = 32),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 2, .production_id = 32),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 3, .production_id = 38),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 3, .production_id = 38),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 1),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_expr_repeat1, 1), REDUCE(aux_sym_modifiers_repeat1, 1),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dimensions_expr_repeat1, 1),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unannotated_type, 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unannotated_type, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_receiver_parameter, 5),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_receiver_parameter, 5),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_receiver_parameter, 3),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_receiver_parameter, 3),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_receiver_parameter, 4),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_receiver_parameter, 4),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dimensions_expr_repeat1, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimensions_expr_repeat1, 2),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_expr_repeat1, 2), SHIFT_REPEAT(202),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_receiver_parameter, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_receiver_parameter, 2),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_type_identifier, 4, .production_id = 27),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 4, .production_id = 27),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dimensions_repeat1, 3),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimensions_repeat1, 3),
  [538] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dimensions_expr_repeat1, 1), REDUCE(aux_sym_modifiers_repeat1, 1),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_type_identifier, 4, .production_id = 21),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 4, .production_id = 21),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 15),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 15),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 10),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 10),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 3),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integral_type, 1),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integral_type, 1),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point_type, 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point_type, 1),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10, .production_id = 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .dynamic_precedence = 10, .production_id = 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 2, .production_id = 4),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 2, .production_id = 4),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 4),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 4),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_arguments, 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_arguments, 2),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotated_type, 2),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 4),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declarator, 1, .production_id = 3),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__unannotated_type, 1), SHIFT(190),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_declarator, 2, .production_id = 40),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimensions_expr_repeat1, 2), SHIFT_REPEAT(194),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 2),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 1),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 5),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 2),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 4),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 3),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1, .production_id = 1),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2), SHIFT_REPEAT(100),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_bound_repeat1, 2),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 2, .production_id = 30),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [700] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(216),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_bound, 3),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameters, 2),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_throws, 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_declarator_list, 1, .production_id = 5),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_argument_list_repeat1, 2),
  [741] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_argument_list_repeat1, 2), SHIFT_REPEAT(270),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__variable_declarator_list_repeat1, 2, .production_id = 26), SHIFT_REPEAT(203),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__variable_declarator_list_repeat1, 2, .production_id = 26),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(183),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2), SHIFT_REPEAT(101),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_header, 2, .production_id = 31),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_header, 3, .production_id = 39),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declarator, 2, .production_id = 12),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2),
  [783] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_formal_parameters_repeat1, 2), SHIFT_REPEAT(68),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_value_array_initializer, 2),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_declarator_list, 2, .production_id = 14),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_value_array_initializer, 4),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_throws, 3),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [796] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_value_array_initializer_repeat1, 2), SHIFT_REPEAT(11),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_value_array_initializer_repeat1, 2),
  [801] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cast_expression_repeat1, 2, .production_id = 18), SHIFT_REPEAT(99),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cast_expression_repeat1, 2, .production_id = 18),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2),
  [808] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_arguments_repeat1, 2), SHIFT_REPEAT(81),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_header, 4, .production_id = 41),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_value_array_initializer, 5),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_value_array_initializer, 3),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spread_parameter, 4),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 3),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_declarator, 3, .production_id = 42),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__variable_declarator_list_repeat1, 2, .production_id = 25),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter, 2, .production_id = 43),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_value_pair, 3, .production_id = 35),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 2, .production_id = 1),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cast_expression_repeat1, 2, .production_id = 16),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wildcard_bounds, 2),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formal_parameter, 3, .production_id = 16),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spread_parameter, 3),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 3, .production_id = 30),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_header, 4, .production_id = 39),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_header, 5, .production_id = 41),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_header, 3, .production_id = 31),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asterisk, 1),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [903] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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
