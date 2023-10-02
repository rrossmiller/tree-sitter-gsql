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
#define STATE_COUNT 867
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 256
#define ALIAS_COUNT 0
#define TOKEN_COUNT 132
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
  aux_sym_query_body_stmt_token1 = 22,
  aux_sym_query_body_stmt_token2 = 23,
  anon_sym_DOT = 24,
  anon_sym__ = 25,
  aux_sym_seed_token1 = 26,
  anon_sym_DOT_STAR = 27,
  aux_sym_simple_set_token1 = 28,
  aux_sym_simple_set_token2 = 29,
  aux_sym_simple_set_token3 = 30,
  anon_sym_PLUS_EQ = 31,
  aux_sym_gsql_select_clause_token1 = 32,
  aux_sym_from_clause_token1 = 33,
  aux_sym_where_clause_token1 = 34,
  aux_sym_accum_clause_token1 = 35,
  aux_sym_dml_sub_if_stmt_token1 = 36,
  aux_sym_dml_sub_if_stmt_token2 = 37,
  aux_sym_dml_sub_if_stmt_token3 = 38,
  aux_sym_dml_sub_if_stmt_token4 = 39,
  aux_sym_dml_sub_case_stmt_token1 = 40,
  aux_sym_dml_sub_case_stmt_token2 = 41,
  aux_sym_dml_sub_while_stmt_token1 = 42,
  aux_sym_dml_sub_while_stmt_token2 = 43,
  aux_sym_dml_sub_while_stmt_token3 = 44,
  aux_sym_dml_sub_for_each_stmt_token1 = 45,
  aux_sym_for_each_control_token1 = 46,
  anon_sym_COLON = 47,
  aux_sym_for_each_control_token2 = 48,
  anon_sym_LBRACK = 49,
  anon_sym_RBRACK = 50,
  aux_sym_for_each_control_token3 = 51,
  aux_sym_post_accum_clause_token1 = 52,
  aux_sym_limit_clause_token1 = 53,
  anon_sym_DASH = 54,
  anon_sym_PIPE = 55,
  anon_sym_PIPE2 = 56,
  anon_sym_STAR = 57,
  anon_sym_all = 58,
  aux_sym_accum_type_token1 = 59,
  aux_sym_accum_type_token2 = 60,
  aux_sym_accum_type_token3 = 61,
  aux_sym_accum_type_token4 = 62,
  aux_sym_accum_type_token5 = 63,
  aux_sym_accum_type_token6 = 64,
  aux_sym_accum_type_token7 = 65,
  aux_sym_accum_type_token8 = 66,
  aux_sym_accum_type_token9 = 67,
  aux_sym_accum_type_token10 = 68,
  aux_sym_accum_type_token11 = 69,
  aux_sym_accum_type_token12 = 70,
  aux_sym_accum_type_token13 = 71,
  aux_sym_accum_type_token14 = 72,
  aux_sym_accum_type_token15 = 73,
  aux_sym_accum_type_token16 = 74,
  aux_sym_accum_type_token17 = 75,
  aux_sym_accum_type_token18 = 76,
  aux_sym_accum_type_token19 = 77,
  aux_sym_accum_type_token20 = 78,
  aux_sym_accum_type_token21 = 79,
  anon_sym_AT_AT = 80,
  anon_sym_AT = 81,
  aux_sym_expr_token1 = 82,
  aux_sym_expr_token2 = 83,
  aux_sym_expr_token3 = 84,
  aux_sym_expr_token4 = 85,
  anon_sym_DASH_GT = 86,
  aux_sym_condition_token1 = 87,
  aux_sym_condition_token2 = 88,
  aux_sym_condition_token3 = 89,
  aux_sym_condition_token4 = 90,
  aux_sym_condition_token5 = 91,
  aux_sym_condition_token6 = 92,
  aux_sym_condition_token7 = 93,
  aux_sym_condition_token8 = 94,
  aux_sym_aggregator_token1 = 95,
  aux_sym_aggregator_token2 = 96,
  aux_sym_aggregator_token3 = 97,
  aux_sym_aggregator_token4 = 98,
  aux_sym_aggregator_token5 = 99,
  aux_sym_print_stmt_token1 = 100,
  aux_sym_print_stmt_token2 = 101,
  aux_sym_print_expr_token1 = 102,
  aux_sym_base_type_token1 = 103,
  aux_sym_base_type_token2 = 104,
  aux_sym_base_type_token3 = 105,
  aux_sym_base_type_token4 = 106,
  aux_sym_base_type_token5 = 107,
  aux_sym_base_type_token6 = 108,
  aux_sym_base_type_token7 = 109,
  sym_name = 110,
  aux_sym_constant_token1 = 111,
  aux_sym_constant_token2 = 112,
  aux_sym_constant_token3 = 113,
  sym_digit = 114,
  anon_sym_DQUOTE = 115,
  aux_sym_string_literal_token1 = 116,
  anon_sym_SQUOTE = 117,
  aux_sym_string_literal_token2 = 118,
  anon_sym_SLASH = 119,
  anon_sym_PERCENT = 120,
  anon_sym_PLUS = 121,
  anon_sym_LT_LT = 122,
  anon_sym_GT_GT = 123,
  anon_sym_AMP = 124,
  anon_sym_LT_EQ = 125,
  anon_sym_GT_EQ = 126,
  anon_sym_EQ_EQ = 127,
  anon_sym_BANG_EQ = 128,
  sym_newline = 129,
  sym_line_comment = 130,
  sym_block_comment = 131,
  sym_gsql = 132,
  sym__definition = 133,
  sym_create_query = 134,
  sym_interpret_query = 135,
  sym_parameter_list = 136,
  sym_query_params = 137,
  sym_query_param = 138,
  sym_query_body = 139,
  sym_typedef = 140,
  sym_tuple_fields = 141,
  sym_tuple_field = 142,
  sym_query_body_stmts = 143,
  sym_query_body_stmt = 144,
  sym_assign_stmt = 145,
  sym_v_set_var_decl_stmt = 146,
  sym_seed_set = 147,
  sym_seed = 148,
  sym_simple_set = 149,
  sym_l_accum_assign_stmt = 150,
  sym_g_accum_assign_stmt = 151,
  sym_g_accum_accum_stmt = 152,
  sym_func_call_stmt = 153,
  sym__select_stmt = 154,
  sym_gsql_select_block = 155,
  sym_gsql_select_clause = 156,
  sym_from_clause = 157,
  sym_where_clause = 158,
  sym_accum_clause = 159,
  sym_dml_sub_stmt_list = 160,
  sym_dml_sub_stmt = 161,
  sym_l_accum_accum_stmt = 162,
  sym_attr_accum_stmt = 163,
  sym_v_accum_func_call = 164,
  sym_local_var_decl_stmt = 165,
  sym_dml_sub_if_stmt = 166,
  sym_dml_sub_case_stmt = 167,
  sym_dml_sub_while_stmt = 168,
  sym_dml_sub_for_each_stmt = 169,
  sym_for_each_control = 170,
  sym_post_accum_clause = 171,
  sym_limit_clause = 172,
  sym_path_pattern = 173,
  sym_path_edge_pattern = 174,
  sym_atomic_edge_pattern = 175,
  sym_disj_pattern = 176,
  sym_step = 177,
  sym_step_v2 = 178,
  sym_step_source_set = 179,
  sym_step_edge_set = 180,
  sym_step_edge_types = 181,
  sym_atomic_edge_type = 182,
  sym_edge_set_type = 183,
  sym_step_vertex_set = 184,
  sym_step_vertex_types = 185,
  sym_atomic_vertex_type = 186,
  sym_vertex_set_type = 187,
  sym_query_body_case_stmt = 188,
  sym_query_body_if_stmt = 189,
  sym_query_body_while_stmt = 190,
  sym_query_body_for_each_stmt = 191,
  sym_decl_stmt = 192,
  sym_base_decl_stmt = 193,
  sym_accum_decl_stmt = 194,
  sym_accum_type = 195,
  sym_global_accum_name = 196,
  sym_local_accum_name = 197,
  sym_arg_list = 198,
  sym_simple_size = 199,
  sym_expr = 200,
  sym_condition = 201,
  sym_set_bag_expr = 202,
  sym_name_dot = 203,
  sym_aggregator = 204,
  sym_print_stmt = 205,
  sym_print_expr = 206,
  sym_v_expr_set = 207,
  sym_v_set_proj = 208,
  sym_file_path = 209,
  sym__type = 210,
  sym__element_type = 211,
  sym_base_type = 212,
  sym_constant = 213,
  sym_numeric = 214,
  sym_integer = 215,
  sym_real = 216,
  sym_string_literal = 217,
  sym_math_operator = 218,
  sym_comparison_operator = 219,
  aux_sym_gsql_repeat1 = 220,
  aux_sym_parameter_list_repeat1 = 221,
  aux_sym_query_params_repeat1 = 222,
  aux_sym_query_body_repeat1 = 223,
  aux_sym_query_body_repeat2 = 224,
  aux_sym_typedef_repeat1 = 225,
  aux_sym_tuple_fields_repeat1 = 226,
  aux_sym_seed_set_repeat1 = 227,
  aux_sym_func_call_stmt_repeat1 = 228,
  aux_sym_func_call_stmt_repeat2 = 229,
  aux_sym_gsql_select_block_repeat1 = 230,
  aux_sym_from_clause_repeat1 = 231,
  aux_sym_dml_sub_stmt_list_repeat1 = 232,
  aux_sym_v_accum_func_call_repeat1 = 233,
  aux_sym_dml_sub_if_stmt_repeat1 = 234,
  aux_sym_dml_sub_case_stmt_repeat1 = 235,
  aux_sym_for_each_control_repeat1 = 236,
  aux_sym_path_pattern_repeat1 = 237,
  aux_sym_disj_pattern_repeat1 = 238,
  aux_sym_step_edge_types_repeat1 = 239,
  aux_sym_step_vertex_types_repeat1 = 240,
  aux_sym_query_body_case_stmt_repeat1 = 241,
  aux_sym_query_body_case_stmt_repeat2 = 242,
  aux_sym_query_body_if_stmt_repeat1 = 243,
  aux_sym_base_decl_stmt_repeat1 = 244,
  aux_sym_accum_decl_stmt_repeat1 = 245,
  aux_sym_accum_type_repeat1 = 246,
  aux_sym_accum_type_repeat2 = 247,
  aux_sym_accum_type_repeat3 = 248,
  aux_sym_accum_type_repeat4 = 249,
  aux_sym_arg_list_repeat1 = 250,
  aux_sym_name_dot_repeat1 = 251,
  aux_sym_print_stmt_repeat1 = 252,
  aux_sym_v_expr_set_repeat1 = 253,
  aux_sym_string_literal_repeat1 = 254,
  aux_sym_string_literal_repeat2 = 255,
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
  [aux_sym_query_body_stmt_token1] = "query_body_stmt_token1",
  [aux_sym_query_body_stmt_token2] = "query_body_stmt_token2",
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
  [aux_sym_query_body_stmt_token1] = aux_sym_query_body_stmt_token1,
  [aux_sym_query_body_stmt_token2] = aux_sym_query_body_stmt_token2,
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
  [aux_sym_query_body_stmt_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_body_stmt_token2] = {
    .visible = false,
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
      if (eof) ADVANCE(446);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '"') ADVANCE(878);
      if (lookahead == '%') ADVANCE(889);
      if (lookahead == '&') ADVANCE(894);
      if (lookahead == '\'') ADVANCE(883);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '*') ADVANCE(523);
      if (lookahead == '+') ADVANCE(891);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(520);
      if (lookahead == '.') ADVANCE(479);
      if (lookahead == '/') ADVANCE(888);
      if (lookahead == ':') ADVANCE(511);
      if (lookahead == ';') ADVANCE(473);
      if (lookahead == '<') ADVANCE(468);
      if (lookahead == '=') ADVANCE(462);
      if (lookahead == '>') ADVANCE(472);
      if (lookahead == '@') ADVANCE(566);
      if (lookahead == 'A') ADVANCE(104);
      if (lookahead == '[') ADVANCE(514);
      if (lookahead == ']') ADVANCE(515);
      if (lookahead == '_') ADVANCE(480);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == '{') ADVANCE(463);
      if (lookahead == '|') ADVANCE(522);
      if (lookahead == '}') ADVANCE(464);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(66);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(65);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(68);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(59);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(344);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(160);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(206);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(367);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(225);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(61);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(325);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(207);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(331);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(407);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(71);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(222);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(239);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(41);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(877);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(899);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(878);
      if (lookahead == '%') ADVANCE(889);
      if (lookahead == '&') ADVANCE(894);
      if (lookahead == '\'') ADVANCE(883);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '*') ADVANCE(523);
      if (lookahead == '+') ADVANCE(890);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(519);
      if (lookahead == '.') ADVANCE(478);
      if (lookahead == '/') ADVANCE(888);
      if (lookahead == ':') ADVANCE(511);
      if (lookahead == ';') ADVANCE(473);
      if (lookahead == '<') ADVANCE(469);
      if (lookahead == '=') ADVANCE(461);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == '[') ADVANCE(514);
      if (lookahead == ']') ADVANCE(515);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(106);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(357);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(321);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(60);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(362);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(319);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(236);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(207);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(330);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(426);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(221);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(303);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(877);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(878);
      if (lookahead == '%') ADVANCE(889);
      if (lookahead == '&') ADVANCE(894);
      if (lookahead == '\'') ADVANCE(883);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '*') ADVANCE(523);
      if (lookahead == '+') ADVANCE(890);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(519);
      if (lookahead == '.') ADVANCE(478);
      if (lookahead == '/') ADVANCE(888);
      if (lookahead == ':') ADVANCE(511);
      if (lookahead == ';') ADVANCE(473);
      if (lookahead == '<') ADVANCE(469);
      if (lookahead == '=') ADVANCE(461);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == '[') ADVANCE(514);
      if (lookahead == ']') ADVANCE(515);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(106);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(357);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(321);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(60);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(362);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(319);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(236);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(207);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(330);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(426);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(221);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(303);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(877);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(521);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '%') ADVANCE(889);
      if (lookahead == '&') ADVANCE(894);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '*') ADVANCE(523);
      if (lookahead == '+') ADVANCE(890);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(520);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(888);
      if (lookahead == '<') ADVANCE(42);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == '@') ADVANCE(566);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '}') ADVANCE(464);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(775);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(650);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(622);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(625);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(690);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(746);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(805);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(694);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(720);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(817);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(732);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(619);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(804);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(813);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(709);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(867);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(736);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(713);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(728);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (sym_name_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '%') ADVANCE(889);
      if (lookahead == '&') ADVANCE(894);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '*') ADVANCE(523);
      if (lookahead == '+') ADVANCE(890);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(520);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(888);
      if (lookahead == '<') ADVANCE(42);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == '@') ADVANCE(566);
      if (lookahead == '}') ADVANCE(464);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(775);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(650);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(622);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(625);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(690);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(746);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(805);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(694);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(720);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(817);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(732);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(619);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(804);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(813);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(709);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(867);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(736);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(713);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(728);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (sym_name_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '.') ADVANCE(478);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(511);
      if (lookahead == '<') ADVANCE(470);
      if (lookahead == '=') ADVANCE(461);
      if (lookahead == '>') ADVANCE(471);
      if (lookahead == '@') ADVANCE(566);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '}') ADVANCE(464);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(775);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(650);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(622);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(625);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(690);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(746);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(805);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(694);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(720);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(817);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(732);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(619);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(804);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(813);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(709);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(736);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(713);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(728);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (sym_name_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '.') ADVANCE(478);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(511);
      if (lookahead == '<') ADVANCE(470);
      if (lookahead == '=') ADVANCE(461);
      if (lookahead == '>') ADVANCE(471);
      if (lookahead == '@') ADVANCE(566);
      if (lookahead == '}') ADVANCE(464);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(775);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(650);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(622);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(625);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(690);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(746);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(805);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(694);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(720);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(817);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(732);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(619);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(804);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(813);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(709);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(736);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(713);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(728);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (sym_name_character_set_1(lookahead)) ADVANCE(873);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '%') ADVANCE(889);
      if (lookahead == '&') ADVANCE(894);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '*') ADVANCE(523);
      if (lookahead == '+') ADVANCE(891);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(519);
      if (lookahead == '.') ADVANCE(478);
      if (lookahead == '/') ADVANCE(888);
      if (lookahead == ':') ADVANCE(511);
      if (lookahead == ';') ADVANCE(473);
      if (lookahead == '<') ADVANCE(468);
      if (lookahead == '=') ADVANCE(462);
      if (lookahead == '>') ADVANCE(472);
      if (lookahead == '[') ADVANCE(514);
      if (lookahead == ']') ADVANCE(515);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '}') ADVANCE(464);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(105);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(159);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(321);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(291);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(226);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(233);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(324);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(207);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(330);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(220);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(303);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '%') ADVANCE(889);
      if (lookahead == '&') ADVANCE(894);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '*') ADVANCE(523);
      if (lookahead == '+') ADVANCE(891);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(519);
      if (lookahead == '.') ADVANCE(478);
      if (lookahead == '/') ADVANCE(888);
      if (lookahead == ':') ADVANCE(511);
      if (lookahead == ';') ADVANCE(473);
      if (lookahead == '<') ADVANCE(468);
      if (lookahead == '=') ADVANCE(462);
      if (lookahead == '>') ADVANCE(472);
      if (lookahead == '[') ADVANCE(514);
      if (lookahead == ']') ADVANCE(515);
      if (lookahead == '}') ADVANCE(464);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(105);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(159);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(321);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(291);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(226);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(233);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(324);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(207);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(330);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(220);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(303);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '%') ADVANCE(889);
      if (lookahead == '&') ADVANCE(894);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '*') ADVANCE(523);
      if (lookahead == '+') ADVANCE(890);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(519);
      if (lookahead == '.') ADVANCE(478);
      if (lookahead == '/') ADVANCE(888);
      if (lookahead == ';') ADVANCE(473);
      if (lookahead == '<') ADVANCE(468);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(472);
      if (lookahead == '[') ADVANCE(514);
      if (lookahead == ']') ADVANCE(515);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(105);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(159);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(321);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(291);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(226);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(233);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(324);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(207);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(330);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(220);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(303);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '%') ADVANCE(889);
      if (lookahead == '&') ADVANCE(894);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '*') ADVANCE(523);
      if (lookahead == '+') ADVANCE(890);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(519);
      if (lookahead == '.') ADVANCE(478);
      if (lookahead == '/') ADVANCE(888);
      if (lookahead == ';') ADVANCE(473);
      if (lookahead == '<') ADVANCE(468);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(472);
      if (lookahead == '[') ADVANCE(514);
      if (lookahead == ']') ADVANCE(515);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(105);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(159);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(321);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(291);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(226);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(233);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(324);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(207);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(330);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(220);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(303);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '%') ADVANCE(889);
      if (lookahead == '&') ADVANCE(894);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '*') ADVANCE(523);
      if (lookahead == '+') ADVANCE(890);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(519);
      if (lookahead == '.') ADVANCE(478);
      if (lookahead == '/') ADVANCE(888);
      if (lookahead == ':') ADVANCE(511);
      if (lookahead == ';') ADVANCE(473);
      if (lookahead == '<') ADVANCE(468);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(472);
      if (lookahead == '[') ADVANCE(514);
      if (lookahead == ']') ADVANCE(515);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(105);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(159);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(321);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(300);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(226);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(235);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(324);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(207);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(330);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(220);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(877);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '%') ADVANCE(889);
      if (lookahead == '&') ADVANCE(894);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '*') ADVANCE(523);
      if (lookahead == '+') ADVANCE(890);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(519);
      if (lookahead == '.') ADVANCE(478);
      if (lookahead == '/') ADVANCE(888);
      if (lookahead == ':') ADVANCE(511);
      if (lookahead == ';') ADVANCE(473);
      if (lookahead == '<') ADVANCE(468);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(472);
      if (lookahead == '[') ADVANCE(514);
      if (lookahead == ']') ADVANCE(515);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(105);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(159);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(321);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(300);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(226);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(235);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(324);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(207);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(330);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(220);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(877);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '%') ADVANCE(889);
      if (lookahead == '&') ADVANCE(894);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '*') ADVANCE(523);
      if (lookahead == '+') ADVANCE(890);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(520);
      if (lookahead == '.') ADVANCE(478);
      if (lookahead == '/') ADVANCE(888);
      if (lookahead == '<') ADVANCE(468);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(472);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(308);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(159);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(183);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(291);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(228);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(233);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(324);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(345);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '%') ADVANCE(889);
      if (lookahead == '&') ADVANCE(894);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '*') ADVANCE(523);
      if (lookahead == '+') ADVANCE(890);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(520);
      if (lookahead == '.') ADVANCE(478);
      if (lookahead == '/') ADVANCE(888);
      if (lookahead == '<') ADVANCE(468);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(472);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(308);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(159);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(183);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(291);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(228);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(233);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(324);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(345);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '%') ADVANCE(889);
      if (lookahead == '&') ADVANCE(894);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '*') ADVANCE(523);
      if (lookahead == '+') ADVANCE(890);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(520);
      if (lookahead == '.') ADVANCE(478);
      if (lookahead == '/') ADVANCE(888);
      if (lookahead == '<') ADVANCE(468);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(472);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(159);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(300);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(228);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(324);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(877);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '!') ADVANCE(43);
      if (lookahead == '%') ADVANCE(889);
      if (lookahead == '&') ADVANCE(894);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '*') ADVANCE(523);
      if (lookahead == '+') ADVANCE(890);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(520);
      if (lookahead == '.') ADVANCE(478);
      if (lookahead == '/') ADVANCE(888);
      if (lookahead == '<') ADVANCE(468);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(472);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(159);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(300);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(228);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(324);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(877);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(878);
      if (lookahead == '\'') ADVANCE(883);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '-') ADVANCE(519);
      if (lookahead == '.') ADVANCE(478);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '@') ADVANCE(566);
      if (lookahead == '[') ADVANCE(514);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(793);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(630);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(815);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(820);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(810);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(877);
      if (sym_name_character_set_2(lookahead)) ADVANCE(873);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(878);
      if (lookahead == '\'') ADVANCE(883);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(470);
      if (lookahead == '>') ADVANCE(471);
      if (lookahead == '@') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(877);
      if (sym_name_character_set_2(lookahead)) ADVANCE(873);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(878);
      if (lookahead == '\'') ADVANCE(883);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == '-') ADVANCE(519);
      if (lookahead == '.') ADVANCE(478);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '@') ADVANCE(566);
      if (lookahead == '[') ADVANCE(514);
      if (lookahead == '{') ADVANCE(463);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(793);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(630);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(815);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(820);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(719);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(810);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(877);
      if (sym_name_character_set_2(lookahead)) ADVANCE(873);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(878);
      if (lookahead == '\'') ADVANCE(883);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == '-') ADVANCE(519);
      if (lookahead == '.') ADVANCE(478);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '@') ADVANCE(566);
      if (lookahead == '[') ADVANCE(514);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(793);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(630);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(815);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(820);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(797);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(810);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(877);
      if (sym_name_character_set_2(lookahead)) ADVANCE(873);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(878);
      if (lookahead == '\'') ADVANCE(883);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == '-') ADVANCE(519);
      if (lookahead == '.') ADVANCE(478);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '@') ADVANCE(566);
      if (lookahead == '[') ADVANCE(514);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(793);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(630);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(815);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(820);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(810);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(729);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(877);
      if (sym_name_character_set_2(lookahead)) ADVANCE(873);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(878);
      if (lookahead == '/') ADVANCE(880);
      if (lookahead == '<') ADVANCE(882);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '&') ADVANCE(879);
      END_STATE();
    case 25:
      if (lookahead == '\'') ADVANCE(883);
      if (lookahead == '/') ADVANCE(885);
      if (lookahead == '<') ADVANCE(887);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '&') ADVANCE(884);
      END_STATE();
    case 26:
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(470);
      if (lookahead == '>') ADVANCE(471);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '_') ADVANCE(481);
      if (lookahead == '}') ADVANCE(464);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(780);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (sym_name_character_set_3(lookahead)) ADVANCE(873);
      END_STATE();
    case 27:
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(738);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (sym_name_character_set_2(lookahead)) ADVANCE(873);
      END_STATE();
    case 28:
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(635);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (sym_name_character_set_2(lookahead)) ADVANCE(873);
      END_STATE();
    case 29:
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(519);
      if (lookahead == '.') ADVANCE(478);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(511);
      if (lookahead == ';') ADVANCE(473);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '=') ADVANCE(461);
      if (lookahead == '|') ADVANCE(522);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(107);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(67);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(252);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(352);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(160);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(314);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(367);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(227);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(361);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(330);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(205);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(238);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(184);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '.') ADVANCE(478);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ':') ADVANCE(511);
      if (lookahead == ';') ADVANCE(473);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '=') ADVANCE(461);
      if (lookahead == '|') ADVANCE(522);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(299);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(236);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(330);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(484);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(900);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(901);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(470);
      if (lookahead == '>') ADVANCE(471);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(791);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(625);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(690);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(747);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(778);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(817);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(837);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(736);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(713);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (sym_name_character_set_2(lookahead)) ADVANCE(873);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(56);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(52);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(93);
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '@') ADVANCE(566);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(791);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(623);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(625);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(690);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(746);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(720);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(817);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(837);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(736);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(713);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(728);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (sym_name_character_set_2(lookahead)) ADVANCE(873);
      END_STATE();
    case 40:
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(775);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(651);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(625);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(690);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(747);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(805);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(694);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(778);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(817);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(732);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(619);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(804);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(709);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(736);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(713);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (sym_name_character_set_4(lookahead)) ADVANCE(873);
      END_STATE();
    case 41:
      if (lookahead == '2') ADVANCE(456);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 42:
      if (lookahead == '<') ADVANCE(892);
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(898);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(488);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(897);
      END_STATE();
    case 46:
      if (lookahead == '>') ADVANCE(893);
      END_STATE();
    case 47:
      if (lookahead == '>') ADVANCE(1);
      END_STATE();
    case 48:
      if (lookahead == '@') ADVANCE(565);
      END_STATE();
    case 49:
      if (lookahead == 'A') ADVANCE(140);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(243);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(47);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(112);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(289);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(285);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(110);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(152);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(350);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(600);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(210);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(524);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(254);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(328);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(346);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(322);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(262);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(340);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(292);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(443);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(435);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(366);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(78);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(392);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(326);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(392);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(394);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(365);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(368);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(506);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(394);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(409);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(341);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(315);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(334);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(411);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(437);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(342);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(442);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(438);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(257);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(403);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(311);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(439);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(354);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(304);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(381);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(399);
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
          lookahead == 'a') ADVANCE(139);
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
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 100:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(245);
      END_STATE();
    case 101:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(431);
      END_STATE();
    case 102:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(260);
      END_STATE();
    case 103:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(444);
      END_STATE();
    case 104:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(110);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(152);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(350);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(600);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(210);
      END_STATE();
    case 105:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(110);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(151);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(600);
      END_STATE();
    case 106:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(110);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(151);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(600);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(212);
      END_STATE();
    case 107:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(110);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(158);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(350);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(216);
      END_STATE();
    case 108:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(560);
      END_STATE();
    case 109:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(559);
      END_STATE();
    case 110:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(408);
      END_STATE();
    case 111:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 112:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(364);
      END_STATE();
    case 113:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(385);
      END_STATE();
    case 114:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(386);
      END_STATE();
    case 115:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(387);
      END_STATE();
    case 116:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(388);
      END_STATE();
    case 117:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(175);
      END_STATE();
    case 118:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 119:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(412);
      END_STATE();
    case 120:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(413);
      END_STATE();
    case 121:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(414);
      END_STATE();
    case 122:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(415);
      END_STATE();
    case 123:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(417);
      END_STATE();
    case 124:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(418);
      END_STATE();
    case 125:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(419);
      END_STATE();
    case 126:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(420);
      END_STATE();
    case 127:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(421);
      END_STATE();
    case 128:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(422);
      END_STATE();
    case 129:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(423);
      END_STATE();
    case 130:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(424);
      END_STATE();
    case 131:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(425);
      END_STATE();
    case 132:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(427);
      END_STATE();
    case 133:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(429);
      END_STATE();
    case 134:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(430);
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
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 151:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(581);
      END_STATE();
    case 152:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(581);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(482);
      END_STATE();
    case 153:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(498);
      END_STATE();
    case 154:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(450);
      END_STATE();
    case 155:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(214);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(369);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 156:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(181);
      END_STATE();
    case 157:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 158:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(193);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(264);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(309);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(586);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(582);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(449);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(568);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(531);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(332);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 200:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 201:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 205:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(405);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(355);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(281);
      END_STATE();
    case 206:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(494);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(510);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(578);
      END_STATE();
    case 207:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(209);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(448);
      END_STATE();
    case 208:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(465);
      END_STATE();
    case 209:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(373);
      END_STATE();
    case 210:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(594);
      END_STATE();
    case 211:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(533);
      END_STATE();
    case 212:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(593);
      END_STATE();
    case 213:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(86);
      END_STATE();
    case 214:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(165);
      END_STATE();
    case 215:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(170);
      END_STATE();
    case 216:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(74);
      END_STATE();
    case 217:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(163);
      END_STATE();
    case 218:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(454);
      END_STATE();
    case 219:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(507);
      END_STATE();
    case 220:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(192);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 221:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(192);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(53);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(416);
      END_STATE();
    case 222:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(192);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(53);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(416);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(339);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(336);
      END_STATE();
    case 223:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(162);
      END_STATE();
    case 224:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(200);
      END_STATE();
    case 225:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(249);
      END_STATE();
    case 226:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 227:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(287);
      END_STATE();
    case 228:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 229:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 230:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 231:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 232:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 233:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 234:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(382);
      END_STATE();
    case 235:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 236:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 237:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(305);
      END_STATE();
    case 238:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 239:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(310);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 240:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 241:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 242:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(372);
      END_STATE();
    case 243:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(313);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(244);
      END_STATE();
    case 244:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(317);
      END_STATE();
    case 245:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(204);
      END_STATE();
    case 246:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(474);
      END_STATE();
    case 247:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(167);
      END_STATE();
    case 248:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(167);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(234);
      END_STATE();
    case 249:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(167);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(234);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(406);
      END_STATE();
    case 250:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(601);
      END_STATE();
    case 251:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(579);
      END_STATE();
    case 252:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(328);
      END_STATE();
    case 253:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 254:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(402);
      END_STATE();
    case 255:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 256:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(189);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(89);
      END_STATE();
    case 257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 259:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 260:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 261:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(369);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 262:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(371);
      END_STATE();
    case 263:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 264:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(596);
      END_STATE();
    case 265:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(491);
      END_STATE();
    case 266:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(493);
      END_STATE();
    case 267:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(539);
      END_STATE();
    case 268:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(553);
      END_STATE();
    case 269:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(555);
      END_STATE();
    case 270:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(535);
      END_STATE();
    case 271:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(551);
      END_STATE();
    case 272:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(525);
      END_STATE();
    case 273:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(557);
      END_STATE();
    case 274:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(549);
      END_STATE();
    case 275:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(563);
      END_STATE();
    case 276:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(517);
      END_STATE();
    case 277:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(561);
      END_STATE();
    case 278:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(545);
      END_STATE();
    case 279:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(547);
      END_STATE();
    case 280:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(595);
      END_STATE();
    case 281:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 282:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(541);
      END_STATE();
    case 283:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(543);
      END_STATE();
    case 284:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(537);
      END_STATE();
    case 285:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 286:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(234);
      END_STATE();
    case 287:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(234);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(406);
      END_STATE();
    case 288:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(338);
      END_STATE();
    case 289:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 290:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(178);
      END_STATE();
    case 291:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(510);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(577);
      END_STATE();
    case 292:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(592);
      END_STATE();
    case 293:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(496);
      END_STATE();
    case 294:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(501);
      END_STATE();
    case 295:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(501);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 296:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(485);
      END_STATE();
    case 297:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(580);
      END_STATE();
    case 298:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(876);
      END_STATE();
    case 299:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(509);
      END_STATE();
    case 300:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(509);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(577);
      END_STATE();
    case 301:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(591);
      END_STATE();
    case 302:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 303:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 305:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 306:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 307:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 308:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(151);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(109);
      END_STATE();
    case 309:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 310:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(379);
      END_STATE();
    case 311:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(380);
      END_STATE();
    case 312:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(383);
      END_STATE();
    case 313:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(395);
      END_STATE();
    case 314:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(390);
      END_STATE();
    case 315:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 316:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 317:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(401);
      END_STATE();
    case 318:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 319:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(404);
      END_STATE();
    case 320:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 321:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(506);
      END_STATE();
    case 322:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 323:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(411);
      END_STATE();
    case 324:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(377);
      END_STATE();
    case 325:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(377);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(255);
      END_STATE();
    case 326:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 327:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 328:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 329:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 330:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 331:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(370);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 332:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(516);
      END_STATE();
    case 333:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 334:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 335:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(263);
      END_STATE();
    case 336:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(180);
      END_STATE();
    case 337:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(358);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(203);
      END_STATE();
    case 338:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(393);
      END_STATE();
    case 339:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(258);
      END_STATE();
    case 340:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(87);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(590);
      END_STATE();
    case 341:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(87);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(88);
      END_STATE();
    case 342:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(90);
      END_STATE();
    case 343:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(253);
      END_STATE();
    case 344:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(72);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(343);
      END_STATE();
    case 345:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(448);
      END_STATE();
    case 346:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(453);
      END_STATE();
    case 347:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(567);
      END_STATE();
    case 348:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(452);
      END_STATE();
    case 349:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(337);
      END_STATE();
    case 350:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 351:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(440);
      END_STATE();
    case 352:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 353:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 354:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(353);
      END_STATE();
    case 355:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 356:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(398);
      END_STATE();
    case 357:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 358:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 359:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(375);
      END_STATE();
    case 360:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 361:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 362:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(343);
      END_STATE();
    case 363:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(487);
      END_STATE();
    case 364:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(432);
      END_STATE();
    case 365:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(108);
      END_STATE();
    case 366:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      END_STATE();
    case 367:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(327);
      END_STATE();
    case 368:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(378);
      END_STATE();
    case 369:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
      END_STATE();
    case 370:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(391);
      END_STATE();
    case 371:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(169);
      END_STATE();
    case 372:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(185);
      END_STATE();
    case 373:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(199);
      END_STATE();
    case 374:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 375:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(203);
      END_STATE();
    case 376:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(434);
      END_STATE();
    case 377:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(575);
      END_STATE();
    case 378:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(232);
      END_STATE();
    case 379:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(603);
      END_STATE();
    case 380:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(587);
      END_STATE();
    case 381:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(529);
      END_STATE();
    case 382:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(505);
      END_STATE();
    case 383:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(597);
      END_STATE();
    case 384:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(518);
      END_STATE();
    case 385:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(489);
      END_STATE();
    case 386:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(570);
      END_STATE();
    case 387:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(486);
      END_STATE();
    case 388:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(609);
      END_STATE();
    case 389:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(457);
      END_STATE();
    case 390:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(527);
      END_STATE();
    case 391:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(38);
      END_STATE();
    case 392:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(433);
      END_STATE();
    case 393:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(441);
      END_STATE();
    case 394:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(198);
      END_STATE();
    case 395:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      END_STATE();
    case 396:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(230);
      END_STATE();
    case 397:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 398:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 399:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(174);
      END_STATE();
    case 400:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(187);
      END_STATE();
    case 401:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(55);
      END_STATE();
    case 402:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(194);
      END_STATE();
    case 403:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(231);
      END_STATE();
    case 404:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(197);
      END_STATE();
    case 405:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(89);
      END_STATE();
    case 406:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      END_STATE();
    case 407:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(186);
      END_STATE();
    case 408:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 409:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 410:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(363);
      END_STATE();
    case 411:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(333);
      END_STATE();
    case 412:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 413:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 414:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 415:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(270);
      END_STATE();
    case 416:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 417:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 418:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(272);
      END_STATE();
    case 419:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 420:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(274);
      END_STATE();
    case 421:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(275);
      END_STATE();
    case 422:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 423:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(277);
      END_STATE();
    case 424:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(278);
      END_STATE();
    case 425:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(279);
      END_STATE();
    case 426:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(280);
      END_STATE();
    case 427:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(282);
      END_STATE();
    case 428:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 429:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(283);
      END_STATE();
    case 430:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(284);
      END_STATE();
    case 431:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(400);
      END_STATE();
    case 432:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(599);
      END_STATE();
    case 433:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(242);
      END_STATE();
    case 434:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(202);
      END_STATE();
    case 435:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(455);
      END_STATE();
    case 436:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(605);
      END_STATE();
    case 437:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(875);
      END_STATE();
    case 438:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(874);
      END_STATE();
    case 439:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(589);
      END_STATE();
    case 440:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(451);
      END_STATE();
    case 441:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(572);
      END_STATE();
    case 442:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(611);
      END_STATE();
    case 443:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(92);
      END_STATE();
    case 444:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 445:
      if (eof) ADVANCE(446);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(878);
      if (lookahead == '%') ADVANCE(889);
      if (lookahead == '&') ADVANCE(894);
      if (lookahead == '\'') ADVANCE(883);
      if (lookahead == '(') ADVANCE(458);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '*') ADVANCE(523);
      if (lookahead == '+') ADVANCE(890);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(519);
      if (lookahead == '.') ADVANCE(478);
      if (lookahead == '/') ADVANCE(888);
      if (lookahead == ':') ADVANCE(511);
      if (lookahead == ';') ADVANCE(473);
      if (lookahead == '<') ADVANCE(469);
      if (lookahead == '=') ADVANCE(461);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == '[') ADVANCE(514);
      if (lookahead == ']') ADVANCE(515);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(106);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(357);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(321);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(60);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(362);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(319);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(236);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(207);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(330);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(426);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(221);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(303);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(445)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(877);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_create_query_token1);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_create_query_token2);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_create_query_token3);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_create_query_token4);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_create_query_token5);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_create_query_token6);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_create_query_token6);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_create_query_token7);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_create_query_token8);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_create_query_token9);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_interpret_query_token1);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(897);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_typedef_token1);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_typedef_token1);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_typedef_token2);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(892);
      if (lookahead == '=') ADVANCE(895);
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(892);
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(896);
      if (lookahead == '>') ADVANCE(893);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_query_body_stmt_token1);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_query_body_stmt_token1);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_query_body_stmt_token2);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_query_body_stmt_token2);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(484);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym__);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_seed_token1);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_seed_token1);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_simple_set_token1);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_simple_set_token2);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_simple_set_token3);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_gsql_select_clause_token1);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_gsql_select_clause_token1);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_accum_clause_token1);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_dml_sub_if_stmt_token1);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_dml_sub_if_stmt_token1);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_dml_sub_if_stmt_token2);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_dml_sub_if_stmt_token3);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_dml_sub_if_stmt_token4);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_dml_sub_case_stmt_token1);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_dml_sub_case_stmt_token1);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_dml_sub_case_stmt_token2);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_dml_sub_case_stmt_token2);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_dml_sub_while_stmt_token1);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_dml_sub_while_stmt_token1);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_dml_sub_while_stmt_token2);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_dml_sub_while_stmt_token3);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_dml_sub_for_each_stmt_token1);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_dml_sub_for_each_stmt_token1);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_for_each_control_token1);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_for_each_control_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(190);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_for_each_control_token2);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_for_each_control_token2);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_for_each_control_token3);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_post_accum_clause_token1);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_limit_clause_token1);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(574);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_accum_type_token1);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_accum_type_token1);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_accum_type_token2);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_accum_type_token2);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_accum_type_token3);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_accum_type_token3);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_accum_type_token4);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_accum_type_token4);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_accum_type_token5);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_accum_type_token5);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_accum_type_token6);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_accum_type_token6);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_accum_type_token7);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_accum_type_token7);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_accum_type_token8);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_accum_type_token8);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_accum_type_token9);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_accum_type_token9);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_accum_type_token10);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_accum_type_token10);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_accum_type_token11);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_accum_type_token11);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_accum_type_token12);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_accum_type_token12);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_accum_type_token13);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_accum_type_token13);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_accum_type_token14);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_accum_type_token14);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_accum_type_token15);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_accum_type_token15);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_accum_type_token16);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_accum_type_token16);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_accum_type_token17);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_accum_type_token17);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_accum_type_token18);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_accum_type_token19);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_accum_type_token20);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_accum_type_token20);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_accum_type_token21);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_accum_type_token21);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(565);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_expr_token1);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_expr_token2);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_expr_token2);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_expr_token3);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_expr_token3);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_expr_token4);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_expr_token4);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_condition_token1);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_condition_token2);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_condition_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_condition_token3);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_condition_token4);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_condition_token5);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_condition_token6);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_condition_token6);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_condition_token7);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_condition_token7);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_condition_token8);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_aggregator_token1);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_aggregator_token1);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_aggregator_token2);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_aggregator_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_aggregator_token3);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_aggregator_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(363);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_aggregator_token4);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_aggregator_token4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_aggregator_token5);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_aggregator_token5);
      if (lookahead == 'A') ADVANCE(140);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_print_stmt_token1);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_print_stmt_token1);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_print_stmt_token2);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_print_expr_token1);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_base_type_token1);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_base_type_token1);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_base_type_token2);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_base_type_token2);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_base_type_token3);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_base_type_token3);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_base_type_token4);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_base_type_token4);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_base_type_token5);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_base_type_token5);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_base_type_token6);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_base_type_token6);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_base_type_token7);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_base_type_token7);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(683);
      if (sym_name_character_set_6(lookahead)) ADVANCE(873);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(740);
      if (sym_name_character_set_7(lookahead)) ADVANCE(873);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(771);
      if (sym_name_character_set_7(lookahead)) ADVANCE(873);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(769);
      if (sym_name_character_set_7(lookahead)) ADVANCE(873);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(801);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(789);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(656);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(743);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(816);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(781);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(816);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(871);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(835);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(845);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(802);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(865);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(773);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(865);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(868);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(752);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(655);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(790);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(814);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(812);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(652);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(827);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(786);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(750);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(784);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(676);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(677);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(678);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(679);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(680);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(681);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(682);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(684);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(685);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(686);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(687);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(688);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(689);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(726);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(824);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(792);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(710);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(726);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(824);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(792);
      if (sym_name_character_set_8(lookahead)) ADVANCE(873);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(742);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(749);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(872);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(727);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(657);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(846);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(829);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(831);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(833);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(705);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(848);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(849);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(850);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(851);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(852);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(853);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(854);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(855);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(857);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(858);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(859);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(860);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(861);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(863);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(662);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(663);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(664);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(665);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(666);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(667);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(668);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(669);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(670);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(671);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(672);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(673);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(674);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(675);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(723);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(700);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(637);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(649);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(626);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(500);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(608);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(866);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(504);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(532);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(721);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(477);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(583);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(585);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(569);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(513);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(691);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(632);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(843);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(807);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(753);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(621);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(658);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(818);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(809);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(631);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(838);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(774);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(770);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(659);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(751);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(495);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(825);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(466);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(534);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(696);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(706);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(638);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(639);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(508);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(731);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(716);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(772);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(748);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(823);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(777);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(779);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(788);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(782);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(819);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(822);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(783);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(785);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(741);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(787);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(711);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(475);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(602);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(616);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(796);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(811);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(796);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(698);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(699);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(712);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(718);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(821);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(615);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(542);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(544);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(540);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(554);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(556);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(536);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(538);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(552);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(526);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(558);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(550);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(564);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(562);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(546);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(548);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(627);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(800);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(628);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(702);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(873);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(502);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(692);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(806);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(725);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(633);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(722);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(825);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(856);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(870);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(841);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(826);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(828);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(830);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(834);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(724);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(840);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(660);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(642);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(693);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(792);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(744);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(636);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(847);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(776);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(634);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(832);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(654);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(707);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(836);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(640);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(641);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(644);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(745);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(620);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(794);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(624);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(733);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(629);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(839);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(862);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(714);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(808);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(739);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(648);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(803);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(695);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(795);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(661);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(708);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(717);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(704);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(842);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(844);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(864);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(528);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(604);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(530);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(598);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(610);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(588);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(490);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(576);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(571);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(617);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(715);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(869);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(807);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(730);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(697);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(618);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(734);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(735);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(643);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(645);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(653);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(754);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(798);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(755);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(756);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(757);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(758);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(759);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(760);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(761);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(762);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(701);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(763);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(764);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(765);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(766);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(767);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(703);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(768);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(737);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(873);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(606);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(799);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(612);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(573);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(483);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(646);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(647);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(873);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_constant_token3);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_digit);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(900);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(880);
      if (lookahead == '<') ADVANCE(882);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '&') ADVANCE(879);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(900);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '/') ADVANCE(885);
      if (lookahead == '<') ADVANCE(887);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '\'') ADVANCE(884);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(900);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(488);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(900);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 445},
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
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 12},
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
  [51] = {.lex_state = 6},
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
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 21},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 445},
  [76] = {.lex_state = 22},
  [77] = {.lex_state = 22},
  [78] = {.lex_state = 19},
  [79] = {.lex_state = 19},
  [80] = {.lex_state = 19},
  [81] = {.lex_state = 22},
  [82] = {.lex_state = 22},
  [83] = {.lex_state = 19},
  [84] = {.lex_state = 39},
  [85] = {.lex_state = 22},
  [86] = {.lex_state = 22},
  [87] = {.lex_state = 19},
  [88] = {.lex_state = 39},
  [89] = {.lex_state = 22},
  [90] = {.lex_state = 22},
  [91] = {.lex_state = 39},
  [92] = {.lex_state = 19},
  [93] = {.lex_state = 23},
  [94] = {.lex_state = 19},
  [95] = {.lex_state = 22},
  [96] = {.lex_state = 22},
  [97] = {.lex_state = 19},
  [98] = {.lex_state = 22},
  [99] = {.lex_state = 19},
  [100] = {.lex_state = 19},
  [101] = {.lex_state = 22},
  [102] = {.lex_state = 22},
  [103] = {.lex_state = 22},
  [104] = {.lex_state = 22},
  [105] = {.lex_state = 19},
  [106] = {.lex_state = 39},
  [107] = {.lex_state = 22},
  [108] = {.lex_state = 39},
  [109] = {.lex_state = 22},
  [110] = {.lex_state = 39},
  [111] = {.lex_state = 39},
  [112] = {.lex_state = 39},
  [113] = {.lex_state = 19},
  [114] = {.lex_state = 19},
  [115] = {.lex_state = 39},
  [116] = {.lex_state = 19},
  [117] = {.lex_state = 39},
  [118] = {.lex_state = 39},
  [119] = {.lex_state = 39},
  [120] = {.lex_state = 19},
  [121] = {.lex_state = 22},
  [122] = {.lex_state = 22},
  [123] = {.lex_state = 19},
  [124] = {.lex_state = 19},
  [125] = {.lex_state = 19},
  [126] = {.lex_state = 22},
  [127] = {.lex_state = 19},
  [128] = {.lex_state = 19},
  [129] = {.lex_state = 22},
  [130] = {.lex_state = 19},
  [131] = {.lex_state = 19},
  [132] = {.lex_state = 19},
  [133] = {.lex_state = 14},
  [134] = {.lex_state = 19},
  [135] = {.lex_state = 19},
  [136] = {.lex_state = 19},
  [137] = {.lex_state = 19},
  [138] = {.lex_state = 19},
  [139] = {.lex_state = 19},
  [140] = {.lex_state = 19},
  [141] = {.lex_state = 39},
  [142] = {.lex_state = 19},
  [143] = {.lex_state = 19},
  [144] = {.lex_state = 19},
  [145] = {.lex_state = 19},
  [146] = {.lex_state = 19},
  [147] = {.lex_state = 19},
  [148] = {.lex_state = 19},
  [149] = {.lex_state = 19},
  [150] = {.lex_state = 19},
  [151] = {.lex_state = 19},
  [152] = {.lex_state = 19},
  [153] = {.lex_state = 19},
  [154] = {.lex_state = 19},
  [155] = {.lex_state = 19},
  [156] = {.lex_state = 19},
  [157] = {.lex_state = 19},
  [158] = {.lex_state = 16},
  [159] = {.lex_state = 16},
  [160] = {.lex_state = 19},
  [161] = {.lex_state = 19},
  [162] = {.lex_state = 19},
  [163] = {.lex_state = 19},
  [164] = {.lex_state = 19},
  [165] = {.lex_state = 19},
  [166] = {.lex_state = 19},
  [167] = {.lex_state = 19},
  [168] = {.lex_state = 19},
  [169] = {.lex_state = 19},
  [170] = {.lex_state = 14},
  [171] = {.lex_state = 19},
  [172] = {.lex_state = 19},
  [173] = {.lex_state = 19},
  [174] = {.lex_state = 14},
  [175] = {.lex_state = 19},
  [176] = {.lex_state = 16},
  [177] = {.lex_state = 16},
  [178] = {.lex_state = 16},
  [179] = {.lex_state = 40},
  [180] = {.lex_state = 16},
  [181] = {.lex_state = 16},
  [182] = {.lex_state = 16},
  [183] = {.lex_state = 16},
  [184] = {.lex_state = 16},
  [185] = {.lex_state = 40},
  [186] = {.lex_state = 14},
  [187] = {.lex_state = 16},
  [188] = {.lex_state = 40},
  [189] = {.lex_state = 16},
  [190] = {.lex_state = 16},
  [191] = {.lex_state = 445},
  [192] = {.lex_state = 16},
  [193] = {.lex_state = 445},
  [194] = {.lex_state = 16},
  [195] = {.lex_state = 16},
  [196] = {.lex_state = 16},
  [197] = {.lex_state = 16},
  [198] = {.lex_state = 18},
  [199] = {.lex_state = 18},
  [200] = {.lex_state = 16},
  [201] = {.lex_state = 18},
  [202] = {.lex_state = 16},
  [203] = {.lex_state = 18},
  [204] = {.lex_state = 16},
  [205] = {.lex_state = 18},
  [206] = {.lex_state = 16},
  [207] = {.lex_state = 18},
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
  [237] = {.lex_state = 445},
  [238] = {.lex_state = 445},
  [239] = {.lex_state = 445},
  [240] = {.lex_state = 16},
  [241] = {.lex_state = 16},
  [242] = {.lex_state = 19},
  [243] = {.lex_state = 445},
  [244] = {.lex_state = 19},
  [245] = {.lex_state = 445},
  [246] = {.lex_state = 29},
  [247] = {.lex_state = 29},
  [248] = {.lex_state = 445},
  [249] = {.lex_state = 35},
  [250] = {.lex_state = 35},
  [251] = {.lex_state = 35},
  [252] = {.lex_state = 445},
  [253] = {.lex_state = 445},
  [254] = {.lex_state = 29},
  [255] = {.lex_state = 445},
  [256] = {.lex_state = 29},
  [257] = {.lex_state = 445},
  [258] = {.lex_state = 445},
  [259] = {.lex_state = 445},
  [260] = {.lex_state = 35},
  [261] = {.lex_state = 35},
  [262] = {.lex_state = 35},
  [263] = {.lex_state = 35},
  [264] = {.lex_state = 35},
  [265] = {.lex_state = 29},
  [266] = {.lex_state = 29},
  [267] = {.lex_state = 29},
  [268] = {.lex_state = 35},
  [269] = {.lex_state = 6},
  [270] = {.lex_state = 26},
  [271] = {.lex_state = 6},
  [272] = {.lex_state = 29},
  [273] = {.lex_state = 35},
  [274] = {.lex_state = 29},
  [275] = {.lex_state = 445},
  [276] = {.lex_state = 445},
  [277] = {.lex_state = 35},
  [278] = {.lex_state = 35},
  [279] = {.lex_state = 35},
  [280] = {.lex_state = 26},
  [281] = {.lex_state = 35},
  [282] = {.lex_state = 35},
  [283] = {.lex_state = 35},
  [284] = {.lex_state = 6},
  [285] = {.lex_state = 445},
  [286] = {.lex_state = 445},
  [287] = {.lex_state = 29},
  [288] = {.lex_state = 6},
  [289] = {.lex_state = 445},
  [290] = {.lex_state = 6},
  [291] = {.lex_state = 29},
  [292] = {.lex_state = 29},
  [293] = {.lex_state = 29},
  [294] = {.lex_state = 445},
  [295] = {.lex_state = 445},
  [296] = {.lex_state = 29},
  [297] = {.lex_state = 445},
  [298] = {.lex_state = 29},
  [299] = {.lex_state = 26},
  [300] = {.lex_state = 26},
  [301] = {.lex_state = 29},
  [302] = {.lex_state = 445},
  [303] = {.lex_state = 30},
  [304] = {.lex_state = 26},
  [305] = {.lex_state = 26},
  [306] = {.lex_state = 445},
  [307] = {.lex_state = 445},
  [308] = {.lex_state = 445},
  [309] = {.lex_state = 445},
  [310] = {.lex_state = 445},
  [311] = {.lex_state = 445},
  [312] = {.lex_state = 445},
  [313] = {.lex_state = 445},
  [314] = {.lex_state = 445},
  [315] = {.lex_state = 445},
  [316] = {.lex_state = 445},
  [317] = {.lex_state = 26},
  [318] = {.lex_state = 29},
  [319] = {.lex_state = 26},
  [320] = {.lex_state = 26},
  [321] = {.lex_state = 26},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 26},
  [324] = {.lex_state = 26},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 29},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 445},
  [331] = {.lex_state = 445},
  [332] = {.lex_state = 26},
  [333] = {.lex_state = 445},
  [334] = {.lex_state = 445},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 445},
  [337] = {.lex_state = 445},
  [338] = {.lex_state = 445},
  [339] = {.lex_state = 445},
  [340] = {.lex_state = 445},
  [341] = {.lex_state = 445},
  [342] = {.lex_state = 445},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 445},
  [347] = {.lex_state = 445},
  [348] = {.lex_state = 445},
  [349] = {.lex_state = 445},
  [350] = {.lex_state = 20},
  [351] = {.lex_state = 27},
  [352] = {.lex_state = 27},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 26},
  [355] = {.lex_state = 445},
  [356] = {.lex_state = 20},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 445},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 26},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 445},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 445},
  [371] = {.lex_state = 28},
  [372] = {.lex_state = 445},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 445},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 445},
  [378] = {.lex_state = 20},
  [379] = {.lex_state = 20},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 20},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 20},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 20},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 20},
  [389] = {.lex_state = 20},
  [390] = {.lex_state = 20},
  [391] = {.lex_state = 20},
  [392] = {.lex_state = 20},
  [393] = {.lex_state = 26},
  [394] = {.lex_state = 445},
  [395] = {.lex_state = 20},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 445},
  [400] = {.lex_state = 8},
  [401] = {.lex_state = 8},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 445},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 20},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 445},
  [410] = {.lex_state = 445},
  [411] = {.lex_state = 20},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 8},
  [414] = {.lex_state = 445},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 8},
  [417] = {.lex_state = 445},
  [418] = {.lex_state = 8},
  [419] = {.lex_state = 8},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 20},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 20},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 8},
  [427] = {.lex_state = 445},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 445},
  [432] = {.lex_state = 20},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 20},
  [435] = {.lex_state = 20},
  [436] = {.lex_state = 20},
  [437] = {.lex_state = 445},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 445},
  [440] = {.lex_state = 445},
  [441] = {.lex_state = 445},
  [442] = {.lex_state = 20},
  [443] = {.lex_state = 445},
  [444] = {.lex_state = 20},
  [445] = {.lex_state = 20},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 20},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 20},
  [452] = {.lex_state = 20},
  [453] = {.lex_state = 20},
  [454] = {.lex_state = 445},
  [455] = {.lex_state = 445},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 29},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 8},
  [466] = {.lex_state = 30},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 20},
  [469] = {.lex_state = 20},
  [470] = {.lex_state = 445},
  [471] = {.lex_state = 445},
  [472] = {.lex_state = 445},
  [473] = {.lex_state = 445},
  [474] = {.lex_state = 20},
  [475] = {.lex_state = 8},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 29},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 445},
  [480] = {.lex_state = 20},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 8},
  [484] = {.lex_state = 8},
  [485] = {.lex_state = 8},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 445},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 20},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 445},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 25},
  [499] = {.lex_state = 24},
  [500] = {.lex_state = 20},
  [501] = {.lex_state = 445},
  [502] = {.lex_state = 20},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 24},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 25},
  [508] = {.lex_state = 445},
  [509] = {.lex_state = 8},
  [510] = {.lex_state = 8},
  [511] = {.lex_state = 25},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 24},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 20},
  [520] = {.lex_state = 445},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 445},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 445},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 445},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 445},
  [533] = {.lex_state = 445},
  [534] = {.lex_state = 445},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 445},
  [537] = {.lex_state = 445},
  [538] = {.lex_state = 20},
  [539] = {.lex_state = 8},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 445},
  [545] = {.lex_state = 8},
  [546] = {.lex_state = 445},
  [547] = {.lex_state = 6},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 20},
  [550] = {.lex_state = 24},
  [551] = {.lex_state = 25},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 445},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 20},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 445},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 8},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 8},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 20},
  [568] = {.lex_state = 445},
  [569] = {.lex_state = 445},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 8},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 445},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 445},
  [578] = {.lex_state = 8},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 445},
  [585] = {.lex_state = 20},
  [586] = {.lex_state = 24},
  [587] = {.lex_state = 25},
  [588] = {.lex_state = 20},
  [589] = {.lex_state = 14},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 445},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 14},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 445},
  [606] = {.lex_state = 16},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 8},
  [610] = {.lex_state = 8},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 16},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 445},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 14},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 445},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 445},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 445},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 8},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 8},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 20},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 445},
  [659] = {.lex_state = 445},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 20},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 20},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 20},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 20},
  [678] = {.lex_state = 20},
  [679] = {.lex_state = 0},
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
  [695] = {.lex_state = 20},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 20},
  [698] = {.lex_state = 20},
  [699] = {.lex_state = 8},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 20},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 8},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 445},
  [711] = {.lex_state = 20},
  [712] = {.lex_state = 445},
  [713] = {.lex_state = 20},
  [714] = {.lex_state = 20},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 14},
  [717] = {.lex_state = 445},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 20},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 20},
  [725] = {.lex_state = 20},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 20},
  [729] = {.lex_state = 20},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 20},
  [733] = {.lex_state = 20},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 0},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 445},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 8},
  [748] = {.lex_state = 445},
  [749] = {.lex_state = 20},
  [750] = {.lex_state = 20},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 20},
  [754] = {.lex_state = 20},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 20},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 20},
  [762] = {.lex_state = 20},
  [763] = {.lex_state = 8},
  [764] = {.lex_state = 8},
  [765] = {.lex_state = 8},
  [766] = {.lex_state = 8},
  [767] = {.lex_state = 8},
  [768] = {.lex_state = 8},
  [769] = {.lex_state = 8},
  [770] = {.lex_state = 8},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 8},
  [778] = {.lex_state = 20},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 20},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 20},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 8},
  [787] = {.lex_state = 20},
  [788] = {.lex_state = 20},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 445},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 20},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 8},
  [800] = {.lex_state = 20},
  [801] = {.lex_state = 20},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 445},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 20},
  [810] = {.lex_state = 445},
  [811] = {.lex_state = 20},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 445},
  [815] = {.lex_state = 20},
  [816] = {.lex_state = 20},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 20},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 20},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 445},
  [830] = {.lex_state = 20},
  [831] = {.lex_state = 20},
  [832] = {.lex_state = 445},
  [833] = {.lex_state = 0},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 20},
  [836] = {.lex_state = 20},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 20},
  [840] = {.lex_state = 445},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 20},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 445},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 20},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 20},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 20},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 20},
  [863] = {.lex_state = 20},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 0},
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
    [aux_sym_query_body_stmt_token1] = ACTIONS(1),
    [aux_sym_query_body_stmt_token2] = ACTIONS(1),
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
    [sym_gsql] = STATE(852),
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
    [sym_query_body_stmt] = STATE(760),
    [sym_assign_stmt] = STATE(771),
    [sym_v_set_var_decl_stmt] = STATE(771),
    [sym_l_accum_assign_stmt] = STATE(771),
    [sym_g_accum_assign_stmt] = STATE(771),
    [sym_g_accum_accum_stmt] = STATE(771),
    [sym_func_call_stmt] = STATE(771),
    [sym__select_stmt] = STATE(771),
    [sym_gsql_select_block] = STATE(771),
    [sym_gsql_select_clause] = STATE(618),
    [sym_query_body_case_stmt] = STATE(771),
    [sym_query_body_if_stmt] = STATE(771),
    [sym_query_body_while_stmt] = STATE(771),
    [sym_query_body_for_each_stmt] = STATE(771),
    [sym_decl_stmt] = STATE(771),
    [sym_base_decl_stmt] = STATE(650),
    [sym_accum_decl_stmt] = STATE(650),
    [sym_accum_type] = STATE(428),
    [sym_global_accum_name] = STATE(465),
    [sym_local_accum_name] = STATE(616),
    [sym_print_stmt] = STATE(771),
    [sym_base_type] = STATE(754),
    [aux_sym_query_body_repeat1] = STATE(3),
    [aux_sym_query_body_repeat2] = STATE(4),
    [anon_sym_RBRACE] = ACTIONS(11),
    [aux_sym_typedef_token1] = ACTIONS(13),
    [aux_sym_query_body_stmt_token1] = ACTIONS(15),
    [aux_sym_query_body_stmt_token2] = ACTIONS(15),
    [aux_sym_dml_sub_if_stmt_token1] = ACTIONS(17),
    [aux_sym_dml_sub_case_stmt_token1] = ACTIONS(19),
    [aux_sym_dml_sub_while_stmt_token1] = ACTIONS(21),
    [aux_sym_dml_sub_for_each_stmt_token1] = ACTIONS(23),
    [aux_sym_accum_type_token1] = ACTIONS(25),
    [aux_sym_accum_type_token2] = ACTIONS(27),
    [aux_sym_accum_type_token3] = ACTIONS(27),
    [aux_sym_accum_type_token4] = ACTIONS(27),
    [aux_sym_accum_type_token5] = ACTIONS(27),
    [aux_sym_accum_type_token6] = ACTIONS(29),
    [aux_sym_accum_type_token7] = ACTIONS(29),
    [aux_sym_accum_type_token8] = ACTIONS(31),
    [aux_sym_accum_type_token9] = ACTIONS(31),
    [aux_sym_accum_type_token10] = ACTIONS(31),
    [aux_sym_accum_type_token11] = ACTIONS(31),
    [aux_sym_accum_type_token12] = ACTIONS(31),
    [aux_sym_accum_type_token13] = ACTIONS(33),
    [aux_sym_accum_type_token14] = ACTIONS(35),
    [aux_sym_accum_type_token15] = ACTIONS(35),
    [aux_sym_accum_type_token16] = ACTIONS(37),
    [aux_sym_accum_type_token17] = ACTIONS(39),
    [aux_sym_accum_type_token20] = ACTIONS(41),
    [aux_sym_accum_type_token21] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [aux_sym_print_stmt_token1] = ACTIONS(49),
    [aux_sym_base_type_token1] = ACTIONS(27),
    [aux_sym_base_type_token2] = ACTIONS(27),
    [aux_sym_base_type_token3] = ACTIONS(51),
    [aux_sym_base_type_token4] = ACTIONS(27),
    [aux_sym_base_type_token5] = ACTIONS(27),
    [aux_sym_base_type_token6] = ACTIONS(27),
    [aux_sym_base_type_token7] = ACTIONS(27),
    [sym_name] = ACTIONS(53),
    [sym_newline] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_typedef] = STATE(51),
    [sym_query_body_stmts] = STATE(5),
    [sym_query_body_stmt] = STATE(760),
    [sym_assign_stmt] = STATE(771),
    [sym_v_set_var_decl_stmt] = STATE(771),
    [sym_l_accum_assign_stmt] = STATE(771),
    [sym_g_accum_assign_stmt] = STATE(771),
    [sym_g_accum_accum_stmt] = STATE(771),
    [sym_func_call_stmt] = STATE(771),
    [sym__select_stmt] = STATE(771),
    [sym_gsql_select_block] = STATE(771),
    [sym_gsql_select_clause] = STATE(618),
    [sym_query_body_case_stmt] = STATE(771),
    [sym_query_body_if_stmt] = STATE(771),
    [sym_query_body_while_stmt] = STATE(771),
    [sym_query_body_for_each_stmt] = STATE(771),
    [sym_decl_stmt] = STATE(771),
    [sym_base_decl_stmt] = STATE(650),
    [sym_accum_decl_stmt] = STATE(650),
    [sym_accum_type] = STATE(428),
    [sym_global_accum_name] = STATE(465),
    [sym_local_accum_name] = STATE(616),
    [sym_print_stmt] = STATE(771),
    [sym_base_type] = STATE(754),
    [aux_sym_query_body_repeat1] = STATE(51),
    [aux_sym_query_body_repeat2] = STATE(5),
    [anon_sym_RBRACE] = ACTIONS(55),
    [aux_sym_typedef_token1] = ACTIONS(13),
    [aux_sym_query_body_stmt_token1] = ACTIONS(15),
    [aux_sym_query_body_stmt_token2] = ACTIONS(15),
    [aux_sym_dml_sub_if_stmt_token1] = ACTIONS(17),
    [aux_sym_dml_sub_case_stmt_token1] = ACTIONS(19),
    [aux_sym_dml_sub_while_stmt_token1] = ACTIONS(21),
    [aux_sym_dml_sub_for_each_stmt_token1] = ACTIONS(23),
    [aux_sym_accum_type_token1] = ACTIONS(25),
    [aux_sym_accum_type_token2] = ACTIONS(27),
    [aux_sym_accum_type_token3] = ACTIONS(27),
    [aux_sym_accum_type_token4] = ACTIONS(27),
    [aux_sym_accum_type_token5] = ACTIONS(27),
    [aux_sym_accum_type_token6] = ACTIONS(29),
    [aux_sym_accum_type_token7] = ACTIONS(29),
    [aux_sym_accum_type_token8] = ACTIONS(31),
    [aux_sym_accum_type_token9] = ACTIONS(31),
    [aux_sym_accum_type_token10] = ACTIONS(31),
    [aux_sym_accum_type_token11] = ACTIONS(31),
    [aux_sym_accum_type_token12] = ACTIONS(31),
    [aux_sym_accum_type_token13] = ACTIONS(33),
    [aux_sym_accum_type_token14] = ACTIONS(35),
    [aux_sym_accum_type_token15] = ACTIONS(35),
    [aux_sym_accum_type_token16] = ACTIONS(37),
    [aux_sym_accum_type_token17] = ACTIONS(39),
    [aux_sym_accum_type_token20] = ACTIONS(41),
    [aux_sym_accum_type_token21] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [aux_sym_print_stmt_token1] = ACTIONS(49),
    [aux_sym_base_type_token1] = ACTIONS(27),
    [aux_sym_base_type_token2] = ACTIONS(27),
    [aux_sym_base_type_token3] = ACTIONS(51),
    [aux_sym_base_type_token4] = ACTIONS(27),
    [aux_sym_base_type_token5] = ACTIONS(27),
    [aux_sym_base_type_token6] = ACTIONS(27),
    [aux_sym_base_type_token7] = ACTIONS(27),
    [sym_name] = ACTIONS(53),
    [sym_newline] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 31,
    ACTIONS(17), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(25), 1,
      aux_sym_accum_type_token1,
    ACTIONS(33), 1,
      aux_sym_accum_type_token13,
    ACTIONS(37), 1,
      aux_sym_accum_type_token16,
    ACTIONS(39), 1,
      aux_sym_accum_type_token17,
    ACTIONS(41), 1,
      aux_sym_accum_type_token20,
    ACTIONS(43), 1,
      aux_sym_accum_type_token21,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      aux_sym_print_stmt_token1,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(53), 1,
      sym_name,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(428), 1,
      sym_accum_type,
    STATE(465), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(618), 1,
      sym_gsql_select_clause,
    STATE(754), 1,
      sym_base_type,
    STATE(760), 1,
      sym_query_body_stmt,
    ACTIONS(15), 2,
      aux_sym_query_body_stmt_token1,
      aux_sym_query_body_stmt_token2,
    ACTIONS(29), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(35), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(6), 2,
      sym_query_body_stmts,
      aux_sym_query_body_repeat2,
    STATE(650), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(27), 10,
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
    STATE(771), 14,
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
  [127] = 31,
    ACTIONS(17), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(25), 1,
      aux_sym_accum_type_token1,
    ACTIONS(33), 1,
      aux_sym_accum_type_token13,
    ACTIONS(37), 1,
      aux_sym_accum_type_token16,
    ACTIONS(39), 1,
      aux_sym_accum_type_token17,
    ACTIONS(41), 1,
      aux_sym_accum_type_token20,
    ACTIONS(43), 1,
      aux_sym_accum_type_token21,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      aux_sym_print_stmt_token1,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(53), 1,
      sym_name,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(428), 1,
      sym_accum_type,
    STATE(465), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(618), 1,
      sym_gsql_select_clause,
    STATE(754), 1,
      sym_base_type,
    STATE(760), 1,
      sym_query_body_stmt,
    ACTIONS(15), 2,
      aux_sym_query_body_stmt_token1,
      aux_sym_query_body_stmt_token2,
    ACTIONS(29), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(35), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(6), 2,
      sym_query_body_stmts,
      aux_sym_query_body_repeat2,
    STATE(650), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(27), 10,
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
    STATE(771), 14,
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
  [254] = 31,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(64), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(67), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(70), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(73), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(76), 1,
      aux_sym_accum_type_token1,
    ACTIONS(88), 1,
      aux_sym_accum_type_token13,
    ACTIONS(94), 1,
      aux_sym_accum_type_token16,
    ACTIONS(97), 1,
      aux_sym_accum_type_token17,
    ACTIONS(100), 1,
      aux_sym_accum_type_token20,
    ACTIONS(103), 1,
      aux_sym_accum_type_token21,
    ACTIONS(106), 1,
      anon_sym_AT_AT,
    ACTIONS(109), 1,
      anon_sym_AT,
    ACTIONS(112), 1,
      aux_sym_print_stmt_token1,
    ACTIONS(115), 1,
      aux_sym_base_type_token3,
    ACTIONS(118), 1,
      sym_name,
    STATE(428), 1,
      sym_accum_type,
    STATE(465), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(618), 1,
      sym_gsql_select_clause,
    STATE(754), 1,
      sym_base_type,
    STATE(760), 1,
      sym_query_body_stmt,
    ACTIONS(61), 2,
      aux_sym_query_body_stmt_token1,
      aux_sym_query_body_stmt_token2,
    ACTIONS(82), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(91), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(6), 2,
      sym_query_body_stmts,
      aux_sym_query_body_repeat2,
    STATE(650), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(85), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(79), 10,
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
    STATE(771), 14,
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
  [381] = 30,
    ACTIONS(19), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(25), 1,
      aux_sym_accum_type_token1,
    ACTIONS(33), 1,
      aux_sym_accum_type_token13,
    ACTIONS(37), 1,
      aux_sym_accum_type_token16,
    ACTIONS(39), 1,
      aux_sym_accum_type_token17,
    ACTIONS(41), 1,
      aux_sym_accum_type_token20,
    ACTIONS(43), 1,
      aux_sym_accum_type_token21,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      aux_sym_print_stmt_token1,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(53), 1,
      sym_name,
    ACTIONS(121), 1,
      aux_sym_dml_sub_if_stmt_token1,
    STATE(428), 1,
      sym_accum_type,
    STATE(465), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(618), 1,
      sym_gsql_select_clause,
    STATE(736), 1,
      sym_query_body_stmts,
    STATE(754), 1,
      sym_base_type,
    STATE(789), 1,
      sym_query_body_stmt,
    ACTIONS(15), 2,
      aux_sym_query_body_stmt_token1,
      aux_sym_query_body_stmt_token2,
    ACTIONS(29), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(35), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(650), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(27), 10,
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
    STATE(771), 14,
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
  [504] = 30,
    ACTIONS(17), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(25), 1,
      aux_sym_accum_type_token1,
    ACTIONS(33), 1,
      aux_sym_accum_type_token13,
    ACTIONS(37), 1,
      aux_sym_accum_type_token16,
    ACTIONS(39), 1,
      aux_sym_accum_type_token17,
    ACTIONS(41), 1,
      aux_sym_accum_type_token20,
    ACTIONS(43), 1,
      aux_sym_accum_type_token21,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      aux_sym_print_stmt_token1,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(53), 1,
      sym_name,
    STATE(428), 1,
      sym_accum_type,
    STATE(465), 1,
      sym_global_accum_name,
    STATE(607), 1,
      sym_query_body_stmts,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(618), 1,
      sym_gsql_select_clause,
    STATE(754), 1,
      sym_base_type,
    STATE(789), 1,
      sym_query_body_stmt,
    ACTIONS(15), 2,
      aux_sym_query_body_stmt_token1,
      aux_sym_query_body_stmt_token2,
    ACTIONS(29), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(35), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(650), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(27), 10,
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
    STATE(771), 14,
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
  [627] = 30,
    ACTIONS(17), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(25), 1,
      aux_sym_accum_type_token1,
    ACTIONS(33), 1,
      aux_sym_accum_type_token13,
    ACTIONS(37), 1,
      aux_sym_accum_type_token16,
    ACTIONS(39), 1,
      aux_sym_accum_type_token17,
    ACTIONS(41), 1,
      aux_sym_accum_type_token20,
    ACTIONS(43), 1,
      aux_sym_accum_type_token21,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      aux_sym_print_stmt_token1,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(53), 1,
      sym_name,
    STATE(428), 1,
      sym_accum_type,
    STATE(465), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(618), 1,
      sym_gsql_select_clause,
    STATE(754), 1,
      sym_base_type,
    STATE(789), 1,
      sym_query_body_stmt,
    STATE(803), 1,
      sym_query_body_stmts,
    ACTIONS(15), 2,
      aux_sym_query_body_stmt_token1,
      aux_sym_query_body_stmt_token2,
    ACTIONS(29), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(35), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(650), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(27), 10,
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
    STATE(771), 14,
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
  [750] = 30,
    ACTIONS(17), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(25), 1,
      aux_sym_accum_type_token1,
    ACTIONS(33), 1,
      aux_sym_accum_type_token13,
    ACTIONS(37), 1,
      aux_sym_accum_type_token16,
    ACTIONS(39), 1,
      aux_sym_accum_type_token17,
    ACTIONS(41), 1,
      aux_sym_accum_type_token20,
    ACTIONS(43), 1,
      aux_sym_accum_type_token21,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      aux_sym_print_stmt_token1,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(53), 1,
      sym_name,
    STATE(428), 1,
      sym_accum_type,
    STATE(465), 1,
      sym_global_accum_name,
    STATE(497), 1,
      sym_query_body_stmts,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(618), 1,
      sym_gsql_select_clause,
    STATE(754), 1,
      sym_base_type,
    STATE(789), 1,
      sym_query_body_stmt,
    ACTIONS(15), 2,
      aux_sym_query_body_stmt_token1,
      aux_sym_query_body_stmt_token2,
    ACTIONS(29), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(35), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(650), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(27), 10,
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
    STATE(771), 14,
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
  [873] = 30,
    ACTIONS(17), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(25), 1,
      aux_sym_accum_type_token1,
    ACTIONS(33), 1,
      aux_sym_accum_type_token13,
    ACTIONS(37), 1,
      aux_sym_accum_type_token16,
    ACTIONS(39), 1,
      aux_sym_accum_type_token17,
    ACTIONS(41), 1,
      aux_sym_accum_type_token20,
    ACTIONS(43), 1,
      aux_sym_accum_type_token21,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      aux_sym_print_stmt_token1,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(53), 1,
      sym_name,
    STATE(428), 1,
      sym_accum_type,
    STATE(465), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(618), 1,
      sym_gsql_select_clause,
    STATE(665), 1,
      sym_query_body_stmts,
    STATE(754), 1,
      sym_base_type,
    STATE(789), 1,
      sym_query_body_stmt,
    ACTIONS(15), 2,
      aux_sym_query_body_stmt_token1,
      aux_sym_query_body_stmt_token2,
    ACTIONS(29), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(35), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(650), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(27), 10,
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
    STATE(771), 14,
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
  [996] = 30,
    ACTIONS(17), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(25), 1,
      aux_sym_accum_type_token1,
    ACTIONS(33), 1,
      aux_sym_accum_type_token13,
    ACTIONS(37), 1,
      aux_sym_accum_type_token16,
    ACTIONS(39), 1,
      aux_sym_accum_type_token17,
    ACTIONS(41), 1,
      aux_sym_accum_type_token20,
    ACTIONS(43), 1,
      aux_sym_accum_type_token21,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      aux_sym_print_stmt_token1,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(53), 1,
      sym_name,
    STATE(428), 1,
      sym_accum_type,
    STATE(465), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(618), 1,
      sym_gsql_select_clause,
    STATE(675), 1,
      sym_query_body_stmts,
    STATE(754), 1,
      sym_base_type,
    STATE(789), 1,
      sym_query_body_stmt,
    ACTIONS(15), 2,
      aux_sym_query_body_stmt_token1,
      aux_sym_query_body_stmt_token2,
    ACTIONS(29), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(35), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(650), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(27), 10,
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
    STATE(771), 14,
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
  [1119] = 30,
    ACTIONS(17), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(25), 1,
      aux_sym_accum_type_token1,
    ACTIONS(33), 1,
      aux_sym_accum_type_token13,
    ACTIONS(37), 1,
      aux_sym_accum_type_token16,
    ACTIONS(39), 1,
      aux_sym_accum_type_token17,
    ACTIONS(41), 1,
      aux_sym_accum_type_token20,
    ACTIONS(43), 1,
      aux_sym_accum_type_token21,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      aux_sym_print_stmt_token1,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(53), 1,
      sym_name,
    STATE(428), 1,
      sym_accum_type,
    STATE(465), 1,
      sym_global_accum_name,
    STATE(542), 1,
      sym_query_body_stmts,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(618), 1,
      sym_gsql_select_clause,
    STATE(754), 1,
      sym_base_type,
    STATE(789), 1,
      sym_query_body_stmt,
    ACTIONS(15), 2,
      aux_sym_query_body_stmt_token1,
      aux_sym_query_body_stmt_token2,
    ACTIONS(29), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(35), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(650), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(27), 10,
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
    STATE(771), 14,
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
  [1242] = 30,
    ACTIONS(17), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(25), 1,
      aux_sym_accum_type_token1,
    ACTIONS(33), 1,
      aux_sym_accum_type_token13,
    ACTIONS(37), 1,
      aux_sym_accum_type_token16,
    ACTIONS(39), 1,
      aux_sym_accum_type_token17,
    ACTIONS(41), 1,
      aux_sym_accum_type_token20,
    ACTIONS(43), 1,
      aux_sym_accum_type_token21,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      aux_sym_print_stmt_token1,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(53), 1,
      sym_name,
    STATE(428), 1,
      sym_accum_type,
    STATE(465), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(618), 1,
      sym_gsql_select_clause,
    STATE(754), 1,
      sym_base_type,
    STATE(756), 1,
      sym_query_body_stmts,
    STATE(789), 1,
      sym_query_body_stmt,
    ACTIONS(15), 2,
      aux_sym_query_body_stmt_token1,
      aux_sym_query_body_stmt_token2,
    ACTIONS(29), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(35), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(650), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(27), 10,
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
    STATE(771), 14,
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
  [1365] = 30,
    ACTIONS(17), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(25), 1,
      aux_sym_accum_type_token1,
    ACTIONS(33), 1,
      aux_sym_accum_type_token13,
    ACTIONS(37), 1,
      aux_sym_accum_type_token16,
    ACTIONS(39), 1,
      aux_sym_accum_type_token17,
    ACTIONS(41), 1,
      aux_sym_accum_type_token20,
    ACTIONS(43), 1,
      aux_sym_accum_type_token21,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      aux_sym_print_stmt_token1,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(53), 1,
      sym_name,
    STATE(428), 1,
      sym_accum_type,
    STATE(465), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(618), 1,
      sym_gsql_select_clause,
    STATE(655), 1,
      sym_query_body_stmts,
    STATE(754), 1,
      sym_base_type,
    STATE(789), 1,
      sym_query_body_stmt,
    ACTIONS(15), 2,
      aux_sym_query_body_stmt_token1,
      aux_sym_query_body_stmt_token2,
    ACTIONS(29), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(35), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(650), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(27), 10,
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
    STATE(771), 14,
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
  [1488] = 30,
    ACTIONS(19), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(25), 1,
      aux_sym_accum_type_token1,
    ACTIONS(33), 1,
      aux_sym_accum_type_token13,
    ACTIONS(37), 1,
      aux_sym_accum_type_token16,
    ACTIONS(39), 1,
      aux_sym_accum_type_token17,
    ACTIONS(41), 1,
      aux_sym_accum_type_token20,
    ACTIONS(43), 1,
      aux_sym_accum_type_token21,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      aux_sym_print_stmt_token1,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(53), 1,
      sym_name,
    ACTIONS(121), 1,
      aux_sym_dml_sub_if_stmt_token1,
    STATE(428), 1,
      sym_accum_type,
    STATE(465), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(618), 1,
      sym_gsql_select_clause,
    STATE(754), 1,
      sym_base_type,
    STATE(789), 1,
      sym_query_body_stmt,
    STATE(826), 1,
      sym_query_body_stmts,
    ACTIONS(15), 2,
      aux_sym_query_body_stmt_token1,
      aux_sym_query_body_stmt_token2,
    ACTIONS(29), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(35), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(650), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(27), 10,
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
    STATE(771), 14,
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
  [1611] = 30,
    ACTIONS(17), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(25), 1,
      aux_sym_accum_type_token1,
    ACTIONS(33), 1,
      aux_sym_accum_type_token13,
    ACTIONS(37), 1,
      aux_sym_accum_type_token16,
    ACTIONS(39), 1,
      aux_sym_accum_type_token17,
    ACTIONS(41), 1,
      aux_sym_accum_type_token20,
    ACTIONS(43), 1,
      aux_sym_accum_type_token21,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      aux_sym_print_stmt_token1,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(53), 1,
      sym_name,
    STATE(428), 1,
      sym_accum_type,
    STATE(465), 1,
      sym_global_accum_name,
    STATE(515), 1,
      sym_query_body_stmts,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(618), 1,
      sym_gsql_select_clause,
    STATE(754), 1,
      sym_base_type,
    STATE(789), 1,
      sym_query_body_stmt,
    ACTIONS(15), 2,
      aux_sym_query_body_stmt_token1,
      aux_sym_query_body_stmt_token2,
    ACTIONS(29), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(35), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(650), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(27), 10,
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
    STATE(771), 14,
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
  [1734] = 30,
    ACTIONS(17), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(19), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(21), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(23), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(25), 1,
      aux_sym_accum_type_token1,
    ACTIONS(33), 1,
      aux_sym_accum_type_token13,
    ACTIONS(37), 1,
      aux_sym_accum_type_token16,
    ACTIONS(39), 1,
      aux_sym_accum_type_token17,
    ACTIONS(41), 1,
      aux_sym_accum_type_token20,
    ACTIONS(43), 1,
      aux_sym_accum_type_token21,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      aux_sym_print_stmt_token1,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(53), 1,
      sym_name,
    STATE(428), 1,
      sym_accum_type,
    STATE(465), 1,
      sym_global_accum_name,
    STATE(516), 1,
      sym_query_body_stmts,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(618), 1,
      sym_gsql_select_clause,
    STATE(754), 1,
      sym_base_type,
    STATE(789), 1,
      sym_query_body_stmt,
    ACTIONS(15), 2,
      aux_sym_query_body_stmt_token1,
      aux_sym_query_body_stmt_token2,
    ACTIONS(29), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(35), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(650), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(27), 10,
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
    STATE(771), 14,
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
  [1857] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(125), 6,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(123), 41,
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
  [1914] = 6,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(131), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(127), 38,
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
  [1975] = 5,
    ACTIONS(139), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(137), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(135), 38,
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
  [2033] = 6,
    ACTIONS(146), 1,
      anon_sym_DOT,
    STATE(25), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(148), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(144), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(142), 35,
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
  [2093] = 5,
    ACTIONS(154), 1,
      anon_sym_DOT,
    STATE(23), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(152), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(150), 38,
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
  [2151] = 4,
    STATE(29), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(131), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(127), 39,
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
  [2207] = 5,
    ACTIONS(146), 1,
      anon_sym_DOT,
    STATE(23), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(159), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(157), 38,
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
  [2265] = 5,
    ACTIONS(146), 1,
      anon_sym_DOT,
    STATE(25), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(161), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(148), 38,
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
  [2323] = 4,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(137), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(135), 39,
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
  [2379] = 6,
    ACTIONS(165), 1,
      anon_sym_DOT,
    STATE(47), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(148), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(144), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(142), 35,
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
  [2439] = 4,
    STATE(21), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(169), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(167), 39,
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
  [2495] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(173), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(171), 39,
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
  [2548] = 4,
    ACTIONS(175), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(161), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(148), 38,
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
  [2603] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(137), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(135), 39,
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
  [2656] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(179), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(177), 39,
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
  [2709] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(183), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(181), 39,
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
  [2762] = 5,
    ACTIONS(189), 1,
      sym_digit,
    STATE(35), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(187), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(185), 37,
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
  [2818] = 6,
    ACTIONS(198), 1,
      anon_sym_DOT,
    ACTIONS(200), 1,
      sym_digit,
    STATE(35), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(195), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(192), 36,
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
  [2876] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(144), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(142), 35,
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
  [2930] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(206), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(204), 38,
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
  [2982] = 6,
    ACTIONS(200), 1,
      sym_digit,
    ACTIONS(212), 1,
      anon_sym_DOT,
    STATE(35), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(210), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(208), 36,
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
  [3040] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(206), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(204), 38,
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
  [3092] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(161), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(148), 38,
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
  [3144] = 5,
    ACTIONS(200), 1,
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
    ACTIONS(214), 36,
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
  [3199] = 5,
    ACTIONS(200), 1,
      sym_digit,
    STATE(35), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(222), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(220), 36,
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
  [3254] = 5,
    ACTIONS(200), 1,
      sym_digit,
    STATE(35), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(227), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(224), 36,
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
  [3309] = 5,
    ACTIONS(200), 1,
      sym_digit,
    STATE(35), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(232), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(230), 36,
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
  [3364] = 5,
    ACTIONS(234), 1,
      anon_sym_DOT,
    STATE(46), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(152), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(150), 36,
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
  [3419] = 5,
    ACTIONS(165), 1,
      anon_sym_DOT,
    STATE(46), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(239), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(237), 36,
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
  [3474] = 4,
    ACTIONS(245), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(243), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(241), 36,
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
  [3526] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(173), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(171), 37,
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
  [3576] = 4,
    ACTIONS(251), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(249), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(247), 36,
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
  [3628] = 5,
    ACTIONS(255), 1,
      aux_sym_typedef_token1,
    ACTIONS(253), 2,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
    STATE(51), 2,
      sym_typedef,
      aux_sym_query_body_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(258), 35,
      aux_sym_query_body_stmt_token1,
      aux_sym_query_body_stmt_token2,
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
  [3682] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(183), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(181), 37,
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
  [3732] = 3,
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
  [3781] = 3,
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
  [3830] = 3,
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
  [3879] = 3,
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
  [3928] = 3,
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
  [3977] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(249), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(247), 36,
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
  [4026] = 3,
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
  [4075] = 3,
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
  [4124] = 3,
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
  [4173] = 3,
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
  [4222] = 3,
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
  [4271] = 3,
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
  [4320] = 3,
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
  [4369] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(310), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(308), 36,
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
  [4418] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(314), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(312), 36,
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
  [4467] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(144), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(142), 36,
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
  [4516] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(318), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(316), 36,
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
  [4565] = 3,
    ACTIONS(320), 2,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(322), 36,
      aux_sym_typedef_token1,
      aux_sym_query_body_stmt_token1,
      aux_sym_query_body_stmt_token2,
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
  [4613] = 30,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      anon_sym_LBRACE,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      aux_sym_gsql_select_clause_token1,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(344), 1,
      sym_name,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(309), 1,
      sym_expr,
    STATE(441), 1,
      sym_simple_set,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(618), 1,
      sym_gsql_select_clause,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    STATE(694), 3,
      sym_seed_set,
      sym__select_stmt,
      sym_gsql_select_block,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [4715] = 3,
    ACTIONS(352), 2,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(354), 36,
      aux_sym_typedef_token1,
      aux_sym_query_body_stmt_token1,
      aux_sym_query_body_stmt_token2,
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
  [4763] = 3,
    ACTIONS(356), 2,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(358), 35,
      aux_sym_query_body_stmt_token1,
      aux_sym_query_body_stmt_token2,
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
  [4810] = 7,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
    ACTIONS(362), 1,
      anon_sym_DOT,
    STATE(47), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(148), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(144), 4,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_SLASH,
    ACTIONS(142), 26,
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
  [4864] = 8,
    ACTIONS(144), 1,
      anon_sym_SLASH,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(364), 1,
      anon_sym_LT,
    STATE(47), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(148), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(142), 27,
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
  [4919] = 29,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(368), 1,
      anon_sym_DOT,
    ACTIONS(370), 1,
      anon_sym_LBRACK,
    ACTIONS(372), 1,
      anon_sym_DASH,
    ACTIONS(374), 1,
      anon_sym_AT_AT,
    ACTIONS(376), 1,
      aux_sym_expr_token2,
    ACTIONS(378), 1,
      aux_sym_expr_token4,
    ACTIONS(380), 1,
      aux_sym_condition_token1,
    ACTIONS(384), 1,
      sym_name,
    ACTIONS(388), 1,
      sym_digit,
    ACTIONS(390), 1,
      anon_sym_DQUOTE,
    ACTIONS(392), 1,
      anon_sym_SQUOTE,
    STATE(177), 1,
      sym_name_dot,
    STATE(178), 1,
      sym_global_accum_name,
    STATE(197), 1,
      sym_set_bag_expr,
    STATE(198), 1,
      aux_sym_accum_type_repeat1,
    STATE(205), 1,
      sym_expr,
    STATE(583), 1,
      sym_condition,
    STATE(628), 1,
      sym_local_accum_name,
    STATE(637), 1,
      sym_arg_list,
    STATE(856), 1,
      sym_aggregator,
    ACTIONS(382), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(222), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(223), 2,
      sym_numeric,
      sym_string_literal,
    STATE(227), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(386), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [5015] = 29,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
    ACTIONS(368), 1,
      anon_sym_DOT,
    ACTIONS(370), 1,
      anon_sym_LBRACK,
    ACTIONS(372), 1,
      anon_sym_DASH,
    ACTIONS(374), 1,
      anon_sym_AT_AT,
    ACTIONS(376), 1,
      aux_sym_expr_token2,
    ACTIONS(378), 1,
      aux_sym_expr_token4,
    ACTIONS(380), 1,
      aux_sym_condition_token1,
    ACTIONS(384), 1,
      sym_name,
    ACTIONS(388), 1,
      sym_digit,
    ACTIONS(390), 1,
      anon_sym_DQUOTE,
    ACTIONS(392), 1,
      anon_sym_SQUOTE,
    STATE(177), 1,
      sym_name_dot,
    STATE(178), 1,
      sym_global_accum_name,
    STATE(197), 1,
      sym_set_bag_expr,
    STATE(198), 1,
      aux_sym_accum_type_repeat1,
    STATE(203), 1,
      sym_expr,
    STATE(583), 1,
      sym_condition,
    STATE(595), 1,
      sym_arg_list,
    STATE(628), 1,
      sym_local_accum_name,
    STATE(856), 1,
      sym_aggregator,
    ACTIONS(382), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(222), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(223), 2,
      sym_numeric,
      sym_string_literal,
    STATE(227), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(386), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [5111] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(275), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(841), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [5202] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(275), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(806), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [5293] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(259), 1,
      sym_expr,
    STATE(403), 1,
      sym_v_expr_set,
    STATE(422), 1,
      sym_print_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [5384] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(380), 1,
      aux_sym_condition_token1,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(133), 1,
      sym_expr,
    STATE(553), 1,
      sym_condition,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    ACTIONS(406), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [5477] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(380), 1,
      aux_sym_condition_token1,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(133), 1,
      sym_expr,
    STATE(387), 1,
      sym_condition,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    ACTIONS(406), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [5570] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(275), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(721), 1,
      sym_arg_list,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [5661] = 16,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(412), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(414), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(416), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(418), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(420), 1,
      sym_name,
    STATE(345), 1,
      sym_dml_sub_stmt,
    STATE(570), 1,
      sym_dml_sub_stmt_list,
    STATE(578), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(724), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
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
    STATE(357), 10,
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
  [5730] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(380), 1,
      aux_sym_condition_token1,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(133), 1,
      sym_expr,
    STATE(541), 1,
      sym_condition,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    ACTIONS(406), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [5823] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(380), 1,
      aux_sym_condition_token1,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(133), 1,
      sym_expr,
    STATE(491), 1,
      sym_condition,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    ACTIONS(406), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [5916] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(275), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(685), 1,
      sym_arg_list,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [6007] = 16,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(414), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(416), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(418), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(420), 1,
      sym_name,
    ACTIONS(424), 1,
      aux_sym_dml_sub_if_stmt_token1,
    STATE(345), 1,
      sym_dml_sub_stmt,
    STATE(578), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(681), 1,
      sym_dml_sub_stmt_list,
    STATE(724), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
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
    STATE(357), 10,
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
  [6076] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(380), 1,
      aux_sym_condition_token1,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(133), 1,
      sym_expr,
    STATE(486), 1,
      sym_condition,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    ACTIONS(406), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [6169] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(380), 1,
      aux_sym_condition_token1,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(133), 1,
      sym_expr,
    STATE(459), 1,
      sym_condition,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    ACTIONS(406), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [6262] = 16,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(412), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(414), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(416), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(418), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(420), 1,
      sym_name,
    STATE(345), 1,
      sym_dml_sub_stmt,
    STATE(573), 1,
      sym_dml_sub_stmt_list,
    STATE(578), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(724), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
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
    STATE(357), 10,
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
  [6331] = 27,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(368), 1,
      anon_sym_DOT,
    ACTIONS(370), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_AT_AT,
    ACTIONS(376), 1,
      aux_sym_expr_token2,
    ACTIONS(378), 1,
      aux_sym_expr_token4,
    ACTIONS(388), 1,
      sym_digit,
    ACTIONS(390), 1,
      anon_sym_DQUOTE,
    ACTIONS(392), 1,
      anon_sym_SQUOTE,
    ACTIONS(426), 1,
      anon_sym_LPAREN,
    ACTIONS(428), 1,
      anon_sym_DASH,
    ACTIONS(430), 1,
      sym_name,
    STATE(177), 1,
      sym_name_dot,
    STATE(178), 1,
      sym_global_accum_name,
    STATE(197), 1,
      sym_set_bag_expr,
    STATE(198), 1,
      aux_sym_accum_type_repeat1,
    STATE(271), 1,
      sym_expr,
    STATE(440), 1,
      sym_simple_set,
    STATE(595), 1,
      sym_arg_list,
    STATE(628), 1,
      sym_local_accum_name,
    STATE(856), 1,
      sym_aggregator,
    STATE(222), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(223), 2,
      sym_numeric,
      sym_string_literal,
    STATE(227), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(386), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [6422] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    ACTIONS(432), 1,
      aux_sym_dml_sub_case_stmt_token2,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(306), 1,
      sym_expr,
    STATE(460), 1,
      aux_sym_query_body_case_stmt_repeat1,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [6513] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(275), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(782), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [6604] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(380), 1,
      aux_sym_condition_token1,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(133), 1,
      sym_expr,
    STATE(555), 1,
      sym_condition,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    ACTIONS(406), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [6697] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(380), 1,
      aux_sym_condition_token1,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(133), 1,
      sym_expr,
    STATE(467), 1,
      sym_condition,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    ACTIONS(406), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [6790] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(259), 1,
      sym_expr,
    STATE(403), 1,
      sym_v_expr_set,
    STATE(456), 1,
      sym_print_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [6881] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(380), 1,
      aux_sym_condition_token1,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(133), 1,
      sym_expr,
    STATE(492), 1,
      sym_condition,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    ACTIONS(406), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [6974] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(275), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(660), 1,
      sym_arg_list,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [7065] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(275), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(688), 1,
      sym_arg_list,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [7156] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(380), 1,
      aux_sym_condition_token1,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(133), 1,
      sym_expr,
    STATE(575), 1,
      sym_condition,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    ACTIONS(406), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [7249] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(380), 1,
      aux_sym_condition_token1,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(133), 1,
      sym_expr,
    STATE(464), 1,
      sym_condition,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    ACTIONS(406), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [7342] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(380), 1,
      aux_sym_condition_token1,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(133), 1,
      sym_expr,
    STATE(481), 1,
      sym_condition,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    ACTIONS(406), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [7435] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(380), 1,
      aux_sym_condition_token1,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(133), 1,
      sym_expr,
    STATE(326), 1,
      sym_condition,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    ACTIONS(406), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [7528] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(275), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(827), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [7619] = 16,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(412), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(414), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(416), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(418), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(420), 1,
      sym_name,
    STATE(345), 1,
      sym_dml_sub_stmt,
    STATE(578), 1,
      sym_global_accum_name,
    STATE(581), 1,
      sym_dml_sub_stmt_list,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(724), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
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
    STATE(357), 10,
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
  [7688] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(380), 1,
      aux_sym_condition_token1,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(133), 1,
      sym_expr,
    STATE(494), 1,
      sym_condition,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    ACTIONS(406), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [7781] = 16,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(412), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(414), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(416), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(418), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(420), 1,
      sym_name,
    STATE(345), 1,
      sym_dml_sub_stmt,
    STATE(578), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(709), 1,
      sym_dml_sub_stmt_list,
    STATE(724), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
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
    STATE(357), 10,
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
  [7850] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(380), 1,
      aux_sym_condition_token1,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(133), 1,
      sym_expr,
    STATE(562), 1,
      sym_condition,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    ACTIONS(406), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [7943] = 16,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(412), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(414), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(416), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(418), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(420), 1,
      sym_name,
    STATE(345), 1,
      sym_dml_sub_stmt,
    STATE(578), 1,
      sym_global_accum_name,
    STATE(597), 1,
      sym_dml_sub_stmt_list,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(724), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
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
    STATE(357), 10,
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
  [8012] = 16,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(412), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(414), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(416), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(418), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(420), 1,
      sym_name,
    STATE(345), 1,
      sym_dml_sub_stmt,
    STATE(578), 1,
      sym_global_accum_name,
    STATE(580), 1,
      sym_dml_sub_stmt_list,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(724), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
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
    STATE(357), 10,
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
  [8081] = 16,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(412), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(414), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(416), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(418), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(420), 1,
      sym_name,
    STATE(345), 1,
      sym_dml_sub_stmt,
    STATE(578), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(667), 1,
      sym_dml_sub_stmt_list,
    STATE(724), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
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
    STATE(357), 10,
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
  [8150] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(275), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(838), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [8241] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(275), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(808), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [8332] = 16,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(414), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(416), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(418), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(420), 1,
      sym_name,
    ACTIONS(424), 1,
      aux_sym_dml_sub_if_stmt_token1,
    STATE(345), 1,
      sym_dml_sub_stmt,
    STATE(578), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(663), 1,
      sym_dml_sub_stmt_list,
    STATE(724), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
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
    STATE(357), 10,
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
  [8401] = 27,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(368), 1,
      anon_sym_DOT,
    ACTIONS(370), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_AT_AT,
    ACTIONS(376), 1,
      aux_sym_expr_token2,
    ACTIONS(378), 1,
      aux_sym_expr_token4,
    ACTIONS(388), 1,
      sym_digit,
    ACTIONS(390), 1,
      anon_sym_DQUOTE,
    ACTIONS(392), 1,
      anon_sym_SQUOTE,
    ACTIONS(426), 1,
      anon_sym_LPAREN,
    ACTIONS(428), 1,
      anon_sym_DASH,
    ACTIONS(430), 1,
      sym_name,
    STATE(177), 1,
      sym_name_dot,
    STATE(178), 1,
      sym_global_accum_name,
    STATE(197), 1,
      sym_set_bag_expr,
    STATE(198), 1,
      aux_sym_accum_type_repeat1,
    STATE(269), 1,
      sym_expr,
    STATE(440), 1,
      sym_simple_set,
    STATE(628), 1,
      sym_local_accum_name,
    STATE(637), 1,
      sym_arg_list,
    STATE(856), 1,
      sym_aggregator,
    STATE(222), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(223), 2,
      sym_numeric,
      sym_string_literal,
    STATE(227), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(386), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [8492] = 16,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(412), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(414), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(416), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(418), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(420), 1,
      sym_name,
    STATE(345), 1,
      sym_dml_sub_stmt,
    STATE(526), 1,
      sym_dml_sub_stmt_list,
    STATE(578), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(724), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
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
    STATE(357), 10,
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
  [8561] = 16,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(412), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(414), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(416), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(418), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(420), 1,
      sym_name,
    STATE(345), 1,
      sym_dml_sub_stmt,
    STATE(578), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(706), 1,
      sym_dml_sub_stmt_list,
    STATE(724), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
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
    STATE(357), 10,
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
  [8630] = 16,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(412), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(414), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(416), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(418), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(420), 1,
      sym_name,
    STATE(345), 1,
      sym_dml_sub_stmt,
    STATE(578), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(702), 1,
      sym_dml_sub_stmt_list,
    STATE(724), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
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
    STATE(357), 10,
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
  [8699] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(275), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(696), 1,
      sym_arg_list,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [8790] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(380), 1,
      aux_sym_condition_token1,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(133), 1,
      sym_expr,
    STATE(582), 1,
      sym_condition,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    ACTIONS(406), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [8883] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(380), 1,
      aux_sym_condition_token1,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(133), 1,
      sym_expr,
    STATE(429), 1,
      sym_condition,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    ACTIONS(406), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [8976] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(275), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(819), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [9067] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(275), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(820), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [9158] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(275), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(821), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [9249] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(380), 1,
      aux_sym_condition_token1,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(133), 1,
      sym_expr,
    STATE(325), 1,
      sym_condition,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    ACTIONS(406), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [9342] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(275), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(824), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [9433] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(275), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(825), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [9524] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(380), 1,
      aux_sym_condition_token1,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(133), 1,
      sym_expr,
    STATE(514), 1,
      sym_condition,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    ACTIONS(406), 2,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [9617] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(275), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(834), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [9708] = 26,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(368), 1,
      anon_sym_DOT,
    ACTIONS(370), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_AT_AT,
    ACTIONS(376), 1,
      aux_sym_expr_token2,
    ACTIONS(378), 1,
      aux_sym_expr_token4,
    ACTIONS(388), 1,
      sym_digit,
    ACTIONS(390), 1,
      anon_sym_DQUOTE,
    ACTIONS(392), 1,
      anon_sym_SQUOTE,
    ACTIONS(428), 1,
      anon_sym_DASH,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    ACTIONS(462), 1,
      sym_name,
    STATE(177), 1,
      sym_name_dot,
    STATE(178), 1,
      sym_global_accum_name,
    STATE(197), 1,
      sym_set_bag_expr,
    STATE(198), 1,
      aux_sym_accum_type_repeat1,
    STATE(271), 1,
      sym_expr,
    STATE(595), 1,
      sym_arg_list,
    STATE(628), 1,
      sym_local_accum_name,
    STATE(856), 1,
      sym_aggregator,
    STATE(222), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(223), 2,
      sym_numeric,
      sym_string_literal,
    STATE(227), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(386), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [9796] = 26,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(275), 1,
      sym_expr,
    STATE(276), 1,
      sym_set_bag_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(755), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [9884] = 13,
    ACTIONS(468), 1,
      aux_sym_for_each_control_token1,
    ACTIONS(472), 1,
      aux_sym_condition_token1,
    ACTIONS(474), 1,
      aux_sym_condition_token2,
    ACTIONS(476), 1,
      aux_sym_condition_token4,
    ACTIONS(478), 1,
      aux_sym_condition_token8,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(143), 1,
      sym_comparison_operator,
    STATE(161), 1,
      sym_math_operator,
    ACTIONS(466), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(482), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(464), 10,
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
  [9946] = 26,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(275), 1,
      sym_expr,
    STATE(276), 1,
      sym_set_bag_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(746), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [10034] = 26,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(275), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(798), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [10122] = 26,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(368), 1,
      anon_sym_DOT,
    ACTIONS(370), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_AT_AT,
    ACTIONS(376), 1,
      aux_sym_expr_token2,
    ACTIONS(378), 1,
      aux_sym_expr_token4,
    ACTIONS(388), 1,
      sym_digit,
    ACTIONS(390), 1,
      anon_sym_DQUOTE,
    ACTIONS(392), 1,
      anon_sym_SQUOTE,
    ACTIONS(428), 1,
      anon_sym_DASH,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    ACTIONS(462), 1,
      sym_name,
    STATE(177), 1,
      sym_name_dot,
    STATE(178), 1,
      sym_global_accum_name,
    STATE(197), 1,
      sym_set_bag_expr,
    STATE(198), 1,
      aux_sym_accum_type_repeat1,
    STATE(269), 1,
      sym_expr,
    STATE(628), 1,
      sym_local_accum_name,
    STATE(637), 1,
      sym_arg_list,
    STATE(856), 1,
      sym_aggregator,
    STATE(222), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(223), 2,
      sym_numeric,
      sym_string_literal,
    STATE(227), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(386), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [10210] = 26,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(286), 1,
      sym_expr,
    STATE(535), 1,
      sym_v_set_proj,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [10298] = 26,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(275), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(718), 1,
      sym_arg_list,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [10386] = 26,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(275), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(813), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [10474] = 26,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(275), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(742), 1,
      sym_arg_list,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [10562] = 15,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(412), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(414), 1,
      aux_sym_dml_sub_case_stmt_token1,
    ACTIONS(416), 1,
      aux_sym_dml_sub_while_stmt_token1,
    ACTIONS(418), 1,
      aux_sym_dml_sub_for_each_stmt_token1,
    ACTIONS(420), 1,
      sym_name,
    STATE(376), 1,
      sym_dml_sub_stmt,
    STATE(578), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(724), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
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
    STATE(357), 10,
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
  [10628] = 26,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(286), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(632), 1,
      sym_v_set_proj,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [10716] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(238), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [10801] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(311), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [10886] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(308), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [10971] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(245), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [11056] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(313), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [11141] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(312), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [11226] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(307), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [11311] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(316), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [11396] = 25,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(370), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_AT_AT,
    ACTIONS(376), 1,
      aux_sym_expr_token2,
    ACTIONS(378), 1,
      aux_sym_expr_token4,
    ACTIONS(390), 1,
      anon_sym_DQUOTE,
    ACTIONS(392), 1,
      anon_sym_SQUOTE,
    ACTIONS(428), 1,
      anon_sym_DASH,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    ACTIONS(462), 1,
      sym_name,
    ACTIONS(484), 1,
      anon_sym_DOT,
    ACTIONS(486), 1,
      sym_digit,
    STATE(177), 1,
      sym_name_dot,
    STATE(178), 1,
      sym_global_accum_name,
    STATE(200), 1,
      sym_set_bag_expr,
    STATE(201), 1,
      aux_sym_accum_type_repeat1,
    STATE(284), 1,
      sym_expr,
    STATE(628), 1,
      sym_local_accum_name,
    STATE(856), 1,
      sym_aggregator,
    STATE(222), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(223), 2,
      sym_numeric,
      sym_string_literal,
    STATE(227), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(386), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [11481] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(315), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [11566] = 25,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(370), 1,
      anon_sym_LBRACK,
    ACTIONS(372), 1,
      anon_sym_DASH,
    ACTIONS(374), 1,
      anon_sym_AT_AT,
    ACTIONS(376), 1,
      aux_sym_expr_token2,
    ACTIONS(378), 1,
      aux_sym_expr_token4,
    ACTIONS(384), 1,
      sym_name,
    ACTIONS(390), 1,
      anon_sym_DQUOTE,
    ACTIONS(392), 1,
      anon_sym_SQUOTE,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    ACTIONS(484), 1,
      anon_sym_DOT,
    ACTIONS(486), 1,
      sym_digit,
    STATE(177), 1,
      sym_name_dot,
    STATE(178), 1,
      sym_global_accum_name,
    STATE(200), 1,
      sym_set_bag_expr,
    STATE(201), 1,
      aux_sym_accum_type_repeat1,
    STATE(217), 1,
      sym_expr,
    STATE(628), 1,
      sym_local_accum_name,
    STATE(856), 1,
      sym_aggregator,
    STATE(222), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(223), 2,
      sym_numeric,
      sym_string_literal,
    STATE(227), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(386), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [11651] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      sym_name,
    ACTIONS(488), 1,
      anon_sym_DOT,
    ACTIONS(490), 1,
      sym_digit,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(170), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [11736] = 25,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(368), 1,
      anon_sym_DOT,
    ACTIONS(370), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_AT_AT,
    ACTIONS(376), 1,
      aux_sym_expr_token2,
    ACTIONS(378), 1,
      aux_sym_expr_token4,
    ACTIONS(388), 1,
      sym_digit,
    ACTIONS(390), 1,
      anon_sym_DQUOTE,
    ACTIONS(392), 1,
      anon_sym_SQUOTE,
    ACTIONS(428), 1,
      anon_sym_DASH,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    ACTIONS(462), 1,
      sym_name,
    STATE(177), 1,
      sym_name_dot,
    STATE(178), 1,
      sym_global_accum_name,
    STATE(198), 1,
      aux_sym_accum_type_repeat1,
    STATE(200), 1,
      sym_set_bag_expr,
    STATE(290), 1,
      sym_expr,
    STATE(628), 1,
      sym_local_accum_name,
    STATE(856), 1,
      sym_aggregator,
    STATE(222), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(223), 2,
      sym_numeric,
      sym_string_literal,
    STATE(227), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(386), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [11821] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(253), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [11906] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(252), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [11991] = 6,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    ACTIONS(494), 1,
      anon_sym_DOT,
    STATE(182), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(131), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(127), 23,
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
  [12038] = 7,
    ACTIONS(496), 1,
      anon_sym_LPAREN,
    ACTIONS(498), 1,
      anon_sym_DOT,
    STATE(211), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(148), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(144), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(142), 20,
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
  [12087] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(239), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [12172] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(404), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(174), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [12257] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(310), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [12342] = 25,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(368), 1,
      anon_sym_DOT,
    ACTIONS(370), 1,
      anon_sym_LBRACK,
    ACTIONS(372), 1,
      anon_sym_DASH,
    ACTIONS(374), 1,
      anon_sym_AT_AT,
    ACTIONS(376), 1,
      aux_sym_expr_token2,
    ACTIONS(378), 1,
      aux_sym_expr_token4,
    ACTIONS(384), 1,
      sym_name,
    ACTIONS(388), 1,
      sym_digit,
    ACTIONS(390), 1,
      anon_sym_DQUOTE,
    ACTIONS(392), 1,
      anon_sym_SQUOTE,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    STATE(177), 1,
      sym_name_dot,
    STATE(178), 1,
      sym_global_accum_name,
    STATE(198), 1,
      aux_sym_accum_type_repeat1,
    STATE(200), 1,
      sym_set_bag_expr,
    STATE(214), 1,
      sym_expr,
    STATE(628), 1,
      sym_local_accum_name,
    STATE(856), 1,
      sym_aggregator,
    STATE(222), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(223), 2,
      sym_numeric,
      sym_string_literal,
    STATE(227), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(386), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [12427] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(237), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [12512] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(314), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [12597] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(297), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [12682] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(248), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [12767] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(285), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [12852] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(302), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [12937] = 6,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(161), 1,
      sym_math_operator,
    ACTIONS(502), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(500), 19,
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
  [12984] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    ACTIONS(488), 1,
      anon_sym_DOT,
    ACTIONS(490), 1,
      sym_digit,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(193), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [13069] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(295), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [13154] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      aux_sym_expr_token2,
    ACTIONS(338), 1,
      aux_sym_expr_token4,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(191), 1,
      sym_expr,
    STATE(616), 1,
      sym_local_accum_name,
    STATE(738), 1,
      sym_aggregator,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    STATE(68), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [13239] = 4,
    STATE(161), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(298), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(296), 27,
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
  [13282] = 25,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(342), 1,
      aux_sym_aggregator_token1,
    ACTIONS(368), 1,
      anon_sym_DOT,
    ACTIONS(370), 1,
      anon_sym_LBRACK,
    ACTIONS(374), 1,
      anon_sym_AT_AT,
    ACTIONS(376), 1,
      aux_sym_expr_token2,
    ACTIONS(378), 1,
      aux_sym_expr_token4,
    ACTIONS(388), 1,
      sym_digit,
    ACTIONS(390), 1,
      anon_sym_DQUOTE,
    ACTIONS(392), 1,
      anon_sym_SQUOTE,
    ACTIONS(428), 1,
      anon_sym_DASH,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    ACTIONS(462), 1,
      sym_name,
    STATE(177), 1,
      sym_name_dot,
    STATE(178), 1,
      sym_global_accum_name,
    STATE(198), 1,
      aux_sym_accum_type_repeat1,
    STATE(200), 1,
      sym_set_bag_expr,
    STATE(288), 1,
      sym_expr,
    STATE(628), 1,
      sym_local_accum_name,
    STATE(856), 1,
      sym_aggregator,
    STATE(222), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(223), 2,
      sym_numeric,
      sym_string_literal,
    STATE(227), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(386), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [13367] = 5,
    ACTIONS(504), 1,
      anon_sym_DOT,
    STATE(181), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(159), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(157), 23,
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
  [13411] = 6,
    ACTIONS(504), 1,
      anon_sym_DOT,
    STATE(176), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(148), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(144), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(142), 20,
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
  [13457] = 6,
    ACTIONS(506), 1,
      anon_sym_DOT,
    STATE(211), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(148), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(144), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(142), 20,
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
  [13503] = 15,
    ACTIONS(25), 1,
      aux_sym_accum_type_token1,
    ACTIONS(33), 1,
      aux_sym_accum_type_token13,
    ACTIONS(37), 1,
      aux_sym_accum_type_token16,
    ACTIONS(39), 1,
      aux_sym_accum_type_token17,
    ACTIONS(41), 1,
      aux_sym_accum_type_token20,
    ACTIONS(43), 1,
      aux_sym_accum_type_token21,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(508), 1,
      sym_name,
    STATE(801), 1,
      sym_accum_type,
    ACTIONS(29), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(35), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(796), 2,
      sym__element_type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(27), 10,
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
  [13567] = 5,
    ACTIONS(510), 1,
      anon_sym_DOT,
    STATE(180), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(137), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(135), 23,
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
  [13611] = 5,
    ACTIONS(513), 1,
      anon_sym_DOT,
    STATE(181), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(152), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(150), 23,
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
  [13655] = 4,
    STATE(180), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(169), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(167), 24,
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
  [13697] = 4,
    STATE(182), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(131), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(127), 24,
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
  [13739] = 4,
    ACTIONS(516), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(137), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(135), 24,
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
  [13781] = 15,
    ACTIONS(25), 1,
      aux_sym_accum_type_token1,
    ACTIONS(33), 1,
      aux_sym_accum_type_token13,
    ACTIONS(37), 1,
      aux_sym_accum_type_token16,
    ACTIONS(39), 1,
      aux_sym_accum_type_token17,
    ACTIONS(41), 1,
      aux_sym_accum_type_token20,
    ACTIONS(43), 1,
      aux_sym_accum_type_token21,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(508), 1,
      sym_name,
    STATE(725), 1,
      sym_accum_type,
    ACTIONS(29), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(35), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(796), 2,
      sym__element_type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(27), 10,
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
  [13845] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(294), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(464), 10,
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
    ACTIONS(292), 17,
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
  [13887] = 5,
    ACTIONS(504), 1,
      anon_sym_DOT,
    STATE(176), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(161), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(148), 23,
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
  [13931] = 14,
    ACTIONS(25), 1,
      aux_sym_accum_type_token1,
    ACTIONS(33), 1,
      aux_sym_accum_type_token13,
    ACTIONS(37), 1,
      aux_sym_accum_type_token16,
    ACTIONS(39), 1,
      aux_sym_accum_type_token17,
    ACTIONS(41), 1,
      aux_sym_accum_type_token20,
    ACTIONS(43), 1,
      aux_sym_accum_type_token21,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(518), 1,
      sym_name,
    ACTIONS(29), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(35), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    STATE(777), 2,
      sym_accum_type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
    ACTIONS(27), 10,
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
  [13992] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(137), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(135), 24,
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
  [14031] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(125), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(123), 24,
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
  [14070] = 4,
    ACTIONS(298), 1,
      anon_sym_SLASH,
    STATE(173), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(296), 27,
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
  [14111] = 4,
    ACTIONS(520), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(161), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(148), 23,
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
  [14152] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(173), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(500), 19,
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
  [14195] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(179), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(177), 24,
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
  [14234] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(173), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(171), 24,
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
  [14273] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(183), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(181), 24,
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
  [14312] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(522), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(144), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(142), 20,
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
  [14352] = 6,
    ACTIONS(524), 1,
      anon_sym_DOT,
    ACTIONS(526), 1,
      sym_digit,
    STATE(199), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(210), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(208), 21,
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
  [14396] = 5,
    ACTIONS(528), 1,
      sym_digit,
    STATE(199), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(187), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(185), 22,
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
  [14438] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(522), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(144), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(142), 20,
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
  [14478] = 6,
    ACTIONS(526), 1,
      sym_digit,
    ACTIONS(531), 1,
      anon_sym_DOT,
    STATE(199), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(195), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(192), 21,
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
  [14522] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(206), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(204), 23,
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
  [14560] = 17,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    ACTIONS(468), 1,
      aux_sym_for_each_control_token1,
    ACTIONS(472), 1,
      aux_sym_condition_token1,
    ACTIONS(474), 1,
      aux_sym_condition_token2,
    ACTIONS(476), 1,
      aux_sym_condition_token4,
    ACTIONS(478), 1,
      aux_sym_condition_token8,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    ACTIONS(535), 1,
      anon_sym_DASH_GT,
    STATE(143), 1,
      sym_comparison_operator,
    STATE(163), 1,
      sym_math_operator,
    STATE(430), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(464), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(466), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(480), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(482), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(470), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [14626] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(161), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(148), 23,
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
  [14664] = 17,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    ACTIONS(468), 1,
      aux_sym_for_each_control_token1,
    ACTIONS(472), 1,
      aux_sym_condition_token1,
    ACTIONS(474), 1,
      aux_sym_condition_token2,
    ACTIONS(476), 1,
      aux_sym_condition_token4,
    ACTIONS(478), 1,
      aux_sym_condition_token8,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    ACTIONS(535), 1,
      anon_sym_DASH_GT,
    STATE(143), 1,
      sym_comparison_operator,
    STATE(163), 1,
      sym_math_operator,
    STATE(430), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(464), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(466), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(480), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(482), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(470), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [14730] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(206), 5,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_for_each_control_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(204), 23,
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
  [14768] = 5,
    ACTIONS(526), 1,
      sym_digit,
    STATE(199), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(232), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(230), 21,
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
  [14809] = 5,
    ACTIONS(526), 1,
      sym_digit,
    STATE(199), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(227), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(224), 21,
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
  [14850] = 5,
    ACTIONS(537), 1,
      anon_sym_DOT,
    STATE(209), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(152), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(150), 21,
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
  [14891] = 5,
    ACTIONS(526), 1,
      sym_digit,
    STATE(199), 1,
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
    ACTIONS(214), 21,
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
  [14932] = 5,
    ACTIONS(506), 1,
      anon_sym_DOT,
    STATE(209), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(239), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(237), 21,
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
  [14973] = 5,
    ACTIONS(526), 1,
      sym_digit,
    STATE(199), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(222), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(220), 21,
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
  [15014] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(183), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(181), 22,
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
  [15050] = 4,
    STATE(163), 1,
      sym_math_operator,
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
  [15088] = 4,
    ACTIONS(540), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(249), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(247), 21,
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
  [15126] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(173), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(171), 22,
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
  [15162] = 6,
    STATE(163), 1,
      sym_math_operator,
    ACTIONS(480), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(502), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(470), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(500), 14,
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
  [15204] = 4,
    ACTIONS(542), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(243), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(241), 21,
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
  [15242] = 3,
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
  [15277] = 3,
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
  [15312] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(249), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(247), 21,
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
  [15347] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(144), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(142), 21,
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
  [15382] = 3,
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
  [15417] = 3,
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
  [15452] = 3,
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
  [15487] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(318), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(316), 21,
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
  [15522] = 3,
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
  [15557] = 3,
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
  [15592] = 3,
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
  [15627] = 3,
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
  [15662] = 3,
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
  [15697] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(310), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(308), 21,
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
  [15732] = 3,
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
  [15767] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(464), 3,
      aux_sym_create_query_token2,
      anon_sym_RPAREN,
      aux_sym_condition_token5,
    ACTIONS(294), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(292), 18,
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
  [15804] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(314), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(312), 21,
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
  [15839] = 3,
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
  [15874] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(173), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(544), 10,
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
  [15908] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(173), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(546), 10,
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
  [15942] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(173), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(548), 10,
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
  [15976] = 8,
    ACTIONS(496), 1,
      anon_sym_LPAREN,
    ACTIONS(498), 1,
      anon_sym_DOT,
    ACTIONS(550), 1,
      anon_sym_LT,
    STATE(211), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(144), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(552), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(142), 10,
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
  [16015] = 8,
    ACTIONS(496), 1,
      anon_sym_LPAREN,
    ACTIONS(498), 1,
      anon_sym_DOT,
    ACTIONS(550), 1,
      anon_sym_LT,
    STATE(211), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(144), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(148), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(142), 10,
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
  [16054] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(554), 8,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_AT_AT,
      sym_digit,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(556), 10,
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
  [16082] = 9,
    ACTIONS(144), 1,
      anon_sym_SLASH,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
    ACTIONS(362), 1,
      anon_sym_DOT,
    ACTIONS(364), 1,
      anon_sym_LT,
    ACTIONS(558), 1,
      anon_sym_EQ,
    STATE(47), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(552), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(142), 9,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16122] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(560), 8,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_AT_AT,
      sym_digit,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(562), 10,
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
  [16150] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(173), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(564), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16181] = 7,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
    ACTIONS(570), 1,
      aux_sym_base_type_token3,
    STATE(274), 1,
      sym_query_param,
    STATE(247), 2,
      sym_query_params,
      aux_sym_parameter_list_repeat1,
    STATE(823), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(568), 10,
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
  [16216] = 7,
    ACTIONS(570), 1,
      aux_sym_base_type_token3,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
    STATE(274), 1,
      sym_query_param,
    STATE(254), 2,
      sym_query_params,
      aux_sym_parameter_list_repeat1,
    STATE(823), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(568), 10,
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
  [16251] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(173), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(574), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16282] = 8,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(576), 1,
      anon_sym_GT,
    ACTIONS(578), 1,
      sym_name,
    STATE(261), 1,
      sym_tuple_field,
    STATE(662), 1,
      sym_base_type,
    STATE(250), 2,
      sym_tuple_fields,
      aux_sym_typedef_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
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
  [16319] = 8,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(578), 1,
      sym_name,
    ACTIONS(580), 1,
      anon_sym_GT,
    STATE(261), 1,
      sym_tuple_field,
    STATE(662), 1,
      sym_base_type,
    STATE(251), 2,
      sym_tuple_fields,
      aux_sym_typedef_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
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
  [16356] = 8,
    ACTIONS(582), 1,
      anon_sym_GT,
    ACTIONS(587), 1,
      aux_sym_base_type_token3,
    ACTIONS(590), 1,
      sym_name,
    STATE(261), 1,
      sym_tuple_field,
    STATE(662), 1,
      sym_base_type,
    STATE(251), 2,
      sym_tuple_fields,
      aux_sym_typedef_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(584), 10,
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
  [16393] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(173), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(593), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16424] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(173), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(595), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16455] = 7,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
    ACTIONS(602), 1,
      aux_sym_base_type_token3,
    STATE(274), 1,
      sym_query_param,
    STATE(254), 2,
      sym_query_params,
      aux_sym_parameter_list_repeat1,
    STATE(823), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(599), 10,
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
  [16490] = 11,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(605), 1,
      anon_sym_DASH,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(566), 1,
      sym_constant,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(607), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [16532] = 11,
    ACTIONS(609), 1,
      aux_sym_accum_type_token1,
    ACTIONS(615), 1,
      aux_sym_accum_type_token13,
    ACTIONS(619), 1,
      aux_sym_accum_type_token16,
    ACTIONS(621), 1,
      aux_sym_accum_type_token17,
    ACTIONS(623), 1,
      aux_sym_accum_type_token20,
    ACTIONS(625), 1,
      aux_sym_accum_type_token21,
    STATE(758), 1,
      sym_accum_type,
    ACTIONS(611), 2,
      aux_sym_accum_type_token6,
      aux_sym_accum_type_token7,
    ACTIONS(617), 2,
      aux_sym_accum_type_token14,
      aux_sym_accum_type_token15,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(613), 5,
      aux_sym_accum_type_token8,
      aux_sym_accum_type_token9,
      aux_sym_accum_type_token10,
      aux_sym_accum_type_token11,
      aux_sym_accum_type_token12,
  [16574] = 11,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(605), 1,
      anon_sym_DASH,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(604), 1,
      sym_constant,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(607), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [16616] = 11,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(605), 1,
      anon_sym_DASH,
    STATE(39), 1,
      aux_sym_accum_type_repeat1,
    STATE(669), 1,
      sym_constant,
    STATE(61), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(607), 5,
      aux_sym_condition_token6,
      aux_sym_condition_token7,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
  [16658] = 7,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(629), 1,
      anon_sym_LBRACK,
    ACTIONS(631), 1,
      aux_sym_print_expr_token1,
    STATE(173), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(627), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_print_stmt_token2,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16692] = 5,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(636), 1,
      anon_sym_GT,
    STATE(260), 1,
      aux_sym_tuple_fields_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(638), 12,
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
  [16721] = 5,
    ACTIONS(640), 1,
      anon_sym_COMMA,
    ACTIONS(642), 1,
      anon_sym_GT,
    STATE(262), 1,
      aux_sym_tuple_fields_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(644), 12,
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
  [16750] = 5,
    ACTIONS(640), 1,
      anon_sym_COMMA,
    ACTIONS(646), 1,
      anon_sym_GT,
    STATE(260), 1,
      aux_sym_tuple_fields_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(648), 12,
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
  [16779] = 4,
    ACTIONS(652), 1,
      anon_sym_LT,
    ACTIONS(650), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(654), 12,
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
  [16806] = 5,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(656), 1,
      sym_name,
    STATE(703), 2,
      sym__element_type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
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
  [16834] = 4,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(658), 12,
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
  [16860] = 5,
    ACTIONS(570), 1,
      aux_sym_base_type_token3,
    STATE(296), 1,
      sym_query_param,
    STATE(823), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(568), 10,
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
  [16888] = 4,
    ACTIONS(664), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(662), 12,
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
  [16914] = 5,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(667), 1,
      sym_name,
    STATE(704), 2,
      sym__element_type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
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
  [16942] = 8,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    ACTIONS(535), 1,
      anon_sym_DASH_GT,
    STATE(175), 1,
      sym_math_operator,
    STATE(430), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(480), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(470), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16976] = 14,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
    ACTIONS(671), 1,
      anon_sym_LT,
    ACTIONS(675), 1,
      anon_sym_AT_AT,
    ACTIONS(677), 1,
      sym_name,
    STATE(416), 1,
      sym_atomic_edge_type,
    STATE(417), 1,
      sym_atomic_edge_pattern,
    STATE(418), 1,
      sym_global_accum_name,
    STATE(419), 1,
      sym_edge_set_type,
    STATE(530), 1,
      sym_path_edge_pattern,
    STATE(532), 1,
      sym_disj_pattern,
    STATE(620), 1,
      sym_step_edge_types,
    STATE(774), 1,
      sym_step_edge_set,
    ACTIONS(673), 2,
      anon_sym__,
      aux_sym_seed_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [17022] = 8,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    ACTIONS(535), 1,
      anon_sym_DASH_GT,
    STATE(175), 1,
      sym_math_operator,
    STATE(430), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(480), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(470), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17056] = 3,
    ACTIONS(681), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(679), 13,
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
  [17080] = 3,
    ACTIONS(683), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(685), 12,
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
  [17104] = 4,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    STATE(265), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(687), 12,
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
  [17130] = 7,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(689), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      sym_math_operator,
    STATE(461), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(535), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17162] = 4,
    ACTIONS(144), 1,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(142), 10,
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
  [17188] = 5,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(691), 1,
      sym_name,
    STATE(698), 2,
      sym__element_type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
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
  [17216] = 5,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(508), 1,
      sym_name,
    STATE(796), 2,
      sym__element_type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
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
  [17244] = 3,
    ACTIONS(636), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(638), 12,
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
  [17268] = 13,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(693), 1,
      anon_sym_LPAREN,
    ACTIONS(697), 1,
      sym_name,
    STATE(328), 1,
      sym_global_accum_name,
    STATE(333), 1,
      sym_step_vertex_types,
    STATE(336), 1,
      sym_step_source_set,
    STATE(339), 1,
      sym_vertex_set_type,
    STATE(347), 1,
      sym_atomic_vertex_type,
    STATE(374), 1,
      sym_path_pattern,
    STATE(377), 1,
      sym_step_vertex_set,
    ACTIONS(695), 2,
      anon_sym__,
      aux_sym_seed_token1,
    STATE(425), 2,
      sym_step,
      sym_step_v2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [17312] = 3,
    ACTIONS(699), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(701), 12,
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
  [17336] = 6,
    ACTIONS(51), 1,
      aux_sym_base_type_token3,
    ACTIONS(578), 1,
      sym_name,
    STATE(279), 1,
      sym_tuple_field,
    STATE(662), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
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
  [17366] = 3,
    ACTIONS(650), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(654), 12,
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
  [17390] = 5,
    STATE(175), 1,
      sym_math_operator,
    ACTIONS(480), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(500), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(470), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17417] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(173), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(703), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17444] = 6,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(707), 1,
      aux_sym_print_expr_token1,
    STATE(173), 1,
      sym_math_operator,
    ACTIONS(705), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17473] = 4,
    ACTIONS(570), 1,
      aux_sym_base_type_token3,
    STATE(485), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(568), 10,
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
  [17498] = 4,
    STATE(175), 1,
      sym_math_operator,
    ACTIONS(298), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(296), 10,
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
  [17523] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(548), 10,
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
  [17546] = 5,
    STATE(175), 1,
      sym_math_operator,
    ACTIONS(480), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(703), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(470), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17573] = 4,
    ACTIONS(570), 1,
      aux_sym_base_type_token3,
    STATE(639), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(568), 10,
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
  [17598] = 4,
    ACTIONS(570), 1,
      aux_sym_base_type_token3,
    STATE(704), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(568), 10,
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
  [17623] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(709), 13,
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
  [17644] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
    ACTIONS(546), 10,
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
  [17667] = 7,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(711), 1,
      anon_sym_COMMA,
    ACTIONS(713), 1,
      anon_sym_SEMI,
    STATE(173), 1,
      sym_math_operator,
    STATE(478), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17698] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(662), 13,
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
  [17719] = 6,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(717), 1,
      anon_sym_SEMI,
    STATE(173), 1,
      sym_math_operator,
    ACTIONS(715), 2,
      anon_sym_COMMA,
      aux_sym_limit_clause_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17748] = 4,
    ACTIONS(570), 1,
      aux_sym_base_type_token3,
    STATE(563), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(568), 10,
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
  [17773] = 12,
    ACTIONS(671), 1,
      anon_sym_LT,
    ACTIONS(675), 1,
      anon_sym_AT_AT,
    ACTIONS(677), 1,
      sym_name,
    ACTIONS(719), 1,
      anon_sym_LPAREN,
    STATE(413), 1,
      sym_atomic_edge_type,
    STATE(417), 1,
      sym_atomic_edge_pattern,
    STATE(418), 1,
      sym_global_accum_name,
    STATE(419), 1,
      sym_edge_set_type,
    STATE(532), 1,
      sym_disj_pattern,
    STATE(594), 1,
      sym_path_edge_pattern,
    ACTIONS(673), 2,
      anon_sym__,
      aux_sym_seed_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [17813] = 12,
    ACTIONS(671), 1,
      anon_sym_LT,
    ACTIONS(675), 1,
      anon_sym_AT_AT,
    ACTIONS(677), 1,
      sym_name,
    ACTIONS(719), 1,
      anon_sym_LPAREN,
    STATE(413), 1,
      sym_atomic_edge_type,
    STATE(417), 1,
      sym_atomic_edge_pattern,
    STATE(418), 1,
      sym_global_accum_name,
    STATE(419), 1,
      sym_edge_set_type,
    STATE(532), 1,
      sym_disj_pattern,
    STATE(534), 1,
      sym_path_edge_pattern,
    ACTIONS(673), 2,
      anon_sym__,
      aux_sym_seed_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [17853] = 4,
    ACTIONS(723), 1,
      aux_sym_base_type_token3,
    STATE(281), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(721), 10,
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
  [17877] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(173), 1,
      sym_math_operator,
    ACTIONS(725), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17903] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(177), 12,
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
  [17923] = 12,
    ACTIONS(671), 1,
      anon_sym_LT,
    ACTIONS(675), 1,
      anon_sym_AT_AT,
    ACTIONS(677), 1,
      sym_name,
    ACTIONS(719), 1,
      anon_sym_LPAREN,
    STATE(413), 1,
      sym_atomic_edge_type,
    STATE(417), 1,
      sym_atomic_edge_pattern,
    STATE(418), 1,
      sym_global_accum_name,
    STATE(419), 1,
      sym_edge_set_type,
    STATE(530), 1,
      sym_path_edge_pattern,
    STATE(532), 1,
      sym_disj_pattern,
    ACTIONS(673), 2,
      anon_sym__,
      aux_sym_seed_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [17963] = 12,
    ACTIONS(671), 1,
      anon_sym_LT,
    ACTIONS(675), 1,
      anon_sym_AT_AT,
    ACTIONS(677), 1,
      sym_name,
    ACTIONS(719), 1,
      anon_sym_LPAREN,
    STATE(413), 1,
      sym_atomic_edge_type,
    STATE(417), 1,
      sym_atomic_edge_pattern,
    STATE(418), 1,
      sym_global_accum_name,
    STATE(426), 1,
      sym_edge_set_type,
    STATE(532), 1,
      sym_disj_pattern,
    STATE(594), 1,
      sym_path_edge_pattern,
    ACTIONS(673), 2,
      anon_sym__,
      aux_sym_seed_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18003] = 6,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(727), 1,
      aux_sym_dml_sub_case_stmt_token2,
    STATE(173), 1,
      sym_math_operator,
    STATE(447), 1,
      aux_sym_query_body_case_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18031] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(729), 1,
      anon_sym_SEMI,
    STATE(173), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18056] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(731), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18081] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(733), 1,
      anon_sym_SEMI,
    STATE(173), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18106] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(735), 1,
      aux_sym_condition_token5,
    STATE(173), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18131] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(737), 1,
      anon_sym_SEMI,
    STATE(173), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18156] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(739), 1,
      anon_sym_SEMI,
    STATE(173), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18181] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(741), 1,
      anon_sym_RBRACK,
    STATE(173), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18206] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
    STATE(173), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18231] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(745), 1,
      anon_sym_SEMI,
    STATE(173), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18256] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(745), 1,
      anon_sym_SEMI,
    STATE(173), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18281] = 11,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(693), 1,
      anon_sym_LPAREN,
    ACTIONS(747), 1,
      anon_sym_GT,
    ACTIONS(749), 1,
      sym_name,
    STATE(328), 1,
      sym_global_accum_name,
    STATE(333), 1,
      sym_step_vertex_types,
    STATE(339), 1,
      sym_vertex_set_type,
    STATE(347), 1,
      sym_atomic_vertex_type,
    STATE(420), 1,
      sym_step_vertex_set,
    ACTIONS(695), 2,
      anon_sym__,
      aux_sym_seed_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18318] = 5,
    ACTIONS(753), 1,
      anon_sym_DOT,
    ACTIONS(755), 1,
      anon_sym_PLUS_EQ,
    STATE(330), 1,
      aux_sym_v_accum_func_call_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(751), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [18342] = 10,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(677), 1,
      sym_name,
    ACTIONS(757), 1,
      anon_sym_LPAREN,
    STATE(418), 1,
      sym_global_accum_name,
    STATE(419), 1,
      sym_edge_set_type,
    STATE(615), 1,
      sym_atomic_edge_type,
    STATE(620), 1,
      sym_step_edge_types,
    STATE(757), 1,
      sym_step_edge_set,
    ACTIONS(673), 2,
      anon_sym__,
      aux_sym_seed_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18376] = 10,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(693), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      sym_name,
    STATE(328), 1,
      sym_global_accum_name,
    STATE(333), 1,
      sym_step_vertex_types,
    STATE(339), 1,
      sym_vertex_set_type,
    STATE(347), 1,
      sym_atomic_vertex_type,
    STATE(406), 1,
      sym_step_vertex_set,
    ACTIONS(695), 2,
      anon_sym__,
      aux_sym_seed_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18410] = 10,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(693), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      sym_name,
    STATE(328), 1,
      sym_global_accum_name,
    STATE(333), 1,
      sym_step_vertex_types,
    STATE(339), 1,
      sym_vertex_set_type,
    STATE(347), 1,
      sym_atomic_vertex_type,
    STATE(358), 1,
      sym_step_vertex_set,
    ACTIONS(695), 2,
      anon_sym__,
      aux_sym_seed_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18444] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(548), 10,
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
  [18462] = 10,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(693), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      sym_name,
    STATE(328), 1,
      sym_global_accum_name,
    STATE(333), 1,
      sym_step_vertex_types,
    STATE(339), 1,
      sym_vertex_set_type,
    STATE(347), 1,
      sym_atomic_vertex_type,
    STATE(424), 1,
      sym_step_vertex_set,
    ACTIONS(695), 2,
      anon_sym__,
      aux_sym_seed_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18496] = 10,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(693), 1,
      anon_sym_LPAREN,
    ACTIONS(749), 1,
      sym_name,
    STATE(328), 1,
      sym_global_accum_name,
    STATE(333), 1,
      sym_step_vertex_types,
    STATE(339), 1,
      sym_vertex_set_type,
    STATE(347), 1,
      sym_atomic_vertex_type,
    STATE(370), 1,
      sym_step_vertex_set,
    ACTIONS(695), 2,
      anon_sym__,
      aux_sym_seed_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18530] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(546), 10,
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
  [18548] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(759), 10,
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
  [18566] = 10,
    ACTIONS(761), 1,
      anon_sym_SEMI,
    ACTIONS(763), 1,
      aux_sym_where_clause_token1,
    ACTIONS(765), 1,
      aux_sym_accum_clause_token1,
    ACTIONS(767), 1,
      aux_sym_dml_sub_while_stmt_token2,
    ACTIONS(769), 1,
      aux_sym_post_accum_clause_token1,
    STATE(344), 1,
      sym_where_clause,
    STATE(396), 1,
      sym_accum_clause,
    STATE(684), 1,
      sym_limit_clause,
    STATE(397), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18600] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(771), 10,
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
  [18618] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(546), 10,
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
  [18636] = 4,
    ACTIONS(753), 1,
      anon_sym_DOT,
    STATE(331), 1,
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
  [18657] = 4,
    ACTIONS(777), 1,
      anon_sym_DOT,
    STATE(331), 1,
      aux_sym_v_accum_func_call_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(775), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [18678] = 9,
    ACTIONS(671), 1,
      anon_sym_LT,
    ACTIONS(675), 1,
      anon_sym_AT_AT,
    ACTIONS(677), 1,
      sym_name,
    STATE(413), 1,
      sym_atomic_edge_type,
    STATE(418), 1,
      sym_global_accum_name,
    STATE(419), 1,
      sym_edge_set_type,
    STATE(443), 1,
      sym_atomic_edge_pattern,
    ACTIONS(673), 2,
      anon_sym__,
      aux_sym_seed_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18709] = 3,
    ACTIONS(782), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(780), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
      anon_sym_DASH,
  [18727] = 4,
    ACTIONS(786), 1,
      anon_sym_DASH,
    STATE(349), 1,
      aux_sym_path_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(784), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [18747] = 4,
    ACTIONS(788), 1,
      anon_sym_COMMA,
    STATE(335), 1,
      aux_sym_dml_sub_stmt_list_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(791), 6,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [18767] = 4,
    ACTIONS(795), 1,
      anon_sym_DASH,
    STATE(334), 1,
      aux_sym_path_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(793), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [18787] = 2,
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
  [18803] = 3,
    ACTIONS(801), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(799), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
      anon_sym_DASH,
  [18821] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(803), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      anon_sym_COLON,
      aux_sym_post_accum_clause_token1,
      anon_sym_DASH,
  [18837] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(805), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [18853] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(807), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      anon_sym_COLON,
      aux_sym_post_accum_clause_token1,
      anon_sym_DASH,
  [18869] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(809), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [18885] = 4,
    ACTIONS(811), 1,
      anon_sym_COMMA,
    STATE(335), 1,
      aux_sym_dml_sub_stmt_list_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(813), 6,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [18905] = 8,
    ACTIONS(765), 1,
      aux_sym_accum_clause_token1,
    ACTIONS(767), 1,
      aux_sym_dml_sub_while_stmt_token2,
    ACTIONS(769), 1,
      aux_sym_post_accum_clause_token1,
    ACTIONS(815), 1,
      anon_sym_SEMI,
    STATE(382), 1,
      sym_accum_clause,
    STATE(730), 1,
      sym_limit_clause,
    STATE(384), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18933] = 4,
    ACTIONS(811), 1,
      anon_sym_COMMA,
    STATE(343), 1,
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
  [18953] = 3,
    ACTIONS(801), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(799), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
      anon_sym_DASH,
  [18971] = 2,
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
  [18987] = 4,
    ACTIONS(786), 1,
      anon_sym_DASH,
    STATE(334), 1,
      aux_sym_path_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(793), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19007] = 4,
    ACTIONS(823), 1,
      anon_sym_DASH,
    STATE(349), 1,
      aux_sym_path_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(821), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19027] = 7,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(826), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_AT_AT,
    ACTIONS(830), 1,
      sym_name,
    STATE(735), 1,
      sym_for_each_control,
    STATE(602), 2,
      sym_global_accum_name,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19052] = 8,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(832), 1,
      anon_sym_LPAREN,
    ACTIONS(834), 1,
      aux_sym_expr_token3,
    ACTIONS(836), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(41), 1,
      sym_global_accum_name,
    STATE(471), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19079] = 8,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(832), 1,
      anon_sym_LPAREN,
    ACTIONS(836), 1,
      sym_name,
    ACTIONS(838), 1,
      aux_sym_expr_token3,
    STATE(26), 1,
      sym_name_dot,
    STATE(41), 1,
      sym_global_accum_name,
    STATE(431), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19106] = 4,
    ACTIONS(840), 1,
      anon_sym_COMMA,
    STATE(369), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(842), 5,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19125] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(677), 1,
      sym_name,
    STATE(418), 1,
      sym_global_accum_name,
    STATE(419), 1,
      sym_edge_set_type,
    STATE(427), 1,
      sym_atomic_edge_type,
    ACTIONS(673), 2,
      anon_sym__,
      aux_sym_seed_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19150] = 5,
    ACTIONS(844), 1,
      ts_builtin_sym_end,
    ACTIONS(846), 1,
      aux_sym_create_query_token1,
    ACTIONS(849), 1,
      aux_sym_interpret_query_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    STATE(355), 4,
      sym__definition,
      sym_create_query,
      sym_interpret_query,
      aux_sym_gsql_repeat1,
  [19171] = 7,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(826), 1,
      anon_sym_LPAREN,
    ACTIONS(828), 1,
      anon_sym_AT_AT,
    ACTIONS(830), 1,
      sym_name,
    STATE(833), 1,
      sym_for_each_control,
    STATE(602), 2,
      sym_global_accum_name,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19196] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(852), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19211] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(854), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
      anon_sym_DASH,
  [19226] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(856), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19241] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(858), 1,
      anon_sym_RBRACE,
    ACTIONS(862), 1,
      sym_name,
    STATE(552), 1,
      sym_seed,
    STATE(612), 1,
      sym_global_accum_name,
    ACTIONS(860), 2,
      anon_sym__,
      aux_sym_seed_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19266] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(864), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19281] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(866), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19296] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(868), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19311] = 2,
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
  [19326] = 5,
    ACTIONS(7), 1,
      aux_sym_create_query_token1,
    ACTIONS(9), 1,
      aux_sym_interpret_query_token1,
    ACTIONS(872), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    STATE(355), 4,
      sym__definition,
      sym_create_query,
      sym_interpret_query,
      aux_sym_gsql_repeat1,
  [19347] = 2,
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
  [19362] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(876), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19377] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(878), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19392] = 4,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    STATE(369), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(883), 5,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19411] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(885), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
      anon_sym_DASH,
  [19426] = 8,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(832), 1,
      anon_sym_LPAREN,
    ACTIONS(836), 1,
      sym_name,
    ACTIONS(887), 1,
      aux_sym_for_each_control_token2,
    STATE(26), 1,
      sym_name_dot,
    STATE(41), 1,
      sym_global_accum_name,
    STATE(439), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19453] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(889), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
      anon_sym_DASH,
  [19468] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(891), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19483] = 4,
    ACTIONS(840), 1,
      anon_sym_COMMA,
    STATE(353), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(893), 5,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19502] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(895), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
      anon_sym_DASH,
  [19517] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(791), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19532] = 3,
    ACTIONS(899), 1,
      anon_sym_DASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(897), 5,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19548] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(832), 1,
      anon_sym_LPAREN,
    ACTIONS(901), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(41), 1,
      sym_global_accum_name,
    STATE(437), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19572] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(832), 1,
      anon_sym_LPAREN,
    ACTIONS(901), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(41), 1,
      sym_global_accum_name,
    STATE(471), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19596] = 6,
    ACTIONS(767), 1,
      aux_sym_dml_sub_while_stmt_token2,
    ACTIONS(769), 1,
      aux_sym_post_accum_clause_token1,
    ACTIONS(903), 1,
      anon_sym_SEMI,
    STATE(740), 1,
      sym_limit_clause,
    STATE(402), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19618] = 7,
    ACTIONS(374), 1,
      anon_sym_AT_AT,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(907), 1,
      sym_name,
    STATE(187), 1,
      sym_name_dot,
    STATE(202), 1,
      sym_set_bag_expr,
    STATE(204), 1,
      sym_global_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19642] = 6,
    ACTIONS(767), 1,
      aux_sym_dml_sub_while_stmt_token2,
    ACTIONS(769), 1,
      aux_sym_post_accum_clause_token1,
    ACTIONS(909), 1,
      anon_sym_SEMI,
    STATE(734), 1,
      sym_limit_clause,
    STATE(380), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19664] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(832), 1,
      anon_sym_LPAREN,
    ACTIONS(901), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(41), 1,
      sym_global_accum_name,
    STATE(472), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19688] = 6,
    ACTIONS(767), 1,
      aux_sym_dml_sub_while_stmt_token2,
    ACTIONS(769), 1,
      aux_sym_post_accum_clause_token1,
    ACTIONS(909), 1,
      anon_sym_SEMI,
    STATE(734), 1,
      sym_limit_clause,
    STATE(402), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19710] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(883), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19724] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(832), 1,
      anon_sym_LPAREN,
    ACTIONS(901), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(41), 1,
      sym_global_accum_name,
    STATE(431), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19748] = 3,
    ACTIONS(911), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(913), 4,
      anon_sym_SEMI,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [19764] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(832), 1,
      anon_sym_LPAREN,
    ACTIONS(901), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(41), 1,
      sym_global_accum_name,
    STATE(294), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19788] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(832), 1,
      anon_sym_LPAREN,
    ACTIONS(901), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(40), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      sym_global_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19812] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(832), 1,
      anon_sym_LPAREN,
    ACTIONS(901), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(41), 1,
      sym_global_accum_name,
    STATE(439), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19836] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(832), 1,
      anon_sym_LPAREN,
    ACTIONS(901), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(41), 1,
      sym_global_accum_name,
    STATE(470), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19860] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(832), 1,
      anon_sym_LPAREN,
    ACTIONS(901), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(41), 1,
      sym_global_accum_name,
    STATE(473), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19884] = 6,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(862), 1,
      sym_name,
    STATE(612), 1,
      sym_global_accum_name,
    STATE(627), 1,
      sym_seed,
    ACTIONS(860), 2,
      anon_sym__,
      aux_sym_seed_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19906] = 5,
    ACTIONS(200), 1,
      sym_digit,
    ACTIONS(917), 1,
      anon_sym_DOT,
    STATE(35), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(915), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token2,
  [19926] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(832), 1,
      anon_sym_LPAREN,
    ACTIONS(901), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(41), 1,
      sym_global_accum_name,
    STATE(289), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19950] = 6,
    ACTIONS(767), 1,
      aux_sym_dml_sub_while_stmt_token2,
    ACTIONS(769), 1,
      aux_sym_post_accum_clause_token1,
    ACTIONS(815), 1,
      anon_sym_SEMI,
    STATE(730), 1,
      sym_limit_clause,
    STATE(384), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19972] = 6,
    ACTIONS(767), 1,
      aux_sym_dml_sub_while_stmt_token2,
    ACTIONS(769), 1,
      aux_sym_post_accum_clause_token1,
    ACTIONS(815), 1,
      anon_sym_SEMI,
    STATE(730), 1,
      sym_limit_clause,
    STATE(402), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19994] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(919), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
  [20007] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(552), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
  [20020] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(123), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20033] = 6,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_LT,
    ACTIONS(921), 1,
      anon_sym_EQ,
    ACTIONS(923), 1,
      anon_sym_DOT,
    STATE(47), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20054] = 4,
    ACTIONS(927), 1,
      aux_sym_post_accum_clause_token1,
    ACTIONS(925), 2,
      anon_sym_SEMI,
      aux_sym_dml_sub_while_stmt_token2,
    STATE(402), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20071] = 3,
    ACTIONS(631), 1,
      aux_sym_print_expr_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(627), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_print_stmt_token2,
  [20086] = 4,
    ACTIONS(200), 1,
      sym_digit,
    STATE(35), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(930), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_dml_sub_if_stmt_token2,
  [20103] = 4,
    ACTIONS(934), 1,
      anon_sym_PIPE,
    STATE(409), 1,
      aux_sym_disj_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(932), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [20120] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(936), 5,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [20133] = 6,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(938), 1,
      sym_name,
    STATE(651), 1,
      sym_file_path,
    STATE(654), 1,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20154] = 6,
    ACTIONS(940), 1,
      anon_sym_COMMA,
    ACTIONS(942), 1,
      anon_sym_SEMI,
    ACTIONS(944), 1,
      aux_sym_where_clause_token1,
    ACTIONS(946), 1,
      aux_sym_print_stmt_token2,
    STATE(412), 1,
      aux_sym_print_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20175] = 4,
    ACTIONS(950), 1,
      anon_sym_PIPE,
    STATE(409), 1,
      aux_sym_disj_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(948), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [20192] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(953), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
  [20205] = 6,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(955), 1,
      sym_name,
    STATE(654), 1,
      sym_string_literal,
    STATE(791), 1,
      sym_file_path,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20226] = 4,
    ACTIONS(957), 1,
      anon_sym_COMMA,
    STATE(412), 1,
      aux_sym_print_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(960), 3,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_print_stmt_token2,
  [20243] = 3,
    ACTIONS(964), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(962), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20258] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(953), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
  [20271] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(966), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_print_stmt_token2,
      aux_sym_print_expr_token1,
  [20284] = 4,
    ACTIONS(964), 1,
      anon_sym_GT,
    ACTIONS(962), 2,
      anon_sym_DOT,
      anon_sym_PIPE,
    ACTIONS(968), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20301] = 4,
    ACTIONS(934), 1,
      anon_sym_PIPE,
    STATE(405), 1,
      aux_sym_disj_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(970), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [20318] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(972), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20331] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(974), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20344] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(976), 5,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [20357] = 6,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(978), 1,
      sym_name,
    STATE(654), 1,
      sym_string_literal,
    STATE(722), 1,
      sym_file_path,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20378] = 6,
    ACTIONS(940), 1,
      anon_sym_COMMA,
    ACTIONS(980), 1,
      anon_sym_SEMI,
    ACTIONS(982), 1,
      aux_sym_where_clause_token1,
    ACTIONS(984), 1,
      aux_sym_print_stmt_token2,
    STATE(408), 1,
      aux_sym_print_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20399] = 6,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(986), 1,
      sym_name,
    STATE(654), 1,
      sym_string_literal,
    STATE(793), 1,
      sym_file_path,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20420] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(988), 5,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [20433] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(893), 5,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_accum_clause_token1,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [20446] = 5,
    ACTIONS(990), 1,
      anon_sym_RPAREN,
    ACTIONS(992), 1,
      anon_sym_PIPE,
    STATE(536), 1,
      aux_sym_step_edge_types_repeat1,
    ACTIONS(974), 2,
      anon_sym_GT,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20465] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(994), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20477] = 4,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(455), 2,
      sym_global_accum_name,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20493] = 4,
    ACTIONS(996), 1,
      anon_sym_SEMI,
    ACTIONS(998), 1,
      aux_sym_print_stmt_token2,
    ACTIONS(911), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20509] = 4,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    STATE(448), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(1000), 2,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20525] = 3,
    ACTIONS(1002), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
  [20539] = 3,
    ACTIONS(1006), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1004), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [20553] = 4,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(568), 2,
      sym_global_accum_name,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20569] = 5,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(1008), 1,
      sym_name,
    STATE(418), 1,
      sym_global_accum_name,
    STATE(584), 1,
      sym_edge_set_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20587] = 3,
    ACTIONS(1012), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1010), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [20601] = 3,
    ACTIONS(1016), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1014), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [20615] = 3,
    ACTIONS(1018), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
  [20629] = 4,
    ACTIONS(1022), 1,
      aux_sym_dml_sub_case_stmt_token2,
    STATE(438), 1,
      aux_sym_query_body_case_stmt_repeat2,
    ACTIONS(1020), 2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20645] = 3,
    ACTIONS(1025), 1,
      aux_sym_dml_sub_while_stmt_token3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
  [20659] = 3,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1029), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
  [20673] = 3,
    ACTIONS(1031), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1029), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
  [20687] = 3,
    ACTIONS(1035), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1033), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [20701] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(948), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20713] = 5,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(1008), 1,
      sym_name,
    STATE(418), 1,
      sym_global_accum_name,
    STATE(634), 1,
      sym_edge_set_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20731] = 5,
    ACTIONS(1037), 1,
      sym_name,
    ACTIONS(1039), 1,
      sym_digit,
    STATE(524), 1,
      aux_sym_accum_type_repeat1,
    STATE(657), 1,
      sym_simple_size,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20749] = 4,
    ACTIONS(1043), 1,
      aux_sym_dml_sub_case_stmt_token2,
    STATE(446), 1,
      aux_sym_query_body_case_stmt_repeat1,
    ACTIONS(1041), 2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20765] = 5,
    ACTIONS(727), 1,
      aux_sym_dml_sub_case_stmt_token2,
    ACTIONS(1046), 1,
      aux_sym_dml_sub_if_stmt_token3,
    ACTIONS(1048), 1,
      aux_sym_dml_sub_if_stmt_token4,
    STATE(438), 1,
      aux_sym_query_body_case_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20783] = 4,
    ACTIONS(1050), 1,
      anon_sym_COMMA,
    STATE(448), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(703), 2,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20799] = 5,
    ACTIONS(828), 1,
      anon_sym_AT_AT,
    ACTIONS(1053), 1,
      sym_name,
    STATE(328), 1,
      sym_global_accum_name,
    STATE(626), 1,
      sym_vertex_set_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20817] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1055), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_print_stmt_token2,
  [20829] = 5,
    ACTIONS(828), 1,
      anon_sym_AT_AT,
    ACTIONS(1053), 1,
      sym_name,
    STATE(328), 1,
      sym_global_accum_name,
    STATE(579), 1,
      sym_vertex_set_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20847] = 3,
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
  [20861] = 5,
    ACTIONS(1037), 1,
      sym_name,
    ACTIONS(1039), 1,
      sym_digit,
    STATE(524), 1,
      aux_sym_accum_type_repeat1,
    STATE(707), 1,
      sym_simple_size,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20879] = 5,
    ACTIONS(711), 1,
      anon_sym_COMMA,
    ACTIONS(1061), 1,
      anon_sym_EQ,
    ACTIONS(1063), 1,
      anon_sym_SEMI,
    STATE(548), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20897] = 5,
    ACTIONS(1065), 1,
      anon_sym_COMMA,
    ACTIONS(1067), 1,
      anon_sym_EQ,
    ACTIONS(1069), 1,
      anon_sym_SEMI,
    STATE(564), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20915] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(960), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      aux_sym_where_clause_token1,
      aux_sym_print_stmt_token2,
  [20927] = 4,
    ACTIONS(1073), 1,
      aux_sym_dml_sub_case_stmt_token2,
    STATE(457), 1,
      aux_sym_dml_sub_case_stmt_repeat1,
    ACTIONS(1071), 2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20943] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1076), 4,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
      aux_sym_accum_type_token5,
  [20955] = 4,
    ACTIONS(1078), 1,
      aux_sym_dml_sub_while_stmt_token2,
    ACTIONS(1080), 1,
      aux_sym_dml_sub_while_stmt_token3,
    ACTIONS(911), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20971] = 5,
    ACTIONS(1082), 1,
      aux_sym_dml_sub_if_stmt_token3,
    ACTIONS(1084), 1,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(1086), 1,
      aux_sym_dml_sub_case_stmt_token2,
    STATE(446), 1,
      aux_sym_query_body_case_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20989] = 4,
    ACTIONS(689), 1,
      anon_sym_COMMA,
    STATE(462), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(1000), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21005] = 4,
    ACTIONS(1088), 1,
      anon_sym_COMMA,
    STATE(462), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(703), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21021] = 5,
    ACTIONS(1091), 1,
      aux_sym_dml_sub_if_stmt_token3,
    ACTIONS(1093), 1,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(1095), 1,
      aux_sym_dml_sub_case_stmt_token2,
    STATE(457), 1,
      aux_sym_dml_sub_case_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21039] = 4,
    ACTIONS(1097), 1,
      aux_sym_dml_sub_while_stmt_token2,
    ACTIONS(1099), 1,
      aux_sym_dml_sub_while_stmt_token3,
    ACTIONS(911), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21055] = 5,
    ACTIONS(165), 1,
      anon_sym_DOT,
    ACTIONS(1101), 1,
      anon_sym_EQ,
    ACTIONS(1103), 1,
      anon_sym_PLUS_EQ,
    STATE(47), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21073] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(123), 4,
      anon_sym_RPAREN,
      aux_sym_for_each_control_token1,
      anon_sym_COLON,
      anon_sym_PIPE2,
  [21085] = 4,
    ACTIONS(1105), 1,
      anon_sym_SEMI,
    ACTIONS(1107), 1,
      aux_sym_print_stmt_token2,
    ACTIONS(911), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21101] = 3,
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
  [21115] = 3,
    ACTIONS(1115), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1113), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [21129] = 3,
    ACTIONS(1117), 1,
      aux_sym_dml_sub_while_stmt_token3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
  [21143] = 3,
    ACTIONS(1119), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
  [21157] = 3,
    ACTIONS(1121), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
  [21171] = 3,
    ACTIONS(1117), 1,
      aux_sym_dml_sub_while_stmt_token3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 3,
      aux_sym_simple_set_token1,
      aux_sym_simple_set_token2,
      aux_sym_simple_set_token3,
  [21185] = 3,
    ACTIONS(1123), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(650), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [21199] = 5,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
    ACTIONS(364), 1,
      anon_sym_LT,
    ACTIONS(1125), 1,
      anon_sym_DOT,
    STATE(47), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21217] = 4,
    ACTIONS(1127), 1,
      anon_sym_RPAREN,
    ACTIONS(1129), 1,
      anon_sym_COMMA,
    STATE(487), 1,
      aux_sym_accum_type_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21232] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1076), 3,
      aux_sym_accum_type_token2,
      aux_sym_accum_type_token3,
      aux_sym_accum_type_token4,
  [21243] = 4,
    ACTIONS(711), 1,
      anon_sym_COMMA,
    ACTIONS(1131), 1,
      anon_sym_SEMI,
    STATE(558), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21258] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1133), 3,
      ts_builtin_sym_end,
      aux_sym_create_query_token1,
      aux_sym_interpret_query_token1,
  [21269] = 4,
    ACTIONS(1135), 1,
      anon_sym_AT,
    ACTIONS(1137), 1,
      sym_name,
    STATE(318), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21284] = 3,
    ACTIONS(1139), 1,
      aux_sym_dml_sub_if_stmt_token2,
    ACTIONS(911), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21297] = 4,
    ACTIONS(1141), 1,
      anon_sym_RPAREN,
    ACTIONS(1143), 1,
      anon_sym_PIPE2,
    STATE(525), 1,
      aux_sym_step_vertex_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21312] = 4,
    ACTIONS(1145), 1,
      anon_sym_COMMA,
    ACTIONS(1148), 1,
      anon_sym_GT,
    STATE(483), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21327] = 4,
    ACTIONS(1150), 1,
      anon_sym_COMMA,
    ACTIONS(1152), 1,
      anon_sym_GT,
    STATE(483), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21342] = 4,
    ACTIONS(1150), 1,
      anon_sym_COMMA,
    ACTIONS(1154), 1,
      anon_sym_GT,
    STATE(484), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21357] = 3,
    ACTIONS(1156), 1,
      aux_sym_dml_sub_if_stmt_token2,
    ACTIONS(911), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21370] = 4,
    ACTIONS(1129), 1,
      anon_sym_COMMA,
    ACTIONS(1158), 1,
      anon_sym_RPAREN,
    STATE(556), 1,
      aux_sym_accum_type_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21385] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1160), 3,
      ts_builtin_sym_end,
      aux_sym_create_query_token1,
      aux_sym_interpret_query_token1,
  [21396] = 4,
    ACTIONS(1065), 1,
      anon_sym_COMMA,
    ACTIONS(1162), 1,
      anon_sym_SEMI,
    STATE(561), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21411] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(650), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [21422] = 3,
    ACTIONS(1164), 1,
      anon_sym_RPAREN,
    ACTIONS(911), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21435] = 3,
    ACTIONS(1166), 1,
      anon_sym_RPAREN,
    ACTIONS(911), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21448] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1168), 3,
      ts_builtin_sym_end,
      aux_sym_create_query_token1,
      aux_sym_interpret_query_token1,
  [21459] = 3,
    ACTIONS(1170), 1,
      anon_sym_RPAREN,
    ACTIONS(911), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21472] = 4,
    ACTIONS(1172), 1,
      aux_sym_dml_sub_if_stmt_token3,
    ACTIONS(1175), 1,
      aux_sym_dml_sub_if_stmt_token4,
    STATE(495), 1,
      aux_sym_query_body_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21487] = 4,
    ACTIONS(1177), 1,
      aux_sym_dml_sub_if_stmt_token3,
    ACTIONS(1180), 1,
      aux_sym_dml_sub_if_stmt_token4,
    STATE(496), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21502] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1182), 3,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
  [21513] = 4,
    ACTIONS(1184), 1,
      anon_sym_SQUOTE,
    ACTIONS(1186), 1,
      aux_sym_string_literal_token2,
    STATE(511), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1188), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21528] = 4,
    ACTIONS(1184), 1,
      anon_sym_DQUOTE,
    ACTIONS(1190), 1,
      aux_sym_string_literal_token1,
    STATE(505), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1188), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21543] = 4,
    ACTIONS(1192), 1,
      anon_sym_AT,
    ACTIONS(1194), 1,
      sym_name,
    STATE(183), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21558] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1196), 3,
      ts_builtin_sym_end,
      aux_sym_create_query_token1,
      aux_sym_interpret_query_token1,
  [21569] = 4,
    ACTIONS(1198), 1,
      anon_sym_LPAREN,
    ACTIONS(1200), 1,
      sym_name,
    STATE(440), 1,
      sym_simple_set,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21584] = 4,
    ACTIONS(1202), 1,
      anon_sym_COMMA,
    ACTIONS(1204), 1,
      anon_sym_RBRACE,
    STATE(518), 1,
      aux_sym_seed_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21599] = 4,
    ACTIONS(200), 1,
      sym_digit,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21614] = 4,
    ACTIONS(1208), 1,
      anon_sym_DQUOTE,
    ACTIONS(1210), 1,
      aux_sym_string_literal_token1,
    STATE(505), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1188), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21629] = 4,
    ACTIONS(1213), 1,
      aux_sym_create_query_token8,
    ACTIONS(1215), 1,
      anon_sym_LBRACE,
    STATE(520), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21644] = 4,
    ACTIONS(1217), 1,
      anon_sym_SQUOTE,
    ACTIONS(1219), 1,
      aux_sym_string_literal_token2,
    STATE(498), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1188), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21659] = 4,
    ACTIONS(1221), 1,
      anon_sym_RPAREN,
    ACTIONS(1223), 1,
      anon_sym_PIPE,
    STATE(508), 1,
      aux_sym_step_edge_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21674] = 4,
    ACTIONS(1127), 1,
      anon_sym_GT,
    ACTIONS(1226), 1,
      anon_sym_COMMA,
    STATE(510), 1,
      aux_sym_accum_type_repeat4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21689] = 4,
    ACTIONS(1228), 1,
      anon_sym_COMMA,
    ACTIONS(1231), 1,
      anon_sym_GT,
    STATE(510), 1,
      aux_sym_accum_type_repeat4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21704] = 4,
    ACTIONS(1233), 1,
      anon_sym_SQUOTE,
    ACTIONS(1235), 1,
      aux_sym_string_literal_token2,
    STATE(511), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1188), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21719] = 4,
    ACTIONS(1238), 1,
      anon_sym_COMMA,
    ACTIONS(1241), 1,
      anon_sym_RBRACK,
    STATE(512), 1,
      aux_sym_v_expr_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21734] = 4,
    ACTIONS(1217), 1,
      anon_sym_DQUOTE,
    ACTIONS(1243), 1,
      aux_sym_string_literal_token1,
    STATE(499), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1188), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21749] = 3,
    ACTIONS(1245), 1,
      aux_sym_dml_sub_if_stmt_token2,
    ACTIONS(911), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21762] = 4,
    ACTIONS(1247), 1,
      aux_sym_dml_sub_if_stmt_token3,
    ACTIONS(1249), 1,
      aux_sym_dml_sub_if_stmt_token4,
    STATE(543), 1,
      aux_sym_query_body_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21777] = 4,
    ACTIONS(1247), 1,
      aux_sym_dml_sub_if_stmt_token3,
    ACTIONS(1249), 1,
      aux_sym_dml_sub_if_stmt_token4,
    STATE(543), 1,
      aux_sym_query_body_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21792] = 4,
    ACTIONS(1215), 1,
      anon_sym_LBRACE,
    ACTIONS(1251), 1,
      aux_sym_create_query_token8,
    STATE(527), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21807] = 4,
    ACTIONS(1253), 1,
      anon_sym_COMMA,
    ACTIONS(1256), 1,
      anon_sym_RBRACE,
    STATE(518), 1,
      aux_sym_seed_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21822] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(683), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [21833] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1258), 3,
      ts_builtin_sym_end,
      aux_sym_create_query_token1,
      aux_sym_interpret_query_token1,
  [21844] = 4,
    ACTIONS(1260), 1,
      anon_sym_COMMA,
    ACTIONS(1262), 1,
      anon_sym_RBRACK,
    STATE(512), 1,
      aux_sym_v_expr_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21859] = 4,
    ACTIONS(1215), 1,
      anon_sym_LBRACE,
    ACTIONS(1264), 1,
      aux_sym_create_query_token8,
    STATE(544), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21874] = 4,
    ACTIONS(212), 1,
      anon_sym_DOT,
    ACTIONS(1266), 1,
      sym_digit,
    STATE(394), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21889] = 4,
    ACTIONS(200), 1,
      sym_digit,
    ACTIONS(1268), 1,
      aux_sym_dml_sub_while_stmt_token3,
    STATE(35), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21904] = 4,
    ACTIONS(1270), 1,
      anon_sym_RPAREN,
    ACTIONS(1272), 1,
      anon_sym_PIPE2,
    STATE(525), 1,
      aux_sym_step_vertex_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21919] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1275), 3,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
  [21930] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1277), 3,
      ts_builtin_sym_end,
      aux_sym_create_query_token1,
      aux_sym_interpret_query_token1,
  [21941] = 4,
    ACTIONS(1279), 1,
      aux_sym_dml_sub_if_stmt_token3,
    ACTIONS(1281), 1,
      aux_sym_dml_sub_if_stmt_token4,
    STATE(496), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21956] = 4,
    ACTIONS(1283), 1,
      anon_sym_RPAREN,
    ACTIONS(1285), 1,
      anon_sym_COMMA,
    STATE(529), 1,
      aux_sym_for_each_control_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21971] = 4,
    ACTIONS(1288), 1,
      anon_sym_RPAREN,
    ACTIONS(1290), 1,
      anon_sym_DOT,
    ACTIONS(1292), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21986] = 4,
    ACTIONS(1294), 1,
      anon_sym_RPAREN,
    ACTIONS(1296), 1,
      anon_sym_COMMA,
    STATE(529), 1,
      aux_sym_for_each_control_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22001] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(970), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [22012] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1298), 3,
      ts_builtin_sym_end,
      aux_sym_create_query_token1,
      aux_sym_interpret_query_token1,
  [22023] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1300), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [22034] = 4,
    ACTIONS(1260), 1,
      anon_sym_COMMA,
    ACTIONS(1302), 1,
      anon_sym_RBRACK,
    STATE(521), 1,
      aux_sym_v_expr_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22049] = 4,
    ACTIONS(992), 1,
      anon_sym_PIPE,
    ACTIONS(1304), 1,
      anon_sym_RPAREN,
    STATE(508), 1,
      aux_sym_step_edge_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22064] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1300), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [22075] = 4,
    ACTIONS(1192), 1,
      anon_sym_AT,
    ACTIONS(1306), 1,
      sym_name,
    STATE(183), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22090] = 4,
    ACTIONS(1226), 1,
      anon_sym_COMMA,
    ACTIONS(1308), 1,
      anon_sym_GT,
    STATE(509), 1,
      aux_sym_accum_type_repeat4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22105] = 4,
    ACTIONS(1215), 1,
      anon_sym_LBRACE,
    ACTIONS(1310), 1,
      aux_sym_create_query_token8,
    STATE(574), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22120] = 3,
    ACTIONS(1312), 1,
      aux_sym_dml_sub_if_stmt_token2,
    ACTIONS(911), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22133] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1314), 3,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
  [22144] = 4,
    ACTIONS(1316), 1,
      aux_sym_dml_sub_if_stmt_token3,
    ACTIONS(1318), 1,
      aux_sym_dml_sub_if_stmt_token4,
    STATE(495), 1,
      aux_sym_query_body_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22159] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1320), 3,
      ts_builtin_sym_end,
      aux_sym_create_query_token1,
      aux_sym_interpret_query_token1,
  [22170] = 4,
    ACTIONS(1226), 1,
      anon_sym_COMMA,
    ACTIONS(1308), 1,
      anon_sym_GT,
    STATE(510), 1,
      aux_sym_accum_type_repeat4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22185] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1322), 3,
      ts_builtin_sym_end,
      aux_sym_create_query_token1,
      aux_sym_interpret_query_token1,
  [22196] = 3,
    ACTIONS(1326), 1,
      anon_sym_DOT_STAR,
    ACTIONS(1324), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22209] = 4,
    ACTIONS(711), 1,
      anon_sym_COMMA,
    ACTIONS(1328), 1,
      anon_sym_SEMI,
    STATE(558), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22224] = 4,
    ACTIONS(1330), 1,
      anon_sym_AT,
    ACTIONS(1332), 1,
      sym_name,
    STATE(24), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22239] = 4,
    ACTIONS(1334), 1,
      anon_sym_DQUOTE,
    ACTIONS(1336), 1,
      aux_sym_string_literal_token1,
    STATE(586), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1188), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22254] = 4,
    ACTIONS(1334), 1,
      anon_sym_SQUOTE,
    ACTIONS(1338), 1,
      aux_sym_string_literal_token2,
    STATE(587), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1188), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22269] = 4,
    ACTIONS(1202), 1,
      anon_sym_COMMA,
    ACTIONS(1340), 1,
      anon_sym_RBRACE,
    STATE(503), 1,
      aux_sym_seed_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22284] = 3,
    ACTIONS(1342), 1,
      anon_sym_RPAREN,
    ACTIONS(911), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22297] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1344), 3,
      ts_builtin_sym_end,
      aux_sym_create_query_token1,
      aux_sym_interpret_query_token1,
  [22308] = 3,
    ACTIONS(1346), 1,
      aux_sym_dml_sub_if_stmt_token2,
    ACTIONS(911), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22321] = 4,
    ACTIONS(1348), 1,
      anon_sym_RPAREN,
    ACTIONS(1350), 1,
      anon_sym_COMMA,
    STATE(556), 1,
      aux_sym_accum_type_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22336] = 4,
    ACTIONS(1198), 1,
      anon_sym_LPAREN,
    ACTIONS(1200), 1,
      sym_name,
    STATE(410), 1,
      sym_simple_set,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22351] = 4,
    ACTIONS(1353), 1,
      anon_sym_COMMA,
    ACTIONS(1356), 1,
      anon_sym_SEMI,
    STATE(558), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22366] = 4,
    ACTIONS(1358), 1,
      aux_sym_create_query_token2,
    ACTIONS(1360), 1,
      aux_sym_create_query_token4,
    ACTIONS(1362), 1,
      aux_sym_create_query_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22381] = 3,
    ACTIONS(1364), 1,
      anon_sym_EQ,
    ACTIONS(1356), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22394] = 4,
    ACTIONS(1366), 1,
      anon_sym_COMMA,
    ACTIONS(1369), 1,
      anon_sym_SEMI,
    STATE(561), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22409] = 3,
    ACTIONS(1371), 1,
      aux_sym_dml_sub_if_stmt_token2,
    ACTIONS(911), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22422] = 4,
    ACTIONS(1150), 1,
      anon_sym_COMMA,
    ACTIONS(1373), 1,
      anon_sym_GT,
    STATE(565), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22437] = 4,
    ACTIONS(1065), 1,
      anon_sym_COMMA,
    ACTIONS(1375), 1,
      anon_sym_SEMI,
    STATE(561), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22452] = 4,
    ACTIONS(1150), 1,
      anon_sym_COMMA,
    ACTIONS(1377), 1,
      anon_sym_GT,
    STATE(483), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22467] = 4,
    ACTIONS(1065), 1,
      anon_sym_COMMA,
    ACTIONS(1379), 1,
      anon_sym_SEMI,
    STATE(489), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22482] = 4,
    ACTIONS(1135), 1,
      anon_sym_AT,
    ACTIONS(1381), 1,
      sym_name,
    STATE(610), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22497] = 3,
    ACTIONS(1383), 1,
      anon_sym_EQ,
    ACTIONS(1369), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22510] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1385), 3,
      ts_builtin_sym_end,
      aux_sym_create_query_token1,
      aux_sym_interpret_query_token1,
  [22521] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1387), 3,
      anon_sym_SEMI,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [22532] = 4,
    ACTIONS(1215), 1,
      anon_sym_LBRACE,
    ACTIONS(1389), 1,
      aux_sym_create_query_token8,
    STATE(493), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22547] = 4,
    ACTIONS(1226), 1,
      anon_sym_COMMA,
    ACTIONS(1391), 1,
      anon_sym_GT,
    STATE(545), 1,
      aux_sym_accum_type_repeat4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22562] = 3,
    STATE(528), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    ACTIONS(1393), 2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22575] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1395), 3,
      ts_builtin_sym_end,
      aux_sym_create_query_token1,
      aux_sym_interpret_query_token1,
  [22586] = 3,
    ACTIONS(1397), 1,
      aux_sym_dml_sub_if_stmt_token2,
    ACTIONS(911), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22599] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(356), 3,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
      aux_sym_dml_sub_case_stmt_token2,
  [22610] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1399), 3,
      ts_builtin_sym_end,
      aux_sym_create_query_token1,
      aux_sym_interpret_query_token1,
  [22621] = 4,
    ACTIONS(165), 1,
      anon_sym_DOT,
    ACTIONS(1401), 1,
      anon_sym_PLUS_EQ,
    STATE(47), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22636] = 4,
    ACTIONS(1143), 1,
      anon_sym_PIPE2,
    ACTIONS(1403), 1,
      anon_sym_RPAREN,
    STATE(482), 1,
      aux_sym_step_vertex_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22651] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1405), 3,
      anon_sym_SEMI,
      aux_sym_dml_sub_while_stmt_token2,
      aux_sym_post_accum_clause_token1,
  [22662] = 4,
    ACTIONS(1407), 1,
      aux_sym_dml_sub_if_stmt_token3,
    ACTIONS(1409), 1,
      aux_sym_dml_sub_if_stmt_token4,
    STATE(528), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22677] = 3,
    ACTIONS(1411), 1,
      aux_sym_dml_sub_if_stmt_token2,
    ACTIONS(911), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22690] = 3,
    ACTIONS(1413), 1,
      anon_sym_RPAREN,
    ACTIONS(911), 2,
      aux_sym_create_query_token2,
      aux_sym_condition_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22703] = 4,
    ACTIONS(990), 1,
      anon_sym_RPAREN,
    ACTIONS(992), 1,
      anon_sym_PIPE,
    STATE(536), 1,
      aux_sym_step_edge_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22718] = 4,
    ACTIONS(1330), 1,
      anon_sym_AT,
    ACTIONS(1415), 1,
      sym_name,
    STATE(24), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22733] = 4,
    ACTIONS(1190), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1417), 1,
      anon_sym_DQUOTE,
    STATE(505), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1188), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22748] = 4,
    ACTIONS(1186), 1,
      aux_sym_string_literal_token2,
    ACTIONS(1417), 1,
      anon_sym_SQUOTE,
    STATE(511), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1188), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22763] = 4,
    ACTIONS(1419), 1,
      sym_name,
    STATE(348), 1,
      sym_step_source_set,
    STATE(385), 1,
      sym_path_pattern,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22778] = 3,
    ACTIONS(1421), 1,
      aux_sym_for_each_control_token1,
    ACTIONS(1423), 1,
      aux_sym_condition_token8,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22790] = 3,
    ACTIONS(1413), 1,
      aux_sym_condition_token3,
    ACTIONS(1425), 1,
      aux_sym_condition_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22802] = 3,
    ACTIONS(1427), 1,
      sym_digit,
    STATE(45), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22814] = 3,
    ACTIONS(1429), 1,
      sym_digit,
    STATE(44), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22826] = 3,
    ACTIONS(1095), 1,
      aux_sym_dml_sub_case_stmt_token2,
    STATE(463), 1,
      aux_sym_dml_sub_case_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22838] = 3,
    ACTIONS(1290), 1,
      anon_sym_DOT,
    ACTIONS(1431), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22850] = 3,
    ACTIONS(1433), 1,
      anon_sym_RPAREN,
    ACTIONS(1435), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22862] = 3,
    ACTIONS(1296), 1,
      anon_sym_COMMA,
    STATE(531), 1,
      aux_sym_for_each_control_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22874] = 2,
    ACTIONS(1393), 2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22884] = 3,
    ACTIONS(1215), 1,
      anon_sym_LBRACE,
    STATE(501), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22896] = 3,
    ACTIONS(1437), 1,
      sym_digit,
    STATE(208), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22908] = 3,
    ACTIONS(1439), 1,
      sym_digit,
    STATE(207), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22920] = 2,
    ACTIONS(1441), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22930] = 3,
    ACTIONS(1443), 1,
      aux_sym_for_each_control_token1,
    ACTIONS(1445), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22942] = 3,
    ACTIONS(1215), 1,
      anon_sym_LBRACE,
    STATE(479), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22954] = 2,
    ACTIONS(1447), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22964] = 3,
    ACTIONS(1449), 1,
      anon_sym_LPAREN,
    ACTIONS(1451), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22976] = 2,
    ACTIONS(1453), 2,
      aux_sym_accum_type_token18,
      aux_sym_accum_type_token19,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22986] = 2,
    ACTIONS(1455), 2,
      aux_sym_dml_sub_if_stmt_token3,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22996] = 3,
    ACTIONS(1457), 1,
      sym_digit,
    STATE(210), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23008] = 3,
    ACTIONS(1449), 1,
      anon_sym_LPAREN,
    ACTIONS(1459), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23020] = 2,
    ACTIONS(1461), 2,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23030] = 3,
    ACTIONS(1463), 1,
      sym_digit,
    STATE(43), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23042] = 2,
    ACTIONS(1324), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23052] = 2,
    ACTIONS(1465), 2,
      aux_sym_accum_type_token18,
      aux_sym_accum_type_token19,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23062] = 3,
    ACTIONS(1215), 1,
      anon_sym_LBRACE,
    STATE(577), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23074] = 2,
    ACTIONS(968), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23084] = 3,
    ACTIONS(165), 1,
      anon_sym_DOT,
    STATE(47), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23096] = 2,
    ACTIONS(1467), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23106] = 3,
    ACTIONS(1469), 1,
      aux_sym_from_clause_token1,
    STATE(327), 1,
      sym_from_clause,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23118] = 2,
    ACTIONS(1471), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23128] = 3,
    ACTIONS(1473), 1,
      anon_sym_RPAREN,
    ACTIONS(1475), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23140] = 3,
    ACTIONS(1477), 1,
      anon_sym_COMMA,
    STATE(625), 1,
      aux_sym_accum_type_repeat3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23152] = 3,
    ACTIONS(1479), 1,
      aux_sym_for_each_control_token1,
    ACTIONS(1481), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23164] = 3,
    ACTIONS(1215), 1,
      anon_sym_LBRACE,
    STATE(546), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23176] = 3,
    ACTIONS(1483), 1,
      sym_digit,
    STATE(504), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23188] = 3,
    ACTIONS(1485), 1,
      anon_sym_COMMA,
    STATE(636), 1,
      aux_sym_accum_type_repeat3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23200] = 2,
    ACTIONS(1270), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23210] = 2,
    ACTIONS(1256), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23220] = 3,
    ACTIONS(506), 1,
      anon_sym_DOT,
    STATE(211), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23232] = 3,
    ACTIONS(1487), 1,
      sym_digit,
    STATE(212), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23244] = 3,
    ACTIONS(1489), 1,
      anon_sym_DOT,
    ACTIONS(1491), 1,
      aux_sym_dml_sub_while_stmt_token3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23256] = 2,
    ACTIONS(1493), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23266] = 2,
    ACTIONS(1241), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23276] = 2,
    ACTIONS(1495), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23286] = 2,
    ACTIONS(1221), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23296] = 2,
    ACTIONS(1497), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23306] = 3,
    ACTIONS(1499), 1,
      anon_sym_COMMA,
    STATE(636), 1,
      aux_sym_accum_type_repeat3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23318] = 3,
    ACTIONS(1502), 1,
      anon_sym_RPAREN,
    ACTIONS(1504), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23330] = 3,
    ACTIONS(1506), 1,
      sym_digit,
    STATE(42), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23342] = 2,
    ACTIONS(1148), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23352] = 3,
    ACTIONS(1508), 1,
      sym_digit,
    STATE(404), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23364] = 3,
    ACTIONS(1215), 1,
      anon_sym_LBRACE,
    STATE(554), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23376] = 3,
    ACTIONS(1510), 1,
      anon_sym_LPAREN,
    STATE(792), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23388] = 3,
    ACTIONS(1510), 1,
      anon_sym_LPAREN,
    STATE(805), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23400] = 3,
    ACTIONS(1510), 1,
      anon_sym_LPAREN,
    STATE(814), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23412] = 3,
    ACTIONS(1510), 1,
      anon_sym_LPAREN,
    STATE(832), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23424] = 3,
    ACTIONS(1512), 1,
      aux_sym_create_query_token4,
    ACTIONS(1514), 1,
      aux_sym_create_query_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23436] = 2,
    ACTIONS(1516), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23446] = 3,
    ACTIONS(1510), 1,
      anon_sym_LPAREN,
    STATE(840), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23458] = 2,
    ACTIONS(1518), 1,
      aux_sym_create_query_token9,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23467] = 2,
    ACTIONS(1520), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23476] = 2,
    ACTIONS(1105), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23485] = 2,
    ACTIONS(1522), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23494] = 2,
    ACTIONS(1524), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23503] = 2,
    ACTIONS(1526), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23512] = 2,
    ACTIONS(1528), 1,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23521] = 2,
    ACTIONS(1530), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23530] = 2,
    ACTIONS(1532), 1,
      aux_sym_dml_sub_while_stmt_token3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23539] = 2,
    ACTIONS(1534), 1,
      anon_sym_DASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23548] = 2,
    ACTIONS(1536), 1,
      aux_sym_aggregator_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23557] = 2,
    ACTIONS(1002), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23566] = 2,
    ACTIONS(1268), 1,
      aux_sym_dml_sub_while_stmt_token3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23575] = 2,
    ACTIONS(1538), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23584] = 2,
    ACTIONS(1540), 1,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23593] = 2,
    ACTIONS(1542), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23602] = 2,
    ACTIONS(1544), 1,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23611] = 2,
    ACTIONS(1546), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23620] = 2,
    ACTIONS(1548), 1,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23629] = 2,
    ACTIONS(1550), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23638] = 2,
    ACTIONS(1552), 1,
      aux_sym_dml_sub_if_stmt_token2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23647] = 2,
    ACTIONS(1105), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23656] = 2,
    ACTIONS(1554), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23665] = 2,
    ACTIONS(1556), 1,
      aux_sym_for_each_control_token3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23674] = 2,
    ACTIONS(1558), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23683] = 2,
    ACTIONS(1560), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23692] = 2,
    ACTIONS(1562), 1,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23701] = 2,
    ACTIONS(1564), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23710] = 2,
    ACTIONS(1566), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23719] = 2,
    ACTIONS(1568), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23728] = 2,
    ACTIONS(1570), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23737] = 2,
    ACTIONS(1449), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23746] = 2,
    ACTIONS(1572), 1,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23755] = 2,
    ACTIONS(1574), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23764] = 2,
    ACTIONS(1576), 1,
      aux_sym_condition_token3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23773] = 2,
    ACTIONS(815), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23782] = 2,
    ACTIONS(1578), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23791] = 2,
    ACTIONS(1580), 1,
      aux_sym_dml_sub_if_stmt_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23800] = 2,
    ACTIONS(1582), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23809] = 2,
    ACTIONS(1584), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23818] = 2,
    ACTIONS(1586), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23827] = 2,
    ACTIONS(1588), 1,
      aux_sym_from_clause_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23836] = 2,
    ACTIONS(1590), 1,
      aux_sym_expr_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23845] = 2,
    ACTIONS(1592), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23854] = 2,
    ACTIONS(1594), 1,
      aux_sym_gsql_select_clause_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23863] = 2,
    ACTIONS(1031), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23872] = 2,
    ACTIONS(1596), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23881] = 2,
    ACTIONS(1598), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23890] = 2,
    ACTIONS(1600), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23899] = 2,
    ACTIONS(1602), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23908] = 2,
    ACTIONS(1604), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23917] = 2,
    ACTIONS(1606), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23926] = 2,
    ACTIONS(1608), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23935] = 2,
    ACTIONS(1610), 1,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23944] = 2,
    ACTIONS(1612), 1,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23953] = 2,
    ACTIONS(1614), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23962] = 2,
    ACTIONS(1616), 1,
      aux_sym_dml_sub_while_stmt_token3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23971] = 2,
    ACTIONS(1618), 1,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23980] = 2,
    ACTIONS(1620), 1,
      aux_sym_dml_sub_while_stmt_token3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23989] = 2,
    ACTIONS(1622), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23998] = 2,
    ACTIONS(1624), 1,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24007] = 2,
    ACTIONS(1626), 1,
      anon_sym_DASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24016] = 2,
    ACTIONS(1628), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24025] = 2,
    ACTIONS(1630), 1,
      anon_sym_DASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24034] = 2,
    ACTIONS(1632), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24043] = 2,
    ACTIONS(1634), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24052] = 2,
    ACTIONS(1636), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24061] = 2,
    ACTIONS(1638), 1,
      aux_sym_aggregator_token3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24070] = 2,
    ACTIONS(1640), 1,
      anon_sym_DASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24079] = 2,
    ACTIONS(436), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24088] = 2,
    ACTIONS(1642), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24097] = 2,
    ACTIONS(1644), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24106] = 2,
    ACTIONS(1646), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24115] = 2,
    ACTIONS(1648), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24124] = 2,
    ACTIONS(1648), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24133] = 2,
    ACTIONS(1650), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24142] = 2,
    ACTIONS(1652), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24151] = 2,
    ACTIONS(1654), 1,
      aux_sym_create_query_token9,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24160] = 2,
    ACTIONS(1656), 1,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24169] = 2,
    ACTIONS(1658), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24178] = 2,
    ACTIONS(1660), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24187] = 2,
    ACTIONS(909), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24196] = 2,
    ACTIONS(1662), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24205] = 2,
    ACTIONS(1076), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24214] = 2,
    ACTIONS(1664), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24223] = 2,
    ACTIONS(903), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24232] = 2,
    ACTIONS(1666), 1,
      aux_sym_dml_sub_while_stmt_token3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24241] = 2,
    ACTIONS(1668), 1,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24250] = 2,
    ACTIONS(1670), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24259] = 2,
    ACTIONS(1672), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24268] = 2,
    ACTIONS(1674), 1,
      aux_sym_expr_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24277] = 2,
    ACTIONS(1676), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24286] = 2,
    ACTIONS(1678), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24295] = 2,
    ACTIONS(1018), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24304] = 2,
    ACTIONS(1680), 1,
      aux_sym_aggregator_token2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24313] = 2,
    ACTIONS(1682), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24322] = 2,
    ACTIONS(1684), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24331] = 2,
    ACTIONS(1433), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24340] = 2,
    ACTIONS(1686), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24349] = 2,
    ACTIONS(1688), 1,
      aux_sym_aggregator_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24358] = 2,
    ACTIONS(1690), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24367] = 2,
    ACTIONS(1692), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24376] = 2,
    ACTIONS(1694), 1,
      aux_sym_create_query_token9,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24385] = 2,
    ACTIONS(1696), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24394] = 2,
    ACTIONS(1698), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24403] = 2,
    ACTIONS(1700), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24412] = 2,
    ACTIONS(1502), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24421] = 2,
    ACTIONS(1702), 1,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24430] = 2,
    ACTIONS(1704), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24439] = 2,
    ACTIONS(1706), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24448] = 2,
    ACTIONS(1708), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24457] = 2,
    ACTIONS(1710), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24466] = 2,
    ACTIONS(1712), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24475] = 2,
    ACTIONS(1714), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24484] = 2,
    ACTIONS(1716), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24493] = 2,
    ACTIONS(1718), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24502] = 2,
    ACTIONS(1720), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24511] = 2,
    ACTIONS(1722), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24520] = 2,
    ACTIONS(1724), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24529] = 2,
    ACTIONS(1726), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24538] = 2,
    ACTIONS(1728), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24547] = 2,
    ACTIONS(1730), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24556] = 2,
    ACTIONS(1732), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24565] = 2,
    ACTIONS(1734), 1,
      aux_sym_typedef_token2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24574] = 2,
    ACTIONS(1736), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24583] = 2,
    ACTIONS(1738), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24592] = 2,
    ACTIONS(1740), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24601] = 2,
    ACTIONS(1742), 1,
      aux_sym_create_query_token9,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24610] = 2,
    ACTIONS(1744), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24619] = 2,
    ACTIONS(1746), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24628] = 2,
    ACTIONS(1748), 1,
      aux_sym_create_query_token7,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24637] = 2,
    ACTIONS(1750), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24646] = 2,
    ACTIONS(1752), 1,
      aux_sym_create_query_token9,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24655] = 2,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24664] = 2,
    ACTIONS(996), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24673] = 2,
    ACTIONS(1754), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24682] = 2,
    ACTIONS(1756), 1,
      aux_sym_create_query_token7,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24691] = 2,
    ACTIONS(1758), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24700] = 2,
    ACTIONS(1760), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24709] = 2,
    ACTIONS(1762), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24718] = 2,
    ACTIONS(1764), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24727] = 2,
    ACTIONS(1766), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24736] = 2,
    ACTIONS(996), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24745] = 2,
    ACTIONS(1768), 1,
      aux_sym_create_query_token6,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24754] = 2,
    ACTIONS(1770), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24763] = 2,
    ACTIONS(1770), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24772] = 2,
    ACTIONS(1772), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24781] = 2,
    ACTIONS(1774), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24790] = 2,
    ACTIONS(1776), 1,
      sym_digit,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24799] = 2,
    ACTIONS(444), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24808] = 2,
    ACTIONS(1778), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24817] = 2,
    ACTIONS(1780), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24826] = 2,
    ACTIONS(1782), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24835] = 2,
    ACTIONS(1784), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24844] = 2,
    ACTIONS(1786), 1,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24853] = 2,
    ACTIONS(1788), 1,
      aux_sym_create_query_token7,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24862] = 2,
    ACTIONS(1790), 1,
      aux_sym_create_query_token6,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24871] = 2,
    ACTIONS(1792), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24880] = 2,
    ACTIONS(1794), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24889] = 2,
    ACTIONS(1119), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24898] = 2,
    ACTIONS(1796), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24907] = 2,
    ACTIONS(1798), 1,
      aux_sym_create_query_token6,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24916] = 2,
    ACTIONS(1800), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24925] = 2,
    ACTIONS(1802), 1,
      aux_sym_create_query_token7,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24934] = 2,
    ACTIONS(1121), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24943] = 2,
    ACTIONS(1804), 1,
      aux_sym_create_query_token6,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24952] = 2,
    ACTIONS(1806), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24961] = 2,
    ACTIONS(1808), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24970] = 2,
    ACTIONS(1810), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24979] = 2,
    ACTIONS(1812), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24988] = 2,
    ACTIONS(1814), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24997] = 2,
    ACTIONS(1816), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25006] = 2,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25015] = 2,
    ACTIONS(1818), 1,
      aux_sym_create_query_token7,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25024] = 2,
    ACTIONS(1820), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25033] = 2,
    ACTIONS(1822), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25042] = 2,
    ACTIONS(1824), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25051] = 2,
    ACTIONS(1826), 1,
      aux_sym_dml_sub_if_stmt_token4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25060] = 2,
    ACTIONS(1828), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25069] = 2,
    ACTIONS(1830), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25078] = 2,
    ACTIONS(1832), 1,
      aux_sym_create_query_token6,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25087] = 2,
    ACTIONS(1834), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25096] = 2,
    ACTIONS(1836), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25105] = 2,
    ACTIONS(1838), 1,
      aux_sym_create_query_token6,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25114] = 2,
    ACTIONS(1840), 1,
      aux_sym_dml_sub_while_stmt_token3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25123] = 2,
    ACTIONS(1842), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25132] = 2,
    ACTIONS(1844), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25141] = 2,
    ACTIONS(1846), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25150] = 2,
    ACTIONS(1848), 1,
      aux_sym_create_query_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25159] = 2,
    ACTIONS(1850), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25168] = 2,
    ACTIONS(1852), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25177] = 2,
    ACTIONS(1854), 1,
      aux_sym_create_query_token6,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25186] = 2,
    ACTIONS(1856), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25195] = 2,
    ACTIONS(1858), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25204] = 2,
    ACTIONS(1860), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25213] = 2,
    ACTIONS(1862), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25222] = 2,
    ACTIONS(1864), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25231] = 2,
    ACTIONS(1866), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25240] = 2,
    ACTIONS(1868), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25249] = 2,
    ACTIONS(1870), 1,
      aux_sym_create_query_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25258] = 2,
    ACTIONS(1872), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25267] = 2,
    ACTIONS(1874), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25276] = 2,
    ACTIONS(1876), 1,
      aux_sym_create_query_token3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25285] = 2,
    ACTIONS(1878), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25294] = 2,
    ACTIONS(1880), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25303] = 2,
    ACTIONS(1882), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25312] = 2,
    ACTIONS(1884), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25321] = 2,
    ACTIONS(1886), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25330] = 2,
    ACTIONS(1888), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25339] = 2,
    ACTIONS(1890), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25348] = 2,
    ACTIONS(1892), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25357] = 2,
    ACTIONS(1894), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25366] = 2,
    ACTIONS(1896), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25375] = 2,
    ACTIONS(1898), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25384] = 2,
    ACTIONS(1900), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25393] = 2,
    ACTIONS(1902), 1,
      aux_sym_create_query_token5,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25402] = 2,
    ACTIONS(1904), 1,
      aux_sym_expr_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25411] = 2,
    ACTIONS(1906), 1,
      aux_sym_expr_token1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 127,
  [SMALL_STATE(6)] = 254,
  [SMALL_STATE(7)] = 381,
  [SMALL_STATE(8)] = 504,
  [SMALL_STATE(9)] = 627,
  [SMALL_STATE(10)] = 750,
  [SMALL_STATE(11)] = 873,
  [SMALL_STATE(12)] = 996,
  [SMALL_STATE(13)] = 1119,
  [SMALL_STATE(14)] = 1242,
  [SMALL_STATE(15)] = 1365,
  [SMALL_STATE(16)] = 1488,
  [SMALL_STATE(17)] = 1611,
  [SMALL_STATE(18)] = 1734,
  [SMALL_STATE(19)] = 1857,
  [SMALL_STATE(20)] = 1914,
  [SMALL_STATE(21)] = 1975,
  [SMALL_STATE(22)] = 2033,
  [SMALL_STATE(23)] = 2093,
  [SMALL_STATE(24)] = 2151,
  [SMALL_STATE(25)] = 2207,
  [SMALL_STATE(26)] = 2265,
  [SMALL_STATE(27)] = 2323,
  [SMALL_STATE(28)] = 2379,
  [SMALL_STATE(29)] = 2439,
  [SMALL_STATE(30)] = 2495,
  [SMALL_STATE(31)] = 2548,
  [SMALL_STATE(32)] = 2603,
  [SMALL_STATE(33)] = 2656,
  [SMALL_STATE(34)] = 2709,
  [SMALL_STATE(35)] = 2762,
  [SMALL_STATE(36)] = 2818,
  [SMALL_STATE(37)] = 2876,
  [SMALL_STATE(38)] = 2930,
  [SMALL_STATE(39)] = 2982,
  [SMALL_STATE(40)] = 3040,
  [SMALL_STATE(41)] = 3092,
  [SMALL_STATE(42)] = 3144,
  [SMALL_STATE(43)] = 3199,
  [SMALL_STATE(44)] = 3254,
  [SMALL_STATE(45)] = 3309,
  [SMALL_STATE(46)] = 3364,
  [SMALL_STATE(47)] = 3419,
  [SMALL_STATE(48)] = 3474,
  [SMALL_STATE(49)] = 3526,
  [SMALL_STATE(50)] = 3576,
  [SMALL_STATE(51)] = 3628,
  [SMALL_STATE(52)] = 3682,
  [SMALL_STATE(53)] = 3732,
  [SMALL_STATE(54)] = 3781,
  [SMALL_STATE(55)] = 3830,
  [SMALL_STATE(56)] = 3879,
  [SMALL_STATE(57)] = 3928,
  [SMALL_STATE(58)] = 3977,
  [SMALL_STATE(59)] = 4026,
  [SMALL_STATE(60)] = 4075,
  [SMALL_STATE(61)] = 4124,
  [SMALL_STATE(62)] = 4173,
  [SMALL_STATE(63)] = 4222,
  [SMALL_STATE(64)] = 4271,
  [SMALL_STATE(65)] = 4320,
  [SMALL_STATE(66)] = 4369,
  [SMALL_STATE(67)] = 4418,
  [SMALL_STATE(68)] = 4467,
  [SMALL_STATE(69)] = 4516,
  [SMALL_STATE(70)] = 4565,
  [SMALL_STATE(71)] = 4613,
  [SMALL_STATE(72)] = 4715,
  [SMALL_STATE(73)] = 4763,
  [SMALL_STATE(74)] = 4810,
  [SMALL_STATE(75)] = 4864,
  [SMALL_STATE(76)] = 4919,
  [SMALL_STATE(77)] = 5015,
  [SMALL_STATE(78)] = 5111,
  [SMALL_STATE(79)] = 5202,
  [SMALL_STATE(80)] = 5293,
  [SMALL_STATE(81)] = 5384,
  [SMALL_STATE(82)] = 5477,
  [SMALL_STATE(83)] = 5570,
  [SMALL_STATE(84)] = 5661,
  [SMALL_STATE(85)] = 5730,
  [SMALL_STATE(86)] = 5823,
  [SMALL_STATE(87)] = 5916,
  [SMALL_STATE(88)] = 6007,
  [SMALL_STATE(89)] = 6076,
  [SMALL_STATE(90)] = 6169,
  [SMALL_STATE(91)] = 6262,
  [SMALL_STATE(92)] = 6331,
  [SMALL_STATE(93)] = 6422,
  [SMALL_STATE(94)] = 6513,
  [SMALL_STATE(95)] = 6604,
  [SMALL_STATE(96)] = 6697,
  [SMALL_STATE(97)] = 6790,
  [SMALL_STATE(98)] = 6881,
  [SMALL_STATE(99)] = 6974,
  [SMALL_STATE(100)] = 7065,
  [SMALL_STATE(101)] = 7156,
  [SMALL_STATE(102)] = 7249,
  [SMALL_STATE(103)] = 7342,
  [SMALL_STATE(104)] = 7435,
  [SMALL_STATE(105)] = 7528,
  [SMALL_STATE(106)] = 7619,
  [SMALL_STATE(107)] = 7688,
  [SMALL_STATE(108)] = 7781,
  [SMALL_STATE(109)] = 7850,
  [SMALL_STATE(110)] = 7943,
  [SMALL_STATE(111)] = 8012,
  [SMALL_STATE(112)] = 8081,
  [SMALL_STATE(113)] = 8150,
  [SMALL_STATE(114)] = 8241,
  [SMALL_STATE(115)] = 8332,
  [SMALL_STATE(116)] = 8401,
  [SMALL_STATE(117)] = 8492,
  [SMALL_STATE(118)] = 8561,
  [SMALL_STATE(119)] = 8630,
  [SMALL_STATE(120)] = 8699,
  [SMALL_STATE(121)] = 8790,
  [SMALL_STATE(122)] = 8883,
  [SMALL_STATE(123)] = 8976,
  [SMALL_STATE(124)] = 9067,
  [SMALL_STATE(125)] = 9158,
  [SMALL_STATE(126)] = 9249,
  [SMALL_STATE(127)] = 9342,
  [SMALL_STATE(128)] = 9433,
  [SMALL_STATE(129)] = 9524,
  [SMALL_STATE(130)] = 9617,
  [SMALL_STATE(131)] = 9708,
  [SMALL_STATE(132)] = 9796,
  [SMALL_STATE(133)] = 9884,
  [SMALL_STATE(134)] = 9946,
  [SMALL_STATE(135)] = 10034,
  [SMALL_STATE(136)] = 10122,
  [SMALL_STATE(137)] = 10210,
  [SMALL_STATE(138)] = 10298,
  [SMALL_STATE(139)] = 10386,
  [SMALL_STATE(140)] = 10474,
  [SMALL_STATE(141)] = 10562,
  [SMALL_STATE(142)] = 10628,
  [SMALL_STATE(143)] = 10716,
  [SMALL_STATE(144)] = 10801,
  [SMALL_STATE(145)] = 10886,
  [SMALL_STATE(146)] = 10971,
  [SMALL_STATE(147)] = 11056,
  [SMALL_STATE(148)] = 11141,
  [SMALL_STATE(149)] = 11226,
  [SMALL_STATE(150)] = 11311,
  [SMALL_STATE(151)] = 11396,
  [SMALL_STATE(152)] = 11481,
  [SMALL_STATE(153)] = 11566,
  [SMALL_STATE(154)] = 11651,
  [SMALL_STATE(155)] = 11736,
  [SMALL_STATE(156)] = 11821,
  [SMALL_STATE(157)] = 11906,
  [SMALL_STATE(158)] = 11991,
  [SMALL_STATE(159)] = 12038,
  [SMALL_STATE(160)] = 12087,
  [SMALL_STATE(161)] = 12172,
  [SMALL_STATE(162)] = 12257,
  [SMALL_STATE(163)] = 12342,
  [SMALL_STATE(164)] = 12427,
  [SMALL_STATE(165)] = 12512,
  [SMALL_STATE(166)] = 12597,
  [SMALL_STATE(167)] = 12682,
  [SMALL_STATE(168)] = 12767,
  [SMALL_STATE(169)] = 12852,
  [SMALL_STATE(170)] = 12937,
  [SMALL_STATE(171)] = 12984,
  [SMALL_STATE(172)] = 13069,
  [SMALL_STATE(173)] = 13154,
  [SMALL_STATE(174)] = 13239,
  [SMALL_STATE(175)] = 13282,
  [SMALL_STATE(176)] = 13367,
  [SMALL_STATE(177)] = 13411,
  [SMALL_STATE(178)] = 13457,
  [SMALL_STATE(179)] = 13503,
  [SMALL_STATE(180)] = 13567,
  [SMALL_STATE(181)] = 13611,
  [SMALL_STATE(182)] = 13655,
  [SMALL_STATE(183)] = 13697,
  [SMALL_STATE(184)] = 13739,
  [SMALL_STATE(185)] = 13781,
  [SMALL_STATE(186)] = 13845,
  [SMALL_STATE(187)] = 13887,
  [SMALL_STATE(188)] = 13931,
  [SMALL_STATE(189)] = 13992,
  [SMALL_STATE(190)] = 14031,
  [SMALL_STATE(191)] = 14070,
  [SMALL_STATE(192)] = 14111,
  [SMALL_STATE(193)] = 14152,
  [SMALL_STATE(194)] = 14195,
  [SMALL_STATE(195)] = 14234,
  [SMALL_STATE(196)] = 14273,
  [SMALL_STATE(197)] = 14312,
  [SMALL_STATE(198)] = 14352,
  [SMALL_STATE(199)] = 14396,
  [SMALL_STATE(200)] = 14438,
  [SMALL_STATE(201)] = 14478,
  [SMALL_STATE(202)] = 14522,
  [SMALL_STATE(203)] = 14560,
  [SMALL_STATE(204)] = 14626,
  [SMALL_STATE(205)] = 14664,
  [SMALL_STATE(206)] = 14730,
  [SMALL_STATE(207)] = 14768,
  [SMALL_STATE(208)] = 14809,
  [SMALL_STATE(209)] = 14850,
  [SMALL_STATE(210)] = 14891,
  [SMALL_STATE(211)] = 14932,
  [SMALL_STATE(212)] = 14973,
  [SMALL_STATE(213)] = 15014,
  [SMALL_STATE(214)] = 15050,
  [SMALL_STATE(215)] = 15088,
  [SMALL_STATE(216)] = 15126,
  [SMALL_STATE(217)] = 15162,
  [SMALL_STATE(218)] = 15204,
  [SMALL_STATE(219)] = 15242,
  [SMALL_STATE(220)] = 15277,
  [SMALL_STATE(221)] = 15312,
  [SMALL_STATE(222)] = 15347,
  [SMALL_STATE(223)] = 15382,
  [SMALL_STATE(224)] = 15417,
  [SMALL_STATE(225)] = 15452,
  [SMALL_STATE(226)] = 15487,
  [SMALL_STATE(227)] = 15522,
  [SMALL_STATE(228)] = 15557,
  [SMALL_STATE(229)] = 15592,
  [SMALL_STATE(230)] = 15627,
  [SMALL_STATE(231)] = 15662,
  [SMALL_STATE(232)] = 15697,
  [SMALL_STATE(233)] = 15732,
  [SMALL_STATE(234)] = 15767,
  [SMALL_STATE(235)] = 15804,
  [SMALL_STATE(236)] = 15839,
  [SMALL_STATE(237)] = 15874,
  [SMALL_STATE(238)] = 15908,
  [SMALL_STATE(239)] = 15942,
  [SMALL_STATE(240)] = 15976,
  [SMALL_STATE(241)] = 16015,
  [SMALL_STATE(242)] = 16054,
  [SMALL_STATE(243)] = 16082,
  [SMALL_STATE(244)] = 16122,
  [SMALL_STATE(245)] = 16150,
  [SMALL_STATE(246)] = 16181,
  [SMALL_STATE(247)] = 16216,
  [SMALL_STATE(248)] = 16251,
  [SMALL_STATE(249)] = 16282,
  [SMALL_STATE(250)] = 16319,
  [SMALL_STATE(251)] = 16356,
  [SMALL_STATE(252)] = 16393,
  [SMALL_STATE(253)] = 16424,
  [SMALL_STATE(254)] = 16455,
  [SMALL_STATE(255)] = 16490,
  [SMALL_STATE(256)] = 16532,
  [SMALL_STATE(257)] = 16574,
  [SMALL_STATE(258)] = 16616,
  [SMALL_STATE(259)] = 16658,
  [SMALL_STATE(260)] = 16692,
  [SMALL_STATE(261)] = 16721,
  [SMALL_STATE(262)] = 16750,
  [SMALL_STATE(263)] = 16779,
  [SMALL_STATE(264)] = 16806,
  [SMALL_STATE(265)] = 16834,
  [SMALL_STATE(266)] = 16860,
  [SMALL_STATE(267)] = 16888,
  [SMALL_STATE(268)] = 16914,
  [SMALL_STATE(269)] = 16942,
  [SMALL_STATE(270)] = 16976,
  [SMALL_STATE(271)] = 17022,
  [SMALL_STATE(272)] = 17056,
  [SMALL_STATE(273)] = 17080,
  [SMALL_STATE(274)] = 17104,
  [SMALL_STATE(275)] = 17130,
  [SMALL_STATE(276)] = 17162,
  [SMALL_STATE(277)] = 17188,
  [SMALL_STATE(278)] = 17216,
  [SMALL_STATE(279)] = 17244,
  [SMALL_STATE(280)] = 17268,
  [SMALL_STATE(281)] = 17312,
  [SMALL_STATE(282)] = 17336,
  [SMALL_STATE(283)] = 17366,
  [SMALL_STATE(284)] = 17390,
  [SMALL_STATE(285)] = 17417,
  [SMALL_STATE(286)] = 17444,
  [SMALL_STATE(287)] = 17473,
  [SMALL_STATE(288)] = 17498,
  [SMALL_STATE(289)] = 17523,
  [SMALL_STATE(290)] = 17546,
  [SMALL_STATE(291)] = 17573,
  [SMALL_STATE(292)] = 17598,
  [SMALL_STATE(293)] = 17623,
  [SMALL_STATE(294)] = 17644,
  [SMALL_STATE(295)] = 17667,
  [SMALL_STATE(296)] = 17698,
  [SMALL_STATE(297)] = 17719,
  [SMALL_STATE(298)] = 17748,
  [SMALL_STATE(299)] = 17773,
  [SMALL_STATE(300)] = 17813,
  [SMALL_STATE(301)] = 17853,
  [SMALL_STATE(302)] = 17877,
  [SMALL_STATE(303)] = 17903,
  [SMALL_STATE(304)] = 17923,
  [SMALL_STATE(305)] = 17963,
  [SMALL_STATE(306)] = 18003,
  [SMALL_STATE(307)] = 18031,
  [SMALL_STATE(308)] = 18056,
  [SMALL_STATE(309)] = 18081,
  [SMALL_STATE(310)] = 18106,
  [SMALL_STATE(311)] = 18131,
  [SMALL_STATE(312)] = 18156,
  [SMALL_STATE(313)] = 18181,
  [SMALL_STATE(314)] = 18206,
  [SMALL_STATE(315)] = 18231,
  [SMALL_STATE(316)] = 18256,
  [SMALL_STATE(317)] = 18281,
  [SMALL_STATE(318)] = 18318,
  [SMALL_STATE(319)] = 18342,
  [SMALL_STATE(320)] = 18376,
  [SMALL_STATE(321)] = 18410,
  [SMALL_STATE(322)] = 18444,
  [SMALL_STATE(323)] = 18462,
  [SMALL_STATE(324)] = 18496,
  [SMALL_STATE(325)] = 18530,
  [SMALL_STATE(326)] = 18548,
  [SMALL_STATE(327)] = 18566,
  [SMALL_STATE(328)] = 18600,
  [SMALL_STATE(329)] = 18618,
  [SMALL_STATE(330)] = 18636,
  [SMALL_STATE(331)] = 18657,
  [SMALL_STATE(332)] = 18678,
  [SMALL_STATE(333)] = 18709,
  [SMALL_STATE(334)] = 18727,
  [SMALL_STATE(335)] = 18747,
  [SMALL_STATE(336)] = 18767,
  [SMALL_STATE(337)] = 18787,
  [SMALL_STATE(338)] = 18803,
  [SMALL_STATE(339)] = 18821,
  [SMALL_STATE(340)] = 18837,
  [SMALL_STATE(341)] = 18853,
  [SMALL_STATE(342)] = 18869,
  [SMALL_STATE(343)] = 18885,
  [SMALL_STATE(344)] = 18905,
  [SMALL_STATE(345)] = 18933,
  [SMALL_STATE(346)] = 18953,
  [SMALL_STATE(347)] = 18971,
  [SMALL_STATE(348)] = 18987,
  [SMALL_STATE(349)] = 19007,
  [SMALL_STATE(350)] = 19027,
  [SMALL_STATE(351)] = 19052,
  [SMALL_STATE(352)] = 19079,
  [SMALL_STATE(353)] = 19106,
  [SMALL_STATE(354)] = 19125,
  [SMALL_STATE(355)] = 19150,
  [SMALL_STATE(356)] = 19171,
  [SMALL_STATE(357)] = 19196,
  [SMALL_STATE(358)] = 19211,
  [SMALL_STATE(359)] = 19226,
  [SMALL_STATE(360)] = 19241,
  [SMALL_STATE(361)] = 19266,
  [SMALL_STATE(362)] = 19281,
  [SMALL_STATE(363)] = 19296,
  [SMALL_STATE(364)] = 19311,
  [SMALL_STATE(365)] = 19326,
  [SMALL_STATE(366)] = 19347,
  [SMALL_STATE(367)] = 19362,
  [SMALL_STATE(368)] = 19377,
  [SMALL_STATE(369)] = 19392,
  [SMALL_STATE(370)] = 19411,
  [SMALL_STATE(371)] = 19426,
  [SMALL_STATE(372)] = 19453,
  [SMALL_STATE(373)] = 19468,
  [SMALL_STATE(374)] = 19483,
  [SMALL_STATE(375)] = 19502,
  [SMALL_STATE(376)] = 19517,
  [SMALL_STATE(377)] = 19532,
  [SMALL_STATE(378)] = 19548,
  [SMALL_STATE(379)] = 19572,
  [SMALL_STATE(380)] = 19596,
  [SMALL_STATE(381)] = 19618,
  [SMALL_STATE(382)] = 19642,
  [SMALL_STATE(383)] = 19664,
  [SMALL_STATE(384)] = 19688,
  [SMALL_STATE(385)] = 19710,
  [SMALL_STATE(386)] = 19724,
  [SMALL_STATE(387)] = 19748,
  [SMALL_STATE(388)] = 19764,
  [SMALL_STATE(389)] = 19788,
  [SMALL_STATE(390)] = 19812,
  [SMALL_STATE(391)] = 19836,
  [SMALL_STATE(392)] = 19860,
  [SMALL_STATE(393)] = 19884,
  [SMALL_STATE(394)] = 19906,
  [SMALL_STATE(395)] = 19926,
  [SMALL_STATE(396)] = 19950,
  [SMALL_STATE(397)] = 19972,
  [SMALL_STATE(398)] = 19994,
  [SMALL_STATE(399)] = 20007,
  [SMALL_STATE(400)] = 20020,
  [SMALL_STATE(401)] = 20033,
  [SMALL_STATE(402)] = 20054,
  [SMALL_STATE(403)] = 20071,
  [SMALL_STATE(404)] = 20086,
  [SMALL_STATE(405)] = 20103,
  [SMALL_STATE(406)] = 20120,
  [SMALL_STATE(407)] = 20133,
  [SMALL_STATE(408)] = 20154,
  [SMALL_STATE(409)] = 20175,
  [SMALL_STATE(410)] = 20192,
  [SMALL_STATE(411)] = 20205,
  [SMALL_STATE(412)] = 20226,
  [SMALL_STATE(413)] = 20243,
  [SMALL_STATE(414)] = 20258,
  [SMALL_STATE(415)] = 20271,
  [SMALL_STATE(416)] = 20284,
  [SMALL_STATE(417)] = 20301,
  [SMALL_STATE(418)] = 20318,
  [SMALL_STATE(419)] = 20331,
  [SMALL_STATE(420)] = 20344,
  [SMALL_STATE(421)] = 20357,
  [SMALL_STATE(422)] = 20378,
  [SMALL_STATE(423)] = 20399,
  [SMALL_STATE(424)] = 20420,
  [SMALL_STATE(425)] = 20433,
  [SMALL_STATE(426)] = 20446,
  [SMALL_STATE(427)] = 20465,
  [SMALL_STATE(428)] = 20477,
  [SMALL_STATE(429)] = 20493,
  [SMALL_STATE(430)] = 20509,
  [SMALL_STATE(431)] = 20525,
  [SMALL_STATE(432)] = 20539,
  [SMALL_STATE(433)] = 20553,
  [SMALL_STATE(434)] = 20569,
  [SMALL_STATE(435)] = 20587,
  [SMALL_STATE(436)] = 20601,
  [SMALL_STATE(437)] = 20615,
  [SMALL_STATE(438)] = 20629,
  [SMALL_STATE(439)] = 20645,
  [SMALL_STATE(440)] = 20659,
  [SMALL_STATE(441)] = 20673,
  [SMALL_STATE(442)] = 20687,
  [SMALL_STATE(443)] = 20701,
  [SMALL_STATE(444)] = 20713,
  [SMALL_STATE(445)] = 20731,
  [SMALL_STATE(446)] = 20749,
  [SMALL_STATE(447)] = 20765,
  [SMALL_STATE(448)] = 20783,
  [SMALL_STATE(449)] = 20799,
  [SMALL_STATE(450)] = 20817,
  [SMALL_STATE(451)] = 20829,
  [SMALL_STATE(452)] = 20847,
  [SMALL_STATE(453)] = 20861,
  [SMALL_STATE(454)] = 20879,
  [SMALL_STATE(455)] = 20897,
  [SMALL_STATE(456)] = 20915,
  [SMALL_STATE(457)] = 20927,
  [SMALL_STATE(458)] = 20943,
  [SMALL_STATE(459)] = 20955,
  [SMALL_STATE(460)] = 20971,
  [SMALL_STATE(461)] = 20989,
  [SMALL_STATE(462)] = 21005,
  [SMALL_STATE(463)] = 21021,
  [SMALL_STATE(464)] = 21039,
  [SMALL_STATE(465)] = 21055,
  [SMALL_STATE(466)] = 21073,
  [SMALL_STATE(467)] = 21085,
  [SMALL_STATE(468)] = 21101,
  [SMALL_STATE(469)] = 21115,
  [SMALL_STATE(470)] = 21129,
  [SMALL_STATE(471)] = 21143,
  [SMALL_STATE(472)] = 21157,
  [SMALL_STATE(473)] = 21171,
  [SMALL_STATE(474)] = 21185,
  [SMALL_STATE(475)] = 21199,
  [SMALL_STATE(476)] = 21217,
  [SMALL_STATE(477)] = 21232,
  [SMALL_STATE(478)] = 21243,
  [SMALL_STATE(479)] = 21258,
  [SMALL_STATE(480)] = 21269,
  [SMALL_STATE(481)] = 21284,
  [SMALL_STATE(482)] = 21297,
  [SMALL_STATE(483)] = 21312,
  [SMALL_STATE(484)] = 21327,
  [SMALL_STATE(485)] = 21342,
  [SMALL_STATE(486)] = 21357,
  [SMALL_STATE(487)] = 21370,
  [SMALL_STATE(488)] = 21385,
  [SMALL_STATE(489)] = 21396,
  [SMALL_STATE(490)] = 21411,
  [SMALL_STATE(491)] = 21422,
  [SMALL_STATE(492)] = 21435,
  [SMALL_STATE(493)] = 21448,
  [SMALL_STATE(494)] = 21459,
  [SMALL_STATE(495)] = 21472,
  [SMALL_STATE(496)] = 21487,
  [SMALL_STATE(497)] = 21502,
  [SMALL_STATE(498)] = 21513,
  [SMALL_STATE(499)] = 21528,
  [SMALL_STATE(500)] = 21543,
  [SMALL_STATE(501)] = 21558,
  [SMALL_STATE(502)] = 21569,
  [SMALL_STATE(503)] = 21584,
  [SMALL_STATE(504)] = 21599,
  [SMALL_STATE(505)] = 21614,
  [SMALL_STATE(506)] = 21629,
  [SMALL_STATE(507)] = 21644,
  [SMALL_STATE(508)] = 21659,
  [SMALL_STATE(509)] = 21674,
  [SMALL_STATE(510)] = 21689,
  [SMALL_STATE(511)] = 21704,
  [SMALL_STATE(512)] = 21719,
  [SMALL_STATE(513)] = 21734,
  [SMALL_STATE(514)] = 21749,
  [SMALL_STATE(515)] = 21762,
  [SMALL_STATE(516)] = 21777,
  [SMALL_STATE(517)] = 21792,
  [SMALL_STATE(518)] = 21807,
  [SMALL_STATE(519)] = 21822,
  [SMALL_STATE(520)] = 21833,
  [SMALL_STATE(521)] = 21844,
  [SMALL_STATE(522)] = 21859,
  [SMALL_STATE(523)] = 21874,
  [SMALL_STATE(524)] = 21889,
  [SMALL_STATE(525)] = 21904,
  [SMALL_STATE(526)] = 21919,
  [SMALL_STATE(527)] = 21930,
  [SMALL_STATE(528)] = 21941,
  [SMALL_STATE(529)] = 21956,
  [SMALL_STATE(530)] = 21971,
  [SMALL_STATE(531)] = 21986,
  [SMALL_STATE(532)] = 22001,
  [SMALL_STATE(533)] = 22012,
  [SMALL_STATE(534)] = 22023,
  [SMALL_STATE(535)] = 22034,
  [SMALL_STATE(536)] = 22049,
  [SMALL_STATE(537)] = 22064,
  [SMALL_STATE(538)] = 22075,
  [SMALL_STATE(539)] = 22090,
  [SMALL_STATE(540)] = 22105,
  [SMALL_STATE(541)] = 22120,
  [SMALL_STATE(542)] = 22133,
  [SMALL_STATE(543)] = 22144,
  [SMALL_STATE(544)] = 22159,
  [SMALL_STATE(545)] = 22170,
  [SMALL_STATE(546)] = 22185,
  [SMALL_STATE(547)] = 22196,
  [SMALL_STATE(548)] = 22209,
  [SMALL_STATE(549)] = 22224,
  [SMALL_STATE(550)] = 22239,
  [SMALL_STATE(551)] = 22254,
  [SMALL_STATE(552)] = 22269,
  [SMALL_STATE(553)] = 22284,
  [SMALL_STATE(554)] = 22297,
  [SMALL_STATE(555)] = 22308,
  [SMALL_STATE(556)] = 22321,
  [SMALL_STATE(557)] = 22336,
  [SMALL_STATE(558)] = 22351,
  [SMALL_STATE(559)] = 22366,
  [SMALL_STATE(560)] = 22381,
  [SMALL_STATE(561)] = 22394,
  [SMALL_STATE(562)] = 22409,
  [SMALL_STATE(563)] = 22422,
  [SMALL_STATE(564)] = 22437,
  [SMALL_STATE(565)] = 22452,
  [SMALL_STATE(566)] = 22467,
  [SMALL_STATE(567)] = 22482,
  [SMALL_STATE(568)] = 22497,
  [SMALL_STATE(569)] = 22510,
  [SMALL_STATE(570)] = 22521,
  [SMALL_STATE(571)] = 22532,
  [SMALL_STATE(572)] = 22547,
  [SMALL_STATE(573)] = 22562,
  [SMALL_STATE(574)] = 22575,
  [SMALL_STATE(575)] = 22586,
  [SMALL_STATE(576)] = 22599,
  [SMALL_STATE(577)] = 22610,
  [SMALL_STATE(578)] = 22621,
  [SMALL_STATE(579)] = 22636,
  [SMALL_STATE(580)] = 22651,
  [SMALL_STATE(581)] = 22662,
  [SMALL_STATE(582)] = 22677,
  [SMALL_STATE(583)] = 22690,
  [SMALL_STATE(584)] = 22703,
  [SMALL_STATE(585)] = 22718,
  [SMALL_STATE(586)] = 22733,
  [SMALL_STATE(587)] = 22748,
  [SMALL_STATE(588)] = 22763,
  [SMALL_STATE(589)] = 22778,
  [SMALL_STATE(590)] = 22790,
  [SMALL_STATE(591)] = 22802,
  [SMALL_STATE(592)] = 22814,
  [SMALL_STATE(593)] = 22826,
  [SMALL_STATE(594)] = 22838,
  [SMALL_STATE(595)] = 22850,
  [SMALL_STATE(596)] = 22862,
  [SMALL_STATE(597)] = 22874,
  [SMALL_STATE(598)] = 22884,
  [SMALL_STATE(599)] = 22896,
  [SMALL_STATE(600)] = 22908,
  [SMALL_STATE(601)] = 22920,
  [SMALL_STATE(602)] = 22930,
  [SMALL_STATE(603)] = 22942,
  [SMALL_STATE(604)] = 22954,
  [SMALL_STATE(605)] = 22964,
  [SMALL_STATE(606)] = 22976,
  [SMALL_STATE(607)] = 22986,
  [SMALL_STATE(608)] = 22996,
  [SMALL_STATE(609)] = 23008,
  [SMALL_STATE(610)] = 23020,
  [SMALL_STATE(611)] = 23030,
  [SMALL_STATE(612)] = 23042,
  [SMALL_STATE(613)] = 23052,
  [SMALL_STATE(614)] = 23062,
  [SMALL_STATE(615)] = 23074,
  [SMALL_STATE(616)] = 23084,
  [SMALL_STATE(617)] = 23096,
  [SMALL_STATE(618)] = 23106,
  [SMALL_STATE(619)] = 23118,
  [SMALL_STATE(620)] = 23128,
  [SMALL_STATE(621)] = 23140,
  [SMALL_STATE(622)] = 23152,
  [SMALL_STATE(623)] = 23164,
  [SMALL_STATE(624)] = 23176,
  [SMALL_STATE(625)] = 23188,
  [SMALL_STATE(626)] = 23200,
  [SMALL_STATE(627)] = 23210,
  [SMALL_STATE(628)] = 23220,
  [SMALL_STATE(629)] = 23232,
  [SMALL_STATE(630)] = 23244,
  [SMALL_STATE(631)] = 23256,
  [SMALL_STATE(632)] = 23266,
  [SMALL_STATE(633)] = 23276,
  [SMALL_STATE(634)] = 23286,
  [SMALL_STATE(635)] = 23296,
  [SMALL_STATE(636)] = 23306,
  [SMALL_STATE(637)] = 23318,
  [SMALL_STATE(638)] = 23330,
  [SMALL_STATE(639)] = 23342,
  [SMALL_STATE(640)] = 23352,
  [SMALL_STATE(641)] = 23364,
  [SMALL_STATE(642)] = 23376,
  [SMALL_STATE(643)] = 23388,
  [SMALL_STATE(644)] = 23400,
  [SMALL_STATE(645)] = 23412,
  [SMALL_STATE(646)] = 23424,
  [SMALL_STATE(647)] = 23436,
  [SMALL_STATE(648)] = 23446,
  [SMALL_STATE(649)] = 23458,
  [SMALL_STATE(650)] = 23467,
  [SMALL_STATE(651)] = 23476,
  [SMALL_STATE(652)] = 23485,
  [SMALL_STATE(653)] = 23494,
  [SMALL_STATE(654)] = 23503,
  [SMALL_STATE(655)] = 23512,
  [SMALL_STATE(656)] = 23521,
  [SMALL_STATE(657)] = 23530,
  [SMALL_STATE(658)] = 23539,
  [SMALL_STATE(659)] = 23548,
  [SMALL_STATE(660)] = 23557,
  [SMALL_STATE(661)] = 23566,
  [SMALL_STATE(662)] = 23575,
  [SMALL_STATE(663)] = 23584,
  [SMALL_STATE(664)] = 23593,
  [SMALL_STATE(665)] = 23602,
  [SMALL_STATE(666)] = 23611,
  [SMALL_STATE(667)] = 23620,
  [SMALL_STATE(668)] = 23629,
  [SMALL_STATE(669)] = 23638,
  [SMALL_STATE(670)] = 23647,
  [SMALL_STATE(671)] = 23656,
  [SMALL_STATE(672)] = 23665,
  [SMALL_STATE(673)] = 23674,
  [SMALL_STATE(674)] = 23683,
  [SMALL_STATE(675)] = 23692,
  [SMALL_STATE(676)] = 23701,
  [SMALL_STATE(677)] = 23710,
  [SMALL_STATE(678)] = 23719,
  [SMALL_STATE(679)] = 23728,
  [SMALL_STATE(680)] = 23737,
  [SMALL_STATE(681)] = 23746,
  [SMALL_STATE(682)] = 23755,
  [SMALL_STATE(683)] = 23764,
  [SMALL_STATE(684)] = 23773,
  [SMALL_STATE(685)] = 23782,
  [SMALL_STATE(686)] = 23791,
  [SMALL_STATE(687)] = 23800,
  [SMALL_STATE(688)] = 23809,
  [SMALL_STATE(689)] = 23818,
  [SMALL_STATE(690)] = 23827,
  [SMALL_STATE(691)] = 23836,
  [SMALL_STATE(692)] = 23845,
  [SMALL_STATE(693)] = 23854,
  [SMALL_STATE(694)] = 23863,
  [SMALL_STATE(695)] = 23872,
  [SMALL_STATE(696)] = 23881,
  [SMALL_STATE(697)] = 23890,
  [SMALL_STATE(698)] = 23899,
  [SMALL_STATE(699)] = 23908,
  [SMALL_STATE(700)] = 23917,
  [SMALL_STATE(701)] = 23926,
  [SMALL_STATE(702)] = 23935,
  [SMALL_STATE(703)] = 23944,
  [SMALL_STATE(704)] = 23953,
  [SMALL_STATE(705)] = 23962,
  [SMALL_STATE(706)] = 23971,
  [SMALL_STATE(707)] = 23980,
  [SMALL_STATE(708)] = 23989,
  [SMALL_STATE(709)] = 23998,
  [SMALL_STATE(710)] = 24007,
  [SMALL_STATE(711)] = 24016,
  [SMALL_STATE(712)] = 24025,
  [SMALL_STATE(713)] = 24034,
  [SMALL_STATE(714)] = 24043,
  [SMALL_STATE(715)] = 24052,
  [SMALL_STATE(716)] = 24061,
  [SMALL_STATE(717)] = 24070,
  [SMALL_STATE(718)] = 24079,
  [SMALL_STATE(719)] = 24088,
  [SMALL_STATE(720)] = 24097,
  [SMALL_STATE(721)] = 24106,
  [SMALL_STATE(722)] = 24115,
  [SMALL_STATE(723)] = 24124,
  [SMALL_STATE(724)] = 24133,
  [SMALL_STATE(725)] = 24142,
  [SMALL_STATE(726)] = 24151,
  [SMALL_STATE(727)] = 24160,
  [SMALL_STATE(728)] = 24169,
  [SMALL_STATE(729)] = 24178,
  [SMALL_STATE(730)] = 24187,
  [SMALL_STATE(731)] = 24196,
  [SMALL_STATE(732)] = 24205,
  [SMALL_STATE(733)] = 24214,
  [SMALL_STATE(734)] = 24223,
  [SMALL_STATE(735)] = 24232,
  [SMALL_STATE(736)] = 24241,
  [SMALL_STATE(737)] = 24250,
  [SMALL_STATE(738)] = 24259,
  [SMALL_STATE(739)] = 24268,
  [SMALL_STATE(740)] = 24277,
  [SMALL_STATE(741)] = 24286,
  [SMALL_STATE(742)] = 24295,
  [SMALL_STATE(743)] = 24304,
  [SMALL_STATE(744)] = 24313,
  [SMALL_STATE(745)] = 24322,
  [SMALL_STATE(746)] = 24331,
  [SMALL_STATE(747)] = 24340,
  [SMALL_STATE(748)] = 24349,
  [SMALL_STATE(749)] = 24358,
  [SMALL_STATE(750)] = 24367,
  [SMALL_STATE(751)] = 24376,
  [SMALL_STATE(752)] = 24385,
  [SMALL_STATE(753)] = 24394,
  [SMALL_STATE(754)] = 24403,
  [SMALL_STATE(755)] = 24412,
  [SMALL_STATE(756)] = 24421,
  [SMALL_STATE(757)] = 24430,
  [SMALL_STATE(758)] = 24439,
  [SMALL_STATE(759)] = 24448,
  [SMALL_STATE(760)] = 24457,
  [SMALL_STATE(761)] = 24466,
  [SMALL_STATE(762)] = 24475,
  [SMALL_STATE(763)] = 24484,
  [SMALL_STATE(764)] = 24493,
  [SMALL_STATE(765)] = 24502,
  [SMALL_STATE(766)] = 24511,
  [SMALL_STATE(767)] = 24520,
  [SMALL_STATE(768)] = 24529,
  [SMALL_STATE(769)] = 24538,
  [SMALL_STATE(770)] = 24547,
  [SMALL_STATE(771)] = 24556,
  [SMALL_STATE(772)] = 24565,
  [SMALL_STATE(773)] = 24574,
  [SMALL_STATE(774)] = 24583,
  [SMALL_STATE(775)] = 24592,
  [SMALL_STATE(776)] = 24601,
  [SMALL_STATE(777)] = 24610,
  [SMALL_STATE(778)] = 24619,
  [SMALL_STATE(779)] = 24628,
  [SMALL_STATE(780)] = 24637,
  [SMALL_STATE(781)] = 24646,
  [SMALL_STATE(782)] = 24655,
  [SMALL_STATE(783)] = 24664,
  [SMALL_STATE(784)] = 24673,
  [SMALL_STATE(785)] = 24682,
  [SMALL_STATE(786)] = 24691,
  [SMALL_STATE(787)] = 24700,
  [SMALL_STATE(788)] = 24709,
  [SMALL_STATE(789)] = 24718,
  [SMALL_STATE(790)] = 24727,
  [SMALL_STATE(791)] = 24736,
  [SMALL_STATE(792)] = 24745,
  [SMALL_STATE(793)] = 24754,
  [SMALL_STATE(794)] = 24763,
  [SMALL_STATE(795)] = 24772,
  [SMALL_STATE(796)] = 24781,
  [SMALL_STATE(797)] = 24790,
  [SMALL_STATE(798)] = 24799,
  [SMALL_STATE(799)] = 24808,
  [SMALL_STATE(800)] = 24817,
  [SMALL_STATE(801)] = 24826,
  [SMALL_STATE(802)] = 24835,
  [SMALL_STATE(803)] = 24844,
  [SMALL_STATE(804)] = 24853,
  [SMALL_STATE(805)] = 24862,
  [SMALL_STATE(806)] = 24871,
  [SMALL_STATE(807)] = 24880,
  [SMALL_STATE(808)] = 24889,
  [SMALL_STATE(809)] = 24898,
  [SMALL_STATE(810)] = 24907,
  [SMALL_STATE(811)] = 24916,
  [SMALL_STATE(812)] = 24925,
  [SMALL_STATE(813)] = 24934,
  [SMALL_STATE(814)] = 24943,
  [SMALL_STATE(815)] = 24952,
  [SMALL_STATE(816)] = 24961,
  [SMALL_STATE(817)] = 24970,
  [SMALL_STATE(818)] = 24979,
  [SMALL_STATE(819)] = 24988,
  [SMALL_STATE(820)] = 24997,
  [SMALL_STATE(821)] = 25006,
  [SMALL_STATE(822)] = 25015,
  [SMALL_STATE(823)] = 25024,
  [SMALL_STATE(824)] = 25033,
  [SMALL_STATE(825)] = 25042,
  [SMALL_STATE(826)] = 25051,
  [SMALL_STATE(827)] = 25060,
  [SMALL_STATE(828)] = 25069,
  [SMALL_STATE(829)] = 25078,
  [SMALL_STATE(830)] = 25087,
  [SMALL_STATE(831)] = 25096,
  [SMALL_STATE(832)] = 25105,
  [SMALL_STATE(833)] = 25114,
  [SMALL_STATE(834)] = 25123,
  [SMALL_STATE(835)] = 25132,
  [SMALL_STATE(836)] = 25141,
  [SMALL_STATE(837)] = 25150,
  [SMALL_STATE(838)] = 25159,
  [SMALL_STATE(839)] = 25168,
  [SMALL_STATE(840)] = 25177,
  [SMALL_STATE(841)] = 25186,
  [SMALL_STATE(842)] = 25195,
  [SMALL_STATE(843)] = 25204,
  [SMALL_STATE(844)] = 25213,
  [SMALL_STATE(845)] = 25222,
  [SMALL_STATE(846)] = 25231,
  [SMALL_STATE(847)] = 25240,
  [SMALL_STATE(848)] = 25249,
  [SMALL_STATE(849)] = 25258,
  [SMALL_STATE(850)] = 25267,
  [SMALL_STATE(851)] = 25276,
  [SMALL_STATE(852)] = 25285,
  [SMALL_STATE(853)] = 25294,
  [SMALL_STATE(854)] = 25303,
  [SMALL_STATE(855)] = 25312,
  [SMALL_STATE(856)] = 25321,
  [SMALL_STATE(857)] = 25330,
  [SMALL_STATE(858)] = 25339,
  [SMALL_STATE(859)] = 25348,
  [SMALL_STATE(860)] = 25357,
  [SMALL_STATE(861)] = 25366,
  [SMALL_STATE(862)] = 25375,
  [SMALL_STATE(863)] = 25384,
  [SMALL_STATE(864)] = 25393,
  [SMALL_STATE(865)] = 25402,
  [SMALL_STATE(866)] = 25411,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(772),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(771),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(770),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(769),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(768),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(767),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(766),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(765),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(764),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(763),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(761),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_repeat2, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(771),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(95),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(93),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(90),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(350),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(770),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(490),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(769),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(468),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(768),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(767),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(766),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(765),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(764),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(763),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(762),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(761),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(80),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(474),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(401),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_accum_name, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_accum_name, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_dot, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_dot, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_dot_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2), SHIFT_REPEAT(750),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(857),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_dot, 4),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_dot, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 4),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_accum_name, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_accum_name, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 5),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 5),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_accum_type_repeat1, 2),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2), SHIFT_REPEAT(35),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_integer, 1), REDUCE(sym_integer, 2),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_integer, 1), REDUCE(sym_integer, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_real, 3), REDUCE(sym_real, 4),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_real, 3), REDUCE(sym_real, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 2),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_real, 2), REDUCE(sym_real, 3),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_real, 2), REDUCE(sym_real, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 3),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(729),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 6),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 6),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 5),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 5),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_repeat1, 2),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(772),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 11),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 11),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 6),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 6),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 4),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 7),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 7),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 8),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 8),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 4),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 8),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 8),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 3),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 10),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 10),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 7),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 7),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 7, .production_id = 19),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef, 7, .production_id = 19),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(695),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(745),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(744),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(743),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 6, .production_id = 17),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef, 6, .production_id = 17),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_stmts, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_body_stmts, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(842),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(855),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(796),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2), SHIFT_REPEAT(816),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(863),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(777),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2), SHIFT_REPEAT(199),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 1),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(862),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_set, 1),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_operator, 1),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_operator, 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var_decl_stmt, 4, .production_id = 22),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_g_accum_accum_stmt, 3, .production_id = 6),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 2),
  [584] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(490),
  [587] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(474),
  [590] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(301),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_l_accum_accum_stmt, 5, .production_id = 24),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_accum_stmt, 5, .production_id = 24),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(490),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(474),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(764),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_expr, 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_fields_repeat1, 2), SHIFT_REPEAT(282),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_fields_repeat1, 2),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tuple_fields_repeat1, 2),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_fields, 1),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_fields, 1),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_fields, 2),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_fields, 2),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(839),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 1),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 2),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2), SHIFT_REPEAT(266),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 2),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 4),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 4),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 1),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(698),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_field, 2),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_field, 2),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_proj, 1),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 4),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 4),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt, 5),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt, 3),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 4),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_l_accum_assign_stmt, 5, .production_id = 13),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_g_accum_assign_stmt, 3),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_accum_func_call, 3, .production_id = 18),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 2),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 2),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertex_set_type, 1),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_accum_func_call, 4, .production_id = 21),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 2, .production_id = 25),
  [777] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 2, .production_id = 25), SHIFT_REPEAT(701),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_set, 1),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_pattern, 2, .production_id = 10),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [788] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_stmt_list_repeat1, 2), SHIFT_REPEAT(141),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_stmt_list_repeat1, 2),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_pattern, 1),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 4),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_source_set, 1, .production_id = 5),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_vertex_type, 1),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 5, .production_id = 26),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 3),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 4, .production_id = 26),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt_list, 2),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 3),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt_list, 1),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 1),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 2, .production_id = 15),
  [823] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 2, .production_id = 15), SHIFT_REPEAT(828),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2),
  [846] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2), SHIFT_REPEAT(559),
  [849] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2), SHIFT_REPEAT(864),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt, 1),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 8, .production_id = 27),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 5),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_case_stmt, 3),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_while_stmt, 7),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 6),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 8),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql, 1),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 7),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_for_each_stmt, 5),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_while_stmt, 5),
  [880] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2), SHIFT_REPEAT(588),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 6),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(679),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_set, 3, .production_id = 16),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_case_stmt, 5),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_source_set, 3, .production_id = 14),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_v2, 1),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 5),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 4),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_expr_set, 4),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsql_select_block_repeat1, 2),
  [927] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_select_block_repeat1, 2), SHIFT_REPEAT(84),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 4),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disj_pattern, 2),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_v2, 7),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 3),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disj_pattern_repeat1, 2),
  [950] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disj_pattern_repeat1, 2), SHIFT_REPEAT(332),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_set, 3),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [957] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_stmt_repeat1, 2), SHIFT_REPEAT(97),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_print_stmt_repeat1, 2),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_pattern, 1),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_expr_set, 5),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 1),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_edge_pattern, 1),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edge_set_type, 1),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_type, 1),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 7),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 2),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 8),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_pattern, 2),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 5),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 2),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 9),
  [1006] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 9),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 6),
  [1012] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 6),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 11),
  [1016] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 11),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 2),
  [1022] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 2), SHIFT_REPEAT(258),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 3, .production_id = 8),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_var_decl_stmt, 3),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 4),
  [1035] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 4),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 2),
  [1043] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 2), SHIFT_REPEAT(121),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1050] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2), SHIFT_REPEAT(155),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_expr, 3),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 10),
  [1059] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 10),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 2),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 2),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 2),
  [1073] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 2), SHIFT_REPEAT(85),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1088] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2), SHIFT_REPEAT(168),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 4),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 1),
  [1111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 1),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 8),
  [1115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 8),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 6, .production_id = 20),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(811),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 5),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 13, .production_id = 7),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat1, 2), SHIFT_REPEAT(291),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat1, 2),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 4),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 5),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 11, .production_id = 7),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 2), SHIFT_REPEAT(686),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 2),
  [1177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 2), SHIFT_REPEAT(682),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 2),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 4),
  [1184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [1188] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 11, .production_id = 3),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [1210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(505),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [1219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_edge_types_repeat1, 2),
  [1223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_edge_types_repeat1, 2), SHIFT_REPEAT(444),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat4, 2), SHIFT_REPEAT(256),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat4, 2),
  [1233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2),
  [1235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(511),
  [1238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_v_expr_set_repeat1, 2), SHIFT_REPEAT(142),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_expr_set_repeat1, 2),
  [1243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seed_set_repeat1, 2), SHIFT_REPEAT(393),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seed_set_repeat1, 2),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpret_query, 7, .production_id = 1),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_size, 1),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_vertex_types_repeat1, 2),
  [1272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_vertex_types_repeat1, 2), SHIFT_REPEAT(449),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 4),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 8, .production_id = 2),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 12),
  [1285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 12), SHIFT_REPEAT(652),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 2),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_edge_pattern, 3),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 4),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 9, .production_id = 3),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpret_query, 9, .production_id = 1),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 1),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 3),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [1336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [1338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 12, .production_id = 4),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 2),
  [1350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 2), SHIFT_REPEAT(674),
  [1353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 2), SHIFT_REPEAT(678),
  [1356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 2),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 2), SHIFT_REPEAT(433),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 2),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 3),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 4),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 3),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_accum_clause, 2),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 5),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 10, .production_id = 4),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 10, .production_id = 2),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_clause, 2),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 3),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 4),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 5),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 3),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 11),
  [1473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_set, 1),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 8, .production_id = 8),
  [1493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 2),
  [1495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_proj, 3),
  [1497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 4),
  [1499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat3, 2), SHIFT_REPEAT(278),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat4, 3),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_stmt, 1),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 2),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 4),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_set, 3, .production_id = 23),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 8),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_clause, 4, .production_id = 9),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 13, .production_id = 8),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 3),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 7),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat3, 3),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_while_stmt, 7),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 7),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 6),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 5),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 5),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(732),
  [1718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [1720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [1722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [1724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [1726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [1728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [1730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [1732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_stmt, 1),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(747),
  [1736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_while_stmt, 5),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_for_each_stmt, 5),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 4),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 6),
  [1772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 3),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 6),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 6),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 5),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1878] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
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
