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
#define STATE_COUNT 877
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 256
#define ALIAS_COUNT 0
#define TOKEN_COUNT 131
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 26

enum {
  anon_sym_CREATE = 1,
  anon_sym_OR = 2,
  anon_sym_REPLACE = 3,
  anon_sym_DISTRIBUTED = 4,
  anon_sym_QUERY = 5,
  anon_sym_FOR = 6,
  anon_sym_GRAPH = 7,
  anon_sym_SYNTAX = 8,
  anon_sym_v2 = 9,
  anon_sym_INTERPRET = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_COMMA = 13,
  anon_sym_EQ = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_TYPEDEF = 17,
  anon_sym_TUPLE = 18,
  anon_sym_LT = 19,
  anon_sym_GT = 20,
  anon_sym_SEMI = 21,
  anon_sym_BREAK = 22,
  anon_sym_CONTINUE = 23,
  anon_sym_DOT = 24,
  anon_sym_UNION = 25,
  anon_sym_INTERSECT = 26,
  anon_sym_MINUS = 27,
  anon_sym__ = 28,
  anon_sym_ANY = 29,
  anon_sym_DOT_STAR = 30,
  anon_sym_PLUS_EQ = 31,
  anon_sym_SELECT = 32,
  anon_sym_FROM = 33,
  anon_sym_WHERE = 34,
  anon_sym_ACCUM = 35,
  anon_sym_IF = 36,
  anon_sym_THEN = 37,
  anon_sym_ELSE = 38,
  anon_sym_END = 39,
  anon_sym_CASE = 40,
  anon_sym_WHEN = 41,
  anon_sym_WHILE = 42,
  anon_sym_LIMIT = 43,
  anon_sym_DO = 44,
  anon_sym_FOREACH = 45,
  anon_sym_IN = 46,
  anon_sym_COLON = 47,
  anon_sym_RANGE = 48,
  anon_sym_LBRACK = 49,
  anon_sym_RBRACK = 50,
  anon_sym_STEP = 51,
  anon_sym_post_DASHaccum = 52,
  anon_sym_OFFSET = 53,
  anon_sym_DASH = 54,
  anon_sym_PIPE = 55,
  anon_sym_STAR = 56,
  anon_sym_all = 57,
  anon_sym_sumAccum = 58,
  anon_sym_INT = 59,
  anon_sym_FLOAT = 60,
  anon_sym_DOUBLE = 61,
  anon_sym_STRING = 62,
  anon_sym_MAXACCUM = 63,
  anon_sym_MINACCUM = 64,
  anon_sym_AVGACCUM = 65,
  anon_sym_ORACCUM = 66,
  anon_sym_ANDACCUM = 67,
  anon_sym_bitwiseOraccum = 68,
  anon_sym_bitwiseAndaccum = 69,
  anon_sym_LISTACCUM = 70,
  anon_sym_SETACCUM = 71,
  anon_sym_BAGACCUM = 72,
  anon_sym_MAPACCUM = 73,
  anon_sym_HEAPACCUM = 74,
  anon_sym_ASC = 75,
  anon_sym_DESC = 76,
  anon_sym_groupByaccum = 77,
  anon_sym_ARRAYACCUM = 78,
  anon_sym_AT_AT = 79,
  anon_sym_AT = 80,
  anon_sym_FILTER = 81,
  anon_sym_COALESCE = 82,
  anon_sym_DISTINCT = 83,
  anon_sym_ISEMPTY = 84,
  anon_sym_DASH_GT = 85,
  anon_sym_NOT = 86,
  anon_sym_IS = 87,
  anon_sym_NULL = 88,
  anon_sym_BETWEEN = 89,
  anon_sym_AND = 90,
  anon_sym_TRUE = 91,
  anon_sym_FALSE = 92,
  anon_sym_LIKE = 93,
  anon_sym_COUNT = 94,
  anon_sym_MAX = 95,
  anon_sym_MIN = 96,
  anon_sym_AVG = 97,
  anon_sym_SUM = 98,
  anon_sym_PRINT = 99,
  anon_sym_to_csv = 100,
  anon_sym_AS = 101,
  anon_sym_BOOL = 102,
  anon_sym_UINT = 103,
  anon_sym_VERTEX = 104,
  anon_sym_EDGE = 105,
  anon_sym_JSONOBJECT = 106,
  anon_sym_JSONARRAY = 107,
  anon_sym_DATETIME = 108,
  sym_name = 109,
  anon_sym_gsql_uint_max = 110,
  anon_sym_gsql_int_max = 111,
  anon_sym_gsql_uint_min = 112,
  sym_digit = 113,
  anon_sym_DQUOTE = 114,
  aux_sym_string_literal_token1 = 115,
  anon_sym_SQUOTE = 116,
  aux_sym_string_literal_token2 = 117,
  anon_sym_SLASH = 118,
  anon_sym_PERCENT = 119,
  anon_sym_PLUS = 120,
  anon_sym_LT_LT = 121,
  anon_sym_GT_GT = 122,
  anon_sym_AMP = 123,
  anon_sym_LT_EQ = 124,
  anon_sym_GT_EQ = 125,
  anon_sym_EQ_EQ = 126,
  anon_sym_BANG_EQ = 127,
  sym_newline = 128,
  sym_line_comment = 129,
  sym_block_comment = 130,
  sym_gsql = 131,
  sym__definition = 132,
  sym_create_query = 133,
  sym_interpret_query = 134,
  sym_parameter_list = 135,
  sym_query_params = 136,
  sym_query_param = 137,
  sym_query_body = 138,
  sym_typedef = 139,
  sym_tuple_fields = 140,
  sym_tuple_field = 141,
  sym_query_body_stmts = 142,
  sym_query_body_stmt = 143,
  sym_assign_stmt = 144,
  sym_v_set_var_decl_stmt = 145,
  sym_seed_set = 146,
  sym_simple_set = 147,
  sym_seed = 148,
  sym_l_accum_assign_stmt = 149,
  sym_g_accum_assign_stmt = 150,
  sym_g_accum_accum_stmt = 151,
  sym_func_call_stmt = 152,
  sym_select_stmt = 153,
  sym_gsql_select_block = 154,
  sym_gsql_select_clause = 155,
  sym_from_clause = 156,
  sym_where_clause = 157,
  sym_accum_clause = 158,
  sym_dml_sub_stmt_list = 159,
  sym_dml_sub_stmt = 160,
  sym_l_accum_accum_stmt = 161,
  sym_attr_accum_stmt = 162,
  sym_v_accum_func_call = 163,
  sym_local_var_decl_stmt = 164,
  sym_dml_sub_if_stmt = 165,
  sym_dml_sub_case_stmt = 166,
  sym_dml_sub_while_stmt = 167,
  sym_dml_sub_for_each_stmt = 168,
  sym_for_each_control = 169,
  sym_post_accum_clause = 170,
  sym_limit_clause = 171,
  sym_path_pattern = 172,
  sym_path_edge_pattern = 173,
  sym_atomic_edge_pattern = 174,
  sym_disj_pattern = 175,
  sym_step = 176,
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
  aux_sym_dml_sub_case_stmt_repeat2 = 234,
  aux_sym_for_each_control_repeat1 = 235,
  aux_sym_path_pattern_repeat1 = 236,
  aux_sym_disj_pattern_repeat1 = 237,
  aux_sym_step_edge_types_repeat1 = 238,
  aux_sym_step_vertex_types_repeat1 = 239,
  aux_sym_query_body_case_stmt_repeat1 = 240,
  aux_sym_query_body_case_stmt_repeat2 = 241,
  aux_sym_query_body_if_stmt_repeat1 = 242,
  aux_sym_base_decl_stmt_repeat1 = 243,
  aux_sym_accum_decl_stmt_repeat1 = 244,
  aux_sym_accum_decl_stmt_repeat2 = 245,
  aux_sym_accum_type_repeat1 = 246,
  aux_sym_accum_type_repeat2 = 247,
  aux_sym_accum_type_repeat3 = 248,
  aux_sym_arg_list_repeat1 = 249,
  aux_sym_simple_size_repeat1 = 250,
  aux_sym_name_dot_repeat1 = 251,
  aux_sym_print_stmt_repeat1 = 252,
  aux_sym_v_expr_set_repeat1 = 253,
  aux_sym_string_literal_repeat1 = 254,
  aux_sym_string_literal_repeat2 = 255,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_CREATE] = "CREATE",
  [anon_sym_OR] = "OR",
  [anon_sym_REPLACE] = "REPLACE",
  [anon_sym_DISTRIBUTED] = "DISTRIBUTED",
  [anon_sym_QUERY] = "QUERY",
  [anon_sym_FOR] = "FOR",
  [anon_sym_GRAPH] = "GRAPH",
  [anon_sym_SYNTAX] = "SYNTAX",
  [anon_sym_v2] = "v2",
  [anon_sym_INTERPRET] = "INTERPRET",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_TYPEDEF] = "TYPEDEF",
  [anon_sym_TUPLE] = "TUPLE",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_SEMI] = ";",
  [anon_sym_BREAK] = "BREAK",
  [anon_sym_CONTINUE] = "CONTINUE",
  [anon_sym_DOT] = ".",
  [anon_sym_UNION] = "UNION",
  [anon_sym_INTERSECT] = "INTERSECT",
  [anon_sym_MINUS] = "MINUS",
  [anon_sym__] = "_",
  [anon_sym_ANY] = "ANY",
  [anon_sym_DOT_STAR] = ".*",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_SELECT] = "SELECT",
  [anon_sym_FROM] = "FROM",
  [anon_sym_WHERE] = "WHERE",
  [anon_sym_ACCUM] = "ACCUM",
  [anon_sym_IF] = "IF",
  [anon_sym_THEN] = "THEN",
  [anon_sym_ELSE] = "ELSE",
  [anon_sym_END] = "END",
  [anon_sym_CASE] = "CASE",
  [anon_sym_WHEN] = "WHEN",
  [anon_sym_WHILE] = "WHILE",
  [anon_sym_LIMIT] = "LIMIT",
  [anon_sym_DO] = "DO",
  [anon_sym_FOREACH] = "FOREACH",
  [anon_sym_IN] = "IN",
  [anon_sym_COLON] = ":",
  [anon_sym_RANGE] = "RANGE",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_STEP] = "STEP",
  [anon_sym_post_DASHaccum] = "post-accum",
  [anon_sym_OFFSET] = "OFFSET",
  [anon_sym_DASH] = "-",
  [anon_sym_PIPE] = " | ",
  [anon_sym_STAR] = "*",
  [anon_sym_all] = "all",
  [anon_sym_sumAccum] = "sumAccum",
  [anon_sym_INT] = "INT",
  [anon_sym_FLOAT] = "FLOAT",
  [anon_sym_DOUBLE] = "DOUBLE",
  [anon_sym_STRING] = "STRING",
  [anon_sym_MAXACCUM] = "MAXACCUM",
  [anon_sym_MINACCUM] = "MINACCUM",
  [anon_sym_AVGACCUM] = "AVGACCUM",
  [anon_sym_ORACCUM] = "ORACCUM",
  [anon_sym_ANDACCUM] = "ANDACCUM",
  [anon_sym_bitwiseOraccum] = "bitwiseOraccum",
  [anon_sym_bitwiseAndaccum] = "bitwiseAndaccum",
  [anon_sym_LISTACCUM] = "LISTACCUM",
  [anon_sym_SETACCUM] = "SETACCUM",
  [anon_sym_BAGACCUM] = "BAGACCUM",
  [anon_sym_MAPACCUM] = "MAPACCUM",
  [anon_sym_HEAPACCUM] = "HEAPACCUM",
  [anon_sym_ASC] = "ASC",
  [anon_sym_DESC] = "DESC",
  [anon_sym_groupByaccum] = "groupByaccum",
  [anon_sym_ARRAYACCUM] = "ARRAYACCUM",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_AT] = "@",
  [anon_sym_FILTER] = "FILTER",
  [anon_sym_COALESCE] = "COALESCE",
  [anon_sym_DISTINCT] = "DISTINCT",
  [anon_sym_ISEMPTY] = "ISEMPTY",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_NOT] = "NOT",
  [anon_sym_IS] = "IS",
  [anon_sym_NULL] = "NULL",
  [anon_sym_BETWEEN] = "BETWEEN",
  [anon_sym_AND] = "AND",
  [anon_sym_TRUE] = "TRUE",
  [anon_sym_FALSE] = "FALSE",
  [anon_sym_LIKE] = "LIKE",
  [anon_sym_COUNT] = "COUNT",
  [anon_sym_MAX] = "MAX",
  [anon_sym_MIN] = "MIN",
  [anon_sym_AVG] = "AVG",
  [anon_sym_SUM] = "SUM",
  [anon_sym_PRINT] = "PRINT",
  [anon_sym_to_csv] = "to_csv",
  [anon_sym_AS] = "AS",
  [anon_sym_BOOL] = "BOOL",
  [anon_sym_UINT] = "UINT",
  [anon_sym_VERTEX] = "VERTEX",
  [anon_sym_EDGE] = "EDGE",
  [anon_sym_JSONOBJECT] = "JSONOBJECT",
  [anon_sym_JSONARRAY] = "JSONARRAY",
  [anon_sym_DATETIME] = "DATETIME",
  [sym_name] = "name",
  [anon_sym_gsql_uint_max] = "gsql_uint_max",
  [anon_sym_gsql_int_max] = "gsql_int_max",
  [anon_sym_gsql_uint_min] = "gsql_uint_min",
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
  [sym_simple_set] = "simple_set",
  [sym_seed] = "seed",
  [sym_l_accum_assign_stmt] = "l_accum_assign_stmt",
  [sym_g_accum_assign_stmt] = "g_accum_assign_stmt",
  [sym_g_accum_accum_stmt] = "g_accum_accum_stmt",
  [sym_func_call_stmt] = "func_call_stmt",
  [sym_select_stmt] = "select_stmt",
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
  [aux_sym_dml_sub_case_stmt_repeat2] = "dml_sub_case_stmt_repeat2",
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
  [aux_sym_accum_decl_stmt_repeat2] = "accum_decl_stmt_repeat2",
  [aux_sym_accum_type_repeat1] = "accum_type_repeat1",
  [aux_sym_accum_type_repeat2] = "accum_type_repeat2",
  [aux_sym_accum_type_repeat3] = "accum_type_repeat3",
  [aux_sym_arg_list_repeat1] = "arg_list_repeat1",
  [aux_sym_simple_size_repeat1] = "simple_size_repeat1",
  [aux_sym_name_dot_repeat1] = "name_dot_repeat1",
  [aux_sym_print_stmt_repeat1] = "print_stmt_repeat1",
  [aux_sym_v_expr_set_repeat1] = "v_expr_set_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_string_literal_repeat2] = "string_literal_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_CREATE] = anon_sym_CREATE,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_REPLACE] = anon_sym_REPLACE,
  [anon_sym_DISTRIBUTED] = anon_sym_DISTRIBUTED,
  [anon_sym_QUERY] = anon_sym_QUERY,
  [anon_sym_FOR] = anon_sym_FOR,
  [anon_sym_GRAPH] = anon_sym_GRAPH,
  [anon_sym_SYNTAX] = anon_sym_SYNTAX,
  [anon_sym_v2] = anon_sym_v2,
  [anon_sym_INTERPRET] = anon_sym_INTERPRET,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_TYPEDEF] = anon_sym_TYPEDEF,
  [anon_sym_TUPLE] = anon_sym_TUPLE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_BREAK] = anon_sym_BREAK,
  [anon_sym_CONTINUE] = anon_sym_CONTINUE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_UNION] = anon_sym_UNION,
  [anon_sym_INTERSECT] = anon_sym_INTERSECT,
  [anon_sym_MINUS] = anon_sym_MINUS,
  [anon_sym__] = anon_sym__,
  [anon_sym_ANY] = anon_sym_ANY,
  [anon_sym_DOT_STAR] = anon_sym_DOT_STAR,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_SELECT] = anon_sym_SELECT,
  [anon_sym_FROM] = anon_sym_FROM,
  [anon_sym_WHERE] = anon_sym_WHERE,
  [anon_sym_ACCUM] = anon_sym_ACCUM,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_THEN] = anon_sym_THEN,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [anon_sym_END] = anon_sym_END,
  [anon_sym_CASE] = anon_sym_CASE,
  [anon_sym_WHEN] = anon_sym_WHEN,
  [anon_sym_WHILE] = anon_sym_WHILE,
  [anon_sym_LIMIT] = anon_sym_LIMIT,
  [anon_sym_DO] = anon_sym_DO,
  [anon_sym_FOREACH] = anon_sym_FOREACH,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RANGE] = anon_sym_RANGE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_STEP] = anon_sym_STEP,
  [anon_sym_post_DASHaccum] = anon_sym_post_DASHaccum,
  [anon_sym_OFFSET] = anon_sym_OFFSET,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_all] = anon_sym_all,
  [anon_sym_sumAccum] = anon_sym_sumAccum,
  [anon_sym_INT] = anon_sym_INT,
  [anon_sym_FLOAT] = anon_sym_FLOAT,
  [anon_sym_DOUBLE] = anon_sym_DOUBLE,
  [anon_sym_STRING] = anon_sym_STRING,
  [anon_sym_MAXACCUM] = anon_sym_MAXACCUM,
  [anon_sym_MINACCUM] = anon_sym_MINACCUM,
  [anon_sym_AVGACCUM] = anon_sym_AVGACCUM,
  [anon_sym_ORACCUM] = anon_sym_ORACCUM,
  [anon_sym_ANDACCUM] = anon_sym_ANDACCUM,
  [anon_sym_bitwiseOraccum] = anon_sym_bitwiseOraccum,
  [anon_sym_bitwiseAndaccum] = anon_sym_bitwiseAndaccum,
  [anon_sym_LISTACCUM] = anon_sym_LISTACCUM,
  [anon_sym_SETACCUM] = anon_sym_SETACCUM,
  [anon_sym_BAGACCUM] = anon_sym_BAGACCUM,
  [anon_sym_MAPACCUM] = anon_sym_MAPACCUM,
  [anon_sym_HEAPACCUM] = anon_sym_HEAPACCUM,
  [anon_sym_ASC] = anon_sym_ASC,
  [anon_sym_DESC] = anon_sym_DESC,
  [anon_sym_groupByaccum] = anon_sym_groupByaccum,
  [anon_sym_ARRAYACCUM] = anon_sym_ARRAYACCUM,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_FILTER] = anon_sym_FILTER,
  [anon_sym_COALESCE] = anon_sym_COALESCE,
  [anon_sym_DISTINCT] = anon_sym_DISTINCT,
  [anon_sym_ISEMPTY] = anon_sym_ISEMPTY,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_NOT] = anon_sym_NOT,
  [anon_sym_IS] = anon_sym_IS,
  [anon_sym_NULL] = anon_sym_NULL,
  [anon_sym_BETWEEN] = anon_sym_BETWEEN,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_TRUE] = anon_sym_TRUE,
  [anon_sym_FALSE] = anon_sym_FALSE,
  [anon_sym_LIKE] = anon_sym_LIKE,
  [anon_sym_COUNT] = anon_sym_COUNT,
  [anon_sym_MAX] = anon_sym_MAX,
  [anon_sym_MIN] = anon_sym_MIN,
  [anon_sym_AVG] = anon_sym_AVG,
  [anon_sym_SUM] = anon_sym_SUM,
  [anon_sym_PRINT] = anon_sym_PRINT,
  [anon_sym_to_csv] = anon_sym_to_csv,
  [anon_sym_AS] = anon_sym_AS,
  [anon_sym_BOOL] = anon_sym_BOOL,
  [anon_sym_UINT] = anon_sym_UINT,
  [anon_sym_VERTEX] = anon_sym_VERTEX,
  [anon_sym_EDGE] = anon_sym_EDGE,
  [anon_sym_JSONOBJECT] = anon_sym_JSONOBJECT,
  [anon_sym_JSONARRAY] = anon_sym_JSONARRAY,
  [anon_sym_DATETIME] = anon_sym_DATETIME,
  [sym_name] = sym_name,
  [anon_sym_gsql_uint_max] = anon_sym_gsql_uint_max,
  [anon_sym_gsql_int_max] = anon_sym_gsql_int_max,
  [anon_sym_gsql_uint_min] = anon_sym_gsql_uint_min,
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
  [sym_simple_set] = sym_simple_set,
  [sym_seed] = sym_seed,
  [sym_l_accum_assign_stmt] = sym_l_accum_assign_stmt,
  [sym_g_accum_assign_stmt] = sym_g_accum_assign_stmt,
  [sym_g_accum_accum_stmt] = sym_g_accum_accum_stmt,
  [sym_func_call_stmt] = sym_func_call_stmt,
  [sym_select_stmt] = sym_select_stmt,
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
  [aux_sym_dml_sub_case_stmt_repeat2] = aux_sym_dml_sub_case_stmt_repeat2,
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
  [aux_sym_accum_decl_stmt_repeat2] = aux_sym_accum_decl_stmt_repeat2,
  [aux_sym_accum_type_repeat1] = aux_sym_accum_type_repeat1,
  [aux_sym_accum_type_repeat2] = aux_sym_accum_type_repeat2,
  [aux_sym_accum_type_repeat3] = aux_sym_accum_type_repeat3,
  [aux_sym_arg_list_repeat1] = aux_sym_arg_list_repeat1,
  [aux_sym_simple_size_repeat1] = aux_sym_simple_size_repeat1,
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
  [anon_sym_CREATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REPLACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DISTRIBUTED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QUERY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GRAPH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SYNTAX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_v2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INTERPRET] = {
    .visible = true,
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
  [anon_sym_TYPEDEF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TUPLE] = {
    .visible = true,
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
  [anon_sym_BREAK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONTINUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UNION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INTERSECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MINUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ANY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SELECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FROM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WHERE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ACCUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_THEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CASE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WHEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WHILE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LIMIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FOREACH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RANGE] = {
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
  [anon_sym_STEP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_post_DASHaccum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OFFSET] = {
    .visible = true,
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_all] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sumAccum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FLOAT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOUBLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STRING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MAXACCUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MINACCUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AVGACCUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ORACCUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ANDACCUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bitwiseOraccum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bitwiseAndaccum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LISTACCUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SETACCUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BAGACCUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MAPACCUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HEAPACCUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ASC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DESC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_groupByaccum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ARRAYACCUM] = {
    .visible = true,
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
  [anon_sym_FILTER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COALESCE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DISTINCT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ISEMPTY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BETWEEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FALSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LIKE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COUNT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MAX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AVG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PRINT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to_csv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BOOL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UINT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VERTEX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EDGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JSONOBJECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JSONARRAY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DATETIME] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_gsql_uint_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gsql_int_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gsql_uint_min] = {
    .visible = true,
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
  [sym_simple_set] = {
    .visible = true,
    .named = true,
  },
  [sym_seed] = {
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
  [sym_select_stmt] = {
    .visible = true,
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
  [aux_sym_dml_sub_case_stmt_repeat2] = {
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
  [aux_sym_accum_decl_stmt_repeat2] = {
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
  [aux_sym_arg_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_simple_size_repeat1] = {
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
  field_edgeAlias = 1,
  field_funcName = 2,
  field_graphName = 3,
  field_iterationVar = 4,
  field_keyVar = 5,
  field_localAccumName = 6,
  field_plus_equal = 7,
  field_queryName = 8,
  field_tupleType = 9,
  field_valueVar = 10,
  field_varName = 11,
  field_vertexAlias = 12,
  field_vertexSetName = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
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
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 1},
  [6] = {.index = 9, .length = 1},
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 1},
  [12] = {.index = 16, .length = 2},
  [13] = {.index = 18, .length = 2},
  [14] = {.index = 20, .length = 1},
  [15] = {.index = 21, .length = 2},
  [16] = {.index = 23, .length = 1},
  [17] = {.index = 24, .length = 2},
  [18] = {.index = 26, .length = 3},
  [19] = {.index = 29, .length = 1},
  [20] = {.index = 30, .length = 1},
  [21] = {.index = 31, .length = 1},
  [22] = {.index = 32, .length = 2},
  [23] = {.index = 34, .length = 1},
  [24] = {.index = 35, .length = 1},
  [25] = {.index = 36, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_graphName, 6},
    {field_queryName, 2},
  [2] =
    {field_graphName, 7},
    {field_queryName, 3},
  [4] =
    {field_graphName, 8},
    {field_queryName, 4},
  [6] =
    {field_graphName, 9},
    {field_queryName, 5},
  [8] =
    {field_vertexSetName, 0},
  [9] =
    {field_plus_equal, 1},
  [10] =
    {field_iterationVar, 0},
  [11] =
    {field_edgeAlias, 1, .inherited = true},
  [12] =
    {field_valueVar, 1},
  [13] =
    {field_valueVar, 0, .inherited = true},
    {field_valueVar, 1, .inherited = true},
  [15] =
    {field_vertexAlias, 0},
  [16] =
    {field_vertexAlias, 2},
    {field_vertexSetName, 0},
  [18] =
    {field_edgeAlias, 0, .inherited = true},
    {field_edgeAlias, 1, .inherited = true},
  [20] =
    {field_tupleType, 4},
  [21] =
    {field_localAccumName, 2},
    {field_vertexAlias, 0},
  [23] =
    {field_tupleType, 5},
  [24] =
    {field_keyVar, 1},
    {field_valueVar, 2, .inherited = true},
  [26] =
    {field_funcName, 3, .inherited = true},
    {field_localAccumName, 2},
    {field_vertexAlias, 0},
  [29] =
    {field_varName, 1},
  [30] =
    {field_edgeAlias, 2},
  [31] =
    {field_plus_equal, 3},
  [32] =
    {field_funcName, 0, .inherited = true},
    {field_funcName, 1, .inherited = true},
  [34] =
    {field_funcName, 1},
  [35] =
    {field_vertexAlias, 2},
  [36] =
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
              ? (c < 'a'
                ? (c < 'G'
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
                  : (c <= 'Z' || (c >= 'a' && c <= 'z')))
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
              ? (c < 'a'
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
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
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
      if (eof) ADVANCE(451);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(887);
      if (lookahead == '%') ADVANCE(898);
      if (lookahead == '&') ADVANCE(903);
      if (lookahead == '\'') ADVANCE(892);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '*') ADVANCE(527);
      if (lookahead == '+') ADVANCE(900);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '-') ADVANCE(525);
      if (lookahead == '.') ADVANCE(484);
      if (lookahead == '/') ADVANCE(897);
      if (lookahead == ':') ADVANCE(516);
      if (lookahead == ';') ADVANCE(478);
      if (lookahead == '<') ADVANCE(473);
      if (lookahead == '=') ADVANCE(467);
      if (lookahead == '>') ADVANCE(477);
      if (lookahead == '@') ADVANCE(570);
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'B') ADVANCE(59);
      if (lookahead == 'C') ADVANCE(58);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'E') ADVANCE(131);
      if (lookahead == 'F') ADVANCE(52);
      if (lookahead == 'G') ADVANCE(297);
      if (lookahead == 'H') ADVANCE(175);
      if (lookahead == 'I') ADVANCE(180);
      if (lookahead == 'J') ADVANCE(317);
      if (lookahead == 'L') ADVANCE(199);
      if (lookahead == 'M') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(282);
      if (lookahead == 'O') ADVANCE(181);
      if (lookahead == 'P') ADVANCE(303);
      if (lookahead == 'Q') ADVANCE(367);
      if (lookahead == 'R') ADVANCE(64);
      if (lookahead == 'S') ADVANCE(135);
      if (lookahead == 'T') ADVANCE(196);
      if (lookahead == 'U') ADVANCE(213);
      if (lookahead == 'V') ADVANCE(159);
      if (lookahead == 'W') ADVANCE(191);
      if (lookahead == '[') ADVANCE(519);
      if (lookahead == ']') ADVANCE(520);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'a') ADVANCE(408);
      if (lookahead == 'b') ADVANCE(403);
      if (lookahead == 'g') ADVANCE(428);
      if (lookahead == 'p') ADVANCE(422);
      if (lookahead == 's') ADVANCE(438);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead == 'v') ADVANCE(44);
      if (lookahead == '{') ADVANCE(468);
      if (lookahead == '}') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(886);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(908);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(887);
      if (lookahead == '%') ADVANCE(898);
      if (lookahead == '&') ADVANCE(903);
      if (lookahead == '\'') ADVANCE(892);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '*') ADVANCE(527);
      if (lookahead == '+') ADVANCE(900);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '-') ADVANCE(525);
      if (lookahead == '.') ADVANCE(484);
      if (lookahead == '/') ADVANCE(897);
      if (lookahead == ':') ADVANCE(516);
      if (lookahead == ';') ADVANCE(478);
      if (lookahead == '<') ADVANCE(473);
      if (lookahead == '=') ADVANCE(467);
      if (lookahead == '>') ADVANCE(477);
      if (lookahead == '@') ADVANCE(570);
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'B') ADVANCE(59);
      if (lookahead == 'C') ADVANCE(58);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'E') ADVANCE(131);
      if (lookahead == 'F') ADVANCE(52);
      if (lookahead == 'G') ADVANCE(297);
      if (lookahead == 'H') ADVANCE(175);
      if (lookahead == 'I') ADVANCE(180);
      if (lookahead == 'J') ADVANCE(317);
      if (lookahead == 'L') ADVANCE(199);
      if (lookahead == 'M') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(282);
      if (lookahead == 'O') ADVANCE(181);
      if (lookahead == 'P') ADVANCE(303);
      if (lookahead == 'Q') ADVANCE(367);
      if (lookahead == 'R') ADVANCE(64);
      if (lookahead == 'S') ADVANCE(135);
      if (lookahead == 'T') ADVANCE(196);
      if (lookahead == 'U') ADVANCE(213);
      if (lookahead == 'V') ADVANCE(159);
      if (lookahead == 'W') ADVANCE(191);
      if (lookahead == '[') ADVANCE(519);
      if (lookahead == ']') ADVANCE(520);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'a') ADVANCE(408);
      if (lookahead == 'b') ADVANCE(403);
      if (lookahead == 'g') ADVANCE(428);
      if (lookahead == 'p') ADVANCE(422);
      if (lookahead == 's') ADVANCE(438);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead == 'v') ADVANCE(44);
      if (lookahead == '{') ADVANCE(468);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '}') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(886);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(887);
      if (lookahead == '%') ADVANCE(898);
      if (lookahead == '&') ADVANCE(903);
      if (lookahead == '\'') ADVANCE(892);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '*') ADVANCE(527);
      if (lookahead == '+') ADVANCE(900);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '-') ADVANCE(525);
      if (lookahead == '.') ADVANCE(484);
      if (lookahead == '/') ADVANCE(897);
      if (lookahead == ':') ADVANCE(516);
      if (lookahead == ';') ADVANCE(478);
      if (lookahead == '<') ADVANCE(473);
      if (lookahead == '=') ADVANCE(467);
      if (lookahead == '>') ADVANCE(477);
      if (lookahead == '@') ADVANCE(570);
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'B') ADVANCE(59);
      if (lookahead == 'C') ADVANCE(58);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'E') ADVANCE(131);
      if (lookahead == 'F') ADVANCE(52);
      if (lookahead == 'G') ADVANCE(297);
      if (lookahead == 'H') ADVANCE(175);
      if (lookahead == 'I') ADVANCE(180);
      if (lookahead == 'J') ADVANCE(317);
      if (lookahead == 'L') ADVANCE(199);
      if (lookahead == 'M') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(282);
      if (lookahead == 'O') ADVANCE(181);
      if (lookahead == 'P') ADVANCE(303);
      if (lookahead == 'Q') ADVANCE(367);
      if (lookahead == 'R') ADVANCE(64);
      if (lookahead == 'S') ADVANCE(135);
      if (lookahead == 'T') ADVANCE(196);
      if (lookahead == 'U') ADVANCE(213);
      if (lookahead == 'V') ADVANCE(159);
      if (lookahead == 'W') ADVANCE(191);
      if (lookahead == '[') ADVANCE(519);
      if (lookahead == ']') ADVANCE(520);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == 'a') ADVANCE(408);
      if (lookahead == 'b') ADVANCE(403);
      if (lookahead == 'g') ADVANCE(428);
      if (lookahead == 'p') ADVANCE(422);
      if (lookahead == 's') ADVANCE(438);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead == 'v') ADVANCE(44);
      if (lookahead == '{') ADVANCE(468);
      if (lookahead == '}') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(886);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(526);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(887);
      if (lookahead == '%') ADVANCE(898);
      if (lookahead == '&') ADVANCE(903);
      if (lookahead == '\'') ADVANCE(892);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '*') ADVANCE(527);
      if (lookahead == '+') ADVANCE(899);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(897);
      if (lookahead == ':') ADVANCE(516);
      if (lookahead == ';') ADVANCE(478);
      if (lookahead == '<') ADVANCE(474);
      if (lookahead == '=') ADVANCE(466);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(94);
      if (lookahead == 'C') ADVANCE(310);
      if (lookahead == 'D') ADVANCE(279);
      if (lookahead == 'E') ADVANCE(232);
      if (lookahead == 'F') ADVANCE(53);
      if (lookahead == 'I') ADVANCE(277);
      if (lookahead == 'L') ADVANCE(210);
      if (lookahead == 'M') ADVANCE(69);
      if (lookahead == 'O') ADVANCE(181);
      if (lookahead == 'T') ADVANCE(195);
      if (lookahead == 'U') ADVANCE(263);
      if (lookahead == 'W') ADVANCE(197);
      if (lookahead == '[') ADVANCE(519);
      if (lookahead == ']') ADVANCE(520);
      if (lookahead == 'g') ADVANCE(430);
      if (lookahead == 'p') ADVANCE(422);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(886);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(887);
      if (lookahead == '%') ADVANCE(898);
      if (lookahead == '&') ADVANCE(903);
      if (lookahead == '\'') ADVANCE(892);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '*') ADVANCE(527);
      if (lookahead == '+') ADVANCE(899);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(897);
      if (lookahead == ':') ADVANCE(516);
      if (lookahead == ';') ADVANCE(478);
      if (lookahead == '<') ADVANCE(474);
      if (lookahead == '=') ADVANCE(466);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(94);
      if (lookahead == 'C') ADVANCE(310);
      if (lookahead == 'D') ADVANCE(279);
      if (lookahead == 'E') ADVANCE(232);
      if (lookahead == 'F') ADVANCE(53);
      if (lookahead == 'I') ADVANCE(277);
      if (lookahead == 'L') ADVANCE(210);
      if (lookahead == 'M') ADVANCE(69);
      if (lookahead == 'O') ADVANCE(181);
      if (lookahead == 'T') ADVANCE(195);
      if (lookahead == 'U') ADVANCE(263);
      if (lookahead == 'W') ADVANCE(197);
      if (lookahead == '[') ADVANCE(519);
      if (lookahead == ']') ADVANCE(520);
      if (lookahead == 'g') ADVANCE(430);
      if (lookahead == 'p') ADVANCE(422);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(886);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '%') ADVANCE(898);
      if (lookahead == '&') ADVANCE(903);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '*') ADVANCE(527);
      if (lookahead == '+') ADVANCE(899);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '-') ADVANCE(525);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(897);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '@') ADVANCE(570);
      if (lookahead == 'A') ADVANCE(747);
      if (lookahead == 'B') ADVANCE(644);
      if (lookahead == 'C') ADVANCE(624);
      if (lookahead == 'D') ADVANCE(618);
      if (lookahead == 'E') ADVANCE(676);
      if (lookahead == 'F') ADVANCE(726);
      if (lookahead == 'H') ADVANCE(679);
      if (lookahead == 'I') ADVANCE(704);
      if (lookahead == 'J') ADVANCE(781);
      if (lookahead == 'L') ADVANCE(716);
      if (lookahead == 'M') ADVANCE(619);
      if (lookahead == 'O') ADVANCE(771);
      if (lookahead == 'P') ADVANCE(779);
      if (lookahead == 'S') ADVANCE(693);
      if (lookahead == 'T') ADVANCE(820);
      if (lookahead == 'U') ADVANCE(720);
      if (lookahead == 'V') ADVANCE(697);
      if (lookahead == 'W') ADVANCE(712);
      if (lookahead == 'b') ADVANCE(843);
      if (lookahead == 'g') ADVANCE(862);
      if (lookahead == 's') ADVANCE(869);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '}') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (sym_name_character_set_1(lookahead)) ADVANCE(879);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '%') ADVANCE(898);
      if (lookahead == '&') ADVANCE(903);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '*') ADVANCE(527);
      if (lookahead == '+') ADVANCE(899);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '-') ADVANCE(525);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(897);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '@') ADVANCE(570);
      if (lookahead == 'A') ADVANCE(747);
      if (lookahead == 'B') ADVANCE(644);
      if (lookahead == 'C') ADVANCE(624);
      if (lookahead == 'D') ADVANCE(618);
      if (lookahead == 'E') ADVANCE(676);
      if (lookahead == 'F') ADVANCE(726);
      if (lookahead == 'H') ADVANCE(679);
      if (lookahead == 'I') ADVANCE(704);
      if (lookahead == 'J') ADVANCE(781);
      if (lookahead == 'L') ADVANCE(716);
      if (lookahead == 'M') ADVANCE(619);
      if (lookahead == 'O') ADVANCE(771);
      if (lookahead == 'P') ADVANCE(779);
      if (lookahead == 'S') ADVANCE(693);
      if (lookahead == 'T') ADVANCE(820);
      if (lookahead == 'U') ADVANCE(720);
      if (lookahead == 'V') ADVANCE(697);
      if (lookahead == 'W') ADVANCE(712);
      if (lookahead == 'b') ADVANCE(843);
      if (lookahead == 'g') ADVANCE(862);
      if (lookahead == 's') ADVANCE(869);
      if (lookahead == '}') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (sym_name_character_set_1(lookahead)) ADVANCE(879);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(516);
      if (lookahead == '<') ADVANCE(475);
      if (lookahead == '=') ADVANCE(466);
      if (lookahead == '>') ADVANCE(476);
      if (lookahead == '@') ADVANCE(570);
      if (lookahead == 'A') ADVANCE(747);
      if (lookahead == 'B') ADVANCE(644);
      if (lookahead == 'C') ADVANCE(624);
      if (lookahead == 'D') ADVANCE(618);
      if (lookahead == 'E') ADVANCE(676);
      if (lookahead == 'F') ADVANCE(726);
      if (lookahead == 'H') ADVANCE(679);
      if (lookahead == 'I') ADVANCE(704);
      if (lookahead == 'J') ADVANCE(781);
      if (lookahead == 'L') ADVANCE(716);
      if (lookahead == 'M') ADVANCE(619);
      if (lookahead == 'O') ADVANCE(771);
      if (lookahead == 'P') ADVANCE(779);
      if (lookahead == 'S') ADVANCE(693);
      if (lookahead == 'U') ADVANCE(720);
      if (lookahead == 'V') ADVANCE(697);
      if (lookahead == 'W') ADVANCE(712);
      if (lookahead == 'b') ADVANCE(843);
      if (lookahead == 'g') ADVANCE(862);
      if (lookahead == 's') ADVANCE(869);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '}') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      if (sym_name_character_set_1(lookahead)) ADVANCE(879);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(516);
      if (lookahead == '<') ADVANCE(475);
      if (lookahead == '=') ADVANCE(466);
      if (lookahead == '>') ADVANCE(476);
      if (lookahead == '@') ADVANCE(570);
      if (lookahead == 'A') ADVANCE(747);
      if (lookahead == 'B') ADVANCE(644);
      if (lookahead == 'C') ADVANCE(624);
      if (lookahead == 'D') ADVANCE(618);
      if (lookahead == 'E') ADVANCE(676);
      if (lookahead == 'F') ADVANCE(726);
      if (lookahead == 'H') ADVANCE(679);
      if (lookahead == 'I') ADVANCE(704);
      if (lookahead == 'J') ADVANCE(781);
      if (lookahead == 'L') ADVANCE(716);
      if (lookahead == 'M') ADVANCE(619);
      if (lookahead == 'O') ADVANCE(771);
      if (lookahead == 'P') ADVANCE(779);
      if (lookahead == 'S') ADVANCE(693);
      if (lookahead == 'U') ADVANCE(720);
      if (lookahead == 'V') ADVANCE(697);
      if (lookahead == 'W') ADVANCE(712);
      if (lookahead == 'b') ADVANCE(843);
      if (lookahead == 'g') ADVANCE(862);
      if (lookahead == 's') ADVANCE(869);
      if (lookahead == '}') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      if (sym_name_character_set_1(lookahead)) ADVANCE(879);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(898);
      if (lookahead == '&') ADVANCE(903);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '*') ADVANCE(527);
      if (lookahead == '+') ADVANCE(900);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(897);
      if (lookahead == ':') ADVANCE(516);
      if (lookahead == ';') ADVANCE(478);
      if (lookahead == '<') ADVANCE(473);
      if (lookahead == '=') ADVANCE(467);
      if (lookahead == '>') ADVANCE(477);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'B') ADVANCE(134);
      if (lookahead == 'D') ADVANCE(279);
      if (lookahead == 'E') ADVANCE(232);
      if (lookahead == 'I') ADVANCE(252);
      if (lookahead == 'L') ADVANCE(200);
      if (lookahead == 'M') ADVANCE(207);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == 'O') ADVANCE(181);
      if (lookahead == 'T') ADVANCE(194);
      if (lookahead == 'U') ADVANCE(263);
      if (lookahead == 'W') ADVANCE(197);
      if (lookahead == '[') ADVANCE(519);
      if (lookahead == ']') ADVANCE(520);
      if (lookahead == 'p') ADVANCE(422);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '}') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(898);
      if (lookahead == '&') ADVANCE(903);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '*') ADVANCE(527);
      if (lookahead == '+') ADVANCE(900);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(897);
      if (lookahead == ':') ADVANCE(516);
      if (lookahead == ';') ADVANCE(478);
      if (lookahead == '<') ADVANCE(473);
      if (lookahead == '=') ADVANCE(467);
      if (lookahead == '>') ADVANCE(477);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'B') ADVANCE(134);
      if (lookahead == 'D') ADVANCE(279);
      if (lookahead == 'E') ADVANCE(232);
      if (lookahead == 'I') ADVANCE(252);
      if (lookahead == 'L') ADVANCE(200);
      if (lookahead == 'M') ADVANCE(207);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == 'O') ADVANCE(181);
      if (lookahead == 'T') ADVANCE(194);
      if (lookahead == 'U') ADVANCE(263);
      if (lookahead == 'W') ADVANCE(197);
      if (lookahead == '[') ADVANCE(519);
      if (lookahead == ']') ADVANCE(520);
      if (lookahead == 'p') ADVANCE(422);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead == '}') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(898);
      if (lookahead == '&') ADVANCE(903);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '*') ADVANCE(527);
      if (lookahead == '+') ADVANCE(899);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(897);
      if (lookahead == ';') ADVANCE(478);
      if (lookahead == '<') ADVANCE(473);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(477);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'B') ADVANCE(134);
      if (lookahead == 'D') ADVANCE(279);
      if (lookahead == 'E') ADVANCE(232);
      if (lookahead == 'I') ADVANCE(252);
      if (lookahead == 'L') ADVANCE(200);
      if (lookahead == 'M') ADVANCE(207);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == 'O') ADVANCE(181);
      if (lookahead == 'T') ADVANCE(194);
      if (lookahead == 'U') ADVANCE(263);
      if (lookahead == 'W') ADVANCE(197);
      if (lookahead == '[') ADVANCE(519);
      if (lookahead == ']') ADVANCE(520);
      if (lookahead == 'p') ADVANCE(422);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(14)
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(898);
      if (lookahead == '&') ADVANCE(903);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '*') ADVANCE(527);
      if (lookahead == '+') ADVANCE(899);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(897);
      if (lookahead == ';') ADVANCE(478);
      if (lookahead == '<') ADVANCE(473);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(477);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'B') ADVANCE(134);
      if (lookahead == 'D') ADVANCE(279);
      if (lookahead == 'E') ADVANCE(232);
      if (lookahead == 'I') ADVANCE(252);
      if (lookahead == 'L') ADVANCE(200);
      if (lookahead == 'M') ADVANCE(207);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == 'O') ADVANCE(181);
      if (lookahead == 'T') ADVANCE(194);
      if (lookahead == 'U') ADVANCE(263);
      if (lookahead == 'W') ADVANCE(197);
      if (lookahead == '[') ADVANCE(519);
      if (lookahead == ']') ADVANCE(520);
      if (lookahead == 'p') ADVANCE(422);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(898);
      if (lookahead == '&') ADVANCE(903);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '*') ADVANCE(527);
      if (lookahead == '+') ADVANCE(899);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(897);
      if (lookahead == ':') ADVANCE(516);
      if (lookahead == ';') ADVANCE(478);
      if (lookahead == '<') ADVANCE(473);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(477);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'B') ADVANCE(134);
      if (lookahead == 'D') ADVANCE(279);
      if (lookahead == 'E') ADVANCE(232);
      if (lookahead == 'I') ADVANCE(261);
      if (lookahead == 'L') ADVANCE(200);
      if (lookahead == 'M') ADVANCE(208);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == 'O') ADVANCE(181);
      if (lookahead == 'T') ADVANCE(194);
      if (lookahead == 'W') ADVANCE(197);
      if (lookahead == '[') ADVANCE(519);
      if (lookahead == ']') ADVANCE(520);
      if (lookahead == 'p') ADVANCE(422);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(886);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(898);
      if (lookahead == '&') ADVANCE(903);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '*') ADVANCE(527);
      if (lookahead == '+') ADVANCE(899);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(897);
      if (lookahead == ':') ADVANCE(516);
      if (lookahead == ';') ADVANCE(478);
      if (lookahead == '<') ADVANCE(473);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(477);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'B') ADVANCE(134);
      if (lookahead == 'D') ADVANCE(279);
      if (lookahead == 'E') ADVANCE(232);
      if (lookahead == 'I') ADVANCE(261);
      if (lookahead == 'L') ADVANCE(200);
      if (lookahead == 'M') ADVANCE(208);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == 'O') ADVANCE(181);
      if (lookahead == 'T') ADVANCE(194);
      if (lookahead == 'W') ADVANCE(197);
      if (lookahead == '[') ADVANCE(519);
      if (lookahead == ']') ADVANCE(520);
      if (lookahead == 'p') ADVANCE(422);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(886);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(898);
      if (lookahead == '&') ADVANCE(903);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '*') ADVANCE(527);
      if (lookahead == '+') ADVANCE(899);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '-') ADVANCE(525);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(897);
      if (lookahead == '<') ADVANCE(473);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(477);
      if (lookahead == 'A') ADVANCE(267);
      if (lookahead == 'B') ADVANCE(134);
      if (lookahead == 'D') ADVANCE(157);
      if (lookahead == 'I') ADVANCE(252);
      if (lookahead == 'L') ADVANCE(202);
      if (lookahead == 'M') ADVANCE(207);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == 'O') ADVANCE(298);
      if (lookahead == 'U') ADVANCE(263);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(898);
      if (lookahead == '&') ADVANCE(903);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '*') ADVANCE(527);
      if (lookahead == '+') ADVANCE(899);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '-') ADVANCE(525);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(897);
      if (lookahead == '<') ADVANCE(473);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(477);
      if (lookahead == 'A') ADVANCE(267);
      if (lookahead == 'B') ADVANCE(134);
      if (lookahead == 'D') ADVANCE(157);
      if (lookahead == 'I') ADVANCE(252);
      if (lookahead == 'L') ADVANCE(202);
      if (lookahead == 'M') ADVANCE(207);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == 'O') ADVANCE(298);
      if (lookahead == 'U') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(898);
      if (lookahead == '&') ADVANCE(903);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '*') ADVANCE(527);
      if (lookahead == '+') ADVANCE(899);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '-') ADVANCE(525);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(897);
      if (lookahead == '<') ADVANCE(473);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(477);
      if (lookahead == 'A') ADVANCE(266);
      if (lookahead == 'B') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(261);
      if (lookahead == 'L') ADVANCE(202);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == 'O') ADVANCE(298);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(886);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(898);
      if (lookahead == '&') ADVANCE(903);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '*') ADVANCE(527);
      if (lookahead == '+') ADVANCE(899);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '-') ADVANCE(525);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(897);
      if (lookahead == '<') ADVANCE(473);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(477);
      if (lookahead == 'A') ADVANCE(266);
      if (lookahead == 'B') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(261);
      if (lookahead == 'L') ADVANCE(202);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead == 'O') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(886);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(516);
      if (lookahead == ';') ADVANCE(478);
      if (lookahead == '<') ADVANCE(377);
      if (lookahead == '=') ADVANCE(466);
      if (lookahead == '>') ADVANCE(476);
      if (lookahead == 'E') ADVANCE(232);
      if (lookahead == 'I') ADVANCE(260);
      if (lookahead == 'L') ADVANCE(210);
      if (lookahead == 'W') ADVANCE(198);
      if (lookahead == 'p') ADVANCE(422);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(22)
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(516);
      if (lookahead == ';') ADVANCE(478);
      if (lookahead == '<') ADVANCE(377);
      if (lookahead == '=') ADVANCE(466);
      if (lookahead == '>') ADVANCE(476);
      if (lookahead == 'E') ADVANCE(232);
      if (lookahead == 'I') ADVANCE(260);
      if (lookahead == 'L') ADVANCE(210);
      if (lookahead == 'W') ADVANCE(198);
      if (lookahead == 'p') ADVANCE(422);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(887);
      if (lookahead == '\'') ADVANCE(892);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(377);
      if (lookahead == '@') ADVANCE(570);
      if (lookahead == 'C') ADVANCE(763);
      if (lookahead == 'F') ADVANCE(628);
      if (lookahead == 'I') ADVANCE(783);
      if (lookahead == 'T') ADVANCE(776);
      if (lookahead == '[') ADVANCE(519);
      if (lookahead == 'g') ADVANCE(865);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(886);
      if (sym_name_character_set_2(lookahead)) ADVANCE(879);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(887);
      if (lookahead == '\'') ADVANCE(892);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(475);
      if (lookahead == '>') ADVANCE(476);
      if (lookahead == '@') ADVANCE(570);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(886);
      if (sym_name_character_set_2(lookahead)) ADVANCE(879);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(887);
      if (lookahead == '\'') ADVANCE(892);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(377);
      if (lookahead == '@') ADVANCE(570);
      if (lookahead == 'C') ADVANCE(763);
      if (lookahead == 'F') ADVANCE(628);
      if (lookahead == 'I') ADVANCE(783);
      if (lookahead == 'N') ADVANCE(766);
      if (lookahead == 'T') ADVANCE(776);
      if (lookahead == '[') ADVANCE(519);
      if (lookahead == 'g') ADVANCE(865);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(886);
      if (sym_name_character_set_2(lookahead)) ADVANCE(879);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(887);
      if (lookahead == '\'') ADVANCE(892);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(377);
      if (lookahead == '@') ADVANCE(570);
      if (lookahead == 'C') ADVANCE(763);
      if (lookahead == 'F') ADVANCE(628);
      if (lookahead == 'I') ADVANCE(783);
      if (lookahead == 'S') ADVANCE(703);
      if (lookahead == 'T') ADVANCE(776);
      if (lookahead == '[') ADVANCE(519);
      if (lookahead == 'g') ADVANCE(865);
      if (lookahead == '{') ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(886);
      if (sym_name_character_set_2(lookahead)) ADVANCE(879);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(887);
      if (lookahead == '\'') ADVANCE(892);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(377);
      if (lookahead == '@') ADVANCE(570);
      if (lookahead == 'C') ADVANCE(763);
      if (lookahead == 'F') ADVANCE(628);
      if (lookahead == 'I') ADVANCE(783);
      if (lookahead == 'T') ADVANCE(776);
      if (lookahead == 'W') ADVANCE(713);
      if (lookahead == '[') ADVANCE(519);
      if (lookahead == 'g') ADVANCE(865);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(886);
      if (sym_name_character_set_2(lookahead)) ADVANCE(879);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(887);
      if (lookahead == '/') ADVANCE(889);
      if (lookahead == '<') ADVANCE(891);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '&') ADVANCE(888);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(892);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == '<') ADVANCE(896);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(895);
      if (lookahead != 0 &&
          lookahead != '&') ADVANCE(893);
      END_STATE();
    case 30:
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(475);
      if (lookahead == '>') ADVANCE(476);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == 'A') ADVANCE(753);
      if (lookahead == '_') ADVANCE(489);
      if (lookahead == '}') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (sym_name_character_set_3(lookahead)) ADVANCE(879);
      END_STATE();
    case 31:
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(377);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == 'D') ADVANCE(721);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (sym_name_character_set_2(lookahead)) ADVANCE(879);
      END_STATE();
    case 32:
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(377);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == 'R') ADVANCE(632);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (sym_name_character_set_2(lookahead)) ADVANCE(879);
      END_STATE();
    case 33:
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ';') ADVANCE(478);
      if (lookahead == '<') ADVANCE(377);
      if (lookahead == '=') ADVANCE(466);
      if (lookahead == 'A') ADVANCE(268);
      if (lookahead == 'B') ADVANCE(60);
      if (lookahead == 'D') ADVANCE(62);
      if (lookahead == 'E') ADVANCE(131);
      if (lookahead == 'F') ADVANCE(223);
      if (lookahead == 'H') ADVANCE(175);
      if (lookahead == 'I') ADVANCE(273);
      if (lookahead == 'J') ADVANCE(317);
      if (lookahead == 'L') ADVANCE(201);
      if (lookahead == 'M') ADVANCE(63);
      if (lookahead == 'O') ADVANCE(313);
      if (lookahead == 'S') ADVANCE(179);
      if (lookahead == 'U') ADVANCE(212);
      if (lookahead == 'V') ADVANCE(159);
      if (lookahead == 'W') ADVANCE(198);
      if (lookahead == 'b') ADVANCE(403);
      if (lookahead == 'g') ADVANCE(427);
      if (lookahead == 'p') ADVANCE(422);
      if (lookahead == 's') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(492);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(909);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '/') ADVANCE(910);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(36);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(475);
      if (lookahead == '>') ADVANCE(476);
      if (lookahead == 'B') ADVANCE(761);
      if (lookahead == 'D') ADVANCE(618);
      if (lookahead == 'E') ADVANCE(676);
      if (lookahead == 'F') ADVANCE(727);
      if (lookahead == 'I') ADVANCE(748);
      if (lookahead == 'J') ADVANCE(781);
      if (lookahead == 'S') ADVANCE(797);
      if (lookahead == 'U') ADVANCE(720);
      if (lookahead == 'V') ADVANCE(697);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (sym_name_character_set_2(lookahead)) ADVANCE(879);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(386);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(383);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(380);
      END_STATE();
    case 42:
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(377);
      if (lookahead == '@') ADVANCE(570);
      if (lookahead == 'B') ADVANCE(760);
      if (lookahead == 'C') ADVANCE(624);
      if (lookahead == 'D') ADVANCE(618);
      if (lookahead == 'E') ADVANCE(676);
      if (lookahead == 'F') ADVANCE(726);
      if (lookahead == 'I') ADVANCE(704);
      if (lookahead == 'J') ADVANCE(781);
      if (lookahead == 'S') ADVANCE(797);
      if (lookahead == 'U') ADVANCE(720);
      if (lookahead == 'V') ADVANCE(697);
      if (lookahead == 'W') ADVANCE(712);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (sym_name_character_set_2(lookahead)) ADVANCE(879);
      END_STATE();
    case 43:
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(747);
      if (lookahead == 'B') ADVANCE(645);
      if (lookahead == 'D') ADVANCE(618);
      if (lookahead == 'E') ADVANCE(676);
      if (lookahead == 'F') ADVANCE(727);
      if (lookahead == 'H') ADVANCE(679);
      if (lookahead == 'I') ADVANCE(748);
      if (lookahead == 'J') ADVANCE(781);
      if (lookahead == 'L') ADVANCE(716);
      if (lookahead == 'M') ADVANCE(619);
      if (lookahead == 'O') ADVANCE(771);
      if (lookahead == 'S') ADVANCE(693);
      if (lookahead == 'U') ADVANCE(720);
      if (lookahead == 'V') ADVANCE(697);
      if (lookahead == 'b') ADVANCE(843);
      if (lookahead == 'g') ADVANCE(862);
      if (lookahead == 's') ADVANCE(869);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (sym_name_character_set_4(lookahead)) ADVANCE(879);
      END_STATE();
    case 44:
      if (lookahead == '2') ADVANCE(461);
      END_STATE();
    case 45:
      if (lookahead == '<') ADVANCE(901);
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(907);
      END_STATE();
    case 47:
      if (lookahead == '=') ADVANCE(493);
      END_STATE();
    case 48:
      if (lookahead == '=') ADVANCE(906);
      END_STATE();
    case 49:
      if (lookahead == '>') ADVANCE(902);
      END_STATE();
    case 50:
      if (lookahead == '>') ADVANCE(1);
      END_STATE();
    case 51:
      if (lookahead == '@') ADVANCE(569);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(233);
      if (lookahead == 'I') ADVANCE(224);
      if (lookahead == 'L') ADVANCE(285);
      if (lookahead == 'O') ADVANCE(299);
      if (lookahead == 'R') ADVANCE(280);
      END_STATE();
    case 53:
      if (lookahead == 'A') ADVANCE(233);
      if (lookahead == 'O') ADVANCE(301);
      END_STATE();
    case 54:
      if (lookahead == 'A') ADVANCE(294);
      if (lookahead == 'I') ADVANCE(253);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(376);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(217);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(370);
      END_STATE();
    case 58:
      if (lookahead == 'A') ADVANCE(316);
      if (lookahead == 'O') ADVANCE(73);
      if (lookahead == 'R') ADVANCE(163);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(187);
      if (lookahead == 'E') ADVANCE(324);
      if (lookahead == 'O') ADVANCE(283);
      if (lookahead == 'R') ADVANCE(161);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(187);
      if (lookahead == 'O') ADVANCE(283);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(340);
      if (lookahead == 'E') ADVANCE(315);
      if (lookahead == 'I') ADVANCE(318);
      if (lookahead == 'O') ADVANCE(511);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(340);
      if (lookahead == 'O') ADVANCE(352);
      END_STATE();
    case 63:
      if (lookahead == 'A') ADVANCE(295);
      if (lookahead == 'I') ADVANCE(278);
      END_STATE();
    case 64:
      if (lookahead == 'A') ADVANCE(274);
      if (lookahead == 'E') ADVANCE(289);
      END_STATE();
    case 65:
      if (lookahead == 'A') ADVANCE(391);
      END_STATE();
    case 66:
      if (lookahead == 'A') ADVANCE(418);
      if (lookahead == 'O') ADVANCE(429);
      END_STATE();
    case 67:
      if (lookahead == 'A') ADVANCE(116);
      END_STATE();
    case 68:
      if (lookahead == 'A') ADVANCE(288);
      END_STATE();
    case 69:
      if (lookahead == 'A') ADVANCE(372);
      if (lookahead == 'I') ADVANCE(264);
      END_STATE();
    case 70:
      if (lookahead == 'A') ADVANCE(296);
      END_STATE();
    case 71:
      if (lookahead == 'A') ADVANCE(375);
      END_STATE();
    case 72:
      if (lookahead == 'A') ADVANCE(98);
      END_STATE();
    case 73:
      if (lookahead == 'A') ADVANCE(228);
      if (lookahead == 'N') ADVANCE(346);
      if (lookahead == 'U') ADVANCE(271);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(103);
      END_STATE();
    case 75:
      if (lookahead == 'A') ADVANCE(309);
      if (lookahead == 'O') ADVANCE(88);
      END_STATE();
    case 76:
      if (lookahead == 'A') ADVANCE(329);
      END_STATE();
    case 77:
      if (lookahead == 'A') ADVANCE(344);
      END_STATE();
    case 78:
      if (lookahead == 'A') ADVANCE(117);
      END_STATE();
    case 79:
      if (lookahead == 'A') ADVANCE(118);
      END_STATE();
    case 80:
      if (lookahead == 'A') ADVANCE(119);
      END_STATE();
    case 81:
      if (lookahead == 'A') ADVANCE(120);
      END_STATE();
    case 82:
      if (lookahead == 'A') ADVANCE(121);
      END_STATE();
    case 83:
      if (lookahead == 'A') ADVANCE(122);
      END_STATE();
    case 84:
      if (lookahead == 'A') ADVANCE(123);
      END_STATE();
    case 85:
      if (lookahead == 'A') ADVANCE(124);
      END_STATE();
    case 86:
      if (lookahead == 'A') ADVANCE(125);
      END_STATE();
    case 87:
      if (lookahead == 'A') ADVANCE(126);
      END_STATE();
    case 88:
      if (lookahead == 'B') ADVANCE(216);
      END_STATE();
    case 89:
      if (lookahead == 'B') ADVANCE(449);
      END_STATE();
    case 90:
      if (lookahead == 'B') ADVANCE(368);
      END_STATE();
    case 91:
      if (lookahead == 'B') ADVANCE(231);
      END_STATE();
    case 92:
      if (lookahead == 'C') ADVANCE(97);
      if (lookahead == 'N') ADVANCE(128);
      if (lookahead == 'R') ADVANCE(304);
      if (lookahead == 'S') ADVANCE(603);
      if (lookahead == 'V') ADVANCE(184);
      END_STATE();
    case 93:
      if (lookahead == 'C') ADVANCE(97);
      if (lookahead == 'N') ADVANCE(127);
      if (lookahead == 'S') ADVANCE(603);
      END_STATE();
    case 94:
      if (lookahead == 'C') ADVANCE(97);
      if (lookahead == 'N') ADVANCE(127);
      if (lookahead == 'S') ADVANCE(603);
      if (lookahead == 'V') ADVANCE(186);
      END_STATE();
    case 95:
      if (lookahead == 'C') ADVANCE(564);
      END_STATE();
    case 96:
      if (lookahead == 'C') ADVANCE(563);
      END_STATE();
    case 97:
      if (lookahead == 'C') ADVANCE(351);
      END_STATE();
    case 98:
      if (lookahead == 'C') ADVANCE(193);
      END_STATE();
    case 99:
      if (lookahead == 'C') ADVANCE(333);
      END_STATE();
    case 100:
      if (lookahead == 'C') ADVANCE(334);
      END_STATE();
    case 101:
      if (lookahead == 'C') ADVANCE(335);
      END_STATE();
    case 102:
      if (lookahead == 'C') ADVANCE(336);
      END_STATE();
    case 103:
      if (lookahead == 'C') ADVANCE(149);
      END_STATE();
    case 104:
      if (lookahead == 'C') ADVANCE(150);
      END_STATE();
    case 105:
      if (lookahead == 'C') ADVANCE(354);
      END_STATE();
    case 106:
      if (lookahead == 'C') ADVANCE(355);
      END_STATE();
    case 107:
      if (lookahead == 'C') ADVANCE(356);
      END_STATE();
    case 108:
      if (lookahead == 'C') ADVANCE(357);
      END_STATE();
    case 109:
      if (lookahead == 'C') ADVANCE(359);
      END_STATE();
    case 110:
      if (lookahead == 'C') ADVANCE(360);
      END_STATE();
    case 111:
      if (lookahead == 'C') ADVANCE(361);
      END_STATE();
    case 112:
      if (lookahead == 'C') ADVANCE(362);
      END_STATE();
    case 113:
      if (lookahead == 'C') ADVANCE(363);
      END_STATE();
    case 114:
      if (lookahead == 'C') ADVANCE(364);
      END_STATE();
    case 115:
      if (lookahead == 'C') ADVANCE(365);
      END_STATE();
    case 116:
      if (lookahead == 'C') ADVANCE(105);
      END_STATE();
    case 117:
      if (lookahead == 'C') ADVANCE(106);
      END_STATE();
    case 118:
      if (lookahead == 'C') ADVANCE(107);
      END_STATE();
    case 119:
      if (lookahead == 'C') ADVANCE(108);
      END_STATE();
    case 120:
      if (lookahead == 'C') ADVANCE(109);
      END_STATE();
    case 121:
      if (lookahead == 'C') ADVANCE(110);
      END_STATE();
    case 122:
      if (lookahead == 'C') ADVANCE(111);
      END_STATE();
    case 123:
      if (lookahead == 'C') ADVANCE(112);
      END_STATE();
    case 124:
      if (lookahead == 'C') ADVANCE(113);
      END_STATE();
    case 125:
      if (lookahead == 'C') ADVANCE(114);
      END_STATE();
    case 126:
      if (lookahead == 'C') ADVANCE(115);
      END_STATE();
    case 127:
      if (lookahead == 'D') ADVANCE(585);
      END_STATE();
    case 128:
      if (lookahead == 'D') ADVANCE(585);
      if (lookahead == 'Y') ADVANCE(490);
      END_STATE();
    case 129:
      if (lookahead == 'D') ADVANCE(503);
      END_STATE();
    case 130:
      if (lookahead == 'D') ADVANCE(455);
      END_STATE();
    case 131:
      if (lookahead == 'D') ADVANCE(188);
      if (lookahead == 'L') ADVANCE(319);
      if (lookahead == 'N') ADVANCE(129);
      END_STATE();
    case 132:
      if (lookahead == 'D') ADVANCE(155);
      END_STATE();
    case 133:
      if (lookahead == 'D') ADVANCE(86);
      END_STATE();
    case 134:
      if (lookahead == 'E') ADVANCE(324);
      END_STATE();
    case 135:
      if (lookahead == 'E') ADVANCE(226);
      if (lookahead == 'T') ADVANCE(165);
      if (lookahead == 'U') ADVANCE(234);
      if (lookahead == 'Y') ADVANCE(269);
      END_STATE();
    case 136:
      if (lookahead == 'E') ADVANCE(257);
      END_STATE();
    case 137:
      if (lookahead == 'E') ADVANCE(257);
      if (lookahead == 'I') ADVANCE(230);
      END_STATE();
    case 138:
      if (lookahead == 'E') ADVANCE(504);
      END_STATE();
    case 139:
      if (lookahead == 'E') ADVANCE(610);
      END_STATE();
    case 140:
      if (lookahead == 'E') ADVANCE(502);
      END_STATE();
    case 141:
      if (lookahead == 'E') ADVANCE(590);
      END_STATE();
    case 142:
      if (lookahead == 'E') ADVANCE(586);
      END_STATE();
    case 143:
      if (lookahead == 'E') ADVANCE(588);
      END_STATE();
    case 144:
      if (lookahead == 'E') ADVANCE(517);
      END_STATE();
    case 145:
      if (lookahead == 'E') ADVANCE(472);
      END_STATE();
    case 146:
      if (lookahead == 'E') ADVANCE(497);
      END_STATE();
    case 147:
      if (lookahead == 'E') ADVANCE(508);
      END_STATE();
    case 148:
      if (lookahead == 'E') ADVANCE(452);
      END_STATE();
    case 149:
      if (lookahead == 'E') ADVANCE(454);
      END_STATE();
    case 150:
      if (lookahead == 'E') ADVANCE(572);
      END_STATE();
    case 151:
      if (lookahead == 'E') ADVANCE(481);
      END_STATE();
    case 152:
      if (lookahead == 'E') ADVANCE(616);
      END_STATE();
    case 153:
      if (lookahead == 'E') ADVANCE(535);
      END_STATE();
    case 154:
      if (lookahead == 'E') ADVANCE(132);
      END_STATE();
    case 155:
      if (lookahead == 'E') ADVANCE(182);
      END_STATE();
    case 156:
      if (lookahead == 'E') ADVANCE(371);
      END_STATE();
    case 157:
      if (lookahead == 'E') ADVANCE(315);
      END_STATE();
    case 158:
      if (lookahead == 'E') ADVANCE(130);
      END_STATE();
    case 159:
      if (lookahead == 'E') ADVANCE(308);
      END_STATE();
    case 160:
      if (lookahead == 'E') ADVANCE(99);
      END_STATE();
    case 161:
      if (lookahead == 'E') ADVANCE(56);
      END_STATE();
    case 162:
      if (lookahead == 'E') ADVANCE(305);
      END_STATE();
    case 163:
      if (lookahead == 'E') ADVANCE(77);
      END_STATE();
    case 164:
      if (lookahead == 'E') ADVANCE(255);
      END_STATE();
    case 165:
      if (lookahead == 'E') ADVANCE(287);
      if (lookahead == 'R') ADVANCE(211);
      END_STATE();
    case 166:
      if (lookahead == 'E') ADVANCE(312);
      END_STATE();
    case 167:
      if (lookahead == 'E') ADVANCE(322);
      END_STATE();
    case 168:
      if (lookahead == 'E') ADVANCE(300);
      END_STATE();
    case 169:
      if (lookahead == 'E') ADVANCE(259);
      END_STATE();
    case 170:
      if (lookahead == 'E') ADVANCE(302);
      END_STATE();
    case 171:
      if (lookahead == 'E') ADVANCE(341);
      END_STATE();
    case 172:
      if (lookahead == 'E') ADVANCE(256);
      END_STATE();
    case 173:
      if (lookahead == 'E') ADVANCE(332);
      END_STATE();
    case 174:
      if (lookahead == 'E') ADVANCE(337);
      END_STATE();
    case 175:
      if (lookahead == 'E') ADVANCE(70);
      END_STATE();
    case 176:
      if (lookahead == 'E') ADVANCE(169);
      END_STATE();
    case 177:
      if (lookahead == 'E') ADVANCE(101);
      END_STATE();
    case 178:
      if (lookahead == 'E') ADVANCE(102);
      END_STATE();
    case 179:
      if (lookahead == 'E') ADVANCE(349);
      if (lookahead == 'T') ADVANCE(307);
      END_STATE();
    case 180:
      if (lookahead == 'F') ADVANCE(499);
      if (lookahead == 'N') ADVANCE(515);
      if (lookahead == 'S') ADVANCE(582);
      END_STATE();
    case 181:
      if (lookahead == 'F') ADVANCE(183);
      if (lookahead == 'R') ADVANCE(453);
      END_STATE();
    case 182:
      if (lookahead == 'F') ADVANCE(470);
      END_STATE();
    case 183:
      if (lookahead == 'F') ADVANCE(321);
      END_STATE();
    case 184:
      if (lookahead == 'G') ADVANCE(598);
      END_STATE();
    case 185:
      if (lookahead == 'G') ADVANCE(537);
      END_STATE();
    case 186:
      if (lookahead == 'G') ADVANCE(597);
      END_STATE();
    case 187:
      if (lookahead == 'G') ADVANCE(78);
      END_STATE();
    case 188:
      if (lookahead == 'G') ADVANCE(139);
      END_STATE();
    case 189:
      if (lookahead == 'G') ADVANCE(144);
      END_STATE();
    case 190:
      if (lookahead == 'G') ADVANCE(67);
      END_STATE();
    case 191:
      if (lookahead == 'H') ADVANCE(137);
      END_STATE();
    case 192:
      if (lookahead == 'H') ADVANCE(459);
      END_STATE();
    case 193:
      if (lookahead == 'H') ADVANCE(512);
      END_STATE();
    case 194:
      if (lookahead == 'H') ADVANCE(164);
      END_STATE();
    case 195:
      if (lookahead == 'H') ADVANCE(164);
      if (lookahead == 'R') ADVANCE(358);
      END_STATE();
    case 196:
      if (lookahead == 'H') ADVANCE(164);
      if (lookahead == 'R') ADVANCE(358);
      if (lookahead == 'U') ADVANCE(293);
      if (lookahead == 'Y') ADVANCE(290);
      END_STATE();
    case 197:
      if (lookahead == 'H') ADVANCE(136);
      END_STATE();
    case 198:
      if (lookahead == 'H') ADVANCE(172);
      END_STATE();
    case 199:
      if (lookahead == 'I') ADVANCE(220);
      END_STATE();
    case 200:
      if (lookahead == 'I') ADVANCE(219);
      END_STATE();
    case 201:
      if (lookahead == 'I') ADVANCE(249);
      END_STATE();
    case 202:
      if (lookahead == 'I') ADVANCE(218);
      END_STATE();
    case 203:
      if (lookahead == 'I') ADVANCE(90);
      END_STATE();
    case 204:
      if (lookahead == 'I') ADVANCE(251);
      END_STATE();
    case 205:
      if (lookahead == 'I') ADVANCE(276);
      END_STATE();
    case 206:
      if (lookahead == 'I') ADVANCE(275);
      if (lookahead == 'R') ADVANCE(203);
      END_STATE();
    case 207:
      if (lookahead == 'I') ADVANCE(264);
      END_STATE();
    case 208:
      if (lookahead == 'I') ADVANCE(262);
      END_STATE();
    case 209:
      if (lookahead == 'I') ADVANCE(330);
      END_STATE();
    case 210:
      if (lookahead == 'I') ADVANCE(248);
      END_STATE();
    case 211:
      if (lookahead == 'I') ADVANCE(265);
      END_STATE();
    case 212:
      if (lookahead == 'I') ADVANCE(270);
      END_STATE();
    case 213:
      if (lookahead == 'I') ADVANCE(270);
      if (lookahead == 'N') ADVANCE(214);
      END_STATE();
    case 214:
      if (lookahead == 'I') ADVANCE(286);
      END_STATE();
    case 215:
      if (lookahead == 'I') ADVANCE(272);
      END_STATE();
    case 216:
      if (lookahead == 'J') ADVANCE(178);
      END_STATE();
    case 217:
      if (lookahead == 'K') ADVANCE(479);
      END_STATE();
    case 218:
      if (lookahead == 'K') ADVANCE(141);
      END_STATE();
    case 219:
      if (lookahead == 'K') ADVANCE(141);
      if (lookahead == 'M') ADVANCE(209);
      END_STATE();
    case 220:
      if (lookahead == 'K') ADVANCE(141);
      if (lookahead == 'M') ADVANCE(209);
      if (lookahead == 'S') ADVANCE(350);
      END_STATE();
    case 221:
      if (lookahead == 'L') ADVANCE(604);
      END_STATE();
    case 222:
      if (lookahead == 'L') ADVANCE(583);
      END_STATE();
    case 223:
      if (lookahead == 'L') ADVANCE(285);
      END_STATE();
    case 224:
      if (lookahead == 'L') ADVANCE(347);
      END_STATE();
    case 225:
      if (lookahead == 'L') ADVANCE(222);
      END_STATE();
    case 226:
      if (lookahead == 'L') ADVANCE(160);
      if (lookahead == 'T') ADVANCE(81);
      END_STATE();
    case 227:
      if (lookahead == 'L') ADVANCE(74);
      END_STATE();
    case 228:
      if (lookahead == 'L') ADVANCE(167);
      END_STATE();
    case 229:
      if (lookahead == 'L') ADVANCE(145);
      END_STATE();
    case 230:
      if (lookahead == 'L') ADVANCE(147);
      END_STATE();
    case 231:
      if (lookahead == 'L') ADVANCE(153);
      END_STATE();
    case 232:
      if (lookahead == 'L') ADVANCE(319);
      if (lookahead == 'N') ADVANCE(129);
      END_STATE();
    case 233:
      if (lookahead == 'L') ADVANCE(320);
      END_STATE();
    case 234:
      if (lookahead == 'M') ADVANCE(599);
      END_STATE();
    case 235:
      if (lookahead == 'M') ADVANCE(496);
      END_STATE();
    case 236:
      if (lookahead == 'M') ADVANCE(498);
      END_STATE();
    case 237:
      if (lookahead == 'M') ADVANCE(543);
      END_STATE();
    case 238:
      if (lookahead == 'M') ADVANCE(557);
      END_STATE();
    case 239:
      if (lookahead == 'M') ADVANCE(559);
      END_STATE();
    case 240:
      if (lookahead == 'M') ADVANCE(539);
      END_STATE();
    case 241:
      if (lookahead == 'M') ADVANCE(555);
      END_STATE();
    case 242:
      if (lookahead == 'M') ADVANCE(561);
      END_STATE();
    case 243:
      if (lookahead == 'M') ADVANCE(553);
      END_STATE();
    case 244:
      if (lookahead == 'M') ADVANCE(567);
      END_STATE();
    case 245:
      if (lookahead == 'M') ADVANCE(545);
      END_STATE();
    case 246:
      if (lookahead == 'M') ADVANCE(547);
      END_STATE();
    case 247:
      if (lookahead == 'M') ADVANCE(541);
      END_STATE();
    case 248:
      if (lookahead == 'M') ADVANCE(209);
      END_STATE();
    case 249:
      if (lookahead == 'M') ADVANCE(209);
      if (lookahead == 'S') ADVANCE(350);
      END_STATE();
    case 250:
      if (lookahead == 'M') ADVANCE(292);
      END_STATE();
    case 251:
      if (lookahead == 'M') ADVANCE(152);
      END_STATE();
    case 252:
      if (lookahead == 'N') ADVANCE(515);
      if (lookahead == 'S') ADVANCE(581);
      END_STATE();
    case 253:
      if (lookahead == 'N') ADVANCE(596);
      END_STATE();
    case 254:
      if (lookahead == 'N') ADVANCE(75);
      END_STATE();
    case 255:
      if (lookahead == 'N') ADVANCE(501);
      END_STATE();
    case 256:
      if (lookahead == 'N') ADVANCE(506);
      END_STATE();
    case 257:
      if (lookahead == 'N') ADVANCE(506);
      if (lookahead == 'R') ADVANCE(146);
      END_STATE();
    case 258:
      if (lookahead == 'N') ADVANCE(485);
      END_STATE();
    case 259:
      if (lookahead == 'N') ADVANCE(584);
      END_STATE();
    case 260:
      if (lookahead == 'N') ADVANCE(514);
      END_STATE();
    case 261:
      if (lookahead == 'N') ADVANCE(514);
      if (lookahead == 'S') ADVANCE(581);
      END_STATE();
    case 262:
      if (lookahead == 'N') ADVANCE(595);
      END_STATE();
    case 263:
      if (lookahead == 'N') ADVANCE(214);
      END_STATE();
    case 264:
      if (lookahead == 'N') ADVANCE(353);
      END_STATE();
    case 265:
      if (lookahead == 'N') ADVANCE(185);
      END_STATE();
    case 266:
      if (lookahead == 'N') ADVANCE(127);
      END_STATE();
    case 267:
      if (lookahead == 'N') ADVANCE(127);
      if (lookahead == 'S') ADVANCE(96);
      END_STATE();
    case 268:
      if (lookahead == 'N') ADVANCE(133);
      if (lookahead == 'R') ADVANCE(304);
      if (lookahead == 'V') ADVANCE(190);
      END_STATE();
    case 269:
      if (lookahead == 'N') ADVANCE(342);
      END_STATE();
    case 270:
      if (lookahead == 'N') ADVANCE(327);
      END_STATE();
    case 271:
      if (lookahead == 'N') ADVANCE(328);
      END_STATE();
    case 272:
      if (lookahead == 'N') ADVANCE(331);
      END_STATE();
    case 273:
      if (lookahead == 'N') ADVANCE(338);
      END_STATE();
    case 274:
      if (lookahead == 'N') ADVANCE(189);
      END_STATE();
    case 275:
      if (lookahead == 'N') ADVANCE(100);
      END_STATE();
    case 276:
      if (lookahead == 'N') ADVANCE(366);
      END_STATE();
    case 277:
      if (lookahead == 'N') ADVANCE(348);
      END_STATE();
    case 278:
      if (lookahead == 'N') ADVANCE(87);
      END_STATE();
    case 279:
      if (lookahead == 'O') ADVANCE(511);
      END_STATE();
    case 280:
      if (lookahead == 'O') ADVANCE(235);
      END_STATE();
    case 281:
      if (lookahead == 'O') ADVANCE(325);
      END_STATE();
    case 282:
      if (lookahead == 'O') ADVANCE(325);
      if (lookahead == 'U') ADVANCE(225);
      END_STATE();
    case 283:
      if (lookahead == 'O') ADVANCE(221);
      END_STATE();
    case 284:
      if (lookahead == 'O') ADVANCE(254);
      END_STATE();
    case 285:
      if (lookahead == 'O') ADVANCE(76);
      END_STATE();
    case 286:
      if (lookahead == 'O') ADVANCE(258);
      END_STATE();
    case 287:
      if (lookahead == 'P') ADVANCE(521);
      END_STATE();
    case 288:
      if (lookahead == 'P') ADVANCE(192);
      END_STATE();
    case 289:
      if (lookahead == 'P') ADVANCE(227);
      END_STATE();
    case 290:
      if (lookahead == 'P') ADVANCE(154);
      END_STATE();
    case 291:
      if (lookahead == 'P') ADVANCE(311);
      if (lookahead == 'S') ADVANCE(177);
      END_STATE();
    case 292:
      if (lookahead == 'P') ADVANCE(339);
      END_STATE();
    case 293:
      if (lookahead == 'P') ADVANCE(229);
      END_STATE();
    case 294:
      if (lookahead == 'P') ADVANCE(79);
      if (lookahead == 'X') ADVANCE(594);
      END_STATE();
    case 295:
      if (lookahead == 'P') ADVANCE(79);
      if (lookahead == 'X') ADVANCE(80);
      END_STATE();
    case 296:
      if (lookahead == 'P') ADVANCE(82);
      END_STATE();
    case 297:
      if (lookahead == 'R') ADVANCE(68);
      END_STATE();
    case 298:
      if (lookahead == 'R') ADVANCE(453);
      END_STATE();
    case 299:
      if (lookahead == 'R') ADVANCE(458);
      END_STATE();
    case 300:
      if (lookahead == 'R') ADVANCE(571);
      END_STATE();
    case 301:
      if (lookahead == 'R') ADVANCE(457);
      END_STATE();
    case 302:
      if (lookahead == 'R') ADVANCE(291);
      END_STATE();
    case 303:
      if (lookahead == 'R') ADVANCE(215);
      END_STATE();
    case 304:
      if (lookahead == 'R') ADVANCE(55);
      END_STATE();
    case 305:
      if (lookahead == 'R') ADVANCE(373);
      END_STATE();
    case 306:
      if (lookahead == 'R') ADVANCE(71);
      END_STATE();
    case 307:
      if (lookahead == 'R') ADVANCE(211);
      END_STATE();
    case 308:
      if (lookahead == 'R') ADVANCE(343);
      END_STATE();
    case 309:
      if (lookahead == 'R') ADVANCE(306);
      END_STATE();
    case 310:
      if (lookahead == 'R') ADVANCE(163);
      END_STATE();
    case 311:
      if (lookahead == 'R') ADVANCE(174);
      END_STATE();
    case 312:
      if (lookahead == 'R') ADVANCE(323);
      END_STATE();
    case 313:
      if (lookahead == 'R') ADVANCE(85);
      END_STATE();
    case 314:
      if (lookahead == 'S') ADVANCE(487);
      END_STATE();
    case 315:
      if (lookahead == 'S') ADVANCE(95);
      END_STATE();
    case 316:
      if (lookahead == 'S') ADVANCE(138);
      END_STATE();
    case 317:
      if (lookahead == 'S') ADVANCE(284);
      END_STATE();
    case 318:
      if (lookahead == 'S') ADVANCE(326);
      END_STATE();
    case 319:
      if (lookahead == 'S') ADVANCE(140);
      END_STATE();
    case 320:
      if (lookahead == 'S') ADVANCE(143);
      END_STATE();
    case 321:
      if (lookahead == 'S') ADVANCE(173);
      END_STATE();
    case 322:
      if (lookahead == 'S') ADVANCE(104);
      END_STATE();
    case 323:
      if (lookahead == 'S') ADVANCE(177);
      END_STATE();
    case 324:
      if (lookahead == 'T') ADVANCE(369);
      END_STATE();
    case 325:
      if (lookahead == 'T') ADVANCE(579);
      END_STATE();
    case 326:
      if (lookahead == 'T') ADVANCE(206);
      END_STATE();
    case 327:
      if (lookahead == 'T') ADVANCE(606);
      END_STATE();
    case 328:
      if (lookahead == 'T') ADVANCE(591);
      END_STATE();
    case 329:
      if (lookahead == 'T') ADVANCE(533);
      END_STATE();
    case 330:
      if (lookahead == 'T') ADVANCE(510);
      END_STATE();
    case 331:
      if (lookahead == 'T') ADVANCE(600);
      END_STATE();
    case 332:
      if (lookahead == 'T') ADVANCE(523);
      END_STATE();
    case 333:
      if (lookahead == 'T') ADVANCE(494);
      END_STATE();
    case 334:
      if (lookahead == 'T') ADVANCE(574);
      END_STATE();
    case 335:
      if (lookahead == 'T') ADVANCE(486);
      END_STATE();
    case 336:
      if (lookahead == 'T') ADVANCE(612);
      END_STATE();
    case 337:
      if (lookahead == 'T') ADVANCE(462);
      END_STATE();
    case 338:
      if (lookahead == 'T') ADVANCE(531);
      END_STATE();
    case 339:
      if (lookahead == 'T') ADVANCE(374);
      END_STATE();
    case 340:
      if (lookahead == 'T') ADVANCE(171);
      END_STATE();
    case 341:
      if (lookahead == 'T') ADVANCE(204);
      END_STATE();
    case 342:
      if (lookahead == 'T') ADVANCE(57);
      END_STATE();
    case 343:
      if (lookahead == 'T') ADVANCE(156);
      END_STATE();
    case 344:
      if (lookahead == 'T') ADVANCE(148);
      END_STATE();
    case 345:
      if (lookahead == 'T') ADVANCE(158);
      END_STATE();
    case 346:
      if (lookahead == 'T') ADVANCE(205);
      END_STATE();
    case 347:
      if (lookahead == 'T') ADVANCE(168);
      END_STATE();
    case 348:
      if (lookahead == 'T') ADVANCE(170);
      END_STATE();
    case 349:
      if (lookahead == 'T') ADVANCE(81);
      END_STATE();
    case 350:
      if (lookahead == 'T') ADVANCE(83);
      END_STATE();
    case 351:
      if (lookahead == 'U') ADVANCE(236);
      END_STATE();
    case 352:
      if (lookahead == 'U') ADVANCE(91);
      END_STATE();
    case 353:
      if (lookahead == 'U') ADVANCE(314);
      END_STATE();
    case 354:
      if (lookahead == 'U') ADVANCE(237);
      END_STATE();
    case 355:
      if (lookahead == 'U') ADVANCE(238);
      END_STATE();
    case 356:
      if (lookahead == 'U') ADVANCE(239);
      END_STATE();
    case 357:
      if (lookahead == 'U') ADVANCE(240);
      END_STATE();
    case 358:
      if (lookahead == 'U') ADVANCE(142);
      END_STATE();
    case 359:
      if (lookahead == 'U') ADVANCE(241);
      END_STATE();
    case 360:
      if (lookahead == 'U') ADVANCE(242);
      END_STATE();
    case 361:
      if (lookahead == 'U') ADVANCE(243);
      END_STATE();
    case 362:
      if (lookahead == 'U') ADVANCE(244);
      END_STATE();
    case 363:
      if (lookahead == 'U') ADVANCE(245);
      END_STATE();
    case 364:
      if (lookahead == 'U') ADVANCE(246);
      END_STATE();
    case 365:
      if (lookahead == 'U') ADVANCE(247);
      END_STATE();
    case 366:
      if (lookahead == 'U') ADVANCE(151);
      END_STATE();
    case 367:
      if (lookahead == 'U') ADVANCE(162);
      END_STATE();
    case 368:
      if (lookahead == 'U') ADVANCE(345);
      END_STATE();
    case 369:
      if (lookahead == 'W') ADVANCE(176);
      END_STATE();
    case 370:
      if (lookahead == 'X') ADVANCE(460);
      END_STATE();
    case 371:
      if (lookahead == 'X') ADVANCE(608);
      END_STATE();
    case 372:
      if (lookahead == 'X') ADVANCE(593);
      END_STATE();
    case 373:
      if (lookahead == 'Y') ADVANCE(456);
      END_STATE();
    case 374:
      if (lookahead == 'Y') ADVANCE(576);
      END_STATE();
    case 375:
      if (lookahead == 'Y') ADVANCE(614);
      END_STATE();
    case 376:
      if (lookahead == 'Y') ADVANCE(84);
      END_STATE();
    case 377:
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 378:
      if (lookahead == '_') ADVANCE(390);
      END_STATE();
    case 379:
      if (lookahead == '_') ADVANCE(404);
      END_STATE();
    case 380:
      if (lookahead == '_') ADVANCE(50);
      END_STATE();
    case 381:
      if (lookahead == '_') ADVANCE(416);
      END_STATE();
    case 382:
      if (lookahead == '_') ADVANCE(412);
      END_STATE();
    case 383:
      if (lookahead == '_') ADVANCE(41);
      END_STATE();
    case 384:
      if (lookahead == 'a') ADVANCE(447);
      END_STATE();
    case 385:
      if (lookahead == 'a') ADVANCE(448);
      if (lookahead == 'i') ADVANCE(419);
      END_STATE();
    case 386:
      if (lookahead == 'a') ADVANCE(397);
      END_STATE();
    case 387:
      if (lookahead == 'a') ADVANCE(398);
      END_STATE();
    case 388:
      if (lookahead == 'a') ADVANCE(399);
      END_STATE();
    case 389:
      if (lookahead == 'a') ADVANCE(400);
      END_STATE();
    case 390:
      if (lookahead == 'c') ADVANCE(431);
      END_STATE();
    case 391:
      if (lookahead == 'c') ADVANCE(392);
      END_STATE();
    case 392:
      if (lookahead == 'c') ADVANCE(440);
      END_STATE();
    case 393:
      if (lookahead == 'c') ADVANCE(441);
      END_STATE();
    case 394:
      if (lookahead == 'c') ADVANCE(442);
      END_STATE();
    case 395:
      if (lookahead == 'c') ADVANCE(443);
      END_STATE();
    case 396:
      if (lookahead == 'c') ADVANCE(444);
      END_STATE();
    case 397:
      if (lookahead == 'c') ADVANCE(393);
      END_STATE();
    case 398:
      if (lookahead == 'c') ADVANCE(394);
      END_STATE();
    case 399:
      if (lookahead == 'c') ADVANCE(395);
      END_STATE();
    case 400:
      if (lookahead == 'c') ADVANCE(396);
      END_STATE();
    case 401:
      if (lookahead == 'd') ADVANCE(389);
      END_STATE();
    case 402:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 403:
      if (lookahead == 'i') ADVANCE(434);
      END_STATE();
    case 404:
      if (lookahead == 'i') ADVANCE(420);
      if (lookahead == 'u') ADVANCE(406);
      END_STATE();
    case 405:
      if (lookahead == 'i') ADVANCE(432);
      END_STATE();
    case 406:
      if (lookahead == 'i') ADVANCE(421);
      END_STATE();
    case 407:
      if (lookahead == 'l') ADVANCE(528);
      END_STATE();
    case 408:
      if (lookahead == 'l') ADVANCE(407);
      END_STATE();
    case 409:
      if (lookahead == 'l') ADVANCE(379);
      END_STATE();
    case 410:
      if (lookahead == 'm') ADVANCE(529);
      END_STATE();
    case 411:
      if (lookahead == 'm') ADVANCE(522);
      END_STATE();
    case 412:
      if (lookahead == 'm') ADVANCE(385);
      END_STATE();
    case 413:
      if (lookahead == 'm') ADVANCE(565);
      END_STATE();
    case 414:
      if (lookahead == 'm') ADVANCE(549);
      END_STATE();
    case 415:
      if (lookahead == 'm') ADVANCE(551);
      END_STATE();
    case 416:
      if (lookahead == 'm') ADVANCE(384);
      END_STATE();
    case 417:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 418:
      if (lookahead == 'n') ADVANCE(401);
      END_STATE();
    case 419:
      if (lookahead == 'n') ADVANCE(884);
      END_STATE();
    case 420:
      if (lookahead == 'n') ADVANCE(436);
      END_STATE();
    case 421:
      if (lookahead == 'n') ADVANCE(437);
      END_STATE();
    case 422:
      if (lookahead == 'o') ADVANCE(433);
      END_STATE();
    case 423:
      if (lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 424:
      if (lookahead == 'o') ADVANCE(439);
      END_STATE();
    case 425:
      if (lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 426:
      if (lookahead == 'q') ADVANCE(409);
      END_STATE();
    case 427:
      if (lookahead == 'r') ADVANCE(424);
      END_STATE();
    case 428:
      if (lookahead == 'r') ADVANCE(424);
      if (lookahead == 's') ADVANCE(426);
      END_STATE();
    case 429:
      if (lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 430:
      if (lookahead == 's') ADVANCE(426);
      END_STATE();
    case 431:
      if (lookahead == 's') ADVANCE(445);
      END_STATE();
    case 432:
      if (lookahead == 's') ADVANCE(402);
      END_STATE();
    case 433:
      if (lookahead == 's') ADVANCE(435);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(446);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(381);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(382);
      END_STATE();
    case 438:
      if (lookahead == 'u') ADVANCE(417);
      END_STATE();
    case 439:
      if (lookahead == 'u') ADVANCE(425);
      END_STATE();
    case 440:
      if (lookahead == 'u') ADVANCE(410);
      END_STATE();
    case 441:
      if (lookahead == 'u') ADVANCE(411);
      END_STATE();
    case 442:
      if (lookahead == 'u') ADVANCE(413);
      END_STATE();
    case 443:
      if (lookahead == 'u') ADVANCE(414);
      END_STATE();
    case 444:
      if (lookahead == 'u') ADVANCE(415);
      END_STATE();
    case 445:
      if (lookahead == 'v') ADVANCE(602);
      END_STATE();
    case 446:
      if (lookahead == 'w') ADVANCE(405);
      END_STATE();
    case 447:
      if (lookahead == 'x') ADVANCE(882);
      END_STATE();
    case 448:
      if (lookahead == 'x') ADVANCE(880);
      END_STATE();
    case 449:
      if (lookahead == 'y') ADVANCE(387);
      END_STATE();
    case 450:
      if (eof) ADVANCE(451);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(887);
      if (lookahead == '%') ADVANCE(898);
      if (lookahead == '&') ADVANCE(903);
      if (lookahead == '\'') ADVANCE(892);
      if (lookahead == '(') ADVANCE(463);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '*') ADVANCE(527);
      if (lookahead == '+') ADVANCE(899);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(897);
      if (lookahead == ':') ADVANCE(516);
      if (lookahead == ';') ADVANCE(478);
      if (lookahead == '<') ADVANCE(474);
      if (lookahead == '=') ADVANCE(466);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(94);
      if (lookahead == 'C') ADVANCE(310);
      if (lookahead == 'D') ADVANCE(279);
      if (lookahead == 'E') ADVANCE(232);
      if (lookahead == 'F') ADVANCE(53);
      if (lookahead == 'I') ADVANCE(277);
      if (lookahead == 'L') ADVANCE(210);
      if (lookahead == 'M') ADVANCE(69);
      if (lookahead == 'O') ADVANCE(181);
      if (lookahead == 'T') ADVANCE(195);
      if (lookahead == 'U') ADVANCE(263);
      if (lookahead == 'W') ADVANCE(197);
      if (lookahead == '[') ADVANCE(519);
      if (lookahead == ']') ADVANCE(520);
      if (lookahead == 'g') ADVANCE(430);
      if (lookahead == 'p') ADVANCE(422);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(450)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(886);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_CREATE);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_REPLACE);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_DISTRIBUTED);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_QUERY);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == 'E') ADVANCE(72);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_GRAPH);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_SYNTAX);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_v2);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_INTERPRET);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(906);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_TYPEDEF);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_TYPEDEF);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_TUPLE);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(901);
      if (lookahead == '=') ADVANCE(904);
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(901);
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(905);
      if (lookahead == '>') ADVANCE(902);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_BREAK);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_BREAK);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_CONTINUE);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_CONTINUE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(492);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_UNION);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_INTERSECT);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_MINUS);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym__);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_ANY);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_ANY);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_SELECT);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_SELECT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_WHERE);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_ACCUM);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_IF);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_THEN);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_CASE);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_CASE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_WHEN);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_WHEN);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_WHILE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_LIMIT);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_DO);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_FOREACH);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_FOREACH);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == 'T') ADVANCE(166);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_RANGE);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_RANGE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_STEP);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_post_DASHaccum);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_OFFSET);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(578);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_sumAccum);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_sumAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_INT);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_INT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_DOUBLE);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_DOUBLE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_STRING);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_STRING);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_MAXACCUM);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_MAXACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_MINACCUM);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_MINACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_AVGACCUM);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_AVGACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_ORACCUM);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_ORACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_ANDACCUM);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_ANDACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_bitwiseOraccum);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_bitwiseOraccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_bitwiseAndaccum);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_bitwiseAndaccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_LISTACCUM);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_LISTACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_SETACCUM);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_SETACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_BAGACCUM);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_BAGACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_MAPACCUM);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_MAPACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_HEAPACCUM);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_HEAPACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_ASC);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_DESC);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_groupByaccum);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_groupByaccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_ARRAYACCUM);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_ARRAYACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(569);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_FILTER);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_COALESCE);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_COALESCE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_DISTINCT);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_DISTINCT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_ISEMPTY);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_ISEMPTY);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_NOT);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_NOT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_IS);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_IS);
      if (lookahead == 'E') ADVANCE(250);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_BETWEEN);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_LIKE);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_COUNT);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_COUNT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_MAX);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_MAX);
      if (lookahead == 'A') ADVANCE(119);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_MIN);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_MIN);
      if (lookahead == 'U') ADVANCE(314);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_AVG);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_AVG);
      if (lookahead == 'A') ADVANCE(116);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_SUM);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_PRINT);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_PRINT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_to_csv);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_AS);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_BOOL);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_BOOL);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_UINT);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_UINT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_VERTEX);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_VERTEX);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_EDGE);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_EDGE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_JSONOBJECT);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_JSONOBJECT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_JSONARRAY);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_JSONARRAY);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_DATETIME);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_DATETIME);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(796);
      if (lookahead == 'O') ADVANCE(805);
      if (sym_name_character_set_6(lookahead)) ADVANCE(879);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(769);
      if (lookahead == 'I') ADVANCE(759);
      if (sym_name_character_set_6(lookahead)) ADVANCE(879);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(651);
      if (sym_name_character_set_6(lookahead)) ADVANCE(879);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(724);
      if (sym_name_character_set_6(lookahead)) ADVANCE(879);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(833);
      if (sym_name_character_set_6(lookahead)) ADVANCE(879);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(855);
      if (lookahead == 'O') ADVANCE(863);
      if (sym_name_character_set_6(lookahead)) ADVANCE(879);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(780);
      if (lookahead == 'O') ADVANCE(752);
      if (sym_name_character_set_6(lookahead)) ADVANCE(879);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(824);
      if (sym_name_character_set_6(lookahead)) ADVANCE(879);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(770);
      if (sym_name_character_set_6(lookahead)) ADVANCE(879);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(821);
      if (sym_name_character_set_6(lookahead)) ADVANCE(879);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(732);
      if (sym_name_character_set_6(lookahead)) ADVANCE(879);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(649);
      if (sym_name_character_set_6(lookahead)) ADVANCE(879);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(778);
      if (lookahead == 'O') ADVANCE(646);
      if (sym_name_character_set_6(lookahead)) ADVANCE(879);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(789);
      if (sym_name_character_set_6(lookahead)) ADVANCE(879);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(757);
      if (sym_name_character_set_6(lookahead)) ADVANCE(879);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(730);
      if (lookahead == 'U') ADVANCE(756);
      if (sym_name_character_set_6(lookahead)) ADVANCE(879);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(657);
      if (sym_name_character_set_6(lookahead)) ADVANCE(879);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(659);
      if (sym_name_character_set_6(lookahead)) ADVANCE(879);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(661);
      if (sym_name_character_set_6(lookahead)) ADVANCE(879);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(663);
      if (sym_name_character_set_6(lookahead)) ADVANCE(879);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(665);
      if (sym_name_character_set_6(lookahead)) ADVANCE(879);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(667);
      if (sym_name_character_set_6(lookahead)) ADVANCE(879);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(669);
      if (sym_name_character_set_6(lookahead)) ADVANCE(879);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(671);
      if (sym_name_character_set_6(lookahead)) ADVANCE(879);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(673);
      if (sym_name_character_set_6(lookahead)) ADVANCE(879);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(675);
      if (sym_name_character_set_6(lookahead)) ADVANCE(879);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(710);
      if (lookahead == 'O') ADVANCE(762);
      if (lookahead == 'R') ADVANCE(695);
      if (sym_name_character_set_6(lookahead)) ADVANCE(879);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(710);
      if (lookahead == 'O') ADVANCE(762);
      if (sym_name_character_set_6(lookahead)) ADVANCE(879);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B') ADVANCE(723);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B') ADVANCE(878);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B') ADVANCE(729);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(711);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(806);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(650);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(791);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(793);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(795);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(690);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(807);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(656);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(808);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(658);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(809);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(660);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(810);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(662);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(811);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(664);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(812);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(666);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(813);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(668);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(814);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(670);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(816);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(672);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(817);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(674);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D') ADVANCE(707);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D') ADVANCE(685);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D') ADVANCE(634);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(626);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(505);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(611);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(819);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(509);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(536);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(705);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(482);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(617);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(587);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(589);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(573);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(518);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(677);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(803);
      if (lookahead == 'T') ADVANCE(773);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(782);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(621);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(652);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(775);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(746);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(799);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(629);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(744);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(653);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(731);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'F') ADVANCE(500);
      if (lookahead == 'N') ADVANCE(787);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'F') ADVANCE(471);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(538);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(681);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(691);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(635);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(636);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(513);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(715);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(698);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(745);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(728);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(786);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(750);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(751);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(758);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(754);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(785);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(755);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'J') ADVANCE(696);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'K') ADVANCE(480);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(605);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(765);
      if (lookahead == 'O') ADVANCE(777);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(765);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(683);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(684);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(694);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(702);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(784);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(546);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(548);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(544);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(558);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(560);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(540);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(542);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(556);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(562);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(554);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(568);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(768);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(687);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(507);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(678);
      if (lookahead == 'R') ADVANCE(772);
      if (lookahead == 'V') ADVANCE(709);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(787);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(630);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(706);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(815);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(801);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(823);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(788);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(790);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(792);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(708);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(654);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(639);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(762);
      if (lookahead == 'R') ADVANCE(695);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(762);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(725);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(633);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(749);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(631);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(794);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(692);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(798);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(637);
      if (lookahead == 'X') ADVANCE(638);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(641);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(620);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(625);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(717);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(627);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(800);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(818);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(700);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(774);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(722);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(680);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(764);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(655);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(701);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(689);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(802);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(804);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(532);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(607);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(534);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(601);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(613);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(592);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(495);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(580);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(575);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(699);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(773);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(822);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(714);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(682);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(718);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(719);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(640);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(642);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(648);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(733);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(734);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(735);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(736);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(737);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(738);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(739);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(740);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(741);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(686);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(742);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(743);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(688);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'X') ADVANCE(609);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(767);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(615);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(577);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(491);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(643);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(845);
      if (sym_name_character_set_7(lookahead)) ADVANCE(879);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(853);
      if (sym_name_character_set_7(lookahead)) ADVANCE(879);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(852);
      if (sym_name_character_set_7(lookahead)) ADVANCE(879);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(876);
      if (sym_name_character_set_8(lookahead)) ADVANCE(879);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(877);
      if (lookahead == 'i') ADVANCE(856);
      if (sym_name_character_set_8(lookahead)) ADVANCE(879);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(838);
      if (sym_name_character_set_8(lookahead)) ADVANCE(879);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(839);
      if (sym_name_character_set_8(lookahead)) ADVANCE(879);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(840);
      if (sym_name_character_set_8(lookahead)) ADVANCE(879);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(834);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(871);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(872);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(873);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(874);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(835);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(836);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(837);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(832);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(623);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(866);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(864);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(857);
      if (lookahead == 'u') ADVANCE(846);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(858);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(825);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(530);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(566);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(550);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(552);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(829);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(828);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(622);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(841);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(885);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(867);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(868);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(870);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(647);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'q') ADVANCE(847);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(859);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(831);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(842);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(861);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(875);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(826);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(827);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(854);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(860);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(848);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(849);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(850);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(851);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'w') ADVANCE(844);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'x') ADVANCE(883);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'x') ADVANCE(881);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(830);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_gsql_uint_max);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_gsql_uint_max);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_gsql_int_max);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_gsql_int_max);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_gsql_uint_min);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_gsql_uint_min);
      if (sym_name_character_set_5(lookahead)) ADVANCE(879);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_digit);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(909);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(889);
      if (lookahead == '<') ADVANCE(891);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '&') ADVANCE(888);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(909);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == '<') ADVANCE(896);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(895);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '\'') ADVANCE(893);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(909);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(493);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(909);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 450},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 16},
  [42] = {.lex_state = 16},
  [43] = {.lex_state = 16},
  [44] = {.lex_state = 16},
  [45] = {.lex_state = 16},
  [46] = {.lex_state = 16},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 16},
  [49] = {.lex_state = 16},
  [50] = {.lex_state = 16},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 16},
  [53] = {.lex_state = 16},
  [54] = {.lex_state = 16},
  [55] = {.lex_state = 16},
  [56] = {.lex_state = 16},
  [57] = {.lex_state = 16},
  [58] = {.lex_state = 16},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 16},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 16},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 26},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 42},
  [75] = {.lex_state = 14},
  [76] = {.lex_state = 42},
  [77] = {.lex_state = 42},
  [78] = {.lex_state = 42},
  [79] = {.lex_state = 42},
  [80] = {.lex_state = 42},
  [81] = {.lex_state = 42},
  [82] = {.lex_state = 42},
  [83] = {.lex_state = 42},
  [84] = {.lex_state = 42},
  [85] = {.lex_state = 42},
  [86] = {.lex_state = 42},
  [87] = {.lex_state = 42},
  [88] = {.lex_state = 42},
  [89] = {.lex_state = 42},
  [90] = {.lex_state = 450},
  [91] = {.lex_state = 25},
  [92] = {.lex_state = 25},
  [93] = {.lex_state = 23},
  [94] = {.lex_state = 23},
  [95] = {.lex_state = 23},
  [96] = {.lex_state = 25},
  [97] = {.lex_state = 23},
  [98] = {.lex_state = 23},
  [99] = {.lex_state = 23},
  [100] = {.lex_state = 25},
  [101] = {.lex_state = 23},
  [102] = {.lex_state = 23},
  [103] = {.lex_state = 23},
  [104] = {.lex_state = 23},
  [105] = {.lex_state = 25},
  [106] = {.lex_state = 25},
  [107] = {.lex_state = 25},
  [108] = {.lex_state = 23},
  [109] = {.lex_state = 25},
  [110] = {.lex_state = 25},
  [111] = {.lex_state = 25},
  [112] = {.lex_state = 27},
  [113] = {.lex_state = 25},
  [114] = {.lex_state = 25},
  [115] = {.lex_state = 23},
  [116] = {.lex_state = 25},
  [117] = {.lex_state = 23},
  [118] = {.lex_state = 23},
  [119] = {.lex_state = 23},
  [120] = {.lex_state = 25},
  [121] = {.lex_state = 27},
  [122] = {.lex_state = 25},
  [123] = {.lex_state = 23},
  [124] = {.lex_state = 25},
  [125] = {.lex_state = 23},
  [126] = {.lex_state = 25},
  [127] = {.lex_state = 23},
  [128] = {.lex_state = 23},
  [129] = {.lex_state = 25},
  [130] = {.lex_state = 25},
  [131] = {.lex_state = 25},
  [132] = {.lex_state = 25},
  [133] = {.lex_state = 23},
  [134] = {.lex_state = 23},
  [135] = {.lex_state = 23},
  [136] = {.lex_state = 23},
  [137] = {.lex_state = 23},
  [138] = {.lex_state = 23},
  [139] = {.lex_state = 23},
  [140] = {.lex_state = 16},
  [141] = {.lex_state = 23},
  [142] = {.lex_state = 23},
  [143] = {.lex_state = 23},
  [144] = {.lex_state = 23},
  [145] = {.lex_state = 23},
  [146] = {.lex_state = 23},
  [147] = {.lex_state = 18},
  [148] = {.lex_state = 23},
  [149] = {.lex_state = 23},
  [150] = {.lex_state = 23},
  [151] = {.lex_state = 23},
  [152] = {.lex_state = 23},
  [153] = {.lex_state = 23},
  [154] = {.lex_state = 23},
  [155] = {.lex_state = 23},
  [156] = {.lex_state = 23},
  [157] = {.lex_state = 23},
  [158] = {.lex_state = 23},
  [159] = {.lex_state = 23},
  [160] = {.lex_state = 23},
  [161] = {.lex_state = 23},
  [162] = {.lex_state = 23},
  [163] = {.lex_state = 23},
  [164] = {.lex_state = 23},
  [165] = {.lex_state = 23},
  [166] = {.lex_state = 16},
  [167] = {.lex_state = 23},
  [168] = {.lex_state = 23},
  [169] = {.lex_state = 23},
  [170] = {.lex_state = 23},
  [171] = {.lex_state = 23},
  [172] = {.lex_state = 18},
  [173] = {.lex_state = 23},
  [174] = {.lex_state = 23},
  [175] = {.lex_state = 23},
  [176] = {.lex_state = 23},
  [177] = {.lex_state = 23},
  [178] = {.lex_state = 23},
  [179] = {.lex_state = 16},
  [180] = {.lex_state = 18},
  [181] = {.lex_state = 18},
  [182] = {.lex_state = 18},
  [183] = {.lex_state = 18},
  [184] = {.lex_state = 18},
  [185] = {.lex_state = 18},
  [186] = {.lex_state = 18},
  [187] = {.lex_state = 18},
  [188] = {.lex_state = 16},
  [189] = {.lex_state = 18},
  [190] = {.lex_state = 18},
  [191] = {.lex_state = 18},
  [192] = {.lex_state = 450},
  [193] = {.lex_state = 43},
  [194] = {.lex_state = 450},
  [195] = {.lex_state = 18},
  [196] = {.lex_state = 18},
  [197] = {.lex_state = 18},
  [198] = {.lex_state = 18},
  [199] = {.lex_state = 18},
  [200] = {.lex_state = 18},
  [201] = {.lex_state = 18},
  [202] = {.lex_state = 20},
  [203] = {.lex_state = 20},
  [204] = {.lex_state = 20},
  [205] = {.lex_state = 20},
  [206] = {.lex_state = 18},
  [207] = {.lex_state = 20},
  [208] = {.lex_state = 18},
  [209] = {.lex_state = 20},
  [210] = {.lex_state = 20},
  [211] = {.lex_state = 20},
  [212] = {.lex_state = 20},
  [213] = {.lex_state = 20},
  [214] = {.lex_state = 20},
  [215] = {.lex_state = 20},
  [216] = {.lex_state = 20},
  [217] = {.lex_state = 20},
  [218] = {.lex_state = 20},
  [219] = {.lex_state = 20},
  [220] = {.lex_state = 20},
  [221] = {.lex_state = 20},
  [222] = {.lex_state = 20},
  [223] = {.lex_state = 20},
  [224] = {.lex_state = 20},
  [225] = {.lex_state = 20},
  [226] = {.lex_state = 20},
  [227] = {.lex_state = 20},
  [228] = {.lex_state = 20},
  [229] = {.lex_state = 20},
  [230] = {.lex_state = 20},
  [231] = {.lex_state = 20},
  [232] = {.lex_state = 20},
  [233] = {.lex_state = 20},
  [234] = {.lex_state = 20},
  [235] = {.lex_state = 20},
  [236] = {.lex_state = 20},
  [237] = {.lex_state = 20},
  [238] = {.lex_state = 20},
  [239] = {.lex_state = 450},
  [240] = {.lex_state = 450},
  [241] = {.lex_state = 450},
  [242] = {.lex_state = 18},
  [243] = {.lex_state = 18},
  [244] = {.lex_state = 23},
  [245] = {.lex_state = 33},
  [246] = {.lex_state = 450},
  [247] = {.lex_state = 33},
  [248] = {.lex_state = 23},
  [249] = {.lex_state = 38},
  [250] = {.lex_state = 38},
  [251] = {.lex_state = 450},
  [252] = {.lex_state = 33},
  [253] = {.lex_state = 450},
  [254] = {.lex_state = 33},
  [255] = {.lex_state = 450},
  [256] = {.lex_state = 450},
  [257] = {.lex_state = 450},
  [258] = {.lex_state = 33},
  [259] = {.lex_state = 450},
  [260] = {.lex_state = 38},
  [261] = {.lex_state = 33},
  [262] = {.lex_state = 450},
  [263] = {.lex_state = 450},
  [264] = {.lex_state = 450},
  [265] = {.lex_state = 450},
  [266] = {.lex_state = 33},
  [267] = {.lex_state = 450},
  [268] = {.lex_state = 33},
  [269] = {.lex_state = 450},
  [270] = {.lex_state = 450},
  [271] = {.lex_state = 38},
  [272] = {.lex_state = 38},
  [273] = {.lex_state = 38},
  [274] = {.lex_state = 38},
  [275] = {.lex_state = 30},
  [276] = {.lex_state = 38},
  [277] = {.lex_state = 33},
  [278] = {.lex_state = 38},
  [279] = {.lex_state = 33},
  [280] = {.lex_state = 38},
  [281] = {.lex_state = 450},
  [282] = {.lex_state = 38},
  [283] = {.lex_state = 38},
  [284] = {.lex_state = 38},
  [285] = {.lex_state = 33},
  [286] = {.lex_state = 33},
  [287] = {.lex_state = 450},
  [288] = {.lex_state = 38},
  [289] = {.lex_state = 8},
  [290] = {.lex_state = 38},
  [291] = {.lex_state = 33},
  [292] = {.lex_state = 38},
  [293] = {.lex_state = 8},
  [294] = {.lex_state = 33},
  [295] = {.lex_state = 8},
  [296] = {.lex_state = 33},
  [297] = {.lex_state = 33},
  [298] = {.lex_state = 450},
  [299] = {.lex_state = 33},
  [300] = {.lex_state = 450},
  [301] = {.lex_state = 33},
  [302] = {.lex_state = 450},
  [303] = {.lex_state = 450},
  [304] = {.lex_state = 8},
  [305] = {.lex_state = 450},
  [306] = {.lex_state = 450},
  [307] = {.lex_state = 33},
  [308] = {.lex_state = 8},
  [309] = {.lex_state = 30},
  [310] = {.lex_state = 30},
  [311] = {.lex_state = 33},
  [312] = {.lex_state = 30},
  [313] = {.lex_state = 22},
  [314] = {.lex_state = 30},
  [315] = {.lex_state = 450},
  [316] = {.lex_state = 450},
  [317] = {.lex_state = 450},
  [318] = {.lex_state = 450},
  [319] = {.lex_state = 30},
  [320] = {.lex_state = 450},
  [321] = {.lex_state = 450},
  [322] = {.lex_state = 450},
  [323] = {.lex_state = 450},
  [324] = {.lex_state = 450},
  [325] = {.lex_state = 450},
  [326] = {.lex_state = 450},
  [327] = {.lex_state = 450},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 30},
  [330] = {.lex_state = 30},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 30},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 33},
  [337] = {.lex_state = 450},
  [338] = {.lex_state = 30},
  [339] = {.lex_state = 450},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 450},
  [342] = {.lex_state = 450},
  [343] = {.lex_state = 450},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 450},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 450},
  [348] = {.lex_state = 450},
  [349] = {.lex_state = 450},
  [350] = {.lex_state = 450},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 450},
  [353] = {.lex_state = 450},
  [354] = {.lex_state = 450},
  [355] = {.lex_state = 450},
  [356] = {.lex_state = 450},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 31},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 24},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 450},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 30},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 450},
  [374] = {.lex_state = 24},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 450},
  [378] = {.lex_state = 31},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 450},
  [381] = {.lex_state = 30},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 450},
  [384] = {.lex_state = 32},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 24},
  [387] = {.lex_state = 24},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 30},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 24},
  [392] = {.lex_state = 24},
  [393] = {.lex_state = 24},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 24},
  [397] = {.lex_state = 24},
  [398] = {.lex_state = 24},
  [399] = {.lex_state = 24},
  [400] = {.lex_state = 24},
  [401] = {.lex_state = 450},
  [402] = {.lex_state = 24},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 22},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 450},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 24},
  [410] = {.lex_state = 10},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 24},
  [414] = {.lex_state = 450},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 10},
  [418] = {.lex_state = 24},
  [419] = {.lex_state = 450},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 10},
  [422] = {.lex_state = 10},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 10},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 450},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 10},
  [430] = {.lex_state = 24},
  [431] = {.lex_state = 450},
  [432] = {.lex_state = 10},
  [433] = {.lex_state = 450},
  [434] = {.lex_state = 24},
  [435] = {.lex_state = 24},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 450},
  [440] = {.lex_state = 450},
  [441] = {.lex_state = 450},
  [442] = {.lex_state = 24},
  [443] = {.lex_state = 24},
  [444] = {.lex_state = 24},
  [445] = {.lex_state = 450},
  [446] = {.lex_state = 24},
  [447] = {.lex_state = 450},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 450},
  [450] = {.lex_state = 450},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 33},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 450},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 24},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 24},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 24},
  [463] = {.lex_state = 450},
  [464] = {.lex_state = 24},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 10},
  [470] = {.lex_state = 24},
  [471] = {.lex_state = 450},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 24},
  [474] = {.lex_state = 24},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 24},
  [477] = {.lex_state = 450},
  [478] = {.lex_state = 24},
  [479] = {.lex_state = 450},
  [480] = {.lex_state = 24},
  [481] = {.lex_state = 450},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 450},
  [486] = {.lex_state = 24},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 10},
  [489] = {.lex_state = 10},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 10},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 24},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 29},
  [505] = {.lex_state = 10},
  [506] = {.lex_state = 28},
  [507] = {.lex_state = 24},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 24},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 29},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 28},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 450},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 10},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 450},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 450},
  [527] = {.lex_state = 28},
  [528] = {.lex_state = 450},
  [529] = {.lex_state = 24},
  [530] = {.lex_state = 29},
  [531] = {.lex_state = 450},
  [532] = {.lex_state = 450},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 450},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 450},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 24},
  [543] = {.lex_state = 10},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 450},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 450},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 450},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 24},
  [557] = {.lex_state = 450},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 28},
  [561] = {.lex_state = 29},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 450},
  [565] = {.lex_state = 33},
  [566] = {.lex_state = 450},
  [567] = {.lex_state = 10},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 450},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 10},
  [572] = {.lex_state = 10},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 24},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 450},
  [577] = {.lex_state = 450},
  [578] = {.lex_state = 10},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 450},
  [582] = {.lex_state = 450},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 450},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 8},
  [587] = {.lex_state = 450},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 10},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 24},
  [595] = {.lex_state = 24},
  [596] = {.lex_state = 28},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 29},
  [599] = {.lex_state = 24},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 10},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 16},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 18},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 450},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 16},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 450},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 450},
  [631] = {.lex_state = 16},
  [632] = {.lex_state = 10},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 10},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 450},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 10},
  [654] = {.lex_state = 450},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 18},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 10},
  [662] = {.lex_state = 24},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 24},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 24},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 24},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 24},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 24},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 450},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 24},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 24},
  [700] = {.lex_state = 24},
  [701] = {.lex_state = 24},
  [702] = {.lex_state = 10},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 10},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 24},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 24},
  [716] = {.lex_state = 24},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 16},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 24},
  [727] = {.lex_state = 450},
  [728] = {.lex_state = 24},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 24},
  [731] = {.lex_state = 450},
  [732] = {.lex_state = 24},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 24},
  [736] = {.lex_state = 24},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 24},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 450},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 10},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 24},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 24},
  [759] = {.lex_state = 24},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 0},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 24},
  [766] = {.lex_state = 24},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 450},
  [770] = {.lex_state = 10},
  [771] = {.lex_state = 10},
  [772] = {.lex_state = 10},
  [773] = {.lex_state = 10},
  [774] = {.lex_state = 10},
  [775] = {.lex_state = 10},
  [776] = {.lex_state = 10},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 10},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 24},
  [784] = {.lex_state = 24},
  [785] = {.lex_state = 24},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 24},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 10},
  [797] = {.lex_state = 10},
  [798] = {.lex_state = 24},
  [799] = {.lex_state = 24},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 24},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 450},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 24},
  [811] = {.lex_state = 24},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 24},
  [815] = {.lex_state = 450},
  [816] = {.lex_state = 24},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 450},
  [821] = {.lex_state = 24},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 24},
  [826] = {.lex_state = 24},
  [827] = {.lex_state = 24},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 450},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 450},
  [834] = {.lex_state = 450},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 24},
  [840] = {.lex_state = 450},
  [841] = {.lex_state = 24},
  [842] = {.lex_state = 24},
  [843] = {.lex_state = 450},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 24},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 24},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 24},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 24},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 24},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 24},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 0},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 24},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 0},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 24},
  [873] = {.lex_state = 24},
  [874] = {.lex_state = 0},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_CREATE] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [anon_sym_REPLACE] = ACTIONS(1),
    [anon_sym_DISTRIBUTED] = ACTIONS(1),
    [anon_sym_QUERY] = ACTIONS(1),
    [anon_sym_FOR] = ACTIONS(1),
    [anon_sym_GRAPH] = ACTIONS(1),
    [anon_sym_SYNTAX] = ACTIONS(1),
    [anon_sym_v2] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_TYPEDEF] = ACTIONS(1),
    [anon_sym_TUPLE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_BREAK] = ACTIONS(1),
    [anon_sym_CONTINUE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_UNION] = ACTIONS(1),
    [anon_sym_INTERSECT] = ACTIONS(1),
    [anon_sym_MINUS] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_ANY] = ACTIONS(1),
    [anon_sym_DOT_STAR] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_SELECT] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_WHERE] = ACTIONS(1),
    [anon_sym_ACCUM] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_THEN] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [anon_sym_END] = ACTIONS(1),
    [anon_sym_CASE] = ACTIONS(1),
    [anon_sym_WHEN] = ACTIONS(1),
    [anon_sym_WHILE] = ACTIONS(1),
    [anon_sym_LIMIT] = ACTIONS(1),
    [anon_sym_DO] = ACTIONS(1),
    [anon_sym_FOREACH] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RANGE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_STEP] = ACTIONS(1),
    [anon_sym_post_DASHaccum] = ACTIONS(1),
    [anon_sym_OFFSET] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_all] = ACTIONS(1),
    [anon_sym_sumAccum] = ACTIONS(1),
    [anon_sym_FLOAT] = ACTIONS(1),
    [anon_sym_STRING] = ACTIONS(1),
    [anon_sym_MAXACCUM] = ACTIONS(1),
    [anon_sym_AVGACCUM] = ACTIONS(1),
    [anon_sym_bitwiseOraccum] = ACTIONS(1),
    [anon_sym_bitwiseAndaccum] = ACTIONS(1),
    [anon_sym_LISTACCUM] = ACTIONS(1),
    [anon_sym_SETACCUM] = ACTIONS(1),
    [anon_sym_BAGACCUM] = ACTIONS(1),
    [anon_sym_MAPACCUM] = ACTIONS(1),
    [anon_sym_HEAPACCUM] = ACTIONS(1),
    [anon_sym_DESC] = ACTIONS(1),
    [anon_sym_groupByaccum] = ACTIONS(1),
    [anon_sym_ARRAYACCUM] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_FILTER] = ACTIONS(1),
    [anon_sym_COALESCE] = ACTIONS(1),
    [anon_sym_DISTINCT] = ACTIONS(1),
    [anon_sym_ISEMPTY] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_NOT] = ACTIONS(1),
    [anon_sym_IS] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [anon_sym_BETWEEN] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_TRUE] = ACTIONS(1),
    [anon_sym_FALSE] = ACTIONS(1),
    [anon_sym_LIKE] = ACTIONS(1),
    [anon_sym_COUNT] = ACTIONS(1),
    [anon_sym_MAX] = ACTIONS(1),
    [anon_sym_MIN] = ACTIONS(1),
    [anon_sym_AVG] = ACTIONS(1),
    [anon_sym_SUM] = ACTIONS(1),
    [anon_sym_PRINT] = ACTIONS(1),
    [anon_sym_to_csv] = ACTIONS(1),
    [anon_sym_AS] = ACTIONS(1),
    [anon_sym_BOOL] = ACTIONS(1),
    [anon_sym_UINT] = ACTIONS(1),
    [anon_sym_VERTEX] = ACTIONS(1),
    [anon_sym_EDGE] = ACTIONS(1),
    [anon_sym_JSONOBJECT] = ACTIONS(1),
    [anon_sym_JSONARRAY] = ACTIONS(1),
    [anon_sym_DATETIME] = ACTIONS(1),
    [anon_sym_gsql_uint_max] = ACTIONS(1),
    [anon_sym_gsql_int_max] = ACTIONS(1),
    [anon_sym_gsql_uint_min] = ACTIONS(1),
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
    [sym_gsql] = STATE(862),
    [sym__definition] = STATE(380),
    [sym_create_query] = STATE(380),
    [sym_interpret_query] = STATE(380),
    [aux_sym_gsql_repeat1] = STATE(380),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_CREATE] = ACTIONS(7),
    [anon_sym_INTERPRET] = ACTIONS(9),
    [sym_newline] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_typedef] = STATE(51),
    [sym_query_body_stmts] = STATE(4),
    [sym_query_body_stmt] = STATE(764),
    [sym_assign_stmt] = STATE(777),
    [sym_v_set_var_decl_stmt] = STATE(777),
    [sym_l_accum_assign_stmt] = STATE(777),
    [sym_g_accum_assign_stmt] = STATE(777),
    [sym_g_accum_accum_stmt] = STATE(777),
    [sym_func_call_stmt] = STATE(777),
    [sym_select_stmt] = STATE(777),
    [sym_gsql_select_block] = STATE(763),
    [sym_gsql_select_clause] = STATE(628),
    [sym_query_body_case_stmt] = STATE(777),
    [sym_query_body_if_stmt] = STATE(777),
    [sym_query_body_while_stmt] = STATE(777),
    [sym_query_body_for_each_stmt] = STATE(777),
    [sym_decl_stmt] = STATE(777),
    [sym_base_decl_stmt] = STATE(761),
    [sym_accum_decl_stmt] = STATE(761),
    [sym_accum_type] = STATE(472),
    [sym_global_accum_name] = STATE(469),
    [sym_local_accum_name] = STATE(627),
    [sym_print_stmt] = STATE(777),
    [sym_base_type] = STATE(759),
    [aux_sym_query_body_repeat1] = STATE(51),
    [aux_sym_query_body_repeat2] = STATE(4),
    [anon_sym_RBRACE] = ACTIONS(11),
    [anon_sym_TYPEDEF] = ACTIONS(13),
    [anon_sym_BREAK] = ACTIONS(15),
    [anon_sym_CONTINUE] = ACTIONS(15),
    [anon_sym_IF] = ACTIONS(17),
    [anon_sym_CASE] = ACTIONS(19),
    [anon_sym_WHILE] = ACTIONS(21),
    [anon_sym_FOREACH] = ACTIONS(23),
    [anon_sym_sumAccum] = ACTIONS(25),
    [anon_sym_INT] = ACTIONS(27),
    [anon_sym_FLOAT] = ACTIONS(27),
    [anon_sym_DOUBLE] = ACTIONS(27),
    [anon_sym_STRING] = ACTIONS(27),
    [anon_sym_MAXACCUM] = ACTIONS(29),
    [anon_sym_MINACCUM] = ACTIONS(29),
    [anon_sym_AVGACCUM] = ACTIONS(31),
    [anon_sym_ORACCUM] = ACTIONS(31),
    [anon_sym_ANDACCUM] = ACTIONS(31),
    [anon_sym_bitwiseOraccum] = ACTIONS(31),
    [anon_sym_bitwiseAndaccum] = ACTIONS(31),
    [anon_sym_LISTACCUM] = ACTIONS(33),
    [anon_sym_SETACCUM] = ACTIONS(35),
    [anon_sym_BAGACCUM] = ACTIONS(35),
    [anon_sym_MAPACCUM] = ACTIONS(37),
    [anon_sym_HEAPACCUM] = ACTIONS(39),
    [anon_sym_groupByaccum] = ACTIONS(41),
    [anon_sym_ARRAYACCUM] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_PRINT] = ACTIONS(49),
    [anon_sym_BOOL] = ACTIONS(27),
    [anon_sym_UINT] = ACTIONS(27),
    [anon_sym_VERTEX] = ACTIONS(51),
    [anon_sym_EDGE] = ACTIONS(27),
    [anon_sym_JSONOBJECT] = ACTIONS(27),
    [anon_sym_JSONARRAY] = ACTIONS(27),
    [anon_sym_DATETIME] = ACTIONS(27),
    [sym_name] = ACTIONS(53),
    [sym_newline] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_typedef] = STATE(2),
    [sym_query_body_stmts] = STATE(5),
    [sym_query_body_stmt] = STATE(764),
    [sym_assign_stmt] = STATE(777),
    [sym_v_set_var_decl_stmt] = STATE(777),
    [sym_l_accum_assign_stmt] = STATE(777),
    [sym_g_accum_assign_stmt] = STATE(777),
    [sym_g_accum_accum_stmt] = STATE(777),
    [sym_func_call_stmt] = STATE(777),
    [sym_select_stmt] = STATE(777),
    [sym_gsql_select_block] = STATE(763),
    [sym_gsql_select_clause] = STATE(628),
    [sym_query_body_case_stmt] = STATE(777),
    [sym_query_body_if_stmt] = STATE(777),
    [sym_query_body_while_stmt] = STATE(777),
    [sym_query_body_for_each_stmt] = STATE(777),
    [sym_decl_stmt] = STATE(777),
    [sym_base_decl_stmt] = STATE(761),
    [sym_accum_decl_stmt] = STATE(761),
    [sym_accum_type] = STATE(472),
    [sym_global_accum_name] = STATE(469),
    [sym_local_accum_name] = STATE(627),
    [sym_print_stmt] = STATE(777),
    [sym_base_type] = STATE(759),
    [aux_sym_query_body_repeat1] = STATE(2),
    [aux_sym_query_body_repeat2] = STATE(5),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_TYPEDEF] = ACTIONS(13),
    [anon_sym_BREAK] = ACTIONS(15),
    [anon_sym_CONTINUE] = ACTIONS(15),
    [anon_sym_IF] = ACTIONS(17),
    [anon_sym_CASE] = ACTIONS(19),
    [anon_sym_WHILE] = ACTIONS(21),
    [anon_sym_FOREACH] = ACTIONS(23),
    [anon_sym_sumAccum] = ACTIONS(25),
    [anon_sym_INT] = ACTIONS(27),
    [anon_sym_FLOAT] = ACTIONS(27),
    [anon_sym_DOUBLE] = ACTIONS(27),
    [anon_sym_STRING] = ACTIONS(27),
    [anon_sym_MAXACCUM] = ACTIONS(29),
    [anon_sym_MINACCUM] = ACTIONS(29),
    [anon_sym_AVGACCUM] = ACTIONS(31),
    [anon_sym_ORACCUM] = ACTIONS(31),
    [anon_sym_ANDACCUM] = ACTIONS(31),
    [anon_sym_bitwiseOraccum] = ACTIONS(31),
    [anon_sym_bitwiseAndaccum] = ACTIONS(31),
    [anon_sym_LISTACCUM] = ACTIONS(33),
    [anon_sym_SETACCUM] = ACTIONS(35),
    [anon_sym_BAGACCUM] = ACTIONS(35),
    [anon_sym_MAPACCUM] = ACTIONS(37),
    [anon_sym_HEAPACCUM] = ACTIONS(39),
    [anon_sym_groupByaccum] = ACTIONS(41),
    [anon_sym_ARRAYACCUM] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_PRINT] = ACTIONS(49),
    [anon_sym_BOOL] = ACTIONS(27),
    [anon_sym_UINT] = ACTIONS(27),
    [anon_sym_VERTEX] = ACTIONS(51),
    [anon_sym_EDGE] = ACTIONS(27),
    [anon_sym_JSONOBJECT] = ACTIONS(27),
    [anon_sym_JSONARRAY] = ACTIONS(27),
    [anon_sym_DATETIME] = ACTIONS(27),
    [sym_name] = ACTIONS(53),
    [sym_newline] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 32,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_sumAccum,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_groupByaccum,
    ACTIONS(43), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(469), 1,
      sym_global_accum_name,
    STATE(472), 1,
      sym_accum_type,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(628), 1,
      sym_gsql_select_clause,
    STATE(759), 1,
      sym_base_type,
    STATE(763), 1,
      sym_gsql_select_block,
    STATE(764), 1,
      sym_query_body_stmt,
    ACTIONS(15), 2,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
    ACTIONS(29), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(35), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(6), 2,
      sym_query_body_stmts,
      aux_sym_query_body_repeat2,
    STATE(761), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_bitwiseOraccum,
      anon_sym_bitwiseAndaccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(777), 13,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_select_stmt,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [129] = 32,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_sumAccum,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_groupByaccum,
    ACTIONS(43), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    STATE(469), 1,
      sym_global_accum_name,
    STATE(472), 1,
      sym_accum_type,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(628), 1,
      sym_gsql_select_clause,
    STATE(759), 1,
      sym_base_type,
    STATE(763), 1,
      sym_gsql_select_block,
    STATE(764), 1,
      sym_query_body_stmt,
    ACTIONS(15), 2,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
    ACTIONS(29), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(35), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(6), 2,
      sym_query_body_stmts,
      aux_sym_query_body_repeat2,
    STATE(761), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_bitwiseOraccum,
      anon_sym_bitwiseAndaccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(777), 13,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_select_stmt,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [258] = 32,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(64), 1,
      anon_sym_IF,
    ACTIONS(67), 1,
      anon_sym_CASE,
    ACTIONS(70), 1,
      anon_sym_WHILE,
    ACTIONS(73), 1,
      anon_sym_FOREACH,
    ACTIONS(76), 1,
      anon_sym_sumAccum,
    ACTIONS(88), 1,
      anon_sym_LISTACCUM,
    ACTIONS(94), 1,
      anon_sym_MAPACCUM,
    ACTIONS(97), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(100), 1,
      anon_sym_groupByaccum,
    ACTIONS(103), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(106), 1,
      anon_sym_AT_AT,
    ACTIONS(109), 1,
      anon_sym_AT,
    ACTIONS(112), 1,
      anon_sym_PRINT,
    ACTIONS(115), 1,
      anon_sym_VERTEX,
    ACTIONS(118), 1,
      sym_name,
    STATE(469), 1,
      sym_global_accum_name,
    STATE(472), 1,
      sym_accum_type,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(628), 1,
      sym_gsql_select_clause,
    STATE(759), 1,
      sym_base_type,
    STATE(763), 1,
      sym_gsql_select_block,
    STATE(764), 1,
      sym_query_body_stmt,
    ACTIONS(61), 2,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
    ACTIONS(82), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(91), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(6), 2,
      sym_query_body_stmts,
      aux_sym_query_body_repeat2,
    STATE(761), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(85), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_bitwiseOraccum,
      anon_sym_bitwiseAndaccum,
    ACTIONS(79), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(777), 13,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_select_stmt,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [387] = 31,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_sumAccum,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_groupByaccum,
    ACTIONS(43), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    STATE(469), 1,
      sym_global_accum_name,
    STATE(472), 1,
      sym_accum_type,
    STATE(546), 1,
      sym_query_body_stmts,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(628), 1,
      sym_gsql_select_clause,
    STATE(759), 1,
      sym_base_type,
    STATE(763), 1,
      sym_gsql_select_block,
    STATE(800), 1,
      sym_query_body_stmt,
    ACTIONS(15), 2,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
    ACTIONS(29), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(35), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(761), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_bitwiseOraccum,
      anon_sym_bitwiseAndaccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(777), 13,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_select_stmt,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [512] = 31,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_sumAccum,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_groupByaccum,
    ACTIONS(43), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    STATE(469), 1,
      sym_global_accum_name,
    STATE(472), 1,
      sym_accum_type,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(628), 1,
      sym_gsql_select_clause,
    STATE(675), 1,
      sym_query_body_stmts,
    STATE(759), 1,
      sym_base_type,
    STATE(763), 1,
      sym_gsql_select_block,
    STATE(800), 1,
      sym_query_body_stmt,
    ACTIONS(15), 2,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
    ACTIONS(29), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(35), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(761), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_bitwiseOraccum,
      anon_sym_bitwiseAndaccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(777), 13,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_select_stmt,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [637] = 31,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_sumAccum,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_groupByaccum,
    ACTIONS(43), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    STATE(469), 1,
      sym_global_accum_name,
    STATE(472), 1,
      sym_accum_type,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(628), 1,
      sym_gsql_select_clause,
    STATE(657), 1,
      sym_query_body_stmts,
    STATE(759), 1,
      sym_base_type,
    STATE(763), 1,
      sym_gsql_select_block,
    STATE(800), 1,
      sym_query_body_stmt,
    ACTIONS(15), 2,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
    ACTIONS(29), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(35), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(761), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_bitwiseOraccum,
      anon_sym_bitwiseAndaccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(777), 13,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_select_stmt,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [762] = 31,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_sumAccum,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_groupByaccum,
    ACTIONS(43), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    STATE(469), 1,
      sym_global_accum_name,
    STATE(472), 1,
      sym_accum_type,
    STATE(496), 1,
      sym_query_body_stmts,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(628), 1,
      sym_gsql_select_clause,
    STATE(759), 1,
      sym_base_type,
    STATE(763), 1,
      sym_gsql_select_block,
    STATE(800), 1,
      sym_query_body_stmt,
    ACTIONS(15), 2,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
    ACTIONS(29), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(35), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(761), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_bitwiseOraccum,
      anon_sym_bitwiseAndaccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(777), 13,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_select_stmt,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [887] = 31,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_sumAccum,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_groupByaccum,
    ACTIONS(43), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    STATE(469), 1,
      sym_global_accum_name,
    STATE(472), 1,
      sym_accum_type,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(628), 1,
      sym_gsql_select_clause,
    STATE(663), 1,
      sym_query_body_stmts,
    STATE(759), 1,
      sym_base_type,
    STATE(763), 1,
      sym_gsql_select_block,
    STATE(800), 1,
      sym_query_body_stmt,
    ACTIONS(15), 2,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
    ACTIONS(29), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(35), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(761), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_bitwiseOraccum,
      anon_sym_bitwiseAndaccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(777), 13,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_select_stmt,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [1012] = 31,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_sumAccum,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_groupByaccum,
    ACTIONS(43), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    STATE(469), 1,
      sym_global_accum_name,
    STATE(472), 1,
      sym_accum_type,
    STATE(545), 1,
      sym_query_body_stmts,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(628), 1,
      sym_gsql_select_clause,
    STATE(759), 1,
      sym_base_type,
    STATE(763), 1,
      sym_gsql_select_block,
    STATE(800), 1,
      sym_query_body_stmt,
    ACTIONS(15), 2,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
    ACTIONS(29), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(35), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(761), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_bitwiseOraccum,
      anon_sym_bitwiseAndaccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(777), 13,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_select_stmt,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [1137] = 31,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_sumAccum,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_groupByaccum,
    ACTIONS(43), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    STATE(469), 1,
      sym_global_accum_name,
    STATE(472), 1,
      sym_accum_type,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(628), 1,
      sym_gsql_select_clause,
    STATE(759), 1,
      sym_base_type,
    STATE(762), 1,
      sym_query_body_stmts,
    STATE(763), 1,
      sym_gsql_select_block,
    STATE(800), 1,
      sym_query_body_stmt,
    ACTIONS(15), 2,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
    ACTIONS(29), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(35), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(761), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_bitwiseOraccum,
      anon_sym_bitwiseAndaccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(777), 13,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_select_stmt,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [1262] = 31,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_sumAccum,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_groupByaccum,
    ACTIONS(43), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    STATE(469), 1,
      sym_global_accum_name,
    STATE(472), 1,
      sym_accum_type,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(628), 1,
      sym_gsql_select_clause,
    STATE(689), 1,
      sym_query_body_stmts,
    STATE(759), 1,
      sym_base_type,
    STATE(763), 1,
      sym_gsql_select_block,
    STATE(800), 1,
      sym_query_body_stmt,
    ACTIONS(15), 2,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
    ACTIONS(29), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(35), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(761), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_bitwiseOraccum,
      anon_sym_bitwiseAndaccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(777), 13,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_select_stmt,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [1387] = 31,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_sumAccum,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_groupByaccum,
    ACTIONS(43), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    ACTIONS(121), 1,
      anon_sym_IF,
    STATE(469), 1,
      sym_global_accum_name,
    STATE(472), 1,
      sym_accum_type,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(628), 1,
      sym_gsql_select_clause,
    STATE(759), 1,
      sym_base_type,
    STATE(763), 1,
      sym_gsql_select_block,
    STATE(800), 1,
      sym_query_body_stmt,
    STATE(854), 1,
      sym_query_body_stmts,
    ACTIONS(15), 2,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
    ACTIONS(29), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(35), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(761), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_bitwiseOraccum,
      anon_sym_bitwiseAndaccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(777), 13,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_select_stmt,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [1512] = 31,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_sumAccum,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_groupByaccum,
    ACTIONS(43), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    STATE(469), 1,
      sym_global_accum_name,
    STATE(472), 1,
      sym_accum_type,
    STATE(544), 1,
      sym_query_body_stmts,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(628), 1,
      sym_gsql_select_clause,
    STATE(759), 1,
      sym_base_type,
    STATE(763), 1,
      sym_gsql_select_block,
    STATE(800), 1,
      sym_query_body_stmt,
    ACTIONS(15), 2,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
    ACTIONS(29), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(35), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(761), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_bitwiseOraccum,
      anon_sym_bitwiseAndaccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(777), 13,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_select_stmt,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [1637] = 31,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_sumAccum,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_groupByaccum,
    ACTIONS(43), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    STATE(469), 1,
      sym_global_accum_name,
    STATE(472), 1,
      sym_accum_type,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(628), 1,
      sym_gsql_select_clause,
    STATE(759), 1,
      sym_base_type,
    STATE(763), 1,
      sym_gsql_select_block,
    STATE(800), 1,
      sym_query_body_stmt,
    STATE(838), 1,
      sym_query_body_stmts,
    ACTIONS(15), 2,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
    ACTIONS(29), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(35), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(761), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_bitwiseOraccum,
      anon_sym_bitwiseAndaccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(777), 13,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_select_stmt,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [1762] = 31,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_sumAccum,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_groupByaccum,
    ACTIONS(43), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_PRINT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(53), 1,
      sym_name,
    ACTIONS(121), 1,
      anon_sym_IF,
    STATE(469), 1,
      sym_global_accum_name,
    STATE(472), 1,
      sym_accum_type,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(628), 1,
      sym_gsql_select_clause,
    STATE(747), 1,
      sym_query_body_stmts,
    STATE(759), 1,
      sym_base_type,
    STATE(763), 1,
      sym_gsql_select_block,
    STATE(800), 1,
      sym_query_body_stmt,
    ACTIONS(15), 2,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
    ACTIONS(29), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(35), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(761), 2,
      sym_base_decl_stmt,
      sym_accum_decl_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_bitwiseOraccum,
      anon_sym_bitwiseAndaccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(777), 13,
      sym_assign_stmt,
      sym_v_set_var_decl_stmt,
      sym_l_accum_assign_stmt,
      sym_g_accum_assign_stmt,
      sym_g_accum_accum_stmt,
      sym_func_call_stmt,
      sym_select_stmt,
      sym_query_body_case_stmt,
      sym_query_body_if_stmt,
      sym_query_body_while_stmt,
      sym_query_body_for_each_stmt,
      sym_decl_stmt,
      sym_print_stmt,
  [1887] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(125), 6,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(123), 41,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PLUS_EQ,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1944] = 6,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_DOT,
    STATE(23), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(131), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(127), 38,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2005] = 5,
    ACTIONS(139), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(137), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(135), 38,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2063] = 5,
    ACTIONS(146), 1,
      anon_sym_DOT,
    STATE(21), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(144), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(142), 38,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2121] = 4,
    STATE(27), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(150), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(148), 39,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2177] = 4,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(156), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(152), 39,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2233] = 4,
    STATE(23), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(131), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(127), 39,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2289] = 5,
    ACTIONS(146), 1,
      anon_sym_DOT,
    STATE(22), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(160), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(158), 38,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2347] = 5,
    ACTIONS(162), 1,
      anon_sym_DOT,
    STATE(27), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(156), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(152), 38,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2405] = 6,
    ACTIONS(169), 1,
      anon_sym_DOT,
    STATE(44), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(158), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(167), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(165), 35,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2465] = 6,
    ACTIONS(146), 1,
      anon_sym_DOT,
    STATE(22), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(158), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(167), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(165), 35,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2525] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(173), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(171), 39,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2578] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(177), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(175), 39,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2631] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(181), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(179), 39,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2684] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(156), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(152), 39,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2737] = 4,
    ACTIONS(183), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(160), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(158), 38,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2792] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(160), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(158), 38,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2844] = 6,
    ACTIONS(191), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      sym_digit,
    STATE(41), 1,
      aux_sym_simple_size_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(188), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(185), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2902] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(197), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(195), 38,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2954] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(197), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(195), 38,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3006] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(199), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(167), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(165), 35,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3060] = 6,
    ACTIONS(193), 1,
      sym_digit,
    ACTIONS(205), 1,
      anon_sym_DOT,
    STATE(41), 1,
      aux_sym_simple_size_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(203), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(201), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3118] = 5,
    ACTIONS(211), 1,
      sym_digit,
    STATE(41), 1,
      aux_sym_simple_size_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(209), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(207), 37,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3174] = 5,
    ACTIONS(193), 1,
      sym_digit,
    STATE(41), 1,
      aux_sym_simple_size_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(217), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(214), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3229] = 5,
    ACTIONS(193), 1,
      sym_digit,
    STATE(41), 1,
      aux_sym_simple_size_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(222), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(220), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3284] = 5,
    ACTIONS(169), 1,
      anon_sym_DOT,
    STATE(45), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(226), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(224), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3339] = 5,
    ACTIONS(228), 1,
      anon_sym_DOT,
    STATE(45), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(137), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(135), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3394] = 5,
    ACTIONS(193), 1,
      sym_digit,
    STATE(41), 1,
      aux_sym_simple_size_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(233), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(231), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3449] = 5,
    ACTIONS(193), 1,
      sym_digit,
    STATE(41), 1,
      aux_sym_simple_size_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(238), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(235), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3504] = 4,
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
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3556] = 4,
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
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3608] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(181), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(179), 37,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3658] = 5,
    ACTIONS(255), 1,
      anon_sym_TYPEDEF,
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
      anon_sym_BREAK,
      anon_sym_CONTINUE,
      anon_sym_IF,
      anon_sym_CASE,
      anon_sym_WHILE,
      anon_sym_FOREACH,
      anon_sym_sumAccum,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_bitwiseOraccum,
      anon_sym_bitwiseAndaccum,
      anon_sym_LISTACCUM,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
      anon_sym_MAPACCUM,
      anon_sym_HEAPACCUM,
      anon_sym_groupByaccum,
      anon_sym_ARRAYACCUM,
      anon_sym_AT,
      anon_sym_PRINT,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
      sym_name,
  [3712] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(177), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(175), 37,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3762] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(262), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(260), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3811] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(243), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(241), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3860] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(266), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(264), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3909] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(270), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(268), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3958] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(274), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(272), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4007] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(278), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(276), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4056] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(282), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(280), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4105] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(286), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(284), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4154] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(290), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(288), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4203] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(167), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(165), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4252] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(294), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(292), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4301] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(298), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(296), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4350] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(302), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(300), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4399] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(306), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(304), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4448] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(310), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(308), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4497] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(314), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(312), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4546] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(318), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(316), 36,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4595] = 3,
    ACTIONS(320), 2,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(322), 36,
      anon_sym_TYPEDEF,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
      anon_sym_IF,
      anon_sym_CASE,
      anon_sym_WHILE,
      anon_sym_FOREACH,
      anon_sym_sumAccum,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_bitwiseOraccum,
      anon_sym_bitwiseAndaccum,
      anon_sym_LISTACCUM,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
      anon_sym_MAPACCUM,
      anon_sym_HEAPACCUM,
      anon_sym_groupByaccum,
      anon_sym_ARRAYACCUM,
      anon_sym_AT,
      anon_sym_PRINT,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
      sym_name,
  [4643] = 31,
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
      anon_sym_SELECT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(344), 1,
      sym_name,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(251), 1,
      sym_expr,
    STATE(445), 1,
      sym_simple_set,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(628), 1,
      sym_gsql_select_clause,
    STATE(742), 1,
      sym_aggregator,
    STATE(763), 1,
      sym_gsql_select_block,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(691), 2,
      sym_seed_set,
      sym_select_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [4747] = 3,
    ACTIONS(352), 2,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(354), 36,
      anon_sym_TYPEDEF,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
      anon_sym_IF,
      anon_sym_CASE,
      anon_sym_WHILE,
      anon_sym_FOREACH,
      anon_sym_sumAccum,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_bitwiseOraccum,
      anon_sym_bitwiseAndaccum,
      anon_sym_LISTACCUM,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
      anon_sym_MAPACCUM,
      anon_sym_HEAPACCUM,
      anon_sym_groupByaccum,
      anon_sym_ARRAYACCUM,
      anon_sym_AT,
      anon_sym_PRINT,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
      sym_name,
  [4795] = 3,
    ACTIONS(356), 2,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(358), 35,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
      anon_sym_IF,
      anon_sym_CASE,
      anon_sym_WHILE,
      anon_sym_FOREACH,
      anon_sym_sumAccum,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_bitwiseOraccum,
      anon_sym_bitwiseAndaccum,
      anon_sym_LISTACCUM,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
      anon_sym_MAPACCUM,
      anon_sym_HEAPACCUM,
      anon_sym_groupByaccum,
      anon_sym_ARRAYACCUM,
      anon_sym_AT,
      anon_sym_PRINT,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
      sym_name,
  [4842] = 17,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(362), 1,
      anon_sym_IF,
    ACTIONS(364), 1,
      anon_sym_CASE,
    ACTIONS(366), 1,
      anon_sym_WHILE,
    ACTIONS(368), 1,
      anon_sym_FOREACH,
    ACTIONS(370), 1,
      sym_name,
    STATE(340), 1,
      sym_dml_sub_stmt,
    STATE(590), 1,
      sym_global_accum_name,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(719), 1,
      sym_dml_sub_stmt_list,
    STATE(728), 1,
      sym_base_type,
    ACTIONS(360), 2,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(359), 11,
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
  [4916] = 7,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    STATE(44), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(158), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(167), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(165), 26,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [4970] = 17,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(362), 1,
      anon_sym_IF,
    ACTIONS(364), 1,
      anon_sym_CASE,
    ACTIONS(366), 1,
      anon_sym_WHILE,
    ACTIONS(368), 1,
      anon_sym_FOREACH,
    ACTIONS(370), 1,
      sym_name,
    STATE(340), 1,
      sym_dml_sub_stmt,
    STATE(590), 1,
      sym_global_accum_name,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(685), 1,
      sym_dml_sub_stmt_list,
    STATE(728), 1,
      sym_base_type,
    ACTIONS(360), 2,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(359), 11,
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
  [5044] = 17,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(362), 1,
      anon_sym_IF,
    ACTIONS(364), 1,
      anon_sym_CASE,
    ACTIONS(366), 1,
      anon_sym_WHILE,
    ACTIONS(368), 1,
      anon_sym_FOREACH,
    ACTIONS(370), 1,
      sym_name,
    STATE(340), 1,
      sym_dml_sub_stmt,
    STATE(590), 1,
      sym_global_accum_name,
    STATE(602), 1,
      sym_dml_sub_stmt_list,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(728), 1,
      sym_base_type,
    ACTIONS(360), 2,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(359), 11,
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
  [5118] = 17,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(362), 1,
      anon_sym_IF,
    ACTIONS(364), 1,
      anon_sym_CASE,
    ACTIONS(366), 1,
      anon_sym_WHILE,
    ACTIONS(368), 1,
      anon_sym_FOREACH,
    ACTIONS(370), 1,
      sym_name,
    STATE(340), 1,
      sym_dml_sub_stmt,
    STATE(590), 1,
      sym_global_accum_name,
    STATE(604), 1,
      sym_dml_sub_stmt_list,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(728), 1,
      sym_base_type,
    ACTIONS(360), 2,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(359), 11,
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
  [5192] = 17,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(362), 1,
      anon_sym_IF,
    ACTIONS(364), 1,
      anon_sym_CASE,
    ACTIONS(366), 1,
      anon_sym_WHILE,
    ACTIONS(368), 1,
      anon_sym_FOREACH,
    ACTIONS(370), 1,
      sym_name,
    STATE(340), 1,
      sym_dml_sub_stmt,
    STATE(590), 1,
      sym_global_accum_name,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(671), 1,
      sym_dml_sub_stmt_list,
    STATE(728), 1,
      sym_base_type,
    ACTIONS(360), 2,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(359), 11,
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
  [5266] = 17,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(364), 1,
      anon_sym_CASE,
    ACTIONS(366), 1,
      anon_sym_WHILE,
    ACTIONS(368), 1,
      anon_sym_FOREACH,
    ACTIONS(370), 1,
      sym_name,
    ACTIONS(376), 1,
      anon_sym_IF,
    STATE(340), 1,
      sym_dml_sub_stmt,
    STATE(590), 1,
      sym_global_accum_name,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(686), 1,
      sym_dml_sub_stmt_list,
    STATE(728), 1,
      sym_base_type,
    ACTIONS(360), 2,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(359), 11,
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
  [5340] = 17,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(362), 1,
      anon_sym_IF,
    ACTIONS(364), 1,
      anon_sym_CASE,
    ACTIONS(366), 1,
      anon_sym_WHILE,
    ACTIONS(368), 1,
      anon_sym_FOREACH,
    ACTIONS(370), 1,
      sym_name,
    STATE(340), 1,
      sym_dml_sub_stmt,
    STATE(552), 1,
      sym_dml_sub_stmt_list,
    STATE(590), 1,
      sym_global_accum_name,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(728), 1,
      sym_base_type,
    ACTIONS(360), 2,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(359), 11,
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
  [5414] = 17,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(362), 1,
      anon_sym_IF,
    ACTIONS(364), 1,
      anon_sym_CASE,
    ACTIONS(366), 1,
      anon_sym_WHILE,
    ACTIONS(368), 1,
      anon_sym_FOREACH,
    ACTIONS(370), 1,
      sym_name,
    STATE(340), 1,
      sym_dml_sub_stmt,
    STATE(590), 1,
      sym_global_accum_name,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_dml_sub_stmt_list,
    STATE(728), 1,
      sym_base_type,
    ACTIONS(360), 2,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(359), 11,
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
  [5488] = 17,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(362), 1,
      anon_sym_IF,
    ACTIONS(364), 1,
      anon_sym_CASE,
    ACTIONS(366), 1,
      anon_sym_WHILE,
    ACTIONS(368), 1,
      anon_sym_FOREACH,
    ACTIONS(370), 1,
      sym_name,
    STATE(340), 1,
      sym_dml_sub_stmt,
    STATE(585), 1,
      sym_dml_sub_stmt_list,
    STATE(590), 1,
      sym_global_accum_name,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(728), 1,
      sym_base_type,
    ACTIONS(360), 2,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(359), 11,
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
  [5562] = 17,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(362), 1,
      anon_sym_IF,
    ACTIONS(364), 1,
      anon_sym_CASE,
    ACTIONS(366), 1,
      anon_sym_WHILE,
    ACTIONS(368), 1,
      anon_sym_FOREACH,
    ACTIONS(370), 1,
      sym_name,
    STATE(340), 1,
      sym_dml_sub_stmt,
    STATE(512), 1,
      sym_dml_sub_stmt_list,
    STATE(590), 1,
      sym_global_accum_name,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(728), 1,
      sym_base_type,
    ACTIONS(360), 2,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(359), 11,
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
  [5636] = 17,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(362), 1,
      anon_sym_IF,
    ACTIONS(364), 1,
      anon_sym_CASE,
    ACTIONS(366), 1,
      anon_sym_WHILE,
    ACTIONS(368), 1,
      anon_sym_FOREACH,
    ACTIONS(370), 1,
      sym_name,
    STATE(340), 1,
      sym_dml_sub_stmt,
    STATE(589), 1,
      sym_dml_sub_stmt_list,
    STATE(590), 1,
      sym_global_accum_name,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(728), 1,
      sym_base_type,
    ACTIONS(360), 2,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(359), 11,
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
  [5710] = 17,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(362), 1,
      anon_sym_IF,
    ACTIONS(364), 1,
      anon_sym_CASE,
    ACTIONS(366), 1,
      anon_sym_WHILE,
    ACTIONS(368), 1,
      anon_sym_FOREACH,
    ACTIONS(370), 1,
      sym_name,
    STATE(340), 1,
      sym_dml_sub_stmt,
    STATE(590), 1,
      sym_global_accum_name,
    STATE(592), 1,
      sym_dml_sub_stmt_list,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(728), 1,
      sym_base_type,
    ACTIONS(360), 2,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(359), 11,
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
  [5784] = 17,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(364), 1,
      anon_sym_CASE,
    ACTIONS(366), 1,
      anon_sym_WHILE,
    ACTIONS(368), 1,
      anon_sym_FOREACH,
    ACTIONS(370), 1,
      sym_name,
    ACTIONS(376), 1,
      anon_sym_IF,
    STATE(340), 1,
      sym_dml_sub_stmt,
    STATE(590), 1,
      sym_global_accum_name,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(665), 1,
      sym_dml_sub_stmt_list,
    STATE(728), 1,
      sym_base_type,
    ACTIONS(360), 2,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(359), 11,
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
  [5858] = 17,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(362), 1,
      anon_sym_IF,
    ACTIONS(364), 1,
      anon_sym_CASE,
    ACTIONS(366), 1,
      anon_sym_WHILE,
    ACTIONS(368), 1,
      anon_sym_FOREACH,
    ACTIONS(370), 1,
      sym_name,
    STATE(340), 1,
      sym_dml_sub_stmt,
    STATE(590), 1,
      sym_global_accum_name,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(718), 1,
      sym_dml_sub_stmt_list,
    STATE(728), 1,
      sym_base_type,
    ACTIONS(360), 2,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(359), 11,
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
  [5932] = 16,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(362), 1,
      anon_sym_IF,
    ACTIONS(364), 1,
      anon_sym_CASE,
    ACTIONS(366), 1,
      anon_sym_WHILE,
    ACTIONS(368), 1,
      anon_sym_FOREACH,
    ACTIONS(370), 1,
      sym_name,
    STATE(365), 1,
      sym_dml_sub_stmt,
    STATE(590), 1,
      sym_global_accum_name,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(728), 1,
      sym_base_type,
    ACTIONS(360), 2,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
    STATE(359), 11,
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
  [6003] = 8,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(378), 1,
      anon_sym_LT,
    STATE(44), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(158), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(165), 27,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_AND,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [6058] = 29,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(384), 1,
      anon_sym_LBRACK,
    ACTIONS(386), 1,
      anon_sym_DASH,
    ACTIONS(388), 1,
      anon_sym_AT_AT,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(398), 1,
      sym_name,
    ACTIONS(402), 1,
      sym_digit,
    ACTIONS(404), 1,
      anon_sym_DQUOTE,
    ACTIONS(406), 1,
      anon_sym_SQUOTE,
    STATE(183), 1,
      sym_global_accum_name,
    STATE(187), 1,
      sym_name_dot,
    STATE(199), 1,
      sym_set_bag_expr,
    STATE(202), 1,
      sym_expr,
    STATE(205), 1,
      aux_sym_simple_size_repeat1,
    STATE(591), 1,
      sym_condition,
    STATE(610), 1,
      sym_arg_list,
    STATE(641), 1,
      sym_local_accum_name,
    STATE(866), 1,
      sym_aggregator,
    ACTIONS(396), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(221), 2,
      sym_numeric,
      sym_string_literal,
    STATE(234), 2,
      sym_integer,
      sym_real,
    STATE(235), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(400), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6154] = 29,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(384), 1,
      anon_sym_LBRACK,
    ACTIONS(386), 1,
      anon_sym_DASH,
    ACTIONS(388), 1,
      anon_sym_AT_AT,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(398), 1,
      sym_name,
    ACTIONS(402), 1,
      sym_digit,
    ACTIONS(404), 1,
      anon_sym_DQUOTE,
    ACTIONS(406), 1,
      anon_sym_SQUOTE,
    STATE(183), 1,
      sym_global_accum_name,
    STATE(187), 1,
      sym_name_dot,
    STATE(199), 1,
      sym_set_bag_expr,
    STATE(205), 1,
      aux_sym_simple_size_repeat1,
    STATE(207), 1,
      sym_expr,
    STATE(591), 1,
      sym_condition,
    STATE(641), 1,
      sym_local_accum_name,
    STATE(644), 1,
      sym_arg_list,
    STATE(866), 1,
      sym_aggregator,
    ACTIONS(396), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(221), 2,
      sym_numeric,
      sym_string_literal,
    STATE(234), 2,
      sym_integer,
      sym_real,
    STATE(235), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(400), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6250] = 27,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(287), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(733), 1,
      sym_arg_list,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6341] = 27,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(384), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      anon_sym_AT_AT,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(402), 1,
      sym_digit,
    ACTIONS(404), 1,
      anon_sym_DQUOTE,
    ACTIONS(406), 1,
      anon_sym_SQUOTE,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(418), 1,
      sym_name,
    STATE(183), 1,
      sym_global_accum_name,
    STATE(187), 1,
      sym_name_dot,
    STATE(199), 1,
      sym_set_bag_expr,
    STATE(205), 1,
      aux_sym_simple_size_repeat1,
    STATE(289), 1,
      sym_expr,
    STATE(471), 1,
      sym_simple_set,
    STATE(641), 1,
      sym_local_accum_name,
    STATE(644), 1,
      sym_arg_list,
    STATE(866), 1,
      sym_aggregator,
    STATE(221), 2,
      sym_numeric,
      sym_string_literal,
    STATE(234), 2,
      sym_integer,
      sym_real,
    STATE(235), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(400), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6432] = 27,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(287), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(848), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6523] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(140), 1,
      sym_expr,
    STATE(390), 1,
      sym_condition,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6616] = 27,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(287), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(835), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6707] = 27,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(287), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(695), 1,
      sym_arg_list,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6798] = 27,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(287), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(836), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6889] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(140), 1,
      sym_expr,
    STATE(541), 1,
      sym_condition,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6982] = 27,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(287), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(832), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7073] = 27,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(262), 1,
      sym_expr,
    STATE(412), 1,
      sym_print_expr,
    STATE(415), 1,
      sym_v_expr_set,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7164] = 27,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(287), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(868), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7255] = 27,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(287), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(801), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7346] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(140), 1,
      sym_expr,
    STATE(438), 1,
      sym_condition,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7439] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(140), 1,
      sym_expr,
    STATE(497), 1,
      sym_condition,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7532] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(140), 1,
      sym_expr,
    STATE(491), 1,
      sym_condition,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7625] = 27,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(287), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(802), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7716] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(140), 1,
      sym_expr,
    STATE(332), 1,
      sym_condition,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7809] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(140), 1,
      sym_expr,
    STATE(328), 1,
      sym_condition,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7902] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(140), 1,
      sym_expr,
    STATE(465), 1,
      sym_condition,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7995] = 27,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(444), 1,
      anon_sym_WHEN,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(316), 1,
      sym_expr,
    STATE(467), 1,
      aux_sym_query_body_case_stmt_repeat1,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8086] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(140), 1,
      sym_expr,
    STATE(562), 1,
      sym_condition,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8179] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(140), 1,
      sym_expr,
    STATE(509), 1,
      sym_condition,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8272] = 27,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(262), 1,
      sym_expr,
    STATE(415), 1,
      sym_v_expr_set,
    STATE(483), 1,
      sym_print_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8363] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(140), 1,
      sym_expr,
    STATE(482), 1,
      sym_condition,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8456] = 27,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(287), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(831), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8547] = 27,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(287), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(830), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8638] = 27,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(384), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      anon_sym_AT_AT,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(402), 1,
      sym_digit,
    ACTIONS(404), 1,
      anon_sym_DQUOTE,
    ACTIONS(406), 1,
      anon_sym_SQUOTE,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(418), 1,
      sym_name,
    STATE(183), 1,
      sym_global_accum_name,
    STATE(187), 1,
      sym_name_dot,
    STATE(199), 1,
      sym_set_bag_expr,
    STATE(205), 1,
      aux_sym_simple_size_repeat1,
    STATE(293), 1,
      sym_expr,
    STATE(471), 1,
      sym_simple_set,
    STATE(610), 1,
      sym_arg_list,
    STATE(641), 1,
      sym_local_accum_name,
    STATE(866), 1,
      sym_aggregator,
    STATE(221), 2,
      sym_numeric,
      sym_string_literal,
    STATE(234), 2,
      sym_integer,
      sym_real,
    STATE(235), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(400), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8729] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(140), 1,
      sym_expr,
    STATE(461), 1,
      sym_condition,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8822] = 27,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(450), 1,
      anon_sym_WHEN,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(315), 1,
      sym_expr,
    STATE(460), 1,
      aux_sym_dml_sub_case_stmt_repeat1,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8913] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(140), 1,
      sym_expr,
    STATE(498), 1,
      sym_condition,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9006] = 27,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(287), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(690), 1,
      sym_arg_list,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9097] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(140), 1,
      sym_expr,
    STATE(593), 1,
      sym_condition,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9190] = 27,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(287), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(698), 1,
      sym_arg_list,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9281] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(140), 1,
      sym_expr,
    STATE(600), 1,
      sym_condition,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9374] = 27,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(287), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(817), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9465] = 27,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(287), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(819), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9556] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(140), 1,
      sym_expr,
    STATE(534), 1,
      sym_condition,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9649] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(140), 1,
      sym_expr,
    STATE(514), 1,
      sym_condition,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9742] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(140), 1,
      sym_expr,
    STATE(493), 1,
      sym_condition,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9835] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(140), 1,
      sym_expr,
    STATE(558), 1,
      sym_condition,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    ACTIONS(426), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9928] = 27,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(287), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(845), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10019] = 27,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(287), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(710), 1,
      sym_arg_list,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10110] = 26,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(287), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(745), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10198] = 26,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(281), 1,
      sym_set_bag_expr,
    STATE(287), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(752), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10286] = 26,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(281), 1,
      sym_set_bag_expr,
    STATE(287), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(767), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10374] = 26,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(384), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      anon_sym_AT_AT,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(402), 1,
      sym_digit,
    ACTIONS(404), 1,
      anon_sym_DQUOTE,
    ACTIONS(406), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      sym_name,
    STATE(183), 1,
      sym_global_accum_name,
    STATE(187), 1,
      sym_name_dot,
    STATE(199), 1,
      sym_set_bag_expr,
    STATE(205), 1,
      aux_sym_simple_size_repeat1,
    STATE(293), 1,
      sym_expr,
    STATE(610), 1,
      sym_arg_list,
    STATE(641), 1,
      sym_local_accum_name,
    STATE(866), 1,
      sym_aggregator,
    STATE(221), 2,
      sym_numeric,
      sym_string_literal,
    STATE(234), 2,
      sym_integer,
      sym_real,
    STATE(235), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(400), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10462] = 26,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(303), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(645), 1,
      sym_v_set_proj,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10550] = 13,
    ACTIONS(472), 1,
      anon_sym_IN,
    ACTIONS(476), 1,
      anon_sym_NOT,
    ACTIONS(478), 1,
      anon_sym_IS,
    ACTIONS(480), 1,
      anon_sym_BETWEEN,
    ACTIONS(482), 1,
      anon_sym_LIKE,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    STATE(174), 1,
      sym_math_operator,
    STATE(178), 1,
      sym_comparison_operator,
    ACTIONS(470), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(486), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(474), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(468), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_post_DASHaccum,
      anon_sym_AND,
      anon_sym_to_csv,
  [10612] = 26,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(287), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(824), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10700] = 26,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(384), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      anon_sym_AT_AT,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(402), 1,
      sym_digit,
    ACTIONS(404), 1,
      anon_sym_DQUOTE,
    ACTIONS(406), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      sym_name,
    STATE(183), 1,
      sym_global_accum_name,
    STATE(187), 1,
      sym_name_dot,
    STATE(199), 1,
      sym_set_bag_expr,
    STATE(205), 1,
      aux_sym_simple_size_repeat1,
    STATE(289), 1,
      sym_expr,
    STATE(641), 1,
      sym_local_accum_name,
    STATE(644), 1,
      sym_arg_list,
    STATE(866), 1,
      sym_aggregator,
    STATE(221), 2,
      sym_numeric,
      sym_string_literal,
    STATE(234), 2,
      sym_integer,
      sym_real,
    STATE(235), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(400), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10788] = 26,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(287), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(723), 1,
      sym_arg_list,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10876] = 26,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(287), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(809), 1,
      sym_arg_list,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10964] = 26,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(303), 1,
      sym_expr,
    STATE(555), 1,
      sym_v_set_proj,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11052] = 25,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(384), 1,
      anon_sym_LBRACK,
    ACTIONS(386), 1,
      anon_sym_DASH,
    ACTIONS(388), 1,
      anon_sym_AT_AT,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(398), 1,
      sym_name,
    ACTIONS(402), 1,
      sym_digit,
    ACTIONS(404), 1,
      anon_sym_DQUOTE,
    ACTIONS(406), 1,
      anon_sym_SQUOTE,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    STATE(183), 1,
      sym_global_accum_name,
    STATE(187), 1,
      sym_name_dot,
    STATE(205), 1,
      aux_sym_simple_size_repeat1,
    STATE(208), 1,
      sym_set_bag_expr,
    STATE(215), 1,
      sym_expr,
    STATE(641), 1,
      sym_local_accum_name,
    STATE(866), 1,
      sym_aggregator,
    STATE(221), 2,
      sym_numeric,
      sym_string_literal,
    STATE(234), 2,
      sym_integer,
      sym_real,
    STATE(235), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(400), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11137] = 6,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_DOT,
    STATE(186), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(131), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(127), 23,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [11184] = 25,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(239), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11269] = 25,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(192), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11354] = 25,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(251), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11439] = 25,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(325), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11524] = 25,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      anon_sym_AT_AT,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(404), 1,
      anon_sym_DQUOTE,
    ACTIONS(406), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      sym_name,
    ACTIONS(492), 1,
      anon_sym_DOT,
    ACTIONS(494), 1,
      sym_digit,
    STATE(183), 1,
      sym_global_accum_name,
    STATE(187), 1,
      sym_name_dot,
    STATE(203), 1,
      aux_sym_simple_size_repeat1,
    STATE(208), 1,
      sym_set_bag_expr,
    STATE(295), 1,
      sym_expr,
    STATE(641), 1,
      sym_local_accum_name,
    STATE(866), 1,
      sym_aggregator,
    STATE(221), 2,
      sym_numeric,
      sym_string_literal,
    STATE(234), 2,
      sym_integer,
      sym_real,
    STATE(235), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(400), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11609] = 25,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_LBRACK,
    ACTIONS(386), 1,
      anon_sym_DASH,
    ACTIONS(388), 1,
      anon_sym_AT_AT,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(398), 1,
      sym_name,
    ACTIONS(404), 1,
      anon_sym_DQUOTE,
    ACTIONS(406), 1,
      anon_sym_SQUOTE,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(492), 1,
      anon_sym_DOT,
    ACTIONS(494), 1,
      sym_digit,
    STATE(183), 1,
      sym_global_accum_name,
    STATE(187), 1,
      sym_name_dot,
    STATE(203), 1,
      aux_sym_simple_size_repeat1,
    STATE(208), 1,
      sym_set_bag_expr,
    STATE(220), 1,
      sym_expr,
    STATE(641), 1,
      sym_local_accum_name,
    STATE(866), 1,
      sym_aggregator,
    STATE(221), 2,
      sym_numeric,
      sym_string_literal,
    STATE(234), 2,
      sym_integer,
      sym_real,
    STATE(235), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(400), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11694] = 25,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(253), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11779] = 25,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(306), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11864] = 25,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(256), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11949] = 25,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(321), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12034] = 25,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(255), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12119] = 25,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(320), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12204] = 25,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(322), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12289] = 25,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(318), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12374] = 25,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(259), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12459] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(496), 1,
      anon_sym_DOT,
    ACTIONS(498), 1,
      sym_digit,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(36), 1,
      aux_sym_simple_size_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(194), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12544] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    ACTIONS(496), 1,
      anon_sym_DOT,
    ACTIONS(498), 1,
      sym_digit,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(36), 1,
      aux_sym_simple_size_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(179), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12629] = 25,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(298), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12714] = 4,
    STATE(174), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(266), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(264), 27,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12757] = 25,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(240), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12842] = 25,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(324), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12927] = 25,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(257), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [13012] = 25,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(384), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      anon_sym_AT_AT,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(402), 1,
      sym_digit,
    ACTIONS(404), 1,
      anon_sym_DQUOTE,
    ACTIONS(406), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      sym_name,
    STATE(183), 1,
      sym_global_accum_name,
    STATE(187), 1,
      sym_name_dot,
    STATE(205), 1,
      aux_sym_simple_size_repeat1,
    STATE(208), 1,
      sym_set_bag_expr,
    STATE(308), 1,
      sym_expr,
    STATE(641), 1,
      sym_local_accum_name,
    STATE(866), 1,
      sym_aggregator,
    STATE(221), 2,
      sym_numeric,
      sym_string_literal,
    STATE(234), 2,
      sym_integer,
      sym_real,
    STATE(235), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(400), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [13097] = 25,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(384), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      anon_sym_AT_AT,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(402), 1,
      sym_digit,
    ACTIONS(404), 1,
      anon_sym_DQUOTE,
    ACTIONS(406), 1,
      anon_sym_SQUOTE,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      sym_name,
    STATE(183), 1,
      sym_global_accum_name,
    STATE(187), 1,
      sym_name_dot,
    STATE(205), 1,
      aux_sym_simple_size_repeat1,
    STATE(208), 1,
      sym_set_bag_expr,
    STATE(304), 1,
      sym_expr,
    STATE(641), 1,
      sym_local_accum_name,
    STATE(866), 1,
      sym_aggregator,
    STATE(221), 2,
      sym_numeric,
      sym_string_literal,
    STATE(234), 2,
      sym_integer,
      sym_real,
    STATE(235), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(400), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [13182] = 7,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      anon_sym_DOT,
    STATE(210), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(158), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(167), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(165), 20,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13231] = 25,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(317), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [13316] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      anon_sym_DASH,
    ACTIONS(428), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(166), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [13401] = 25,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(323), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [13486] = 25,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(305), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [13571] = 25,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(326), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [13656] = 25,
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
      anon_sym_COALESCE,
    ACTIONS(338), 1,
      anon_sym_ISEMPTY,
    ACTIONS(342), 1,
      anon_sym_COUNT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(28), 1,
      sym_global_accum_name,
    STATE(29), 1,
      sym_name_dot,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(241), 1,
      sym_expr,
    STATE(627), 1,
      sym_local_accum_name,
    STATE(742), 1,
      sym_aggregator,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(62), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [13741] = 6,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    STATE(174), 1,
      sym_math_operator,
    ACTIONS(506), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(474), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(504), 19,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_IN,
      anon_sym_post_DASHaccum,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_to_csv,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13788] = 4,
    STATE(186), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(131), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(127), 24,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13830] = 4,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(156), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(152), 24,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13872] = 5,
    ACTIONS(510), 1,
      anon_sym_DOT,
    STATE(189), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(160), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(158), 23,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13916] = 6,
    ACTIONS(512), 1,
      anon_sym_DOT,
    STATE(210), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(158), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(167), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(165), 20,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13962] = 5,
    ACTIONS(514), 1,
      anon_sym_DOT,
    STATE(184), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(137), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(135), 23,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14006] = 5,
    ACTIONS(517), 1,
      anon_sym_DOT,
    STATE(185), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(156), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(152), 23,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14050] = 4,
    STATE(185), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(150), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(148), 24,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14092] = 6,
    ACTIONS(510), 1,
      anon_sym_DOT,
    STATE(189), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(158), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(167), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(165), 20,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14138] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(262), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(468), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_post_DASHaccum,
      anon_sym_AND,
      anon_sym_to_csv,
    ACTIONS(260), 17,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14180] = 5,
    ACTIONS(510), 1,
      anon_sym_DOT,
    STATE(184), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(144), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(142), 23,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14224] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(125), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(123), 24,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14263] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(173), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(171), 24,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14302] = 4,
    ACTIONS(266), 1,
      anon_sym_SLASH,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(264), 27,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_AND,
      anon_sym_to_csv,
      anon_sym_AS,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [14343] = 14,
    ACTIONS(25), 1,
      anon_sym_sumAccum,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_groupByaccum,
    ACTIONS(43), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(520), 1,
      sym_name,
    ACTIONS(29), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(35), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(781), 2,
      sym_accum_type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_bitwiseOraccum,
      anon_sym_bitwiseAndaccum,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [14404] = 5,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(474), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(504), 19,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_post_DASHaccum,
      anon_sym_OFFSET,
      anon_sym_AND,
      anon_sym_to_csv,
      anon_sym_AS,
  [14447] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(181), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(179), 24,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14486] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(177), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(175), 24,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14525] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(156), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(152), 24,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14564] = 4,
    ACTIONS(522), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(160), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(158), 23,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14605] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(524), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(167), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(165), 20,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14645] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(197), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(195), 23,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14683] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(160), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(158), 23,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14721] = 17,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    ACTIONS(472), 1,
      anon_sym_IN,
    ACTIONS(476), 1,
      anon_sym_NOT,
    ACTIONS(478), 1,
      anon_sym_IS,
    ACTIONS(480), 1,
      anon_sym_BETWEEN,
    ACTIONS(482), 1,
      anon_sym_LIKE,
    ACTIONS(526), 1,
      anon_sym_COMMA,
    ACTIONS(528), 1,
      anon_sym_DASH_GT,
    STATE(146), 1,
      sym_math_operator,
    STATE(178), 1,
      sym_comparison_operator,
    STATE(459), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(468), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(470), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(484), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(486), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(474), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [14787] = 6,
    ACTIONS(530), 1,
      anon_sym_DOT,
    ACTIONS(532), 1,
      sym_digit,
    STATE(204), 1,
      aux_sym_simple_size_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(188), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(185), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14831] = 5,
    ACTIONS(534), 1,
      sym_digit,
    STATE(204), 1,
      aux_sym_simple_size_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(209), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(207), 22,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14873] = 6,
    ACTIONS(532), 1,
      sym_digit,
    ACTIONS(537), 1,
      anon_sym_DOT,
    STATE(204), 1,
      aux_sym_simple_size_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(203), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(201), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14917] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(197), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(195), 23,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14955] = 17,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    ACTIONS(472), 1,
      anon_sym_IN,
    ACTIONS(476), 1,
      anon_sym_NOT,
    ACTIONS(478), 1,
      anon_sym_IS,
    ACTIONS(480), 1,
      anon_sym_BETWEEN,
    ACTIONS(482), 1,
      anon_sym_LIKE,
    ACTIONS(526), 1,
      anon_sym_COMMA,
    ACTIONS(528), 1,
      anon_sym_DASH_GT,
    STATE(146), 1,
      sym_math_operator,
    STATE(178), 1,
      sym_comparison_operator,
    STATE(459), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(468), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(470), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(484), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(486), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(474), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [15021] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(524), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(167), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(165), 20,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15061] = 5,
    ACTIONS(532), 1,
      sym_digit,
    STATE(204), 1,
      aux_sym_simple_size_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(238), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(235), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15102] = 5,
    ACTIONS(512), 1,
      anon_sym_DOT,
    STATE(214), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(226), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(224), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15143] = 5,
    ACTIONS(532), 1,
      sym_digit,
    STATE(204), 1,
      aux_sym_simple_size_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(233), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(231), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15184] = 5,
    ACTIONS(532), 1,
      sym_digit,
    STATE(204), 1,
      aux_sym_simple_size_repeat1,
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
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15225] = 5,
    ACTIONS(532), 1,
      sym_digit,
    STATE(204), 1,
      aux_sym_simple_size_repeat1,
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
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15266] = 5,
    ACTIONS(539), 1,
      anon_sym_DOT,
    STATE(214), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(137), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(135), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15307] = 4,
    STATE(146), 1,
      sym_math_operator,
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
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15345] = 4,
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
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15383] = 4,
    ACTIONS(544), 1,
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
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15421] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(181), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(179), 22,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15457] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(177), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(175), 22,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15493] = 6,
    STATE(146), 1,
      sym_math_operator,
    ACTIONS(484), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(506), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(474), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(504), 14,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15535] = 3,
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
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15570] = 3,
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
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15605] = 3,
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
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15640] = 3,
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
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15675] = 3,
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
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15710] = 3,
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
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15745] = 3,
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
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15780] = 3,
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
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15815] = 3,
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
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15850] = 3,
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
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15885] = 3,
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
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15920] = 3,
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
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15955] = 3,
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
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15990] = 3,
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
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16025] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(167), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(165), 21,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16060] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(468), 3,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_AND,
    ACTIONS(262), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(260), 18,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16097] = 3,
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
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16132] = 3,
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
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_IN,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_DASH_GT,
      anon_sym_NOT,
      anon_sym_IS,
      anon_sym_BETWEEN,
      anon_sym_AND,
      anon_sym_LIKE,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [16167] = 5,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(474), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(546), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_post_DASHaccum,
      anon_sym_AND,
      anon_sym_to_csv,
  [16201] = 5,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(474), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(548), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_post_DASHaccum,
      anon_sym_AND,
      anon_sym_to_csv,
  [16235] = 5,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(474), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(550), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_post_DASHaccum,
      anon_sym_AND,
      anon_sym_to_csv,
  [16269] = 8,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      anon_sym_DOT,
    ACTIONS(552), 1,
      anon_sym_LT,
    STATE(210), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(554), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(165), 10,
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
  [16308] = 8,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      anon_sym_DOT,
    ACTIONS(552), 1,
      anon_sym_LT,
    STATE(210), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(167), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(158), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(165), 10,
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
  [16347] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(556), 8,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_AT_AT,
      sym_digit,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(558), 10,
      anon_sym_AT,
      anon_sym_COALESCE,
      anon_sym_ISEMPTY,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_COUNT,
      sym_name,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [16375] = 13,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_sumAccum,
    ACTIONS(568), 1,
      anon_sym_LISTACCUM,
    ACTIONS(572), 1,
      anon_sym_MAPACCUM,
    ACTIONS(574), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(576), 1,
      anon_sym_groupByaccum,
    ACTIONS(578), 1,
      anon_sym_ARRAYACCUM,
    STATE(254), 1,
      aux_sym_accum_type_repeat2,
    STATE(814), 1,
      sym_accum_type,
    ACTIONS(564), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(570), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(566), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_bitwiseOraccum,
      anon_sym_bitwiseAndaccum,
  [16423] = 9,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(378), 1,
      anon_sym_LT,
    ACTIONS(580), 1,
      anon_sym_EQ,
    STATE(44), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(554), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(165), 9,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16463] = 13,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_sumAccum,
    ACTIONS(568), 1,
      anon_sym_LISTACCUM,
    ACTIONS(572), 1,
      anon_sym_MAPACCUM,
    ACTIONS(574), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(576), 1,
      anon_sym_groupByaccum,
    ACTIONS(578), 1,
      anon_sym_ARRAYACCUM,
    STATE(245), 1,
      aux_sym_accum_type_repeat2,
    STATE(783), 1,
      sym_accum_type,
    ACTIONS(564), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(570), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(566), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_bitwiseOraccum,
      anon_sym_bitwiseAndaccum,
  [16511] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(582), 8,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_AT_AT,
      sym_digit,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(584), 10,
      anon_sym_AT,
      anon_sym_COALESCE,
      anon_sym_ISEMPTY,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_COUNT,
      sym_name,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [16539] = 8,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(586), 1,
      anon_sym_GT,
    ACTIONS(588), 1,
      sym_name,
    STATE(272), 1,
      sym_tuple_field,
    STATE(700), 1,
      sym_base_type,
    STATE(250), 2,
      sym_tuple_fields,
      aux_sym_typedef_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [16576] = 8,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(588), 1,
      sym_name,
    ACTIONS(590), 1,
      anon_sym_GT,
    STATE(272), 1,
      sym_tuple_field,
    STATE(700), 1,
      sym_base_type,
    STATE(260), 2,
      sym_tuple_fields,
      aux_sym_typedef_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [16613] = 5,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(592), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
    ACTIONS(474), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16644] = 7,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
    ACTIONS(598), 1,
      anon_sym_VERTEX,
    STATE(291), 1,
      sym_query_param,
    STATE(258), 2,
      sym_query_params,
      aux_sym_parameter_list_repeat1,
    STATE(825), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(596), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [16679] = 5,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(600), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
    ACTIONS(474), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16710] = 4,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    STATE(254), 1,
      aux_sym_accum_type_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(605), 15,
      anon_sym_sumAccum,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_bitwiseOraccum,
      anon_sym_bitwiseAndaccum,
      anon_sym_LISTACCUM,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
      anon_sym_MAPACCUM,
      anon_sym_HEAPACCUM,
      anon_sym_groupByaccum,
      anon_sym_ARRAYACCUM,
  [16739] = 5,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(607), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
    ACTIONS(474), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16770] = 5,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(609), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
    ACTIONS(474), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16801] = 5,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(611), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
    ACTIONS(474), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16832] = 7,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
    ACTIONS(618), 1,
      anon_sym_VERTEX,
    STATE(291), 1,
      sym_query_param,
    STATE(258), 2,
      sym_query_params,
      aux_sym_parameter_list_repeat1,
    STATE(825), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(615), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [16867] = 5,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(621), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
    ACTIONS(474), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16898] = 8,
    ACTIONS(623), 1,
      anon_sym_GT,
    ACTIONS(628), 1,
      anon_sym_VERTEX,
    ACTIONS(631), 1,
      sym_name,
    STATE(272), 1,
      sym_tuple_field,
    STATE(700), 1,
      sym_base_type,
    STATE(260), 2,
      sym_tuple_fields,
      aux_sym_typedef_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(625), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [16935] = 7,
    ACTIONS(598), 1,
      anon_sym_VERTEX,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      sym_query_param,
    STATE(252), 2,
      sym_query_params,
      aux_sym_parameter_list_repeat1,
    STATE(825), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(596), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [16970] = 7,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    ACTIONS(638), 1,
      anon_sym_LBRACK,
    ACTIONS(640), 1,
      anon_sym_AS,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(636), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_to_csv,
    ACTIONS(474), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17004] = 11,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(642), 1,
      anon_sym_DASH,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(624), 1,
      sym_constant,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(644), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [17046] = 11,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(642), 1,
      anon_sym_DASH,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(623), 1,
      sym_constant,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(644), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [17088] = 11,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(642), 1,
      anon_sym_DASH,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(575), 1,
      sym_constant,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(644), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [17130] = 11,
    ACTIONS(562), 1,
      anon_sym_sumAccum,
    ACTIONS(568), 1,
      anon_sym_LISTACCUM,
    ACTIONS(572), 1,
      anon_sym_MAPACCUM,
    ACTIONS(574), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(576), 1,
      anon_sym_groupByaccum,
    ACTIONS(578), 1,
      anon_sym_ARRAYACCUM,
    STATE(707), 1,
      sym_accum_type,
    ACTIONS(564), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(570), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(566), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_bitwiseOraccum,
      anon_sym_bitwiseAndaccum,
  [17172] = 11,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(642), 1,
      anon_sym_DASH,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(667), 1,
      sym_constant,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(644), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [17214] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(646), 16,
      anon_sym_COMMA,
      anon_sym_sumAccum,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_bitwiseOraccum,
      anon_sym_bitwiseAndaccum,
      anon_sym_LISTACCUM,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
      anon_sym_MAPACCUM,
      anon_sym_HEAPACCUM,
      anon_sym_groupByaccum,
      anon_sym_ARRAYACCUM,
  [17238] = 11,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(642), 1,
      anon_sym_DASH,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(580), 1,
      sym_constant,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(644), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [17280] = 11,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      sym_digit,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(642), 1,
      anon_sym_DASH,
    STATE(40), 1,
      aux_sym_simple_size_repeat1,
    STATE(725), 1,
      sym_constant,
    STATE(53), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(644), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [17322] = 5,
    ACTIONS(648), 1,
      anon_sym_COMMA,
    ACTIONS(650), 1,
      anon_sym_GT,
    STATE(274), 1,
      aux_sym_tuple_fields_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(652), 12,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
      sym_name,
  [17351] = 5,
    ACTIONS(648), 1,
      anon_sym_COMMA,
    ACTIONS(654), 1,
      anon_sym_GT,
    STATE(271), 1,
      aux_sym_tuple_fields_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(656), 12,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
      sym_name,
  [17380] = 4,
    ACTIONS(660), 1,
      anon_sym_LT,
    ACTIONS(658), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(662), 12,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
      sym_name,
  [17407] = 5,
    ACTIONS(664), 1,
      anon_sym_COMMA,
    ACTIONS(667), 1,
      anon_sym_GT,
    STATE(274), 1,
      aux_sym_tuple_fields_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(669), 12,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
      sym_name,
  [17436] = 14,
    ACTIONS(671), 1,
      anon_sym_LPAREN,
    ACTIONS(673), 1,
      anon_sym_LT,
    ACTIONS(677), 1,
      anon_sym_AT_AT,
    ACTIONS(679), 1,
      sym_name,
    STATE(425), 1,
      sym_global_accum_name,
    STATE(429), 1,
      sym_edge_set_type,
    STATE(432), 1,
      sym_atomic_edge_type,
    STATE(433), 1,
      sym_atomic_edge_pattern,
    STATE(526), 1,
      sym_path_edge_pattern,
    STATE(528), 1,
      sym_disj_pattern,
    STATE(636), 1,
      sym_step_edge_types,
    STATE(790), 1,
      sym_step_edge_set,
    ACTIONS(675), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [17482] = 3,
    ACTIONS(681), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(683), 12,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
      sym_name,
  [17506] = 3,
    ACTIONS(687), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(685), 13,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [17530] = 6,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(588), 1,
      sym_name,
    STATE(292), 1,
      sym_tuple_field,
    STATE(700), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [17560] = 4,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(689), 12,
      anon_sym_RPAREN,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [17586] = 5,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(694), 1,
      sym_name,
    STATE(701), 2,
      sym__element_type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [17614] = 4,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(199), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(165), 10,
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
  [17640] = 5,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(696), 1,
      sym_name,
    STATE(703), 2,
      sym__element_type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [17668] = 5,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(698), 1,
      sym_name,
    STATE(704), 2,
      sym__element_type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [17696] = 5,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(700), 1,
      sym_name,
    STATE(821), 2,
      sym__element_type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [17724] = 4,
    ACTIONS(704), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(702), 12,
      anon_sym_RPAREN,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [17750] = 5,
    ACTIONS(598), 1,
      anon_sym_VERTEX,
    STATE(296), 1,
      sym_query_param,
    STATE(825), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(596), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [17778] = 7,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    ACTIONS(706), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      sym_math_operator,
    STATE(468), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(528), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(474), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17810] = 3,
    ACTIONS(708), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(710), 12,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
      sym_name,
  [17834] = 8,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    ACTIONS(526), 1,
      anon_sym_COMMA,
    ACTIONS(528), 1,
      anon_sym_DASH_GT,
    STATE(170), 1,
      sym_math_operator,
    STATE(459), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(484), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(474), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17868] = 3,
    ACTIONS(658), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(662), 12,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
      sym_name,
  [17892] = 4,
    ACTIONS(704), 1,
      anon_sym_COMMA,
    STATE(285), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(712), 12,
      anon_sym_RPAREN,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [17918] = 3,
    ACTIONS(667), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(669), 12,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
      sym_name,
  [17942] = 8,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    ACTIONS(526), 1,
      anon_sym_COMMA,
    ACTIONS(528), 1,
      anon_sym_DASH_GT,
    STATE(170), 1,
      sym_math_operator,
    STATE(459), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(484), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(474), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17976] = 4,
    ACTIONS(598), 1,
      anon_sym_VERTEX,
    STATE(489), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(596), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [18001] = 5,
    STATE(170), 1,
      sym_math_operator,
    ACTIONS(484), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(504), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(474), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18028] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(689), 13,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [18049] = 4,
    ACTIONS(598), 1,
      anon_sym_VERTEX,
    STATE(492), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(596), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [18074] = 5,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(714), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(474), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18101] = 4,
    ACTIONS(598), 1,
      anon_sym_VERTEX,
    STATE(639), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(596), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [18126] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(199), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(550), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_post_DASHaccum,
      anon_sym_AND,
      anon_sym_to_csv,
  [18149] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(716), 13,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_VERTEX,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [18170] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(199), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(548), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_post_DASHaccum,
      anon_sym_AND,
      anon_sym_to_csv,
  [18193] = 6,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    ACTIONS(720), 1,
      anon_sym_AS,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(718), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(474), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18222] = 5,
    STATE(170), 1,
      sym_math_operator,
    ACTIONS(484), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(714), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(474), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18249] = 6,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    ACTIONS(724), 1,
      anon_sym_SEMI,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(722), 2,
      anon_sym_COMMA,
      anon_sym_OFFSET,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(474), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18278] = 7,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    ACTIONS(726), 1,
      anon_sym_COMMA,
    ACTIONS(728), 1,
      anon_sym_SEMI,
    STATE(149), 1,
      sym_math_operator,
    STATE(583), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(474), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18309] = 4,
    ACTIONS(598), 1,
      anon_sym_VERTEX,
    STATE(704), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(596), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [18334] = 4,
    STATE(170), 1,
      sym_math_operator,
    ACTIONS(266), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(264), 10,
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
  [18359] = 12,
    ACTIONS(673), 1,
      anon_sym_LT,
    ACTIONS(677), 1,
      anon_sym_AT_AT,
    ACTIONS(679), 1,
      sym_name,
    ACTIONS(730), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_edge_set_type,
    STATE(422), 1,
      sym_atomic_edge_type,
    STATE(425), 1,
      sym_global_accum_name,
    STATE(433), 1,
      sym_atomic_edge_pattern,
    STATE(528), 1,
      sym_disj_pattern,
    STATE(615), 1,
      sym_path_edge_pattern,
    ACTIONS(675), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18399] = 12,
    ACTIONS(673), 1,
      anon_sym_LT,
    ACTIONS(677), 1,
      anon_sym_AT_AT,
    ACTIONS(679), 1,
      sym_name,
    ACTIONS(730), 1,
      anon_sym_LPAREN,
    STATE(422), 1,
      sym_atomic_edge_type,
    STATE(425), 1,
      sym_global_accum_name,
    STATE(429), 1,
      sym_edge_set_type,
    STATE(433), 1,
      sym_atomic_edge_pattern,
    STATE(526), 1,
      sym_path_edge_pattern,
    STATE(528), 1,
      sym_disj_pattern,
    ACTIONS(675), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18439] = 4,
    ACTIONS(734), 1,
      anon_sym_VERTEX,
    STATE(276), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(732), 10,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_BOOL,
      anon_sym_UINT,
      anon_sym_EDGE,
      anon_sym_JSONOBJECT,
      anon_sym_JSONARRAY,
      anon_sym_DATETIME,
  [18463] = 12,
    ACTIONS(673), 1,
      anon_sym_LT,
    ACTIONS(677), 1,
      anon_sym_AT_AT,
    ACTIONS(679), 1,
      sym_name,
    ACTIONS(730), 1,
      anon_sym_LPAREN,
    STATE(422), 1,
      sym_atomic_edge_type,
    STATE(425), 1,
      sym_global_accum_name,
    STATE(429), 1,
      sym_edge_set_type,
    STATE(433), 1,
      sym_atomic_edge_pattern,
    STATE(528), 1,
      sym_disj_pattern,
    STATE(557), 1,
      sym_path_edge_pattern,
    ACTIONS(675), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18503] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(171), 12,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_PLUS_EQ,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_IN,
      anon_sym_COLON,
      anon_sym_post_DASHaccum,
  [18523] = 12,
    ACTIONS(673), 1,
      anon_sym_LT,
    ACTIONS(677), 1,
      anon_sym_AT_AT,
    ACTIONS(679), 1,
      sym_name,
    ACTIONS(730), 1,
      anon_sym_LPAREN,
    STATE(422), 1,
      sym_atomic_edge_type,
    STATE(425), 1,
      sym_global_accum_name,
    STATE(429), 1,
      sym_edge_set_type,
    STATE(433), 1,
      sym_atomic_edge_pattern,
    STATE(528), 1,
      sym_disj_pattern,
    STATE(615), 1,
      sym_path_edge_pattern,
    ACTIONS(675), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18563] = 6,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    ACTIONS(736), 1,
      anon_sym_WHEN,
    STATE(149), 1,
      sym_math_operator,
    STATE(448), 1,
      aux_sym_dml_sub_case_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(474), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18591] = 6,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    ACTIONS(738), 1,
      anon_sym_WHEN,
    STATE(149), 1,
      sym_math_operator,
    STATE(437), 1,
      aux_sym_query_body_case_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(474), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18619] = 5,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(740), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(474), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18645] = 5,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    ACTIONS(742), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(474), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18670] = 11,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(746), 1,
      anon_sym_GT,
    ACTIONS(750), 1,
      sym_name,
    STATE(327), 1,
      sym_global_accum_name,
    STATE(348), 1,
      sym_atomic_vertex_type,
    STATE(349), 1,
      sym_step_vertex_types,
    STATE(350), 1,
      sym_vertex_set_type,
    STATE(423), 1,
      sym_step_vertex_set,
    ACTIONS(748), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18707] = 5,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    ACTIONS(752), 1,
      anon_sym_SEMI,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(474), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18732] = 5,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    ACTIONS(752), 1,
      anon_sym_SEMI,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(474), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18757] = 5,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    ACTIONS(754), 1,
      anon_sym_SEMI,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(474), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18782] = 5,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    ACTIONS(756), 1,
      anon_sym_AND,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(474), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18807] = 5,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    ACTIONS(758), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(474), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18832] = 5,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    ACTIONS(760), 1,
      anon_sym_RBRACK,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(474), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18857] = 5,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    ACTIONS(762), 1,
      anon_sym_SEMI,
    STATE(149), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(474), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18882] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(764), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
      anon_sym_PIPE,
  [18900] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(766), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_post_DASHaccum,
      anon_sym_AND,
      anon_sym_to_csv,
  [18918] = 10,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      sym_name,
    STATE(327), 1,
      sym_global_accum_name,
    STATE(348), 1,
      sym_atomic_vertex_type,
    STATE(349), 1,
      sym_step_vertex_types,
    STATE(350), 1,
      sym_vertex_set_type,
    STATE(383), 1,
      sym_step_vertex_set,
    ACTIONS(748), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18952] = 10,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      sym_name,
    STATE(327), 1,
      sym_global_accum_name,
    STATE(348), 1,
      sym_atomic_vertex_type,
    STATE(349), 1,
      sym_step_vertex_types,
    STATE(350), 1,
      sym_vertex_set_type,
    STATE(356), 1,
      sym_step_vertex_set,
    ACTIONS(748), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18986] = 10,
    ACTIONS(768), 1,
      anon_sym_SEMI,
    ACTIONS(770), 1,
      anon_sym_WHERE,
    ACTIONS(772), 1,
      anon_sym_ACCUM,
    ACTIONS(774), 1,
      anon_sym_LIMIT,
    ACTIONS(776), 1,
      anon_sym_post_DASHaccum,
    STATE(346), 1,
      sym_where_clause,
    STATE(395), 1,
      sym_accum_clause,
    STATE(683), 1,
      sym_limit_clause,
    STATE(394), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19020] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(550), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_post_DASHaccum,
      anon_sym_AND,
      anon_sym_to_csv,
  [19038] = 10,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(744), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      sym_name,
    STATE(327), 1,
      sym_global_accum_name,
    STATE(348), 1,
      sym_atomic_vertex_type,
    STATE(349), 1,
      sym_step_vertex_types,
    STATE(350), 1,
      sym_vertex_set_type,
    STATE(408), 1,
      sym_step_vertex_set,
    ACTIONS(748), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19072] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(548), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_post_DASHaccum,
      anon_sym_AND,
      anon_sym_to_csv,
  [19090] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(550), 10,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_THEN,
      anon_sym_LIMIT,
      anon_sym_DO,
      anon_sym_post_DASHaccum,
      anon_sym_AND,
      anon_sym_to_csv,
  [19108] = 5,
    ACTIONS(780), 1,
      anon_sym_DOT,
    ACTIONS(782), 1,
      anon_sym_PLUS_EQ,
    STATE(337), 1,
      aux_sym_v_accum_func_call_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(778), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19132] = 4,
    ACTIONS(780), 1,
      anon_sym_DOT,
    STATE(339), 1,
      aux_sym_v_accum_func_call_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(784), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19153] = 9,
    ACTIONS(673), 1,
      anon_sym_LT,
    ACTIONS(677), 1,
      anon_sym_AT_AT,
    ACTIONS(679), 1,
      sym_name,
    STATE(422), 1,
      sym_atomic_edge_type,
    STATE(425), 1,
      sym_global_accum_name,
    STATE(429), 1,
      sym_edge_set_type,
    STATE(485), 1,
      sym_atomic_edge_pattern,
    ACTIONS(675), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19184] = 4,
    ACTIONS(788), 1,
      anon_sym_DOT,
    STATE(339), 1,
      aux_sym_v_accum_func_call_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(786), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19205] = 4,
    ACTIONS(791), 1,
      anon_sym_COMMA,
    STATE(351), 1,
      aux_sym_dml_sub_stmt_list_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(793), 6,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19225] = 4,
    ACTIONS(797), 1,
      anon_sym_DASH,
    STATE(355), 1,
      aux_sym_path_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(795), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19245] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(799), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19261] = 3,
    ACTIONS(803), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(801), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [19279] = 4,
    ACTIONS(805), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_dml_sub_stmt_list_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(808), 6,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19299] = 4,
    ACTIONS(810), 1,
      anon_sym_DASH,
    STATE(355), 1,
      aux_sym_path_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(795), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19319] = 8,
    ACTIONS(772), 1,
      anon_sym_ACCUM,
    ACTIONS(774), 1,
      anon_sym_LIMIT,
    ACTIONS(776), 1,
      anon_sym_post_DASHaccum,
    ACTIONS(812), 1,
      anon_sym_SEMI,
    STATE(385), 1,
      sym_accum_clause,
    STATE(660), 1,
      sym_limit_clause,
    STATE(403), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19347] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(814), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [19363] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(816), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [19379] = 3,
    ACTIONS(820), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(818), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [19397] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(822), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [19413] = 4,
    ACTIONS(791), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_dml_sub_stmt_list_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(824), 6,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19433] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(826), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19449] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(828), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [19465] = 4,
    ACTIONS(832), 1,
      anon_sym_DASH,
    STATE(354), 1,
      aux_sym_path_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(830), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19485] = 4,
    ACTIONS(797), 1,
      anon_sym_DASH,
    STATE(354), 1,
      aux_sym_path_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(835), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19505] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(837), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [19520] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(839), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19535] = 8,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
    ACTIONS(843), 1,
      anon_sym_DISTINCT,
    ACTIONS(845), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_global_accum_name,
    STATE(479), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19562] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(847), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19577] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(849), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19592] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(851), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19607] = 7,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(677), 1,
      anon_sym_AT_AT,
    ACTIONS(853), 1,
      anon_sym_LPAREN,
    ACTIONS(855), 1,
      sym_name,
    STATE(813), 1,
      sym_for_each_control,
    STATE(617), 2,
      sym_global_accum_name,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19632] = 4,
    ACTIONS(857), 1,
      anon_sym_COMMA,
    STATE(363), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(860), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19651] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(862), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19666] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(808), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19681] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(864), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19696] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(866), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19711] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(868), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [19726] = 4,
    ACTIONS(870), 1,
      anon_sym_COMMA,
    STATE(363), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(872), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19745] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(874), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19760] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(876), 1,
      anon_sym_RBRACE,
    ACTIONS(880), 1,
      sym_name,
    STATE(588), 1,
      sym_seed,
    STATE(614), 1,
      sym_global_accum_name,
    ACTIONS(878), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19785] = 4,
    ACTIONS(870), 1,
      anon_sym_COMMA,
    STATE(369), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(882), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19804] = 5,
    ACTIONS(884), 1,
      ts_builtin_sym_end,
    ACTIONS(886), 1,
      anon_sym_CREATE,
    ACTIONS(889), 1,
      anon_sym_INTERPRET,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    STATE(373), 4,
      sym__definition,
      sym_create_query,
      sym_interpret_query,
      aux_sym_gsql_repeat1,
  [19825] = 7,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(677), 1,
      anon_sym_AT_AT,
    ACTIONS(853), 1,
      anon_sym_LPAREN,
    ACTIONS(855), 1,
      sym_name,
    STATE(739), 1,
      sym_for_each_control,
    STATE(617), 2,
      sym_global_accum_name,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19850] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(892), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19865] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(894), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19880] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(896), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [19895] = 8,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
    ACTIONS(845), 1,
      sym_name,
    ACTIONS(898), 1,
      anon_sym_DISTINCT,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_global_accum_name,
    STATE(441), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19922] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(900), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19937] = 5,
    ACTIONS(7), 1,
      anon_sym_CREATE,
    ACTIONS(9), 1,
      anon_sym_INTERPRET,
    ACTIONS(902), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    STATE(373), 4,
      sym__definition,
      sym_create_query,
      sym_interpret_query,
      aux_sym_gsql_repeat1,
  [19958] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(679), 1,
      sym_name,
    STATE(425), 1,
      sym_global_accum_name,
    STATE(429), 1,
      sym_edge_set_type,
    STATE(450), 1,
      sym_atomic_edge_type,
    ACTIONS(675), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19983] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(904), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19998] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(906), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [20013] = 8,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
    ACTIONS(845), 1,
      sym_name,
    ACTIONS(908), 1,
      anon_sym_RANGE,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_global_accum_name,
    STATE(463), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20040] = 6,
    ACTIONS(774), 1,
      anon_sym_LIMIT,
    ACTIONS(776), 1,
      anon_sym_post_DASHaccum,
    ACTIONS(910), 1,
      anon_sym_SEMI,
    STATE(837), 1,
      sym_limit_clause,
    STATE(388), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20062] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
    ACTIONS(912), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_global_accum_name,
    STATE(440), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20086] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
    ACTIONS(912), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_global_accum_name,
    STATE(463), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20110] = 6,
    ACTIONS(774), 1,
      anon_sym_LIMIT,
    ACTIONS(776), 1,
      anon_sym_post_DASHaccum,
    ACTIONS(914), 1,
      anon_sym_SEMI,
    STATE(757), 1,
      sym_limit_clause,
    STATE(420), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20132] = 6,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(880), 1,
      sym_name,
    STATE(614), 1,
      sym_global_accum_name,
    STATE(643), 1,
      sym_seed,
    ACTIONS(878), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20154] = 3,
    ACTIONS(916), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(918), 4,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [20170] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
    ACTIONS(912), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_global_accum_name,
    STATE(37), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20194] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
    ACTIONS(912), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_global_accum_name,
    STATE(302), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20218] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
    ACTIONS(912), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_global_accum_name,
    STATE(439), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20242] = 6,
    ACTIONS(774), 1,
      anon_sym_LIMIT,
    ACTIONS(776), 1,
      anon_sym_post_DASHaccum,
    ACTIONS(812), 1,
      anon_sym_SEMI,
    STATE(660), 1,
      sym_limit_clause,
    STATE(420), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20264] = 6,
    ACTIONS(774), 1,
      anon_sym_LIMIT,
    ACTIONS(776), 1,
      anon_sym_post_DASHaccum,
    ACTIONS(812), 1,
      anon_sym_SEMI,
    STATE(660), 1,
      sym_limit_clause,
    STATE(403), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20286] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
    ACTIONS(912), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_global_accum_name,
    STATE(477), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20310] = 7,
    ACTIONS(388), 1,
      anon_sym_AT_AT,
    ACTIONS(920), 1,
      anon_sym_LPAREN,
    ACTIONS(922), 1,
      sym_name,
    STATE(182), 1,
      sym_name_dot,
    STATE(201), 1,
      sym_global_accum_name,
    STATE(206), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20334] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
    ACTIONS(912), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_global_accum_name,
    STATE(481), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20358] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
    ACTIONS(912), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_global_accum_name,
    STATE(300), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20382] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
    ACTIONS(912), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_global_accum_name,
    STATE(479), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20406] = 5,
    ACTIONS(193), 1,
      sym_digit,
    ACTIONS(926), 1,
      anon_sym_DOT,
    STATE(41), 1,
      aux_sym_simple_size_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(924), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_THEN,
  [20426] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
    ACTIONS(912), 1,
      sym_name,
    STATE(26), 1,
      sym_name_dot,
    STATE(35), 1,
      sym_global_accum_name,
    STATE(441), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20450] = 6,
    ACTIONS(774), 1,
      anon_sym_LIMIT,
    ACTIONS(776), 1,
      anon_sym_post_DASHaccum,
    ACTIONS(910), 1,
      anon_sym_SEMI,
    STATE(837), 1,
      sym_limit_clause,
    STATE(420), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20472] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(123), 6,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_IN,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20486] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(860), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [20500] = 6,
    ACTIONS(928), 1,
      anon_sym_COMMA,
    ACTIONS(930), 1,
      anon_sym_SEMI,
    ACTIONS(932), 1,
      anon_sym_WHERE,
    ACTIONS(934), 1,
      anon_sym_to_csv,
    STATE(411), 1,
      aux_sym_print_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20521] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(936), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20534] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(938), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [20547] = 6,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(940), 1,
      sym_name,
    STATE(705), 1,
      sym_string_literal,
    STATE(789), 1,
      sym_file_path,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20568] = 6,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      anon_sym_LT,
    ACTIONS(942), 1,
      anon_sym_EQ,
    ACTIONS(944), 1,
      anon_sym_DOT,
    STATE(44), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20589] = 4,
    ACTIONS(946), 1,
      anon_sym_COMMA,
    STATE(411), 1,
      aux_sym_print_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(949), 3,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_to_csv,
  [20606] = 6,
    ACTIONS(928), 1,
      anon_sym_COMMA,
    ACTIONS(951), 1,
      anon_sym_SEMI,
    ACTIONS(953), 1,
      anon_sym_WHERE,
    ACTIONS(955), 1,
      anon_sym_to_csv,
    STATE(406), 1,
      aux_sym_print_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20627] = 6,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(957), 1,
      sym_name,
    STATE(679), 1,
      sym_file_path,
    STATE(705), 1,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20648] = 4,
    ACTIONS(961), 1,
      anon_sym_PIPE,
    STATE(414), 1,
      aux_sym_disj_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(959), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [20665] = 3,
    ACTIONS(640), 1,
      anon_sym_AS,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(636), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_to_csv,
  [20680] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(964), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_to_csv,
      anon_sym_AS,
  [20693] = 6,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      anon_sym_LT,
    ACTIONS(966), 1,
      anon_sym_EQ,
    ACTIONS(968), 1,
      anon_sym_DOT,
    STATE(44), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20714] = 6,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(970), 1,
      sym_name,
    STATE(705), 1,
      sym_string_literal,
    STATE(734), 1,
      sym_file_path,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20735] = 4,
    ACTIONS(974), 1,
      anon_sym_PIPE,
    STATE(414), 1,
      aux_sym_disj_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(972), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [20752] = 4,
    ACTIONS(978), 1,
      anon_sym_post_DASHaccum,
    ACTIONS(976), 2,
      anon_sym_SEMI,
      anon_sym_LIMIT,
    STATE(420), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20769] = 5,
    ACTIONS(981), 1,
      anon_sym_RPAREN,
    ACTIONS(985), 1,
      anon_sym_PIPE,
    STATE(563), 1,
      aux_sym_step_edge_types_repeat1,
    ACTIONS(983), 2,
      anon_sym_GT,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20788] = 3,
    ACTIONS(989), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(987), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20803] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(991), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [20816] = 4,
    ACTIONS(193), 1,
      sym_digit,
    STATE(41), 1,
      aux_sym_simple_size_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(993), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_THEN,
  [20833] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(995), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20846] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(882), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [20859] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(936), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20872] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(997), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_to_csv,
      anon_sym_AS,
  [20885] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(983), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20898] = 6,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(999), 1,
      sym_name,
    STATE(705), 1,
      sym_string_literal,
    STATE(807), 1,
      sym_file_path,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20919] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(554), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20932] = 4,
    ACTIONS(989), 1,
      anon_sym_GT,
    ACTIONS(987), 2,
      anon_sym_DOT,
      anon_sym_PIPE,
    ACTIONS(1001), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20949] = 4,
    ACTIONS(974), 1,
      anon_sym_PIPE,
    STATE(419), 1,
      aux_sym_disj_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1003), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [20966] = 5,
    ACTIONS(1005), 1,
      sym_name,
    ACTIONS(1007), 1,
      sym_digit,
    STATE(453), 1,
      aux_sym_simple_size_repeat1,
    STATE(692), 1,
      sym_simple_size,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20984] = 5,
    ACTIONS(1005), 1,
      sym_name,
    ACTIONS(1007), 1,
      sym_digit,
    STATE(453), 1,
      aux_sym_simple_size_repeat1,
    STATE(720), 1,
      sym_simple_size,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21002] = 4,
    ACTIONS(1011), 1,
      anon_sym_WHEN,
    STATE(436), 1,
      aux_sym_query_body_case_stmt_repeat1,
    ACTIONS(1009), 2,
      anon_sym_ELSE,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21018] = 5,
    ACTIONS(738), 1,
      anon_sym_WHEN,
    ACTIONS(1014), 1,
      anon_sym_ELSE,
    ACTIONS(1016), 1,
      anon_sym_END,
    STATE(451), 1,
      aux_sym_query_body_case_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21036] = 4,
    ACTIONS(1018), 1,
      anon_sym_SEMI,
    ACTIONS(1020), 1,
      anon_sym_to_csv,
    ACTIONS(916), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21052] = 3,
    ACTIONS(1022), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(199), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21066] = 3,
    ACTIONS(1022), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(199), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21080] = 3,
    ACTIONS(1024), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(199), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21094] = 5,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(1026), 1,
      sym_name,
    STATE(327), 1,
      sym_global_accum_name,
    STATE(495), 1,
      sym_vertex_set_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21112] = 3,
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
  [21126] = 3,
    ACTIONS(1034), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1032), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [21140] = 3,
    ACTIONS(1036), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1038), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21154] = 5,
    ACTIONS(1005), 1,
      sym_name,
    ACTIONS(1007), 1,
      sym_digit,
    STATE(453), 1,
      aux_sym_simple_size_repeat1,
    STATE(828), 1,
      sym_simple_size,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21172] = 5,
    ACTIONS(726), 1,
      anon_sym_COMMA,
    ACTIONS(1040), 1,
      anon_sym_EQ,
    ACTIONS(1042), 1,
      anon_sym_SEMI,
    STATE(518), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21190] = 5,
    ACTIONS(736), 1,
      anon_sym_WHEN,
    ACTIONS(1044), 1,
      anon_sym_ELSE,
    ACTIONS(1046), 1,
      anon_sym_END,
    STATE(466), 1,
      aux_sym_dml_sub_case_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21208] = 5,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1050), 1,
      anon_sym_EQ,
    ACTIONS(1052), 1,
      anon_sym_SEMI,
    STATE(508), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21226] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1054), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [21238] = 4,
    ACTIONS(1058), 1,
      anon_sym_WHEN,
    STATE(451), 1,
      aux_sym_query_body_case_stmt_repeat2,
    ACTIONS(1056), 2,
      anon_sym_ELSE,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21254] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1061), 4,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
  [21266] = 4,
    ACTIONS(193), 1,
      sym_digit,
    STATE(41), 1,
      aux_sym_simple_size_repeat1,
    ACTIONS(1063), 2,
      anon_sym_COMMA,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21282] = 5,
    ACTIONS(1052), 1,
      anon_sym_SEMI,
    ACTIONS(1065), 1,
      anon_sym_COMMA,
    ACTIONS(1067), 1,
      anon_sym_EQ,
    STATE(503), 1,
      aux_sym_accum_decl_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21300] = 4,
    ACTIONS(1069), 1,
      anon_sym_COMMA,
    STATE(455), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(714), 2,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21316] = 3,
    ACTIONS(1074), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1072), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [21330] = 4,
    ACTIONS(1078), 1,
      anon_sym_WHEN,
    STATE(457), 1,
      aux_sym_dml_sub_case_stmt_repeat1,
    ACTIONS(1076), 2,
      anon_sym_ELSE,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21346] = 5,
    ACTIONS(1081), 1,
      sym_name,
    STATE(345), 1,
      sym_step_source_set,
    STATE(372), 1,
      sym_path_pattern,
    STATE(426), 1,
      sym_step,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21364] = 4,
    ACTIONS(526), 1,
      anon_sym_COMMA,
    STATE(455), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(1083), 2,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21380] = 5,
    ACTIONS(1085), 1,
      anon_sym_ELSE,
    ACTIONS(1087), 1,
      anon_sym_END,
    ACTIONS(1089), 1,
      anon_sym_WHEN,
    STATE(457), 1,
      aux_sym_dml_sub_case_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21398] = 4,
    ACTIONS(1091), 1,
      anon_sym_LIMIT,
    ACTIONS(1093), 1,
      anon_sym_DO,
    ACTIONS(916), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21414] = 5,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(1026), 1,
      sym_name,
    STATE(327), 1,
      sym_global_accum_name,
    STATE(606), 1,
      sym_vertex_set_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21432] = 3,
    ACTIONS(1095), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(199), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21446] = 3,
    ACTIONS(1099), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1097), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [21460] = 4,
    ACTIONS(1101), 1,
      anon_sym_LIMIT,
    ACTIONS(1103), 1,
      anon_sym_DO,
    ACTIONS(916), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21476] = 4,
    ACTIONS(1107), 1,
      anon_sym_WHEN,
    STATE(466), 1,
      aux_sym_dml_sub_case_stmt_repeat2,
    ACTIONS(1105), 2,
      anon_sym_ELSE,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21492] = 5,
    ACTIONS(1110), 1,
      anon_sym_ELSE,
    ACTIONS(1112), 1,
      anon_sym_END,
    ACTIONS(1114), 1,
      anon_sym_WHEN,
    STATE(436), 1,
      aux_sym_query_body_case_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21510] = 4,
    ACTIONS(706), 1,
      anon_sym_COMMA,
    STATE(475), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(1083), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21526] = 5,
    ACTIONS(169), 1,
      anon_sym_DOT,
    ACTIONS(1116), 1,
      anon_sym_EQ,
    ACTIONS(1118), 1,
      anon_sym_PLUS_EQ,
    STATE(44), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21544] = 3,
    ACTIONS(1122), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1120), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [21558] = 3,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1038), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21572] = 5,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(449), 1,
      sym_local_accum_name,
    STATE(454), 1,
      sym_global_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21590] = 3,
    ACTIONS(1128), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1126), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [21604] = 3,
    ACTIONS(1132), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1130), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [21618] = 4,
    ACTIONS(1134), 1,
      anon_sym_COMMA,
    STATE(475), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(714), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21634] = 3,
    ACTIONS(1139), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1137), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [21648] = 3,
    ACTIONS(1141), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(199), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21662] = 5,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(1143), 1,
      sym_name,
    STATE(425), 1,
      sym_global_accum_name,
    STATE(633), 1,
      sym_edge_set_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21680] = 3,
    ACTIONS(1145), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(199), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21694] = 3,
    ACTIONS(1147), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(658), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [21708] = 3,
    ACTIONS(1149), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(199), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21722] = 4,
    ACTIONS(1151), 1,
      anon_sym_SEMI,
    ACTIONS(1153), 1,
      anon_sym_to_csv,
    ACTIONS(916), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21738] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(949), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_to_csv,
  [21750] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1155), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_to_csv,
  [21762] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(959), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [21774] = 4,
    ACTIONS(1157), 1,
      anon_sym_LPAREN,
    ACTIONS(1159), 1,
      sym_name,
    STATE(471), 1,
      sym_simple_set,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21789] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(356), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [21800] = 4,
    ACTIONS(1161), 1,
      anon_sym_COMMA,
    ACTIONS(1163), 1,
      anon_sym_GT,
    STATE(521), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21815] = 4,
    ACTIONS(1161), 1,
      anon_sym_COMMA,
    ACTIONS(1165), 1,
      anon_sym_GT,
    STATE(488), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21830] = 4,
    ACTIONS(1167), 1,
      anon_sym_RPAREN,
    ACTIONS(1169), 1,
      anon_sym_COMMA,
    STATE(490), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21845] = 3,
    ACTIONS(1172), 1,
      anon_sym_RPAREN,
    ACTIONS(916), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21858] = 4,
    ACTIONS(1161), 1,
      anon_sym_COMMA,
    ACTIONS(1174), 1,
      anon_sym_GT,
    STATE(601), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21873] = 3,
    ACTIONS(1176), 1,
      anon_sym_THEN,
    ACTIONS(916), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21886] = 4,
    ACTIONS(1178), 1,
      anon_sym_ELSE,
    ACTIONS(1181), 1,
      anon_sym_END,
    STATE(494), 1,
      aux_sym_query_body_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21901] = 4,
    ACTIONS(1183), 1,
      anon_sym_RPAREN,
    ACTIONS(1185), 1,
      anon_sym_PIPE,
    STATE(573), 1,
      aux_sym_step_vertex_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21916] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1187), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [21927] = 3,
    ACTIONS(1189), 1,
      anon_sym_RPAREN,
    ACTIONS(916), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21940] = 3,
    ACTIONS(1191), 1,
      anon_sym_RPAREN,
    ACTIONS(916), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21953] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1193), 1,
      anon_sym_SEMI,
    STATE(570), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21968] = 4,
    ACTIONS(1065), 1,
      anon_sym_COMMA,
    ACTIONS(1193), 1,
      anon_sym_SEMI,
    STATE(579), 1,
      aux_sym_accum_decl_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21983] = 4,
    ACTIONS(1195), 1,
      anon_sym_RPAREN,
    ACTIONS(1197), 1,
      anon_sym_COMMA,
    STATE(490), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21998] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(658), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [22009] = 4,
    ACTIONS(1065), 1,
      anon_sym_COMMA,
    ACTIONS(1199), 1,
      anon_sym_SEMI,
    STATE(579), 1,
      aux_sym_accum_decl_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22024] = 4,
    ACTIONS(1201), 1,
      anon_sym_SQUOTE,
    ACTIONS(1203), 1,
      aux_sym_string_literal_token2,
    STATE(530), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1205), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22039] = 4,
    ACTIONS(1207), 1,
      anon_sym_COMMA,
    ACTIONS(1209), 1,
      anon_sym_GT,
    STATE(571), 1,
      aux_sym_accum_type_repeat3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22054] = 4,
    ACTIONS(1201), 1,
      anon_sym_DQUOTE,
    ACTIONS(1211), 1,
      aux_sym_string_literal_token1,
    STATE(527), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1205), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22069] = 4,
    ACTIONS(1213), 1,
      anon_sym_AT,
    ACTIONS(1215), 1,
      sym_name,
    STATE(336), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22084] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1199), 1,
      anon_sym_SEMI,
    STATE(570), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22099] = 3,
    ACTIONS(1217), 1,
      anon_sym_RPAREN,
    ACTIONS(916), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22112] = 4,
    ACTIONS(1219), 1,
      anon_sym_AT,
    ACTIONS(1221), 1,
      sym_name,
    STATE(180), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22127] = 4,
    ACTIONS(1223), 1,
      anon_sym_COMMA,
    ACTIONS(1226), 1,
      anon_sym_RBRACK,
    STATE(511), 1,
      aux_sym_v_expr_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22142] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1228), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [22153] = 4,
    ACTIONS(1230), 1,
      anon_sym_SQUOTE,
    ACTIONS(1232), 1,
      aux_sym_string_literal_token2,
    STATE(504), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1205), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22168] = 3,
    ACTIONS(1234), 1,
      anon_sym_THEN,
    ACTIONS(916), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22181] = 4,
    ACTIONS(1236), 1,
      anon_sym_ELSE,
    ACTIONS(1239), 1,
      anon_sym_END,
    STATE(515), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22196] = 4,
    ACTIONS(1230), 1,
      anon_sym_DQUOTE,
    ACTIONS(1241), 1,
      aux_sym_string_literal_token1,
    STATE(506), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1205), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22211] = 4,
    ACTIONS(1243), 1,
      anon_sym_COMMA,
    ACTIONS(1246), 1,
      anon_sym_RBRACE,
    STATE(517), 1,
      aux_sym_seed_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22226] = 4,
    ACTIONS(726), 1,
      anon_sym_COMMA,
    ACTIONS(1248), 1,
      anon_sym_SEMI,
    STATE(568), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22241] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1250), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [22252] = 4,
    ACTIONS(1252), 1,
      anon_sym_SYNTAX,
    ACTIONS(1254), 1,
      anon_sym_LBRACE,
    STATE(531), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22267] = 4,
    ACTIONS(1256), 1,
      anon_sym_COMMA,
    ACTIONS(1259), 1,
      anon_sym_GT,
    STATE(521), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22282] = 4,
    ACTIONS(1254), 1,
      anon_sym_LBRACE,
    ACTIONS(1261), 1,
      anon_sym_SYNTAX,
    STATE(532), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22297] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1263), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [22308] = 4,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    ACTIONS(1267), 1,
      anon_sym_RBRACE,
    STATE(517), 1,
      aux_sym_seed_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22323] = 4,
    ACTIONS(1254), 1,
      anon_sym_LBRACE,
    ACTIONS(1269), 1,
      anon_sym_SYNTAX,
    STATE(536), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22338] = 4,
    ACTIONS(1271), 1,
      anon_sym_RPAREN,
    ACTIONS(1273), 1,
      anon_sym_DOT,
    ACTIONS(1275), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22353] = 4,
    ACTIONS(1277), 1,
      anon_sym_DQUOTE,
    ACTIONS(1279), 1,
      aux_sym_string_literal_token1,
    STATE(527), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1205), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22368] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1003), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [22379] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(708), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [22390] = 4,
    ACTIONS(1282), 1,
      anon_sym_SQUOTE,
    ACTIONS(1284), 1,
      aux_sym_string_literal_token2,
    STATE(530), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1205), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22405] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1287), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [22416] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1289), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [22427] = 4,
    ACTIONS(1291), 1,
      anon_sym_COMMA,
    ACTIONS(1293), 1,
      anon_sym_RBRACK,
    STATE(511), 1,
      aux_sym_v_expr_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22442] = 3,
    ACTIONS(1295), 1,
      anon_sym_THEN,
    ACTIONS(916), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22455] = 4,
    ACTIONS(1254), 1,
      anon_sym_LBRACE,
    ACTIONS(1297), 1,
      anon_sym_SYNTAX,
    STATE(550), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22470] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1299), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [22481] = 4,
    ACTIONS(1301), 1,
      anon_sym_RPAREN,
    ACTIONS(1303), 1,
      anon_sym_PIPE,
    STATE(537), 1,
      aux_sym_step_edge_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22496] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1306), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [22507] = 4,
    ACTIONS(1308), 1,
      anon_sym_RPAREN,
    ACTIONS(1310), 1,
      anon_sym_COMMA,
    STATE(539), 1,
      aux_sym_for_each_control_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22522] = 4,
    ACTIONS(1197), 1,
      anon_sym_COMMA,
    ACTIONS(1313), 1,
      anon_sym_RPAREN,
    STATE(501), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22537] = 3,
    ACTIONS(1315), 1,
      anon_sym_THEN,
    ACTIONS(916), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22550] = 4,
    ACTIONS(1219), 1,
      anon_sym_AT,
    ACTIONS(1317), 1,
      sym_name,
    STATE(180), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22565] = 4,
    ACTIONS(1319), 1,
      anon_sym_LPAREN,
    ACTIONS(1321), 1,
      anon_sym_EQ,
    ACTIONS(1323), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22580] = 4,
    ACTIONS(1325), 1,
      anon_sym_ELSE,
    ACTIONS(1327), 1,
      anon_sym_END,
    STATE(547), 1,
      aux_sym_query_body_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22595] = 4,
    ACTIONS(1325), 1,
      anon_sym_ELSE,
    ACTIONS(1327), 1,
      anon_sym_END,
    STATE(547), 1,
      aux_sym_query_body_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22610] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1329), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [22621] = 4,
    ACTIONS(1331), 1,
      anon_sym_ELSE,
    ACTIONS(1333), 1,
      anon_sym_END,
    STATE(494), 1,
      aux_sym_query_body_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22636] = 4,
    ACTIONS(205), 1,
      anon_sym_DOT,
    ACTIONS(1335), 1,
      sym_digit,
    STATE(401), 1,
      aux_sym_simple_size_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22651] = 4,
    ACTIONS(1254), 1,
      anon_sym_LBRACE,
    ACTIONS(1337), 1,
      anon_sym_SYNTAX,
    STATE(584), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22666] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1339), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [22677] = 4,
    ACTIONS(1341), 1,
      anon_sym_RPAREN,
    ACTIONS(1343), 1,
      anon_sym_COMMA,
    STATE(539), 1,
      aux_sym_for_each_control_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22692] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1345), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [22703] = 4,
    ACTIONS(1347), 1,
      anon_sym_ELSE,
    ACTIONS(1349), 1,
      anon_sym_END,
    STATE(515), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22718] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1351), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [22729] = 4,
    ACTIONS(1291), 1,
      anon_sym_COMMA,
    ACTIONS(1353), 1,
      anon_sym_RBRACK,
    STATE(533), 1,
      aux_sym_v_expr_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22744] = 4,
    ACTIONS(1355), 1,
      anon_sym_AT,
    ACTIONS(1357), 1,
      sym_name,
    STATE(25), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22759] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1359), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [22770] = 3,
    ACTIONS(1361), 1,
      anon_sym_THEN,
    ACTIONS(916), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22783] = 4,
    ACTIONS(1363), 1,
      anon_sym_OR,
    ACTIONS(1365), 1,
      anon_sym_DISTRIBUTED,
    ACTIONS(1367), 1,
      anon_sym_QUERY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22798] = 4,
    ACTIONS(1369), 1,
      anon_sym_DQUOTE,
    ACTIONS(1371), 1,
      aux_sym_string_literal_token1,
    STATE(596), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1205), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22813] = 4,
    ACTIONS(1369), 1,
      anon_sym_SQUOTE,
    ACTIONS(1373), 1,
      aux_sym_string_literal_token2,
    STATE(598), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1205), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22828] = 3,
    ACTIONS(1375), 1,
      anon_sym_THEN,
    ACTIONS(916), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22841] = 4,
    ACTIONS(985), 1,
      anon_sym_PIPE,
    ACTIONS(1377), 1,
      anon_sym_RPAREN,
    STATE(537), 1,
      aux_sym_step_edge_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22856] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1359), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [22867] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1061), 3,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
  [22878] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1379), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [22889] = 4,
    ACTIONS(1207), 1,
      anon_sym_COMMA,
    ACTIONS(1381), 1,
      anon_sym_GT,
    STATE(578), 1,
      aux_sym_accum_type_repeat3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22904] = 4,
    ACTIONS(1383), 1,
      anon_sym_COMMA,
    ACTIONS(1386), 1,
      anon_sym_SEMI,
    STATE(568), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22919] = 3,
    ACTIONS(1388), 1,
      anon_sym_EQ,
    ACTIONS(1386), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22932] = 4,
    ACTIONS(1390), 1,
      anon_sym_COMMA,
    ACTIONS(1393), 1,
      anon_sym_SEMI,
    STATE(570), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22947] = 4,
    ACTIONS(1207), 1,
      anon_sym_COMMA,
    ACTIONS(1395), 1,
      anon_sym_GT,
    STATE(578), 1,
      aux_sym_accum_type_repeat3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22962] = 4,
    ACTIONS(1207), 1,
      anon_sym_COMMA,
    ACTIONS(1395), 1,
      anon_sym_GT,
    STATE(567), 1,
      aux_sym_accum_type_repeat3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22977] = 4,
    ACTIONS(1185), 1,
      anon_sym_PIPE,
    ACTIONS(1397), 1,
      anon_sym_RPAREN,
    STATE(597), 1,
      aux_sym_step_vertex_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22992] = 4,
    ACTIONS(1213), 1,
      anon_sym_AT,
    ACTIONS(1399), 1,
      sym_name,
    STATE(653), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23007] = 4,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    ACTIONS(1401), 1,
      anon_sym_SEMI,
    STATE(499), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23022] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1403), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [23033] = 3,
    ACTIONS(1405), 1,
      anon_sym_EQ,
    ACTIONS(1393), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23046] = 4,
    ACTIONS(1407), 1,
      anon_sym_COMMA,
    ACTIONS(1410), 1,
      anon_sym_GT,
    STATE(578), 1,
      aux_sym_accum_type_repeat3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23061] = 4,
    ACTIONS(1412), 1,
      anon_sym_COMMA,
    ACTIONS(1415), 1,
      anon_sym_SEMI,
    STATE(579), 1,
      aux_sym_accum_decl_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23076] = 4,
    ACTIONS(1065), 1,
      anon_sym_COMMA,
    ACTIONS(1401), 1,
      anon_sym_SEMI,
    STATE(500), 1,
      aux_sym_accum_decl_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23091] = 3,
    ACTIONS(1417), 1,
      anon_sym_EQ,
    ACTIONS(1415), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23104] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1419), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [23115] = 4,
    ACTIONS(726), 1,
      anon_sym_COMMA,
    ACTIONS(1421), 1,
      anon_sym_SEMI,
    STATE(568), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23130] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1423), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [23141] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1425), 3,
      anon_sym_SEMI,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [23152] = 3,
    ACTIONS(1429), 1,
      anon_sym_DOT_STAR,
    ACTIONS(1427), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23165] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1431), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [23176] = 4,
    ACTIONS(1265), 1,
      anon_sym_COMMA,
    ACTIONS(1433), 1,
      anon_sym_RBRACE,
    STATE(524), 1,
      aux_sym_seed_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23191] = 4,
    ACTIONS(1435), 1,
      anon_sym_ELSE,
    ACTIONS(1437), 1,
      anon_sym_END,
    STATE(553), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23206] = 4,
    ACTIONS(169), 1,
      anon_sym_DOT,
    ACTIONS(1439), 1,
      anon_sym_PLUS_EQ,
    STATE(44), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23221] = 3,
    ACTIONS(1441), 1,
      anon_sym_RPAREN,
    ACTIONS(916), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23234] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1443), 3,
      anon_sym_SEMI,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [23245] = 3,
    ACTIONS(1445), 1,
      anon_sym_THEN,
    ACTIONS(916), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23258] = 4,
    ACTIONS(1081), 1,
      sym_name,
    STATE(341), 1,
      sym_step_source_set,
    STATE(405), 1,
      sym_path_pattern,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23273] = 4,
    ACTIONS(1355), 1,
      anon_sym_AT,
    ACTIONS(1447), 1,
      sym_name,
    STATE(25), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23288] = 4,
    ACTIONS(1211), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1449), 1,
      anon_sym_DQUOTE,
    STATE(527), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1205), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23303] = 4,
    ACTIONS(1451), 1,
      anon_sym_RPAREN,
    ACTIONS(1453), 1,
      anon_sym_PIPE,
    STATE(597), 1,
      aux_sym_step_vertex_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23318] = 4,
    ACTIONS(1203), 1,
      aux_sym_string_literal_token2,
    ACTIONS(1449), 1,
      anon_sym_SQUOTE,
    STATE(530), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1205), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23333] = 4,
    ACTIONS(1157), 1,
      anon_sym_LPAREN,
    ACTIONS(1159), 1,
      sym_name,
    STATE(427), 1,
      sym_simple_set,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23348] = 3,
    ACTIONS(1456), 1,
      anon_sym_THEN,
    ACTIONS(916), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23361] = 4,
    ACTIONS(1161), 1,
      anon_sym_COMMA,
    ACTIONS(1458), 1,
      anon_sym_GT,
    STATE(521), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23376] = 4,
    ACTIONS(1435), 1,
      anon_sym_ELSE,
    ACTIONS(1437), 1,
      anon_sym_END,
    STATE(553), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23391] = 3,
    ACTIONS(1460), 1,
      anon_sym_IN,
    ACTIONS(1462), 1,
      anon_sym_LIKE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23403] = 2,
    ACTIONS(1464), 2,
      anon_sym_ELSE,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23413] = 3,
    ACTIONS(1441), 1,
      anon_sym_NULL,
    ACTIONS(1466), 1,
      anon_sym_NOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23425] = 2,
    ACTIONS(1451), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23435] = 2,
    ACTIONS(1468), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23445] = 3,
    ACTIONS(1470), 1,
      sym_digit,
    STATE(46), 1,
      aux_sym_simple_size_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23457] = 3,
    ACTIONS(1472), 1,
      sym_digit,
    STATE(47), 1,
      aux_sym_simple_size_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23469] = 3,
    ACTIONS(1474), 1,
      anon_sym_RPAREN,
    ACTIONS(1476), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23481] = 3,
    ACTIONS(1254), 1,
      anon_sym_LBRACE,
    STATE(523), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23493] = 2,
    ACTIONS(1478), 2,
      anon_sym_ASC,
      anon_sym_DESC,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23503] = 3,
    ACTIONS(1343), 1,
      anon_sym_COMMA,
    STATE(551), 1,
      aux_sym_for_each_control_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23515] = 2,
    ACTIONS(1427), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23525] = 3,
    ACTIONS(1273), 1,
      anon_sym_DOT,
    ACTIONS(1480), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23537] = 3,
    ACTIONS(1482), 1,
      sym_digit,
    STATE(209), 1,
      aux_sym_simple_size_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23549] = 3,
    ACTIONS(1484), 1,
      anon_sym_IN,
    ACTIONS(1486), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23561] = 2,
    ACTIONS(1488), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23571] = 3,
    ACTIONS(1490), 1,
      sym_digit,
    STATE(211), 1,
      aux_sym_simple_size_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23583] = 3,
    ACTIONS(1492), 1,
      sym_digit,
    STATE(43), 1,
      aux_sym_simple_size_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23595] = 3,
    ACTIONS(1494), 1,
      sym_digit,
    STATE(212), 1,
      aux_sym_simple_size_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23607] = 3,
    ACTIONS(1254), 1,
      anon_sym_LBRACE,
    STATE(587), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23619] = 2,
    ACTIONS(1496), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23629] = 2,
    ACTIONS(1498), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23639] = 2,
    ACTIONS(1063), 2,
      anon_sym_COMMA,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23649] = 3,
    ACTIONS(1254), 1,
      anon_sym_LBRACE,
    STATE(582), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23661] = 3,
    ACTIONS(169), 1,
      anon_sym_DOT,
    STATE(44), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23673] = 3,
    ACTIONS(1500), 1,
      anon_sym_FROM,
    STATE(331), 1,
      sym_from_clause,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23685] = 2,
    ACTIONS(1502), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23695] = 3,
    ACTIONS(1504), 1,
      anon_sym_DOT,
    ACTIONS(1506), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23707] = 3,
    ACTIONS(1508), 1,
      anon_sym_IN,
    ACTIONS(1510), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23719] = 2,
    ACTIONS(1512), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23729] = 2,
    ACTIONS(1301), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23739] = 2,
    ACTIONS(1514), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23749] = 3,
    ACTIONS(1254), 1,
      anon_sym_LBRACE,
    STATE(554), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23761] = 3,
    ACTIONS(1516), 1,
      anon_sym_RPAREN,
    ACTIONS(1518), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23773] = 2,
    ACTIONS(1520), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23783] = 3,
    ACTIONS(1522), 1,
      sym_digit,
    STATE(42), 1,
      aux_sym_simple_size_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23795] = 2,
    ACTIONS(1259), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23805] = 3,
    ACTIONS(1254), 1,
      anon_sym_LBRACE,
    STATE(566), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23817] = 3,
    ACTIONS(512), 1,
      anon_sym_DOT,
    STATE(210), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23829] = 3,
    ACTIONS(1524), 1,
      sym_digit,
    STATE(213), 1,
      aux_sym_simple_size_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23841] = 2,
    ACTIONS(1246), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23851] = 3,
    ACTIONS(1526), 1,
      anon_sym_RPAREN,
    ACTIONS(1528), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23863] = 2,
    ACTIONS(1226), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23873] = 2,
    ACTIONS(1530), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23883] = 3,
    ACTIONS(1213), 1,
      anon_sym_AT,
    STATE(577), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23895] = 3,
    ACTIONS(1532), 1,
      anon_sym_LPAREN,
    STATE(808), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23907] = 3,
    ACTIONS(1532), 1,
      anon_sym_LPAREN,
    STATE(820), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23919] = 3,
    ACTIONS(1534), 1,
      sym_digit,
    STATE(424), 1,
      aux_sym_simple_size_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23931] = 3,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    STATE(581), 1,
      sym_global_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23943] = 3,
    ACTIONS(1532), 1,
      anon_sym_LPAREN,
    STATE(833), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23955] = 2,
    ACTIONS(1536), 2,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23965] = 3,
    ACTIONS(1319), 1,
      anon_sym_LPAREN,
    ACTIONS(1321), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23977] = 3,
    ACTIONS(1532), 1,
      anon_sym_LPAREN,
    STATE(840), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23989] = 3,
    ACTIONS(1532), 1,
      anon_sym_LPAREN,
    STATE(843), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24001] = 2,
    ACTIONS(1538), 2,
      anon_sym_ELSE,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24011] = 2,
    ACTIONS(1540), 2,
      anon_sym_ASC,
      anon_sym_DESC,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24021] = 3,
    ACTIONS(1542), 1,
      anon_sym_DISTRIBUTED,
    ACTIONS(1544), 1,
      anon_sym_QUERY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24033] = 2,
    ACTIONS(910), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24042] = 2,
    ACTIONS(1546), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24051] = 2,
    ACTIONS(1548), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24060] = 2,
    ACTIONS(1550), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24069] = 2,
    ACTIONS(1552), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24078] = 2,
    ACTIONS(1554), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24087] = 2,
    ACTIONS(1556), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24096] = 2,
    ACTIONS(1558), 1,
      anon_sym_THEN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24105] = 2,
    ACTIONS(1560), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24114] = 2,
    ACTIONS(1562), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24123] = 2,
    ACTIONS(1564), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24132] = 2,
    ACTIONS(1566), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24141] = 2,
    ACTIONS(1568), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24150] = 2,
    ACTIONS(1570), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24159] = 2,
    ACTIONS(1572), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24168] = 2,
    ACTIONS(1574), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24177] = 2,
    ACTIONS(1576), 1,
      anon_sym_STEP,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24186] = 2,
    ACTIONS(1578), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24195] = 2,
    ACTIONS(1580), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24204] = 2,
    ACTIONS(1151), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24213] = 2,
    ACTIONS(1319), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24222] = 2,
    ACTIONS(1582), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24231] = 2,
    ACTIONS(1584), 1,
      anon_sym_NULL,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24240] = 2,
    ACTIONS(812), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24249] = 2,
    ACTIONS(1586), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24258] = 2,
    ACTIONS(1588), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24267] = 2,
    ACTIONS(1590), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24276] = 2,
    ACTIONS(1592), 1,
      anon_sym_IF,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24285] = 2,
    ACTIONS(1594), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24294] = 2,
    ACTIONS(1596), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24303] = 2,
    ACTIONS(1598), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24312] = 2,
    ACTIONS(1036), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24321] = 2,
    ACTIONS(1600), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24330] = 2,
    ACTIONS(1602), 1,
      anon_sym_AVG,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24339] = 2,
    ACTIONS(1604), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24348] = 2,
    ACTIONS(1024), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24357] = 2,
    ACTIONS(1606), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24366] = 2,
    ACTIONS(1151), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24375] = 2,
    ACTIONS(1608), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24384] = 2,
    ACTIONS(1610), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24393] = 2,
    ACTIONS(1612), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24402] = 2,
    ACTIONS(1614), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24411] = 2,
    ACTIONS(1616), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24420] = 2,
    ACTIONS(1618), 1,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24429] = 2,
    ACTIONS(1620), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24438] = 2,
    ACTIONS(1622), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24447] = 2,
    ACTIONS(1624), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24456] = 2,
    ACTIONS(1626), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24465] = 2,
    ACTIONS(1628), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24474] = 2,
    ACTIONS(1630), 1,
      anon_sym_FROM,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24483] = 2,
    ACTIONS(1632), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24492] = 2,
    ACTIONS(1634), 1,
      anon_sym_SELECT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24501] = 2,
    ACTIONS(1636), 1,
      anon_sym_FILTER,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24510] = 2,
    ACTIONS(1638), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24519] = 2,
    ACTIONS(1640), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24528] = 2,
    ACTIONS(1642), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24537] = 2,
    ACTIONS(1644), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24546] = 2,
    ACTIONS(1646), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24555] = 2,
    ACTIONS(1648), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24564] = 2,
    ACTIONS(1650), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24573] = 2,
    ACTIONS(1652), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24582] = 2,
    ACTIONS(1654), 1,
      anon_sym_MIN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24591] = 2,
    ACTIONS(1656), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24600] = 2,
    ACTIONS(432), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24609] = 2,
    ACTIONS(1658), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24618] = 2,
    ACTIONS(1660), 1,
      anon_sym_THEN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24627] = 2,
    ACTIONS(1662), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24636] = 2,
    ACTIONS(1664), 1,
      anon_sym_DASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24645] = 2,
    ACTIONS(1666), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24654] = 2,
    ACTIONS(1668), 1,
      anon_sym_v2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24663] = 2,
    ACTIONS(1670), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24672] = 2,
    ACTIONS(1672), 1,
      anon_sym_DASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24681] = 2,
    ACTIONS(1674), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24690] = 2,
    ACTIONS(1676), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24699] = 2,
    ACTIONS(1678), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24708] = 2,
    ACTIONS(1061), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24717] = 2,
    ACTIONS(1680), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24726] = 2,
    ACTIONS(1678), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24735] = 2,
    ACTIONS(1682), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24744] = 2,
    ACTIONS(1684), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24753] = 2,
    ACTIONS(1686), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24762] = 2,
    ACTIONS(1688), 1,
      anon_sym_MAX,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24771] = 2,
    ACTIONS(1690), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24780] = 2,
    ACTIONS(1692), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24789] = 2,
    ACTIONS(1694), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24798] = 2,
    ACTIONS(1141), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24807] = 2,
    ACTIONS(1696), 1,
      anon_sym_IF,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24816] = 2,
    ACTIONS(1698), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24825] = 2,
    ACTIONS(1700), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24834] = 2,
    ACTIONS(1702), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24843] = 2,
    ACTIONS(1704), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24852] = 2,
    ACTIONS(1706), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24861] = 2,
    ACTIONS(1474), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24870] = 2,
    ACTIONS(1708), 1,
      anon_sym_FILTER,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24879] = 2,
    ACTIONS(1710), 1,
      anon_sym_SUM,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24888] = 2,
    ACTIONS(1712), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24897] = 2,
    ACTIONS(1714), 1,
      anon_sym_v2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24906] = 2,
    ACTIONS(1716), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24915] = 2,
    ACTIONS(1718), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24924] = 2,
    ACTIONS(1720), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24933] = 2,
    ACTIONS(1722), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24942] = 2,
    ACTIONS(1724), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24951] = 2,
    ACTIONS(1726), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24960] = 2,
    ACTIONS(1728), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24969] = 2,
    ACTIONS(1730), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24978] = 2,
    ACTIONS(1732), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24987] = 2,
    ACTIONS(1734), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24996] = 2,
    ACTIONS(1526), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25005] = 2,
    ACTIONS(1736), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25014] = 2,
    ACTIONS(1738), 1,
      anon_sym_DASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25023] = 2,
    ACTIONS(1740), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25032] = 2,
    ACTIONS(1742), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25041] = 2,
    ACTIONS(1744), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25050] = 2,
    ACTIONS(1746), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25059] = 2,
    ACTIONS(1748), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25068] = 2,
    ACTIONS(1750), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25077] = 2,
    ACTIONS(1752), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25086] = 2,
    ACTIONS(1754), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25095] = 2,
    ACTIONS(1756), 1,
      anon_sym_TUPLE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25104] = 2,
    ACTIONS(1758), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25113] = 2,
    ACTIONS(1760), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25122] = 2,
    ACTIONS(1762), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25131] = 2,
    ACTIONS(1764), 1,
      anon_sym_v2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25140] = 2,
    ACTIONS(1766), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25149] = 2,
    ACTIONS(1768), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25158] = 2,
    ACTIONS(1770), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25167] = 2,
    ACTIONS(1772), 1,
      anon_sym_v2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25176] = 2,
    ACTIONS(1018), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25185] = 2,
    ACTIONS(1774), 1,
      anon_sym_v2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25194] = 2,
    ACTIONS(1018), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25203] = 2,
    ACTIONS(1776), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25212] = 2,
    ACTIONS(1778), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25221] = 2,
    ACTIONS(1780), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25230] = 2,
    ACTIONS(1782), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25239] = 2,
    ACTIONS(1784), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25248] = 2,
    ACTIONS(1786), 1,
      sym_digit,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25257] = 2,
    ACTIONS(1788), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25266] = 2,
    ACTIONS(1790), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25275] = 2,
    ACTIONS(1792), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25284] = 2,
    ACTIONS(1794), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25293] = 2,
    ACTIONS(1796), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25302] = 2,
    ACTIONS(1798), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25311] = 2,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25320] = 2,
    ACTIONS(1800), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25329] = 2,
    ACTIONS(1802), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25338] = 2,
    ACTIONS(1804), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25347] = 2,
    ACTIONS(1806), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25356] = 2,
    ACTIONS(1808), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25365] = 2,
    ACTIONS(1810), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25374] = 2,
    ACTIONS(458), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25383] = 2,
    ACTIONS(1812), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25392] = 2,
    ACTIONS(1814), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25401] = 2,
    ACTIONS(1808), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25410] = 2,
    ACTIONS(1816), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25419] = 2,
    ACTIONS(1818), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25428] = 2,
    ACTIONS(1820), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25437] = 2,
    ACTIONS(1822), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25446] = 2,
    ACTIONS(1824), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25455] = 2,
    ACTIONS(1826), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25464] = 2,
    ACTIONS(1145), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25473] = 2,
    ACTIONS(1828), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25482] = 2,
    ACTIONS(1830), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25491] = 2,
    ACTIONS(1832), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25500] = 2,
    ACTIONS(1834), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25509] = 2,
    ACTIONS(1149), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25518] = 2,
    ACTIONS(1836), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25527] = 2,
    ACTIONS(1838), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25536] = 2,
    ACTIONS(1840), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25545] = 2,
    ACTIONS(1842), 1,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25554] = 2,
    ACTIONS(1844), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25563] = 2,
    ACTIONS(1846), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25572] = 2,
    ACTIONS(1848), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25581] = 2,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25590] = 2,
    ACTIONS(1850), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25599] = 2,
    ACTIONS(1852), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25608] = 2,
    ACTIONS(1854), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25617] = 2,
    ACTIONS(1856), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25626] = 2,
    ACTIONS(914), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25635] = 2,
    ACTIONS(1858), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25644] = 2,
    ACTIONS(1860), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25653] = 2,
    ACTIONS(1862), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25662] = 2,
    ACTIONS(1864), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25671] = 2,
    ACTIONS(1866), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25680] = 2,
    ACTIONS(1868), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25689] = 2,
    ACTIONS(1870), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25698] = 2,
    ACTIONS(1872), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25707] = 2,
    ACTIONS(1874), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25716] = 2,
    ACTIONS(1876), 1,
      anon_sym_QUERY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25725] = 2,
    ACTIONS(1878), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25734] = 2,
    ACTIONS(1880), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25743] = 2,
    ACTIONS(1882), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25752] = 2,
    ACTIONS(1884), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25761] = 2,
    ACTIONS(1886), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25770] = 2,
    ACTIONS(1888), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25779] = 2,
    ACTIONS(1890), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25788] = 2,
    ACTIONS(1892), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25797] = 2,
    ACTIONS(1894), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25806] = 2,
    ACTIONS(1896), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25815] = 2,
    ACTIONS(1898), 1,
      anon_sym_QUERY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25824] = 2,
    ACTIONS(1900), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25833] = 2,
    ACTIONS(1902), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25842] = 2,
    ACTIONS(1904), 1,
      anon_sym_REPLACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25851] = 2,
    ACTIONS(1906), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25860] = 2,
    ACTIONS(1908), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25869] = 2,
    ACTIONS(1910), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25878] = 2,
    ACTIONS(1912), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25887] = 2,
    ACTIONS(1914), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25896] = 2,
    ACTIONS(1916), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25905] = 2,
    ACTIONS(1918), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25914] = 2,
    ACTIONS(1920), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25923] = 2,
    ACTIONS(1922), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25932] = 2,
    ACTIONS(1924), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25941] = 2,
    ACTIONS(1926), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25950] = 2,
    ACTIONS(1928), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25959] = 2,
    ACTIONS(1930), 1,
      anon_sym_QUERY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25968] = 2,
    ACTIONS(1932), 1,
      anon_sym_FILTER,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25977] = 2,
    ACTIONS(1934), 1,
      anon_sym_FILTER,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 129,
  [SMALL_STATE(6)] = 258,
  [SMALL_STATE(7)] = 387,
  [SMALL_STATE(8)] = 512,
  [SMALL_STATE(9)] = 637,
  [SMALL_STATE(10)] = 762,
  [SMALL_STATE(11)] = 887,
  [SMALL_STATE(12)] = 1012,
  [SMALL_STATE(13)] = 1137,
  [SMALL_STATE(14)] = 1262,
  [SMALL_STATE(15)] = 1387,
  [SMALL_STATE(16)] = 1512,
  [SMALL_STATE(17)] = 1637,
  [SMALL_STATE(18)] = 1762,
  [SMALL_STATE(19)] = 1887,
  [SMALL_STATE(20)] = 1944,
  [SMALL_STATE(21)] = 2005,
  [SMALL_STATE(22)] = 2063,
  [SMALL_STATE(23)] = 2121,
  [SMALL_STATE(24)] = 2177,
  [SMALL_STATE(25)] = 2233,
  [SMALL_STATE(26)] = 2289,
  [SMALL_STATE(27)] = 2347,
  [SMALL_STATE(28)] = 2405,
  [SMALL_STATE(29)] = 2465,
  [SMALL_STATE(30)] = 2525,
  [SMALL_STATE(31)] = 2578,
  [SMALL_STATE(32)] = 2631,
  [SMALL_STATE(33)] = 2684,
  [SMALL_STATE(34)] = 2737,
  [SMALL_STATE(35)] = 2792,
  [SMALL_STATE(36)] = 2844,
  [SMALL_STATE(37)] = 2902,
  [SMALL_STATE(38)] = 2954,
  [SMALL_STATE(39)] = 3006,
  [SMALL_STATE(40)] = 3060,
  [SMALL_STATE(41)] = 3118,
  [SMALL_STATE(42)] = 3174,
  [SMALL_STATE(43)] = 3229,
  [SMALL_STATE(44)] = 3284,
  [SMALL_STATE(45)] = 3339,
  [SMALL_STATE(46)] = 3394,
  [SMALL_STATE(47)] = 3449,
  [SMALL_STATE(48)] = 3504,
  [SMALL_STATE(49)] = 3556,
  [SMALL_STATE(50)] = 3608,
  [SMALL_STATE(51)] = 3658,
  [SMALL_STATE(52)] = 3712,
  [SMALL_STATE(53)] = 3762,
  [SMALL_STATE(54)] = 3811,
  [SMALL_STATE(55)] = 3860,
  [SMALL_STATE(56)] = 3909,
  [SMALL_STATE(57)] = 3958,
  [SMALL_STATE(58)] = 4007,
  [SMALL_STATE(59)] = 4056,
  [SMALL_STATE(60)] = 4105,
  [SMALL_STATE(61)] = 4154,
  [SMALL_STATE(62)] = 4203,
  [SMALL_STATE(63)] = 4252,
  [SMALL_STATE(64)] = 4301,
  [SMALL_STATE(65)] = 4350,
  [SMALL_STATE(66)] = 4399,
  [SMALL_STATE(67)] = 4448,
  [SMALL_STATE(68)] = 4497,
  [SMALL_STATE(69)] = 4546,
  [SMALL_STATE(70)] = 4595,
  [SMALL_STATE(71)] = 4643,
  [SMALL_STATE(72)] = 4747,
  [SMALL_STATE(73)] = 4795,
  [SMALL_STATE(74)] = 4842,
  [SMALL_STATE(75)] = 4916,
  [SMALL_STATE(76)] = 4970,
  [SMALL_STATE(77)] = 5044,
  [SMALL_STATE(78)] = 5118,
  [SMALL_STATE(79)] = 5192,
  [SMALL_STATE(80)] = 5266,
  [SMALL_STATE(81)] = 5340,
  [SMALL_STATE(82)] = 5414,
  [SMALL_STATE(83)] = 5488,
  [SMALL_STATE(84)] = 5562,
  [SMALL_STATE(85)] = 5636,
  [SMALL_STATE(86)] = 5710,
  [SMALL_STATE(87)] = 5784,
  [SMALL_STATE(88)] = 5858,
  [SMALL_STATE(89)] = 5932,
  [SMALL_STATE(90)] = 6003,
  [SMALL_STATE(91)] = 6058,
  [SMALL_STATE(92)] = 6154,
  [SMALL_STATE(93)] = 6250,
  [SMALL_STATE(94)] = 6341,
  [SMALL_STATE(95)] = 6432,
  [SMALL_STATE(96)] = 6523,
  [SMALL_STATE(97)] = 6616,
  [SMALL_STATE(98)] = 6707,
  [SMALL_STATE(99)] = 6798,
  [SMALL_STATE(100)] = 6889,
  [SMALL_STATE(101)] = 6982,
  [SMALL_STATE(102)] = 7073,
  [SMALL_STATE(103)] = 7164,
  [SMALL_STATE(104)] = 7255,
  [SMALL_STATE(105)] = 7346,
  [SMALL_STATE(106)] = 7439,
  [SMALL_STATE(107)] = 7532,
  [SMALL_STATE(108)] = 7625,
  [SMALL_STATE(109)] = 7716,
  [SMALL_STATE(110)] = 7809,
  [SMALL_STATE(111)] = 7902,
  [SMALL_STATE(112)] = 7995,
  [SMALL_STATE(113)] = 8086,
  [SMALL_STATE(114)] = 8179,
  [SMALL_STATE(115)] = 8272,
  [SMALL_STATE(116)] = 8363,
  [SMALL_STATE(117)] = 8456,
  [SMALL_STATE(118)] = 8547,
  [SMALL_STATE(119)] = 8638,
  [SMALL_STATE(120)] = 8729,
  [SMALL_STATE(121)] = 8822,
  [SMALL_STATE(122)] = 8913,
  [SMALL_STATE(123)] = 9006,
  [SMALL_STATE(124)] = 9097,
  [SMALL_STATE(125)] = 9190,
  [SMALL_STATE(126)] = 9281,
  [SMALL_STATE(127)] = 9374,
  [SMALL_STATE(128)] = 9465,
  [SMALL_STATE(129)] = 9556,
  [SMALL_STATE(130)] = 9649,
  [SMALL_STATE(131)] = 9742,
  [SMALL_STATE(132)] = 9835,
  [SMALL_STATE(133)] = 9928,
  [SMALL_STATE(134)] = 10019,
  [SMALL_STATE(135)] = 10110,
  [SMALL_STATE(136)] = 10198,
  [SMALL_STATE(137)] = 10286,
  [SMALL_STATE(138)] = 10374,
  [SMALL_STATE(139)] = 10462,
  [SMALL_STATE(140)] = 10550,
  [SMALL_STATE(141)] = 10612,
  [SMALL_STATE(142)] = 10700,
  [SMALL_STATE(143)] = 10788,
  [SMALL_STATE(144)] = 10876,
  [SMALL_STATE(145)] = 10964,
  [SMALL_STATE(146)] = 11052,
  [SMALL_STATE(147)] = 11137,
  [SMALL_STATE(148)] = 11184,
  [SMALL_STATE(149)] = 11269,
  [SMALL_STATE(150)] = 11354,
  [SMALL_STATE(151)] = 11439,
  [SMALL_STATE(152)] = 11524,
  [SMALL_STATE(153)] = 11609,
  [SMALL_STATE(154)] = 11694,
  [SMALL_STATE(155)] = 11779,
  [SMALL_STATE(156)] = 11864,
  [SMALL_STATE(157)] = 11949,
  [SMALL_STATE(158)] = 12034,
  [SMALL_STATE(159)] = 12119,
  [SMALL_STATE(160)] = 12204,
  [SMALL_STATE(161)] = 12289,
  [SMALL_STATE(162)] = 12374,
  [SMALL_STATE(163)] = 12459,
  [SMALL_STATE(164)] = 12544,
  [SMALL_STATE(165)] = 12629,
  [SMALL_STATE(166)] = 12714,
  [SMALL_STATE(167)] = 12757,
  [SMALL_STATE(168)] = 12842,
  [SMALL_STATE(169)] = 12927,
  [SMALL_STATE(170)] = 13012,
  [SMALL_STATE(171)] = 13097,
  [SMALL_STATE(172)] = 13182,
  [SMALL_STATE(173)] = 13231,
  [SMALL_STATE(174)] = 13316,
  [SMALL_STATE(175)] = 13401,
  [SMALL_STATE(176)] = 13486,
  [SMALL_STATE(177)] = 13571,
  [SMALL_STATE(178)] = 13656,
  [SMALL_STATE(179)] = 13741,
  [SMALL_STATE(180)] = 13788,
  [SMALL_STATE(181)] = 13830,
  [SMALL_STATE(182)] = 13872,
  [SMALL_STATE(183)] = 13916,
  [SMALL_STATE(184)] = 13962,
  [SMALL_STATE(185)] = 14006,
  [SMALL_STATE(186)] = 14050,
  [SMALL_STATE(187)] = 14092,
  [SMALL_STATE(188)] = 14138,
  [SMALL_STATE(189)] = 14180,
  [SMALL_STATE(190)] = 14224,
  [SMALL_STATE(191)] = 14263,
  [SMALL_STATE(192)] = 14302,
  [SMALL_STATE(193)] = 14343,
  [SMALL_STATE(194)] = 14404,
  [SMALL_STATE(195)] = 14447,
  [SMALL_STATE(196)] = 14486,
  [SMALL_STATE(197)] = 14525,
  [SMALL_STATE(198)] = 14564,
  [SMALL_STATE(199)] = 14605,
  [SMALL_STATE(200)] = 14645,
  [SMALL_STATE(201)] = 14683,
  [SMALL_STATE(202)] = 14721,
  [SMALL_STATE(203)] = 14787,
  [SMALL_STATE(204)] = 14831,
  [SMALL_STATE(205)] = 14873,
  [SMALL_STATE(206)] = 14917,
  [SMALL_STATE(207)] = 14955,
  [SMALL_STATE(208)] = 15021,
  [SMALL_STATE(209)] = 15061,
  [SMALL_STATE(210)] = 15102,
  [SMALL_STATE(211)] = 15143,
  [SMALL_STATE(212)] = 15184,
  [SMALL_STATE(213)] = 15225,
  [SMALL_STATE(214)] = 15266,
  [SMALL_STATE(215)] = 15307,
  [SMALL_STATE(216)] = 15345,
  [SMALL_STATE(217)] = 15383,
  [SMALL_STATE(218)] = 15421,
  [SMALL_STATE(219)] = 15457,
  [SMALL_STATE(220)] = 15493,
  [SMALL_STATE(221)] = 15535,
  [SMALL_STATE(222)] = 15570,
  [SMALL_STATE(223)] = 15605,
  [SMALL_STATE(224)] = 15640,
  [SMALL_STATE(225)] = 15675,
  [SMALL_STATE(226)] = 15710,
  [SMALL_STATE(227)] = 15745,
  [SMALL_STATE(228)] = 15780,
  [SMALL_STATE(229)] = 15815,
  [SMALL_STATE(230)] = 15850,
  [SMALL_STATE(231)] = 15885,
  [SMALL_STATE(232)] = 15920,
  [SMALL_STATE(233)] = 15955,
  [SMALL_STATE(234)] = 15990,
  [SMALL_STATE(235)] = 16025,
  [SMALL_STATE(236)] = 16060,
  [SMALL_STATE(237)] = 16097,
  [SMALL_STATE(238)] = 16132,
  [SMALL_STATE(239)] = 16167,
  [SMALL_STATE(240)] = 16201,
  [SMALL_STATE(241)] = 16235,
  [SMALL_STATE(242)] = 16269,
  [SMALL_STATE(243)] = 16308,
  [SMALL_STATE(244)] = 16347,
  [SMALL_STATE(245)] = 16375,
  [SMALL_STATE(246)] = 16423,
  [SMALL_STATE(247)] = 16463,
  [SMALL_STATE(248)] = 16511,
  [SMALL_STATE(249)] = 16539,
  [SMALL_STATE(250)] = 16576,
  [SMALL_STATE(251)] = 16613,
  [SMALL_STATE(252)] = 16644,
  [SMALL_STATE(253)] = 16679,
  [SMALL_STATE(254)] = 16710,
  [SMALL_STATE(255)] = 16739,
  [SMALL_STATE(256)] = 16770,
  [SMALL_STATE(257)] = 16801,
  [SMALL_STATE(258)] = 16832,
  [SMALL_STATE(259)] = 16867,
  [SMALL_STATE(260)] = 16898,
  [SMALL_STATE(261)] = 16935,
  [SMALL_STATE(262)] = 16970,
  [SMALL_STATE(263)] = 17004,
  [SMALL_STATE(264)] = 17046,
  [SMALL_STATE(265)] = 17088,
  [SMALL_STATE(266)] = 17130,
  [SMALL_STATE(267)] = 17172,
  [SMALL_STATE(268)] = 17214,
  [SMALL_STATE(269)] = 17238,
  [SMALL_STATE(270)] = 17280,
  [SMALL_STATE(271)] = 17322,
  [SMALL_STATE(272)] = 17351,
  [SMALL_STATE(273)] = 17380,
  [SMALL_STATE(274)] = 17407,
  [SMALL_STATE(275)] = 17436,
  [SMALL_STATE(276)] = 17482,
  [SMALL_STATE(277)] = 17506,
  [SMALL_STATE(278)] = 17530,
  [SMALL_STATE(279)] = 17560,
  [SMALL_STATE(280)] = 17586,
  [SMALL_STATE(281)] = 17614,
  [SMALL_STATE(282)] = 17640,
  [SMALL_STATE(283)] = 17668,
  [SMALL_STATE(284)] = 17696,
  [SMALL_STATE(285)] = 17724,
  [SMALL_STATE(286)] = 17750,
  [SMALL_STATE(287)] = 17778,
  [SMALL_STATE(288)] = 17810,
  [SMALL_STATE(289)] = 17834,
  [SMALL_STATE(290)] = 17868,
  [SMALL_STATE(291)] = 17892,
  [SMALL_STATE(292)] = 17918,
  [SMALL_STATE(293)] = 17942,
  [SMALL_STATE(294)] = 17976,
  [SMALL_STATE(295)] = 18001,
  [SMALL_STATE(296)] = 18028,
  [SMALL_STATE(297)] = 18049,
  [SMALL_STATE(298)] = 18074,
  [SMALL_STATE(299)] = 18101,
  [SMALL_STATE(300)] = 18126,
  [SMALL_STATE(301)] = 18149,
  [SMALL_STATE(302)] = 18170,
  [SMALL_STATE(303)] = 18193,
  [SMALL_STATE(304)] = 18222,
  [SMALL_STATE(305)] = 18249,
  [SMALL_STATE(306)] = 18278,
  [SMALL_STATE(307)] = 18309,
  [SMALL_STATE(308)] = 18334,
  [SMALL_STATE(309)] = 18359,
  [SMALL_STATE(310)] = 18399,
  [SMALL_STATE(311)] = 18439,
  [SMALL_STATE(312)] = 18463,
  [SMALL_STATE(313)] = 18503,
  [SMALL_STATE(314)] = 18523,
  [SMALL_STATE(315)] = 18563,
  [SMALL_STATE(316)] = 18591,
  [SMALL_STATE(317)] = 18619,
  [SMALL_STATE(318)] = 18645,
  [SMALL_STATE(319)] = 18670,
  [SMALL_STATE(320)] = 18707,
  [SMALL_STATE(321)] = 18732,
  [SMALL_STATE(322)] = 18757,
  [SMALL_STATE(323)] = 18782,
  [SMALL_STATE(324)] = 18807,
  [SMALL_STATE(325)] = 18832,
  [SMALL_STATE(326)] = 18857,
  [SMALL_STATE(327)] = 18882,
  [SMALL_STATE(328)] = 18900,
  [SMALL_STATE(329)] = 18918,
  [SMALL_STATE(330)] = 18952,
  [SMALL_STATE(331)] = 18986,
  [SMALL_STATE(332)] = 19020,
  [SMALL_STATE(333)] = 19038,
  [SMALL_STATE(334)] = 19072,
  [SMALL_STATE(335)] = 19090,
  [SMALL_STATE(336)] = 19108,
  [SMALL_STATE(337)] = 19132,
  [SMALL_STATE(338)] = 19153,
  [SMALL_STATE(339)] = 19184,
  [SMALL_STATE(340)] = 19205,
  [SMALL_STATE(341)] = 19225,
  [SMALL_STATE(342)] = 19245,
  [SMALL_STATE(343)] = 19261,
  [SMALL_STATE(344)] = 19279,
  [SMALL_STATE(345)] = 19299,
  [SMALL_STATE(346)] = 19319,
  [SMALL_STATE(347)] = 19347,
  [SMALL_STATE(348)] = 19363,
  [SMALL_STATE(349)] = 19379,
  [SMALL_STATE(350)] = 19397,
  [SMALL_STATE(351)] = 19413,
  [SMALL_STATE(352)] = 19433,
  [SMALL_STATE(353)] = 19449,
  [SMALL_STATE(354)] = 19465,
  [SMALL_STATE(355)] = 19485,
  [SMALL_STATE(356)] = 19505,
  [SMALL_STATE(357)] = 19520,
  [SMALL_STATE(358)] = 19535,
  [SMALL_STATE(359)] = 19562,
  [SMALL_STATE(360)] = 19577,
  [SMALL_STATE(361)] = 19592,
  [SMALL_STATE(362)] = 19607,
  [SMALL_STATE(363)] = 19632,
  [SMALL_STATE(364)] = 19651,
  [SMALL_STATE(365)] = 19666,
  [SMALL_STATE(366)] = 19681,
  [SMALL_STATE(367)] = 19696,
  [SMALL_STATE(368)] = 19711,
  [SMALL_STATE(369)] = 19726,
  [SMALL_STATE(370)] = 19745,
  [SMALL_STATE(371)] = 19760,
  [SMALL_STATE(372)] = 19785,
  [SMALL_STATE(373)] = 19804,
  [SMALL_STATE(374)] = 19825,
  [SMALL_STATE(375)] = 19850,
  [SMALL_STATE(376)] = 19865,
  [SMALL_STATE(377)] = 19880,
  [SMALL_STATE(378)] = 19895,
  [SMALL_STATE(379)] = 19922,
  [SMALL_STATE(380)] = 19937,
  [SMALL_STATE(381)] = 19958,
  [SMALL_STATE(382)] = 19983,
  [SMALL_STATE(383)] = 19998,
  [SMALL_STATE(384)] = 20013,
  [SMALL_STATE(385)] = 20040,
  [SMALL_STATE(386)] = 20062,
  [SMALL_STATE(387)] = 20086,
  [SMALL_STATE(388)] = 20110,
  [SMALL_STATE(389)] = 20132,
  [SMALL_STATE(390)] = 20154,
  [SMALL_STATE(391)] = 20170,
  [SMALL_STATE(392)] = 20194,
  [SMALL_STATE(393)] = 20218,
  [SMALL_STATE(394)] = 20242,
  [SMALL_STATE(395)] = 20264,
  [SMALL_STATE(396)] = 20286,
  [SMALL_STATE(397)] = 20310,
  [SMALL_STATE(398)] = 20334,
  [SMALL_STATE(399)] = 20358,
  [SMALL_STATE(400)] = 20382,
  [SMALL_STATE(401)] = 20406,
  [SMALL_STATE(402)] = 20426,
  [SMALL_STATE(403)] = 20450,
  [SMALL_STATE(404)] = 20472,
  [SMALL_STATE(405)] = 20486,
  [SMALL_STATE(406)] = 20500,
  [SMALL_STATE(407)] = 20521,
  [SMALL_STATE(408)] = 20534,
  [SMALL_STATE(409)] = 20547,
  [SMALL_STATE(410)] = 20568,
  [SMALL_STATE(411)] = 20589,
  [SMALL_STATE(412)] = 20606,
  [SMALL_STATE(413)] = 20627,
  [SMALL_STATE(414)] = 20648,
  [SMALL_STATE(415)] = 20665,
  [SMALL_STATE(416)] = 20680,
  [SMALL_STATE(417)] = 20693,
  [SMALL_STATE(418)] = 20714,
  [SMALL_STATE(419)] = 20735,
  [SMALL_STATE(420)] = 20752,
  [SMALL_STATE(421)] = 20769,
  [SMALL_STATE(422)] = 20788,
  [SMALL_STATE(423)] = 20803,
  [SMALL_STATE(424)] = 20816,
  [SMALL_STATE(425)] = 20833,
  [SMALL_STATE(426)] = 20846,
  [SMALL_STATE(427)] = 20859,
  [SMALL_STATE(428)] = 20872,
  [SMALL_STATE(429)] = 20885,
  [SMALL_STATE(430)] = 20898,
  [SMALL_STATE(431)] = 20919,
  [SMALL_STATE(432)] = 20932,
  [SMALL_STATE(433)] = 20949,
  [SMALL_STATE(434)] = 20966,
  [SMALL_STATE(435)] = 20984,
  [SMALL_STATE(436)] = 21002,
  [SMALL_STATE(437)] = 21018,
  [SMALL_STATE(438)] = 21036,
  [SMALL_STATE(439)] = 21052,
  [SMALL_STATE(440)] = 21066,
  [SMALL_STATE(441)] = 21080,
  [SMALL_STATE(442)] = 21094,
  [SMALL_STATE(443)] = 21112,
  [SMALL_STATE(444)] = 21126,
  [SMALL_STATE(445)] = 21140,
  [SMALL_STATE(446)] = 21154,
  [SMALL_STATE(447)] = 21172,
  [SMALL_STATE(448)] = 21190,
  [SMALL_STATE(449)] = 21208,
  [SMALL_STATE(450)] = 21226,
  [SMALL_STATE(451)] = 21238,
  [SMALL_STATE(452)] = 21254,
  [SMALL_STATE(453)] = 21266,
  [SMALL_STATE(454)] = 21282,
  [SMALL_STATE(455)] = 21300,
  [SMALL_STATE(456)] = 21316,
  [SMALL_STATE(457)] = 21330,
  [SMALL_STATE(458)] = 21346,
  [SMALL_STATE(459)] = 21364,
  [SMALL_STATE(460)] = 21380,
  [SMALL_STATE(461)] = 21398,
  [SMALL_STATE(462)] = 21414,
  [SMALL_STATE(463)] = 21432,
  [SMALL_STATE(464)] = 21446,
  [SMALL_STATE(465)] = 21460,
  [SMALL_STATE(466)] = 21476,
  [SMALL_STATE(467)] = 21492,
  [SMALL_STATE(468)] = 21510,
  [SMALL_STATE(469)] = 21526,
  [SMALL_STATE(470)] = 21544,
  [SMALL_STATE(471)] = 21558,
  [SMALL_STATE(472)] = 21572,
  [SMALL_STATE(473)] = 21590,
  [SMALL_STATE(474)] = 21604,
  [SMALL_STATE(475)] = 21618,
  [SMALL_STATE(476)] = 21634,
  [SMALL_STATE(477)] = 21648,
  [SMALL_STATE(478)] = 21662,
  [SMALL_STATE(479)] = 21680,
  [SMALL_STATE(480)] = 21694,
  [SMALL_STATE(481)] = 21708,
  [SMALL_STATE(482)] = 21722,
  [SMALL_STATE(483)] = 21738,
  [SMALL_STATE(484)] = 21750,
  [SMALL_STATE(485)] = 21762,
  [SMALL_STATE(486)] = 21774,
  [SMALL_STATE(487)] = 21789,
  [SMALL_STATE(488)] = 21800,
  [SMALL_STATE(489)] = 21815,
  [SMALL_STATE(490)] = 21830,
  [SMALL_STATE(491)] = 21845,
  [SMALL_STATE(492)] = 21858,
  [SMALL_STATE(493)] = 21873,
  [SMALL_STATE(494)] = 21886,
  [SMALL_STATE(495)] = 21901,
  [SMALL_STATE(496)] = 21916,
  [SMALL_STATE(497)] = 21927,
  [SMALL_STATE(498)] = 21940,
  [SMALL_STATE(499)] = 21953,
  [SMALL_STATE(500)] = 21968,
  [SMALL_STATE(501)] = 21983,
  [SMALL_STATE(502)] = 21998,
  [SMALL_STATE(503)] = 22009,
  [SMALL_STATE(504)] = 22024,
  [SMALL_STATE(505)] = 22039,
  [SMALL_STATE(506)] = 22054,
  [SMALL_STATE(507)] = 22069,
  [SMALL_STATE(508)] = 22084,
  [SMALL_STATE(509)] = 22099,
  [SMALL_STATE(510)] = 22112,
  [SMALL_STATE(511)] = 22127,
  [SMALL_STATE(512)] = 22142,
  [SMALL_STATE(513)] = 22153,
  [SMALL_STATE(514)] = 22168,
  [SMALL_STATE(515)] = 22181,
  [SMALL_STATE(516)] = 22196,
  [SMALL_STATE(517)] = 22211,
  [SMALL_STATE(518)] = 22226,
  [SMALL_STATE(519)] = 22241,
  [SMALL_STATE(520)] = 22252,
  [SMALL_STATE(521)] = 22267,
  [SMALL_STATE(522)] = 22282,
  [SMALL_STATE(523)] = 22297,
  [SMALL_STATE(524)] = 22308,
  [SMALL_STATE(525)] = 22323,
  [SMALL_STATE(526)] = 22338,
  [SMALL_STATE(527)] = 22353,
  [SMALL_STATE(528)] = 22368,
  [SMALL_STATE(529)] = 22379,
  [SMALL_STATE(530)] = 22390,
  [SMALL_STATE(531)] = 22405,
  [SMALL_STATE(532)] = 22416,
  [SMALL_STATE(533)] = 22427,
  [SMALL_STATE(534)] = 22442,
  [SMALL_STATE(535)] = 22455,
  [SMALL_STATE(536)] = 22470,
  [SMALL_STATE(537)] = 22481,
  [SMALL_STATE(538)] = 22496,
  [SMALL_STATE(539)] = 22507,
  [SMALL_STATE(540)] = 22522,
  [SMALL_STATE(541)] = 22537,
  [SMALL_STATE(542)] = 22550,
  [SMALL_STATE(543)] = 22565,
  [SMALL_STATE(544)] = 22580,
  [SMALL_STATE(545)] = 22595,
  [SMALL_STATE(546)] = 22610,
  [SMALL_STATE(547)] = 22621,
  [SMALL_STATE(548)] = 22636,
  [SMALL_STATE(549)] = 22651,
  [SMALL_STATE(550)] = 22666,
  [SMALL_STATE(551)] = 22677,
  [SMALL_STATE(552)] = 22692,
  [SMALL_STATE(553)] = 22703,
  [SMALL_STATE(554)] = 22718,
  [SMALL_STATE(555)] = 22729,
  [SMALL_STATE(556)] = 22744,
  [SMALL_STATE(557)] = 22759,
  [SMALL_STATE(558)] = 22770,
  [SMALL_STATE(559)] = 22783,
  [SMALL_STATE(560)] = 22798,
  [SMALL_STATE(561)] = 22813,
  [SMALL_STATE(562)] = 22828,
  [SMALL_STATE(563)] = 22841,
  [SMALL_STATE(564)] = 22856,
  [SMALL_STATE(565)] = 22867,
  [SMALL_STATE(566)] = 22878,
  [SMALL_STATE(567)] = 22889,
  [SMALL_STATE(568)] = 22904,
  [SMALL_STATE(569)] = 22919,
  [SMALL_STATE(570)] = 22932,
  [SMALL_STATE(571)] = 22947,
  [SMALL_STATE(572)] = 22962,
  [SMALL_STATE(573)] = 22977,
  [SMALL_STATE(574)] = 22992,
  [SMALL_STATE(575)] = 23007,
  [SMALL_STATE(576)] = 23022,
  [SMALL_STATE(577)] = 23033,
  [SMALL_STATE(578)] = 23046,
  [SMALL_STATE(579)] = 23061,
  [SMALL_STATE(580)] = 23076,
  [SMALL_STATE(581)] = 23091,
  [SMALL_STATE(582)] = 23104,
  [SMALL_STATE(583)] = 23115,
  [SMALL_STATE(584)] = 23130,
  [SMALL_STATE(585)] = 23141,
  [SMALL_STATE(586)] = 23152,
  [SMALL_STATE(587)] = 23165,
  [SMALL_STATE(588)] = 23176,
  [SMALL_STATE(589)] = 23191,
  [SMALL_STATE(590)] = 23206,
  [SMALL_STATE(591)] = 23221,
  [SMALL_STATE(592)] = 23234,
  [SMALL_STATE(593)] = 23245,
  [SMALL_STATE(594)] = 23258,
  [SMALL_STATE(595)] = 23273,
  [SMALL_STATE(596)] = 23288,
  [SMALL_STATE(597)] = 23303,
  [SMALL_STATE(598)] = 23318,
  [SMALL_STATE(599)] = 23333,
  [SMALL_STATE(600)] = 23348,
  [SMALL_STATE(601)] = 23361,
  [SMALL_STATE(602)] = 23376,
  [SMALL_STATE(603)] = 23391,
  [SMALL_STATE(604)] = 23403,
  [SMALL_STATE(605)] = 23413,
  [SMALL_STATE(606)] = 23425,
  [SMALL_STATE(607)] = 23435,
  [SMALL_STATE(608)] = 23445,
  [SMALL_STATE(609)] = 23457,
  [SMALL_STATE(610)] = 23469,
  [SMALL_STATE(611)] = 23481,
  [SMALL_STATE(612)] = 23493,
  [SMALL_STATE(613)] = 23503,
  [SMALL_STATE(614)] = 23515,
  [SMALL_STATE(615)] = 23525,
  [SMALL_STATE(616)] = 23537,
  [SMALL_STATE(617)] = 23549,
  [SMALL_STATE(618)] = 23561,
  [SMALL_STATE(619)] = 23571,
  [SMALL_STATE(620)] = 23583,
  [SMALL_STATE(621)] = 23595,
  [SMALL_STATE(622)] = 23607,
  [SMALL_STATE(623)] = 23619,
  [SMALL_STATE(624)] = 23629,
  [SMALL_STATE(625)] = 23639,
  [SMALL_STATE(626)] = 23649,
  [SMALL_STATE(627)] = 23661,
  [SMALL_STATE(628)] = 23673,
  [SMALL_STATE(629)] = 23685,
  [SMALL_STATE(630)] = 23695,
  [SMALL_STATE(631)] = 23707,
  [SMALL_STATE(632)] = 23719,
  [SMALL_STATE(633)] = 23729,
  [SMALL_STATE(634)] = 23739,
  [SMALL_STATE(635)] = 23749,
  [SMALL_STATE(636)] = 23761,
  [SMALL_STATE(637)] = 23773,
  [SMALL_STATE(638)] = 23783,
  [SMALL_STATE(639)] = 23795,
  [SMALL_STATE(640)] = 23805,
  [SMALL_STATE(641)] = 23817,
  [SMALL_STATE(642)] = 23829,
  [SMALL_STATE(643)] = 23841,
  [SMALL_STATE(644)] = 23851,
  [SMALL_STATE(645)] = 23863,
  [SMALL_STATE(646)] = 23873,
  [SMALL_STATE(647)] = 23883,
  [SMALL_STATE(648)] = 23895,
  [SMALL_STATE(649)] = 23907,
  [SMALL_STATE(650)] = 23919,
  [SMALL_STATE(651)] = 23931,
  [SMALL_STATE(652)] = 23943,
  [SMALL_STATE(653)] = 23955,
  [SMALL_STATE(654)] = 23965,
  [SMALL_STATE(655)] = 23977,
  [SMALL_STATE(656)] = 23989,
  [SMALL_STATE(657)] = 24001,
  [SMALL_STATE(658)] = 24011,
  [SMALL_STATE(659)] = 24021,
  [SMALL_STATE(660)] = 24033,
  [SMALL_STATE(661)] = 24042,
  [SMALL_STATE(662)] = 24051,
  [SMALL_STATE(663)] = 24060,
  [SMALL_STATE(664)] = 24069,
  [SMALL_STATE(665)] = 24078,
  [SMALL_STATE(666)] = 24087,
  [SMALL_STATE(667)] = 24096,
  [SMALL_STATE(668)] = 24105,
  [SMALL_STATE(669)] = 24114,
  [SMALL_STATE(670)] = 24123,
  [SMALL_STATE(671)] = 24132,
  [SMALL_STATE(672)] = 24141,
  [SMALL_STATE(673)] = 24150,
  [SMALL_STATE(674)] = 24159,
  [SMALL_STATE(675)] = 24168,
  [SMALL_STATE(676)] = 24177,
  [SMALL_STATE(677)] = 24186,
  [SMALL_STATE(678)] = 24195,
  [SMALL_STATE(679)] = 24204,
  [SMALL_STATE(680)] = 24213,
  [SMALL_STATE(681)] = 24222,
  [SMALL_STATE(682)] = 24231,
  [SMALL_STATE(683)] = 24240,
  [SMALL_STATE(684)] = 24249,
  [SMALL_STATE(685)] = 24258,
  [SMALL_STATE(686)] = 24267,
  [SMALL_STATE(687)] = 24276,
  [SMALL_STATE(688)] = 24285,
  [SMALL_STATE(689)] = 24294,
  [SMALL_STATE(690)] = 24303,
  [SMALL_STATE(691)] = 24312,
  [SMALL_STATE(692)] = 24321,
  [SMALL_STATE(693)] = 24330,
  [SMALL_STATE(694)] = 24339,
  [SMALL_STATE(695)] = 24348,
  [SMALL_STATE(696)] = 24357,
  [SMALL_STATE(697)] = 24366,
  [SMALL_STATE(698)] = 24375,
  [SMALL_STATE(699)] = 24384,
  [SMALL_STATE(700)] = 24393,
  [SMALL_STATE(701)] = 24402,
  [SMALL_STATE(702)] = 24411,
  [SMALL_STATE(703)] = 24420,
  [SMALL_STATE(704)] = 24429,
  [SMALL_STATE(705)] = 24438,
  [SMALL_STATE(706)] = 24447,
  [SMALL_STATE(707)] = 24456,
  [SMALL_STATE(708)] = 24465,
  [SMALL_STATE(709)] = 24474,
  [SMALL_STATE(710)] = 24483,
  [SMALL_STATE(711)] = 24492,
  [SMALL_STATE(712)] = 24501,
  [SMALL_STATE(713)] = 24510,
  [SMALL_STATE(714)] = 24519,
  [SMALL_STATE(715)] = 24528,
  [SMALL_STATE(716)] = 24537,
  [SMALL_STATE(717)] = 24546,
  [SMALL_STATE(718)] = 24555,
  [SMALL_STATE(719)] = 24564,
  [SMALL_STATE(720)] = 24573,
  [SMALL_STATE(721)] = 24582,
  [SMALL_STATE(722)] = 24591,
  [SMALL_STATE(723)] = 24600,
  [SMALL_STATE(724)] = 24609,
  [SMALL_STATE(725)] = 24618,
  [SMALL_STATE(726)] = 24627,
  [SMALL_STATE(727)] = 24636,
  [SMALL_STATE(728)] = 24645,
  [SMALL_STATE(729)] = 24654,
  [SMALL_STATE(730)] = 24663,
  [SMALL_STATE(731)] = 24672,
  [SMALL_STATE(732)] = 24681,
  [SMALL_STATE(733)] = 24690,
  [SMALL_STATE(734)] = 24699,
  [SMALL_STATE(735)] = 24708,
  [SMALL_STATE(736)] = 24717,
  [SMALL_STATE(737)] = 24726,
  [SMALL_STATE(738)] = 24735,
  [SMALL_STATE(739)] = 24744,
  [SMALL_STATE(740)] = 24753,
  [SMALL_STATE(741)] = 24762,
  [SMALL_STATE(742)] = 24771,
  [SMALL_STATE(743)] = 24780,
  [SMALL_STATE(744)] = 24789,
  [SMALL_STATE(745)] = 24798,
  [SMALL_STATE(746)] = 24807,
  [SMALL_STATE(747)] = 24816,
  [SMALL_STATE(748)] = 24825,
  [SMALL_STATE(749)] = 24834,
  [SMALL_STATE(750)] = 24843,
  [SMALL_STATE(751)] = 24852,
  [SMALL_STATE(752)] = 24861,
  [SMALL_STATE(753)] = 24870,
  [SMALL_STATE(754)] = 24879,
  [SMALL_STATE(755)] = 24888,
  [SMALL_STATE(756)] = 24897,
  [SMALL_STATE(757)] = 24906,
  [SMALL_STATE(758)] = 24915,
  [SMALL_STATE(759)] = 24924,
  [SMALL_STATE(760)] = 24933,
  [SMALL_STATE(761)] = 24942,
  [SMALL_STATE(762)] = 24951,
  [SMALL_STATE(763)] = 24960,
  [SMALL_STATE(764)] = 24969,
  [SMALL_STATE(765)] = 24978,
  [SMALL_STATE(766)] = 24987,
  [SMALL_STATE(767)] = 24996,
  [SMALL_STATE(768)] = 25005,
  [SMALL_STATE(769)] = 25014,
  [SMALL_STATE(770)] = 25023,
  [SMALL_STATE(771)] = 25032,
  [SMALL_STATE(772)] = 25041,
  [SMALL_STATE(773)] = 25050,
  [SMALL_STATE(774)] = 25059,
  [SMALL_STATE(775)] = 25068,
  [SMALL_STATE(776)] = 25077,
  [SMALL_STATE(777)] = 25086,
  [SMALL_STATE(778)] = 25095,
  [SMALL_STATE(779)] = 25104,
  [SMALL_STATE(780)] = 25113,
  [SMALL_STATE(781)] = 25122,
  [SMALL_STATE(782)] = 25131,
  [SMALL_STATE(783)] = 25140,
  [SMALL_STATE(784)] = 25149,
  [SMALL_STATE(785)] = 25158,
  [SMALL_STATE(786)] = 25167,
  [SMALL_STATE(787)] = 25176,
  [SMALL_STATE(788)] = 25185,
  [SMALL_STATE(789)] = 25194,
  [SMALL_STATE(790)] = 25203,
  [SMALL_STATE(791)] = 25212,
  [SMALL_STATE(792)] = 25221,
  [SMALL_STATE(793)] = 25230,
  [SMALL_STATE(794)] = 25239,
  [SMALL_STATE(795)] = 25248,
  [SMALL_STATE(796)] = 25257,
  [SMALL_STATE(797)] = 25266,
  [SMALL_STATE(798)] = 25275,
  [SMALL_STATE(799)] = 25284,
  [SMALL_STATE(800)] = 25293,
  [SMALL_STATE(801)] = 25302,
  [SMALL_STATE(802)] = 25311,
  [SMALL_STATE(803)] = 25320,
  [SMALL_STATE(804)] = 25329,
  [SMALL_STATE(805)] = 25338,
  [SMALL_STATE(806)] = 25347,
  [SMALL_STATE(807)] = 25356,
  [SMALL_STATE(808)] = 25365,
  [SMALL_STATE(809)] = 25374,
  [SMALL_STATE(810)] = 25383,
  [SMALL_STATE(811)] = 25392,
  [SMALL_STATE(812)] = 25401,
  [SMALL_STATE(813)] = 25410,
  [SMALL_STATE(814)] = 25419,
  [SMALL_STATE(815)] = 25428,
  [SMALL_STATE(816)] = 25437,
  [SMALL_STATE(817)] = 25446,
  [SMALL_STATE(818)] = 25455,
  [SMALL_STATE(819)] = 25464,
  [SMALL_STATE(820)] = 25473,
  [SMALL_STATE(821)] = 25482,
  [SMALL_STATE(822)] = 25491,
  [SMALL_STATE(823)] = 25500,
  [SMALL_STATE(824)] = 25509,
  [SMALL_STATE(825)] = 25518,
  [SMALL_STATE(826)] = 25527,
  [SMALL_STATE(827)] = 25536,
  [SMALL_STATE(828)] = 25545,
  [SMALL_STATE(829)] = 25554,
  [SMALL_STATE(830)] = 25563,
  [SMALL_STATE(831)] = 25572,
  [SMALL_STATE(832)] = 25581,
  [SMALL_STATE(833)] = 25590,
  [SMALL_STATE(834)] = 25599,
  [SMALL_STATE(835)] = 25608,
  [SMALL_STATE(836)] = 25617,
  [SMALL_STATE(837)] = 25626,
  [SMALL_STATE(838)] = 25635,
  [SMALL_STATE(839)] = 25644,
  [SMALL_STATE(840)] = 25653,
  [SMALL_STATE(841)] = 25662,
  [SMALL_STATE(842)] = 25671,
  [SMALL_STATE(843)] = 25680,
  [SMALL_STATE(844)] = 25689,
  [SMALL_STATE(845)] = 25698,
  [SMALL_STATE(846)] = 25707,
  [SMALL_STATE(847)] = 25716,
  [SMALL_STATE(848)] = 25725,
  [SMALL_STATE(849)] = 25734,
  [SMALL_STATE(850)] = 25743,
  [SMALL_STATE(851)] = 25752,
  [SMALL_STATE(852)] = 25761,
  [SMALL_STATE(853)] = 25770,
  [SMALL_STATE(854)] = 25779,
  [SMALL_STATE(855)] = 25788,
  [SMALL_STATE(856)] = 25797,
  [SMALL_STATE(857)] = 25806,
  [SMALL_STATE(858)] = 25815,
  [SMALL_STATE(859)] = 25824,
  [SMALL_STATE(860)] = 25833,
  [SMALL_STATE(861)] = 25842,
  [SMALL_STATE(862)] = 25851,
  [SMALL_STATE(863)] = 25860,
  [SMALL_STATE(864)] = 25869,
  [SMALL_STATE(865)] = 25878,
  [SMALL_STATE(866)] = 25887,
  [SMALL_STATE(867)] = 25896,
  [SMALL_STATE(868)] = 25905,
  [SMALL_STATE(869)] = 25914,
  [SMALL_STATE(870)] = 25923,
  [SMALL_STATE(871)] = 25932,
  [SMALL_STATE(872)] = 25941,
  [SMALL_STATE(873)] = 25950,
  [SMALL_STATE(874)] = 25959,
  [SMALL_STATE(875)] = 25968,
  [SMALL_STATE(876)] = 25977,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(778),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(777),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(776),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(775),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(774),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(773),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(772),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(771),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(770),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(661),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(766),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(765),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_repeat2, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(777),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(113),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(112),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(111),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(374),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(776),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(502),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(775),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(476),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(774),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(773),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(772),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(771),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(770),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(661),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(766),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(765),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(102),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(480),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(410),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_accum_name, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_accum_name, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_dot, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_dot, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(867),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(867),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_dot, 4),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_dot, 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_dot_repeat1, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 1),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2), SHIFT_REPEAT(758),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_accum_name, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_accum_name, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 4),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 5),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 5),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_integer, 1), REDUCE(sym_integer, 2),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_integer, 1), REDUCE(sym_integer, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_simple_size_repeat1, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_simple_size_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_simple_size_repeat1, 2), SHIFT_REPEAT(41),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_real, 3), REDUCE(sym_real, 4),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_real, 3), REDUCE(sym_real, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 2),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(732),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 3),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_real, 2), REDUCE(sym_real, 3),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_real, 2), REDUCE(sym_real, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 5),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 5),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 6),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 6),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_repeat1, 2),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(778),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 8),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 8),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 7),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 7),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 4),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 11),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 11),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 8),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 8),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 10),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 10),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 4),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 4),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 7),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 7),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 6),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 6),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 6, .production_id = 14),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef, 6, .production_id = 14),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(696),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(749),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(748),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(741),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 7, .production_id = 16),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef, 7, .production_id = 16),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_stmts, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_body_stmts, 2),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(852),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(865),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(873),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2), SHIFT_REPEAT(827),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(781),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 1),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_simple_size_repeat1, 2), SHIFT_REPEAT(204),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(872),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_set, 1),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_operator, 1),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_operator, 1),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 1),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt, 3),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt, 5),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 2), SHIFT_REPEAT(284),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 2),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_l_accum_accum_stmt, 5, .production_id = 21),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_accum_stmt, 5, .production_id = 21),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_g_accum_accum_stmt, 3, .production_id = 6),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(502),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(480),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var_decl_stmt, 4, .production_id = 19),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 2),
  [625] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(502),
  [628] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(480),
  [631] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(311),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_expr, 1),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 3),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_fields, 2),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_fields, 2),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_fields, 1),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_fields, 1),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(849),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 1),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_fields_repeat1, 2), SHIFT_REPEAT(278),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_fields_repeat1, 2),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tuple_fields_repeat1, 2),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_field, 2),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_field, 2),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 2),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [691] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2), SHIFT_REPEAT(286),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(701),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(821),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 4),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 4),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 1),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_proj, 1),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 4),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 4),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_g_accum_assign_stmt, 3),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_l_accum_assign_stmt, 5, .production_id = 11),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 4),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertex_set_type, 1),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 2),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 2),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_accum_func_call, 3, .production_id = 15),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_accum_func_call, 4, .production_id = 18),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 2, .production_id = 22),
  [788] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 2, .production_id = 22), SHIFT_REPEAT(715),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt_list, 1),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_pattern, 1),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 4, .production_id = 23),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_source_set, 1, .production_id = 5),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [805] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_stmt_list_repeat1, 2), SHIFT_REPEAT(89),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_stmt_list_repeat1, 2),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 3),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 3),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 1),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_set, 1),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_vertex_type, 1),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt_list, 2),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 5, .production_id = 23),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 4),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 2, .production_id = 13),
  [832] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 2, .production_id = 13), SHIFT_REPEAT(804),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_pattern, 2, .production_id = 8),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 8, .production_id = 25),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 7),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt, 1),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 6),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 5),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [857] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2), SHIFT_REPEAT(594),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_case_stmt, 5),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_while_stmt, 5),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_for_each_stmt, 5),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_source_set, 3, .production_id = 12),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_while_stmt, 7),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2),
  [886] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2), SHIFT_REPEAT(559),
  [889] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2), SHIFT_REPEAT(874),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_case_stmt, 6),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_case_stmt, 3),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_set, 3, .production_id = 24),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_case_stmt, 4),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql, 1),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 8),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 6),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 4),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 5),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 3),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_set, 3),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 8),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [946] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_stmt_repeat1, 2), SHIFT_REPEAT(115),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_print_stmt_repeat1, 2),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 2),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disj_pattern_repeat1, 2),
  [961] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disj_pattern_repeat1, 2), SHIFT_REPEAT(338),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_expr_set, 5),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disj_pattern, 2),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsql_select_block_repeat1, 2),
  [978] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_select_block_repeat1, 2), SHIFT_REPEAT(83),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_type, 1),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_pattern, 1),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 7),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 4),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edge_set_type, 1),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_expr_set, 4),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 1),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_edge_pattern, 1),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 2),
  [1011] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 2), SHIFT_REPEAT(124),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 5),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 6, .production_id = 17),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 9),
  [1030] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 9),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 7),
  [1034] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 7),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_var_decl_stmt, 3),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 2),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 2),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_pattern, 2),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 2),
  [1058] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 2), SHIFT_REPEAT(267),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_size, 1),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1069] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2), SHIFT_REPEAT(171),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 10),
  [1074] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 10),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 2),
  [1078] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 2), SHIFT_REPEAT(129),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 2),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 3, .production_id = 7),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 6),
  [1099] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 6),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat2, 2),
  [1107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat2, 2), SHIFT_REPEAT(270),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 8),
  [1122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 8),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 4),
  [1128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 4),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 11),
  [1132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 11),
  [1134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2), SHIFT_REPEAT(165),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 1),
  [1139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 1),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(816),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 4),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_expr, 3),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2),
  [1169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2), SHIFT_REPEAT(678),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 2), SHIFT_REPEAT(746),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 2),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 4),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 5),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 3),
  [1201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [1203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [1205] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_v_expr_set_repeat1, 2), SHIFT_REPEAT(139),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_expr_set_repeat1, 2),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat2, 4),
  [1230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [1232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 2), SHIFT_REPEAT(687),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 2),
  [1241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [1243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seed_set_repeat1, 2), SHIFT_REPEAT(389),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seed_set_repeat1, 2),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 3),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 4),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat1, 2), SHIFT_REPEAT(299),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat1, 2),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 12, .production_id = 3),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [1279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(527),
  [1282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2),
  [1284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(530),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 8, .production_id = 1),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpret_query, 8, .production_id = 1),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 9, .production_id = 2),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_edge_types_repeat1, 2),
  [1303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_edge_types_repeat1, 2), SHIFT_REPEAT(478),
  [1306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 2),
  [1308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 10),
  [1310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 10), SHIFT_REPEAT(688),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 4),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 10, .production_id = 3),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 4),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 10, .production_id = 1),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_edge_pattern, 3),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [1371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [1373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(598),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 13, .production_id = 4),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 2), SHIFT_REPEAT(670),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 2),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 2), SHIFT_REPEAT(647),
  [1393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 2),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 4),
  [1403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 3),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat3, 2), SHIFT_REPEAT(266),
  [1410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat3, 2),
  [1412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat2, 2), SHIFT_REPEAT(651),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat2, 2),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpret_query, 10, .production_id = 1),
  [1421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 5),
  [1423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 11, .production_id = 4),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_accum_clause, 2),
  [1427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 1),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 11, .production_id = 2),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_clause, 2),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_vertex_types_repeat1, 2),
  [1453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_vertex_types_repeat1, 2), SHIFT_REPEAT(462),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 5),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 3),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 3),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 4),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat2, 4),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 9),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 8, .production_id = 7),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat3, 3),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 4),
  [1516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_set, 1),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 2),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_proj, 3),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 5),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(735),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 4),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 2),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_set, 3, .production_id = 20),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [1624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 3),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 8),
  [1630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_clause, 4),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 13, .production_id = 7),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 7),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_while_stmt, 7),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 7),
  [1706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 6),
  [1718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 5),
  [1724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_stmt, 1),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_stmt, 1),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 5),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [1742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(736),
  [1744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [1746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [1748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [1752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [1754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_stmt, 1),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_while_stmt, 5),
  [1760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_for_each_stmt, 5),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 3),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 4),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 6),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 6),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 6),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1906] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 5),
  [1922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [1930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
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
