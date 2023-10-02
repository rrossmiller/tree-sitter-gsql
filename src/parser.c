#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 868
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 254
#define ALIAS_COUNT 0
#define TOKEN_COUNT 130
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 28

enum {
  aux_sym_create_query_token1 = 1,
  aux_sym_create_query_token2 = 2,
  aux_sym_create_query_token3 = 3,
  aux_sym_create_query_token4 = 4,
  aux_sym_create_query_token5 = 5,
  aux_sym_create_query_token6 = 6,
  aux_sym_create_query_token7 = 7,
  aux_sym_create_query_token8 = 8,
  aux_sym_create_query_token9 = 9,
  aux_sym_interpret_query_token1 = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_COMMA = 13,
  anon_sym_EQ = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  aux_sym_typedef_token1 = 17,
  aux_sym_typedef_token2 = 18,
  anon_sym_LT = 19,
  anon_sym_GT = 20,
  anon_sym_SEMI = 21,
  anon_sym_DOT = 22,
  anon_sym__ = 23,
  aux_sym_seed_token1 = 24,
  anon_sym_DOT_STAR = 25,
  aux_sym_simple_set_token1 = 26,
  aux_sym_simple_set_token2 = 27,
  aux_sym_simple_set_token3 = 28,
  anon_sym_PLUS_EQ = 29,
  aux_sym_gsql_select_clause_token1 = 30,
  aux_sym_from_clause_token1 = 31,
  aux_sym_where_clause_token1 = 32,
  aux_sym_accum_clause_token1 = 33,
  aux_sym_dml_sub_if_stmt_token1 = 34,
  aux_sym_dml_sub_if_stmt_token2 = 35,
  aux_sym_dml_sub_if_stmt_token3 = 36,
  aux_sym_dml_sub_if_stmt_token4 = 37,
  aux_sym_dml_sub_case_stmt_token1 = 38,
  aux_sym_dml_sub_case_stmt_token2 = 39,
  aux_sym_dml_sub_while_stmt_token1 = 40,
  aux_sym_dml_sub_while_stmt_token2 = 41,
  aux_sym_dml_sub_while_stmt_token3 = 42,
  aux_sym_dml_sub_for_each_stmt_token1 = 43,
  aux_sym_for_each_control_token1 = 44,
  anon_sym_COLON = 45,
  aux_sym_for_each_control_token2 = 46,
  anon_sym_LBRACK = 47,
  anon_sym_RBRACK = 48,
  aux_sym_for_each_control_token3 = 49,
  aux_sym_post_accum_clause_token1 = 50,
  aux_sym_limit_clause_token1 = 51,
  anon_sym_DASH = 52,
  anon_sym_PIPE = 53,
  anon_sym_PIPE2 = 54,
  anon_sym_STAR = 55,
  anon_sym_all = 56,
  aux_sym_accum_type_token1 = 57,
  aux_sym_accum_type_token2 = 58,
  aux_sym_accum_type_token3 = 59,
  aux_sym_accum_type_token4 = 60,
  aux_sym_accum_type_token5 = 61,
  aux_sym_accum_type_token6 = 62,
  aux_sym_accum_type_token7 = 63,
  aux_sym_accum_type_token8 = 64,
  aux_sym_accum_type_token9 = 65,
  aux_sym_accum_type_token10 = 66,
  aux_sym_accum_type_token11 = 67,
  aux_sym_accum_type_token12 = 68,
  aux_sym_accum_type_token13 = 69,
  aux_sym_accum_type_token14 = 70,
  aux_sym_accum_type_token15 = 71,
  aux_sym_accum_type_token16 = 72,
  aux_sym_accum_type_token17 = 73,
  aux_sym_accum_type_token18 = 74,
  aux_sym_accum_type_token19 = 75,
  aux_sym_accum_type_token20 = 76,
  aux_sym_accum_type_token21 = 77,
  anon_sym_AT_AT = 78,
  anon_sym_AT = 79,
  aux_sym_expr_token1 = 80,
  aux_sym_expr_token2 = 81,
  aux_sym_expr_token3 = 82,
  aux_sym_expr_token4 = 83,
  anon_sym_DASH_GT = 84,
  aux_sym_condition_token1 = 85,
  aux_sym_condition_token2 = 86,
  aux_sym_condition_token3 = 87,
  aux_sym_condition_token4 = 88,
  aux_sym_condition_token5 = 89,
  aux_sym_condition_token6 = 90,
  aux_sym_condition_token7 = 91,
  aux_sym_condition_token8 = 92,
  aux_sym_aggregator_token1 = 93,
  aux_sym_aggregator_token2 = 94,
  aux_sym_aggregator_token3 = 95,
  aux_sym_aggregator_token4 = 96,
  aux_sym_aggregator_token5 = 97,
  aux_sym_print_stmt_token1 = 98,
  aux_sym_print_stmt_token2 = 99,
  aux_sym_print_expr_token1 = 100,
  aux_sym_base_type_token1 = 101,
  aux_sym_base_type_token2 = 102,
  aux_sym_base_type_token3 = 103,
  aux_sym_base_type_token4 = 104,
  aux_sym_base_type_token5 = 105,
  aux_sym_base_type_token6 = 106,
  aux_sym_base_type_token7 = 107,
  sym_name = 108,
  aux_sym_constant_token1 = 109,
  aux_sym_constant_token2 = 110,
  aux_sym_constant_token3 = 111,
  sym_digit = 112,
  anon_sym_DQUOTE = 113,
  aux_sym_string_literal_token1 = 114,
  anon_sym_SQUOTE = 115,
  aux_sym_string_literal_token2 = 116,
  anon_sym_SLASH = 117,
  anon_sym_PERCENT = 118,
  anon_sym_PLUS = 119,
  anon_sym_LT_LT = 120,
  anon_sym_GT_GT = 121,
  anon_sym_AMP = 122,
  anon_sym_LT_EQ = 123,
  anon_sym_GT_EQ = 124,
  anon_sym_EQ_EQ = 125,
  anon_sym_BANG_EQ = 126,
  sym_newline = 127,
  sym_line_comment = 128,
  sym_block_comment = 129,
  sym_gsql = 130,
  sym__definition = 131,
  sym_create_query = 132,
  sym_interpret_query = 133,
  sym_parameter_list = 134,
  sym_query_params = 135,
  sym_query_param = 136,
  sym_query_body = 137,
  sym_typedef = 138,
  sym_tuple_fields = 139,
  sym_tuple_field = 140,
  sym_query_body_stmts = 141,
  sym_query_body_stmt = 142,
  sym_assign_stmt = 143,
  sym_v_set_var_decl_stmt = 144,
  sym_seed_set = 145,
  sym_seed = 146,
  sym_simple_set = 147,
  sym_l_accum_assign_stmt = 148,
  sym_g_accum_assign_stmt = 149,
  sym_g_accum_accum_stmt = 150,
  sym_func_call_stmt = 151,
  sym__select_stmt = 152,
  sym_gsql_select_block = 153,
  sym_gsql_select_clause = 154,
  sym_from_clause = 155,
  sym_where_clause = 156,
  sym_accum_clause = 157,
  sym_dml_sub_stmt_list = 158,
  sym_dml_sub_stmt = 159,
  sym_l_accum_accum_stmt = 160,
  sym_attr_accum_stmt = 161,
  sym_v_accum_func_call = 162,
  sym_local_var_decl_stmt = 163,
  sym_dml_sub_if_stmt = 164,
  sym_dml_sub_case_stmt = 165,
  sym_dml_sub_while_stmt = 166,
  sym_dml_sub_for_each_stmt = 167,
  sym_for_each_control = 168,
  sym_post_accum_clause = 169,
  sym_limit_clause = 170,
  sym_path_pattern = 171,
  sym_path_edge_pattern = 172,
  sym_atomic_edge_pattern = 173,
  sym_disj_pattern = 174,
  sym_step = 175,
  sym_step_v2 = 176,
  sym_step_source_set = 177,
  sym_step_edge_set = 178,
  sym_step_edge_types = 179,
  sym_atomic_edge_type = 180,
  sym_edge_set_type = 181,
  sym_step_vertex_set = 182,
  sym_step_vertex_types = 183,
  sym_atomic_vertex_type = 184,
  sym_vertex_set_type = 185,
  sym_query_body_case_stmt = 186,
  sym_query_body_if_stmt = 187,
  sym_query_body_while_stmt = 188,
  sym_query_body_for_each_stmt = 189,
  sym_decl_stmt = 190,
  sym_base_decl_stmt = 191,
  sym_accum_decl_stmt = 192,
  sym_accum_type = 193,
  sym_global_accum_name = 194,
  sym_local_accum_name = 195,
  sym_arg_list = 196,
  sym_simple_size = 197,
  sym_expr = 198,
  sym_condition = 199,
  sym_set_bag_expr = 200,
  sym_name_dot = 201,
  sym_aggregator = 202,
  sym_print_stmt = 203,
  sym_print_expr = 204,
  sym_v_expr_set = 205,
  sym_v_set_proj = 206,
  sym_file_path = 207,
  sym__type = 208,
  sym__element_type = 209,
  sym_base_type = 210,
  sym_constant = 211,
  sym_numeric = 212,
  sym_integer = 213,
  sym_real = 214,
  sym_string_literal = 215,
  sym_math_operator = 216,
  sym_comparison_operator = 217,
  aux_sym_gsql_repeat1 = 218,
  aux_sym_parameter_list_repeat1 = 219,
  aux_sym_query_params_repeat1 = 220,
  aux_sym_query_body_repeat1 = 221,
  aux_sym_query_body_repeat2 = 222,
  aux_sym_typedef_repeat1 = 223,
  aux_sym_tuple_fields_repeat1 = 224,
  aux_sym_seed_set_repeat1 = 225,
  aux_sym_func_call_stmt_repeat1 = 226,
  aux_sym_func_call_stmt_repeat2 = 227,
  aux_sym_gsql_select_block_repeat1 = 228,
  aux_sym_from_clause_repeat1 = 229,
  aux_sym_dml_sub_stmt_list_repeat1 = 230,
  aux_sym_v_accum_func_call_repeat1 = 231,
  aux_sym_dml_sub_if_stmt_repeat1 = 232,
  aux_sym_dml_sub_case_stmt_repeat1 = 233,
  aux_sym_for_each_control_repeat1 = 234,
  aux_sym_path_pattern_repeat1 = 235,
  aux_sym_disj_pattern_repeat1 = 236,
  aux_sym_step_edge_types_repeat1 = 237,
  aux_sym_step_vertex_types_repeat1 = 238,
  aux_sym_query_body_case_stmt_repeat1 = 239,
  aux_sym_query_body_case_stmt_repeat2 = 240,
  aux_sym_query_body_if_stmt_repeat1 = 241,
  aux_sym_base_decl_stmt_repeat1 = 242,
  aux_sym_accum_decl_stmt_repeat1 = 243,
  aux_sym_accum_type_repeat1 = 244,
  aux_sym_accum_type_repeat2 = 245,
  aux_sym_accum_type_repeat3 = 246,
  aux_sym_accum_type_repeat4 = 247,
  aux_sym_arg_list_repeat1 = 248,
  aux_sym_name_dot_repeat1 = 249,
  aux_sym_print_stmt_repeat1 = 250,
  aux_sym_v_expr_set_repeat1 = 251,
  aux_sym_string_literal_repeat1 = 252,
  aux_sym_string_literal_repeat2 = 253,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_create_query_token1] = "create_query_token1",
  [aux_sym_create_query_token2] = "create_query_token2",
  [aux_sym_create_query_token3] = "create_query_token3",
  [aux_sym_create_query_token4] = "create_query_token4",
  [aux_sym_create_query_token5] = "create_query_token5",
  [aux_sym_create_query_token6] = "create_query_token6",
  [aux_sym_create_query_token7] = "create_query_token7",
  [aux_sym_create_query_token8] = "create_query_token8",
  [aux_sym_create_query_token9] = "create_query_token9",
  [aux_sym_interpret_query_token1] = "interpret_query_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_typedef_token1] = "typedef_token1",
  [aux_sym_typedef_token2] = "typedef_token2",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_SEMI] = ";",
  [anon_sym_DOT] = ".",
  [anon_sym__] = "_",
  [aux_sym_seed_token1] = "seed_token1",
  [anon_sym_DOT_STAR] = ".*",
  [aux_sym_simple_set_token1] = "simple_set_token1",
  [aux_sym_simple_set_token2] = "simple_set_token2",
  [aux_sym_simple_set_token3] = "simple_set_token3",
  [anon_sym_PLUS_EQ] = "+=",
  [aux_sym_gsql_select_clause_token1] = "gsql_select_clause_token1",
  [aux_sym_from_clause_token1] = "from_clause_token1",
  [aux_sym_where_clause_token1] = "where_clause_token1",
  [aux_sym_accum_clause_token1] = "accum_clause_token1",
  [aux_sym_dml_sub_if_stmt_token1] = "dml_sub_if_stmt_token1",
  [aux_sym_dml_sub_if_stmt_token2] = "dml_sub_if_stmt_token2",
  [aux_sym_dml_sub_if_stmt_token3] = "dml_sub_if_stmt_token3",
  [aux_sym_dml_sub_if_stmt_token4] = "dml_sub_if_stmt_token4",
  [aux_sym_dml_sub_case_stmt_token1] = "dml_sub_case_stmt_token1",
  [aux_sym_dml_sub_case_stmt_token2] = "dml_sub_case_stmt_token2",
  [aux_sym_dml_sub_while_stmt_token1] = "dml_sub_while_stmt_token1",
  [aux_sym_dml_sub_while_stmt_token2] = "dml_sub_while_stmt_token2",
  [aux_sym_dml_sub_while_stmt_token3] = "dml_sub_while_stmt_token3",
  [aux_sym_dml_sub_for_each_stmt_token1] = "dml_sub_for_each_stmt_token1",
  [aux_sym_for_each_control_token1] = "for_each_control_token1",
  [anon_sym_COLON] = ":",
  [aux_sym_for_each_control_token2] = "for_each_control_token2",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_for_each_control_token3] = "for_each_control_token3",
  [aux_sym_post_accum_clause_token1] = "post_accum_clause_token1",
  [aux_sym_limit_clause_token1] = "limit_clause_token1",
  [anon_sym_DASH] = "-",
  [anon_sym_PIPE] = " | ",
  [anon_sym_PIPE2] = "|",
  [anon_sym_STAR] = "*",
  [anon_sym_all] = "all",
  [aux_sym_accum_type_token1] = "accum_type_token1",
  [aux_sym_accum_type_token2] = "accum_type_token2",
  [aux_sym_accum_type_token3] = "accum_type_token3",
  [aux_sym_accum_type_token4] = "accum_type_token4",
  [aux_sym_accum_type_token5] = "accum_type_token5",
  [aux_sym_accum_type_token6] = "accum_type_token6",
  [aux_sym_accum_type_token7] = "accum_type_token7",
  [aux_sym_accum_type_token8] = "accum_type_token8",
  [aux_sym_accum_type_token9] = "accum_type_token9",
  [aux_sym_accum_type_token10] = "accum_type_token10",
  [aux_sym_accum_type_token11] = "accum_type_token11",
  [aux_sym_accum_type_token12] = "accum_type_token12",
  [aux_sym_accum_type_token13] = "accum_type_token13",
  [aux_sym_accum_type_token14] = "accum_type_token14",
  [aux_sym_accum_type_token15] = "accum_type_token15",
  [aux_sym_accum_type_token16] = "accum_type_token16",
  [aux_sym_accum_type_token17] = "accum_type_token17",
  [aux_sym_accum_type_token18] = "accum_type_token18",
  [aux_sym_accum_type_token19] = "accum_type_token19",
  [aux_sym_accum_type_token20] = "accum_type_token20",
  [aux_sym_accum_type_token21] = "accum_type_token21",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_AT] = "@",
  [aux_sym_expr_token1] = "expr_token1",
  [aux_sym_expr_token2] = "expr_token2",
  [aux_sym_expr_token3] = "expr_token3",
  [aux_sym_expr_token4] = "expr_token4",
  [anon_sym_DASH_GT] = "->",
  [aux_sym_condition_token1] = "condition_token1",
  [aux_sym_condition_token2] = "condition_token2",
  [aux_sym_condition_token3] = "condition_token3",
  [aux_sym_condition_token4] = "condition_token4",
  [aux_sym_condition_token5] = "condition_token5",
  [aux_sym_condition_token6] = "condition_token6",
  [aux_sym_condition_token7] = "condition_token7",
  [aux_sym_condition_token8] = "condition_token8",
  [aux_sym_aggregator_token1] = "aggregator_token1",
  [aux_sym_aggregator_token2] = "aggregator_token2",
  [aux_sym_aggregator_token3] = "aggregator_token3",
  [aux_sym_aggregator_token4] = "aggregator_token4",
  [aux_sym_aggregator_token5] = "aggregator_token5",
  [aux_sym_print_stmt_token1] = "print_stmt_token1",
  [aux_sym_print_stmt_token2] = "print_stmt_token2",
  [aux_sym_print_expr_token1] = "print_expr_token1",
  [aux_sym_base_type_token1] = "base_type_token1",
  [aux_sym_base_type_token2] = "base_type_token2",
  [aux_sym_base_type_token3] = "base_type_token3",
  [aux_sym_base_type_token4] = "base_type_token4",
  [aux_sym_base_type_token5] = "base_type_token5",
  [aux_sym_base_type_token6] = "base_type_token6",
  [aux_sym_base_type_token7] = "base_type_token7",
  [sym_name] = "name",
  [aux_sym_constant_token1] = "constant_token1",
  [aux_sym_constant_token2] = "constant_token2",
  [aux_sym_constant_token3] = "constant_token3",
  [sym_digit] = "digit",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_literal_token2] = "string_literal_token2",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS] = "+",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_AMP] = "&",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [sym_newline] = "newline",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_gsql] = "gsql",
  [sym__definition] = "_definition",
  [sym_create_query] = "create_query",
  [sym_interpret_query] = "interpret_query",
  [sym_parameter_list] = "parameter_list",
  [sym_query_params] = "query_params",
  [sym_query_param] = "query_param",
  [sym_query_body] = "query_body",
  [sym_typedef] = "typedef",
  [sym_tuple_fields] = "tuple_fields",
  [sym_tuple_field] = "tuple_field",
  [sym_query_body_stmts] = "query_body_stmts",
  [sym_query_body_stmt] = "query_body_stmt",
  [sym_assign_stmt] = "assign_stmt",
  [sym_v_set_var_decl_stmt] = "v_set_var_decl_stmt",
  [sym_seed_set] = "seed_set",
  [sym_seed] = "seed",
  [sym_simple_set] = "simple_set",
  [sym_l_accum_assign_stmt] = "l_accum_assign_stmt",
  [sym_g_accum_assign_stmt] = "g_accum_assign_stmt",
  [sym_g_accum_accum_stmt] = "g_accum_accum_stmt",
  [sym_func_call_stmt] = "func_call_stmt",
  [sym__select_stmt] = "_select_stmt",
  [sym_gsql_select_block] = "gsql_select_block",
  [sym_gsql_select_clause] = "gsql_select_clause",
  [sym_from_clause] = "from_clause",
  [sym_where_clause] = "where_clause",
  [sym_accum_clause] = "accum_clause",
  [sym_dml_sub_stmt_list] = "dml_sub_stmt_list",
  [sym_dml_sub_stmt] = "dml_sub_stmt",
  [sym_l_accum_accum_stmt] = "l_accum_accum_stmt",
  [sym_attr_accum_stmt] = "attr_accum_stmt",
  [sym_v_accum_func_call] = "v_accum_func_call",
  [sym_local_var_decl_stmt] = "local_var_decl_stmt",
  [sym_dml_sub_if_stmt] = "dml_sub_if_stmt",
  [sym_dml_sub_case_stmt] = "dml_sub_case_stmt",
  [sym_dml_sub_while_stmt] = "dml_sub_while_stmt",
  [sym_dml_sub_for_each_stmt] = "dml_sub_for_each_stmt",
  [sym_for_each_control] = "for_each_control",
  [sym_post_accum_clause] = "post_accum_clause",
  [sym_limit_clause] = "limit_clause",
  [sym_path_pattern] = "path_pattern",
  [sym_path_edge_pattern] = "path_edge_pattern",
  [sym_atomic_edge_pattern] = "atomic_edge_pattern",
  [sym_disj_pattern] = "disj_pattern",
  [sym_step] = "step",
  [sym_step_v2] = "step_v2",
  [sym_step_source_set] = "step_source_set",
  [sym_step_edge_set] = "step_edge_set",
  [sym_step_edge_types] = "step_edge_types",
  [sym_atomic_edge_type] = "atomic_edge_type",
  [sym_edge_set_type] = "edge_set_type",
  [sym_step_vertex_set] = "step_vertex_set",
  [sym_step_vertex_types] = "step_vertex_types",
  [sym_atomic_vertex_type] = "atomic_vertex_type",
  [sym_vertex_set_type] = "vertex_set_type",
  [sym_query_body_case_stmt] = "query_body_case_stmt",
  [sym_query_body_if_stmt] = "query_body_if_stmt",
  [sym_query_body_while_stmt] = "query_body_while_stmt",
  [sym_query_body_for_each_stmt] = "query_body_for_each_stmt",
  [sym_decl_stmt] = "decl_stmt",
  [sym_base_decl_stmt] = "base_decl_stmt",
  [sym_accum_decl_stmt] = "accum_decl_stmt",
  [sym_accum_type] = "accum_type",
  [sym_global_accum_name] = "global_accum_name",
  [sym_local_accum_name] = "local_accum_name",
  [sym_arg_list] = "arg_list",
  [sym_simple_size] = "simple_size",
  [sym_expr] = "expr",
  [sym_condition] = "condition",
  [sym_set_bag_expr] = "set_bag_expr",
  [sym_name_dot] = "name_dot",
  [sym_aggregator] = "aggregator",
  [sym_print_stmt] = "print_stmt",
  [sym_print_expr] = "print_expr",
  [sym_v_expr_set] = "v_expr_set",
  [sym_v_set_proj] = "v_set_proj",
  [sym_file_path] = "file_path",
  [sym__type] = "_type",
  [sym__element_type] = "_element_type",
  [sym_base_type] = "base_type",
  [sym_constant] = "constant",
  [sym_numeric] = "numeric",
  [sym_integer] = "integer",
  [sym_real] = "real",
  [sym_string_literal] = "string_literal",
  [sym_math_operator] = "math_operator",
  [sym_comparison_operator] = "comparison_operator",
  [aux_sym_gsql_repeat1] = "gsql_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_query_params_repeat1] = "query_params_repeat1",
  [aux_sym_query_body_repeat1] = "query_body_repeat1",
  [aux_sym_query_body_repeat2] = "query_body_repeat2",
  [aux_sym_typedef_repeat1] = "typedef_repeat1",
  [aux_sym_tuple_fields_repeat1] = "tuple_fields_repeat1",
  [aux_sym_seed_set_repeat1] = "seed_set_repeat1",
  [aux_sym_func_call_stmt_repeat1] = "func_call_stmt_repeat1",
  [aux_sym_func_call_stmt_repeat2] = "func_call_stmt_repeat2",
  [aux_sym_gsql_select_block_repeat1] = "gsql_select_block_repeat1",
  [aux_sym_from_clause_repeat1] = "from_clause_repeat1",
  [aux_sym_dml_sub_stmt_list_repeat1] = "dml_sub_stmt_list_repeat1",
  [aux_sym_v_accum_func_call_repeat1] = "v_accum_func_call_repeat1",
  [aux_sym_dml_sub_if_stmt_repeat1] = "dml_sub_if_stmt_repeat1",
  [aux_sym_dml_sub_case_stmt_repeat1] = "dml_sub_case_stmt_repeat1",
  [aux_sym_for_each_control_repeat1] = "for_each_control_repeat1",
  [aux_sym_path_pattern_repeat1] = "path_pattern_repeat1",
  [aux_sym_disj_pattern_repeat1] = "disj_pattern_repeat1",
  [aux_sym_step_edge_types_repeat1] = "step_edge_types_repeat1",
  [aux_sym_step_vertex_types_repeat1] = "step_vertex_types_repeat1",
  [aux_sym_query_body_case_stmt_repeat1] = "query_body_case_stmt_repeat1",
  [aux_sym_query_body_case_stmt_repeat2] = "query_body_case_stmt_repeat2",
  [aux_sym_query_body_if_stmt_repeat1] = "query_body_if_stmt_repeat1",
  [aux_sym_base_decl_stmt_repeat1] = "base_decl_stmt_repeat1",
  [aux_sym_accum_decl_stmt_repeat1] = "accum_decl_stmt_repeat1",
  [aux_sym_accum_type_repeat1] = "accum_type_repeat1",
  [aux_sym_accum_type_repeat2] = "accum_type_repeat2",
  [aux_sym_accum_type_repeat3] = "accum_type_repeat3",
  [aux_sym_accum_type_repeat4] = "accum_type_repeat4",
  [aux_sym_arg_list_repeat1] = "arg_list_repeat1",
  [aux_sym_name_dot_repeat1] = "name_dot_repeat1",
  [aux_sym_print_stmt_repeat1] = "print_stmt_repeat1",
  [aux_sym_v_expr_set_repeat1] = "v_expr_set_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_string_literal_repeat2] = "string_literal_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_create_query_token1] = aux_sym_create_query_token1,
  [aux_sym_create_query_token2] = aux_sym_create_query_token2,
  [aux_sym_create_query_token3] = aux_sym_create_query_token3,
  [aux_sym_create_query_token4] = aux_sym_create_query_token4,
  [aux_sym_create_query_token5] = aux_sym_create_query_token5,
  [aux_sym_create_query_token6] = aux_sym_create_query_token6,
  [aux_sym_create_query_token7] = aux_sym_create_query_token7,
  [aux_sym_create_query_token8] = aux_sym_create_query_token8,
  [aux_sym_create_query_token9] = aux_sym_create_query_token9,
  [aux_sym_interpret_query_token1] = aux_sym_interpret_query_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_typedef_token1] = aux_sym_typedef_token1,
  [aux_sym_typedef_token2] = aux_sym_typedef_token2,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym__] = anon_sym__,
  [aux_sym_seed_token1] = aux_sym_seed_token1,
  [anon_sym_DOT_STAR] = anon_sym_DOT_STAR,
  [aux_sym_simple_set_token1] = aux_sym_simple_set_token1,
  [aux_sym_simple_set_token2] = aux_sym_simple_set_token2,
  [aux_sym_simple_set_token3] = aux_sym_simple_set_token3,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [aux_sym_gsql_select_clause_token1] = aux_sym_gsql_select_clause_token1,
  [aux_sym_from_clause_token1] = aux_sym_from_clause_token1,
  [aux_sym_where_clause_token1] = aux_sym_where_clause_token1,
  [aux_sym_accum_clause_token1] = aux_sym_accum_clause_token1,
  [aux_sym_dml_sub_if_stmt_token1] = aux_sym_dml_sub_if_stmt_token1,
  [aux_sym_dml_sub_if_stmt_token2] = aux_sym_dml_sub_if_stmt_token2,
  [aux_sym_dml_sub_if_stmt_token3] = aux_sym_dml_sub_if_stmt_token3,
  [aux_sym_dml_sub_if_stmt_token4] = aux_sym_dml_sub_if_stmt_token4,
  [aux_sym_dml_sub_case_stmt_token1] = aux_sym_dml_sub_case_stmt_token1,
  [aux_sym_dml_sub_case_stmt_token2] = aux_sym_dml_sub_case_stmt_token2,
  [aux_sym_dml_sub_while_stmt_token1] = aux_sym_dml_sub_while_stmt_token1,
  [aux_sym_dml_sub_while_stmt_token2] = aux_sym_dml_sub_while_stmt_token2,
  [aux_sym_dml_sub_while_stmt_token3] = aux_sym_dml_sub_while_stmt_token3,
  [aux_sym_dml_sub_for_each_stmt_token1] = aux_sym_dml_sub_for_each_stmt_token1,
  [aux_sym_for_each_control_token1] = aux_sym_for_each_control_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_for_each_control_token2] = aux_sym_for_each_control_token2,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_for_each_control_token3] = aux_sym_for_each_control_token3,
  [aux_sym_post_accum_clause_token1] = aux_sym_post_accum_clause_token1,
  [aux_sym_limit_clause_token1] = aux_sym_limit_clause_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_PIPE2] = anon_sym_PIPE2,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_all] = anon_sym_all,
  [aux_sym_accum_type_token1] = aux_sym_accum_type_token1,
  [aux_sym_accum_type_token2] = aux_sym_accum_type_token2,
  [aux_sym_accum_type_token3] = aux_sym_accum_type_token3,
  [aux_sym_accum_type_token4] = aux_sym_accum_type_token4,
  [aux_sym_accum_type_token5] = aux_sym_accum_type_token5,
  [aux_sym_accum_type_token6] = aux_sym_accum_type_token6,
  [aux_sym_accum_type_token7] = aux_sym_accum_type_token7,
  [aux_sym_accum_type_token8] = aux_sym_accum_type_token8,
  [aux_sym_accum_type_token9] = aux_sym_accum_type_token9,
  [aux_sym_accum_type_token10] = aux_sym_accum_type_token10,
  [aux_sym_accum_type_token11] = aux_sym_accum_type_token11,
  [aux_sym_accum_type_token12] = aux_sym_accum_type_token12,
  [aux_sym_accum_type_token13] = aux_sym_accum_type_token13,
  [aux_sym_accum_type_token14] = aux_sym_accum_type_token14,
  [aux_sym_accum_type_token15] = aux_sym_accum_type_token15,
  [aux_sym_accum_type_token16] = aux_sym_accum_type_token16,
  [aux_sym_accum_type_token17] = aux_sym_accum_type_token17,
  [aux_sym_accum_type_token18] = aux_sym_accum_type_token18,
  [aux_sym_accum_type_token19] = aux_sym_accum_type_token19,
  [aux_sym_accum_type_token20] = aux_sym_accum_type_token20,
  [aux_sym_accum_type_token21] = aux_sym_accum_type_token21,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_expr_token1] = aux_sym_expr_token1,
  [aux_sym_expr_token2] = aux_sym_expr_token2,
  [aux_sym_expr_token3] = aux_sym_expr_token3,
  [aux_sym_expr_token4] = aux_sym_expr_token4,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [aux_sym_condition_token1] = aux_sym_condition_token1,
  [aux_sym_condition_token2] = aux_sym_condition_token2,
  [aux_sym_condition_token3] = aux_sym_condition_token3,
  [aux_sym_condition_token4] = aux_sym_condition_token4,
  [aux_sym_condition_token5] = aux_sym_condition_token5,
  [aux_sym_condition_token6] = aux_sym_condition_token6,
  [aux_sym_condition_token7] = aux_sym_condition_token7,
  [aux_sym_condition_token8] = aux_sym_condition_token8,
  [aux_sym_aggregator_token1] = aux_sym_aggregator_token1,
  [aux_sym_aggregator_token2] = aux_sym_aggregator_token2,
  [aux_sym_aggregator_token3] = aux_sym_aggregator_token3,
  [aux_sym_aggregator_token4] = aux_sym_aggregator_token4,
  [aux_sym_aggregator_token5] = aux_sym_aggregator_token5,
  [aux_sym_print_stmt_token1] = aux_sym_print_stmt_token1,
  [aux_sym_print_stmt_token2] = aux_sym_print_stmt_token2,
  [aux_sym_print_expr_token1] = aux_sym_print_expr_token1,
  [aux_sym_base_type_token1] = aux_sym_base_type_token1,
  [aux_sym_base_type_token2] = aux_sym_base_type_token2,
  [aux_sym_base_type_token3] = aux_sym_base_type_token3,
  [aux_sym_base_type_token4] = aux_sym_base_type_token4,
  [aux_sym_base_type_token5] = aux_sym_base_type_token5,
  [aux_sym_base_type_token6] = aux_sym_base_type_token6,
  [aux_sym_base_type_token7] = aux_sym_base_type_token7,
  [sym_name] = sym_name,
  [aux_sym_constant_token1] = aux_sym_constant_token1,
  [aux_sym_constant_token2] = aux_sym_constant_token2,
  [aux_sym_constant_token3] = aux_sym_constant_token3,
  [sym_digit] = sym_digit,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_literal_token2] = aux_sym_string_literal_token2,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [sym_newline] = sym_newline,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_gsql] = sym_gsql,
  [sym__definition] = sym__definition,
  [sym_create_query] = sym_create_query,
  [sym_interpret_query] = sym_interpret_query,
  [sym_parameter_list] = sym_parameter_list,
  [sym_query_params] = sym_query_params,
  [sym_query_param] = sym_query_param,
  [sym_query_body] = sym_query_body,
  [sym_typedef] = sym_typedef,
  [sym_tuple_fields] = sym_tuple_fields,
  [sym_tuple_field] = sym_tuple_field,
  [sym_query_body_stmts] = sym_query_body_stmts,
  [sym_query_body_stmt] = sym_query_body_stmt,
  [sym_assign_stmt] = sym_assign_stmt,
  [sym_v_set_var_decl_stmt] = sym_v_set_var_decl_stmt,
  [sym_seed_set] = sym_seed_set,
  [sym_seed] = sym_seed,
  [sym_simple_set] = sym_simple_set,
  [sym_l_accum_assign_stmt] = sym_l_accum_assign_stmt,
  [sym_g_accum_assign_stmt] = sym_g_accum_assign_stmt,
  [sym_g_accum_accum_stmt] = sym_g_accum_accum_stmt,
  [sym_func_call_stmt] = sym_func_call_stmt,
  [sym__select_stmt] = sym__select_stmt,
  [sym_gsql_select_block] = sym_gsql_select_block,
  [sym_gsql_select_clause] = sym_gsql_select_clause,
  [sym_from_clause] = sym_from_clause,
  [sym_where_clause] = sym_where_clause,
  [sym_accum_clause] = sym_accum_clause,
  [sym_dml_sub_stmt_list] = sym_dml_sub_stmt_list,
  [sym_dml_sub_stmt] = sym_dml_sub_stmt,
  [sym_l_accum_accum_stmt] = sym_l_accum_accum_stmt,
  [sym_attr_accum_stmt] = sym_attr_accum_stmt,
  [sym_v_accum_func_call] = sym_v_accum_func_call,
  [sym_local_var_decl_stmt] = sym_local_var_decl_stmt,
  [sym_dml_sub_if_stmt] = sym_dml_sub_if_stmt,
  [sym_dml_sub_case_stmt] = sym_dml_sub_case_stmt,
  [sym_dml_sub_while_stmt] = sym_dml_sub_while_stmt,
  [sym_dml_sub_for_each_stmt] = sym_dml_sub_for_each_stmt,
  [sym_for_each_control] = sym_for_each_control,
  [sym_post_accum_clause] = sym_post_accum_clause,
  [sym_limit_clause] = sym_limit_clause,
  [sym_path_pattern] = sym_path_pattern,
  [sym_path_edge_pattern] = sym_path_edge_pattern,
  [sym_atomic_edge_pattern] = sym_atomic_edge_pattern,
  [sym_disj_pattern] = sym_disj_pattern,
  [sym_step] = sym_step,
  [sym_step_v2] = sym_step_v2,
  [sym_step_source_set] = sym_step_source_set,
  [sym_step_edge_set] = sym_step_edge_set,
  [sym_step_edge_types] = sym_step_edge_types,
  [sym_atomic_edge_type] = sym_atomic_edge_type,
  [sym_edge_set_type] = sym_edge_set_type,
  [sym_step_vertex_set] = sym_step_vertex_set,
  [sym_step_vertex_types] = sym_step_vertex_types,
  [sym_atomic_vertex_type] = sym_atomic_vertex_type,
  [sym_vertex_set_type] = sym_vertex_set_type,
  [sym_query_body_case_stmt] = sym_query_body_case_stmt,
  [sym_query_body_if_stmt] = sym_query_body_if_stmt,
  [sym_query_body_while_stmt] = sym_query_body_while_stmt,
  [sym_query_body_for_each_stmt] = sym_query_body_for_each_stmt,
  [sym_decl_stmt] = sym_decl_stmt,
  [sym_base_decl_stmt] = sym_base_decl_stmt,
  [sym_accum_decl_stmt] = sym_accum_decl_stmt,
  [sym_accum_type] = sym_accum_type,
  [sym_global_accum_name] = sym_global_accum_name,
  [sym_local_accum_name] = sym_local_accum_name,
  [sym_arg_list] = sym_arg_list,
  [sym_simple_size] = sym_simple_size,
  [sym_expr] = sym_expr,
  [sym_condition] = sym_condition,
  [sym_set_bag_expr] = sym_set_bag_expr,
  [sym_name_dot] = sym_name_dot,
  [sym_aggregator] = sym_aggregator,
  [sym_print_stmt] = sym_print_stmt,
  [sym_print_expr] = sym_print_expr,
  [sym_v_expr_set] = sym_v_expr_set,
  [sym_v_set_proj] = sym_v_set_proj,
  [sym_file_path] = sym_file_path,
  [sym__type] = sym__type,
  [sym__element_type] = sym__element_type,
  [sym_base_type] = sym_base_type,
  [sym_constant] = sym_constant,
  [sym_numeric] = sym_numeric,
  [sym_integer] = sym_integer,
  [sym_real] = sym_real,
  [sym_string_literal] = sym_string_literal,
  [sym_math_operator] = sym_math_operator,
  [sym_comparison_operator] = sym_comparison_operator,
  [aux_sym_gsql_repeat1] = aux_sym_gsql_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_query_params_repeat1] = aux_sym_query_params_repeat1,
  [aux_sym_query_body_repeat1] = aux_sym_query_body_repeat1,
  [aux_sym_query_body_repeat2] = aux_sym_query_body_repeat2,
  [aux_sym_typedef_repeat1] = aux_sym_typedef_repeat1,
  [aux_sym_tuple_fields_repeat1] = aux_sym_tuple_fields_repeat1,
  [aux_sym_seed_set_repeat1] = aux_sym_seed_set_repeat1,
  [aux_sym_func_call_stmt_repeat1] = aux_sym_func_call_stmt_repeat1,
  [aux_sym_func_call_stmt_repeat2] = aux_sym_func_call_stmt_repeat2,
  [aux_sym_gsql_select_block_repeat1] = aux_sym_gsql_select_block_repeat1,
  [aux_sym_from_clause_repeat1] = aux_sym_from_clause_repeat1,
  [aux_sym_dml_sub_stmt_list_repeat1] = aux_sym_dml_sub_stmt_list_repeat1,
  [aux_sym_v_accum_func_call_repeat1] = aux_sym_v_accum_func_call_repeat1,
  [aux_sym_dml_sub_if_stmt_repeat1] = aux_sym_dml_sub_if_stmt_repeat1,
  [aux_sym_dml_sub_case_stmt_repeat1] = aux_sym_dml_sub_case_stmt_repeat1,
  [aux_sym_for_each_control_repeat1] = aux_sym_for_each_control_repeat1,
  [aux_sym_path_pattern_repeat1] = aux_sym_path_pattern_repeat1,
  [aux_sym_disj_pattern_repeat1] = aux_sym_disj_pattern_repeat1,
  [aux_sym_step_edge_types_repeat1] = aux_sym_step_edge_types_repeat1,
  [aux_sym_step_vertex_types_repeat1] = aux_sym_step_vertex_types_repeat1,
  [aux_sym_query_body_case_stmt_repeat1] = aux_sym_query_body_case_stmt_repeat1,
  [aux_sym_query_body_case_stmt_repeat2] = aux_sym_query_body_case_stmt_repeat2,
  [aux_sym_query_body_if_stmt_repeat1] = aux_sym_query_body_if_stmt_repeat1,
  [aux_sym_base_decl_stmt_repeat1] = aux_sym_base_decl_stmt_repeat1,
  [aux_sym_accum_decl_stmt_repeat1] = aux_sym_accum_decl_stmt_repeat1,
  [aux_sym_accum_type_repeat1] = aux_sym_accum_type_repeat1,
  [aux_sym_accum_type_repeat2] = aux_sym_accum_type_repeat2,
  [aux_sym_accum_type_repeat3] = aux_sym_accum_type_repeat3,
  [aux_sym_accum_type_repeat4] = aux_sym_accum_type_repeat4,
  [aux_sym_arg_list_repeat1] = aux_sym_arg_list_repeat1,
  [aux_sym_name_dot_repeat1] = aux_sym_name_dot_repeat1,
  [aux_sym_print_stmt_repeat1] = aux_sym_print_stmt_repeat1,
  [aux_sym_v_expr_set_repeat1] = aux_sym_v_expr_set_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_string_literal_repeat2] = aux_sym_string_literal_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_create_query_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_query_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_query_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_query_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_query_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_query_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_query_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_query_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_query_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interpret_query_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [aux_sym_typedef_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_typedef_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_seed_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_simple_set_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_simple_set_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_simple_set_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_gsql_select_clause_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_clause_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_where_clause_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_clause_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dml_sub_if_stmt_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dml_sub_if_stmt_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dml_sub_if_stmt_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dml_sub_if_stmt_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dml_sub_case_stmt_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dml_sub_case_stmt_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dml_sub_while_stmt_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dml_sub_while_stmt_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dml_sub_while_stmt_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dml_sub_for_each_stmt_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_each_control_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_for_each_control_token2] = {
    .visible = false,
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
  [aux_sym_for_each_control_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_post_accum_clause_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_limit_clause_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_all] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_accum_type_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_type_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_type_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_type_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_type_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_type_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_type_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_type_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_type_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_type_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_type_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_type_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_type_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_type_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_type_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_type_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_type_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_type_token18] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_type_token19] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_type_token20] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_type_token21] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expr_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_condition_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_aggregator_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_aggregator_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_aggregator_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_aggregator_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_aggregator_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_print_stmt_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_print_stmt_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_print_expr_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_base_type_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_base_type_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_base_type_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_base_type_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_base_type_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_base_type_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_base_type_token7] = {
    .visible = false,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_constant_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_digit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
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
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
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
  [sym_newline] = {
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
  [sym_gsql] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_create_query] = {
    .visible = true,
    .named = true,
  },
  [sym_interpret_query] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_query_params] = {
    .visible = true,
    .named = true,
  },
  [sym_query_param] = {
    .visible = true,
    .named = true,
  },
  [sym_query_body] = {
    .visible = true,
    .named = true,
  },
  [sym_typedef] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_fields] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple_field] = {
    .visible = true,
    .named = true,
  },
  [sym_query_body_stmts] = {
    .visible = true,
    .named = true,
  },
  [sym_query_body_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_v_set_var_decl_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_seed_set] = {
    .visible = true,
    .named = true,
  },
  [sym_seed] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_set] = {
    .visible = true,
    .named = true,
  },
  [sym_l_accum_assign_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_g_accum_assign_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_g_accum_accum_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_func_call_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym__select_stmt] = {
    .visible = false,
    .named = true,
  },
  [sym_gsql_select_block] = {
    .visible = true,
    .named = true,
  },
  [sym_gsql_select_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_from_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_where_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_accum_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_dml_sub_stmt_list] = {
    .visible = true,
    .named = true,
  },
  [sym_dml_sub_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_l_accum_accum_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_accum_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_v_accum_func_call] = {
    .visible = true,
    .named = true,
  },
  [sym_local_var_decl_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_dml_sub_if_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_dml_sub_case_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_dml_sub_while_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_dml_sub_for_each_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_for_each_control] = {
    .visible = true,
    .named = true,
  },
  [sym_post_accum_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_limit_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_path_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_path_edge_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_atomic_edge_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_disj_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_step] = {
    .visible = true,
    .named = true,
  },
  [sym_step_v2] = {
    .visible = true,
    .named = true,
  },
  [sym_step_source_set] = {
    .visible = true,
    .named = true,
  },
  [sym_step_edge_set] = {
    .visible = true,
    .named = true,
  },
  [sym_step_edge_types] = {
    .visible = true,
    .named = true,
  },
  [sym_atomic_edge_type] = {
    .visible = true,
    .named = true,
  },
  [sym_edge_set_type] = {
    .visible = true,
    .named = true,
  },
  [sym_step_vertex_set] = {
    .visible = true,
    .named = true,
  },
  [sym_step_vertex_types] = {
    .visible = true,
    .named = true,
  },
  [sym_atomic_vertex_type] = {
    .visible = true,
    .named = true,
  },
  [sym_vertex_set_type] = {
    .visible = true,
    .named = true,
  },
  [sym_query_body_case_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_query_body_if_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_query_body_while_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_query_body_for_each_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_base_decl_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_accum_decl_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_accum_type] = {
    .visible = true,
    .named = true,
  },
  [sym_global_accum_name] = {
    .visible = true,
    .named = true,
  },
  [sym_local_accum_name] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_list] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_size] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_set_bag_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_name_dot] = {
    .visible = true,
    .named = true,
  },
  [sym_aggregator] = {
    .visible = true,
    .named = true,
  },
  [sym_print_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_print_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_v_expr_set] = {
    .visible = true,
    .named = true,
  },
  [sym_v_set_proj] = {
    .visible = true,
    .named = true,
  },
  [sym_file_path] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym__element_type] = {
    .visible = false,
    .named = true,
  },
  [sym_base_type] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_real] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_math_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison_operator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_gsql_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_body_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_typedef_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_fields_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_seed_set_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_func_call_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_func_call_stmt_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_gsql_select_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dml_sub_stmt_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_v_accum_func_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dml_sub_if_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dml_sub_case_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_each_control_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_disj_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_step_edge_types_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_step_vertex_types_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_body_case_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_body_case_stmt_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_body_if_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_base_decl_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_decl_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_type_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_type_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accum_type_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_name_dot_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_print_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_v_expr_set_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias = 1,
  field_edgeAlias = 2,
  field_funcName = 3,
  field_graphName = 4,
  field_iterationVar = 5,
  field_keyVar = 6,
  field_localAccumName = 7,
  field_plus_equal = 8,
  field_queryName = 9,
  field_tupleType = 10,
  field_valueVar = 11,
  field_varName = 12,
  field_vertexAlias = 13,
  field_vertexSetName = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_edgeAlias] = "edgeAlias",
  [field_funcName] = "funcName",
  [field_graphName] = "graphName",
  [field_iterationVar] = "iterationVar",
  [field_keyVar] = "keyVar",
  [field_localAccumName] = "localAccumName",
  [field_plus_equal] = "plus_equal",
  [field_queryName] = "queryName",
  [field_tupleType] = "tupleType",
  [field_valueVar] = "valueVar",
  [field_varName] = "varName",
  [field_vertexAlias] = "vertexAlias",
  [field_vertexSetName] = "vertexSetName",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 1},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 1},
  [11] = {.index = 14, .length = 1},
  [12] = {.index = 15, .length = 2},
  [13] = {.index = 17, .length = 1},
  [14] = {.index = 18, .length = 2},
  [15] = {.index = 20, .length = 2},
  [16] = {.index = 22, .length = 1},
  [17] = {.index = 23, .length = 1},
  [18] = {.index = 24, .length = 2},
  [19] = {.index = 26, .length = 1},
  [20] = {.index = 27, .length = 2},
  [21] = {.index = 29, .length = 3},
  [22] = {.index = 32, .length = 1},
  [23] = {.index = 33, .length = 1},
  [24] = {.index = 34, .length = 1},
  [25] = {.index = 35, .length = 2},
  [26] = {.index = 37, .length = 1},
  [27] = {.index = 38, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_graphName, 5},
  [1] =
    {field_graphName, 6},
    {field_queryName, 2},
  [3] =
    {field_graphName, 7},
    {field_queryName, 3},
  [5] =
    {field_graphName, 8},
    {field_queryName, 4},
  [7] =
    {field_vertexSetName, 0},
  [8] =
    {field_plus_equal, 1},
  [9] =
    {field_graphName, 9},
    {field_queryName, 5},
  [11] =
    {field_iterationVar, 0},
  [12] =
    {field_alias, 3},
  [13] =
    {field_edgeAlias, 1, .inherited = true},
  [14] =
    {field_valueVar, 1},
  [15] =
    {field_valueVar, 0, .inherited = true},
    {field_valueVar, 1, .inherited = true},
  [17] =
    {field_vertexAlias, 0},
  [18] =
    {field_vertexAlias, 2},
    {field_vertexSetName, 0},
  [20] =
    {field_edgeAlias, 0, .inherited = true},
    {field_edgeAlias, 1, .inherited = true},
  [22] =
    {field_vertexAlias, 2},
  [23] =
    {field_tupleType, 4},
  [24] =
    {field_localAccumName, 2},
    {field_vertexAlias, 0},
  [26] =
    {field_tupleType, 5},
  [27] =
    {field_keyVar, 1},
    {field_valueVar, 2, .inherited = true},
  [29] =
    {field_funcName, 3, .inherited = true},
    {field_localAccumName, 2},
    {field_vertexAlias, 0},
  [32] =
    {field_varName, 1},
  [33] =
    {field_edgeAlias, 2},
  [34] =
    {field_plus_equal, 3},
  [35] =
    {field_funcName, 0, .inherited = true},
    {field_funcName, 1, .inherited = true},
  [37] =
    {field_funcName, 1},
  [38] =
    {field_edgeAlias, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_name_character_set_1(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 750
            ? (c < 186
              ? (c < 'k'
                ? (c < 'K'
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
              : (c <= 908 || (c < 1015
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
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
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
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
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
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
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
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
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
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
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
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
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_name_character_set_2(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
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
              : (c <= 908 || (c < 1015
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
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
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
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
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
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
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
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
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
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
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
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
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_name_character_set_3(int32_t c) {
  return (c < 6688
    ? (c < 2984
      ? (c < 2365
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < 'B'
                  ? c == '$'
                  : (c <= 'Z' || (c >= 'b' && c <= 'z')))
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
              : (c <= 2088 || (c < 2208
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2228 || (c < 2308
                  ? (c >= 2230 && c <= 2247)
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
      : (c <= 2986 || (c < 4186
        ? (c < 3450
          ? (c < 3242
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3205
                ? (c < 3168
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3169 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))))
            : (c <= 3251 || (c < 3342
              ? (c < 3296
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || c == 3294))
                : (c <= 3297 || (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)))
              : (c <= 3344 || (c < 3406
                ? (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)
                : (c <= 3406 || (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)))))))
          : (c <= 3455 || (c < 3751
            ? (c < 3634
              ? (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : c <= 3632)))
              : (c <= 3635 || (c < 3718
                ? (c < 3713
                  ? (c >= 3648 && c <= 3654)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : c <= 3749)))))
            : (c <= 3760 || (c < 3904
              ? (c < 3782
                ? (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))
                : (c <= 3782 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))
              : (c <= 3911 || (c < 4096
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)
                : (c <= 4138 || (c < 4176
                  ? c == 4159
                  : c <= 4181)))))))))
        : (c <= 4189 || (c < 5024
          ? (c < 4698
            ? (c < 4295
              ? (c < 4213
                ? (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))
                : (c <= 4225 || (c < 4256
                  ? c == 4238
                  : c <= 4293)))
              : (c <= 4295 || (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))))
            : (c <= 4701 || (c < 4802
              ? (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))
              : (c <= 4805 || (c < 4882
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)
                : (c <= 4885 || (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : c <= 5007)))))))
          : (c <= 5109 || (c < 6103
            ? (c < 5888
              ? (c < 5761
                ? (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : c <= 5880)))
              : (c <= 5900 || (c < 5984
                ? (c < 5920
                  ? (c >= 5902 && c <= 5905)
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
    : (c <= 6740 || (c < 43259
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6987)))
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
        : (c <= 11310 || (c < 12549
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11360
                  ? (c >= 11312 && c <= 11358)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : c <= 12294)))
              : (c <= 12341 || (c < 12445
                ? (c < 12353
                  ? (c >= 12347 && c <= 12348)
                  : c <= 12438)
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42623
            ? (c < 40956
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 40956 || (c < 42512
                ? (c < 42192
                  ? (c >= 40960 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 43011
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42943 || (c < 42997
                  ? (c >= 42946 && c <= 42954)
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
          : (c <= 66915 || (c < 67828
            ? (c < 67639
              ? (c < 67584
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67594
                  ? c == 67592
                  : c <= 67637)))
              : (c <= 67640 || (c < 67680
                ? (c < 67647
                  ? c == 67644
                  : c <= 67669)
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_name_character_set_4(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 750
            ? (c < 186
              ? (c < 'c'
                ? (c < 'C'
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
              : (c <= 908 || (c < 1015
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
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
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
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
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
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
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
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
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
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
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
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
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_name_character_set_5(int32_t c) {
  return (c < 6400
    ? (c < 2984
      ? (c < 2384
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
              : (c <= 2088 || (c < 2230
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2208 && c <= 2228)))
                : (c <= 2247 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2437
                ? (c < 2406
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2415 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2534
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2662 && c <= 2671)))
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2869
            ? (c < 2790
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2799 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2949
              ? (c < 2918
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2927 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 3913
        ? (c < 3423
          ? (c < 3218
            ? (c < 3133
              ? (c < 3077
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3046 && c <= 3055)))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))))
              : (c <= 3133 || (c < 3200
                ? (c < 3168
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3169 || (c >= 3174 && c <= 3183)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3313
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3302
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3311)))
              : (c <= 3314 || (c < 3389
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3386)))
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3716
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3430 && c <= 3439)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3648
                ? (c < 3585
                  ? (c >= 3558 && c <= 3567)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : c <= 3714)))))
            : (c <= 3716 || (c < 3776
              ? (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : c <= 3773)))
              : (c <= 3780 || (c < 3840
                ? (c < 3792
                  ? c == 3782
                  : (c <= 3801 || (c >= 3804 && c <= 3807)))
                : (c <= 3840 || (c < 3904
                  ? (c >= 3872 && c <= 3881)
                  : c <= 3911)))))))))
        : (c <= 3948 || (c < 4808
          ? (c < 4301
            ? (c < 4197
              ? (c < 4176
                ? (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : (c <= 4138 || (c >= 4159 && c <= 4169)))
                : (c <= 4181 || (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : c <= 4193)))
              : (c <= 4198 || (c < 4240
                ? (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : (c <= 4225 || c == 4238))
                : (c <= 4249 || (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : c <= 4295)))))
            : (c <= 4301 || (c < 4704
              ? (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))
              : (c <= 4744 || (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))))))
          : (c <= 4822 || (c < 5920
            ? (c < 5121
              ? (c < 4992
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 5007 || (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : c <= 5117)))
              : (c <= 5740 || (c < 5873
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5902
                  ? (c >= 5888 && c <= 5900)
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
    : (c <= 6430 || (c < 43138
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
                : (c <= 6987 || (c < 7043
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
        : (c <= 8493 || (c < 12353
          ? (c < 11631
            ? (c < 11360
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11310 || (c >= 11312 && c <= 11358)))))
              : (c <= 11492 || (c < 11559
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : c <= 11623)))))
            : (c <= 11631 || (c < 11720
              ? (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))
              : (c <= 11726 || (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12294 || (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)))))))
          : (c <= 12438 || (c < 42240
            ? (c < 12784
              ? (c < 12549
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))
                : (c <= 12591 || (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : c <= 12735)))
              : (c <= 12799 || (c < 40956
                ? (c < 19903
                  ? c == 13312
                  : (c <= 19903 || c == 19968))
                : (c <= 40956 || (c < 42192
                  ? (c >= 40960 && c <= 42124)
                  : c <= 42237)))))
            : (c <= 42508 || (c < 42891
              ? (c < 42656
                ? (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : (c <= 42606 || (c >= 42623 && c <= 42653)))
                : (c <= 42725 || (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : c <= 42888)))
              : (c <= 42943 || (c < 43015
                ? (c < 42997
                  ? (c >= 42946 && c <= 42954)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65142
        ? (c < 43793
          ? (c < 43600
            ? (c < 43396
              ? (c < 43261
                ? (c < 43250
                  ? (c >= 43216 && c <= 43225)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43312
                  ? (c >= 43264 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43488
                  ? (c >= 43471 && c <= 43481)
                  : (c <= 43492 || (c >= 43494 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43609 || (c < 43712
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : c <= 43709)))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64275
            ? (c < 44032
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44025)))
              : (c <= 44032 || (c < 63744
                ? (c < 55216
                  ? c == 55203
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : c <= 64262)))))
            : (c <= 64279 || (c < 64323
              ? (c < 64312
                ? (c < 64287
                  ? c == 64285
                  : (c <= 64296 || (c >= 64298 && c <= 64310)))
                : (c <= 64316 || (c < 64320
                  ? c == 64318
                  : c <= 64321)))
              : (c <= 64324 || (c < 64914
                ? (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66776
          ? (c < 65616
            ? (c < 65490
              ? (c < 65382
                ? (c < 65313
                  ? (c >= 65296 && c <= 65305)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))
                : (c <= 65470 || (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : c <= 65487)))
              : (c <= 65495 || (c < 65576
                ? (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : c <= 65613)))))
            : (c <= 65629 || (c < 66384
              ? (c < 66304
                ? (c < 66176
                  ? (c >= 65664 && c <= 65786)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66335 || (c < 66370
                  ? (c >= 66349 && c <= 66368)
                  : c <= 66377)))
              : (c <= 66421 || (c < 66560
                ? (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : (c <= 66499 || (c >= 66504 && c <= 66511)))
                : (c <= 66717 || (c < 66736
                  ? (c >= 66720 && c <= 66729)
                  : c <= 66771)))))))
          : (c <= 66811 || (c < 67808
            ? (c < 67592
              ? (c < 67392
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67584
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67589)))
              : (c <= 67592 || (c < 67647
                ? (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))
                : (c <= 67669 || (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : c <= 67742)))))
            : (c <= 67826 || (c < 68112
              ? (c < 67968
                ? (c < 67840
                  ? (c >= 67828 && c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67897)))
                : (c <= 68023 || (c < 68096
                  ? (c >= 68030 && c <= 68031)
                  : c <= 68096)))
              : (c <= 68115 || (c < 68224
                ? (c < 68121
                  ? (c >= 68117 && c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_name_character_set_6(int32_t c) {
  return (c < 6400
    ? (c < 2984
      ? (c < 2384
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < '_'
                ? (c < '0'
                  ? c == '$'
                  : (c <= '9' || (c >= 'B' && c <= 'Z')))
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
              : (c <= 2088 || (c < 2230
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2208 && c <= 2228)))
                : (c <= 2247 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2437
                ? (c < 2406
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2415 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2534
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2662 && c <= 2671)))
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2869
            ? (c < 2790
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2799 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2949
              ? (c < 2918
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2927 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 3913
        ? (c < 3423
          ? (c < 3218
            ? (c < 3133
              ? (c < 3077
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3046 && c <= 3055)))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))))
              : (c <= 3133 || (c < 3200
                ? (c < 3168
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3169 || (c >= 3174 && c <= 3183)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3313
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3302
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3311)))
              : (c <= 3314 || (c < 3389
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3386)))
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3716
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3430 && c <= 3439)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3648
                ? (c < 3585
                  ? (c >= 3558 && c <= 3567)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : c <= 3714)))))
            : (c <= 3716 || (c < 3776
              ? (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : c <= 3773)))
              : (c <= 3780 || (c < 3840
                ? (c < 3792
                  ? c == 3782
                  : (c <= 3801 || (c >= 3804 && c <= 3807)))
                : (c <= 3840 || (c < 3904
                  ? (c >= 3872 && c <= 3881)
                  : c <= 3911)))))))))
        : (c <= 3948 || (c < 4808
          ? (c < 4301
            ? (c < 4197
              ? (c < 4176
                ? (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : (c <= 4138 || (c >= 4159 && c <= 4169)))
                : (c <= 4181 || (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : c <= 4193)))
              : (c <= 4198 || (c < 4240
                ? (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : (c <= 4225 || c == 4238))
                : (c <= 4249 || (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : c <= 4295)))))
            : (c <= 4301 || (c < 4704
              ? (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))
              : (c <= 4744 || (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))))))
          : (c <= 4822 || (c < 5920
            ? (c < 5121
              ? (c < 4992
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 5007 || (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : c <= 5117)))
              : (c <= 5740 || (c < 5873
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5902
                  ? (c >= 5888 && c <= 5900)
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
    : (c <= 6430 || (c < 43138
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
                : (c <= 6987 || (c < 7043
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
        : (c <= 8493 || (c < 12353
          ? (c < 11631
            ? (c < 11360
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11310 || (c >= 11312 && c <= 11358)))))
              : (c <= 11492 || (c < 11559
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : c <= 11623)))))
            : (c <= 11631 || (c < 11720
              ? (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))
              : (c <= 11726 || (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12294 || (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)))))))
          : (c <= 12438 || (c < 42240
            ? (c < 12784
              ? (c < 12549
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))
                : (c <= 12591 || (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : c <= 12735)))
              : (c <= 12799 || (c < 40956
                ? (c < 19903
                  ? c == 13312
                  : (c <= 19903 || c == 19968))
                : (c <= 40956 || (c < 42192
                  ? (c >= 40960 && c <= 42124)
                  : c <= 42237)))))
            : (c <= 42508 || (c < 42891
              ? (c < 42656
                ? (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : (c <= 42606 || (c >= 42623 && c <= 42653)))
                : (c <= 42725 || (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : c <= 42888)))
              : (c <= 42943 || (c < 43015
                ? (c < 42997
                  ? (c >= 42946 && c <= 42954)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65142
        ? (c < 43793
          ? (c < 43600
            ? (c < 43396
              ? (c < 43261
                ? (c < 43250
                  ? (c >= 43216 && c <= 43225)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43312
                  ? (c >= 43264 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43488
                  ? (c >= 43471 && c <= 43481)
                  : (c <= 43492 || (c >= 43494 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43609 || (c < 43712
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : c <= 43709)))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64275
            ? (c < 44032
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44025)))
              : (c <= 44032 || (c < 63744
                ? (c < 55216
                  ? c == 55203
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : c <= 64262)))))
            : (c <= 64279 || (c < 64323
              ? (c < 64312
                ? (c < 64287
                  ? c == 64285
                  : (c <= 64296 || (c >= 64298 && c <= 64310)))
                : (c <= 64316 || (c < 64320
                  ? c == 64318
                  : c <= 64321)))
              : (c <= 64324 || (c < 64914
                ? (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66776
          ? (c < 65616
            ? (c < 65490
              ? (c < 65382
                ? (c < 65313
                  ? (c >= 65296 && c <= 65305)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))
                : (c <= 65470 || (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : c <= 65487)))
              : (c <= 65495 || (c < 65576
                ? (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : c <= 65613)))))
            : (c <= 65629 || (c < 66384
              ? (c < 66304
                ? (c < 66176
                  ? (c >= 65664 && c <= 65786)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66335 || (c < 66370
                  ? (c >= 66349 && c <= 66368)
                  : c <= 66377)))
              : (c <= 66421 || (c < 66560
                ? (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : (c <= 66499 || (c >= 66504 && c <= 66511)))
                : (c <= 66717 || (c < 66736
                  ? (c >= 66720 && c <= 66729)
                  : c <= 66771)))))))
          : (c <= 66811 || (c < 67808
            ? (c < 67592
              ? (c < 67392
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67584
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67589)))
              : (c <= 67592 || (c < 67647
                ? (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))
                : (c <= 67669 || (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : c <= 67742)))))
            : (c <= 67826 || (c < 68112
              ? (c < 67968
                ? (c < 67840
                  ? (c >= 67828 && c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67897)))
                : (c <= 68023 || (c < 68096
                  ? (c >= 68030 && c <= 68031)
                  : c <= 68096)))
              : (c <= 68115 || (c < 68224
                ? (c < 68121
                  ? (c >= 68117 && c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_name_character_set_7(int32_t c) {
  return (c < 6470
    ? (c < 2990
      ? (c < 2392
        ? (c < 1488
          ? (c < 880
            ? (c < 192
              ? (c < 'a'
                ? (c < '0'
                  ? c == '$'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : (c <= 181 || c == 186))))
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
              : (c <= 929 || (c < 1329
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : (c <= 1153 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1984
            ? (c < 1765
              ? (c < 1646
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1632 && c <= 1641)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1810
                ? (c < 1791
                  ? (c >= 1774 && c <= 1788)
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
              : (c <= 2136 || (c < 2308
                ? (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : (c <= 2228 || (c >= 2230 && c <= 2247)))
                : (c <= 2361 || (c < 2384
                  ? c == 2365
                  : c <= 2384)))))))))
        : (c <= 2401 || (c < 2730
          ? (c < 2565
            ? (c < 2486
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))))
              : (c <= 2489 || (c < 2527
                ? (c < 2510
                  ? c == 2493
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2556
                  ? (c >= 2534 && c <= 2545)
                  : c <= 2556)))))
            : (c <= 2570 || (c < 2649
              ? (c < 2610
                ? (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))
                : (c <= 2611 || (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)))
              : (c <= 2652 || (c < 2693
                ? (c < 2662
                  ? c == 2654
                  : (c <= 2671 || (c >= 2674 && c <= 2676)))
                : (c <= 2701 || (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : c <= 2728)))))))
          : (c <= 2736 || (c < 2877
            ? (c < 2809
              ? (c < 2768
                ? (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || c == 2749))
                : (c <= 2768 || (c < 2790
                  ? (c >= 2784 && c <= 2785)
                  : c <= 2799)))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2958
              ? (c < 2929
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || (c >= 2918 && c <= 2927)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2974
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : (c <= 2970 || c == 2972))
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 3976
        ? (c < 3430
          ? (c < 3242
            ? (c < 3160
              ? (c < 3086
                ? (c < 3046
                  ? c == 3024
                  : (c <= 3055 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))))
              : (c <= 3162 || (c < 3205
                ? (c < 3174
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3183 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))))
            : (c <= 3251 || (c < 3332
              ? (c < 3296
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || c == 3294))
                : (c <= 3297 || (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3406
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : (c <= 3386 || c == 3389))
                : (c <= 3406 || (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)))))))
          : (c <= 3439 || (c < 3718
            ? (c < 3558
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3567 || (c < 3664
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3673 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3872
                ? (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : (c <= 3807 || c == 3840))
                : (c <= 3881 || (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)))))))))
        : (c <= 3980 || (c < 4824
          ? (c < 4304
            ? (c < 4206
              ? (c < 4186
                ? (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : (c <= 4169 || (c >= 4176 && c <= 4181)))
                : (c <= 4189 || (c < 4197
                  ? c == 4193
                  : c <= 4198)))
              : (c <= 4208 || (c < 4256
                ? (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : (c <= 4238 || (c >= 4240 && c <= 4249)))
                : (c <= 4293 || (c < 4301
                  ? c == 4295
                  : c <= 4301)))))
            : (c <= 4346 || (c < 4746
              ? (c < 4696
                ? (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : c <= 4744)))
              : (c <= 4749 || (c < 4800
                ? (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))
                : (c <= 4800 || (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)))))))
          : (c <= 4880 || (c < 5952
            ? (c < 5743
              ? (c < 5024
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : c <= 5740)))
              : (c <= 5759 || (c < 5888
                ? (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : (c <= 5866 || (c >= 5873 && c <= 5880)))
                : (c <= 5900 || (c < 5920
                  ? (c >= 5902 && c <= 5905)
                  : c <= 5937)))))
            : (c <= 5969 || (c < 6160
              ? (c < 6103
                ? (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : (c <= 6000 || (c >= 6016 && c <= 6067)))
                : (c <= 6103 || (c < 6112
                  ? c == 6108
                  : c <= 6121)))
              : (c <= 6169 || (c < 6314
                ? (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : (c <= 6276 || (c >= 6279 && c <= 6312)))
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)))))))))))))
    : (c <= 6509 || (c < 43138
      ? (c < 8495
        ? (c < 8008
          ? (c < 7168
            ? (c < 6800
              ? (c < 6608
                ? (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))
                : (c <= 6617 || (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || (c >= 6784 && c <= 6793)))))
              : (c <= 6809 || (c < 6992
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6987)))
                : (c <= 7001 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7141)))))
            : (c <= 7203 || (c < 7406
              ? (c < 7312
                ? (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))
              : (c <= 7411 || (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))))))
          : (c <= 8013 || (c < 8178
            ? (c < 8118
              ? (c < 8029
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : c <= 8116)))
              : (c <= 8124 || (c < 8144
                ? (c < 8130
                  ? c == 8126
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))
                : (c <= 8147 || (c < 8160
                  ? (c >= 8150 && c <= 8155)
                  : c <= 8172)))))
            : (c <= 8180 || (c < 8458
              ? (c < 8336
                ? (c < 8305
                  ? (c >= 8182 && c <= 8188)
                  : (c <= 8305 || c == 8319))
                : (c <= 8348 || (c < 8455
                  ? c == 8450
                  : c <= 8455)))
              : (c <= 8467 || (c < 8486
                ? (c < 8473
                  ? c == 8469
                  : (c <= 8477 || c == 8484))
                : (c <= 8486 || (c < 8490
                  ? c == 8488
                  : c <= 8493)))))))))
        : (c <= 8505 || (c < 12353
          ? (c < 11631
            ? (c < 11360
              ? (c < 8579
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8580 || (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : c <= 11358)))
              : (c <= 11492 || (c < 11559
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : c <= 11623)))))
            : (c <= 11631 || (c < 11720
              ? (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))
              : (c <= 11726 || (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12294 || (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)))))))
          : (c <= 12438 || (c < 42240
            ? (c < 12784
              ? (c < 12549
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))
                : (c <= 12591 || (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : c <= 12735)))
              : (c <= 12799 || (c < 40956
                ? (c < 19903
                  ? c == 13312
                  : (c <= 19903 || c == 19968))
                : (c <= 40956 || (c < 42192
                  ? (c >= 40960 && c <= 42124)
                  : c <= 42237)))))
            : (c <= 42508 || (c < 42891
              ? (c < 42656
                ? (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : (c <= 42606 || (c >= 42623 && c <= 42653)))
                : (c <= 42725 || (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : c <= 42888)))
              : (c <= 42943 || (c < 43015
                ? (c < 42997
                  ? (c >= 42946 && c <= 42954)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65142
        ? (c < 43793
          ? (c < 43600
            ? (c < 43396
              ? (c < 43261
                ? (c < 43250
                  ? (c >= 43216 && c <= 43225)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43312
                  ? (c >= 43264 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43488
                  ? (c >= 43471 && c <= 43481)
                  : (c <= 43492 || (c >= 43494 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43609 || (c < 43712
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : c <= 43709)))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64275
            ? (c < 44032
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44025)))
              : (c <= 44032 || (c < 63744
                ? (c < 55216
                  ? c == 55203
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : c <= 64262)))))
            : (c <= 64279 || (c < 64323
              ? (c < 64312
                ? (c < 64287
                  ? c == 64285
                  : (c <= 64296 || (c >= 64298 && c <= 64310)))
                : (c <= 64316 || (c < 64320
                  ? c == 64318
                  : c <= 64321)))
              : (c <= 64324 || (c < 64914
                ? (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66776
          ? (c < 65616
            ? (c < 65490
              ? (c < 65382
                ? (c < 65313
                  ? (c >= 65296 && c <= 65305)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))
                : (c <= 65470 || (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : c <= 65487)))
              : (c <= 65495 || (c < 65576
                ? (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : c <= 65613)))))
            : (c <= 65629 || (c < 66384
              ? (c < 66304
                ? (c < 66176
                  ? (c >= 65664 && c <= 65786)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66335 || (c < 66370
                  ? (c >= 66349 && c <= 66368)
                  : c <= 66377)))
              : (c <= 66421 || (c < 66560
                ? (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : (c <= 66499 || (c >= 66504 && c <= 66511)))
                : (c <= 66717 || (c < 66736
                  ? (c >= 66720 && c <= 66729)
                  : c <= 66771)))))))
          : (c <= 66811 || (c < 67808
            ? (c < 67592
              ? (c < 67392
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67584
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67589)))
              : (c <= 67592 || (c < 67647
                ? (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))
                : (c <= 67669 || (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : c <= 67742)))))
            : (c <= 67826 || (c < 68112
              ? (c < 67968
                ? (c < 67840
                  ? (c >= 67828 && c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67897)))
                : (c <= 68023 || (c < 68096
                  ? (c >= 68030 && c <= 68031)
                  : c <= 68096)))
              : (c <= 68115 || (c < 68224
                ? (c < 68121
                  ? (c >= 68117 && c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_name_character_set_8(int32_t c) {
  return (c < 6400
    ? (c < 2984
      ? (c < 2384
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < '_'
                ? (c < '0'
                  ? c == '$'
                  : (c <= '9' || (c >= 'B' && c <= 'Z')))
                : (c <= '_' || (c < 170
                  ? (c >= 'b' && c <= 'z')
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
              : (c <= 2088 || (c < 2230
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2208 && c <= 2228)))
                : (c <= 2247 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2437
                ? (c < 2406
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2415 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2534
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2662 && c <= 2671)))
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2869
            ? (c < 2790
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2799 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2949
              ? (c < 2918
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2927 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 3913
        ? (c < 3423
          ? (c < 3218
            ? (c < 3133
              ? (c < 3077
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3046 && c <= 3055)))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))))
              : (c <= 3133 || (c < 3200
                ? (c < 3168
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3169 || (c >= 3174 && c <= 3183)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3313
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3302
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3311)))
              : (c <= 3314 || (c < 3389
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3386)))
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3716
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3430 && c <= 3439)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3648
                ? (c < 3585
                  ? (c >= 3558 && c <= 3567)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : c <= 3714)))))
            : (c <= 3716 || (c < 3776
              ? (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : c <= 3773)))
              : (c <= 3780 || (c < 3840
                ? (c < 3792
                  ? c == 3782
                  : (c <= 3801 || (c >= 3804 && c <= 3807)))
                : (c <= 3840 || (c < 3904
                  ? (c >= 3872 && c <= 3881)
                  : c <= 3911)))))))))
        : (c <= 3948 || (c < 4808
          ? (c < 4301
            ? (c < 4197
              ? (c < 4176
                ? (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : (c <= 4138 || (c >= 4159 && c <= 4169)))
                : (c <= 4181 || (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : c <= 4193)))
              : (c <= 4198 || (c < 4240
                ? (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : (c <= 4225 || c == 4238))
                : (c <= 4249 || (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : c <= 4295)))))
            : (c <= 4301 || (c < 4704
              ? (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))
              : (c <= 4744 || (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))))))
          : (c <= 4822 || (c < 5920
            ? (c < 5121
              ? (c < 4992
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 5007 || (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : c <= 5117)))
              : (c <= 5740 || (c < 5873
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5902
                  ? (c >= 5888 && c <= 5900)
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
    : (c <= 6430 || (c < 43138
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
                : (c <= 6987 || (c < 7043
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
        : (c <= 8493 || (c < 12353
          ? (c < 11631
            ? (c < 11360
              ? (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11310 || (c >= 11312 && c <= 11358)))))
              : (c <= 11492 || (c < 11559
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : c <= 11623)))))
            : (c <= 11631 || (c < 11720
              ? (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))
              : (c <= 11726 || (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12294 || (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)))))))
          : (c <= 12438 || (c < 42240
            ? (c < 12784
              ? (c < 12549
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))
                : (c <= 12591 || (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : c <= 12735)))
              : (c <= 12799 || (c < 40956
                ? (c < 19903
                  ? c == 13312
                  : (c <= 19903 || c == 19968))
                : (c <= 40956 || (c < 42192
                  ? (c >= 40960 && c <= 42124)
                  : c <= 42237)))))
            : (c <= 42508 || (c < 42891
              ? (c < 42656
                ? (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : (c <= 42606 || (c >= 42623 && c <= 42653)))
                : (c <= 42725 || (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : c <= 42888)))
              : (c <= 42943 || (c < 43015
                ? (c < 42997
                  ? (c >= 42946 && c <= 42954)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65142
        ? (c < 43793
          ? (c < 43600
            ? (c < 43396
              ? (c < 43261
                ? (c < 43250
                  ? (c >= 43216 && c <= 43225)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43312
                  ? (c >= 43264 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43488
                  ? (c >= 43471 && c <= 43481)
                  : (c <= 43492 || (c >= 43494 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43609 || (c < 43712
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : c <= 43709)))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64275
            ? (c < 44032
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44025)))
              : (c <= 44032 || (c < 63744
                ? (c < 55216
                  ? c == 55203
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : c <= 64262)))))
            : (c <= 64279 || (c < 64323
              ? (c < 64312
                ? (c < 64287
                  ? c == 64285
                  : (c <= 64296 || (c >= 64298 && c <= 64310)))
                : (c <= 64316 || (c < 64320
                  ? c == 64318
                  : c <= 64321)))
              : (c <= 64324 || (c < 64914
                ? (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66776
          ? (c < 65616
            ? (c < 65490
              ? (c < 65382
                ? (c < 65313
                  ? (c >= 65296 && c <= 65305)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))
                : (c <= 65470 || (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : c <= 65487)))
              : (c <= 65495 || (c < 65576
                ? (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : c <= 65613)))))
            : (c <= 65629 || (c < 66384
              ? (c < 66304
                ? (c < 66176
                  ? (c >= 65664 && c <= 65786)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66335 || (c < 66370
                  ? (c >= 66349 && c <= 66368)
                  : c <= 66377)))
              : (c <= 66421 || (c < 66560
                ? (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : (c <= 66499 || (c >= 66504 && c <= 66511)))
                : (c <= 66717 || (c < 66736
                  ? (c >= 66720 && c <= 66729)
                  : c <= 66771)))))))
          : (c <= 66811 || (c < 67808
            ? (c < 67592
              ? (c < 67392
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67584
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67589)))
              : (c <= 67592 || (c < 67647
                ? (c < 67639
                  ? (c >= 67594 && c <= 67637)
                  : (c <= 67640 || c == 67644))
                : (c <= 67669 || (c < 67712
                  ? (c >= 67680 && c <= 67702)
                  : c <= 67742)))))
            : (c <= 67826 || (c < 68112
              ? (c < 67968
                ? (c < 67840
                  ? (c >= 67828 && c <= 67829)
                  : (c <= 67861 || (c >= 67872 && c <= 67897)))
                : (c <= 68023 || (c < 68096
                  ? (c >= 68030 && c <= 68031)
                  : c <= 68096)))
              : (c <= 68115 || (c < 68224
                ? (c < 68121
                  ? (c >= 68117 && c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(438);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '"') ADVANCE(855);
      if (lookahead == '%') ADVANCE(866);
      if (lookahead == '&') ADVANCE(871);
      if (lookahead == '\'') ADVANCE(860);
      if (lookahead == '(') ADVANCE(450);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '*') ADVANCE(511);
      if (lookahead == '+') ADVANCE(868);
      if (lookahead == ',') ADVANCE(452);
      if (lookahead == '-') ADVANCE(508);
      if (lookahead == '.') ADVANCE(467);
      if (lookahead == '/') ADVANCE(865);
      if (lookahead == ':') ADVANCE(499);
      if (lookahead == ';') ADVANCE(465);
      if (lookahead == '<') ADVANCE(460);
      if (lookahead == '=') ADVANCE(454);
      if (lookahead == '>') ADVANCE(464);
      if (lookahead == '@') ADVANCE(554);
      if (lookahead == 'A') ADVANCE(103);
      if (lookahead == '[') ADVANCE(502);
      if (lookahead == ']') ADVANCE(503);
      if (lookahead == '_') ADVANCE(468);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == '{') ADVANCE(455);
      if (lookahead == '|') ADVANCE(510);
      if (lookahead == '}') ADVANCE(456);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(65);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(64);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(59);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(338);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(159);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(203);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(362);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(222);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(61);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(319);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(204);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(325);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(400);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(160);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(219);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(235);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(41);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(854);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(876);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(855);
      if (lookahead == '%') ADVANCE(866);
      if (lookahead == '&') ADVANCE(871);
      if (lookahead == '\'') ADVANCE(860);
      if (lookahead == '(') ADVANCE(450);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '*') ADVANCE(511);
      if (lookahead == '+') ADVANCE(867);
      if (lookahead == ',') ADVANCE(452);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead == '/') ADVANCE(865);
      if (lookahead == ':') ADVANCE(499);
      if (lookahead == ';') ADVANCE(465);
      if (lookahead == '<') ADVANCE(461);
      if (lookahead == '=') ADVANCE(453);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == '[') ADVANCE(502);
      if (lookahead == ']') ADVANCE(503);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(105);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(348);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(315);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(60);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(356);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(313);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(232);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(204);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(324);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(419);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(218);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(298);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(854);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(855);
      if (lookahead == '%') ADVANCE(866);
      if (lookahead == '&') ADVANCE(871);
      if (lookahead == '\'') ADVANCE(860);
      if (lookahead == '(') ADVANCE(450);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '*') ADVANCE(511);
      if (lookahead == '+') ADVANCE(867);
      if (lookahead == ',') ADVANCE(452);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead == '/') ADVANCE(865);
      if (lookahead == ':') ADVANCE(499);
      if (lookahead == ';') ADVANCE(465);
      if (lookahead == '<') ADVANCE(461);
      if (lookahead == '=') ADVANCE(453);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == '[') ADVANCE(502);
      if (lookahead == ']') ADVANCE(503);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(105);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(348);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(315);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(60);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(356);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(313);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(232);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(204);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(324);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(419);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(218);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(298);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(854);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(509);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '%') ADVANCE(866);
      if (lookahead == '&') ADVANCE(871);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '*') ADVANCE(511);
      if (lookahead == '+') ADVANCE(867);
      if (lookahead == ',') ADVANCE(452);
      if (lookahead == '-') ADVANCE(508);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(865);
      if (lookahead == '<') ADVANCE(42);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == '@') ADVANCE(554);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '}') ADVANCE(456);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(757);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(636);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(609);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(611);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(727);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(784);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(690);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(703);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(796);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(716);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(607);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(783);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(792);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(693);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(844);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(713);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(695);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(711);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (sym_name_character_set_1(lookahead)) ADVANCE(850);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '%') ADVANCE(866);
      if (lookahead == '&') ADVANCE(871);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '*') ADVANCE(511);
      if (lookahead == '+') ADVANCE(867);
      if (lookahead == ',') ADVANCE(452);
      if (lookahead == '-') ADVANCE(508);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(865);
      if (lookahead == '<') ADVANCE(42);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == '@') ADVANCE(554);
      if (lookahead == '}') ADVANCE(456);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(757);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(636);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(609);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(611);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(727);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(784);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(690);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(703);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(796);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(716);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(607);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(783);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(792);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(693);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(844);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(713);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(695);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(711);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (sym_name_character_set_1(lookahead)) ADVANCE(850);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '(') ADVANCE(450);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == ',') ADVANCE(452);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(499);
      if (lookahead == '<') ADVANCE(462);
      if (lookahead == '=') ADVANCE(453);
      if (lookahead == '>') ADVANCE(463);
      if (lookahead == '@') ADVANCE(554);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '}') ADVANCE(456);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(757);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(636);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(609);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(611);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(727);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(784);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(690);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(703);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(796);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(716);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(607);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(783);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(792);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(693);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(713);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(695);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(711);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (sym_name_character_set_1(lookahead)) ADVANCE(850);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '(') ADVANCE(450);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == ',') ADVANCE(452);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(499);
      if (lookahead == '<') ADVANCE(462);
      if (lookahead == '=') ADVANCE(453);
      if (lookahead == '>') ADVANCE(463);
      if (lookahead == '@') ADVANCE(554);
      if (lookahead == '}') ADVANCE(456);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(757);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(636);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(609);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(611);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(727);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(784);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(690);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(703);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(796);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(716);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(607);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(783);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(792);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(693);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(713);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(695);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(711);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (sym_name_character_set_1(lookahead)) ADVANCE(850);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '%') ADVANCE(866);
      if (lookahead == '&') ADVANCE(871);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '*') ADVANCE(511);
      if (lookahead == '+') ADVANCE(868);
      if (lookahead == ',') ADVANCE(452);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead == '/') ADVANCE(865);
      if (lookahead == ':') ADVANCE(499);
      if (lookahead == ';') ADVANCE(465);
      if (lookahead == '<') ADVANCE(460);
      if (lookahead == '=') ADVANCE(454);
      if (lookahead == '>') ADVANCE(464);
      if (lookahead == '[') ADVANCE(502);
      if (lookahead == ']') ADVANCE(503);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '}') ADVANCE(456);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(104);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(158);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(315);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(286);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(223);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(229);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(318);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(204);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(324);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(217);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(298);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '%') ADVANCE(866);
      if (lookahead == '&') ADVANCE(871);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '*') ADVANCE(511);
      if (lookahead == '+') ADVANCE(868);
      if (lookahead == ',') ADVANCE(452);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead == '/') ADVANCE(865);
      if (lookahead == ':') ADVANCE(499);
      if (lookahead == ';') ADVANCE(465);
      if (lookahead == '<') ADVANCE(460);
      if (lookahead == '=') ADVANCE(454);
      if (lookahead == '>') ADVANCE(464);
      if (lookahead == '[') ADVANCE(502);
      if (lookahead == ']') ADVANCE(503);
      if (lookahead == '}') ADVANCE(456);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(104);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(158);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(315);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(286);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(223);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(229);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(318);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(204);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(324);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(217);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(298);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '%') ADVANCE(866);
      if (lookahead == '&') ADVANCE(871);
      if (lookahead == '(') ADVANCE(450);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '*') ADVANCE(511);
      if (lookahead == '+') ADVANCE(867);
      if (lookahead == ',') ADVANCE(452);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead == '/') ADVANCE(865);
      if (lookahead == ';') ADVANCE(465);
      if (lookahead == '<') ADVANCE(460);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(464);
      if (lookahead == '[') ADVANCE(502);
      if (lookahead == ']') ADVANCE(503);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(104);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(158);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(315);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(286);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(223);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(229);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(318);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(204);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(324);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(217);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(298);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '%') ADVANCE(866);
      if (lookahead == '&') ADVANCE(871);
      if (lookahead == '(') ADVANCE(450);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '*') ADVANCE(511);
      if (lookahead == '+') ADVANCE(867);
      if (lookahead == ',') ADVANCE(452);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead == '/') ADVANCE(865);
      if (lookahead == ';') ADVANCE(465);
      if (lookahead == '<') ADVANCE(460);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(464);
      if (lookahead == '[') ADVANCE(502);
      if (lookahead == ']') ADVANCE(503);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(104);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(158);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(315);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(286);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(223);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(229);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(318);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(204);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(324);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(217);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(298);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '%') ADVANCE(866);
      if (lookahead == '&') ADVANCE(871);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '*') ADVANCE(511);
      if (lookahead == '+') ADVANCE(867);
      if (lookahead == ',') ADVANCE(452);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead == '/') ADVANCE(865);
      if (lookahead == ':') ADVANCE(499);
      if (lookahead == ';') ADVANCE(465);
      if (lookahead == '<') ADVANCE(460);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(464);
      if (lookahead == '[') ADVANCE(502);
      if (lookahead == ']') ADVANCE(503);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(104);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(158);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(315);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(295);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(223);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(231);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(318);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(204);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(324);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(217);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(854);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '%') ADVANCE(866);
      if (lookahead == '&') ADVANCE(871);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '*') ADVANCE(511);
      if (lookahead == '+') ADVANCE(867);
      if (lookahead == ',') ADVANCE(452);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead == '/') ADVANCE(865);
      if (lookahead == ':') ADVANCE(499);
      if (lookahead == ';') ADVANCE(465);
      if (lookahead == '<') ADVANCE(460);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(464);
      if (lookahead == '[') ADVANCE(502);
      if (lookahead == ']') ADVANCE(503);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(104);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(158);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(315);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(295);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(223);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(231);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(318);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(204);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(324);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(217);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(854);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '%') ADVANCE(866);
      if (lookahead == '&') ADVANCE(871);
      if (lookahead == '(') ADVANCE(450);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '*') ADVANCE(511);
      if (lookahead == '+') ADVANCE(867);
      if (lookahead == ',') ADVANCE(452);
      if (lookahead == '-') ADVANCE(508);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead == '/') ADVANCE(865);
      if (lookahead == '<') ADVANCE(460);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(464);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(303);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(158);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(181);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(286);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(224);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(229);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(318);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(339);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '%') ADVANCE(866);
      if (lookahead == '&') ADVANCE(871);
      if (lookahead == '(') ADVANCE(450);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '*') ADVANCE(511);
      if (lookahead == '+') ADVANCE(867);
      if (lookahead == ',') ADVANCE(452);
      if (lookahead == '-') ADVANCE(508);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead == '/') ADVANCE(865);
      if (lookahead == '<') ADVANCE(460);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(464);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(303);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(158);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(181);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(286);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(224);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(229);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(318);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(339);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '%') ADVANCE(866);
      if (lookahead == '&') ADVANCE(871);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '*') ADVANCE(511);
      if (lookahead == '+') ADVANCE(867);
      if (lookahead == ',') ADVANCE(452);
      if (lookahead == '-') ADVANCE(508);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead == '/') ADVANCE(865);
      if (lookahead == '<') ADVANCE(460);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(464);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(302);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(158);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(295);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(224);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(318);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(854);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '%') ADVANCE(866);
      if (lookahead == '&') ADVANCE(871);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '*') ADVANCE(511);
      if (lookahead == '+') ADVANCE(867);
      if (lookahead == ',') ADVANCE(452);
      if (lookahead == '-') ADVANCE(508);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead == '/') ADVANCE(865);
      if (lookahead == '<') ADVANCE(460);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(464);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(302);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(158);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(295);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(224);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(318);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(854);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(855);
      if (lookahead == '\'') ADVANCE(860);
      if (lookahead == '(') ADVANCE(450);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '@') ADVANCE(554);
      if (lookahead == '[') ADVANCE(502);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(772);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(616);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(794);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(799);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(786);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(854);
      if (sym_name_character_set_2(lookahead)) ADVANCE(850);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(855);
      if (lookahead == '\'') ADVANCE(860);
      if (lookahead == '(') ADVANCE(450);
      if (lookahead == ',') ADVANCE(452);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(462);
      if (lookahead == '>') ADVANCE(463);
      if (lookahead == '@') ADVANCE(554);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(854);
      if (sym_name_character_set_2(lookahead)) ADVANCE(850);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(855);
      if (lookahead == '\'') ADVANCE(860);
      if (lookahead == '(') ADVANCE(450);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '@') ADVANCE(554);
      if (lookahead == '[') ADVANCE(502);
      if (lookahead == '{') ADVANCE(455);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(772);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(616);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(794);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(799);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(702);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(786);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(854);
      if (sym_name_character_set_2(lookahead)) ADVANCE(850);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(855);
      if (lookahead == '\'') ADVANCE(860);
      if (lookahead == '(') ADVANCE(450);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '@') ADVANCE(554);
      if (lookahead == '[') ADVANCE(502);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(772);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(616);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(794);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(799);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(776);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(786);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(854);
      if (sym_name_character_set_2(lookahead)) ADVANCE(850);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(855);
      if (lookahead == '\'') ADVANCE(860);
      if (lookahead == '(') ADVANCE(450);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '@') ADVANCE(554);
      if (lookahead == '[') ADVANCE(502);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(772);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(616);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(794);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(799);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(786);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(712);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(854);
      if (sym_name_character_set_2(lookahead)) ADVANCE(850);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(855);
      if (lookahead == '/') ADVANCE(857);
      if (lookahead == '<') ADVANCE(859);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '&') ADVANCE(856);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(860);
      if (lookahead == '/') ADVANCE(862);
      if (lookahead == '<') ADVANCE(864);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '&') ADVANCE(861);
      END_STATE();
    case 26:
      if (lookahead == '(') ADVANCE(450);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(462);
      if (lookahead == '>') ADVANCE(463);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '_') ADVANCE(469);
      if (lookahead == '}') ADVANCE(456);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(760);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (sym_name_character_set_3(lookahead)) ADVANCE(850);
      END_STATE();
    case 27:
      if (lookahead == '(') ADVANCE(450);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(721);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (sym_name_character_set_2(lookahead)) ADVANCE(850);
      END_STATE();
    case 28:
      if (lookahead == '(') ADVANCE(450);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(621);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (sym_name_character_set_2(lookahead)) ADVANCE(850);
      END_STATE();
    case 29:
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == ',') ADVANCE(452);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(499);
      if (lookahead == ';') ADVANCE(465);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '=') ADVANCE(453);
      if (lookahead == '|') ADVANCE(510);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(106);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(66);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(68);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(247);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(347);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(159);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(309);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(362);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(225);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(69);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(355);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(324);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(202);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(234);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(182);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == ',') ADVANCE(452);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(499);
      if (lookahead == ';') ADVANCE(465);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '=') ADVANCE(453);
      if (lookahead == '|') ADVANCE(510);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(294);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(232);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(324);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(472);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(877);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(878);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == ',') ADVANCE(452);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(462);
      if (lookahead == '>') ADVANCE(463);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(770);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(611);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(728);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(759);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(796);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(819);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(713);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(695);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (sym_name_character_set_2(lookahead)) ADVANCE(850);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(56);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(52);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(92);
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '@') ADVANCE(554);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(770);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(609);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(611);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(727);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(703);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(796);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(819);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(713);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(695);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(711);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (sym_name_character_set_2(lookahead)) ADVANCE(850);
      END_STATE();
    case 40:
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(757);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(636);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(611);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(728);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(784);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(690);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(759);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(796);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(716);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(607);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(783);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(693);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(713);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(695);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (sym_name_character_set_4(lookahead)) ADVANCE(850);
      END_STATE();
    case 41:
      if (lookahead == '2') ADVANCE(448);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 42:
      if (lookahead == '<') ADVANCE(869);
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(875);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(476);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(874);
      END_STATE();
    case 46:
      if (lookahead == '>') ADVANCE(870);
      END_STATE();
    case 47:
      if (lookahead == '>') ADVANCE(1);
      END_STATE();
    case 48:
      if (lookahead == '@') ADVANCE(553);
      END_STATE();
    case 49:
      if (lookahead == 'A') ADVANCE(139);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(239);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(47);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(111);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(284);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(280);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(151);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(344);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(588);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(207);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(512);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(257);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(249);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(322);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(340);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(257);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(334);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(287);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(435);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(427);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(360);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(77);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(210);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(370);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(386);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(320);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(210);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(386);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(320);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(388);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(359);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(361);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(388);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(402);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(335);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(310);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(328);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(404);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(336);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(434);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(430);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(252);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(306);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(431);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(349);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(299);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(375);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(393);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 91:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 94:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 95:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 97:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 98:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 99:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(241);
      END_STATE();
    case 100:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(423);
      END_STATE();
    case 101:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(255);
      END_STATE();
    case 102:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(436);
      END_STATE();
    case 103:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(151);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(344);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(588);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(207);
      END_STATE();
    case 104:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(588);
      END_STATE();
    case 105:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(588);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(209);
      END_STATE();
    case 106:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(157);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(344);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(213);
      END_STATE();
    case 107:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(548);
      END_STATE();
    case 108:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(547);
      END_STATE();
    case 109:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(401);
      END_STATE();
    case 110:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 111:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(358);
      END_STATE();
    case 112:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(379);
      END_STATE();
    case 113:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(380);
      END_STATE();
    case 114:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(381);
      END_STATE();
    case 115:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(382);
      END_STATE();
    case 116:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(174);
      END_STATE();
    case 117:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(175);
      END_STATE();
    case 118:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(405);
      END_STATE();
    case 119:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(406);
      END_STATE();
    case 120:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(407);
      END_STATE();
    case 121:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(408);
      END_STATE();
    case 122:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(410);
      END_STATE();
    case 123:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(411);
      END_STATE();
    case 124:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(412);
      END_STATE();
    case 125:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(413);
      END_STATE();
    case 126:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(414);
      END_STATE();
    case 127:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(415);
      END_STATE();
    case 128:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(416);
      END_STATE();
    case 129:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(417);
      END_STATE();
    case 130:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(418);
      END_STATE();
    case 131:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(420);
      END_STATE();
    case 132:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(421);
      END_STATE();
    case 133:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(422);
      END_STATE();
    case 134:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 135:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 136:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 137:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 138:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 139:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 140:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 141:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 142:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 143:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 144:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 145:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 146:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 147:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 148:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 149:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 150:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(569);
      END_STATE();
    case 151:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(569);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(470);
      END_STATE();
    case 152:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(486);
      END_STATE();
    case 153:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(442);
      END_STATE();
    case 154:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(211);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(363);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 155:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 156:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 157:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(251);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(190);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(259);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(304);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(485);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(572);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(480);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(556);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(519);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 200:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 201:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(398);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(350);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 203:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(482);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(498);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(566);
      END_STATE();
    case 204:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(206);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(440);
      END_STATE();
    case 205:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(457);
      END_STATE();
    case 206:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(367);
      END_STATE();
    case 207:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(582);
      END_STATE();
    case 208:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(521);
      END_STATE();
    case 209:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(581);
      END_STATE();
    case 210:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(85);
      END_STATE();
    case 211:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(164);
      END_STATE();
    case 212:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(169);
      END_STATE();
    case 213:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 214:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(162);
      END_STATE();
    case 215:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(446);
      END_STATE();
    case 216:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(495);
      END_STATE();
    case 217:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(189);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 218:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(189);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(53);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(409);
      END_STATE();
    case 219:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(189);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(53);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(409);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(333);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(330);
      END_STATE();
    case 220:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(161);
      END_STATE();
    case 221:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(197);
      END_STATE();
    case 222:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 223:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(243);
      END_STATE();
    case 224:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 225:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(282);
      END_STATE();
    case 226:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 227:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 228:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(311);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 229:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 230:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(376);
      END_STATE();
    case 231:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 232:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(281);
      END_STATE();
    case 233:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 234:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(305);
      END_STATE();
    case 235:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(305);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 236:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 237:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(307);
      END_STATE();
    case 238:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(366);
      END_STATE();
    case 239:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(308);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(240);
      END_STATE();
    case 240:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 241:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(201);
      END_STATE();
    case 242:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(166);
      END_STATE();
    case 243:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(166);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(230);
      END_STATE();
    case 244:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(166);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(230);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(399);
      END_STATE();
    case 245:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(589);
      END_STATE();
    case 246:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(567);
      END_STATE();
    case 247:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(322);
      END_STATE();
    case 248:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 249:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(396);
      END_STATE();
    case 250:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 251:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      END_STATE();
    case 252:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 253:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 254:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 255:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 256:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(363);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(365);
      END_STATE();
    case 258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 259:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(584);
      END_STATE();
    case 260:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(479);
      END_STATE();
    case 261:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(481);
      END_STATE();
    case 262:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(527);
      END_STATE();
    case 263:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(541);
      END_STATE();
    case 264:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(543);
      END_STATE();
    case 265:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(523);
      END_STATE();
    case 266:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(539);
      END_STATE();
    case 267:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(513);
      END_STATE();
    case 268:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(545);
      END_STATE();
    case 269:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(537);
      END_STATE();
    case 270:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(551);
      END_STATE();
    case 271:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(505);
      END_STATE();
    case 272:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(549);
      END_STATE();
    case 273:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(533);
      END_STATE();
    case 274:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(535);
      END_STATE();
    case 275:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(583);
      END_STATE();
    case 276:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 277:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(529);
      END_STATE();
    case 278:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(531);
      END_STATE();
    case 279:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(525);
      END_STATE();
    case 280:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 281:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(230);
      END_STATE();
    case 282:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(230);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(399);
      END_STATE();
    case 283:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(332);
      END_STATE();
    case 284:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 285:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(176);
      END_STATE();
    case 286:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(498);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(565);
      END_STATE();
    case 287:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(580);
      END_STATE();
    case 288:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(484);
      END_STATE();
    case 289:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(489);
      END_STATE();
    case 290:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(489);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 291:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(473);
      END_STATE();
    case 292:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(568);
      END_STATE();
    case 293:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(853);
      END_STATE();
    case 294:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(497);
      END_STATE();
    case 295:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(497);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(565);
      END_STATE();
    case 296:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(579);
      END_STATE();
    case 297:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 298:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 299:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 300:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 301:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(403);
      END_STATE();
    case 302:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 303:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(108);
      END_STATE();
    case 304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(391);
      END_STATE();
    case 305:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(373);
      END_STATE();
    case 306:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 307:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(377);
      END_STATE();
    case 308:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(389);
      END_STATE();
    case 309:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(384);
      END_STATE();
    case 310:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 311:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 312:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(395);
      END_STATE();
    case 313:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 314:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 315:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 316:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 317:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(404);
      END_STATE();
    case 318:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(371);
      END_STATE();
    case 319:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(371);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(250);
      END_STATE();
    case 320:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 321:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 322:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 323:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 324:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(364);
      END_STATE();
    case 325:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(364);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 326:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(504);
      END_STATE();
    case 327:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 328:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(215);
      END_STATE();
    case 329:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(258);
      END_STATE();
    case 330:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(178);
      END_STATE();
    case 331:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(352);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(200);
      END_STATE();
    case 332:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(387);
      END_STATE();
    case 333:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(253);
      END_STATE();
    case 334:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(86);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(578);
      END_STATE();
    case 335:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(86);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(87);
      END_STATE();
    case 336:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 337:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(248);
      END_STATE();
    case 338:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(71);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(337);
      END_STATE();
    case 339:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(440);
      END_STATE();
    case 340:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(445);
      END_STATE();
    case 341:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(555);
      END_STATE();
    case 342:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(444);
      END_STATE();
    case 343:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 344:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 345:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(432);
      END_STATE();
    case 346:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 347:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 348:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 349:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(346);
      END_STATE();
    case 350:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 351:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(392);
      END_STATE();
    case 352:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 353:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(369);
      END_STATE();
    case 354:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 355:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 356:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(337);
      END_STATE();
    case 357:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(475);
      END_STATE();
    case 358:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(424);
      END_STATE();
    case 359:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(107);
      END_STATE();
    case 360:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(163);
      END_STATE();
    case 361:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(372);
      END_STATE();
    case 362:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(321);
      END_STATE();
    case 363:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(165);
      END_STATE();
    case 364:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(385);
      END_STATE();
    case 365:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(168);
      END_STATE();
    case 366:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(183);
      END_STATE();
    case 367:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(196);
      END_STATE();
    case 368:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 369:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(200);
      END_STATE();
    case 370:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(426);
      END_STATE();
    case 371:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(563);
      END_STATE();
    case 372:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(228);
      END_STATE();
    case 373:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(591);
      END_STATE();
    case 374:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(575);
      END_STATE();
    case 375:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(517);
      END_STATE();
    case 376:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(493);
      END_STATE();
    case 377:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(585);
      END_STATE();
    case 378:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(506);
      END_STATE();
    case 379:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(477);
      END_STATE();
    case 380:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(558);
      END_STATE();
    case 381:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(474);
      END_STATE();
    case 382:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(597);
      END_STATE();
    case 383:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(449);
      END_STATE();
    case 384:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(515);
      END_STATE();
    case 385:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(38);
      END_STATE();
    case 386:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(425);
      END_STATE();
    case 387:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(433);
      END_STATE();
    case 388:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      END_STATE();
    case 389:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      END_STATE();
    case 390:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      END_STATE();
    case 391:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 392:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(180);
      END_STATE();
    case 393:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(173);
      END_STATE();
    case 394:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 395:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(55);
      END_STATE();
    case 396:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(191);
      END_STATE();
    case 397:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(194);
      END_STATE();
    case 398:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      END_STATE();
    case 399:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      END_STATE();
    case 400:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 401:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(261);
      END_STATE();
    case 402:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 403:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(357);
      END_STATE();
    case 404:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(327);
      END_STATE();
    case 405:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(262);
      END_STATE();
    case 406:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(263);
      END_STATE();
    case 407:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(264);
      END_STATE();
    case 408:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(265);
      END_STATE();
    case 409:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 410:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 411:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 412:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 413:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 414:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(270);
      END_STATE();
    case 415:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 416:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(272);
      END_STATE();
    case 417:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 418:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(274);
      END_STATE();
    case 419:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(275);
      END_STATE();
    case 420:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(277);
      END_STATE();
    case 421:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(278);
      END_STATE();
    case 422:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(279);
      END_STATE();
    case 423:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(394);
      END_STATE();
    case 424:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(587);
      END_STATE();
    case 425:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(238);
      END_STATE();
    case 426:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(199);
      END_STATE();
    case 427:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(447);
      END_STATE();
    case 428:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(593);
      END_STATE();
    case 429:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(852);
      END_STATE();
    case 430:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(851);
      END_STATE();
    case 431:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(577);
      END_STATE();
    case 432:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(443);
      END_STATE();
    case 433:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(560);
      END_STATE();
    case 434:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(599);
      END_STATE();
    case 435:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(91);
      END_STATE();
    case 436:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(93);
      END_STATE();
    case 437:
      if (eof) ADVANCE(438);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(855);
      if (lookahead == '%') ADVANCE(866);
      if (lookahead == '&') ADVANCE(871);
      if (lookahead == '\'') ADVANCE(860);
      if (lookahead == '(') ADVANCE(450);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '*') ADVANCE(511);
      if (lookahead == '+') ADVANCE(867);
      if (lookahead == ',') ADVANCE(452);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead == '/') ADVANCE(865);
      if (lookahead == ':') ADVANCE(499);
      if (lookahead == ';') ADVANCE(465);
      if (lookahead == '<') ADVANCE(461);
      if (lookahead == '=') ADVANCE(453);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == '[') ADVANCE(502);
      if (lookahead == ']') ADVANCE(503);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(105);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(348);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(315);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(60);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(356);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(313);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(232);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(204);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(324);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(419);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(218);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(298);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(437)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(854);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_create_query_token1);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_create_query_token2);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_create_query_token3);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_create_query_token4);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_create_query_token5);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_create_query_token6);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_create_query_token6);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_create_query_token7);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_create_query_token8);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_create_query_token9);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_interpret_query_token1);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(874);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_typedef_token1);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_typedef_token1);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_typedef_token2);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(869);
      if (lookahead == '=') ADVANCE(872);
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(869);
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(873);
      if (lookahead == '>') ADVANCE(870);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(472);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym__);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_seed_token1);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_seed_token1);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_simple_set_token1);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_simple_set_token2);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_simple_set_token3);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_gsql_select_clause_token1);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_gsql_select_clause_token1);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_accum_clause_token1);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_dml_sub_if_stmt_token1);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_dml_sub_if_stmt_token1);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_dml_sub_if_stmt_token2);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_dml_sub_if_stmt_token3);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_dml_sub_if_stmt_token4);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_dml_sub_case_stmt_token1);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_dml_sub_case_stmt_token1);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_dml_sub_case_stmt_token2);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_dml_sub_case_stmt_token2);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_dml_sub_while_stmt_token1);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_dml_sub_while_stmt_token1);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_dml_sub_while_stmt_token2);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_dml_sub_while_stmt_token3);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_dml_sub_for_each_stmt_token1);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_dml_sub_for_each_stmt_token1);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_for_each_control_token1);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_for_each_control_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(188);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_for_each_control_token2);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_for_each_control_token2);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_for_each_control_token3);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_post_accum_clause_token1);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_limit_clause_token1);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(562);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_accum_type_token1);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_accum_type_token1);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_accum_type_token2);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_accum_type_token2);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_accum_type_token3);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_accum_type_token3);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_accum_type_token4);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_accum_type_token4);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_accum_type_token5);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_accum_type_token5);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_accum_type_token6);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_accum_type_token6);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_accum_type_token7);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_accum_type_token7);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_accum_type_token8);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_accum_type_token8);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_accum_type_token9);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_accum_type_token9);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_accum_type_token10);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_accum_type_token10);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_accum_type_token11);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_accum_type_token11);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_accum_type_token12);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_accum_type_token12);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_accum_type_token13);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_accum_type_token13);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_accum_type_token14);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_accum_type_token14);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_accum_type_token15);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_accum_type_token15);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_accum_type_token16);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_accum_type_token16);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_accum_type_token17);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_accum_type_token17);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_accum_type_token18);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_accum_type_token19);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_accum_type_token20);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_accum_type_token20);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_accum_type_token21);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_accum_type_token21);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(553);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_expr_token2);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_expr_token2);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_expr_token3);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_expr_token3);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_expr_token4);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_expr_token4);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_condition_token2);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_condition_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_condition_token3);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_condition_token4);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_condition_token5);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_condition_token6);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_condition_token6);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_condition_token7);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_condition_token7);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_condition_token8);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_aggregator_token1);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_aggregator_token1);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_aggregator_token2);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_aggregator_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_aggregator_token3);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_aggregator_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(357);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_aggregator_token4);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_aggregator_token4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_aggregator_token5);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_aggregator_token5);
      if (lookahead == 'A') ADVANCE(139);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_print_stmt_token1);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_print_stmt_token1);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_print_stmt_token2);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_print_expr_token1);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_base_type_token1);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_base_type_token1);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_base_type_token2);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_base_type_token2);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_base_type_token3);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_base_type_token3);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_base_type_token4);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_base_type_token4);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_base_type_token5);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_base_type_token5);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_base_type_token6);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_base_type_token6);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_base_type_token7);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_base_type_token7);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(668);
      if (sym_name_character_set_6(lookahead)) ADVANCE(850);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(722);
      if (sym_name_character_set_7(lookahead)) ADVANCE(850);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(752);
      if (sym_name_character_set_7(lookahead)) ADVANCE(850);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(750);
      if (sym_name_character_set_7(lookahead)) ADVANCE(850);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(780);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(768);
      if (sym_name_character_set_8(lookahead)) ADVANCE(850);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(641);
      if (sym_name_character_set_8(lookahead)) ADVANCE(850);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(795);
      if (sym_name_character_set_8(lookahead)) ADVANCE(850);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(848);
      if (sym_name_character_set_8(lookahead)) ADVANCE(850);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(814);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(823);
      if (sym_name_character_set_8(lookahead)) ADVANCE(850);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(781);
      if (sym_name_character_set_8(lookahead)) ADVANCE(850);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(842);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(754);
      if (sym_name_character_set_8(lookahead)) ADVANCE(850);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(842);
      if (sym_name_character_set_8(lookahead)) ADVANCE(850);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(845);
      if (sym_name_character_set_8(lookahead)) ADVANCE(850);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(733);
      if (sym_name_character_set_8(lookahead)) ADVANCE(850);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(640);
      if (sym_name_character_set_8(lookahead)) ADVANCE(850);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(769);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(793);
      if (sym_name_character_set_8(lookahead)) ADVANCE(850);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(791);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(637);
      if (sym_name_character_set_8(lookahead)) ADVANCE(850);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(806);
      if (sym_name_character_set_8(lookahead)) ADVANCE(850);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(765);
      if (sym_name_character_set_8(lookahead)) ADVANCE(850);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(731);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(763);
      if (sym_name_character_set_8(lookahead)) ADVANCE(850);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(661);
      if (sym_name_character_set_8(lookahead)) ADVANCE(850);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(662);
      if (sym_name_character_set_8(lookahead)) ADVANCE(850);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(663);
      if (sym_name_character_set_8(lookahead)) ADVANCE(850);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(664);
      if (sym_name_character_set_8(lookahead)) ADVANCE(850);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(665);
      if (sym_name_character_set_8(lookahead)) ADVANCE(850);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(666);
      if (sym_name_character_set_8(lookahead)) ADVANCE(850);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(667);
      if (sym_name_character_set_8(lookahead)) ADVANCE(850);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(669);
      if (sym_name_character_set_8(lookahead)) ADVANCE(850);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(670);
      if (sym_name_character_set_8(lookahead)) ADVANCE(850);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(671);
      if (sym_name_character_set_8(lookahead)) ADVANCE(850);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(672);
      if (sym_name_character_set_8(lookahead)) ADVANCE(850);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(673);
      if (sym_name_character_set_8(lookahead)) ADVANCE(850);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(674);
      if (sym_name_character_set_8(lookahead)) ADVANCE(850);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(709);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(803);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(771);
      if (sym_name_character_set_8(lookahead)) ADVANCE(850);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(724);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(730);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(849);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(710);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(642);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(824);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(808);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(810);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(812);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(688);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(826);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(827);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(828);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(829);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(830);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(831);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(832);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(833);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(834);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(835);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(836);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(837);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(839);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(840);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(647);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(648);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(649);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(650);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(651);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(652);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(653);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(654);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(655);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(656);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(657);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(658);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(659);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(660);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(706);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(684);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(623);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(635);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(488);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(596);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(843);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(520);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(704);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(602);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(571);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(573);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(557);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(501);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(612);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(618);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(676);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(821);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(789);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(734);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(643);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(790);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(797);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(617);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(815);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(755);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(751);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(644);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(732);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(483);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(804);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(458);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(522);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(680);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(689);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(624);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(625);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(496);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(715);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(699);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(761);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(753);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(729);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(802);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(758);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(767);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(798);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(762);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(800);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(764);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(723);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(766);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(694);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(590);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(604);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(775);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(788);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(775);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(682);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(683);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(696);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(701);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(801);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(603);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(530);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(532);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(528);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(542);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(544);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(524);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(526);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(540);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(514);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(546);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(538);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(552);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(550);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(534);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(536);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(613);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(779);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(614);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(685);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(850);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(490);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(619);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(677);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(785);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(708);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(705);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(804);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(847);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(805);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(807);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(809);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(813);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(707);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(818);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(645);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(628);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(678);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(771);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(725);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(622);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(825);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(756);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(620);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(811);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(639);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(692);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(816);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(626);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(627);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(630);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(726);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(608);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(773);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(610);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(838);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(615);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(697);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(717);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(817);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(787);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(720);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(634);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(782);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(679);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(774);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(646);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(691);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(700);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(820);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(687);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(822);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(841);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(516);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(592);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(518);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(586);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(598);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(576);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(478);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(564);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(559);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(605);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(698);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(714);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(846);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(681);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(606);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(789);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(718);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(629);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(631);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(638);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(735);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(777);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(736);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(737);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(738);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(739);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(740);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(741);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(742);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(743);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(744);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(745);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(746);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(747);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(686);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(748);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(749);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(719);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(850);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(594);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(778);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(600);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(561);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(471);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(632);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(633);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(850);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_constant_token3);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_digit);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(877);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(857);
      if (lookahead == '<') ADVANCE(859);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '&') ADVANCE(856);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(877);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '/') ADVANCE(862);
      if (lookahead == '<') ADVANCE(864);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '\'') ADVANCE(861);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(877);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(476);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(877);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 437},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 12},
  [28] = {.lex_state = 12},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 12},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 14},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 14},
  [61] = {.lex_state = 14},
  [62] = {.lex_state = 14},
  [63] = {.lex_state = 14},
  [64] = {.lex_state = 14},
  [65] = {.lex_state = 14},
  [66] = {.lex_state = 14},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 14},
  [69] = {.lex_state = 21},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 437},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 39},
  [77] = {.lex_state = 39},
  [78] = {.lex_state = 39},
  [79] = {.lex_state = 39},
  [80] = {.lex_state = 39},
  [81] = {.lex_state = 39},
  [82] = {.lex_state = 22},
  [83] = {.lex_state = 39},
  [84] = {.lex_state = 39},
  [85] = {.lex_state = 22},
  [86] = {.lex_state = 39},
  [87] = {.lex_state = 39},
  [88] = {.lex_state = 39},
  [89] = {.lex_state = 39},
  [90] = {.lex_state = 19},
  [91] = {.lex_state = 22},
  [92] = {.lex_state = 19},
  [93] = {.lex_state = 22},
  [94] = {.lex_state = 19},
  [95] = {.lex_state = 19},
  [96] = {.lex_state = 22},
  [97] = {.lex_state = 22},
  [98] = {.lex_state = 19},
  [99] = {.lex_state = 19},
  [100] = {.lex_state = 19},
  [101] = {.lex_state = 22},
  [102] = {.lex_state = 22},
  [103] = {.lex_state = 19},
  [104] = {.lex_state = 22},
  [105] = {.lex_state = 22},
  [106] = {.lex_state = 22},
  [107] = {.lex_state = 19},
  [108] = {.lex_state = 22},
  [109] = {.lex_state = 19},
  [110] = {.lex_state = 19},
  [111] = {.lex_state = 22},
  [112] = {.lex_state = 39},
  [113] = {.lex_state = 19},
  [114] = {.lex_state = 22},
  [115] = {.lex_state = 19},
  [116] = {.lex_state = 22},
  [117] = {.lex_state = 19},
  [118] = {.lex_state = 23},
  [119] = {.lex_state = 19},
  [120] = {.lex_state = 19},
  [121] = {.lex_state = 22},
  [122] = {.lex_state = 22},
  [123] = {.lex_state = 19},
  [124] = {.lex_state = 19},
  [125] = {.lex_state = 22},
  [126] = {.lex_state = 19},
  [127] = {.lex_state = 19},
  [128] = {.lex_state = 22},
  [129] = {.lex_state = 19},
  [130] = {.lex_state = 22},
  [131] = {.lex_state = 22},
  [132] = {.lex_state = 19},
  [133] = {.lex_state = 19},
  [134] = {.lex_state = 19},
  [135] = {.lex_state = 19},
  [136] = {.lex_state = 19},
  [137] = {.lex_state = 19},
  [138] = {.lex_state = 14},
  [139] = {.lex_state = 19},
  [140] = {.lex_state = 19},
  [141] = {.lex_state = 19},
  [142] = {.lex_state = 19},
  [143] = {.lex_state = 19},
  [144] = {.lex_state = 14},
  [145] = {.lex_state = 19},
  [146] = {.lex_state = 19},
  [147] = {.lex_state = 19},
  [148] = {.lex_state = 19},
  [149] = {.lex_state = 19},
  [150] = {.lex_state = 19},
  [151] = {.lex_state = 19},
  [152] = {.lex_state = 19},
  [153] = {.lex_state = 19},
  [154] = {.lex_state = 16},
  [155] = {.lex_state = 19},
  [156] = {.lex_state = 19},
  [157] = {.lex_state = 19},
  [158] = {.lex_state = 19},
  [159] = {.lex_state = 19},
  [160] = {.lex_state = 19},
  [161] = {.lex_state = 19},
  [162] = {.lex_state = 19},
  [163] = {.lex_state = 19},
  [164] = {.lex_state = 19},
  [165] = {.lex_state = 19},
  [166] = {.lex_state = 19},
  [167] = {.lex_state = 19},
  [168] = {.lex_state = 19},
  [169] = {.lex_state = 16},
  [170] = {.lex_state = 19},
  [171] = {.lex_state = 19},
  [172] = {.lex_state = 14},
  [173] = {.lex_state = 19},
  [174] = {.lex_state = 19},
  [175] = {.lex_state = 19},
  [176] = {.lex_state = 19},
  [177] = {.lex_state = 16},
  [178] = {.lex_state = 16},
  [179] = {.lex_state = 16},
  [180] = {.lex_state = 16},
  [181] = {.lex_state = 16},
  [182] = {.lex_state = 16},
  [183] = {.lex_state = 14},
  [184] = {.lex_state = 16},
  [185] = {.lex_state = 40},
  [186] = {.lex_state = 16},
  [187] = {.lex_state = 40},
  [188] = {.lex_state = 16},
  [189] = {.lex_state = 16},
  [190] = {.lex_state = 16},
  [191] = {.lex_state = 437},
  [192] = {.lex_state = 16},
  [193] = {.lex_state = 16},
  [194] = {.lex_state = 437},
  [195] = {.lex_state = 40},
  [196] = {.lex_state = 16},
  [197] = {.lex_state = 16},
  [198] = {.lex_state = 18},
  [199] = {.lex_state = 16},
  [200] = {.lex_state = 18},
  [201] = {.lex_state = 18},
  [202] = {.lex_state = 16},
  [203] = {.lex_state = 16},
  [204] = {.lex_state = 18},
  [205] = {.lex_state = 16},
  [206] = {.lex_state = 18},
  [207] = {.lex_state = 16},
  [208] = {.lex_state = 18},
  [209] = {.lex_state = 18},
  [210] = {.lex_state = 18},
  [211] = {.lex_state = 18},
  [212] = {.lex_state = 18},
  [213] = {.lex_state = 18},
  [214] = {.lex_state = 18},
  [215] = {.lex_state = 18},
  [216] = {.lex_state = 18},
  [217] = {.lex_state = 18},
  [218] = {.lex_state = 18},
  [219] = {.lex_state = 18},
  [220] = {.lex_state = 18},
  [221] = {.lex_state = 18},
  [222] = {.lex_state = 18},
  [223] = {.lex_state = 18},
  [224] = {.lex_state = 18},
  [225] = {.lex_state = 18},
  [226] = {.lex_state = 18},
  [227] = {.lex_state = 18},
  [228] = {.lex_state = 18},
  [229] = {.lex_state = 18},
  [230] = {.lex_state = 18},
  [231] = {.lex_state = 18},
  [232] = {.lex_state = 18},
  [233] = {.lex_state = 18},
  [234] = {.lex_state = 18},
  [235] = {.lex_state = 18},
  [236] = {.lex_state = 18},
  [237] = {.lex_state = 18},
  [238] = {.lex_state = 437},
  [239] = {.lex_state = 437},
  [240] = {.lex_state = 437},
  [241] = {.lex_state = 16},
  [242] = {.lex_state = 16},
  [243] = {.lex_state = 437},
  [244] = {.lex_state = 19},
  [245] = {.lex_state = 19},
  [246] = {.lex_state = 35},
  [247] = {.lex_state = 29},
  [248] = {.lex_state = 35},
  [249] = {.lex_state = 437},
  [250] = {.lex_state = 437},
  [251] = {.lex_state = 437},
  [252] = {.lex_state = 35},
  [253] = {.lex_state = 29},
  [254] = {.lex_state = 29},
  [255] = {.lex_state = 437},
  [256] = {.lex_state = 437},
  [257] = {.lex_state = 437},
  [258] = {.lex_state = 437},
  [259] = {.lex_state = 437},
  [260] = {.lex_state = 437},
  [261] = {.lex_state = 29},
  [262] = {.lex_state = 437},
  [263] = {.lex_state = 35},
  [264] = {.lex_state = 35},
  [265] = {.lex_state = 35},
  [266] = {.lex_state = 35},
  [267] = {.lex_state = 35},
  [268] = {.lex_state = 437},
  [269] = {.lex_state = 35},
  [270] = {.lex_state = 6},
  [271] = {.lex_state = 29},
  [272] = {.lex_state = 29},
  [273] = {.lex_state = 29},
  [274] = {.lex_state = 6},
  [275] = {.lex_state = 26},
  [276] = {.lex_state = 35},
  [277] = {.lex_state = 437},
  [278] = {.lex_state = 35},
  [279] = {.lex_state = 29},
  [280] = {.lex_state = 29},
  [281] = {.lex_state = 26},
  [282] = {.lex_state = 35},
  [283] = {.lex_state = 35},
  [284] = {.lex_state = 35},
  [285] = {.lex_state = 35},
  [286] = {.lex_state = 35},
  [287] = {.lex_state = 6},
  [288] = {.lex_state = 437},
  [289] = {.lex_state = 437},
  [290] = {.lex_state = 29},
  [291] = {.lex_state = 437},
  [292] = {.lex_state = 29},
  [293] = {.lex_state = 6},
  [294] = {.lex_state = 6},
  [295] = {.lex_state = 29},
  [296] = {.lex_state = 29},
  [297] = {.lex_state = 437},
  [298] = {.lex_state = 29},
  [299] = {.lex_state = 29},
  [300] = {.lex_state = 437},
  [301] = {.lex_state = 437},
  [302] = {.lex_state = 437},
  [303] = {.lex_state = 26},
  [304] = {.lex_state = 26},
  [305] = {.lex_state = 29},
  [306] = {.lex_state = 26},
  [307] = {.lex_state = 437},
  [308] = {.lex_state = 30},
  [309] = {.lex_state = 26},
  [310] = {.lex_state = 437},
  [311] = {.lex_state = 26},
  [312] = {.lex_state = 437},
  [313] = {.lex_state = 437},
  [314] = {.lex_state = 437},
  [315] = {.lex_state = 437},
  [316] = {.lex_state = 437},
  [317] = {.lex_state = 437},
  [318] = {.lex_state = 437},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 26},
  [322] = {.lex_state = 29},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 26},
  [325] = {.lex_state = 26},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 26},
  [328] = {.lex_state = 26},
  [329] = {.lex_state = 29},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 26},
  [332] = {.lex_state = 437},
  [333] = {.lex_state = 437},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 437},
  [336] = {.lex_state = 437},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 437},
  [339] = {.lex_state = 437},
  [340] = {.lex_state = 437},
  [341] = {.lex_state = 437},
  [342] = {.lex_state = 437},
  [343] = {.lex_state = 437},
  [344] = {.lex_state = 437},
  [345] = {.lex_state = 437},
  [346] = {.lex_state = 437},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 437},
  [350] = {.lex_state = 437},
  [351] = {.lex_state = 437},
  [352] = {.lex_state = 437},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 20},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 28},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 27},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 437},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 20},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 26},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 27},
  [372] = {.lex_state = 437},
  [373] = {.lex_state = 26},
  [374] = {.lex_state = 437},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 437},
  [378] = {.lex_state = 437},
  [379] = {.lex_state = 437},
  [380] = {.lex_state = 20},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 20},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 20},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 20},
  [389] = {.lex_state = 20},
  [390] = {.lex_state = 20},
  [391] = {.lex_state = 20},
  [392] = {.lex_state = 20},
  [393] = {.lex_state = 20},
  [394] = {.lex_state = 26},
  [395] = {.lex_state = 20},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 20},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 437},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 8},
  [403] = {.lex_state = 8},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 437},
  [407] = {.lex_state = 8},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 20},
  [410] = {.lex_state = 437},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 437},
  [413] = {.lex_state = 20},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 8},
  [416] = {.lex_state = 8},
  [417] = {.lex_state = 437},
  [418] = {.lex_state = 8},
  [419] = {.lex_state = 8},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 437},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 20},
  [427] = {.lex_state = 8},
  [428] = {.lex_state = 20},
  [429] = {.lex_state = 437},
  [430] = {.lex_state = 437},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 20},
  [435] = {.lex_state = 20},
  [436] = {.lex_state = 20},
  [437] = {.lex_state = 20},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 437},
  [440] = {.lex_state = 437},
  [441] = {.lex_state = 20},
  [442] = {.lex_state = 437},
  [443] = {.lex_state = 437},
  [444] = {.lex_state = 20},
  [445] = {.lex_state = 437},
  [446] = {.lex_state = 20},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 20},
  [450] = {.lex_state = 20},
  [451] = {.lex_state = 20},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 20},
  [454] = {.lex_state = 30},
  [455] = {.lex_state = 437},
  [456] = {.lex_state = 437},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 29},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 8},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 20},
  [470] = {.lex_state = 20},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 437},
  [473] = {.lex_state = 437},
  [474] = {.lex_state = 437},
  [475] = {.lex_state = 20},
  [476] = {.lex_state = 437},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 29},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 437},
  [481] = {.lex_state = 20},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 8},
  [485] = {.lex_state = 8},
  [486] = {.lex_state = 8},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 437},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 20},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 437},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 25},
  [500] = {.lex_state = 24},
  [501] = {.lex_state = 20},
  [502] = {.lex_state = 437},
  [503] = {.lex_state = 20},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 24},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 25},
  [509] = {.lex_state = 437},
  [510] = {.lex_state = 8},
  [511] = {.lex_state = 8},
  [512] = {.lex_state = 25},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 24},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 20},
  [521] = {.lex_state = 437},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 437},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 437},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 437},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 437},
  [534] = {.lex_state = 437},
  [535] = {.lex_state = 437},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 437},
  [538] = {.lex_state = 437},
  [539] = {.lex_state = 20},
  [540] = {.lex_state = 8},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 437},
  [546] = {.lex_state = 8},
  [547] = {.lex_state = 437},
  [548] = {.lex_state = 6},
  [549] = {.lex_state = 8},
  [550] = {.lex_state = 20},
  [551] = {.lex_state = 24},
  [552] = {.lex_state = 25},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 437},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 437},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 20},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 8},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 20},
  [569] = {.lex_state = 437},
  [570] = {.lex_state = 437},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 8},
  [574] = {.lex_state = 8},
  [575] = {.lex_state = 437},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 437},
  [579] = {.lex_state = 8},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 20},
  [587] = {.lex_state = 24},
  [588] = {.lex_state = 25},
  [589] = {.lex_state = 20},
  [590] = {.lex_state = 437},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 14},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 437},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 14},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 437},
  [607] = {.lex_state = 16},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 8},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 16},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 437},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 14},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 437},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 437},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 437},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 8},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 8},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 20},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 437},
  [660] = {.lex_state = 437},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 20},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 20},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 20},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 20},
  [679] = {.lex_state = 20},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 20},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 20},
  [699] = {.lex_state = 20},
  [700] = {.lex_state = 8},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 20},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 8},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 437},
  [712] = {.lex_state = 20},
  [713] = {.lex_state = 437},
  [714] = {.lex_state = 20},
  [715] = {.lex_state = 20},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 14},
  [718] = {.lex_state = 437},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 20},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 20},
  [726] = {.lex_state = 20},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 20},
  [730] = {.lex_state = 20},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 20},
  [734] = {.lex_state = 20},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 437},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 8},
  [749] = {.lex_state = 437},
  [750] = {.lex_state = 20},
  [751] = {.lex_state = 20},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 20},
  [755] = {.lex_state = 20},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 20},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 20},
  [764] = {.lex_state = 20},
  [765] = {.lex_state = 8},
  [766] = {.lex_state = 8},
  [767] = {.lex_state = 8},
  [768] = {.lex_state = 8},
  [769] = {.lex_state = 8},
  [770] = {.lex_state = 8},
  [771] = {.lex_state = 8},
  [772] = {.lex_state = 8},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 8},
  [779] = {.lex_state = 20},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 20},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 20},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 8},
  [788] = {.lex_state = 20},
  [789] = {.lex_state = 20},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 437},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 20},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 8},
  [801] = {.lex_state = 20},
  [802] = {.lex_state = 20},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 437},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 20},
  [811] = {.lex_state = 437},
  [812] = {.lex_state = 20},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 437},
  [816] = {.lex_state = 20},
  [817] = {.lex_state = 20},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 20},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 20},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 437},
  [831] = {.lex_state = 20},
  [832] = {.lex_state = 20},
  [833] = {.lex_state = 437},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 20},
  [837] = {.lex_state = 20},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 20},
  [841] = {.lex_state = 437},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 20},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 437},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 20},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 20},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 20},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 20},
  [864] = {.lex_state = 20},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_create_query_token1] = ACTIONS(1),
    [aux_sym_create_query_token2] = ACTIONS(1),
    [aux_sym_create_query_token3] = ACTIONS(1),
    [aux_sym_create_query_token4] = ACTIONS(1),
    [aux_sym_create_query_token5] = ACTIONS(1),
    [aux_sym_create_query_token6] = ACTIONS(1),
    [aux_sym_create_query_token7] = ACTIONS(1),
    [aux_sym_create_query_token8] = ACTIONS(1),
    [aux_sym_create_query_token9] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_typedef_token1] = ACTIONS(1),
    [aux_sym_typedef_token2] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [aux_sym_seed_token1] = ACTIONS(1),
    [anon_sym_DOT_STAR] = ACTIONS(1),
    [aux_sym_simple_set_token1] = ACTIONS(1),
    [aux_sym_simple_set_token2] = ACTIONS(1),
    [aux_sym_simple_set_token3] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [aux_sym_gsql_select_clause_token1] = ACTIONS(1),
    [aux_sym_from_clause_token1] = ACTIONS(1),
    [aux_sym_where_clause_token1] = ACTIONS(1),
    [aux_sym_accum_clause_token1] = ACTIONS(1),
    [aux_sym_dml_sub_if_stmt_token1] = ACTIONS(1),
    [aux_sym_dml_sub_if_stmt_token2] = ACTIONS(1),
    [aux_sym_dml_sub_if_stmt_token3] = ACTIONS(1),
    [aux_sym_dml_sub_if_stmt_token4] = ACTIONS(1),
    [aux_sym_dml_sub_case_stmt_token1] = ACTIONS(1),
    [aux_sym_dml_sub_case_stmt_token2] = ACTIONS(1),
    [aux_sym_dml_sub_while_stmt_token1] = ACTIONS(1),
    [aux_sym_dml_sub_while_stmt_token2] = ACTIONS(1),
    [aux_sym_dml_sub_while_stmt_token3] = ACTIONS(1),
    [aux_sym_dml_sub_for_each_stmt_token1] = ACTIONS(1),
    [aux_sym_for_each_control_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_for_each_control_token2] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_for_each_control_token3] = ACTIONS(1),
    [aux_sym_post_accum_clause_token1] = ACTIONS(1),
    [aux_sym_limit_clause_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PIPE2] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_all] = ACTIONS(1),
    [aux_sym_accum_type_token1] = ACTIONS(1),
    [aux_sym_accum_type_token3] = ACTIONS(1),
    [aux_sym_accum_type_token5] = ACTIONS(1),
    [aux_sym_accum_type_token6] = ACTIONS(1),
    [aux_sym_accum_type_token8] = ACTIONS(1),
    [aux_sym_accum_type_token11] = ACTIONS(1),
    [aux_sym_accum_type_token12] = ACTIONS(1),
    [aux_sym_accum_type_token13] = ACTIONS(1),
    [aux_sym_accum_type_token14] = ACTIONS(1),
    [aux_sym_accum_type_token15] = ACTIONS(1),
    [aux_sym_accum_type_token16] = ACTIONS(1),
    [aux_sym_accum_type_token17] = ACTIONS(1),
    [aux_sym_accum_type_token19] = ACTIONS(1),
    [aux_sym_accum_type_token20] = ACTIONS(1),
    [aux_sym_accum_type_token21] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_expr_token1] = ACTIONS(1),
    [aux_sym_expr_token2] = ACTIONS(1),
    [aux_sym_expr_token3] = ACTIONS(1),
    [aux_sym_expr_token4] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [aux_sym_condition_token1] = ACTIONS(1),
    [aux_sym_condition_token2] = ACTIONS(1),
    [aux_sym_condition_token3] = ACTIONS(1),
    [aux_sym_condition_token4] = ACTIONS(1),
    [aux_sym_condition_token5] = ACTIONS(1),
    [aux_sym_condition_token6] = ACTIONS(1),
    [aux_sym_condition_token7] = ACTIONS(1),
    [aux_sym_condition_token8] = ACTIONS(1),
    [aux_sym_aggregator_token1] = ACTIONS(1),
    [aux_sym_aggregator_token2] = ACTIONS(1),
    [aux_sym_aggregator_token3] = ACTIONS(1),
    [aux_sym_aggregator_token4] = ACTIONS(1),
    [aux_sym_aggregator_token5] = ACTIONS(1),
    [aux_sym_print_stmt_token1] = ACTIONS(1),
    [aux_sym_print_stmt_token2] = ACTIONS(1),
    [aux_sym_print_expr_token1] = ACTIONS(1),
    [aux_sym_base_type_token1] = ACTIONS(1),
    [aux_sym_base_type_token2] = ACTIONS(1),
    [aux_sym_base_type_token3] = ACTIONS(1),
    [aux_sym_base_type_token4] = ACTIONS(1),
    [aux_sym_base_type_token5] = ACTIONS(1),
    [aux_sym_base_type_token6] = ACTIONS(1),
    [aux_sym_base_type_token7] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [aux_sym_constant_token2] = ACTIONS(1),
    [aux_sym_constant_token3] = ACTIONS(1),
    [sym_digit] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [sym_newline] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_gsql] = STATE(853),
    [sym__definition] = STATE(365),
    [sym_create_query] = STATE(365),
    [sym_interpret_query] = STATE(365),
    [aux_sym_gsql_repeat1] = STATE(365),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_create_query_token1] = ACTIONS(7),
    [aux_sym_interpret_query_token1] = ACTIONS(9),
    [sym_newline] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_typedef] = STATE(3),
    [sym_query_body_stmts] = STATE(4),
    [sym_query_body_stmt] = STATE(762),
    [sym_assign_stmt] = STATE(761),
    [sym_v_set_var_decl_stmt] = STATE(761),
    [sym_l_accum_assign_stmt] = STATE(761),
    [sym_g_accum_assign_stmt] = STATE(761),
    [sym_g_accum_accum_stmt] = STATE(761),
    [sym_func_call_stmt] = STATE(761),
    [sym__select_stmt] = STATE(761),
    [sym_gsql_select_block] = STATE(761),
    [sym_gsql_select_clause] = STATE(619),
    [sym_query_body_case_stmt] = STATE(761),
    [sym_query_body_if_stmt] = STATE(761),
    [sym_query_body_while_stmt] = STATE(761),
    [sym_query_body_for_each_stmt] = STATE(761),
    [sym_decl_stmt] = STATE(761),
    [sym_base_decl_stmt] = STATE(651),
    [sym_accum_decl_stmt] = STATE(651),
    [sym_accum_type] = STATE(467),
    [sym_global_accum_name] = STATE(466),
    [sym_local_accum_name] = STATE(617),
    [sym_print_stmt] = STATE(761),
    [sym_base_type] = STATE(755),
    [aux_sym_query_body_repeat1] = STATE(3),
    [aux_sym_query_body_repeat2] = STATE(4),
    [anon_sym_RBRACE] = ACTIONS(11),
    [aux_sym_typedef_token1] = ACTIONS(13),
    [aux_sym_dml_sub_if_stmt_token1] = ACTIONS(15),
    [aux_sym_dml_sub_case_stmt_token1] = ACTIONS(17),
    [aux_sym_dml_sub_while_stmt_token1] = ACTIONS(19),
    [aux_sym_dml_sub_for_each_stmt_token1] = ACTIONS(21),
    [aux_sym_accum_type_token1] = ACTIONS(23),
    [aux_sym_accum_type_token2] = ACTIONS(25),
    [aux_sym_accum_type_token3] = ACTIONS(25),
    [aux_sym_accum_type_token4] = ACTIONS(25),
    [aux_sym_accum_type_token5] = ACTIONS(25),
    [aux_sym_accum_type_token6] = ACTIONS(27),
    [aux_sym_accum_type_token7] = ACTIONS(27),
    [aux_sym_accum_type_token8] = ACTIONS(29),
    [aux_sym_accum_type_token9] = ACTIONS(29),
    [aux_sym_accum_type_token10] = ACTIONS(29),
    [aux_sym_accum_type_token11] = ACTIONS(29),
    [aux_sym_accum_type_token12] = ACTIONS(29),
    [aux_sym_accum_type_token13] = ACTIONS(31),
    [aux_sym_accum_type_token14] = ACTIONS(33),
    [aux_sym_accum_type_token15] = ACTIONS(33),
    [aux_sym_accum_type_token16] = ACTIONS(35),
    [aux_sym_accum_type_token17] = ACTIONS(37),
    [aux_sym_accum_type_token20] = ACTIONS(39),
    [aux_sym_accum_type_token21] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [aux_sym_print_stmt_token1] = ACTIONS(47),
    [aux_sym_base_type_token1] = ACTIONS(25),
    [aux_sym_base_type_token2] = ACTIONS(25),
    [aux_sym_base_type_token3] = ACTIONS(49),
    [aux_sym_base_type_token4] = ACTIONS(25),
    [aux_sym_base_type_token5] = ACTIONS(25),
    [aux_sym_base_type_token6] = ACTIONS(25),
    [aux_sym_base_type_token7] = ACTIONS(25),
    [sym_name] = ACTIONS(51),
    [sym_newline] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_typedef] = STATE(70),
    [sym_query_body_stmts] = STATE(6),
    [sym_query_body_stmt] = STATE(762),
    [sym_assign_stmt] = STATE(761),
    [sym_v_set_var_decl_stmt] = STATE(761),
    [sym_l_accum_assign_stmt] = STATE(761),
    [sym_g_accum_assign_stmt] = STATE(761),
    [sym_g_accum_accum_stmt] = STATE(761),
    [sym_func_call_stmt] = STATE(761),
    [sym__select_stmt] = STATE(761),
    [sym_gsql_select_block] = STATE(761),
    [sym_gsql_select_clause] = STATE(619),
    [sym_query_body_case_stmt] = STATE(761),
    [sym_query_body_if_stmt] = STATE(761),
    [sym_query_body_while_stmt] = STATE(761),
    [sym_query_body_for_each_stmt] = STATE(761),
    [sym_decl_stmt] = STATE(761),
    [sym_base_decl_stmt] = STATE(651),
    [sym_accum_decl_stmt] = STATE(651),
    [sym_accum_type] = STATE(467),
    [sym_global_accum_name] = STATE(466),
    [sym_local_accum_name] = STATE(617),
    [sym_print_stmt] = STATE(761),
    [sym_base_type] = STATE(755),
    [aux_sym_query_body_repeat1] = STATE(70),
    [aux_sym_query_body_repeat2] = STATE(6),
    [anon_sym_RBRACE] = ACTIONS(53),
    [aux_sym_typedef_token1] = ACTIONS(13),
    [aux_sym_dml_sub_if_stmt_token1] = ACTIONS(15),
    [aux_sym_dml_sub_case_stmt_token1] = ACTIONS(17),
    [aux_sym_dml_sub_while_stmt_token1] = ACTIONS(19),
    [aux_sym_dml_sub_for_each_stmt_token1] = ACTIONS(21),
    [aux_sym_accum_type_token1] = ACTIONS(23),
    [aux_sym_accum_type_token2] = ACTIONS(25),
    [aux_sym_accum_type_token3] = ACTIONS(25),
    [aux_sym_accum_type_token4] = ACTIONS(25),
    [aux_sym_accum_type_token5] = ACTIONS(25),
    [aux_sym_accum_type_token6] = ACTIONS(27),
    [aux_sym_accum_type_token7] = ACTIONS(27),
    [aux_sym_accum_type_token8] = ACTIONS(29),
    [aux_sym_accum_type_token9] = ACTIONS(29),
    [aux_sym_accum_type_token10] = ACTIONS(29),
    [aux_sym_accum_type_token11] = ACTIONS(29),
    [aux_sym_accum_type_token12] = ACTIONS(29),
    [aux_sym_accum_type_token13] = ACTIONS(31),
    [aux_sym_accum_type_token14] = ACTIONS(33),
    [aux_sym_accum_type_token15] = ACTIONS(33),
    [aux_sym_accum_type_token16] = ACTIONS(35),
    [aux_sym_accum_type_token17] = ACTIONS(37),
    [aux_sym_accum_type_token20] = ACTIONS(39),
    [aux_sym_accum_type_token21] = ACTIONS(41),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
    [aux_sym_print_stmt_token1] = ACTIONS(47),
    [aux_sym_base_type_token1] = ACTIONS(25),
    [aux_sym_base_type_token2] = ACTIONS(25),
    [aux_sym_base_type_token3] = ACTIONS(49),
    [aux_sym_base_type_token4] = ACTIONS(25),
    [aux_sym_base_type_token5] = ACTIONS(25),
    [aux_sym_base_type_token6] = ACTIONS(25),
    [aux_sym_base_type_token7] = ACTIONS(25),
    [sym_name] = ACTIONS(51),
    [sym_newline] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 30,
    ACTIONS(15), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(17), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_accum_type_token1,
    ACTIONS(31), 1,
      aux_sym_accum_type_token13,
    ACTIONS(35), 1,
      aux_sym_accum_type_token16,
    ACTIONS(37), 1,
      aux_sym_accum_type_token17,
    ACTIONS(39), 1,
      aux_sym_accum_type_token20,
    ACTIONS(41), 1,
      aux_sym_accum_type_token21,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      aux_sym_print_stmt_token1,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(51), 1,
      sym_name,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(466), 1,
      sym_global_accum_name,
    STATE(467), 1,
      sym_accum_type,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(619), 1,
      sym_gsql_select_clause,
    STATE(755), 1,
      sym_base_type,
    STATE(762), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(33), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(5), 2,
      sym_query_body_stmts,
      aux_sym_query_body_repeat2,
    STATE(651), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
    STATE(761), 14,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_gsql_select_block,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [123] = 30,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(60), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(63), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(66), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(69), 1,
      aux_sym_accum_type_token1,
    ACTIONS(81), 1,
      aux_sym_accum_type_token13,
    ACTIONS(87), 1,
      aux_sym_accum_type_token16,
    ACTIONS(90), 1,
      aux_sym_accum_type_token17,
    ACTIONS(93), 1,
      aux_sym_accum_type_token20,
    ACTIONS(96), 1,
      aux_sym_accum_type_token21,
    ACTIONS(99), 1,
      anon_sym_AT_AT,
    ACTIONS(102), 1,
      anon_sym_AT,
    ACTIONS(105), 1,
      aux_sym_print_stmt_token1,
    ACTIONS(108), 1,
      aux_sym_base_type_token3,
    ACTIONS(111), 1,
      sym_name,
    STATE(466), 1,
      sym_global_accum_name,
    STATE(467), 1,
      sym_accum_type,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(619), 1,
      sym_gsql_select_clause,
    STATE(755), 1,
      sym_base_type,
    STATE(762), 1,
      sym_query_body_stmt,
    ACTIONS(75), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(84), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(5), 2,
      sym_query_body_stmts,
      aux_sym_query_body_repeat2,
    STATE(651), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(78), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(72), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
    STATE(761), 14,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_gsql_select_block,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [246] = 30,
    ACTIONS(15), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(17), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_accum_type_token1,
    ACTIONS(31), 1,
      aux_sym_accum_type_token13,
    ACTIONS(35), 1,
      aux_sym_accum_type_token16,
    ACTIONS(37), 1,
      aux_sym_accum_type_token17,
    ACTIONS(39), 1,
      aux_sym_accum_type_token20,
    ACTIONS(41), 1,
      aux_sym_accum_type_token21,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      aux_sym_print_stmt_token1,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(51), 1,
      sym_name,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(466), 1,
      sym_global_accum_name,
    STATE(467), 1,
      sym_accum_type,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(619), 1,
      sym_gsql_select_clause,
    STATE(755), 1,
      sym_base_type,
    STATE(762), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(33), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(5), 2,
      sym_query_body_stmts,
      aux_sym_query_body_repeat2,
    STATE(651), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
    STATE(761), 14,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_gsql_select_block,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [369] = 29,
    ACTIONS(17), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_accum_type_token1,
    ACTIONS(31), 1,
      aux_sym_accum_type_token13,
    ACTIONS(35), 1,
      aux_sym_accum_type_token16,
    ACTIONS(37), 1,
      aux_sym_accum_type_token17,
    ACTIONS(39), 1,
      aux_sym_accum_type_token20,
    ACTIONS(41), 1,
      aux_sym_accum_type_token21,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      aux_sym_print_stmt_token1,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(51), 1,
      sym_name,
    ACTIONS(116), 1,
      aux_sym_dml_sub_if_stmt_token1,
    STATE(466), 1,
      sym_global_accum_name,
    STATE(467), 1,
      sym_accum_type,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(619), 1,
      sym_gsql_select_clause,
    STATE(755), 1,
      sym_base_type,
    STATE(790), 1,
      sym_query_body_stmt,
    STATE(827), 1,
      sym_query_body_stmts,
    ACTIONS(27), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(33), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(651), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
    STATE(761), 14,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_gsql_select_block,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [488] = 29,
    ACTIONS(15), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(17), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_accum_type_token1,
    ACTIONS(31), 1,
      aux_sym_accum_type_token13,
    ACTIONS(35), 1,
      aux_sym_accum_type_token16,
    ACTIONS(37), 1,
      aux_sym_accum_type_token17,
    ACTIONS(39), 1,
      aux_sym_accum_type_token20,
    ACTIONS(41), 1,
      aux_sym_accum_type_token21,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      aux_sym_print_stmt_token1,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(51), 1,
      sym_name,
    STATE(466), 1,
      sym_global_accum_name,
    STATE(467), 1,
      sym_accum_type,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(619), 1,
      sym_gsql_select_clause,
    STATE(676), 1,
      sym_query_body_stmts,
    STATE(755), 1,
      sym_base_type,
    STATE(790), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(33), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(651), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
    STATE(761), 14,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_gsql_select_block,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [607] = 29,
    ACTIONS(15), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(17), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_accum_type_token1,
    ACTIONS(31), 1,
      aux_sym_accum_type_token13,
    ACTIONS(35), 1,
      aux_sym_accum_type_token16,
    ACTIONS(37), 1,
      aux_sym_accum_type_token17,
    ACTIONS(39), 1,
      aux_sym_accum_type_token20,
    ACTIONS(41), 1,
      aux_sym_accum_type_token21,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      aux_sym_print_stmt_token1,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(51), 1,
      sym_name,
    STATE(466), 1,
      sym_global_accum_name,
    STATE(467), 1,
      sym_accum_type,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(619), 1,
      sym_gsql_select_clause,
    STATE(755), 1,
      sym_base_type,
    STATE(790), 1,
      sym_query_body_stmt,
    STATE(804), 1,
      sym_query_body_stmts,
    ACTIONS(27), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(33), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(651), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
    STATE(761), 14,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_gsql_select_block,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [726] = 29,
    ACTIONS(15), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(17), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_accum_type_token1,
    ACTIONS(31), 1,
      aux_sym_accum_type_token13,
    ACTIONS(35), 1,
      aux_sym_accum_type_token16,
    ACTIONS(37), 1,
      aux_sym_accum_type_token17,
    ACTIONS(39), 1,
      aux_sym_accum_type_token20,
    ACTIONS(41), 1,
      aux_sym_accum_type_token21,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      aux_sym_print_stmt_token1,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(51), 1,
      sym_name,
    STATE(466), 1,
      sym_global_accum_name,
    STATE(467), 1,
      sym_accum_type,
    STATE(543), 1,
      sym_query_body_stmts,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(619), 1,
      sym_gsql_select_clause,
    STATE(755), 1,
      sym_base_type,
    STATE(790), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(33), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(651), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
    STATE(761), 14,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_gsql_select_block,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [845] = 29,
    ACTIONS(15), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(17), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_accum_type_token1,
    ACTIONS(31), 1,
      aux_sym_accum_type_token13,
    ACTIONS(35), 1,
      aux_sym_accum_type_token16,
    ACTIONS(37), 1,
      aux_sym_accum_type_token17,
    ACTIONS(39), 1,
      aux_sym_accum_type_token20,
    ACTIONS(41), 1,
      aux_sym_accum_type_token21,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      aux_sym_print_stmt_token1,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(51), 1,
      sym_name,
    STATE(466), 1,
      sym_global_accum_name,
    STATE(467), 1,
      sym_accum_type,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(619), 1,
      sym_gsql_select_clause,
    STATE(755), 1,
      sym_base_type,
    STATE(757), 1,
      sym_query_body_stmts,
    STATE(790), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(33), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(651), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
    STATE(761), 14,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_gsql_select_block,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [964] = 29,
    ACTIONS(15), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(17), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_accum_type_token1,
    ACTIONS(31), 1,
      aux_sym_accum_type_token13,
    ACTIONS(35), 1,
      aux_sym_accum_type_token16,
    ACTIONS(37), 1,
      aux_sym_accum_type_token17,
    ACTIONS(39), 1,
      aux_sym_accum_type_token20,
    ACTIONS(41), 1,
      aux_sym_accum_type_token21,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      aux_sym_print_stmt_token1,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(51), 1,
      sym_name,
    STATE(466), 1,
      sym_global_accum_name,
    STATE(467), 1,
      sym_accum_type,
    STATE(517), 1,
      sym_query_body_stmts,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(619), 1,
      sym_gsql_select_clause,
    STATE(755), 1,
      sym_base_type,
    STATE(790), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(33), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(651), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
    STATE(761), 14,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_gsql_select_block,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [1083] = 29,
    ACTIONS(15), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(17), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_accum_type_token1,
    ACTIONS(31), 1,
      aux_sym_accum_type_token13,
    ACTIONS(35), 1,
      aux_sym_accum_type_token16,
    ACTIONS(37), 1,
      aux_sym_accum_type_token17,
    ACTIONS(39), 1,
      aux_sym_accum_type_token20,
    ACTIONS(41), 1,
      aux_sym_accum_type_token21,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      aux_sym_print_stmt_token1,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(51), 1,
      sym_name,
    STATE(466), 1,
      sym_global_accum_name,
    STATE(467), 1,
      sym_accum_type,
    STATE(498), 1,
      sym_query_body_stmts,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(619), 1,
      sym_gsql_select_clause,
    STATE(755), 1,
      sym_base_type,
    STATE(790), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(33), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(651), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
    STATE(761), 14,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_gsql_select_block,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [1202] = 29,
    ACTIONS(15), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(17), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_accum_type_token1,
    ACTIONS(31), 1,
      aux_sym_accum_type_token13,
    ACTIONS(35), 1,
      aux_sym_accum_type_token16,
    ACTIONS(37), 1,
      aux_sym_accum_type_token17,
    ACTIONS(39), 1,
      aux_sym_accum_type_token20,
    ACTIONS(41), 1,
      aux_sym_accum_type_token21,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      aux_sym_print_stmt_token1,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(51), 1,
      sym_name,
    STATE(466), 1,
      sym_global_accum_name,
    STATE(467), 1,
      sym_accum_type,
    STATE(608), 1,
      sym_query_body_stmts,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(619), 1,
      sym_gsql_select_clause,
    STATE(755), 1,
      sym_base_type,
    STATE(790), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(33), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(651), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
    STATE(761), 14,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_gsql_select_block,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [1321] = 29,
    ACTIONS(15), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(17), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_accum_type_token1,
    ACTIONS(31), 1,
      aux_sym_accum_type_token13,
    ACTIONS(35), 1,
      aux_sym_accum_type_token16,
    ACTIONS(37), 1,
      aux_sym_accum_type_token17,
    ACTIONS(39), 1,
      aux_sym_accum_type_token20,
    ACTIONS(41), 1,
      aux_sym_accum_type_token21,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      aux_sym_print_stmt_token1,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(51), 1,
      sym_name,
    STATE(466), 1,
      sym_global_accum_name,
    STATE(467), 1,
      sym_accum_type,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(619), 1,
      sym_gsql_select_clause,
    STATE(666), 1,
      sym_query_body_stmts,
    STATE(755), 1,
      sym_base_type,
    STATE(790), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(33), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(651), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
    STATE(761), 14,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_gsql_select_block,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [1440] = 29,
    ACTIONS(17), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_accum_type_token1,
    ACTIONS(31), 1,
      aux_sym_accum_type_token13,
    ACTIONS(35), 1,
      aux_sym_accum_type_token16,
    ACTIONS(37), 1,
      aux_sym_accum_type_token17,
    ACTIONS(39), 1,
      aux_sym_accum_type_token20,
    ACTIONS(41), 1,
      aux_sym_accum_type_token21,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      aux_sym_print_stmt_token1,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(51), 1,
      sym_name,
    ACTIONS(116), 1,
      aux_sym_dml_sub_if_stmt_token1,
    STATE(466), 1,
      sym_global_accum_name,
    STATE(467), 1,
      sym_accum_type,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(619), 1,
      sym_gsql_select_clause,
    STATE(737), 1,
      sym_query_body_stmts,
    STATE(755), 1,
      sym_base_type,
    STATE(790), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(33), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(651), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
    STATE(761), 14,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_gsql_select_block,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [1559] = 29,
    ACTIONS(15), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(17), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_accum_type_token1,
    ACTIONS(31), 1,
      aux_sym_accum_type_token13,
    ACTIONS(35), 1,
      aux_sym_accum_type_token16,
    ACTIONS(37), 1,
      aux_sym_accum_type_token17,
    ACTIONS(39), 1,
      aux_sym_accum_type_token20,
    ACTIONS(41), 1,
      aux_sym_accum_type_token21,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      aux_sym_print_stmt_token1,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(51), 1,
      sym_name,
    STATE(466), 1,
      sym_global_accum_name,
    STATE(467), 1,
      sym_accum_type,
    STATE(516), 1,
      sym_query_body_stmts,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(619), 1,
      sym_gsql_select_clause,
    STATE(755), 1,
      sym_base_type,
    STATE(790), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(33), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(651), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
    STATE(761), 14,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_gsql_select_block,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [1678] = 29,
    ACTIONS(15), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(17), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_accum_type_token1,
    ACTIONS(31), 1,
      aux_sym_accum_type_token13,
    ACTIONS(35), 1,
      aux_sym_accum_type_token16,
    ACTIONS(37), 1,
      aux_sym_accum_type_token17,
    ACTIONS(39), 1,
      aux_sym_accum_type_token20,
    ACTIONS(41), 1,
      aux_sym_accum_type_token21,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      aux_sym_print_stmt_token1,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(51), 1,
      sym_name,
    STATE(466), 1,
      sym_global_accum_name,
    STATE(467), 1,
      sym_accum_type,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(619), 1,
      sym_gsql_select_clause,
    STATE(656), 1,
      sym_query_body_stmts,
    STATE(755), 1,
      sym_base_type,
    STATE(790), 1,
      sym_query_body_stmt,
    ACTIONS(27), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(33), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(651), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
    STATE(761), 14,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym__select_stmt,
      sym_gsql_select_block,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [1797] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(120), 6,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(118), 41,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_DOT,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      anon_sym_PLUS_EQ,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1854] = 6,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(126), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(122), 38,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1915] = 4,
    STATE(29), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(126), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(122), 39,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1971] = 5,
    ACTIONS(134), 1,
      anon_sym_DOT,
    STATE(22), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(132), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(130), 38,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2029] = 4,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(141), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(137), 39,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2085] = 6,
    ACTIONS(147), 1,
      anon_sym_DOT,
    STATE(45), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(145), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(143), 35,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2145] = 5,
    ACTIONS(155), 1,
      anon_sym_DOT,
    STATE(22), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(153), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(151), 38,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2203] = 5,
    ACTIONS(155), 1,
      anon_sym_DOT,
    STATE(25), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(157), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(149), 38,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2261] = 6,
    ACTIONS(155), 1,
      anon_sym_DOT,
    STATE(25), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(145), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(143), 35,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2321] = 5,
    ACTIONS(159), 1,
      anon_sym_DOT,
    STATE(28), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(141), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(137), 38,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2379] = 4,
    STATE(28), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(164), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(162), 39,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2435] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(168), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(166), 39,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2488] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(172), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(170), 39,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2541] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(176), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(174), 39,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2594] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(141), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(137), 39,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2647] = 4,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(157), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(149), 38,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2702] = 5,
    ACTIONS(184), 1,
      sym_digit,
    STATE(35), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(182), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(180), 37,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2758] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(187), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(145), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(143), 35,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2812] = 6,
    ACTIONS(193), 1,
      anon_sym_DOT,
    ACTIONS(195), 1,
      sym_digit,
    STATE(35), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(191), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(189), 36,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2870] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(199), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(197), 38,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2922] = 6,
    ACTIONS(195), 1,
      sym_digit,
    ACTIONS(207), 1,
      anon_sym_DOT,
    STATE(35), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(204), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(201), 36,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2980] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(157), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(149), 38,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3032] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(199), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(197), 38,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3084] = 5,
    ACTIONS(195), 1,
      sym_digit,
    STATE(35), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(212), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(209), 36,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3139] = 5,
    ACTIONS(195), 1,
      sym_digit,
    STATE(35), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(217), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(215), 36,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3194] = 5,
    ACTIONS(219), 1,
      anon_sym_DOT,
    STATE(44), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(132), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(130), 36,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3249] = 5,
    ACTIONS(147), 1,
      anon_sym_DOT,
    STATE(44), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(224), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(222), 36,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3304] = 5,
    ACTIONS(195), 1,
      sym_digit,
    STATE(35), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(229), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(226), 36,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3359] = 5,
    ACTIONS(195), 1,
      sym_digit,
    STATE(35), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(234), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(232), 36,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3414] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(172), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(170), 37,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3464] = 4,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(238), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(236), 36,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3516] = 4,
    ACTIONS(246), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(244), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(242), 36,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3568] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(176), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(174), 37,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3618] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(250), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(248), 36,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3667] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(254), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(252), 36,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3716] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(258), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(256), 36,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3765] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(262), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(260), 36,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3814] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(266), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(264), 36,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3863] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(270), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(268), 36,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3912] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(274), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(272), 36,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3961] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(278), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(276), 36,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4010] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(282), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(280), 36,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4059] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(286), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(284), 36,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4108] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(238), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(236), 36,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4157] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(290), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(288), 36,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4206] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(294), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(292), 36,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4255] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(298), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(296), 36,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4304] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(302), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(300), 36,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4353] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(145), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(143), 36,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4402] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(306), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(304), 36,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4451] = 30,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(308), 1,
      anon_sym_LPAREN,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(314), 1,
      aux_sym_gsql_select_clause_token1,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(328), 1,
      sym_name,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(257), 1,
      sym_expr,
    STATE(442), 1,
      sym_simple_set,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(619), 1,
      sym_gsql_select_clause,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    STATE(695), 3,
      sym_seed_set,
      sym__select_stmt,
      sym_gsql_select_block,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [4553] = 5,
    ACTIONS(338), 1,
      aux_sym_typedef_token1,
    ACTIONS(336), 2,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
    STATE(70), 2,
      sym_typedef,
      aux_sym_query_body_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(341), 33,
      aux_sym_dml_sub_if_stmt_token1,
      aux_sym_dml_sub_case_stmt_token1,
      aux_sym_dml_sub_while_stmt_token1,
      aux_sym_dml_sub_for_each_stmt_token1,
      aux_sym_accum_type_token1,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
      aux_sym_accum_type_token13,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
      aux_sym_accum_type_token16,
      aux_sym_accum_type_token17,
      aux_sym_accum_type_token20,
      aux_sym_accum_type_token21,
      anon_sym_AT,
      aux_sym_print_stmt_token1,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token3,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
      sym_name,
  [4605] = 7,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      anon_sym_DOT,
    STATE(45), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(145), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(143), 26,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_post_accum_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4659] = 3,
    ACTIONS(347), 2,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(349), 34,
      aux_sym_typedef_token1,
      aux_sym_dml_sub_if_stmt_token1,
      aux_sym_dml_sub_case_stmt_token1,
      aux_sym_dml_sub_while_stmt_token1,
      aux_sym_dml_sub_for_each_stmt_token1,
      aux_sym_accum_type_token1,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
      aux_sym_accum_type_token13,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
      aux_sym_accum_type_token16,
      aux_sym_accum_type_token17,
      aux_sym_accum_type_token20,
      aux_sym_accum_type_token21,
      anon_sym_AT,
      aux_sym_print_stmt_token1,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token3,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
      sym_name,
  [4705] = 3,
    ACTIONS(351), 2,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(353), 34,
      aux_sym_typedef_token1,
      aux_sym_dml_sub_if_stmt_token1,
      aux_sym_dml_sub_case_stmt_token1,
      aux_sym_dml_sub_while_stmt_token1,
      aux_sym_dml_sub_for_each_stmt_token1,
      aux_sym_accum_type_token1,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
      aux_sym_accum_type_token13,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
      aux_sym_accum_type_token16,
      aux_sym_accum_type_token17,
      aux_sym_accum_type_token20,
      aux_sym_accum_type_token21,
      anon_sym_AT,
      aux_sym_print_stmt_token1,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token3,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
      sym_name,
  [4751] = 8,
    ACTIONS(145), 1,
      anon_sym_SLASH,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_LT,
    STATE(45), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(143), 27,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token5,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [4806] = 3,
    ACTIONS(357), 2,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(359), 33,
      aux_sym_dml_sub_if_stmt_token1,
      aux_sym_dml_sub_case_stmt_token1,
      aux_sym_dml_sub_while_stmt_token1,
      aux_sym_dml_sub_for_each_stmt_token1,
      aux_sym_accum_type_token1,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
      aux_sym_accum_type_token13,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
      aux_sym_accum_type_token16,
      aux_sym_accum_type_token17,
      aux_sym_accum_type_token20,
      aux_sym_accum_type_token21,
      anon_sym_AT,
      aux_sym_print_stmt_token1,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token3,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
      sym_name,
  [4851] = 16,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(361), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(363), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(365), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(367), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(369), 1,
      sym_name,
    STATE(348), 1,
      sym_dml_sub_stmt,
    STATE(579), 1,
      sym_global_accum_name,
    STATE(598), 1,
      sym_dml_sub_stmt_list,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(725), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
    STATE(357), 11,
      sym_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_l_accum_accum_stmt,
      sym_attr_accum_stmt,
      sym_v_accum_func_call,
      sym_local_var_decl_stmt,
      sym_dml_sub_if_stmt,
      sym_dml_sub_case_stmt,
      sym_dml_sub_while_stmt,
      sym_dml_sub_for_each_stmt,
  [4921] = 16,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(361), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(363), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(365), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(367), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(369), 1,
      sym_name,
    STATE(348), 1,
      sym_dml_sub_stmt,
    STATE(579), 1,
      sym_global_accum_name,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(707), 1,
      sym_dml_sub_stmt_list,
    STATE(725), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
    STATE(357), 11,
      sym_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_l_accum_accum_stmt,
      sym_attr_accum_stmt,
      sym_v_accum_func_call,
      sym_local_var_decl_stmt,
      sym_dml_sub_if_stmt,
      sym_dml_sub_case_stmt,
      sym_dml_sub_while_stmt,
      sym_dml_sub_for_each_stmt,
  [4991] = 16,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(361), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(363), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(365), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(367), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(369), 1,
      sym_name,
    STATE(348), 1,
      sym_dml_sub_stmt,
    STATE(571), 1,
      sym_dml_sub_stmt_list,
    STATE(579), 1,
      sym_global_accum_name,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(725), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
    STATE(357), 11,
      sym_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_l_accum_accum_stmt,
      sym_attr_accum_stmt,
      sym_v_accum_func_call,
      sym_local_var_decl_stmt,
      sym_dml_sub_if_stmt,
      sym_dml_sub_case_stmt,
      sym_dml_sub_while_stmt,
      sym_dml_sub_for_each_stmt,
  [5061] = 16,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(363), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(365), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(367), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(369), 1,
      sym_name,
    ACTIONS(371), 1,
      aux_sym_dml_sub_if_stmt_token1,
    STATE(348), 1,
      sym_dml_sub_stmt,
    STATE(579), 1,
      sym_global_accum_name,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(682), 1,
      sym_dml_sub_stmt_list,
    STATE(725), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
    STATE(357), 11,
      sym_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_l_accum_accum_stmt,
      sym_attr_accum_stmt,
      sym_v_accum_func_call,
      sym_local_var_decl_stmt,
      sym_dml_sub_if_stmt,
      sym_dml_sub_case_stmt,
      sym_dml_sub_while_stmt,
      sym_dml_sub_for_each_stmt,
  [5131] = 16,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(361), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(363), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(365), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(367), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(369), 1,
      sym_name,
    STATE(348), 1,
      sym_dml_sub_stmt,
    STATE(527), 1,
      sym_dml_sub_stmt_list,
    STATE(579), 1,
      sym_global_accum_name,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(725), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
    STATE(357), 11,
      sym_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_l_accum_accum_stmt,
      sym_attr_accum_stmt,
      sym_v_accum_func_call,
      sym_local_var_decl_stmt,
      sym_dml_sub_if_stmt,
      sym_dml_sub_case_stmt,
      sym_dml_sub_while_stmt,
      sym_dml_sub_for_each_stmt,
  [5201] = 16,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(361), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(363), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(365), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(367), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(369), 1,
      sym_name,
    STATE(348), 1,
      sym_dml_sub_stmt,
    STATE(579), 1,
      sym_global_accum_name,
    STATE(581), 1,
      sym_dml_sub_stmt_list,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(725), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
    STATE(357), 11,
      sym_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_l_accum_accum_stmt,
      sym_attr_accum_stmt,
      sym_v_accum_func_call,
      sym_local_var_decl_stmt,
      sym_dml_sub_if_stmt,
      sym_dml_sub_case_stmt,
      sym_dml_sub_while_stmt,
      sym_dml_sub_for_each_stmt,
  [5271] = 29,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LBRACK,
    ACTIONS(379), 1,
      anon_sym_DASH,
    ACTIONS(381), 1,
      anon_sym_AT_AT,
    ACTIONS(383), 1,
      aux_sym_expr_token2,
    ACTIONS(385), 1,
      aux_sym_expr_token4,
    ACTIONS(387), 1,
      aux_sym_condition_token1,
    ACTIONS(391), 1,
      sym_name,
    ACTIONS(395), 1,
      sym_digit,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      anon_sym_SQUOTE,
    STATE(178), 1,
      sym_name_dot,
    STATE(180), 1,
      sym_global_accum_name,
    STATE(204), 1,
      aux_sym_accum_type_repeat1,
    STATE(205), 1,
      sym_set_bag_expr,
    STATE(206), 1,
      sym_expr,
    STATE(584), 1,
      sym_condition,
    STATE(629), 1,
      sym_local_accum_name,
    STATE(638), 1,
      sym_arg_list,
    STATE(857), 1,
      sym_aggregator,
    ACTIONS(389), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(223), 2,
      sym_integer,
      sym_real,
    STATE(224), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(226), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [5367] = 16,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(361), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(363), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(365), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(367), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(369), 1,
      sym_name,
    STATE(348), 1,
      sym_dml_sub_stmt,
    STATE(579), 1,
      sym_global_accum_name,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(703), 1,
      sym_dml_sub_stmt_list,
    STATE(725), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
    STATE(357), 11,
      sym_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_l_accum_accum_stmt,
      sym_attr_accum_stmt,
      sym_v_accum_func_call,
      sym_local_var_decl_stmt,
      sym_dml_sub_if_stmt,
      sym_dml_sub_case_stmt,
      sym_dml_sub_while_stmt,
      sym_dml_sub_for_each_stmt,
  [5437] = 16,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(361), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(363), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(365), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(367), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(369), 1,
      sym_name,
    STATE(348), 1,
      sym_dml_sub_stmt,
    STATE(579), 1,
      sym_global_accum_name,
    STATE(583), 1,
      sym_dml_sub_stmt_list,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(725), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
    STATE(357), 11,
      sym_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_l_accum_accum_stmt,
      sym_attr_accum_stmt,
      sym_v_accum_func_call,
      sym_local_var_decl_stmt,
      sym_dml_sub_if_stmt,
      sym_dml_sub_case_stmt,
      sym_dml_sub_while_stmt,
      sym_dml_sub_for_each_stmt,
  [5507] = 29,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LBRACK,
    ACTIONS(379), 1,
      anon_sym_DASH,
    ACTIONS(381), 1,
      anon_sym_AT_AT,
    ACTIONS(383), 1,
      aux_sym_expr_token2,
    ACTIONS(385), 1,
      aux_sym_expr_token4,
    ACTIONS(387), 1,
      aux_sym_condition_token1,
    ACTIONS(391), 1,
      sym_name,
    ACTIONS(395), 1,
      sym_digit,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      anon_sym_SQUOTE,
    STATE(178), 1,
      sym_name_dot,
    STATE(180), 1,
      sym_global_accum_name,
    STATE(198), 1,
      sym_expr,
    STATE(204), 1,
      aux_sym_accum_type_repeat1,
    STATE(205), 1,
      sym_set_bag_expr,
    STATE(584), 1,
      sym_condition,
    STATE(599), 1,
      sym_arg_list,
    STATE(629), 1,
      sym_local_accum_name,
    STATE(857), 1,
      sym_aggregator,
    ACTIONS(389), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(223), 2,
      sym_integer,
      sym_real,
    STATE(224), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(226), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [5603] = 16,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(361), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(363), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(365), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(367), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(369), 1,
      sym_name,
    STATE(348), 1,
      sym_dml_sub_stmt,
    STATE(579), 1,
      sym_global_accum_name,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(710), 1,
      sym_dml_sub_stmt_list,
    STATE(725), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
    STATE(357), 11,
      sym_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_l_accum_accum_stmt,
      sym_attr_accum_stmt,
      sym_v_accum_func_call,
      sym_local_var_decl_stmt,
      sym_dml_sub_if_stmt,
      sym_dml_sub_case_stmt,
      sym_dml_sub_while_stmt,
      sym_dml_sub_for_each_stmt,
  [5673] = 16,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(361), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(363), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(365), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(367), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(369), 1,
      sym_name,
    STATE(348), 1,
      sym_dml_sub_stmt,
    STATE(579), 1,
      sym_global_accum_name,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(668), 1,
      sym_dml_sub_stmt_list,
    STATE(725), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
    STATE(357), 11,
      sym_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_l_accum_accum_stmt,
      sym_attr_accum_stmt,
      sym_v_accum_func_call,
      sym_local_var_decl_stmt,
      sym_dml_sub_if_stmt,
      sym_dml_sub_case_stmt,
      sym_dml_sub_while_stmt,
      sym_dml_sub_for_each_stmt,
  [5743] = 16,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(363), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(365), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(367), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(369), 1,
      sym_name,
    ACTIONS(371), 1,
      aux_sym_dml_sub_if_stmt_token1,
    STATE(348), 1,
      sym_dml_sub_stmt,
    STATE(579), 1,
      sym_global_accum_name,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(664), 1,
      sym_dml_sub_stmt_list,
    STATE(725), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
    STATE(357), 11,
      sym_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_l_accum_accum_stmt,
      sym_attr_accum_stmt,
      sym_v_accum_func_call,
      sym_local_var_decl_stmt,
      sym_dml_sub_if_stmt,
      sym_dml_sub_case_stmt,
      sym_dml_sub_while_stmt,
      sym_dml_sub_for_each_stmt,
  [5813] = 16,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(361), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(363), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(365), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(367), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(369), 1,
      sym_name,
    STATE(348), 1,
      sym_dml_sub_stmt,
    STATE(576), 1,
      sym_dml_sub_stmt_list,
    STATE(579), 1,
      sym_global_accum_name,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(725), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
    STATE(357), 11,
      sym_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_l_accum_accum_stmt,
      sym_attr_accum_stmt,
      sym_v_accum_func_call,
      sym_local_var_decl_stmt,
      sym_dml_sub_if_stmt,
      sym_dml_sub_case_stmt,
      sym_dml_sub_while_stmt,
      sym_dml_sub_for_each_stmt,
  [5883] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(277), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(686), 1,
      sym_arg_list,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [5974] = 28,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      aux_sym_condition_token1,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_DASH,
    ACTIONS(413), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(138), 1,
      sym_expr,
    STATE(460), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    ACTIONS(411), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [6067] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(277), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(821), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [6158] = 28,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      aux_sym_condition_token1,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_DASH,
    ACTIONS(413), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(138), 1,
      sym_expr,
    STATE(542), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    ACTIONS(411), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [6251] = 27,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(375), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LBRACK,
    ACTIONS(381), 1,
      anon_sym_AT_AT,
    ACTIONS(383), 1,
      aux_sym_expr_token2,
    ACTIONS(385), 1,
      aux_sym_expr_token4,
    ACTIONS(395), 1,
      sym_digit,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      anon_sym_SQUOTE,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      anon_sym_DASH,
    ACTIONS(421), 1,
      sym_name,
    STATE(178), 1,
      sym_name_dot,
    STATE(180), 1,
      sym_global_accum_name,
    STATE(204), 1,
      aux_sym_accum_type_repeat1,
    STATE(205), 1,
      sym_set_bag_expr,
    STATE(270), 1,
      sym_expr,
    STATE(440), 1,
      sym_simple_set,
    STATE(599), 1,
      sym_arg_list,
    STATE(629), 1,
      sym_local_accum_name,
    STATE(857), 1,
      sym_aggregator,
    STATE(223), 2,
      sym_integer,
      sym_real,
    STATE(224), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(226), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [6342] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(277), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(822), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [6433] = 28,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      aux_sym_condition_token1,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_DASH,
    ACTIONS(413), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(138), 1,
      sym_expr,
    STATE(563), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    ACTIONS(411), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [6526] = 28,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      aux_sym_condition_token1,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_DASH,
    ACTIONS(413), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(138), 1,
      sym_expr,
    STATE(468), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    ACTIONS(411), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [6619] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(277), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(842), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [6710] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(260), 1,
      sym_expr,
    STATE(405), 1,
      sym_v_expr_set,
    STATE(457), 1,
      sym_print_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [6801] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(277), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(661), 1,
      sym_arg_list,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [6892] = 28,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      aux_sym_condition_token1,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_DASH,
    ACTIONS(413), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(138), 1,
      sym_expr,
    STATE(580), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    ACTIONS(411), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [6985] = 28,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      aux_sym_condition_token1,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_DASH,
    ACTIONS(413), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(138), 1,
      sym_expr,
    STATE(492), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    ACTIONS(411), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [7078] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(277), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(820), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [7169] = 28,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      aux_sym_condition_token1,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_DASH,
    ACTIONS(413), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(138), 1,
      sym_expr,
    STATE(319), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    ACTIONS(411), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [7262] = 28,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      aux_sym_condition_token1,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_DASH,
    ACTIONS(413), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(138), 1,
      sym_expr,
    STATE(431), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    ACTIONS(411), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [7355] = 28,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      aux_sym_condition_token1,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_DASH,
    ACTIONS(413), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(138), 1,
      sym_expr,
    STATE(387), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    ACTIONS(411), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [7448] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(260), 1,
      sym_expr,
    STATE(405), 1,
      sym_v_expr_set,
    STATE(423), 1,
      sym_print_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [7539] = 28,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      aux_sym_condition_token1,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_DASH,
    ACTIONS(413), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(138), 1,
      sym_expr,
    STATE(493), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    ACTIONS(411), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [7632] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(277), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_arg_list,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [7723] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(277), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(825), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [7814] = 28,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      aux_sym_condition_token1,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_DASH,
    ACTIONS(413), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(138), 1,
      sym_expr,
    STATE(557), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    ACTIONS(411), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [7907] = 15,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(361), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(363), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(365), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(367), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(369), 1,
      sym_name,
    STATE(376), 1,
      sym_dml_sub_stmt,
    STATE(579), 1,
      sym_global_accum_name,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(725), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
    STATE(357), 11,
      sym_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_l_accum_accum_stmt,
      sym_attr_accum_stmt,
      sym_v_accum_func_call,
      sym_local_var_decl_stmt,
      sym_dml_sub_if_stmt,
      sym_dml_sub_case_stmt,
      sym_dml_sub_while_stmt,
      sym_dml_sub_for_each_stmt,
  [7974] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(277), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(689), 1,
      sym_arg_list,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [8065] = 28,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      aux_sym_condition_token1,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_DASH,
    ACTIONS(413), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(138), 1,
      sym_expr,
    STATE(487), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    ACTIONS(411), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [8158] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(277), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(826), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [8249] = 28,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      aux_sym_condition_token1,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_DASH,
    ACTIONS(413), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(138), 1,
      sym_expr,
    STATE(515), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    ACTIONS(411), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [8342] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(277), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(783), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [8433] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    ACTIONS(441), 1,
      aux_sym_dml_sub_case_stmt_token2,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(307), 1,
      sym_expr,
    STATE(461), 1,
      aux_sym_query_body_case_stmt_repeat1,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [8524] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(277), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(835), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [8615] = 27,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(375), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LBRACK,
    ACTIONS(381), 1,
      anon_sym_AT_AT,
    ACTIONS(383), 1,
      aux_sym_expr_token2,
    ACTIONS(385), 1,
      aux_sym_expr_token4,
    ACTIONS(395), 1,
      sym_digit,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      anon_sym_SQUOTE,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      anon_sym_DASH,
    ACTIONS(421), 1,
      sym_name,
    STATE(178), 1,
      sym_name_dot,
    STATE(180), 1,
      sym_global_accum_name,
    STATE(204), 1,
      aux_sym_accum_type_repeat1,
    STATE(205), 1,
      sym_set_bag_expr,
    STATE(274), 1,
      sym_expr,
    STATE(440), 1,
      sym_simple_set,
    STATE(629), 1,
      sym_local_accum_name,
    STATE(638), 1,
      sym_arg_list,
    STATE(857), 1,
      sym_aggregator,
    STATE(223), 2,
      sym_integer,
      sym_real,
    STATE(224), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(226), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [8706] = 28,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      aux_sym_condition_token1,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_DASH,
    ACTIONS(413), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(138), 1,
      sym_expr,
    STATE(585), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    ACTIONS(411), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [8799] = 28,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      aux_sym_condition_token1,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_DASH,
    ACTIONS(413), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(138), 1,
      sym_expr,
    STATE(556), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    ACTIONS(411), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [8892] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(277), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(839), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [8983] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(277), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(828), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [9074] = 28,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      aux_sym_condition_token1,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_DASH,
    ACTIONS(413), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(138), 1,
      sym_expr,
    STATE(330), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    ACTIONS(411), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [9167] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(277), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(809), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [9258] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(277), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(807), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [9349] = 28,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      aux_sym_condition_token1,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_DASH,
    ACTIONS(413), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(138), 1,
      sym_expr,
    STATE(495), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    ACTIONS(411), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [9442] = 27,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(277), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(697), 1,
      sym_arg_list,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [9533] = 28,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      aux_sym_condition_token1,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_DASH,
    ACTIONS(413), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(138), 1,
      sym_expr,
    STATE(482), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    ACTIONS(411), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [9626] = 28,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      aux_sym_condition_token1,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_DASH,
    ACTIONS(413), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(138), 1,
      sym_expr,
    STATE(464), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    ACTIONS(411), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [9719] = 26,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(375), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LBRACK,
    ACTIONS(381), 1,
      anon_sym_AT_AT,
    ACTIONS(383), 1,
      aux_sym_expr_token2,
    ACTIONS(385), 1,
      aux_sym_expr_token4,
    ACTIONS(395), 1,
      sym_digit,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      anon_sym_SQUOTE,
    ACTIONS(419), 1,
      anon_sym_DASH,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(457), 1,
      sym_name,
    STATE(178), 1,
      sym_name_dot,
    STATE(180), 1,
      sym_global_accum_name,
    STATE(204), 1,
      aux_sym_accum_type_repeat1,
    STATE(205), 1,
      sym_set_bag_expr,
    STATE(274), 1,
      sym_expr,
    STATE(629), 1,
      sym_local_accum_name,
    STATE(638), 1,
      sym_arg_list,
    STATE(857), 1,
      sym_aggregator,
    STATE(223), 2,
      sym_integer,
      sym_real,
    STATE(224), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(226), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [9807] = 26,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(268), 1,
      sym_set_bag_expr,
    STATE(277), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(747), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [9895] = 26,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(277), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(799), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [9983] = 26,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(277), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(743), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [10071] = 26,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(375), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LBRACK,
    ACTIONS(381), 1,
      anon_sym_AT_AT,
    ACTIONS(383), 1,
      aux_sym_expr_token2,
    ACTIONS(385), 1,
      aux_sym_expr_token4,
    ACTIONS(395), 1,
      sym_digit,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      anon_sym_SQUOTE,
    ACTIONS(419), 1,
      anon_sym_DASH,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(457), 1,
      sym_name,
    STATE(178), 1,
      sym_name_dot,
    STATE(180), 1,
      sym_global_accum_name,
    STATE(204), 1,
      aux_sym_accum_type_repeat1,
    STATE(205), 1,
      sym_set_bag_expr,
    STATE(270), 1,
      sym_expr,
    STATE(599), 1,
      sym_arg_list,
    STATE(629), 1,
      sym_local_accum_name,
    STATE(857), 1,
      sym_aggregator,
    STATE(223), 2,
      sym_integer,
      sym_real,
    STATE(224), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(226), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [10159] = 26,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(277), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(814), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [10247] = 13,
    ACTIONS(463), 1,
      aux_sym_for_each_control_token1,
    ACTIONS(467), 1,
      aux_sym_condition_token1,
    ACTIONS(469), 1,
      aux_sym_condition_token2,
    ACTIONS(471), 1,
      aux_sym_condition_token4,
    ACTIONS(473), 1,
      aux_sym_condition_token8,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    STATE(143), 1,
      sym_comparison_operator,
    STATE(171), 1,
      sym_math_operator,
    ACTIONS(461), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(477), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(465), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(459), 10,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_post_accum_clause_token1,
      aux_sym_condition_token5,
      aux_sym_print_stmt_token2,
  [10309] = 26,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(268), 1,
      sym_set_bag_expr,
    STATE(277), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(756), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [10397] = 26,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(297), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(633), 1,
      sym_v_set_proj,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [10485] = 26,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(297), 1,
      sym_expr,
    STATE(536), 1,
      sym_v_set_proj,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [10573] = 26,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(277), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(719), 1,
      sym_arg_list,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [10661] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(240), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [10746] = 4,
    STATE(171), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(254), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(252), 27,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      aux_sym_post_accum_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [10789] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(255), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [10874] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_DASH,
    ACTIONS(413), 1,
      sym_name,
    ACTIONS(479), 1,
      anon_sym_DOT,
    ACTIONS(481), 1,
      sym_digit,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(172), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [10959] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(310), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [11044] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(313), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [11129] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(251), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [11214] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(315), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [11299] = 25,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(377), 1,
      anon_sym_LBRACK,
    ACTIONS(381), 1,
      anon_sym_AT_AT,
    ACTIONS(383), 1,
      aux_sym_expr_token2,
    ACTIONS(385), 1,
      aux_sym_expr_token4,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      anon_sym_SQUOTE,
    ACTIONS(419), 1,
      anon_sym_DASH,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(457), 1,
      sym_name,
    ACTIONS(483), 1,
      anon_sym_DOT,
    ACTIONS(485), 1,
      sym_digit,
    STATE(178), 1,
      sym_name_dot,
    STATE(180), 1,
      sym_global_accum_name,
    STATE(200), 1,
      aux_sym_accum_type_repeat1,
    STATE(207), 1,
      sym_set_bag_expr,
    STATE(294), 1,
      sym_expr,
    STATE(629), 1,
      sym_local_accum_name,
    STATE(857), 1,
      sym_aggregator,
    STATE(223), 2,
      sym_integer,
      sym_real,
    STATE(224), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(226), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [11384] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(317), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [11469] = 25,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(377), 1,
      anon_sym_LBRACK,
    ACTIONS(379), 1,
      anon_sym_DASH,
    ACTIONS(381), 1,
      anon_sym_AT_AT,
    ACTIONS(383), 1,
      aux_sym_expr_token2,
    ACTIONS(385), 1,
      aux_sym_expr_token4,
    ACTIONS(391), 1,
      sym_name,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      anon_sym_SQUOTE,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_DOT,
    ACTIONS(485), 1,
      sym_digit,
    STATE(178), 1,
      sym_name_dot,
    STATE(180), 1,
      sym_global_accum_name,
    STATE(200), 1,
      aux_sym_accum_type_repeat1,
    STATE(207), 1,
      sym_set_bag_expr,
    STATE(216), 1,
      sym_expr,
    STATE(629), 1,
      sym_local_accum_name,
    STATE(857), 1,
      sym_aggregator,
    STATE(223), 2,
      sym_integer,
      sym_real,
    STATE(224), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(226), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [11554] = 6,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_DOT,
    STATE(177), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(126), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(122), 23,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [11601] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(249), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [11686] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(250), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [11771] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(316), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [11856] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(314), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [11941] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(302), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [12026] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(288), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [12111] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(300), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [12196] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(257), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [12281] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(238), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [12366] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(256), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [12451] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(289), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [12536] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(191), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [12621] = 25,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(375), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LBRACK,
    ACTIONS(381), 1,
      anon_sym_AT_AT,
    ACTIONS(383), 1,
      aux_sym_expr_token2,
    ACTIONS(385), 1,
      aux_sym_expr_token4,
    ACTIONS(395), 1,
      sym_digit,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      anon_sym_SQUOTE,
    ACTIONS(419), 1,
      anon_sym_DASH,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(457), 1,
      sym_name,
    STATE(178), 1,
      sym_name_dot,
    STATE(180), 1,
      sym_global_accum_name,
    STATE(204), 1,
      aux_sym_accum_type_repeat1,
    STATE(207), 1,
      sym_set_bag_expr,
    STATE(287), 1,
      sym_expr,
    STATE(629), 1,
      sym_local_accum_name,
    STATE(857), 1,
      sym_aggregator,
    STATE(223), 2,
      sym_integer,
      sym_real,
    STATE(224), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(226), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [12706] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(312), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [12791] = 7,
    ACTIONS(491), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      anon_sym_DOT,
    STATE(208), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(145), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(143), 20,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12840] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    ACTIONS(479), 1,
      anon_sym_DOT,
    ACTIONS(481), 1,
      sym_digit,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(194), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [12925] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_DASH,
    ACTIONS(413), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(144), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [13010] = 6,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    STATE(171), 1,
      sym_math_operator,
    ACTIONS(497), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(465), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(495), 19,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_for_each_control_token1,
      aux_sym_post_accum_clause_token1,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      aux_sym_print_stmt_token2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13057] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(318), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [13142] = 25,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(375), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LBRACK,
    ACTIONS(379), 1,
      anon_sym_DASH,
    ACTIONS(381), 1,
      anon_sym_AT_AT,
    ACTIONS(383), 1,
      aux_sym_expr_token2,
    ACTIONS(385), 1,
      aux_sym_expr_token4,
    ACTIONS(391), 1,
      sym_name,
    ACTIONS(395), 1,
      sym_digit,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      anon_sym_SQUOTE,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    STATE(178), 1,
      sym_name_dot,
    STATE(180), 1,
      sym_global_accum_name,
    STATE(204), 1,
      aux_sym_accum_type_repeat1,
    STATE(207), 1,
      sym_set_bag_expr,
    STATE(219), 1,
      sym_expr,
    STATE(629), 1,
      sym_local_accum_name,
    STATE(857), 1,
      sym_aggregator,
    STATE(223), 2,
      sym_integer,
      sym_real,
    STATE(224), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(226), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [13227] = 25,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      aux_sym_expr_token2,
    ACTIONS(322), 1,
      aux_sym_expr_token4,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_name,
    STATE(24), 1,
      sym_global_accum_name,
    STATE(27), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_set_bag_expr,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(239), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    STATE(67), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [13312] = 25,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(326), 1,
      aux_sym_aggregator_token1,
    ACTIONS(375), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LBRACK,
    ACTIONS(381), 1,
      anon_sym_AT_AT,
    ACTIONS(383), 1,
      aux_sym_expr_token2,
    ACTIONS(385), 1,
      aux_sym_expr_token4,
    ACTIONS(395), 1,
      sym_digit,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      anon_sym_SQUOTE,
    ACTIONS(419), 1,
      anon_sym_DASH,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(457), 1,
      sym_name,
    STATE(178), 1,
      sym_name_dot,
    STATE(180), 1,
      sym_global_accum_name,
    STATE(204), 1,
      aux_sym_accum_type_repeat1,
    STATE(207), 1,
      sym_set_bag_expr,
    STATE(293), 1,
      sym_expr,
    STATE(629), 1,
      sym_local_accum_name,
    STATE(857), 1,
      sym_aggregator,
    STATE(223), 2,
      sym_integer,
      sym_real,
    STATE(224), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(226), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [13397] = 4,
    STATE(184), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(164), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(162), 24,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13439] = 6,
    ACTIONS(499), 1,
      anon_sym_DOT,
    STATE(181), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(145), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(143), 20,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13485] = 4,
    STATE(177), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(126), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(122), 24,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13527] = 6,
    ACTIONS(501), 1,
      anon_sym_DOT,
    STATE(208), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(145), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(143), 20,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13573] = 5,
    ACTIONS(499), 1,
      anon_sym_DOT,
    STATE(188), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(153), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(151), 23,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13617] = 5,
    ACTIONS(499), 1,
      anon_sym_DOT,
    STATE(181), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(157), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(149), 23,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13661] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(286), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(459), 10,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_post_accum_clause_token1,
      aux_sym_condition_token5,
      aux_sym_print_stmt_token2,
    ACTIONS(284), 17,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13703] = 5,
    ACTIONS(503), 1,
      anon_sym_DOT,
    STATE(184), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(141), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(137), 23,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13747] = 15,
    ACTIONS(23), 1,
      aux_sym_accum_type_token1,
    ACTIONS(31), 1,
      aux_sym_accum_type_token13,
    ACTIONS(35), 1,
      aux_sym_accum_type_token16,
    ACTIONS(37), 1,
      aux_sym_accum_type_token17,
    ACTIONS(39), 1,
      aux_sym_accum_type_token20,
    ACTIONS(41), 1,
      aux_sym_accum_type_token21,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(506), 1,
      sym_name,
    STATE(802), 1,
      sym_accum_type,
    ACTIONS(27), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(33), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(797), 2,
      sym__element_type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
  [13811] = 4,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(141), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(137), 24,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13853] = 15,
    ACTIONS(23), 1,
      aux_sym_accum_type_token1,
    ACTIONS(31), 1,
      aux_sym_accum_type_token13,
    ACTIONS(35), 1,
      aux_sym_accum_type_token16,
    ACTIONS(37), 1,
      aux_sym_accum_type_token17,
    ACTIONS(39), 1,
      aux_sym_accum_type_token20,
    ACTIONS(41), 1,
      aux_sym_accum_type_token21,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(506), 1,
      sym_name,
    STATE(726), 1,
      sym_accum_type,
    ACTIONS(27), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(33), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(797), 2,
      sym__element_type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
  [13917] = 5,
    ACTIONS(510), 1,
      anon_sym_DOT,
    STATE(188), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(132), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(130), 23,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13961] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(141), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(137), 24,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14000] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(168), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(166), 24,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14039] = 4,
    ACTIONS(254), 1,
      anon_sym_SLASH,
    STATE(166), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(252), 27,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      aux_sym_condition_token5,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [14080] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(120), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(118), 24,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14119] = 4,
    ACTIONS(513), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(157), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(149), 23,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14160] = 5,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    STATE(166), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(465), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(495), 19,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_post_accum_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_condition_token5,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
  [14203] = 14,
    ACTIONS(23), 1,
      aux_sym_accum_type_token1,
    ACTIONS(31), 1,
      aux_sym_accum_type_token13,
    ACTIONS(35), 1,
      aux_sym_accum_type_token16,
    ACTIONS(37), 1,
      aux_sym_accum_type_token17,
    ACTIONS(39), 1,
      aux_sym_accum_type_token20,
    ACTIONS(41), 1,
      aux_sym_accum_type_token21,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(515), 1,
      sym_name,
    ACTIONS(27), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(33), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(778), 2,
      sym_accum_type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
  [14264] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(176), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(174), 24,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14303] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(172), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(170), 24,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14342] = 17,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    ACTIONS(463), 1,
      aux_sym_for_each_control_token1,
    ACTIONS(467), 1,
      aux_sym_condition_token1,
    ACTIONS(469), 1,
      aux_sym_condition_token2,
    ACTIONS(471), 1,
      aux_sym_condition_token4,
    ACTIONS(473), 1,
      aux_sym_condition_token8,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    ACTIONS(519), 1,
      anon_sym_DASH_GT,
    STATE(143), 1,
      sym_comparison_operator,
    STATE(174), 1,
      sym_math_operator,
    STATE(432), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(459), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(461), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(475), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(477), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(465), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [14408] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(157), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(149), 23,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14446] = 6,
    ACTIONS(521), 1,
      anon_sym_DOT,
    ACTIONS(523), 1,
      sym_digit,
    STATE(201), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(204), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(201), 21,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14490] = 5,
    ACTIONS(525), 1,
      sym_digit,
    STATE(201), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(182), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(180), 22,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14532] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(199), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(197), 23,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14570] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(199), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(197), 23,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14608] = 6,
    ACTIONS(523), 1,
      sym_digit,
    ACTIONS(528), 1,
      anon_sym_DOT,
    STATE(201), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(191), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(189), 21,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14652] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(530), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(145), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(143), 20,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14692] = 17,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    ACTIONS(463), 1,
      aux_sym_for_each_control_token1,
    ACTIONS(467), 1,
      aux_sym_condition_token1,
    ACTIONS(469), 1,
      aux_sym_condition_token2,
    ACTIONS(471), 1,
      aux_sym_condition_token4,
    ACTIONS(473), 1,
      aux_sym_condition_token8,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    ACTIONS(519), 1,
      anon_sym_DASH_GT,
    STATE(143), 1,
      sym_comparison_operator,
    STATE(174), 1,
      sym_math_operator,
    STATE(432), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(459), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(461), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(475), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(477), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(465), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [14758] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(530), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(145), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(143), 20,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14798] = 5,
    ACTIONS(501), 1,
      anon_sym_DOT,
    STATE(212), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(224), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(222), 21,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14839] = 5,
    ACTIONS(523), 1,
      sym_digit,
    STATE(201), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(212), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(209), 21,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14880] = 5,
    ACTIONS(523), 1,
      sym_digit,
    STATE(201), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(217), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(215), 21,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14921] = 5,
    ACTIONS(523), 1,
      sym_digit,
    STATE(201), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(229), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(226), 21,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14962] = 5,
    ACTIONS(532), 1,
      anon_sym_DOT,
    STATE(212), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(132), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(130), 21,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15003] = 5,
    ACTIONS(523), 1,
      sym_digit,
    STATE(201), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(234), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(232), 21,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15044] = 4,
    ACTIONS(535), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(244), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(242), 21,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15082] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(172), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(170), 22,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15118] = 6,
    STATE(174), 1,
      sym_math_operator,
    ACTIONS(475), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(497), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(465), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(495), 14,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_each_control_token1,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15160] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(176), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(174), 22,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15196] = 4,
    ACTIONS(537), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(238), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(236), 21,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15234] = 4,
    STATE(174), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(254), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(252), 21,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15272] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(266), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(264), 21,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15307] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(258), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(256), 21,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15342] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(238), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(236), 21,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15377] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(298), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(296), 21,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15412] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(145), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(143), 21,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15447] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(262), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(260), 21,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15482] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(286), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(284), 21,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15517] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(294), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(292), 21,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15552] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(302), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(300), 21,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15587] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(270), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(268), 21,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15622] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(306), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(304), 21,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15657] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(250), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(248), 21,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15692] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(290), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(288), 21,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15727] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(282), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(280), 21,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15762] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(278), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(276), 21,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15797] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(459), 3,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      aux_sym_condition_token5,
    ACTIONS(286), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(284), 18,
      anon_sym_COMMA,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15834] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(254), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(252), 21,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15869] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(274), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(272), 21,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_for_each_control_token1,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      aux_sym_condition_token1,
      aux_sym_condition_token2,
      aux_sym_condition_token4,
      aux_sym_condition_token5,
      aux_sym_condition_token8,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15904] = 5,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    STATE(166), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(465), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(539), 10,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_post_accum_clause_token1,
      aux_sym_condition_token5,
      aux_sym_print_stmt_token2,
  [15938] = 5,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    STATE(166), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(465), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(541), 10,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_post_accum_clause_token1,
      aux_sym_condition_token5,
      aux_sym_print_stmt_token2,
  [15972] = 5,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    STATE(166), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(465), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(543), 10,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_post_accum_clause_token1,
      aux_sym_condition_token5,
      aux_sym_print_stmt_token2,
  [16006] = 8,
    ACTIONS(491), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      anon_sym_DOT,
    ACTIONS(545), 1,
      anon_sym_LT,
    STATE(208), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(547), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(143), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16045] = 8,
    ACTIONS(491), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      anon_sym_DOT,
    ACTIONS(545), 1,
      anon_sym_LT,
    STATE(208), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(145), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(143), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16084] = 9,
    ACTIONS(145), 1,
      anon_sym_SLASH,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      anon_sym_DOT,
    ACTIONS(355), 1,
      anon_sym_LT,
    ACTIONS(549), 1,
      anon_sym_EQ,
    STATE(45), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(547), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(143), 9,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16124] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(551), 8,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_AT_AT,
      sym_digit,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(553), 10,
      anon_sym_AT,
      aux_sym_expr_token2,
      aux_sym_expr_token4,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_aggregator_token1,
      sym_name,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [16152] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(555), 8,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_AT_AT,
      sym_digit,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(557), 10,
      anon_sym_AT,
      aux_sym_expr_token2,
      aux_sym_expr_token4,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_aggregator_token1,
      sym_name,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [16180] = 8,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(559), 1,
      anon_sym_GT,
    ACTIONS(561), 1,
      sym_name,
    STATE(263), 1,
      sym_tuple_field,
    STATE(663), 1,
      sym_base_type,
    STATE(252), 2,
      sym_tuple_fields,
      aux_sym_typedef_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
  [16217] = 7,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    ACTIONS(568), 1,
      aux_sym_base_type_token3,
    STATE(280), 1,
      sym_query_param,
    STATE(247), 2,
      sym_query_params,
      aux_sym_parameter_list_repeat1,
    STATE(824), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(565), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
  [16252] = 8,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(561), 1,
      sym_name,
    ACTIONS(571), 1,
      anon_sym_GT,
    STATE(263), 1,
      sym_tuple_field,
    STATE(663), 1,
      sym_base_type,
    STATE(246), 2,
      sym_tuple_fields,
      aux_sym_typedef_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
  [16289] = 5,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    STATE(166), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(573), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
    ACTIONS(465), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16320] = 5,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    STATE(166), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(575), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
    ACTIONS(465), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16351] = 5,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    STATE(166), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(577), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
    ACTIONS(465), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16382] = 8,
    ACTIONS(579), 1,
      anon_sym_GT,
    ACTIONS(584), 1,
      aux_sym_base_type_token3,
    ACTIONS(587), 1,
      sym_name,
    STATE(263), 1,
      sym_tuple_field,
    STATE(663), 1,
      sym_base_type,
    STATE(252), 2,
      sym_tuple_fields,
      aux_sym_typedef_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(581), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
  [16419] = 7,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
    ACTIONS(594), 1,
      aux_sym_base_type_token3,
    STATE(280), 1,
      sym_query_param,
    STATE(254), 2,
      sym_query_params,
      aux_sym_parameter_list_repeat1,
    STATE(824), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(592), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
  [16454] = 7,
    ACTIONS(594), 1,
      aux_sym_base_type_token3,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
    STATE(280), 1,
      sym_query_param,
    STATE(247), 2,
      sym_query_params,
      aux_sym_parameter_list_repeat1,
    STATE(824), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(592), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
  [16489] = 5,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    STATE(166), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(598), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
    ACTIONS(465), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16520] = 5,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    STATE(166), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(600), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
    ACTIONS(465), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16551] = 5,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    STATE(166), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(602), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
    ACTIONS(465), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16582] = 11,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(604), 1,
      anon_sym_DASH,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(609), 1,
      sym_constant,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(606), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [16624] = 11,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(604), 1,
      anon_sym_DASH,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(567), 1,
      sym_constant,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(606), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [16666] = 7,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    ACTIONS(610), 1,
      anon_sym_LBRACK,
    ACTIONS(612), 1,
      aux_sym_print_expr_token1,
    STATE(166), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(608), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_print_stmt_token2,
    ACTIONS(465), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16700] = 11,
    ACTIONS(614), 1,
      aux_sym_accum_type_token1,
    ACTIONS(620), 1,
      aux_sym_accum_type_token13,
    ACTIONS(624), 1,
      aux_sym_accum_type_token16,
    ACTIONS(626), 1,
      aux_sym_accum_type_token17,
    ACTIONS(628), 1,
      aux_sym_accum_type_token20,
    ACTIONS(630), 1,
      aux_sym_accum_type_token21,
    STATE(759), 1,
      sym_accum_type,
    ACTIONS(616), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(622), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(618), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
  [16742] = 11,
    ACTIONS(312), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      sym_digit,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(604), 1,
      anon_sym_DASH,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(670), 1,
      sym_constant,
    STATE(61), 2,
      sym_numeric,
      sym_string_literal,
    STATE(65), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(606), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [16784] = 5,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(634), 1,
      anon_sym_GT,
    STATE(266), 1,
      aux_sym_tuple_fields_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(636), 12,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token3,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
      sym_name,
  [16813] = 5,
    ACTIONS(638), 1,
      anon_sym_COMMA,
    ACTIONS(641), 1,
      anon_sym_GT,
    STATE(264), 1,
      aux_sym_tuple_fields_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(643), 12,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token3,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
      sym_name,
  [16842] = 4,
    ACTIONS(647), 1,
      anon_sym_LT,
    ACTIONS(645), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(649), 12,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token3,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
      sym_name,
  [16869] = 5,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(651), 1,
      anon_sym_GT,
    STATE(264), 1,
      aux_sym_tuple_fields_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(653), 12,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token3,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
      sym_name,
  [16898] = 5,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(655), 1,
      sym_name,
    STATE(704), 2,
      sym__element_type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
  [16926] = 4,
    ACTIONS(145), 1,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(187), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(143), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16952] = 5,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(657), 1,
      sym_name,
    STATE(699), 2,
      sym__element_type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
  [16980] = 8,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    ACTIONS(519), 1,
      anon_sym_DASH_GT,
    STATE(176), 1,
      sym_math_operator,
    STATE(432), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(475), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(465), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17014] = 5,
    ACTIONS(594), 1,
      aux_sym_base_type_token3,
    STATE(295), 1,
      sym_query_param,
    STATE(824), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(592), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
  [17042] = 4,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(659), 12,
      anon_sym_RPAREN,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token3,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
  [17068] = 3,
    ACTIONS(665), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(663), 13,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token3,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
  [17092] = 8,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    ACTIONS(519), 1,
      anon_sym_DASH_GT,
    STATE(176), 1,
      sym_math_operator,
    STATE(432), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(475), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(465), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17126] = 14,
    ACTIONS(667), 1,
      anon_sym_LPAREN,
    ACTIONS(669), 1,
      anon_sym_LT,
    ACTIONS(673), 1,
      anon_sym_AT_AT,
    ACTIONS(675), 1,
      sym_name,
    STATE(416), 1,
      sym_atomic_edge_type,
    STATE(417), 1,
      sym_atomic_edge_pattern,
    STATE(418), 1,
      sym_global_accum_name,
    STATE(419), 1,
      sym_edge_set_type,
    STATE(531), 1,
      sym_path_edge_pattern,
    STATE(533), 1,
      sym_disj_pattern,
    STATE(621), 1,
      sym_step_edge_types,
    STATE(775), 1,
      sym_step_edge_set,
    ACTIONS(671), 2,
      anon_sym__,
      aux_sym_seed_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [17172] = 3,
    ACTIONS(677), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(679), 12,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token3,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
      sym_name,
  [17196] = 7,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    ACTIONS(681), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      sym_math_operator,
    STATE(462), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(519), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(465), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17228] = 3,
    ACTIONS(641), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(643), 12,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token3,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
      sym_name,
  [17252] = 4,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(683), 12,
      anon_sym_RPAREN,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token3,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
  [17278] = 4,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    STATE(272), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(688), 12,
      anon_sym_RPAREN,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token3,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
  [17304] = 13,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(690), 1,
      anon_sym_LPAREN,
    ACTIONS(694), 1,
      sym_name,
    STATE(322), 1,
      sym_global_accum_name,
    STATE(341), 1,
      sym_vertex_set_type,
    STATE(343), 1,
      sym_step_source_set,
    STATE(344), 1,
      sym_step_vertex_types,
    STATE(345), 1,
      sym_atomic_vertex_type,
    STATE(368), 1,
      sym_path_pattern,
    STATE(378), 1,
      sym_step_vertex_set,
    ACTIONS(692), 2,
      anon_sym__,
      aux_sym_seed_token1,
    STATE(420), 2,
      sym_step,
      sym_step_v2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [17348] = 5,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(506), 1,
      sym_name,
    STATE(797), 2,
      sym__element_type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
  [17376] = 5,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(696), 1,
      sym_name,
    STATE(705), 2,
      sym__element_type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
  [17404] = 3,
    ACTIONS(698), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(700), 12,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token3,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
      sym_name,
  [17428] = 6,
    ACTIONS(49), 1,
      aux_sym_base_type_token3,
    ACTIONS(561), 1,
      sym_name,
    STATE(278), 1,
      sym_tuple_field,
    STATE(663), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
  [17458] = 3,
    ACTIONS(645), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(649), 12,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token3,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
      sym_name,
  [17482] = 5,
    STATE(176), 1,
      sym_math_operator,
    ACTIONS(475), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(702), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(465), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17509] = 6,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    ACTIONS(706), 1,
      anon_sym_SEMI,
    STATE(166), 1,
      sym_math_operator,
    ACTIONS(704), 2,
      anon_sym_COMMA,
      aux_sym_limit_clause_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(465), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17538] = 7,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    ACTIONS(708), 1,
      anon_sym_COMMA,
    ACTIONS(710), 1,
      anon_sym_SEMI,
    STATE(166), 1,
      sym_math_operator,
    STATE(479), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(465), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17569] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(712), 13,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token3,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
  [17590] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(187), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(543), 10,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_post_accum_clause_token1,
      aux_sym_condition_token5,
      aux_sym_print_stmt_token2,
  [17613] = 4,
    ACTIONS(594), 1,
      aux_sym_base_type_token3,
    STATE(640), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(592), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
  [17638] = 4,
    STATE(176), 1,
      sym_math_operator,
    ACTIONS(254), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(252), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17663] = 5,
    STATE(176), 1,
      sym_math_operator,
    ACTIONS(475), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(495), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(465), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17690] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(683), 13,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token3,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
  [17711] = 4,
    ACTIONS(594), 1,
      aux_sym_base_type_token3,
    STATE(705), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(592), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
  [17736] = 6,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    ACTIONS(716), 1,
      aux_sym_print_expr_token1,
    STATE(166), 1,
      sym_math_operator,
    ACTIONS(714), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(465), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17765] = 4,
    ACTIONS(594), 1,
      aux_sym_base_type_token3,
    STATE(566), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(592), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
  [17790] = 4,
    ACTIONS(594), 1,
      aux_sym_base_type_token3,
    STATE(486), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(592), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
  [17815] = 5,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    STATE(166), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(702), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(465), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17842] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(187), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(541), 10,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_post_accum_clause_token1,
      aux_sym_condition_token5,
      aux_sym_print_stmt_token2,
  [17865] = 5,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    STATE(166), 1,
      sym_math_operator,
    ACTIONS(718), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(465), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17891] = 12,
    ACTIONS(669), 1,
      anon_sym_LT,
    ACTIONS(673), 1,
      anon_sym_AT_AT,
    ACTIONS(675), 1,
      sym_name,
    ACTIONS(720), 1,
      anon_sym_LPAREN,
    STATE(407), 1,
      sym_edge_set_type,
    STATE(417), 1,
      sym_atomic_edge_pattern,
    STATE(418), 1,
      sym_global_accum_name,
    STATE(427), 1,
      sym_atomic_edge_type,
    STATE(533), 1,
      sym_disj_pattern,
    STATE(596), 1,
      sym_path_edge_pattern,
    ACTIONS(671), 2,
      anon_sym__,
      aux_sym_seed_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [17931] = 12,
    ACTIONS(669), 1,
      anon_sym_LT,
    ACTIONS(673), 1,
      anon_sym_AT_AT,
    ACTIONS(675), 1,
      sym_name,
    ACTIONS(720), 1,
      anon_sym_LPAREN,
    STATE(417), 1,
      sym_atomic_edge_pattern,
    STATE(418), 1,
      sym_global_accum_name,
    STATE(419), 1,
      sym_edge_set_type,
    STATE(427), 1,
      sym_atomic_edge_type,
    STATE(533), 1,
      sym_disj_pattern,
    STATE(596), 1,
      sym_path_edge_pattern,
    ACTIONS(671), 2,
      anon_sym__,
      aux_sym_seed_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [17971] = 4,
    ACTIONS(724), 1,
      aux_sym_base_type_token3,
    STATE(284), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(722), 10,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
      aux_sym_base_type_token1,
      aux_sym_base_type_token2,
      aux_sym_base_type_token4,
      aux_sym_base_type_token5,
      aux_sym_base_type_token6,
      aux_sym_base_type_token7,
  [17995] = 12,
    ACTIONS(669), 1,
      anon_sym_LT,
    ACTIONS(673), 1,
      anon_sym_AT_AT,
    ACTIONS(675), 1,
      sym_name,
    ACTIONS(720), 1,
      anon_sym_LPAREN,
    STATE(417), 1,
      sym_atomic_edge_pattern,
    STATE(418), 1,
      sym_global_accum_name,
    STATE(419), 1,
      sym_edge_set_type,
    STATE(427), 1,
      sym_atomic_edge_type,
    STATE(533), 1,
      sym_disj_pattern,
    STATE(535), 1,
      sym_path_edge_pattern,
    ACTIONS(671), 2,
      anon_sym__,
      aux_sym_seed_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18035] = 6,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    ACTIONS(726), 1,
      aux_sym_dml_sub_case_stmt_token2,
    STATE(166), 1,
      sym_math_operator,
    STATE(448), 1,
      aux_sym_query_body_case_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(465), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18063] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(166), 12,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_PLUS_EQ,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_for_each_control_token1,
      anon_sym_COLON,
      aux_sym_post_accum_clause_token1,
  [18083] = 12,
    ACTIONS(669), 1,
      anon_sym_LT,
    ACTIONS(673), 1,
      anon_sym_AT_AT,
    ACTIONS(675), 1,
      sym_name,
    ACTIONS(720), 1,
      anon_sym_LPAREN,
    STATE(417), 1,
      sym_atomic_edge_pattern,
    STATE(418), 1,
      sym_global_accum_name,
    STATE(419), 1,
      sym_edge_set_type,
    STATE(427), 1,
      sym_atomic_edge_type,
    STATE(531), 1,
      sym_path_edge_pattern,
    STATE(533), 1,
      sym_disj_pattern,
    ACTIONS(671), 2,
      anon_sym__,
      aux_sym_seed_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18123] = 5,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    ACTIONS(728), 1,
      anon_sym_RBRACK,
    STATE(166), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(465), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18148] = 11,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(690), 1,
      anon_sym_LPAREN,
    ACTIONS(730), 1,
      anon_sym_GT,
    ACTIONS(732), 1,
      sym_name,
    STATE(322), 1,
      sym_global_accum_name,
    STATE(341), 1,
      sym_vertex_set_type,
    STATE(344), 1,
      sym_step_vertex_types,
    STATE(345), 1,
      sym_atomic_vertex_type,
    STATE(421), 1,
      sym_step_vertex_set,
    ACTIONS(692), 2,
      anon_sym__,
      aux_sym_seed_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18185] = 5,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(465), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18210] = 5,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    ACTIONS(736), 1,
      anon_sym_SEMI,
    STATE(166), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(465), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18235] = 5,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    ACTIONS(738), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(465), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18260] = 5,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    ACTIONS(740), 1,
      anon_sym_SEMI,
    STATE(166), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(465), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18285] = 5,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    ACTIONS(742), 1,
      anon_sym_SEMI,
    STATE(166), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(465), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18310] = 5,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    ACTIONS(740), 1,
      anon_sym_SEMI,
    STATE(166), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(465), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18335] = 5,
    ACTIONS(475), 1,
      anon_sym_SLASH,
    ACTIONS(744), 1,
      aux_sym_condition_token5,
    STATE(166), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(465), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18360] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(746), 10,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_post_accum_clause_token1,
      aux_sym_condition_token5,
      aux_sym_print_stmt_token2,
  [18378] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(541), 10,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_post_accum_clause_token1,
      aux_sym_condition_token5,
      aux_sym_print_stmt_token2,
  [18396] = 10,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(690), 1,
      anon_sym_LPAREN,
    ACTIONS(732), 1,
      sym_name,
    STATE(322), 1,
      sym_global_accum_name,
    STATE(341), 1,
      sym_vertex_set_type,
    STATE(344), 1,
      sym_step_vertex_types,
    STATE(345), 1,
      sym_atomic_vertex_type,
    STATE(374), 1,
      sym_step_vertex_set,
    ACTIONS(692), 2,
      anon_sym__,
      aux_sym_seed_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18430] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(748), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      anon_sym_COLON,
      aux_sym_post_accum_clause_token1,
      anon_sym_DASH,
      anon_sym_PIPE2,
  [18448] = 10,
    ACTIONS(750), 1,
      anon_sym_SEMI,
    ACTIONS(752), 1,
      aux_sym_where_clause_token1,
    ACTIONS(754), 1,
      aux_sym_accum_clause_token1,
    ACTIONS(756), 1,
      aux_sym_dml_sub_while_stmt_token2,
    ACTIONS(758), 1,
      aux_sym_post_accum_clause_token1,
    STATE(347), 1,
      sym_where_clause,
    STATE(396), 1,
      sym_accum_clause,
    STATE(685), 1,
      sym_limit_clause,
    STATE(398), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18482] = 10,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(690), 1,
      anon_sym_LPAREN,
    ACTIONS(732), 1,
      sym_name,
    STATE(322), 1,
      sym_global_accum_name,
    STATE(341), 1,
      sym_vertex_set_type,
    STATE(344), 1,
      sym_step_vertex_types,
    STATE(345), 1,
      sym_atomic_vertex_type,
    STATE(408), 1,
      sym_step_vertex_set,
    ACTIONS(692), 2,
      anon_sym__,
      aux_sym_seed_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18516] = 10,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(690), 1,
      anon_sym_LPAREN,
    ACTIONS(732), 1,
      sym_name,
    STATE(322), 1,
      sym_global_accum_name,
    STATE(341), 1,
      sym_vertex_set_type,
    STATE(344), 1,
      sym_step_vertex_types,
    STATE(345), 1,
      sym_atomic_vertex_type,
    STATE(372), 1,
      sym_step_vertex_set,
    ACTIONS(692), 2,
      anon_sym__,
      aux_sym_seed_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18550] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(543), 10,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_post_accum_clause_token1,
      aux_sym_condition_token5,
      aux_sym_print_stmt_token2,
  [18568] = 10,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(675), 1,
      sym_name,
    ACTIONS(760), 1,
      anon_sym_LPAREN,
    STATE(418), 1,
      sym_global_accum_name,
    STATE(419), 1,
      sym_edge_set_type,
    STATE(616), 1,
      sym_atomic_edge_type,
    STATE(621), 1,
      sym_step_edge_types,
    STATE(758), 1,
      sym_step_edge_set,
    ACTIONS(671), 2,
      anon_sym__,
      aux_sym_seed_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18602] = 10,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(690), 1,
      anon_sym_LPAREN,
    ACTIONS(732), 1,
      sym_name,
    STATE(322), 1,
      sym_global_accum_name,
    STATE(341), 1,
      sym_vertex_set_type,
    STATE(344), 1,
      sym_step_vertex_types,
    STATE(345), 1,
      sym_atomic_vertex_type,
    STATE(425), 1,
      sym_step_vertex_set,
    ACTIONS(692), 2,
      anon_sym__,
      aux_sym_seed_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18636] = 5,
    ACTIONS(764), 1,
      anon_sym_DOT,
    ACTIONS(766), 1,
      anon_sym_PLUS_EQ,
    STATE(333), 1,
      aux_sym_v_accum_func_call_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(762), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [18660] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(543), 10,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_if_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_dml_sub_while_stmt_token3,
      aux_sym_post_accum_clause_token1,
      aux_sym_condition_token5,
      aux_sym_print_stmt_token2,
  [18678] = 9,
    ACTIONS(669), 1,
      anon_sym_LT,
    ACTIONS(673), 1,
      anon_sym_AT_AT,
    ACTIONS(675), 1,
      sym_name,
    STATE(418), 1,
      sym_global_accum_name,
    STATE(419), 1,
      sym_edge_set_type,
    STATE(427), 1,
      sym_atomic_edge_type,
    STATE(445), 1,
      sym_atomic_edge_pattern,
    ACTIONS(671), 2,
      anon_sym__,
      aux_sym_seed_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18709] = 4,
    ACTIONS(770), 1,
      anon_sym_DOT,
    STATE(332), 1,
      aux_sym_v_accum_func_call_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(768), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [18730] = 4,
    ACTIONS(764), 1,
      anon_sym_DOT,
    STATE(332), 1,
      aux_sym_v_accum_func_call_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(773), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [18751] = 4,
    ACTIONS(775), 1,
      anon_sym_COMMA,
    STATE(337), 1,
      aux_sym_dml_sub_stmt_list_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(777), 6,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [18771] = 4,
    ACTIONS(781), 1,
      anon_sym_DASH,
    STATE(339), 1,
      aux_sym_path_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(779), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [18791] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(783), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [18807] = 4,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    STATE(337), 1,
      aux_sym_dml_sub_stmt_list_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(788), 6,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [18827] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(790), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [18843] = 4,
    ACTIONS(794), 1,
      anon_sym_DASH,
    STATE(339), 1,
      aux_sym_path_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(792), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [18863] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(797), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      anon_sym_COLON,
      aux_sym_post_accum_clause_token1,
      anon_sym_DASH,
  [18879] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(799), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      anon_sym_COLON,
      aux_sym_post_accum_clause_token1,
      anon_sym_DASH,
  [18895] = 3,
    ACTIONS(803), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(801), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
      anon_sym_DASH,
  [18913] = 4,
    ACTIONS(807), 1,
      anon_sym_DASH,
    STATE(335), 1,
      aux_sym_path_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(805), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [18933] = 3,
    ACTIONS(811), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(809), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
      anon_sym_DASH,
  [18951] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(813), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      anon_sym_COLON,
      aux_sym_post_accum_clause_token1,
      anon_sym_DASH,
  [18967] = 4,
    ACTIONS(781), 1,
      anon_sym_DASH,
    STATE(335), 1,
      aux_sym_path_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(805), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [18987] = 8,
    ACTIONS(754), 1,
      aux_sym_accum_clause_token1,
    ACTIONS(756), 1,
      aux_sym_dml_sub_while_stmt_token2,
    ACTIONS(758), 1,
      aux_sym_post_accum_clause_token1,
    ACTIONS(815), 1,
      anon_sym_SEMI,
    STATE(382), 1,
      sym_accum_clause,
    STATE(731), 1,
      sym_limit_clause,
    STATE(384), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19015] = 4,
    ACTIONS(775), 1,
      anon_sym_COMMA,
    STATE(334), 1,
      aux_sym_dml_sub_stmt_list_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(817), 6,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19035] = 3,
    ACTIONS(803), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(801), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
      anon_sym_DASH,
  [19053] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(819), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      anon_sym_COLON,
      aux_sym_post_accum_clause_token1,
      anon_sym_DASH,
  [19069] = 5,
    ACTIONS(821), 1,
      ts_builtin_sym_end,
    ACTIONS(823), 1,
      aux_sym_create_query_token1,
    ACTIONS(826), 1,
      aux_sym_interpret_query_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    STATE(351), 4,
      sym__definition,
      sym_create_query,
      sym_interpret_query,
      aux_sym_gsql_repeat1,
  [19090] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(829), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
      anon_sym_DASH,
  [19105] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(831), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19120] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(833), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19135] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(835), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19150] = 7,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(837), 1,
      anon_sym_LPAREN,
    ACTIONS(839), 1,
      anon_sym_AT_AT,
    ACTIONS(841), 1,
      sym_name,
    STATE(834), 1,
      sym_for_each_control,
    STATE(604), 2,
      sym_global_accum_name,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19175] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(843), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19190] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(845), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19205] = 8,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    ACTIONS(849), 1,
      aux_sym_for_each_control_token2,
    ACTIONS(851), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(40), 1,
      sym_global_accum_name,
    STATE(443), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19232] = 4,
    ACTIONS(853), 1,
      anon_sym_COMMA,
    STATE(360), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(856), 5,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19251] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(858), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19266] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(860), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19281] = 8,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    ACTIONS(851), 1,
      sym_name,
    ACTIONS(862), 1,
      aux_sym_expr_token3,
    STATE(26), 1,
      sym_name_dot,
    STATE(40), 1,
      sym_global_accum_name,
    STATE(472), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19308] = 4,
    ACTIONS(864), 1,
      anon_sym_COMMA,
    STATE(360), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(866), 5,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19327] = 5,
    ACTIONS(7), 1,
      aux_sym_create_query_token1,
    ACTIONS(9), 1,
      aux_sym_interpret_query_token1,
    ACTIONS(868), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    STATE(351), 4,
      sym__definition,
      sym_create_query,
      sym_interpret_query,
      aux_sym_gsql_repeat1,
  [19348] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(870), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19363] = 7,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(837), 1,
      anon_sym_LPAREN,
    ACTIONS(839), 1,
      anon_sym_AT_AT,
    ACTIONS(841), 1,
      sym_name,
    STATE(736), 1,
      sym_for_each_control,
    STATE(604), 2,
      sym_global_accum_name,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19388] = 4,
    ACTIONS(864), 1,
      anon_sym_COMMA,
    STATE(364), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(872), 5,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19407] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(675), 1,
      sym_name,
    STATE(418), 1,
      sym_global_accum_name,
    STATE(419), 1,
      sym_edge_set_type,
    STATE(429), 1,
      sym_atomic_edge_type,
    ACTIONS(671), 2,
      anon_sym__,
      aux_sym_seed_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19432] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(874), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19447] = 8,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    ACTIONS(851), 1,
      sym_name,
    ACTIONS(876), 1,
      aux_sym_expr_token3,
    STATE(26), 1,
      sym_name_dot,
    STATE(40), 1,
      sym_global_accum_name,
    STATE(430), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19474] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(878), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
      anon_sym_DASH,
  [19489] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(880), 1,
      anon_sym_RBRACE,
    ACTIONS(884), 1,
      sym_name,
    STATE(553), 1,
      sym_seed,
    STATE(613), 1,
      sym_global_accum_name,
    ACTIONS(882), 2,
      anon_sym__,
      aux_sym_seed_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19514] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(886), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
      anon_sym_DASH,
  [19529] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(888), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19544] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(788), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19559] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(890), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
      anon_sym_DASH,
  [19574] = 3,
    ACTIONS(894), 1,
      anon_sym_DASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(892), 5,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19590] = 5,
    ACTIONS(195), 1,
      sym_digit,
    ACTIONS(898), 1,
      anon_sym_DOT,
    STATE(35), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(896), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token2,
  [19610] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    ACTIONS(900), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(40), 1,
      sym_global_accum_name,
    STATE(472), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19634] = 6,
    ACTIONS(756), 1,
      aux_sym_dml_sub_while_stmt_token2,
    ACTIONS(758), 1,
      aux_sym_post_accum_clause_token1,
    ACTIONS(902), 1,
      anon_sym_SEMI,
    STATE(741), 1,
      sym_limit_clause,
    STATE(401), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19656] = 6,
    ACTIONS(756), 1,
      aux_sym_dml_sub_while_stmt_token2,
    ACTIONS(758), 1,
      aux_sym_post_accum_clause_token1,
    ACTIONS(904), 1,
      anon_sym_SEMI,
    STATE(735), 1,
      sym_limit_clause,
    STATE(381), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19678] = 7,
    ACTIONS(381), 1,
      anon_sym_AT_AT,
    ACTIONS(906), 1,
      anon_sym_LPAREN,
    ACTIONS(908), 1,
      sym_name,
    STATE(182), 1,
      sym_name_dot,
    STATE(199), 1,
      sym_global_accum_name,
    STATE(203), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19702] = 6,
    ACTIONS(756), 1,
      aux_sym_dml_sub_while_stmt_token2,
    ACTIONS(758), 1,
      aux_sym_post_accum_clause_token1,
    ACTIONS(904), 1,
      anon_sym_SEMI,
    STATE(735), 1,
      sym_limit_clause,
    STATE(401), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19724] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    ACTIONS(900), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(40), 1,
      sym_global_accum_name,
    STATE(473), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19748] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(856), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19762] = 3,
    ACTIONS(910), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(912), 4,
      anon_sym_SEMI,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19778] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    ACTIONS(900), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(40), 1,
      sym_global_accum_name,
    STATE(430), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19802] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    ACTIONS(900), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(40), 1,
      sym_global_accum_name,
    STATE(291), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19826] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    ACTIONS(900), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(40), 1,
      sym_global_accum_name,
    STATE(41), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19850] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    ACTIONS(900), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(40), 1,
      sym_global_accum_name,
    STATE(443), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19874] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    ACTIONS(900), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(40), 1,
      sym_global_accum_name,
    STATE(474), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19898] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    ACTIONS(900), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(40), 1,
      sym_global_accum_name,
    STATE(476), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19922] = 6,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(884), 1,
      sym_name,
    STATE(613), 1,
      sym_global_accum_name,
    STATE(628), 1,
      sym_seed,
    ACTIONS(882), 2,
      anon_sym__,
      aux_sym_seed_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19944] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    ACTIONS(900), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(40), 1,
      sym_global_accum_name,
    STATE(439), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19968] = 6,
    ACTIONS(756), 1,
      aux_sym_dml_sub_while_stmt_token2,
    ACTIONS(758), 1,
      aux_sym_post_accum_clause_token1,
    ACTIONS(815), 1,
      anon_sym_SEMI,
    STATE(731), 1,
      sym_limit_clause,
    STATE(384), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19990] = 7,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(847), 1,
      anon_sym_LPAREN,
    ACTIONS(900), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(40), 1,
      sym_global_accum_name,
    STATE(301), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20014] = 6,
    ACTIONS(756), 1,
      aux_sym_dml_sub_while_stmt_token2,
    ACTIONS(758), 1,
      aux_sym_post_accum_clause_token1,
    ACTIONS(815), 1,
      anon_sym_SEMI,
    STATE(731), 1,
      sym_limit_clause,
    STATE(401), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20036] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(914), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
  [20049] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(547), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
  [20062] = 4,
    ACTIONS(918), 1,
      aux_sym_post_accum_clause_token1,
    ACTIONS(916), 2,
      anon_sym_SEMI,
      aux_sym_dml_sub_while_stmt_token2,
    STATE(401), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20079] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(118), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20092] = 6,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      anon_sym_LT,
    ACTIONS(921), 1,
      anon_sym_EQ,
    ACTIONS(923), 1,
      anon_sym_DOT,
    STATE(45), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20113] = 4,
    ACTIONS(195), 1,
      sym_digit,
    STATE(35), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(925), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token2,
  [20130] = 3,
    ACTIONS(612), 1,
      aux_sym_print_expr_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(608), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_print_stmt_token2,
  [20145] = 4,
    ACTIONS(929), 1,
      anon_sym_PIPE,
    STATE(410), 1,
      aux_sym_disj_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(927), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [20162] = 5,
    ACTIONS(931), 1,
      anon_sym_RPAREN,
    ACTIONS(935), 1,
      anon_sym_PIPE,
    STATE(537), 1,
      aux_sym_step_edge_types_repeat1,
    ACTIONS(933), 2,
      anon_sym_GT,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20181] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(937), 5,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [20194] = 6,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(939), 1,
      sym_name,
    STATE(652), 1,
      sym_file_path,
    STATE(655), 1,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20215] = 4,
    ACTIONS(943), 1,
      anon_sym_PIPE,
    STATE(410), 1,
      aux_sym_disj_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(941), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [20232] = 6,
    ACTIONS(946), 1,
      anon_sym_COMMA,
    ACTIONS(948), 1,
      anon_sym_SEMI,
    ACTIONS(950), 1,
      aux_sym_where_clause_token1,
    ACTIONS(952), 1,
      aux_sym_print_stmt_token2,
    STATE(414), 1,
      aux_sym_print_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20253] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(954), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
  [20266] = 6,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(956), 1,
      sym_name,
    STATE(655), 1,
      sym_string_literal,
    STATE(792), 1,
      sym_file_path,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20287] = 4,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(414), 1,
      aux_sym_print_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(961), 3,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_print_stmt_token2,
  [20304] = 6,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      anon_sym_LT,
    ACTIONS(963), 1,
      anon_sym_EQ,
    ACTIONS(965), 1,
      anon_sym_DOT,
    STATE(45), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20325] = 4,
    ACTIONS(969), 1,
      anon_sym_GT,
    ACTIONS(967), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(971), 2,
      anon_sym_DOT,
      anon_sym_PIPE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20342] = 4,
    ACTIONS(929), 1,
      anon_sym_PIPE,
    STATE(406), 1,
      aux_sym_disj_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(973), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [20359] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(975), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20372] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(933), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20385] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(872), 5,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [20398] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(977), 5,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [20411] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(954), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
  [20424] = 6,
    ACTIONS(946), 1,
      anon_sym_COMMA,
    ACTIONS(979), 1,
      anon_sym_SEMI,
    ACTIONS(981), 1,
      aux_sym_where_clause_token1,
    ACTIONS(983), 1,
      aux_sym_print_stmt_token2,
    STATE(411), 1,
      aux_sym_print_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20445] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(985), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
  [20458] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(987), 5,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [20471] = 6,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(989), 1,
      sym_name,
    STATE(655), 1,
      sym_string_literal,
    STATE(723), 1,
      sym_file_path,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20492] = 3,
    ACTIONS(969), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(971), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20507] = 6,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(991), 1,
      sym_name,
    STATE(655), 1,
      sym_string_literal,
    STATE(794), 1,
      sym_file_path,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20528] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(993), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20540] = 3,
    ACTIONS(995), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(187), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
  [20554] = 4,
    ACTIONS(997), 1,
      anon_sym_SEMI,
    ACTIONS(999), 1,
      aux_sym_print_stmt_token2,
    ACTIONS(910), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20570] = 4,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    STATE(471), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(1001), 2,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20586] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1003), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_print_stmt_token2,
  [20598] = 3,
    ACTIONS(1007), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1005), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [20612] = 3,
    ACTIONS(1011), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1009), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [20626] = 5,
    ACTIONS(839), 1,
      anon_sym_AT_AT,
    ACTIONS(1013), 1,
      sym_name,
    STATE(322), 1,
      sym_global_accum_name,
    STATE(582), 1,
      sym_vertex_set_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20644] = 5,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(1015), 1,
      sym_name,
    STATE(418), 1,
      sym_global_accum_name,
    STATE(590), 1,
      sym_edge_set_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20662] = 4,
    ACTIONS(1019), 1,
      aux_sym_dml_sub_case_stmt_token2,
    STATE(438), 1,
      aux_sym_query_body_case_stmt_repeat2,
    ACTIONS(1017), 2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20678] = 3,
    ACTIONS(1022), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(187), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
  [20692] = 3,
    ACTIONS(1024), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1026), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
  [20706] = 3,
    ACTIONS(1030), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1028), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [20720] = 3,
    ACTIONS(1032), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1026), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
  [20734] = 3,
    ACTIONS(1034), 1,
      aux_sym_dml_sub_while_stmt_token3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(187), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
  [20748] = 3,
    ACTIONS(1038), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1036), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [20762] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(941), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20774] = 5,
    ACTIONS(1040), 1,
      sym_name,
    ACTIONS(1042), 1,
      sym_digit,
    STATE(525), 1,
      aux_sym_accum_type_repeat1,
    STATE(658), 1,
      sym_simple_size,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20792] = 4,
    ACTIONS(1046), 1,
      aux_sym_dml_sub_case_stmt_token2,
    STATE(447), 1,
      aux_sym_query_body_case_stmt_repeat1,
    ACTIONS(1044), 2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20808] = 5,
    ACTIONS(726), 1,
      aux_sym_dml_sub_case_stmt_token2,
    ACTIONS(1049), 1,
      aux_sym_dml_sub_if_stmt_token3,
    ACTIONS(1051), 1,
      aux_sym_dml_sub_if_stmt_token4,
    STATE(438), 1,
      aux_sym_query_body_case_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20826] = 5,
    ACTIONS(839), 1,
      anon_sym_AT_AT,
    ACTIONS(1013), 1,
      sym_name,
    STATE(322), 1,
      sym_global_accum_name,
    STATE(627), 1,
      sym_vertex_set_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20844] = 5,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(1015), 1,
      sym_name,
    STATE(418), 1,
      sym_global_accum_name,
    STATE(635), 1,
      sym_edge_set_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20862] = 3,
    ACTIONS(1055), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1053), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [20876] = 4,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(569), 2,
      sym_global_accum_name,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20892] = 3,
    ACTIONS(1059), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1057), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [20906] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(118), 4,
      anon_sym_RPAREN,
      aux_sym_for_each_control_token1,
      anon_sym_COLON,
      anon_sym_PIPE2,
  [20918] = 5,
    ACTIONS(708), 1,
      anon_sym_COMMA,
    ACTIONS(1061), 1,
      anon_sym_EQ,
    ACTIONS(1063), 1,
      anon_sym_SEMI,
    STATE(554), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20936] = 5,
    ACTIONS(1065), 1,
      anon_sym_COMMA,
    ACTIONS(1067), 1,
      anon_sym_EQ,
    ACTIONS(1069), 1,
      anon_sym_SEMI,
    STATE(565), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20954] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(961), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_print_stmt_token2,
  [20966] = 4,
    ACTIONS(1073), 1,
      aux_sym_dml_sub_case_stmt_token2,
    STATE(458), 1,
      aux_sym_dml_sub_case_stmt_repeat1,
    ACTIONS(1071), 2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20982] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1076), 4,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
  [20994] = 4,
    ACTIONS(1078), 1,
      aux_sym_dml_sub_while_stmt_token2,
    ACTIONS(1080), 1,
      aux_sym_dml_sub_while_stmt_token3,
    ACTIONS(910), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21010] = 5,
    ACTIONS(1082), 1,
      aux_sym_dml_sub_if_stmt_token3,
    ACTIONS(1084), 1,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(1086), 1,
      aux_sym_dml_sub_case_stmt_token2,
    STATE(447), 1,
      aux_sym_query_body_case_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21028] = 4,
    ACTIONS(681), 1,
      anon_sym_COMMA,
    STATE(465), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(1001), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21044] = 5,
    ACTIONS(1088), 1,
      aux_sym_dml_sub_if_stmt_token3,
    ACTIONS(1090), 1,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(1092), 1,
      aux_sym_dml_sub_case_stmt_token2,
    STATE(458), 1,
      aux_sym_dml_sub_case_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21062] = 4,
    ACTIONS(1094), 1,
      aux_sym_dml_sub_while_stmt_token2,
    ACTIONS(1096), 1,
      aux_sym_dml_sub_while_stmt_token3,
    ACTIONS(910), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21078] = 4,
    ACTIONS(1098), 1,
      anon_sym_COMMA,
    STATE(465), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(702), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21094] = 5,
    ACTIONS(147), 1,
      anon_sym_DOT,
    ACTIONS(1101), 1,
      anon_sym_EQ,
    ACTIONS(1103), 1,
      anon_sym_PLUS_EQ,
    STATE(45), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21112] = 4,
    ACTIONS(43), 1,
      anon_sym_AT_AT,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(456), 2,
      sym_global_accum_name,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21128] = 4,
    ACTIONS(1105), 1,
      anon_sym_SEMI,
    ACTIONS(1107), 1,
      aux_sym_print_stmt_token2,
    ACTIONS(910), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21144] = 3,
    ACTIONS(1111), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1109), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [21158] = 5,
    ACTIONS(1040), 1,
      sym_name,
    ACTIONS(1042), 1,
      sym_digit,
    STATE(525), 1,
      aux_sym_accum_type_repeat1,
    STATE(708), 1,
      sym_simple_size,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21176] = 4,
    ACTIONS(1113), 1,
      anon_sym_COMMA,
    STATE(471), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(702), 2,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21192] = 3,
    ACTIONS(1116), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(187), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
  [21206] = 3,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(187), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
  [21220] = 3,
    ACTIONS(1120), 1,
      aux_sym_dml_sub_while_stmt_token3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(187), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
  [21234] = 3,
    ACTIONS(1122), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(645), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [21248] = 3,
    ACTIONS(1120), 1,
      aux_sym_dml_sub_while_stmt_token3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(187), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
  [21262] = 4,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
    ACTIONS(1126), 1,
      anon_sym_COMMA,
    STATE(488), 1,
      aux_sym_accum_type_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21277] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1076), 3,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
  [21288] = 4,
    ACTIONS(708), 1,
      anon_sym_COMMA,
    ACTIONS(1128), 1,
      anon_sym_SEMI,
    STATE(559), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21303] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1130), 3,
      ts_builtin_sym_end,
      aux_sym_create_query_token1,
      aux_sym_interpret_query_token1,
  [21314] = 4,
    ACTIONS(1132), 1,
      anon_sym_AT,
    ACTIONS(1134), 1,
      sym_name,
    STATE(329), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21329] = 3,
    ACTIONS(1136), 1,
      aux_sym_dml_sub_if_stmt_token2,
    ACTIONS(910), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21342] = 4,
    ACTIONS(1138), 1,
      anon_sym_RPAREN,
    ACTIONS(1140), 1,
      anon_sym_PIPE2,
    STATE(526), 1,
      aux_sym_step_vertex_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21357] = 4,
    ACTIONS(1142), 1,
      anon_sym_COMMA,
    ACTIONS(1145), 1,
      anon_sym_GT,
    STATE(484), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21372] = 4,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    ACTIONS(1149), 1,
      anon_sym_GT,
    STATE(484), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21387] = 4,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    ACTIONS(1151), 1,
      anon_sym_GT,
    STATE(485), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21402] = 3,
    ACTIONS(1153), 1,
      aux_sym_dml_sub_if_stmt_token2,
    ACTIONS(910), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21415] = 4,
    ACTIONS(1126), 1,
      anon_sym_COMMA,
    ACTIONS(1155), 1,
      anon_sym_RPAREN,
    STATE(558), 1,
      aux_sym_accum_type_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21430] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1157), 3,
      ts_builtin_sym_end,
      aux_sym_create_query_token1,
      aux_sym_interpret_query_token1,
  [21441] = 4,
    ACTIONS(1065), 1,
      anon_sym_COMMA,
    ACTIONS(1159), 1,
      anon_sym_SEMI,
    STATE(562), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21456] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(645), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [21467] = 3,
    ACTIONS(1161), 1,
      anon_sym_RPAREN,
    ACTIONS(910), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21480] = 3,
    ACTIONS(1163), 1,
      anon_sym_RPAREN,
    ACTIONS(910), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21493] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1165), 3,
      ts_builtin_sym_end,
      aux_sym_create_query_token1,
      aux_sym_interpret_query_token1,
  [21504] = 3,
    ACTIONS(1167), 1,
      anon_sym_RPAREN,
    ACTIONS(910), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21517] = 4,
    ACTIONS(1169), 1,
      aux_sym_dml_sub_if_stmt_token3,
    ACTIONS(1172), 1,
      aux_sym_dml_sub_if_stmt_token4,
    STATE(496), 1,
      aux_sym_query_body_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21532] = 4,
    ACTIONS(1174), 1,
      aux_sym_dml_sub_if_stmt_token3,
    ACTIONS(1177), 1,
      aux_sym_dml_sub_if_stmt_token4,
    STATE(497), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21547] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1179), 3,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
  [21558] = 4,
    ACTIONS(1181), 1,
      anon_sym_SQUOTE,
    ACTIONS(1183), 1,
      aux_sym_string_literal_token2,
    STATE(512), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1185), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21573] = 4,
    ACTIONS(1181), 1,
      anon_sym_DQUOTE,
    ACTIONS(1187), 1,
      aux_sym_string_literal_token1,
    STATE(506), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1185), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21588] = 4,
    ACTIONS(1189), 1,
      anon_sym_AT,
    ACTIONS(1191), 1,
      sym_name,
    STATE(179), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21603] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1193), 3,
      ts_builtin_sym_end,
      aux_sym_create_query_token1,
      aux_sym_interpret_query_token1,
  [21614] = 4,
    ACTIONS(1195), 1,
      anon_sym_LPAREN,
    ACTIONS(1197), 1,
      sym_name,
    STATE(440), 1,
      sym_simple_set,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21629] = 4,
    ACTIONS(1199), 1,
      anon_sym_COMMA,
    ACTIONS(1201), 1,
      anon_sym_RBRACE,
    STATE(519), 1,
      aux_sym_seed_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21644] = 4,
    ACTIONS(195), 1,
      sym_digit,
    ACTIONS(1203), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21659] = 4,
    ACTIONS(1205), 1,
      anon_sym_DQUOTE,
    ACTIONS(1207), 1,
      aux_sym_string_literal_token1,
    STATE(506), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1185), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21674] = 4,
    ACTIONS(1210), 1,
      aux_sym_create_query_token8,
    ACTIONS(1212), 1,
      anon_sym_LBRACE,
    STATE(521), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21689] = 4,
    ACTIONS(1214), 1,
      anon_sym_SQUOTE,
    ACTIONS(1216), 1,
      aux_sym_string_literal_token2,
    STATE(499), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1185), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21704] = 4,
    ACTIONS(1218), 1,
      anon_sym_RPAREN,
    ACTIONS(1220), 1,
      anon_sym_PIPE,
    STATE(509), 1,
      aux_sym_step_edge_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21719] = 4,
    ACTIONS(1124), 1,
      anon_sym_GT,
    ACTIONS(1223), 1,
      anon_sym_COMMA,
    STATE(511), 1,
      aux_sym_accum_type_repeat4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21734] = 4,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    ACTIONS(1228), 1,
      anon_sym_GT,
    STATE(511), 1,
      aux_sym_accum_type_repeat4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21749] = 4,
    ACTIONS(1230), 1,
      anon_sym_SQUOTE,
    ACTIONS(1232), 1,
      aux_sym_string_literal_token2,
    STATE(512), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1185), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21764] = 4,
    ACTIONS(1235), 1,
      anon_sym_COMMA,
    ACTIONS(1238), 1,
      anon_sym_RBRACK,
    STATE(513), 1,
      aux_sym_v_expr_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21779] = 4,
    ACTIONS(1214), 1,
      anon_sym_DQUOTE,
    ACTIONS(1240), 1,
      aux_sym_string_literal_token1,
    STATE(500), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1185), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21794] = 3,
    ACTIONS(1242), 1,
      aux_sym_dml_sub_if_stmt_token2,
    ACTIONS(910), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21807] = 4,
    ACTIONS(1244), 1,
      aux_sym_dml_sub_if_stmt_token3,
    ACTIONS(1246), 1,
      aux_sym_dml_sub_if_stmt_token4,
    STATE(544), 1,
      aux_sym_query_body_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21822] = 4,
    ACTIONS(1244), 1,
      aux_sym_dml_sub_if_stmt_token3,
    ACTIONS(1246), 1,
      aux_sym_dml_sub_if_stmt_token4,
    STATE(544), 1,
      aux_sym_query_body_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21837] = 4,
    ACTIONS(1212), 1,
      anon_sym_LBRACE,
    ACTIONS(1248), 1,
      aux_sym_create_query_token8,
    STATE(528), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21852] = 4,
    ACTIONS(1250), 1,
      anon_sym_COMMA,
    ACTIONS(1253), 1,
      anon_sym_RBRACE,
    STATE(519), 1,
      aux_sym_seed_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21867] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(677), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [21878] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1255), 3,
      ts_builtin_sym_end,
      aux_sym_create_query_token1,
      aux_sym_interpret_query_token1,
  [21889] = 4,
    ACTIONS(1257), 1,
      anon_sym_COMMA,
    ACTIONS(1259), 1,
      anon_sym_RBRACK,
    STATE(513), 1,
      aux_sym_v_expr_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21904] = 4,
    ACTIONS(1212), 1,
      anon_sym_LBRACE,
    ACTIONS(1261), 1,
      aux_sym_create_query_token8,
    STATE(545), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21919] = 4,
    ACTIONS(193), 1,
      anon_sym_DOT,
    ACTIONS(1263), 1,
      sym_digit,
    STATE(379), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21934] = 4,
    ACTIONS(195), 1,
      sym_digit,
    ACTIONS(1265), 1,
      aux_sym_dml_sub_while_stmt_token3,
    STATE(35), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21949] = 4,
    ACTIONS(1267), 1,
      anon_sym_RPAREN,
    ACTIONS(1269), 1,
      anon_sym_PIPE2,
    STATE(526), 1,
      aux_sym_step_vertex_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21964] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1272), 3,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
  [21975] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1274), 3,
      ts_builtin_sym_end,
      aux_sym_create_query_token1,
      aux_sym_interpret_query_token1,
  [21986] = 4,
    ACTIONS(1276), 1,
      aux_sym_dml_sub_if_stmt_token3,
    ACTIONS(1278), 1,
      aux_sym_dml_sub_if_stmt_token4,
    STATE(497), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22001] = 4,
    ACTIONS(1280), 1,
      anon_sym_RPAREN,
    ACTIONS(1282), 1,
      anon_sym_COMMA,
    STATE(530), 1,
      aux_sym_for_each_control_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22016] = 4,
    ACTIONS(1285), 1,
      anon_sym_RPAREN,
    ACTIONS(1287), 1,
      anon_sym_DOT,
    ACTIONS(1289), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22031] = 4,
    ACTIONS(1291), 1,
      anon_sym_RPAREN,
    ACTIONS(1293), 1,
      anon_sym_COMMA,
    STATE(530), 1,
      aux_sym_for_each_control_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22046] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(973), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [22057] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1295), 3,
      ts_builtin_sym_end,
      aux_sym_create_query_token1,
      aux_sym_interpret_query_token1,
  [22068] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1297), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [22079] = 4,
    ACTIONS(1257), 1,
      anon_sym_COMMA,
    ACTIONS(1299), 1,
      anon_sym_RBRACK,
    STATE(522), 1,
      aux_sym_v_expr_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22094] = 4,
    ACTIONS(935), 1,
      anon_sym_PIPE,
    ACTIONS(1301), 1,
      anon_sym_RPAREN,
    STATE(509), 1,
      aux_sym_step_edge_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22109] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1297), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [22120] = 4,
    ACTIONS(1189), 1,
      anon_sym_AT,
    ACTIONS(1303), 1,
      sym_name,
    STATE(179), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22135] = 4,
    ACTIONS(1223), 1,
      anon_sym_COMMA,
    ACTIONS(1305), 1,
      anon_sym_GT,
    STATE(510), 1,
      aux_sym_accum_type_repeat4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22150] = 4,
    ACTIONS(1212), 1,
      anon_sym_LBRACE,
    ACTIONS(1307), 1,
      aux_sym_create_query_token8,
    STATE(575), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22165] = 3,
    ACTIONS(1309), 1,
      aux_sym_dml_sub_if_stmt_token2,
    ACTIONS(910), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22178] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1311), 3,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
  [22189] = 4,
    ACTIONS(1313), 1,
      aux_sym_dml_sub_if_stmt_token3,
    ACTIONS(1315), 1,
      aux_sym_dml_sub_if_stmt_token4,
    STATE(496), 1,
      aux_sym_query_body_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22204] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1317), 3,
      ts_builtin_sym_end,
      aux_sym_create_query_token1,
      aux_sym_interpret_query_token1,
  [22215] = 4,
    ACTIONS(1223), 1,
      anon_sym_COMMA,
    ACTIONS(1305), 1,
      anon_sym_GT,
    STATE(511), 1,
      aux_sym_accum_type_repeat4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22230] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1319), 3,
      ts_builtin_sym_end,
      aux_sym_create_query_token1,
      aux_sym_interpret_query_token1,
  [22241] = 3,
    ACTIONS(1323), 1,
      anon_sym_DOT_STAR,
    ACTIONS(1321), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22254] = 4,
    ACTIONS(1325), 1,
      anon_sym_LPAREN,
    ACTIONS(1327), 1,
      anon_sym_EQ,
    ACTIONS(1329), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22269] = 4,
    ACTIONS(1331), 1,
      anon_sym_AT,
    ACTIONS(1333), 1,
      sym_name,
    STATE(21), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22284] = 4,
    ACTIONS(1335), 1,
      anon_sym_DQUOTE,
    ACTIONS(1337), 1,
      aux_sym_string_literal_token1,
    STATE(587), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1185), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22299] = 4,
    ACTIONS(1335), 1,
      anon_sym_SQUOTE,
    ACTIONS(1339), 1,
      aux_sym_string_literal_token2,
    STATE(588), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1185), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22314] = 4,
    ACTIONS(1199), 1,
      anon_sym_COMMA,
    ACTIONS(1341), 1,
      anon_sym_RBRACE,
    STATE(504), 1,
      aux_sym_seed_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22329] = 4,
    ACTIONS(708), 1,
      anon_sym_COMMA,
    ACTIONS(1343), 1,
      anon_sym_SEMI,
    STATE(559), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22344] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1345), 3,
      ts_builtin_sym_end,
      aux_sym_create_query_token1,
      aux_sym_interpret_query_token1,
  [22355] = 3,
    ACTIONS(1347), 1,
      aux_sym_dml_sub_if_stmt_token2,
    ACTIONS(910), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22368] = 3,
    ACTIONS(1349), 1,
      anon_sym_RPAREN,
    ACTIONS(910), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22381] = 4,
    ACTIONS(1351), 1,
      anon_sym_RPAREN,
    ACTIONS(1353), 1,
      anon_sym_COMMA,
    STATE(558), 1,
      aux_sym_accum_type_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22396] = 4,
    ACTIONS(1356), 1,
      anon_sym_COMMA,
    ACTIONS(1359), 1,
      anon_sym_SEMI,
    STATE(559), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22411] = 4,
    ACTIONS(1361), 1,
      aux_sym_create_query_token2,
    ACTIONS(1363), 1,
      aux_sym_create_query_token4,
    ACTIONS(1365), 1,
      aux_sym_create_query_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22426] = 3,
    ACTIONS(1367), 1,
      anon_sym_EQ,
    ACTIONS(1359), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22439] = 4,
    ACTIONS(1369), 1,
      anon_sym_COMMA,
    ACTIONS(1372), 1,
      anon_sym_SEMI,
    STATE(562), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22454] = 3,
    ACTIONS(1374), 1,
      aux_sym_dml_sub_if_stmt_token2,
    ACTIONS(910), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22467] = 4,
    ACTIONS(1195), 1,
      anon_sym_LPAREN,
    ACTIONS(1197), 1,
      sym_name,
    STATE(412), 1,
      sym_simple_set,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22482] = 4,
    ACTIONS(1065), 1,
      anon_sym_COMMA,
    ACTIONS(1376), 1,
      anon_sym_SEMI,
    STATE(562), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22497] = 4,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    ACTIONS(1378), 1,
      anon_sym_GT,
    STATE(574), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22512] = 4,
    ACTIONS(1065), 1,
      anon_sym_COMMA,
    ACTIONS(1380), 1,
      anon_sym_SEMI,
    STATE(490), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22527] = 4,
    ACTIONS(1132), 1,
      anon_sym_AT,
    ACTIONS(1382), 1,
      sym_name,
    STATE(611), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22542] = 3,
    ACTIONS(1384), 1,
      anon_sym_EQ,
    ACTIONS(1372), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22555] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1386), 3,
      ts_builtin_sym_end,
      aux_sym_create_query_token1,
      aux_sym_interpret_query_token1,
  [22566] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1388), 3,
      anon_sym_SEMI,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [22577] = 4,
    ACTIONS(1212), 1,
      anon_sym_LBRACE,
    ACTIONS(1390), 1,
      aux_sym_create_query_token8,
    STATE(494), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22592] = 4,
    ACTIONS(1223), 1,
      anon_sym_COMMA,
    ACTIONS(1392), 1,
      anon_sym_GT,
    STATE(546), 1,
      aux_sym_accum_type_repeat4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22607] = 4,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    ACTIONS(1394), 1,
      anon_sym_GT,
    STATE(484), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22622] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1396), 3,
      ts_builtin_sym_end,
      aux_sym_create_query_token1,
      aux_sym_interpret_query_token1,
  [22633] = 3,
    STATE(529), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    ACTIONS(1398), 2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22646] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(357), 3,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
  [22657] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1400), 3,
      ts_builtin_sym_end,
      aux_sym_create_query_token1,
      aux_sym_interpret_query_token1,
  [22668] = 4,
    ACTIONS(147), 1,
      anon_sym_DOT,
    ACTIONS(1402), 1,
      anon_sym_PLUS_EQ,
    STATE(45), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22683] = 3,
    ACTIONS(1404), 1,
      aux_sym_dml_sub_if_stmt_token2,
    ACTIONS(910), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22696] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1406), 3,
      anon_sym_SEMI,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [22707] = 4,
    ACTIONS(1140), 1,
      anon_sym_PIPE2,
    ACTIONS(1408), 1,
      anon_sym_RPAREN,
    STATE(483), 1,
      aux_sym_step_vertex_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22722] = 4,
    ACTIONS(1410), 1,
      aux_sym_dml_sub_if_stmt_token3,
    ACTIONS(1412), 1,
      aux_sym_dml_sub_if_stmt_token4,
    STATE(529), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22737] = 3,
    ACTIONS(1414), 1,
      anon_sym_RPAREN,
    ACTIONS(910), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22750] = 3,
    ACTIONS(1416), 1,
      aux_sym_dml_sub_if_stmt_token2,
    ACTIONS(910), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22763] = 4,
    ACTIONS(1331), 1,
      anon_sym_AT,
    ACTIONS(1418), 1,
      sym_name,
    STATE(21), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22778] = 4,
    ACTIONS(1187), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1420), 1,
      anon_sym_DQUOTE,
    STATE(506), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1185), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22793] = 4,
    ACTIONS(1183), 1,
      aux_sym_string_literal_token2,
    ACTIONS(1420), 1,
      anon_sym_SQUOTE,
    STATE(512), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1185), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22808] = 4,
    ACTIONS(1422), 1,
      sym_name,
    STATE(346), 1,
      sym_step_source_set,
    STATE(386), 1,
      sym_path_pattern,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22823] = 4,
    ACTIONS(931), 1,
      anon_sym_RPAREN,
    ACTIONS(935), 1,
      anon_sym_PIPE,
    STATE(537), 1,
      aux_sym_step_edge_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22838] = 3,
    ACTIONS(1414), 1,
      aux_sym_condition_token3,
    ACTIONS(1424), 1,
      aux_sym_condition_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22850] = 3,
    ACTIONS(1426), 1,
      sym_digit,
    STATE(47), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22862] = 3,
    ACTIONS(1428), 1,
      aux_sym_for_each_control_token1,
    ACTIONS(1430), 1,
      aux_sym_condition_token8,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22874] = 3,
    ACTIONS(1432), 1,
      sym_digit,
    STATE(42), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22886] = 3,
    ACTIONS(1092), 1,
      aux_sym_dml_sub_case_stmt_token2,
    STATE(463), 1,
      aux_sym_dml_sub_case_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22898] = 3,
    ACTIONS(1287), 1,
      anon_sym_DOT,
    ACTIONS(1434), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22910] = 3,
    ACTIONS(1293), 1,
      anon_sym_COMMA,
    STATE(532), 1,
      aux_sym_for_each_control_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22922] = 2,
    ACTIONS(1398), 2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22932] = 3,
    ACTIONS(1436), 1,
      anon_sym_RPAREN,
    ACTIONS(1438), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22944] = 3,
    ACTIONS(1212), 1,
      anon_sym_LBRACE,
    STATE(502), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22956] = 3,
    ACTIONS(1440), 1,
      sym_digit,
    STATE(209), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22968] = 2,
    ACTIONS(1442), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22978] = 3,
    ACTIONS(1444), 1,
      sym_digit,
    STATE(213), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22990] = 3,
    ACTIONS(1446), 1,
      aux_sym_for_each_control_token1,
    ACTIONS(1448), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23002] = 3,
    ACTIONS(1212), 1,
      anon_sym_LBRACE,
    STATE(480), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23014] = 3,
    ACTIONS(1325), 1,
      anon_sym_LPAREN,
    ACTIONS(1327), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23026] = 2,
    ACTIONS(1450), 2,
      aux_sym_accum_type_token18,
      aux_sym_accum_type_token19,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23036] = 2,
    ACTIONS(1452), 2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23046] = 2,
    ACTIONS(1454), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23056] = 3,
    ACTIONS(1456), 1,
      sym_digit,
    STATE(211), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23068] = 2,
    ACTIONS(1458), 2,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23078] = 3,
    ACTIONS(1460), 1,
      sym_digit,
    STATE(43), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23090] = 2,
    ACTIONS(1321), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23100] = 2,
    ACTIONS(1462), 2,
      aux_sym_accum_type_token18,
      aux_sym_accum_type_token19,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23110] = 3,
    ACTIONS(1212), 1,
      anon_sym_LBRACE,
    STATE(578), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23122] = 2,
    ACTIONS(967), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23132] = 3,
    ACTIONS(147), 1,
      anon_sym_DOT,
    STATE(45), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23144] = 2,
    ACTIONS(1464), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23154] = 3,
    ACTIONS(1466), 1,
      aux_sym_from_clause_token1,
    STATE(323), 1,
      sym_from_clause,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23166] = 2,
    ACTIONS(1468), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23176] = 3,
    ACTIONS(1470), 1,
      anon_sym_RPAREN,
    ACTIONS(1472), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23188] = 3,
    ACTIONS(1474), 1,
      anon_sym_COMMA,
    STATE(626), 1,
      aux_sym_accum_type_repeat3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23200] = 3,
    ACTIONS(1476), 1,
      aux_sym_for_each_control_token1,
    ACTIONS(1478), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23212] = 3,
    ACTIONS(1212), 1,
      anon_sym_LBRACE,
    STATE(547), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23224] = 3,
    ACTIONS(1480), 1,
      sym_digit,
    STATE(505), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23236] = 3,
    ACTIONS(1482), 1,
      anon_sym_COMMA,
    STATE(637), 1,
      aux_sym_accum_type_repeat3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23248] = 2,
    ACTIONS(1267), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23258] = 2,
    ACTIONS(1253), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23268] = 3,
    ACTIONS(501), 1,
      anon_sym_DOT,
    STATE(208), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23280] = 3,
    ACTIONS(1484), 1,
      sym_digit,
    STATE(210), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23292] = 3,
    ACTIONS(1486), 1,
      anon_sym_DOT,
    ACTIONS(1488), 1,
      aux_sym_dml_sub_while_stmt_token3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23304] = 2,
    ACTIONS(1490), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23314] = 2,
    ACTIONS(1238), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23324] = 2,
    ACTIONS(1492), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23334] = 2,
    ACTIONS(1218), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23344] = 2,
    ACTIONS(1494), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23354] = 3,
    ACTIONS(1496), 1,
      anon_sym_COMMA,
    STATE(637), 1,
      aux_sym_accum_type_repeat3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23366] = 3,
    ACTIONS(1499), 1,
      anon_sym_RPAREN,
    ACTIONS(1501), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23378] = 3,
    ACTIONS(1503), 1,
      sym_digit,
    STATE(46), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23390] = 2,
    ACTIONS(1145), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23400] = 3,
    ACTIONS(1505), 1,
      sym_digit,
    STATE(404), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23412] = 3,
    ACTIONS(1212), 1,
      anon_sym_LBRACE,
    STATE(555), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23424] = 3,
    ACTIONS(1507), 1,
      anon_sym_LPAREN,
    STATE(793), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23436] = 3,
    ACTIONS(1507), 1,
      anon_sym_LPAREN,
    STATE(806), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23448] = 3,
    ACTIONS(1507), 1,
      anon_sym_LPAREN,
    STATE(815), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23460] = 3,
    ACTIONS(1507), 1,
      anon_sym_LPAREN,
    STATE(833), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23472] = 3,
    ACTIONS(1509), 1,
      aux_sym_create_query_token4,
    ACTIONS(1511), 1,
      aux_sym_create_query_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23484] = 2,
    ACTIONS(1513), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23494] = 3,
    ACTIONS(1507), 1,
      anon_sym_LPAREN,
    STATE(841), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23506] = 2,
    ACTIONS(1515), 1,
      aux_sym_create_query_token9,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23515] = 2,
    ACTIONS(1517), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23524] = 2,
    ACTIONS(1105), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23533] = 2,
    ACTIONS(1519), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23542] = 2,
    ACTIONS(1521), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23551] = 2,
    ACTIONS(1523), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23560] = 2,
    ACTIONS(1525), 1,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23569] = 2,
    ACTIONS(1527), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23578] = 2,
    ACTIONS(1529), 1,
      aux_sym_dml_sub_while_stmt_token3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23587] = 2,
    ACTIONS(1531), 1,
      anon_sym_DASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23596] = 2,
    ACTIONS(1533), 1,
      aux_sym_aggregator_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23605] = 2,
    ACTIONS(995), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23614] = 2,
    ACTIONS(1265), 1,
      aux_sym_dml_sub_while_stmt_token3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23623] = 2,
    ACTIONS(1535), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23632] = 2,
    ACTIONS(1537), 1,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23641] = 2,
    ACTIONS(1539), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23650] = 2,
    ACTIONS(1541), 1,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23659] = 2,
    ACTIONS(1543), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23668] = 2,
    ACTIONS(1545), 1,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23677] = 2,
    ACTIONS(1547), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23686] = 2,
    ACTIONS(1549), 1,
      aux_sym_dml_sub_if_stmt_token2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23695] = 2,
    ACTIONS(1105), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23704] = 2,
    ACTIONS(1551), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23713] = 2,
    ACTIONS(1553), 1,
      aux_sym_for_each_control_token3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23722] = 2,
    ACTIONS(1555), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23731] = 2,
    ACTIONS(1557), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23740] = 2,
    ACTIONS(1559), 1,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23749] = 2,
    ACTIONS(1561), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23758] = 2,
    ACTIONS(1563), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23767] = 2,
    ACTIONS(1565), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23776] = 2,
    ACTIONS(1567), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23785] = 2,
    ACTIONS(1325), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23794] = 2,
    ACTIONS(1569), 1,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23803] = 2,
    ACTIONS(1571), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23812] = 2,
    ACTIONS(1573), 1,
      aux_sym_condition_token3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23821] = 2,
    ACTIONS(815), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23830] = 2,
    ACTIONS(1575), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23839] = 2,
    ACTIONS(1577), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23848] = 2,
    ACTIONS(1579), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23857] = 2,
    ACTIONS(1581), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23866] = 2,
    ACTIONS(1583), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23875] = 2,
    ACTIONS(1585), 1,
      aux_sym_from_clause_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23884] = 2,
    ACTIONS(1587), 1,
      aux_sym_expr_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23893] = 2,
    ACTIONS(1589), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23902] = 2,
    ACTIONS(1591), 1,
      aux_sym_gsql_select_clause_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23911] = 2,
    ACTIONS(1032), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23920] = 2,
    ACTIONS(1593), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23929] = 2,
    ACTIONS(1595), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23938] = 2,
    ACTIONS(1597), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23947] = 2,
    ACTIONS(1599), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23956] = 2,
    ACTIONS(1601), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23965] = 2,
    ACTIONS(1603), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23974] = 2,
    ACTIONS(1605), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23983] = 2,
    ACTIONS(1607), 1,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23992] = 2,
    ACTIONS(1609), 1,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24001] = 2,
    ACTIONS(1611), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24010] = 2,
    ACTIONS(1613), 1,
      aux_sym_dml_sub_while_stmt_token3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24019] = 2,
    ACTIONS(1615), 1,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24028] = 2,
    ACTIONS(1617), 1,
      aux_sym_dml_sub_while_stmt_token3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24037] = 2,
    ACTIONS(1619), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24046] = 2,
    ACTIONS(1621), 1,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24055] = 2,
    ACTIONS(1623), 1,
      anon_sym_DASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24064] = 2,
    ACTIONS(1625), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24073] = 2,
    ACTIONS(1627), 1,
      anon_sym_DASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24082] = 2,
    ACTIONS(1629), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24091] = 2,
    ACTIONS(1631), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24100] = 2,
    ACTIONS(1633), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24109] = 2,
    ACTIONS(1635), 1,
      aux_sym_aggregator_token3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24118] = 2,
    ACTIONS(1637), 1,
      anon_sym_DASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24127] = 2,
    ACTIONS(427), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24136] = 2,
    ACTIONS(1639), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24145] = 2,
    ACTIONS(1641), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24154] = 2,
    ACTIONS(1643), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24163] = 2,
    ACTIONS(1645), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24172] = 2,
    ACTIONS(1645), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24181] = 2,
    ACTIONS(1647), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24190] = 2,
    ACTIONS(1649), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24199] = 2,
    ACTIONS(1651), 1,
      aux_sym_create_query_token9,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24208] = 2,
    ACTIONS(1653), 1,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24217] = 2,
    ACTIONS(1655), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24226] = 2,
    ACTIONS(1657), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24235] = 2,
    ACTIONS(904), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24244] = 2,
    ACTIONS(1659), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24253] = 2,
    ACTIONS(1076), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24262] = 2,
    ACTIONS(1661), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24271] = 2,
    ACTIONS(902), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24280] = 2,
    ACTIONS(1663), 1,
      aux_sym_dml_sub_while_stmt_token3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24289] = 2,
    ACTIONS(1665), 1,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24298] = 2,
    ACTIONS(1667), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24307] = 2,
    ACTIONS(1669), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24316] = 2,
    ACTIONS(1671), 1,
      aux_sym_expr_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24325] = 2,
    ACTIONS(1673), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24334] = 2,
    ACTIONS(1675), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24343] = 2,
    ACTIONS(1022), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24352] = 2,
    ACTIONS(1677), 1,
      aux_sym_aggregator_token2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24361] = 2,
    ACTIONS(1679), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24370] = 2,
    ACTIONS(1681), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24379] = 2,
    ACTIONS(1436), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24388] = 2,
    ACTIONS(1683), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24397] = 2,
    ACTIONS(1685), 1,
      aux_sym_aggregator_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24406] = 2,
    ACTIONS(1687), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24415] = 2,
    ACTIONS(1689), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24424] = 2,
    ACTIONS(1691), 1,
      aux_sym_create_query_token9,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24433] = 2,
    ACTIONS(1693), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24442] = 2,
    ACTIONS(1695), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24451] = 2,
    ACTIONS(1697), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24460] = 2,
    ACTIONS(1499), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24469] = 2,
    ACTIONS(1699), 1,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24478] = 2,
    ACTIONS(1701), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24487] = 2,
    ACTIONS(1703), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24496] = 2,
    ACTIONS(1705), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24505] = 2,
    ACTIONS(1707), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24514] = 2,
    ACTIONS(1709), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24523] = 2,
    ACTIONS(1711), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24532] = 2,
    ACTIONS(1713), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24541] = 2,
    ACTIONS(1715), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24550] = 2,
    ACTIONS(1717), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24559] = 2,
    ACTIONS(1719), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24568] = 2,
    ACTIONS(1721), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24577] = 2,
    ACTIONS(1723), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24586] = 2,
    ACTIONS(1725), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24595] = 2,
    ACTIONS(1727), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24604] = 2,
    ACTIONS(1729), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24613] = 2,
    ACTIONS(1731), 1,
      aux_sym_typedef_token2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24622] = 2,
    ACTIONS(1733), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24631] = 2,
    ACTIONS(1735), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24640] = 2,
    ACTIONS(1737), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24649] = 2,
    ACTIONS(1739), 1,
      aux_sym_create_query_token9,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24658] = 2,
    ACTIONS(1741), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24667] = 2,
    ACTIONS(1743), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24676] = 2,
    ACTIONS(1745), 1,
      aux_sym_create_query_token7,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24685] = 2,
    ACTIONS(1747), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24694] = 2,
    ACTIONS(1749), 1,
      aux_sym_create_query_token9,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24703] = 2,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24712] = 2,
    ACTIONS(997), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24721] = 2,
    ACTIONS(1751), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24730] = 2,
    ACTIONS(1753), 1,
      aux_sym_create_query_token7,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24739] = 2,
    ACTIONS(1755), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24748] = 2,
    ACTIONS(1757), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24757] = 2,
    ACTIONS(1759), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24766] = 2,
    ACTIONS(1761), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24775] = 2,
    ACTIONS(1763), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24784] = 2,
    ACTIONS(997), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24793] = 2,
    ACTIONS(1765), 1,
      aux_sym_create_query_token6,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24802] = 2,
    ACTIONS(1767), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24811] = 2,
    ACTIONS(1767), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24820] = 2,
    ACTIONS(1769), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24829] = 2,
    ACTIONS(1771), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24838] = 2,
    ACTIONS(1773), 1,
      sym_digit,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24847] = 2,
    ACTIONS(449), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24856] = 2,
    ACTIONS(1775), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24865] = 2,
    ACTIONS(1777), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24874] = 2,
    ACTIONS(1779), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24883] = 2,
    ACTIONS(1781), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24892] = 2,
    ACTIONS(1783), 1,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24901] = 2,
    ACTIONS(1785), 1,
      aux_sym_create_query_token7,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24910] = 2,
    ACTIONS(1787), 1,
      aux_sym_create_query_token6,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24919] = 2,
    ACTIONS(1789), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24928] = 2,
    ACTIONS(1791), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24937] = 2,
    ACTIONS(1116), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24946] = 2,
    ACTIONS(1793), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24955] = 2,
    ACTIONS(1795), 1,
      aux_sym_create_query_token6,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24964] = 2,
    ACTIONS(1797), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24973] = 2,
    ACTIONS(1799), 1,
      aux_sym_create_query_token7,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24982] = 2,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24991] = 2,
    ACTIONS(1801), 1,
      aux_sym_create_query_token6,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25000] = 2,
    ACTIONS(1803), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25009] = 2,
    ACTIONS(1805), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25018] = 2,
    ACTIONS(1807), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25027] = 2,
    ACTIONS(1809), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25036] = 2,
    ACTIONS(1811), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25045] = 2,
    ACTIONS(1813), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25054] = 2,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25063] = 2,
    ACTIONS(1815), 1,
      aux_sym_create_query_token7,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25072] = 2,
    ACTIONS(1817), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25081] = 2,
    ACTIONS(1819), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25090] = 2,
    ACTIONS(1821), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25099] = 2,
    ACTIONS(1823), 1,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25108] = 2,
    ACTIONS(1825), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25117] = 2,
    ACTIONS(1827), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25126] = 2,
    ACTIONS(1829), 1,
      aux_sym_create_query_token6,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25135] = 2,
    ACTIONS(1831), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25144] = 2,
    ACTIONS(1833), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25153] = 2,
    ACTIONS(1835), 1,
      aux_sym_create_query_token6,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25162] = 2,
    ACTIONS(1837), 1,
      aux_sym_dml_sub_while_stmt_token3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25171] = 2,
    ACTIONS(1839), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25180] = 2,
    ACTIONS(1841), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25189] = 2,
    ACTIONS(1843), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25198] = 2,
    ACTIONS(1845), 1,
      aux_sym_create_query_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25207] = 2,
    ACTIONS(1847), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25216] = 2,
    ACTIONS(1849), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25225] = 2,
    ACTIONS(1851), 1,
      aux_sym_create_query_token6,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25234] = 2,
    ACTIONS(1853), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25243] = 2,
    ACTIONS(1855), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25252] = 2,
    ACTIONS(1857), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25261] = 2,
    ACTIONS(1859), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25270] = 2,
    ACTIONS(1861), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25279] = 2,
    ACTIONS(1863), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25288] = 2,
    ACTIONS(1865), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25297] = 2,
    ACTIONS(1867), 1,
      aux_sym_create_query_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25306] = 2,
    ACTIONS(1869), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25315] = 2,
    ACTIONS(1871), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25324] = 2,
    ACTIONS(1873), 1,
      aux_sym_create_query_token3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25333] = 2,
    ACTIONS(1875), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25342] = 2,
    ACTIONS(1877), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25351] = 2,
    ACTIONS(1879), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25360] = 2,
    ACTIONS(1881), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25369] = 2,
    ACTIONS(1883), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25378] = 2,
    ACTIONS(1885), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25387] = 2,
    ACTIONS(1887), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25396] = 2,
    ACTIONS(1889), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25405] = 2,
    ACTIONS(1891), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25414] = 2,
    ACTIONS(1893), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25423] = 2,
    ACTIONS(1895), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25432] = 2,
    ACTIONS(1897), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25441] = 2,
    ACTIONS(1899), 1,
      aux_sym_create_query_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25450] = 2,
    ACTIONS(1901), 1,
      aux_sym_expr_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25459] = 2,
    ACTIONS(1903), 1,
      aux_sym_expr_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 246,
  [SMALL_STATE(7)] = 369,
  [SMALL_STATE(8)] = 488,
  [SMALL_STATE(9)] = 607,
  [SMALL_STATE(10)] = 726,
  [SMALL_STATE(11)] = 845,
  [SMALL_STATE(12)] = 964,
  [SMALL_STATE(13)] = 1083,
  [SMALL_STATE(14)] = 1202,
  [SMALL_STATE(15)] = 1321,
  [SMALL_STATE(16)] = 1440,
  [SMALL_STATE(17)] = 1559,
  [SMALL_STATE(18)] = 1678,
  [SMALL_STATE(19)] = 1797,
  [SMALL_STATE(20)] = 1854,
  [SMALL_STATE(21)] = 1915,
  [SMALL_STATE(22)] = 1971,
  [SMALL_STATE(23)] = 2029,
  [SMALL_STATE(24)] = 2085,
  [SMALL_STATE(25)] = 2145,
  [SMALL_STATE(26)] = 2203,
  [SMALL_STATE(27)] = 2261,
  [SMALL_STATE(28)] = 2321,
  [SMALL_STATE(29)] = 2379,
  [SMALL_STATE(30)] = 2435,
  [SMALL_STATE(31)] = 2488,
  [SMALL_STATE(32)] = 2541,
  [SMALL_STATE(33)] = 2594,
  [SMALL_STATE(34)] = 2647,
  [SMALL_STATE(35)] = 2702,
  [SMALL_STATE(36)] = 2758,
  [SMALL_STATE(37)] = 2812,
  [SMALL_STATE(38)] = 2870,
  [SMALL_STATE(39)] = 2922,
  [SMALL_STATE(40)] = 2980,
  [SMALL_STATE(41)] = 3032,
  [SMALL_STATE(42)] = 3084,
  [SMALL_STATE(43)] = 3139,
  [SMALL_STATE(44)] = 3194,
  [SMALL_STATE(45)] = 3249,
  [SMALL_STATE(46)] = 3304,
  [SMALL_STATE(47)] = 3359,
  [SMALL_STATE(48)] = 3414,
  [SMALL_STATE(49)] = 3464,
  [SMALL_STATE(50)] = 3516,
  [SMALL_STATE(51)] = 3568,
  [SMALL_STATE(52)] = 3618,
  [SMALL_STATE(53)] = 3667,
  [SMALL_STATE(54)] = 3716,
  [SMALL_STATE(55)] = 3765,
  [SMALL_STATE(56)] = 3814,
  [SMALL_STATE(57)] = 3863,
  [SMALL_STATE(58)] = 3912,
  [SMALL_STATE(59)] = 3961,
  [SMALL_STATE(60)] = 4010,
  [SMALL_STATE(61)] = 4059,
  [SMALL_STATE(62)] = 4108,
  [SMALL_STATE(63)] = 4157,
  [SMALL_STATE(64)] = 4206,
  [SMALL_STATE(65)] = 4255,
  [SMALL_STATE(66)] = 4304,
  [SMALL_STATE(67)] = 4353,
  [SMALL_STATE(68)] = 4402,
  [SMALL_STATE(69)] = 4451,
  [SMALL_STATE(70)] = 4553,
  [SMALL_STATE(71)] = 4605,
  [SMALL_STATE(72)] = 4659,
  [SMALL_STATE(73)] = 4705,
  [SMALL_STATE(74)] = 4751,
  [SMALL_STATE(75)] = 4806,
  [SMALL_STATE(76)] = 4851,
  [SMALL_STATE(77)] = 4921,
  [SMALL_STATE(78)] = 4991,
  [SMALL_STATE(79)] = 5061,
  [SMALL_STATE(80)] = 5131,
  [SMALL_STATE(81)] = 5201,
  [SMALL_STATE(82)] = 5271,
  [SMALL_STATE(83)] = 5367,
  [SMALL_STATE(84)] = 5437,
  [SMALL_STATE(85)] = 5507,
  [SMALL_STATE(86)] = 5603,
  [SMALL_STATE(87)] = 5673,
  [SMALL_STATE(88)] = 5743,
  [SMALL_STATE(89)] = 5813,
  [SMALL_STATE(90)] = 5883,
  [SMALL_STATE(91)] = 5974,
  [SMALL_STATE(92)] = 6067,
  [SMALL_STATE(93)] = 6158,
  [SMALL_STATE(94)] = 6251,
  [SMALL_STATE(95)] = 6342,
  [SMALL_STATE(96)] = 6433,
  [SMALL_STATE(97)] = 6526,
  [SMALL_STATE(98)] = 6619,
  [SMALL_STATE(99)] = 6710,
  [SMALL_STATE(100)] = 6801,
  [SMALL_STATE(101)] = 6892,
  [SMALL_STATE(102)] = 6985,
  [SMALL_STATE(103)] = 7078,
  [SMALL_STATE(104)] = 7169,
  [SMALL_STATE(105)] = 7262,
  [SMALL_STATE(106)] = 7355,
  [SMALL_STATE(107)] = 7448,
  [SMALL_STATE(108)] = 7539,
  [SMALL_STATE(109)] = 7632,
  [SMALL_STATE(110)] = 7723,
  [SMALL_STATE(111)] = 7814,
  [SMALL_STATE(112)] = 7907,
  [SMALL_STATE(113)] = 7974,
  [SMALL_STATE(114)] = 8065,
  [SMALL_STATE(115)] = 8158,
  [SMALL_STATE(116)] = 8249,
  [SMALL_STATE(117)] = 8342,
  [SMALL_STATE(118)] = 8433,
  [SMALL_STATE(119)] = 8524,
  [SMALL_STATE(120)] = 8615,
  [SMALL_STATE(121)] = 8706,
  [SMALL_STATE(122)] = 8799,
  [SMALL_STATE(123)] = 8892,
  [SMALL_STATE(124)] = 8983,
  [SMALL_STATE(125)] = 9074,
  [SMALL_STATE(126)] = 9167,
  [SMALL_STATE(127)] = 9258,
  [SMALL_STATE(128)] = 9349,
  [SMALL_STATE(129)] = 9442,
  [SMALL_STATE(130)] = 9533,
  [SMALL_STATE(131)] = 9626,
  [SMALL_STATE(132)] = 9719,
  [SMALL_STATE(133)] = 9807,
  [SMALL_STATE(134)] = 9895,
  [SMALL_STATE(135)] = 9983,
  [SMALL_STATE(136)] = 10071,
  [SMALL_STATE(137)] = 10159,
  [SMALL_STATE(138)] = 10247,
  [SMALL_STATE(139)] = 10309,
  [SMALL_STATE(140)] = 10397,
  [SMALL_STATE(141)] = 10485,
  [SMALL_STATE(142)] = 10573,
  [SMALL_STATE(143)] = 10661,
  [SMALL_STATE(144)] = 10746,
  [SMALL_STATE(145)] = 10789,
  [SMALL_STATE(146)] = 10874,
  [SMALL_STATE(147)] = 10959,
  [SMALL_STATE(148)] = 11044,
  [SMALL_STATE(149)] = 11129,
  [SMALL_STATE(150)] = 11214,
  [SMALL_STATE(151)] = 11299,
  [SMALL_STATE(152)] = 11384,
  [SMALL_STATE(153)] = 11469,
  [SMALL_STATE(154)] = 11554,
  [SMALL_STATE(155)] = 11601,
  [SMALL_STATE(156)] = 11686,
  [SMALL_STATE(157)] = 11771,
  [SMALL_STATE(158)] = 11856,
  [SMALL_STATE(159)] = 11941,
  [SMALL_STATE(160)] = 12026,
  [SMALL_STATE(161)] = 12111,
  [SMALL_STATE(162)] = 12196,
  [SMALL_STATE(163)] = 12281,
  [SMALL_STATE(164)] = 12366,
  [SMALL_STATE(165)] = 12451,
  [SMALL_STATE(166)] = 12536,
  [SMALL_STATE(167)] = 12621,
  [SMALL_STATE(168)] = 12706,
  [SMALL_STATE(169)] = 12791,
  [SMALL_STATE(170)] = 12840,
  [SMALL_STATE(171)] = 12925,
  [SMALL_STATE(172)] = 13010,
  [SMALL_STATE(173)] = 13057,
  [SMALL_STATE(174)] = 13142,
  [SMALL_STATE(175)] = 13227,
  [SMALL_STATE(176)] = 13312,
  [SMALL_STATE(177)] = 13397,
  [SMALL_STATE(178)] = 13439,
  [SMALL_STATE(179)] = 13485,
  [SMALL_STATE(180)] = 13527,
  [SMALL_STATE(181)] = 13573,
  [SMALL_STATE(182)] = 13617,
  [SMALL_STATE(183)] = 13661,
  [SMALL_STATE(184)] = 13703,
  [SMALL_STATE(185)] = 13747,
  [SMALL_STATE(186)] = 13811,
  [SMALL_STATE(187)] = 13853,
  [SMALL_STATE(188)] = 13917,
  [SMALL_STATE(189)] = 13961,
  [SMALL_STATE(190)] = 14000,
  [SMALL_STATE(191)] = 14039,
  [SMALL_STATE(192)] = 14080,
  [SMALL_STATE(193)] = 14119,
  [SMALL_STATE(194)] = 14160,
  [SMALL_STATE(195)] = 14203,
  [SMALL_STATE(196)] = 14264,
  [SMALL_STATE(197)] = 14303,
  [SMALL_STATE(198)] = 14342,
  [SMALL_STATE(199)] = 14408,
  [SMALL_STATE(200)] = 14446,
  [SMALL_STATE(201)] = 14490,
  [SMALL_STATE(202)] = 14532,
  [SMALL_STATE(203)] = 14570,
  [SMALL_STATE(204)] = 14608,
  [SMALL_STATE(205)] = 14652,
  [SMALL_STATE(206)] = 14692,
  [SMALL_STATE(207)] = 14758,
  [SMALL_STATE(208)] = 14798,
  [SMALL_STATE(209)] = 14839,
  [SMALL_STATE(210)] = 14880,
  [SMALL_STATE(211)] = 14921,
  [SMALL_STATE(212)] = 14962,
  [SMALL_STATE(213)] = 15003,
  [SMALL_STATE(214)] = 15044,
  [SMALL_STATE(215)] = 15082,
  [SMALL_STATE(216)] = 15118,
  [SMALL_STATE(217)] = 15160,
  [SMALL_STATE(218)] = 15196,
  [SMALL_STATE(219)] = 15234,
  [SMALL_STATE(220)] = 15272,
  [SMALL_STATE(221)] = 15307,
  [SMALL_STATE(222)] = 15342,
  [SMALL_STATE(223)] = 15377,
  [SMALL_STATE(224)] = 15412,
  [SMALL_STATE(225)] = 15447,
  [SMALL_STATE(226)] = 15482,
  [SMALL_STATE(227)] = 15517,
  [SMALL_STATE(228)] = 15552,
  [SMALL_STATE(229)] = 15587,
  [SMALL_STATE(230)] = 15622,
  [SMALL_STATE(231)] = 15657,
  [SMALL_STATE(232)] = 15692,
  [SMALL_STATE(233)] = 15727,
  [SMALL_STATE(234)] = 15762,
  [SMALL_STATE(235)] = 15797,
  [SMALL_STATE(236)] = 15834,
  [SMALL_STATE(237)] = 15869,
  [SMALL_STATE(238)] = 15904,
  [SMALL_STATE(239)] = 15938,
  [SMALL_STATE(240)] = 15972,
  [SMALL_STATE(241)] = 16006,
  [SMALL_STATE(242)] = 16045,
  [SMALL_STATE(243)] = 16084,
  [SMALL_STATE(244)] = 16124,
  [SMALL_STATE(245)] = 16152,
  [SMALL_STATE(246)] = 16180,
  [SMALL_STATE(247)] = 16217,
  [SMALL_STATE(248)] = 16252,
  [SMALL_STATE(249)] = 16289,
  [SMALL_STATE(250)] = 16320,
  [SMALL_STATE(251)] = 16351,
  [SMALL_STATE(252)] = 16382,
  [SMALL_STATE(253)] = 16419,
  [SMALL_STATE(254)] = 16454,
  [SMALL_STATE(255)] = 16489,
  [SMALL_STATE(256)] = 16520,
  [SMALL_STATE(257)] = 16551,
  [SMALL_STATE(258)] = 16582,
  [SMALL_STATE(259)] = 16624,
  [SMALL_STATE(260)] = 16666,
  [SMALL_STATE(261)] = 16700,
  [SMALL_STATE(262)] = 16742,
  [SMALL_STATE(263)] = 16784,
  [SMALL_STATE(264)] = 16813,
  [SMALL_STATE(265)] = 16842,
  [SMALL_STATE(266)] = 16869,
  [SMALL_STATE(267)] = 16898,
  [SMALL_STATE(268)] = 16926,
  [SMALL_STATE(269)] = 16952,
  [SMALL_STATE(270)] = 16980,
  [SMALL_STATE(271)] = 17014,
  [SMALL_STATE(272)] = 17042,
  [SMALL_STATE(273)] = 17068,
  [SMALL_STATE(274)] = 17092,
  [SMALL_STATE(275)] = 17126,
  [SMALL_STATE(276)] = 17172,
  [SMALL_STATE(277)] = 17196,
  [SMALL_STATE(278)] = 17228,
  [SMALL_STATE(279)] = 17252,
  [SMALL_STATE(280)] = 17278,
  [SMALL_STATE(281)] = 17304,
  [SMALL_STATE(282)] = 17348,
  [SMALL_STATE(283)] = 17376,
  [SMALL_STATE(284)] = 17404,
  [SMALL_STATE(285)] = 17428,
  [SMALL_STATE(286)] = 17458,
  [SMALL_STATE(287)] = 17482,
  [SMALL_STATE(288)] = 17509,
  [SMALL_STATE(289)] = 17538,
  [SMALL_STATE(290)] = 17569,
  [SMALL_STATE(291)] = 17590,
  [SMALL_STATE(292)] = 17613,
  [SMALL_STATE(293)] = 17638,
  [SMALL_STATE(294)] = 17663,
  [SMALL_STATE(295)] = 17690,
  [SMALL_STATE(296)] = 17711,
  [SMALL_STATE(297)] = 17736,
  [SMALL_STATE(298)] = 17765,
  [SMALL_STATE(299)] = 17790,
  [SMALL_STATE(300)] = 17815,
  [SMALL_STATE(301)] = 17842,
  [SMALL_STATE(302)] = 17865,
  [SMALL_STATE(303)] = 17891,
  [SMALL_STATE(304)] = 17931,
  [SMALL_STATE(305)] = 17971,
  [SMALL_STATE(306)] = 17995,
  [SMALL_STATE(307)] = 18035,
  [SMALL_STATE(308)] = 18063,
  [SMALL_STATE(309)] = 18083,
  [SMALL_STATE(310)] = 18123,
  [SMALL_STATE(311)] = 18148,
  [SMALL_STATE(312)] = 18185,
  [SMALL_STATE(313)] = 18210,
  [SMALL_STATE(314)] = 18235,
  [SMALL_STATE(315)] = 18260,
  [SMALL_STATE(316)] = 18285,
  [SMALL_STATE(317)] = 18310,
  [SMALL_STATE(318)] = 18335,
  [SMALL_STATE(319)] = 18360,
  [SMALL_STATE(320)] = 18378,
  [SMALL_STATE(321)] = 18396,
  [SMALL_STATE(322)] = 18430,
  [SMALL_STATE(323)] = 18448,
  [SMALL_STATE(324)] = 18482,
  [SMALL_STATE(325)] = 18516,
  [SMALL_STATE(326)] = 18550,
  [SMALL_STATE(327)] = 18568,
  [SMALL_STATE(328)] = 18602,
  [SMALL_STATE(329)] = 18636,
  [SMALL_STATE(330)] = 18660,
  [SMALL_STATE(331)] = 18678,
  [SMALL_STATE(332)] = 18709,
  [SMALL_STATE(333)] = 18730,
  [SMALL_STATE(334)] = 18751,
  [SMALL_STATE(335)] = 18771,
  [SMALL_STATE(336)] = 18791,
  [SMALL_STATE(337)] = 18807,
  [SMALL_STATE(338)] = 18827,
  [SMALL_STATE(339)] = 18843,
  [SMALL_STATE(340)] = 18863,
  [SMALL_STATE(341)] = 18879,
  [SMALL_STATE(342)] = 18895,
  [SMALL_STATE(343)] = 18913,
  [SMALL_STATE(344)] = 18933,
  [SMALL_STATE(345)] = 18951,
  [SMALL_STATE(346)] = 18967,
  [SMALL_STATE(347)] = 18987,
  [SMALL_STATE(348)] = 19015,
  [SMALL_STATE(349)] = 19035,
  [SMALL_STATE(350)] = 19053,
  [SMALL_STATE(351)] = 19069,
  [SMALL_STATE(352)] = 19090,
  [SMALL_STATE(353)] = 19105,
  [SMALL_STATE(354)] = 19120,
  [SMALL_STATE(355)] = 19135,
  [SMALL_STATE(356)] = 19150,
  [SMALL_STATE(357)] = 19175,
  [SMALL_STATE(358)] = 19190,
  [SMALL_STATE(359)] = 19205,
  [SMALL_STATE(360)] = 19232,
  [SMALL_STATE(361)] = 19251,
  [SMALL_STATE(362)] = 19266,
  [SMALL_STATE(363)] = 19281,
  [SMALL_STATE(364)] = 19308,
  [SMALL_STATE(365)] = 19327,
  [SMALL_STATE(366)] = 19348,
  [SMALL_STATE(367)] = 19363,
  [SMALL_STATE(368)] = 19388,
  [SMALL_STATE(369)] = 19407,
  [SMALL_STATE(370)] = 19432,
  [SMALL_STATE(371)] = 19447,
  [SMALL_STATE(372)] = 19474,
  [SMALL_STATE(373)] = 19489,
  [SMALL_STATE(374)] = 19514,
  [SMALL_STATE(375)] = 19529,
  [SMALL_STATE(376)] = 19544,
  [SMALL_STATE(377)] = 19559,
  [SMALL_STATE(378)] = 19574,
  [SMALL_STATE(379)] = 19590,
  [SMALL_STATE(380)] = 19610,
  [SMALL_STATE(381)] = 19634,
  [SMALL_STATE(382)] = 19656,
  [SMALL_STATE(383)] = 19678,
  [SMALL_STATE(384)] = 19702,
  [SMALL_STATE(385)] = 19724,
  [SMALL_STATE(386)] = 19748,
  [SMALL_STATE(387)] = 19762,
  [SMALL_STATE(388)] = 19778,
  [SMALL_STATE(389)] = 19802,
  [SMALL_STATE(390)] = 19826,
  [SMALL_STATE(391)] = 19850,
  [SMALL_STATE(392)] = 19874,
  [SMALL_STATE(393)] = 19898,
  [SMALL_STATE(394)] = 19922,
  [SMALL_STATE(395)] = 19944,
  [SMALL_STATE(396)] = 19968,
  [SMALL_STATE(397)] = 19990,
  [SMALL_STATE(398)] = 20014,
  [SMALL_STATE(399)] = 20036,
  [SMALL_STATE(400)] = 20049,
  [SMALL_STATE(401)] = 20062,
  [SMALL_STATE(402)] = 20079,
  [SMALL_STATE(403)] = 20092,
  [SMALL_STATE(404)] = 20113,
  [SMALL_STATE(405)] = 20130,
  [SMALL_STATE(406)] = 20145,
  [SMALL_STATE(407)] = 20162,
  [SMALL_STATE(408)] = 20181,
  [SMALL_STATE(409)] = 20194,
  [SMALL_STATE(410)] = 20215,
  [SMALL_STATE(411)] = 20232,
  [SMALL_STATE(412)] = 20253,
  [SMALL_STATE(413)] = 20266,
  [SMALL_STATE(414)] = 20287,
  [SMALL_STATE(415)] = 20304,
  [SMALL_STATE(416)] = 20325,
  [SMALL_STATE(417)] = 20342,
  [SMALL_STATE(418)] = 20359,
  [SMALL_STATE(419)] = 20372,
  [SMALL_STATE(420)] = 20385,
  [SMALL_STATE(421)] = 20398,
  [SMALL_STATE(422)] = 20411,
  [SMALL_STATE(423)] = 20424,
  [SMALL_STATE(424)] = 20445,
  [SMALL_STATE(425)] = 20458,
  [SMALL_STATE(426)] = 20471,
  [SMALL_STATE(427)] = 20492,
  [SMALL_STATE(428)] = 20507,
  [SMALL_STATE(429)] = 20528,
  [SMALL_STATE(430)] = 20540,
  [SMALL_STATE(431)] = 20554,
  [SMALL_STATE(432)] = 20570,
  [SMALL_STATE(433)] = 20586,
  [SMALL_STATE(434)] = 20598,
  [SMALL_STATE(435)] = 20612,
  [SMALL_STATE(436)] = 20626,
  [SMALL_STATE(437)] = 20644,
  [SMALL_STATE(438)] = 20662,
  [SMALL_STATE(439)] = 20678,
  [SMALL_STATE(440)] = 20692,
  [SMALL_STATE(441)] = 20706,
  [SMALL_STATE(442)] = 20720,
  [SMALL_STATE(443)] = 20734,
  [SMALL_STATE(444)] = 20748,
  [SMALL_STATE(445)] = 20762,
  [SMALL_STATE(446)] = 20774,
  [SMALL_STATE(447)] = 20792,
  [SMALL_STATE(448)] = 20808,
  [SMALL_STATE(449)] = 20826,
  [SMALL_STATE(450)] = 20844,
  [SMALL_STATE(451)] = 20862,
  [SMALL_STATE(452)] = 20876,
  [SMALL_STATE(453)] = 20892,
  [SMALL_STATE(454)] = 20906,
  [SMALL_STATE(455)] = 20918,
  [SMALL_STATE(456)] = 20936,
  [SMALL_STATE(457)] = 20954,
  [SMALL_STATE(458)] = 20966,
  [SMALL_STATE(459)] = 20982,
  [SMALL_STATE(460)] = 20994,
  [SMALL_STATE(461)] = 21010,
  [SMALL_STATE(462)] = 21028,
  [SMALL_STATE(463)] = 21044,
  [SMALL_STATE(464)] = 21062,
  [SMALL_STATE(465)] = 21078,
  [SMALL_STATE(466)] = 21094,
  [SMALL_STATE(467)] = 21112,
  [SMALL_STATE(468)] = 21128,
  [SMALL_STATE(469)] = 21144,
  [SMALL_STATE(470)] = 21158,
  [SMALL_STATE(471)] = 21176,
  [SMALL_STATE(472)] = 21192,
  [SMALL_STATE(473)] = 21206,
  [SMALL_STATE(474)] = 21220,
  [SMALL_STATE(475)] = 21234,
  [SMALL_STATE(476)] = 21248,
  [SMALL_STATE(477)] = 21262,
  [SMALL_STATE(478)] = 21277,
  [SMALL_STATE(479)] = 21288,
  [SMALL_STATE(480)] = 21303,
  [SMALL_STATE(481)] = 21314,
  [SMALL_STATE(482)] = 21329,
  [SMALL_STATE(483)] = 21342,
  [SMALL_STATE(484)] = 21357,
  [SMALL_STATE(485)] = 21372,
  [SMALL_STATE(486)] = 21387,
  [SMALL_STATE(487)] = 21402,
  [SMALL_STATE(488)] = 21415,
  [SMALL_STATE(489)] = 21430,
  [SMALL_STATE(490)] = 21441,
  [SMALL_STATE(491)] = 21456,
  [SMALL_STATE(492)] = 21467,
  [SMALL_STATE(493)] = 21480,
  [SMALL_STATE(494)] = 21493,
  [SMALL_STATE(495)] = 21504,
  [SMALL_STATE(496)] = 21517,
  [SMALL_STATE(497)] = 21532,
  [SMALL_STATE(498)] = 21547,
  [SMALL_STATE(499)] = 21558,
  [SMALL_STATE(500)] = 21573,
  [SMALL_STATE(501)] = 21588,
  [SMALL_STATE(502)] = 21603,
  [SMALL_STATE(503)] = 21614,
  [SMALL_STATE(504)] = 21629,
  [SMALL_STATE(505)] = 21644,
  [SMALL_STATE(506)] = 21659,
  [SMALL_STATE(507)] = 21674,
  [SMALL_STATE(508)] = 21689,
  [SMALL_STATE(509)] = 21704,
  [SMALL_STATE(510)] = 21719,
  [SMALL_STATE(511)] = 21734,
  [SMALL_STATE(512)] = 21749,
  [SMALL_STATE(513)] = 21764,
  [SMALL_STATE(514)] = 21779,
  [SMALL_STATE(515)] = 21794,
  [SMALL_STATE(516)] = 21807,
  [SMALL_STATE(517)] = 21822,
  [SMALL_STATE(518)] = 21837,
  [SMALL_STATE(519)] = 21852,
  [SMALL_STATE(520)] = 21867,
  [SMALL_STATE(521)] = 21878,
  [SMALL_STATE(522)] = 21889,
  [SMALL_STATE(523)] = 21904,
  [SMALL_STATE(524)] = 21919,
  [SMALL_STATE(525)] = 21934,
  [SMALL_STATE(526)] = 21949,
  [SMALL_STATE(527)] = 21964,
  [SMALL_STATE(528)] = 21975,
  [SMALL_STATE(529)] = 21986,
  [SMALL_STATE(530)] = 22001,
  [SMALL_STATE(531)] = 22016,
  [SMALL_STATE(532)] = 22031,
  [SMALL_STATE(533)] = 22046,
  [SMALL_STATE(534)] = 22057,
  [SMALL_STATE(535)] = 22068,
  [SMALL_STATE(536)] = 22079,
  [SMALL_STATE(537)] = 22094,
  [SMALL_STATE(538)] = 22109,
  [SMALL_STATE(539)] = 22120,
  [SMALL_STATE(540)] = 22135,
  [SMALL_STATE(541)] = 22150,
  [SMALL_STATE(542)] = 22165,
  [SMALL_STATE(543)] = 22178,
  [SMALL_STATE(544)] = 22189,
  [SMALL_STATE(545)] = 22204,
  [SMALL_STATE(546)] = 22215,
  [SMALL_STATE(547)] = 22230,
  [SMALL_STATE(548)] = 22241,
  [SMALL_STATE(549)] = 22254,
  [SMALL_STATE(550)] = 22269,
  [SMALL_STATE(551)] = 22284,
  [SMALL_STATE(552)] = 22299,
  [SMALL_STATE(553)] = 22314,
  [SMALL_STATE(554)] = 22329,
  [SMALL_STATE(555)] = 22344,
  [SMALL_STATE(556)] = 22355,
  [SMALL_STATE(557)] = 22368,
  [SMALL_STATE(558)] = 22381,
  [SMALL_STATE(559)] = 22396,
  [SMALL_STATE(560)] = 22411,
  [SMALL_STATE(561)] = 22426,
  [SMALL_STATE(562)] = 22439,
  [SMALL_STATE(563)] = 22454,
  [SMALL_STATE(564)] = 22467,
  [SMALL_STATE(565)] = 22482,
  [SMALL_STATE(566)] = 22497,
  [SMALL_STATE(567)] = 22512,
  [SMALL_STATE(568)] = 22527,
  [SMALL_STATE(569)] = 22542,
  [SMALL_STATE(570)] = 22555,
  [SMALL_STATE(571)] = 22566,
  [SMALL_STATE(572)] = 22577,
  [SMALL_STATE(573)] = 22592,
  [SMALL_STATE(574)] = 22607,
  [SMALL_STATE(575)] = 22622,
  [SMALL_STATE(576)] = 22633,
  [SMALL_STATE(577)] = 22646,
  [SMALL_STATE(578)] = 22657,
  [SMALL_STATE(579)] = 22668,
  [SMALL_STATE(580)] = 22683,
  [SMALL_STATE(581)] = 22696,
  [SMALL_STATE(582)] = 22707,
  [SMALL_STATE(583)] = 22722,
  [SMALL_STATE(584)] = 22737,
  [SMALL_STATE(585)] = 22750,
  [SMALL_STATE(586)] = 22763,
  [SMALL_STATE(587)] = 22778,
  [SMALL_STATE(588)] = 22793,
  [SMALL_STATE(589)] = 22808,
  [SMALL_STATE(590)] = 22823,
  [SMALL_STATE(591)] = 22838,
  [SMALL_STATE(592)] = 22850,
  [SMALL_STATE(593)] = 22862,
  [SMALL_STATE(594)] = 22874,
  [SMALL_STATE(595)] = 22886,
  [SMALL_STATE(596)] = 22898,
  [SMALL_STATE(597)] = 22910,
  [SMALL_STATE(598)] = 22922,
  [SMALL_STATE(599)] = 22932,
  [SMALL_STATE(600)] = 22944,
  [SMALL_STATE(601)] = 22956,
  [SMALL_STATE(602)] = 22968,
  [SMALL_STATE(603)] = 22978,
  [SMALL_STATE(604)] = 22990,
  [SMALL_STATE(605)] = 23002,
  [SMALL_STATE(606)] = 23014,
  [SMALL_STATE(607)] = 23026,
  [SMALL_STATE(608)] = 23036,
  [SMALL_STATE(609)] = 23046,
  [SMALL_STATE(610)] = 23056,
  [SMALL_STATE(611)] = 23068,
  [SMALL_STATE(612)] = 23078,
  [SMALL_STATE(613)] = 23090,
  [SMALL_STATE(614)] = 23100,
  [SMALL_STATE(615)] = 23110,
  [SMALL_STATE(616)] = 23122,
  [SMALL_STATE(617)] = 23132,
  [SMALL_STATE(618)] = 23144,
  [SMALL_STATE(619)] = 23154,
  [SMALL_STATE(620)] = 23166,
  [SMALL_STATE(621)] = 23176,
  [SMALL_STATE(622)] = 23188,
  [SMALL_STATE(623)] = 23200,
  [SMALL_STATE(624)] = 23212,
  [SMALL_STATE(625)] = 23224,
  [SMALL_STATE(626)] = 23236,
  [SMALL_STATE(627)] = 23248,
  [SMALL_STATE(628)] = 23258,
  [SMALL_STATE(629)] = 23268,
  [SMALL_STATE(630)] = 23280,
  [SMALL_STATE(631)] = 23292,
  [SMALL_STATE(632)] = 23304,
  [SMALL_STATE(633)] = 23314,
  [SMALL_STATE(634)] = 23324,
  [SMALL_STATE(635)] = 23334,
  [SMALL_STATE(636)] = 23344,
  [SMALL_STATE(637)] = 23354,
  [SMALL_STATE(638)] = 23366,
  [SMALL_STATE(639)] = 23378,
  [SMALL_STATE(640)] = 23390,
  [SMALL_STATE(641)] = 23400,
  [SMALL_STATE(642)] = 23412,
  [SMALL_STATE(643)] = 23424,
  [SMALL_STATE(644)] = 23436,
  [SMALL_STATE(645)] = 23448,
  [SMALL_STATE(646)] = 23460,
  [SMALL_STATE(647)] = 23472,
  [SMALL_STATE(648)] = 23484,
  [SMALL_STATE(649)] = 23494,
  [SMALL_STATE(650)] = 23506,
  [SMALL_STATE(651)] = 23515,
  [SMALL_STATE(652)] = 23524,
  [SMALL_STATE(653)] = 23533,
  [SMALL_STATE(654)] = 23542,
  [SMALL_STATE(655)] = 23551,
  [SMALL_STATE(656)] = 23560,
  [SMALL_STATE(657)] = 23569,
  [SMALL_STATE(658)] = 23578,
  [SMALL_STATE(659)] = 23587,
  [SMALL_STATE(660)] = 23596,
  [SMALL_STATE(661)] = 23605,
  [SMALL_STATE(662)] = 23614,
  [SMALL_STATE(663)] = 23623,
  [SMALL_STATE(664)] = 23632,
  [SMALL_STATE(665)] = 23641,
  [SMALL_STATE(666)] = 23650,
  [SMALL_STATE(667)] = 23659,
  [SMALL_STATE(668)] = 23668,
  [SMALL_STATE(669)] = 23677,
  [SMALL_STATE(670)] = 23686,
  [SMALL_STATE(671)] = 23695,
  [SMALL_STATE(672)] = 23704,
  [SMALL_STATE(673)] = 23713,
  [SMALL_STATE(674)] = 23722,
  [SMALL_STATE(675)] = 23731,
  [SMALL_STATE(676)] = 23740,
  [SMALL_STATE(677)] = 23749,
  [SMALL_STATE(678)] = 23758,
  [SMALL_STATE(679)] = 23767,
  [SMALL_STATE(680)] = 23776,
  [SMALL_STATE(681)] = 23785,
  [SMALL_STATE(682)] = 23794,
  [SMALL_STATE(683)] = 23803,
  [SMALL_STATE(684)] = 23812,
  [SMALL_STATE(685)] = 23821,
  [SMALL_STATE(686)] = 23830,
  [SMALL_STATE(687)] = 23839,
  [SMALL_STATE(688)] = 23848,
  [SMALL_STATE(689)] = 23857,
  [SMALL_STATE(690)] = 23866,
  [SMALL_STATE(691)] = 23875,
  [SMALL_STATE(692)] = 23884,
  [SMALL_STATE(693)] = 23893,
  [SMALL_STATE(694)] = 23902,
  [SMALL_STATE(695)] = 23911,
  [SMALL_STATE(696)] = 23920,
  [SMALL_STATE(697)] = 23929,
  [SMALL_STATE(698)] = 23938,
  [SMALL_STATE(699)] = 23947,
  [SMALL_STATE(700)] = 23956,
  [SMALL_STATE(701)] = 23965,
  [SMALL_STATE(702)] = 23974,
  [SMALL_STATE(703)] = 23983,
  [SMALL_STATE(704)] = 23992,
  [SMALL_STATE(705)] = 24001,
  [SMALL_STATE(706)] = 24010,
  [SMALL_STATE(707)] = 24019,
  [SMALL_STATE(708)] = 24028,
  [SMALL_STATE(709)] = 24037,
  [SMALL_STATE(710)] = 24046,
  [SMALL_STATE(711)] = 24055,
  [SMALL_STATE(712)] = 24064,
  [SMALL_STATE(713)] = 24073,
  [SMALL_STATE(714)] = 24082,
  [SMALL_STATE(715)] = 24091,
  [SMALL_STATE(716)] = 24100,
  [SMALL_STATE(717)] = 24109,
  [SMALL_STATE(718)] = 24118,
  [SMALL_STATE(719)] = 24127,
  [SMALL_STATE(720)] = 24136,
  [SMALL_STATE(721)] = 24145,
  [SMALL_STATE(722)] = 24154,
  [SMALL_STATE(723)] = 24163,
  [SMALL_STATE(724)] = 24172,
  [SMALL_STATE(725)] = 24181,
  [SMALL_STATE(726)] = 24190,
  [SMALL_STATE(727)] = 24199,
  [SMALL_STATE(728)] = 24208,
  [SMALL_STATE(729)] = 24217,
  [SMALL_STATE(730)] = 24226,
  [SMALL_STATE(731)] = 24235,
  [SMALL_STATE(732)] = 24244,
  [SMALL_STATE(733)] = 24253,
  [SMALL_STATE(734)] = 24262,
  [SMALL_STATE(735)] = 24271,
  [SMALL_STATE(736)] = 24280,
  [SMALL_STATE(737)] = 24289,
  [SMALL_STATE(738)] = 24298,
  [SMALL_STATE(739)] = 24307,
  [SMALL_STATE(740)] = 24316,
  [SMALL_STATE(741)] = 24325,
  [SMALL_STATE(742)] = 24334,
  [SMALL_STATE(743)] = 24343,
  [SMALL_STATE(744)] = 24352,
  [SMALL_STATE(745)] = 24361,
  [SMALL_STATE(746)] = 24370,
  [SMALL_STATE(747)] = 24379,
  [SMALL_STATE(748)] = 24388,
  [SMALL_STATE(749)] = 24397,
  [SMALL_STATE(750)] = 24406,
  [SMALL_STATE(751)] = 24415,
  [SMALL_STATE(752)] = 24424,
  [SMALL_STATE(753)] = 24433,
  [SMALL_STATE(754)] = 24442,
  [SMALL_STATE(755)] = 24451,
  [SMALL_STATE(756)] = 24460,
  [SMALL_STATE(757)] = 24469,
  [SMALL_STATE(758)] = 24478,
  [SMALL_STATE(759)] = 24487,
  [SMALL_STATE(760)] = 24496,
  [SMALL_STATE(761)] = 24505,
  [SMALL_STATE(762)] = 24514,
  [SMALL_STATE(763)] = 24523,
  [SMALL_STATE(764)] = 24532,
  [SMALL_STATE(765)] = 24541,
  [SMALL_STATE(766)] = 24550,
  [SMALL_STATE(767)] = 24559,
  [SMALL_STATE(768)] = 24568,
  [SMALL_STATE(769)] = 24577,
  [SMALL_STATE(770)] = 24586,
  [SMALL_STATE(771)] = 24595,
  [SMALL_STATE(772)] = 24604,
  [SMALL_STATE(773)] = 24613,
  [SMALL_STATE(774)] = 24622,
  [SMALL_STATE(775)] = 24631,
  [SMALL_STATE(776)] = 24640,
  [SMALL_STATE(777)] = 24649,
  [SMALL_STATE(778)] = 24658,
  [SMALL_STATE(779)] = 24667,
  [SMALL_STATE(780)] = 24676,
  [SMALL_STATE(781)] = 24685,
  [SMALL_STATE(782)] = 24694,
  [SMALL_STATE(783)] = 24703,
  [SMALL_STATE(784)] = 24712,
  [SMALL_STATE(785)] = 24721,
  [SMALL_STATE(786)] = 24730,
  [SMALL_STATE(787)] = 24739,
  [SMALL_STATE(788)] = 24748,
  [SMALL_STATE(789)] = 24757,
  [SMALL_STATE(790)] = 24766,
  [SMALL_STATE(791)] = 24775,
  [SMALL_STATE(792)] = 24784,
  [SMALL_STATE(793)] = 24793,
  [SMALL_STATE(794)] = 24802,
  [SMALL_STATE(795)] = 24811,
  [SMALL_STATE(796)] = 24820,
  [SMALL_STATE(797)] = 24829,
  [SMALL_STATE(798)] = 24838,
  [SMALL_STATE(799)] = 24847,
  [SMALL_STATE(800)] = 24856,
  [SMALL_STATE(801)] = 24865,
  [SMALL_STATE(802)] = 24874,
  [SMALL_STATE(803)] = 24883,
  [SMALL_STATE(804)] = 24892,
  [SMALL_STATE(805)] = 24901,
  [SMALL_STATE(806)] = 24910,
  [SMALL_STATE(807)] = 24919,
  [SMALL_STATE(808)] = 24928,
  [SMALL_STATE(809)] = 24937,
  [SMALL_STATE(810)] = 24946,
  [SMALL_STATE(811)] = 24955,
  [SMALL_STATE(812)] = 24964,
  [SMALL_STATE(813)] = 24973,
  [SMALL_STATE(814)] = 24982,
  [SMALL_STATE(815)] = 24991,
  [SMALL_STATE(816)] = 25000,
  [SMALL_STATE(817)] = 25009,
  [SMALL_STATE(818)] = 25018,
  [SMALL_STATE(819)] = 25027,
  [SMALL_STATE(820)] = 25036,
  [SMALL_STATE(821)] = 25045,
  [SMALL_STATE(822)] = 25054,
  [SMALL_STATE(823)] = 25063,
  [SMALL_STATE(824)] = 25072,
  [SMALL_STATE(825)] = 25081,
  [SMALL_STATE(826)] = 25090,
  [SMALL_STATE(827)] = 25099,
  [SMALL_STATE(828)] = 25108,
  [SMALL_STATE(829)] = 25117,
  [SMALL_STATE(830)] = 25126,
  [SMALL_STATE(831)] = 25135,
  [SMALL_STATE(832)] = 25144,
  [SMALL_STATE(833)] = 25153,
  [SMALL_STATE(834)] = 25162,
  [SMALL_STATE(835)] = 25171,
  [SMALL_STATE(836)] = 25180,
  [SMALL_STATE(837)] = 25189,
  [SMALL_STATE(838)] = 25198,
  [SMALL_STATE(839)] = 25207,
  [SMALL_STATE(840)] = 25216,
  [SMALL_STATE(841)] = 25225,
  [SMALL_STATE(842)] = 25234,
  [SMALL_STATE(843)] = 25243,
  [SMALL_STATE(844)] = 25252,
  [SMALL_STATE(845)] = 25261,
  [SMALL_STATE(846)] = 25270,
  [SMALL_STATE(847)] = 25279,
  [SMALL_STATE(848)] = 25288,
  [SMALL_STATE(849)] = 25297,
  [SMALL_STATE(850)] = 25306,
  [SMALL_STATE(851)] = 25315,
  [SMALL_STATE(852)] = 25324,
  [SMALL_STATE(853)] = 25333,
  [SMALL_STATE(854)] = 25342,
  [SMALL_STATE(855)] = 25351,
  [SMALL_STATE(856)] = 25360,
  [SMALL_STATE(857)] = 25369,
  [SMALL_STATE(858)] = 25378,
  [SMALL_STATE(859)] = 25387,
  [SMALL_STATE(860)] = 25396,
  [SMALL_STATE(861)] = 25405,
  [SMALL_STATE(862)] = 25414,
  [SMALL_STATE(863)] = 25423,
  [SMALL_STATE(864)] = 25432,
  [SMALL_STATE(865)] = 25441,
  [SMALL_STATE(866)] = 25450,
  [SMALL_STATE(867)] = 25459,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(773),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(772),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(771),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(770),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(769),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(768),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(767),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(766),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(765),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(763),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_repeat2, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(122),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(118),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(91),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(367),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(772),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(491),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(771),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(469),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(770),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(769),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(768),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(767),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(766),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(765),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(764),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(763),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(107),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(475),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(403),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_accum_name, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_accum_name, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_dot, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_dot, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(858),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_dot_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 1),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2), SHIFT_REPEAT(751),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_dot, 4),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_dot, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_accum_name, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_accum_name, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 4),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 5),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_accum_type_repeat1, 2),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2), SHIFT_REPEAT(35),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 3),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_integer, 1), REDUCE(sym_integer, 2),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_integer, 1), REDUCE(sym_integer, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_real, 2), REDUCE(sym_real, 3),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_real, 2), REDUCE(sym_real, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 2),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(730),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 2),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_real, 3), REDUCE(sym_real, 4),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_real, 3), REDUCE(sym_real, 4),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 5),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 5),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 6),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 6),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 10),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 10),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 7),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 7),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 6),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 6),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 8),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 8),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 11),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 11),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 4),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 4),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 8),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 8),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 7),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 7),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 4),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 4),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(696),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(746),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(745),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(744),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_repeat1, 2),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(773),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 6, .production_id = 17),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef, 6, .production_id = 17),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 7, .production_id = 19),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef, 7, .production_id = 19),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_stmts, 2),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_body_stmts, 2),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(843),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(856),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2), SHIFT_REPEAT(817),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(797),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(864),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(778),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2), SHIFT_REPEAT(201),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(863),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_set, 1),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_operator, 1),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_operator, 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 1),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(491),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(475),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_accum_stmt, 5, .production_id = 24),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_l_accum_accum_stmt, 5, .production_id = 24),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt, 5),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 2),
  [581] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(491),
  [584] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(475),
  [587] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(305),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var_decl_stmt, 4, .production_id = 22),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_g_accum_accum_stmt, 3, .production_id = 6),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt, 3),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_expr, 1),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_fields, 1),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_fields, 1),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_fields_repeat1, 2), SHIFT_REPEAT(285),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_fields_repeat1, 2),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tuple_fields_repeat1, 2),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(840),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 1),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_fields, 2),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_fields, 2),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(699),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 2),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 2),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 4),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 4),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2), SHIFT_REPEAT(271),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(705),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_field, 2),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_field, 2),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 4),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_proj, 1),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 4),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_l_accum_assign_stmt, 5, .production_id = 13),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_g_accum_assign_stmt, 3),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 4),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 2),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertex_set_type, 1),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 2),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_accum_func_call, 3, .production_id = 18),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 2, .production_id = 25),
  [770] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 2, .production_id = 25), SHIFT_REPEAT(702),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_accum_func_call, 4, .production_id = 21),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt_list, 2),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_pattern, 2, .production_id = 10),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 5, .production_id = 26),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_stmt_list_repeat1, 2), SHIFT_REPEAT(112),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_stmt_list_repeat1, 2),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 4, .production_id = 26),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 2, .production_id = 15),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 2, .production_id = 15), SHIFT_REPEAT(829),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 3),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_vertex_type, 1),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_source_set, 1, .production_id = 5),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_pattern, 1),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_set, 1),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 1),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 3),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt_list, 1),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 4),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2),
  [823] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2), SHIFT_REPEAT(560),
  [826] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2), SHIFT_REPEAT(865),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_set, 3, .production_id = 16),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_case_stmt, 3),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 7),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_case_stmt, 5),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt, 1),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_while_stmt, 7),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(680),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [853] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2), SHIFT_REPEAT(589),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_while_stmt, 5),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_for_each_stmt, 5),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql, 1),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 6),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 5),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 8, .production_id = 27),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(613),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 6),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 8),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_source_set, 3, .production_id = 14),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_v2, 1),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 5),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 4),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_expr_set, 4),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsql_select_block_repeat1, 2),
  [918] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_select_block_repeat1, 2), SHIFT_REPEAT(78),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 4),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disj_pattern, 2),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_type, 1),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_v2, 7),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disj_pattern_repeat1, 2),
  [943] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disj_pattern_repeat1, 2), SHIFT_REPEAT(331),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 3),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_set, 3),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [958] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_stmt_repeat1, 2), SHIFT_REPEAT(99),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_print_stmt_repeat1, 2),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 1),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_pattern, 1),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_edge_pattern, 1),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edge_set_type, 1),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 7),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 2),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_expr_set, 5),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 8),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_pattern, 2),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 5),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 2),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_expr, 3),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 9),
  [1007] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 9),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 6),
  [1011] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 6),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 2),
  [1019] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 2), SHIFT_REPEAT(262),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 11),
  [1030] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 11),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_var_decl_stmt, 3),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 3, .production_id = 8),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 4),
  [1038] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 4),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 2),
  [1046] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 2), SHIFT_REPEAT(121),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 8),
  [1055] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 8),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 10),
  [1059] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 10),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 2),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 2),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 2),
  [1073] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 2), SHIFT_REPEAT(93),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1098] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2), SHIFT_REPEAT(161),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 4),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 1),
  [1111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 1),
  [1113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2), SHIFT_REPEAT(167),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 6, .production_id = 20),
  [1122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(812),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 5),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 13, .production_id = 7),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat1, 2), SHIFT_REPEAT(292),
  [1145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat1, 2),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 4),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 5),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 11, .production_id = 7),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 2), SHIFT_REPEAT(687),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 2),
  [1174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 2), SHIFT_REPEAT(683),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 2),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 4),
  [1181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [1183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 11, .production_id = 3),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [1207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(506),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_edge_types_repeat1, 2),
  [1220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_edge_types_repeat1, 2), SHIFT_REPEAT(450),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat4, 2), SHIFT_REPEAT(261),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat4, 2),
  [1230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2),
  [1232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(512),
  [1235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_v_expr_set_repeat1, 2), SHIFT_REPEAT(140),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_expr_set_repeat1, 2),
  [1240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seed_set_repeat1, 2), SHIFT_REPEAT(394),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seed_set_repeat1, 2),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpret_query, 7, .production_id = 1),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_size, 1),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_vertex_types_repeat1, 2),
  [1269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_vertex_types_repeat1, 2), SHIFT_REPEAT(449),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 4),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 8, .production_id = 2),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 12),
  [1282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 12), SHIFT_REPEAT(653),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 2),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_edge_pattern, 3),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 4),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 9, .production_id = 3),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpret_query, 9, .production_id = 1),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 1),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [1337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [1339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [1343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 3),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 12, .production_id = 4),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 2),
  [1353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 2), SHIFT_REPEAT(675),
  [1356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 2), SHIFT_REPEAT(679),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 2),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 2), SHIFT_REPEAT(452),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 2),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 3),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 4),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 3),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_accum_clause, 2),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 10, .production_id = 4),
  [1398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 5),
  [1400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 10, .production_id = 2),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_clause, 2),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 3),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 5),
  [1454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 4),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 3),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 11),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_set, 1),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 8, .production_id = 8),
  [1490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 2),
  [1492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_proj, 3),
  [1494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 4),
  [1496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat3, 2), SHIFT_REPEAT(282),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat4, 3),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_stmt, 1),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 2),
  [1523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 4),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_set, 3, .production_id = 23),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 8),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_clause, 4, .production_id = 9),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 13, .production_id = 8),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 3),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 7),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat3, 3),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_while_stmt, 7),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 7),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 6),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 5),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 5),
  [1707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_stmt, 1),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(733),
  [1717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [1719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [1721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [1723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [1725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [1727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [1729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_while_stmt, 5),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_for_each_stmt, 5),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 4),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 6),
  [1769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 3),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 6),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 6),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 5),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1875] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gsql(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
