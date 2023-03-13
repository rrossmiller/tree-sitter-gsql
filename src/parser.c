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
#define STATE_COUNT 864
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 255
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
  anon_sym_SUMACCUM = 58,
  anon_sym_INT = 59,
  anon_sym_FLOAT = 60,
  anon_sym_DOUBLE = 61,
  anon_sym_STRING = 62,
  anon_sym_MAXACCUM = 63,
  anon_sym_MINACCUM = 64,
  anon_sym_AVGACCUM = 65,
  anon_sym_ORACCUM = 66,
  anon_sym_ANDACCUM = 67,
  anon_sym_BITWISEORACCUM = 68,
  anon_sym_BITWISEANDACCUM = 69,
  anon_sym_LISTACCUM = 70,
  anon_sym_SETACCUM = 71,
  anon_sym_BAGACCUM = 72,
  anon_sym_MAPACCUM = 73,
  anon_sym_HEAPACCUM = 74,
  anon_sym_ASC = 75,
  anon_sym_DESC = 76,
  anon_sym_GROUPBYACCUM = 77,
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
  aux_sym_accum_type_repeat1 = 245,
  aux_sym_accum_type_repeat2 = 246,
  aux_sym_accum_type_repeat3 = 247,
  aux_sym_accum_type_repeat4 = 248,
  aux_sym_arg_list_repeat1 = 249,
  aux_sym_name_dot_repeat1 = 250,
  aux_sym_print_stmt_repeat1 = 251,
  aux_sym_v_expr_set_repeat1 = 252,
  aux_sym_string_literal_repeat1 = 253,
  aux_sym_string_literal_repeat2 = 254,
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
  [anon_sym_SUMACCUM] = "SUMACCUM",
  [anon_sym_INT] = "INT",
  [anon_sym_FLOAT] = "FLOAT",
  [anon_sym_DOUBLE] = "DOUBLE",
  [anon_sym_STRING] = "STRING",
  [anon_sym_MAXACCUM] = "MAXACCUM",
  [anon_sym_MINACCUM] = "MINACCUM",
  [anon_sym_AVGACCUM] = "AVGACCUM",
  [anon_sym_ORACCUM] = "ORACCUM",
  [anon_sym_ANDACCUM] = "ANDACCUM",
  [anon_sym_BITWISEORACCUM] = "BITWISEORACCUM",
  [anon_sym_BITWISEANDACCUM] = "BITWISEANDACCUM",
  [anon_sym_LISTACCUM] = "LISTACCUM",
  [anon_sym_SETACCUM] = "SETACCUM",
  [anon_sym_BAGACCUM] = "BAGACCUM",
  [anon_sym_MAPACCUM] = "MAPACCUM",
  [anon_sym_HEAPACCUM] = "HEAPACCUM",
  [anon_sym_ASC] = "ASC",
  [anon_sym_DESC] = "DESC",
  [anon_sym_GROUPBYACCUM] = "GROUPBYACCUM",
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
  [anon_sym_SUMACCUM] = anon_sym_SUMACCUM,
  [anon_sym_INT] = anon_sym_INT,
  [anon_sym_FLOAT] = anon_sym_FLOAT,
  [anon_sym_DOUBLE] = anon_sym_DOUBLE,
  [anon_sym_STRING] = anon_sym_STRING,
  [anon_sym_MAXACCUM] = anon_sym_MAXACCUM,
  [anon_sym_MINACCUM] = anon_sym_MINACCUM,
  [anon_sym_AVGACCUM] = anon_sym_AVGACCUM,
  [anon_sym_ORACCUM] = anon_sym_ORACCUM,
  [anon_sym_ANDACCUM] = anon_sym_ANDACCUM,
  [anon_sym_BITWISEORACCUM] = anon_sym_BITWISEORACCUM,
  [anon_sym_BITWISEANDACCUM] = anon_sym_BITWISEANDACCUM,
  [anon_sym_LISTACCUM] = anon_sym_LISTACCUM,
  [anon_sym_SETACCUM] = anon_sym_SETACCUM,
  [anon_sym_BAGACCUM] = anon_sym_BAGACCUM,
  [anon_sym_MAPACCUM] = anon_sym_MAPACCUM,
  [anon_sym_HEAPACCUM] = anon_sym_HEAPACCUM,
  [anon_sym_ASC] = anon_sym_ASC,
  [anon_sym_DESC] = anon_sym_DESC,
  [anon_sym_GROUPBYACCUM] = anon_sym_GROUPBYACCUM,
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
  [anon_sym_SUMACCUM] = {
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
  [anon_sym_BITWISEORACCUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BITWISEANDACCUM] = {
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
  [anon_sym_GROUPBYACCUM] = {
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
      if (eof) ADVANCE(450);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(885);
      if (lookahead == '%') ADVANCE(896);
      if (lookahead == '&') ADVANCE(901);
      if (lookahead == '\'') ADVANCE(890);
      if (lookahead == '(') ADVANCE(462);
      if (lookahead == ')') ADVANCE(463);
      if (lookahead == '*') ADVANCE(526);
      if (lookahead == '+') ADVANCE(898);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(895);
      if (lookahead == ':') ADVANCE(515);
      if (lookahead == ';') ADVANCE(477);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(466);
      if (lookahead == '>') ADVANCE(476);
      if (lookahead == '@') ADVANCE(569);
      if (lookahead == 'A') ADVANCE(95);
      if (lookahead == 'B') ADVANCE(59);
      if (lookahead == 'C') ADVANCE(58);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'E') ADVANCE(142);
      if (lookahead == 'F') ADVANCE(52);
      if (lookahead == 'G') ADVANCE(320);
      if (lookahead == 'H') ADVANCE(147);
      if (lookahead == 'I') ADVANCE(193);
      if (lookahead == 'J') ADVANCE(342);
      if (lookahead == 'L') ADVANCE(212);
      if (lookahead == 'M') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(304);
      if (lookahead == 'O') ADVANCE(194);
      if (lookahead == 'P') ADVANCE(326);
      if (lookahead == 'Q') ADVANCE(400);
      if (lookahead == 'R') ADVANCE(64);
      if (lookahead == 'S') ADVANCE(148);
      if (lookahead == 'T') ADVANCE(209);
      if (lookahead == 'U') ADVANCE(226);
      if (lookahead == 'V') ADVANCE(175);
      if (lookahead == 'W') ADVANCE(204);
      if (lookahead == '[') ADVANCE(518);
      if (lookahead == ']') ADVANCE(519);
      if (lookahead == '_') ADVANCE(487);
      if (lookahead == 'a') ADVANCE(428);
      if (lookahead == 'g') ADVANCE(439);
      if (lookahead == 'p') ADVANCE(437);
      if (lookahead == 't') ADVANCE(436);
      if (lookahead == 'v') ADVANCE(44);
      if (lookahead == '{') ADVANCE(467);
      if (lookahead == '}') ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(884);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(906);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(885);
      if (lookahead == '%') ADVANCE(896);
      if (lookahead == '&') ADVANCE(901);
      if (lookahead == '\'') ADVANCE(890);
      if (lookahead == '(') ADVANCE(462);
      if (lookahead == ')') ADVANCE(463);
      if (lookahead == '*') ADVANCE(526);
      if (lookahead == '+') ADVANCE(898);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(895);
      if (lookahead == ':') ADVANCE(515);
      if (lookahead == ';') ADVANCE(477);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(466);
      if (lookahead == '>') ADVANCE(476);
      if (lookahead == '@') ADVANCE(569);
      if (lookahead == 'A') ADVANCE(95);
      if (lookahead == 'B') ADVANCE(59);
      if (lookahead == 'C') ADVANCE(58);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'E') ADVANCE(142);
      if (lookahead == 'F') ADVANCE(52);
      if (lookahead == 'G') ADVANCE(320);
      if (lookahead == 'H') ADVANCE(147);
      if (lookahead == 'I') ADVANCE(193);
      if (lookahead == 'J') ADVANCE(342);
      if (lookahead == 'L') ADVANCE(212);
      if (lookahead == 'M') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(304);
      if (lookahead == 'O') ADVANCE(194);
      if (lookahead == 'P') ADVANCE(326);
      if (lookahead == 'Q') ADVANCE(400);
      if (lookahead == 'R') ADVANCE(64);
      if (lookahead == 'S') ADVANCE(148);
      if (lookahead == 'T') ADVANCE(209);
      if (lookahead == 'U') ADVANCE(226);
      if (lookahead == 'V') ADVANCE(175);
      if (lookahead == 'W') ADVANCE(204);
      if (lookahead == '[') ADVANCE(518);
      if (lookahead == ']') ADVANCE(519);
      if (lookahead == '_') ADVANCE(487);
      if (lookahead == 'a') ADVANCE(428);
      if (lookahead == 'g') ADVANCE(439);
      if (lookahead == 'p') ADVANCE(437);
      if (lookahead == 't') ADVANCE(436);
      if (lookahead == 'v') ADVANCE(44);
      if (lookahead == '{') ADVANCE(467);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '}') ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(884);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(885);
      if (lookahead == '%') ADVANCE(896);
      if (lookahead == '&') ADVANCE(901);
      if (lookahead == '\'') ADVANCE(890);
      if (lookahead == '(') ADVANCE(462);
      if (lookahead == ')') ADVANCE(463);
      if (lookahead == '*') ADVANCE(526);
      if (lookahead == '+') ADVANCE(898);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(483);
      if (lookahead == '/') ADVANCE(895);
      if (lookahead == ':') ADVANCE(515);
      if (lookahead == ';') ADVANCE(477);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(466);
      if (lookahead == '>') ADVANCE(476);
      if (lookahead == '@') ADVANCE(569);
      if (lookahead == 'A') ADVANCE(95);
      if (lookahead == 'B') ADVANCE(59);
      if (lookahead == 'C') ADVANCE(58);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'E') ADVANCE(142);
      if (lookahead == 'F') ADVANCE(52);
      if (lookahead == 'G') ADVANCE(320);
      if (lookahead == 'H') ADVANCE(147);
      if (lookahead == 'I') ADVANCE(193);
      if (lookahead == 'J') ADVANCE(342);
      if (lookahead == 'L') ADVANCE(212);
      if (lookahead == 'M') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(304);
      if (lookahead == 'O') ADVANCE(194);
      if (lookahead == 'P') ADVANCE(326);
      if (lookahead == 'Q') ADVANCE(400);
      if (lookahead == 'R') ADVANCE(64);
      if (lookahead == 'S') ADVANCE(148);
      if (lookahead == 'T') ADVANCE(209);
      if (lookahead == 'U') ADVANCE(226);
      if (lookahead == 'V') ADVANCE(175);
      if (lookahead == 'W') ADVANCE(204);
      if (lookahead == '[') ADVANCE(518);
      if (lookahead == ']') ADVANCE(519);
      if (lookahead == '_') ADVANCE(487);
      if (lookahead == 'a') ADVANCE(428);
      if (lookahead == 'g') ADVANCE(439);
      if (lookahead == 'p') ADVANCE(437);
      if (lookahead == 't') ADVANCE(436);
      if (lookahead == 'v') ADVANCE(44);
      if (lookahead == '{') ADVANCE(467);
      if (lookahead == '}') ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(884);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(525);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(885);
      if (lookahead == '%') ADVANCE(896);
      if (lookahead == '&') ADVANCE(901);
      if (lookahead == '\'') ADVANCE(890);
      if (lookahead == '(') ADVANCE(462);
      if (lookahead == ')') ADVANCE(463);
      if (lookahead == '*') ADVANCE(526);
      if (lookahead == '+') ADVANCE(897);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '.') ADVANCE(482);
      if (lookahead == '/') ADVANCE(895);
      if (lookahead == ':') ADVANCE(515);
      if (lookahead == ';') ADVANCE(477);
      if (lookahead == '<') ADVANCE(473);
      if (lookahead == '=') ADVANCE(465);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == 'C') ADVANCE(334);
      if (lookahead == 'D') ADVANCE(300);
      if (lookahead == 'E') ADVANCE(246);
      if (lookahead == 'F') ADVANCE(53);
      if (lookahead == 'I') ADVANCE(297);
      if (lookahead == 'L') ADVANCE(223);
      if (lookahead == 'M') ADVANCE(67);
      if (lookahead == 'O') ADVANCE(194);
      if (lookahead == 'S') ADVANCE(395);
      if (lookahead == 'T') ADVANCE(208);
      if (lookahead == 'U') ADVANCE(283);
      if (lookahead == 'W') ADVANCE(210);
      if (lookahead == '[') ADVANCE(518);
      if (lookahead == ']') ADVANCE(519);
      if (lookahead == 'g') ADVANCE(439);
      if (lookahead == 'p') ADVANCE(437);
      if (lookahead == 't') ADVANCE(436);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(884);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(885);
      if (lookahead == '%') ADVANCE(896);
      if (lookahead == '&') ADVANCE(901);
      if (lookahead == '\'') ADVANCE(890);
      if (lookahead == '(') ADVANCE(462);
      if (lookahead == ')') ADVANCE(463);
      if (lookahead == '*') ADVANCE(526);
      if (lookahead == '+') ADVANCE(897);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '.') ADVANCE(482);
      if (lookahead == '/') ADVANCE(895);
      if (lookahead == ':') ADVANCE(515);
      if (lookahead == ';') ADVANCE(477);
      if (lookahead == '<') ADVANCE(473);
      if (lookahead == '=') ADVANCE(465);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == 'C') ADVANCE(334);
      if (lookahead == 'D') ADVANCE(300);
      if (lookahead == 'E') ADVANCE(246);
      if (lookahead == 'F') ADVANCE(53);
      if (lookahead == 'I') ADVANCE(297);
      if (lookahead == 'L') ADVANCE(223);
      if (lookahead == 'M') ADVANCE(67);
      if (lookahead == 'O') ADVANCE(194);
      if (lookahead == 'S') ADVANCE(395);
      if (lookahead == 'T') ADVANCE(208);
      if (lookahead == 'U') ADVANCE(283);
      if (lookahead == 'W') ADVANCE(210);
      if (lookahead == '[') ADVANCE(518);
      if (lookahead == ']') ADVANCE(519);
      if (lookahead == 'g') ADVANCE(439);
      if (lookahead == 'p') ADVANCE(437);
      if (lookahead == 't') ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(884);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '%') ADVANCE(896);
      if (lookahead == '&') ADVANCE(901);
      if (lookahead == ')') ADVANCE(463);
      if (lookahead == '*') ADVANCE(526);
      if (lookahead == '+') ADVANCE(897);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(895);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '@') ADVANCE(569);
      if (lookahead == 'A') ADVANCE(766);
      if (lookahead == 'B') ADVANCE(647);
      if (lookahead == 'C') ADVANCE(621);
      if (lookahead == 'D') ADVANCE(623);
      if (lookahead == 'E') ADVANCE(687);
      if (lookahead == 'F') ADVANCE(740);
      if (lookahead == 'G') ADVANCE(794);
      if (lookahead == 'H') ADVANCE(691);
      if (lookahead == 'I') ADVANCE(717);
      if (lookahead == 'J') ADVANCE(805);
      if (lookahead == 'L') ADVANCE(729);
      if (lookahead == 'M') ADVANCE(618);
      if (lookahead == 'O') ADVANCE(793);
      if (lookahead == 'P') ADVANCE(802);
      if (lookahead == 'S') ADVANCE(707);
      if (lookahead == 'T') ADVANCE(852);
      if (lookahead == 'U') ADVANCE(733);
      if (lookahead == 'V') ADVANCE(710);
      if (lookahead == 'W') ADVANCE(725);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '}') ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (sym_name_character_set_1(lookahead)) ADVANCE(877);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '%') ADVANCE(896);
      if (lookahead == '&') ADVANCE(901);
      if (lookahead == ')') ADVANCE(463);
      if (lookahead == '*') ADVANCE(526);
      if (lookahead == '+') ADVANCE(897);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(895);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '@') ADVANCE(569);
      if (lookahead == 'A') ADVANCE(766);
      if (lookahead == 'B') ADVANCE(647);
      if (lookahead == 'C') ADVANCE(621);
      if (lookahead == 'D') ADVANCE(623);
      if (lookahead == 'E') ADVANCE(687);
      if (lookahead == 'F') ADVANCE(740);
      if (lookahead == 'G') ADVANCE(794);
      if (lookahead == 'H') ADVANCE(691);
      if (lookahead == 'I') ADVANCE(717);
      if (lookahead == 'J') ADVANCE(805);
      if (lookahead == 'L') ADVANCE(729);
      if (lookahead == 'M') ADVANCE(618);
      if (lookahead == 'O') ADVANCE(793);
      if (lookahead == 'P') ADVANCE(802);
      if (lookahead == 'S') ADVANCE(707);
      if (lookahead == 'T') ADVANCE(852);
      if (lookahead == 'U') ADVANCE(733);
      if (lookahead == 'V') ADVANCE(710);
      if (lookahead == 'W') ADVANCE(725);
      if (lookahead == '}') ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (sym_name_character_set_1(lookahead)) ADVANCE(877);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '(') ADVANCE(462);
      if (lookahead == ')') ADVANCE(463);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '.') ADVANCE(482);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(515);
      if (lookahead == '<') ADVANCE(474);
      if (lookahead == '=') ADVANCE(465);
      if (lookahead == '>') ADVANCE(475);
      if (lookahead == '@') ADVANCE(569);
      if (lookahead == 'A') ADVANCE(766);
      if (lookahead == 'B') ADVANCE(647);
      if (lookahead == 'C') ADVANCE(621);
      if (lookahead == 'D') ADVANCE(623);
      if (lookahead == 'E') ADVANCE(687);
      if (lookahead == 'F') ADVANCE(740);
      if (lookahead == 'G') ADVANCE(794);
      if (lookahead == 'H') ADVANCE(691);
      if (lookahead == 'I') ADVANCE(717);
      if (lookahead == 'J') ADVANCE(805);
      if (lookahead == 'L') ADVANCE(729);
      if (lookahead == 'M') ADVANCE(618);
      if (lookahead == 'O') ADVANCE(793);
      if (lookahead == 'P') ADVANCE(802);
      if (lookahead == 'S') ADVANCE(707);
      if (lookahead == 'U') ADVANCE(733);
      if (lookahead == 'V') ADVANCE(710);
      if (lookahead == 'W') ADVANCE(725);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '}') ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      if (sym_name_character_set_1(lookahead)) ADVANCE(877);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '(') ADVANCE(462);
      if (lookahead == ')') ADVANCE(463);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '.') ADVANCE(482);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(515);
      if (lookahead == '<') ADVANCE(474);
      if (lookahead == '=') ADVANCE(465);
      if (lookahead == '>') ADVANCE(475);
      if (lookahead == '@') ADVANCE(569);
      if (lookahead == 'A') ADVANCE(766);
      if (lookahead == 'B') ADVANCE(647);
      if (lookahead == 'C') ADVANCE(621);
      if (lookahead == 'D') ADVANCE(623);
      if (lookahead == 'E') ADVANCE(687);
      if (lookahead == 'F') ADVANCE(740);
      if (lookahead == 'G') ADVANCE(794);
      if (lookahead == 'H') ADVANCE(691);
      if (lookahead == 'I') ADVANCE(717);
      if (lookahead == 'J') ADVANCE(805);
      if (lookahead == 'L') ADVANCE(729);
      if (lookahead == 'M') ADVANCE(618);
      if (lookahead == 'O') ADVANCE(793);
      if (lookahead == 'P') ADVANCE(802);
      if (lookahead == 'S') ADVANCE(707);
      if (lookahead == 'U') ADVANCE(733);
      if (lookahead == 'V') ADVANCE(710);
      if (lookahead == 'W') ADVANCE(725);
      if (lookahead == '}') ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      if (sym_name_character_set_1(lookahead)) ADVANCE(877);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(896);
      if (lookahead == '&') ADVANCE(901);
      if (lookahead == ')') ADVANCE(463);
      if (lookahead == '*') ADVANCE(526);
      if (lookahead == '+') ADVANCE(898);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '.') ADVANCE(482);
      if (lookahead == '/') ADVANCE(895);
      if (lookahead == ':') ADVANCE(515);
      if (lookahead == ';') ADVANCE(477);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(466);
      if (lookahead == '>') ADVANCE(476);
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'B') ADVANCE(146);
      if (lookahead == 'D') ADVANCE(300);
      if (lookahead == 'E') ADVANCE(246);
      if (lookahead == 'I') ADVANCE(272);
      if (lookahead == 'L') ADVANCE(213);
      if (lookahead == 'M') ADVANCE(220);
      if (lookahead == 'N') ADVANCE(303);
      if (lookahead == 'O') ADVANCE(194);
      if (lookahead == 'T') ADVANCE(207);
      if (lookahead == 'U') ADVANCE(283);
      if (lookahead == 'W') ADVANCE(210);
      if (lookahead == '[') ADVANCE(518);
      if (lookahead == ']') ADVANCE(519);
      if (lookahead == 'p') ADVANCE(437);
      if (lookahead == 't') ADVANCE(436);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '}') ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(896);
      if (lookahead == '&') ADVANCE(901);
      if (lookahead == ')') ADVANCE(463);
      if (lookahead == '*') ADVANCE(526);
      if (lookahead == '+') ADVANCE(898);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '.') ADVANCE(482);
      if (lookahead == '/') ADVANCE(895);
      if (lookahead == ':') ADVANCE(515);
      if (lookahead == ';') ADVANCE(477);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(466);
      if (lookahead == '>') ADVANCE(476);
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'B') ADVANCE(146);
      if (lookahead == 'D') ADVANCE(300);
      if (lookahead == 'E') ADVANCE(246);
      if (lookahead == 'I') ADVANCE(272);
      if (lookahead == 'L') ADVANCE(213);
      if (lookahead == 'M') ADVANCE(220);
      if (lookahead == 'N') ADVANCE(303);
      if (lookahead == 'O') ADVANCE(194);
      if (lookahead == 'T') ADVANCE(207);
      if (lookahead == 'U') ADVANCE(283);
      if (lookahead == 'W') ADVANCE(210);
      if (lookahead == '[') ADVANCE(518);
      if (lookahead == ']') ADVANCE(519);
      if (lookahead == 'p') ADVANCE(437);
      if (lookahead == 't') ADVANCE(436);
      if (lookahead == '}') ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(896);
      if (lookahead == '&') ADVANCE(901);
      if (lookahead == '(') ADVANCE(462);
      if (lookahead == ')') ADVANCE(463);
      if (lookahead == '*') ADVANCE(526);
      if (lookahead == '+') ADVANCE(897);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '.') ADVANCE(482);
      if (lookahead == '/') ADVANCE(895);
      if (lookahead == ';') ADVANCE(477);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(476);
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'B') ADVANCE(146);
      if (lookahead == 'D') ADVANCE(300);
      if (lookahead == 'E') ADVANCE(246);
      if (lookahead == 'I') ADVANCE(272);
      if (lookahead == 'L') ADVANCE(213);
      if (lookahead == 'M') ADVANCE(220);
      if (lookahead == 'N') ADVANCE(303);
      if (lookahead == 'O') ADVANCE(194);
      if (lookahead == 'T') ADVANCE(207);
      if (lookahead == 'U') ADVANCE(283);
      if (lookahead == 'W') ADVANCE(210);
      if (lookahead == '[') ADVANCE(518);
      if (lookahead == ']') ADVANCE(519);
      if (lookahead == 'p') ADVANCE(437);
      if (lookahead == 't') ADVANCE(436);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(14)
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(896);
      if (lookahead == '&') ADVANCE(901);
      if (lookahead == '(') ADVANCE(462);
      if (lookahead == ')') ADVANCE(463);
      if (lookahead == '*') ADVANCE(526);
      if (lookahead == '+') ADVANCE(897);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '.') ADVANCE(482);
      if (lookahead == '/') ADVANCE(895);
      if (lookahead == ';') ADVANCE(477);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(476);
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'B') ADVANCE(146);
      if (lookahead == 'D') ADVANCE(300);
      if (lookahead == 'E') ADVANCE(246);
      if (lookahead == 'I') ADVANCE(272);
      if (lookahead == 'L') ADVANCE(213);
      if (lookahead == 'M') ADVANCE(220);
      if (lookahead == 'N') ADVANCE(303);
      if (lookahead == 'O') ADVANCE(194);
      if (lookahead == 'T') ADVANCE(207);
      if (lookahead == 'U') ADVANCE(283);
      if (lookahead == 'W') ADVANCE(210);
      if (lookahead == '[') ADVANCE(518);
      if (lookahead == ']') ADVANCE(519);
      if (lookahead == 'p') ADVANCE(437);
      if (lookahead == 't') ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(896);
      if (lookahead == '&') ADVANCE(901);
      if (lookahead == ')') ADVANCE(463);
      if (lookahead == '*') ADVANCE(526);
      if (lookahead == '+') ADVANCE(897);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '.') ADVANCE(482);
      if (lookahead == '/') ADVANCE(895);
      if (lookahead == ':') ADVANCE(515);
      if (lookahead == ';') ADVANCE(477);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(476);
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'B') ADVANCE(146);
      if (lookahead == 'D') ADVANCE(300);
      if (lookahead == 'E') ADVANCE(246);
      if (lookahead == 'I') ADVANCE(280);
      if (lookahead == 'L') ADVANCE(213);
      if (lookahead == 'M') ADVANCE(222);
      if (lookahead == 'N') ADVANCE(303);
      if (lookahead == 'O') ADVANCE(194);
      if (lookahead == 'T') ADVANCE(207);
      if (lookahead == 'W') ADVANCE(210);
      if (lookahead == '[') ADVANCE(518);
      if (lookahead == ']') ADVANCE(519);
      if (lookahead == 'p') ADVANCE(437);
      if (lookahead == 't') ADVANCE(436);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(884);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(896);
      if (lookahead == '&') ADVANCE(901);
      if (lookahead == ')') ADVANCE(463);
      if (lookahead == '*') ADVANCE(526);
      if (lookahead == '+') ADVANCE(897);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '.') ADVANCE(482);
      if (lookahead == '/') ADVANCE(895);
      if (lookahead == ':') ADVANCE(515);
      if (lookahead == ';') ADVANCE(477);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(476);
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'B') ADVANCE(146);
      if (lookahead == 'D') ADVANCE(300);
      if (lookahead == 'E') ADVANCE(246);
      if (lookahead == 'I') ADVANCE(280);
      if (lookahead == 'L') ADVANCE(213);
      if (lookahead == 'M') ADVANCE(222);
      if (lookahead == 'N') ADVANCE(303);
      if (lookahead == 'O') ADVANCE(194);
      if (lookahead == 'T') ADVANCE(207);
      if (lookahead == 'W') ADVANCE(210);
      if (lookahead == '[') ADVANCE(518);
      if (lookahead == ']') ADVANCE(519);
      if (lookahead == 'p') ADVANCE(437);
      if (lookahead == 't') ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(884);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(896);
      if (lookahead == '&') ADVANCE(901);
      if (lookahead == '(') ADVANCE(462);
      if (lookahead == ')') ADVANCE(463);
      if (lookahead == '*') ADVANCE(526);
      if (lookahead == '+') ADVANCE(897);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(482);
      if (lookahead == '/') ADVANCE(895);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(476);
      if (lookahead == 'A') ADVANCE(288);
      if (lookahead == 'B') ADVANCE(146);
      if (lookahead == 'D') ADVANCE(170);
      if (lookahead == 'I') ADVANCE(272);
      if (lookahead == 'L') ADVANCE(215);
      if (lookahead == 'M') ADVANCE(220);
      if (lookahead == 'N') ADVANCE(303);
      if (lookahead == 'O') ADVANCE(321);
      if (lookahead == 'U') ADVANCE(283);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(896);
      if (lookahead == '&') ADVANCE(901);
      if (lookahead == '(') ADVANCE(462);
      if (lookahead == ')') ADVANCE(463);
      if (lookahead == '*') ADVANCE(526);
      if (lookahead == '+') ADVANCE(897);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(482);
      if (lookahead == '/') ADVANCE(895);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(476);
      if (lookahead == 'A') ADVANCE(288);
      if (lookahead == 'B') ADVANCE(146);
      if (lookahead == 'D') ADVANCE(170);
      if (lookahead == 'I') ADVANCE(272);
      if (lookahead == 'L') ADVANCE(215);
      if (lookahead == 'M') ADVANCE(220);
      if (lookahead == 'N') ADVANCE(303);
      if (lookahead == 'O') ADVANCE(321);
      if (lookahead == 'U') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(896);
      if (lookahead == '&') ADVANCE(901);
      if (lookahead == ')') ADVANCE(463);
      if (lookahead == '*') ADVANCE(526);
      if (lookahead == '+') ADVANCE(897);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(482);
      if (lookahead == '/') ADVANCE(895);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(476);
      if (lookahead == 'A') ADVANCE(287);
      if (lookahead == 'B') ADVANCE(146);
      if (lookahead == 'I') ADVANCE(280);
      if (lookahead == 'L') ADVANCE(215);
      if (lookahead == 'N') ADVANCE(303);
      if (lookahead == 'O') ADVANCE(321);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(884);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(896);
      if (lookahead == '&') ADVANCE(901);
      if (lookahead == ')') ADVANCE(463);
      if (lookahead == '*') ADVANCE(526);
      if (lookahead == '+') ADVANCE(897);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '-') ADVANCE(524);
      if (lookahead == '.') ADVANCE(482);
      if (lookahead == '/') ADVANCE(895);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(476);
      if (lookahead == 'A') ADVANCE(287);
      if (lookahead == 'B') ADVANCE(146);
      if (lookahead == 'I') ADVANCE(280);
      if (lookahead == 'L') ADVANCE(215);
      if (lookahead == 'N') ADVANCE(303);
      if (lookahead == 'O') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(884);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == ')') ADVANCE(463);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '.') ADVANCE(482);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(515);
      if (lookahead == ';') ADVANCE(477);
      if (lookahead == '<') ADVANCE(412);
      if (lookahead == '=') ADVANCE(465);
      if (lookahead == '>') ADVANCE(475);
      if (lookahead == 'E') ADVANCE(246);
      if (lookahead == 'I') ADVANCE(279);
      if (lookahead == 'L') ADVANCE(223);
      if (lookahead == 'W') ADVANCE(211);
      if (lookahead == 'p') ADVANCE(437);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(22)
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == ')') ADVANCE(463);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '.') ADVANCE(482);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(515);
      if (lookahead == ';') ADVANCE(477);
      if (lookahead == '<') ADVANCE(412);
      if (lookahead == '=') ADVANCE(465);
      if (lookahead == '>') ADVANCE(475);
      if (lookahead == 'E') ADVANCE(246);
      if (lookahead == 'I') ADVANCE(279);
      if (lookahead == 'L') ADVANCE(223);
      if (lookahead == 'W') ADVANCE(211);
      if (lookahead == 'p') ADVANCE(437);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(885);
      if (lookahead == '\'') ADVANCE(890);
      if (lookahead == '(') ADVANCE(462);
      if (lookahead == ')') ADVANCE(463);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '.') ADVANCE(482);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(412);
      if (lookahead == '@') ADVANCE(569);
      if (lookahead == 'C') ADVANCE(783);
      if (lookahead == 'F') ADVANCE(626);
      if (lookahead == 'I') ADVANCE(808);
      if (lookahead == 'T') ADVANCE(799);
      if (lookahead == '[') ADVANCE(518);
      if (lookahead == 'g') ADVANCE(872);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(884);
      if (sym_name_character_set_2(lookahead)) ADVANCE(877);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(885);
      if (lookahead == '\'') ADVANCE(890);
      if (lookahead == '(') ADVANCE(462);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(474);
      if (lookahead == '>') ADVANCE(475);
      if (lookahead == '@') ADVANCE(569);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(884);
      if (sym_name_character_set_2(lookahead)) ADVANCE(877);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(885);
      if (lookahead == '\'') ADVANCE(890);
      if (lookahead == '(') ADVANCE(462);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '.') ADVANCE(482);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(412);
      if (lookahead == '@') ADVANCE(569);
      if (lookahead == 'C') ADVANCE(783);
      if (lookahead == 'F') ADVANCE(626);
      if (lookahead == 'I') ADVANCE(808);
      if (lookahead == 'N') ADVANCE(787);
      if (lookahead == 'T') ADVANCE(799);
      if (lookahead == '[') ADVANCE(518);
      if (lookahead == 'g') ADVANCE(872);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(884);
      if (sym_name_character_set_2(lookahead)) ADVANCE(877);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(885);
      if (lookahead == '\'') ADVANCE(890);
      if (lookahead == '(') ADVANCE(462);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '.') ADVANCE(482);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(412);
      if (lookahead == '@') ADVANCE(569);
      if (lookahead == 'C') ADVANCE(783);
      if (lookahead == 'F') ADVANCE(626);
      if (lookahead == 'I') ADVANCE(808);
      if (lookahead == 'T') ADVANCE(799);
      if (lookahead == 'W') ADVANCE(726);
      if (lookahead == '[') ADVANCE(518);
      if (lookahead == 'g') ADVANCE(872);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(884);
      if (sym_name_character_set_2(lookahead)) ADVANCE(877);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(885);
      if (lookahead == '/') ADVANCE(887);
      if (lookahead == '<') ADVANCE(889);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(888);
      if (lookahead != 0 &&
          lookahead != '&') ADVANCE(886);
      END_STATE();
    case 28:
      if (lookahead == '\'') ADVANCE(890);
      if (lookahead == '/') ADVANCE(892);
      if (lookahead == '<') ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '&') ADVANCE(891);
      END_STATE();
    case 29:
      if (lookahead == '(') ADVANCE(462);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(474);
      if (lookahead == '>') ADVANCE(475);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == 'A') ADVANCE(771);
      if (lookahead == '_') ADVANCE(488);
      if (lookahead == '}') ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (sym_name_character_set_3(lookahead)) ADVANCE(877);
      END_STATE();
    case 30:
      if (lookahead == '(') ADVANCE(462);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(412);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == 'D') ADVANCE(735);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (sym_name_character_set_2(lookahead)) ADVANCE(877);
      END_STATE();
    case 31:
      if (lookahead == '(') ADVANCE(462);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(412);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == 'R') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (sym_name_character_set_2(lookahead)) ADVANCE(877);
      END_STATE();
    case 32:
      if (lookahead == '(') ADVANCE(462);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(412);
      if (lookahead == 'S') ADVANCE(716);
      if (lookahead == '{') ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (sym_name_character_set_2(lookahead)) ADVANCE(877);
      END_STATE();
    case 33:
      if (lookahead == ')') ADVANCE(463);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '.') ADVANCE(482);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ';') ADVANCE(477);
      if (lookahead == '<') ADVANCE(412);
      if (lookahead == '=') ADVANCE(465);
      if (lookahead == 'A') ADVANCE(299);
      if (lookahead == 'B') ADVANCE(60);
      if (lookahead == 'D') ADVANCE(62);
      if (lookahead == 'E') ADVANCE(142);
      if (lookahead == 'F') ADVANCE(237);
      if (lookahead == 'G') ADVANCE(329);
      if (lookahead == 'H') ADVANCE(147);
      if (lookahead == 'I') ADVANCE(293);
      if (lookahead == 'J') ADVANCE(342);
      if (lookahead == 'L') ADVANCE(214);
      if (lookahead == 'M') ADVANCE(63);
      if (lookahead == 'O') ADVANCE(338);
      if (lookahead == 'S') ADVANCE(192);
      if (lookahead == 'U') ADVANCE(225);
      if (lookahead == 'V') ADVANCE(175);
      if (lookahead == 'W') ADVANCE(211);
      if (lookahead == 'p') ADVANCE(437);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(491);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(907);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '/') ADVANCE(908);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(36);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(474);
      if (lookahead == '>') ADVANCE(475);
      if (lookahead == 'B') ADVANCE(781);
      if (lookahead == 'D') ADVANCE(623);
      if (lookahead == 'E') ADVANCE(687);
      if (lookahead == 'F') ADVANCE(741);
      if (lookahead == 'I') ADVANCE(769);
      if (lookahead == 'J') ADVANCE(805);
      if (lookahead == 'S') ADVANCE(824);
      if (lookahead == 'U') ADVANCE(733);
      if (lookahead == 'V') ADVANCE(710);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (sym_name_character_set_2(lookahead)) ADVANCE(877);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(420);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(418);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(415);
      END_STATE();
    case 42:
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(412);
      if (lookahead == '@') ADVANCE(569);
      if (lookahead == 'B') ADVANCE(780);
      if (lookahead == 'C') ADVANCE(621);
      if (lookahead == 'D') ADVANCE(623);
      if (lookahead == 'E') ADVANCE(687);
      if (lookahead == 'F') ADVANCE(740);
      if (lookahead == 'I') ADVANCE(717);
      if (lookahead == 'J') ADVANCE(805);
      if (lookahead == 'S') ADVANCE(824);
      if (lookahead == 'U') ADVANCE(733);
      if (lookahead == 'V') ADVANCE(710);
      if (lookahead == 'W') ADVANCE(725);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (sym_name_character_set_2(lookahead)) ADVANCE(877);
      END_STATE();
    case 43:
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(412);
      if (lookahead == 'A') ADVANCE(766);
      if (lookahead == 'B') ADVANCE(648);
      if (lookahead == 'D') ADVANCE(623);
      if (lookahead == 'E') ADVANCE(687);
      if (lookahead == 'F') ADVANCE(741);
      if (lookahead == 'G') ADVANCE(794);
      if (lookahead == 'H') ADVANCE(691);
      if (lookahead == 'I') ADVANCE(769);
      if (lookahead == 'J') ADVANCE(805);
      if (lookahead == 'L') ADVANCE(729);
      if (lookahead == 'M') ADVANCE(618);
      if (lookahead == 'O') ADVANCE(793);
      if (lookahead == 'S') ADVANCE(707);
      if (lookahead == 'U') ADVANCE(733);
      if (lookahead == 'V') ADVANCE(710);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (sym_name_character_set_4(lookahead)) ADVANCE(877);
      END_STATE();
    case 44:
      if (lookahead == '2') ADVANCE(460);
      END_STATE();
    case 45:
      if (lookahead == '<') ADVANCE(899);
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(905);
      END_STATE();
    case 47:
      if (lookahead == '=') ADVANCE(492);
      END_STATE();
    case 48:
      if (lookahead == '=') ADVANCE(904);
      END_STATE();
    case 49:
      if (lookahead == '>') ADVANCE(900);
      END_STATE();
    case 50:
      if (lookahead == '>') ADVANCE(1);
      END_STATE();
    case 51:
      if (lookahead == '@') ADVANCE(568);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(247);
      if (lookahead == 'I') ADVANCE(238);
      if (lookahead == 'L') ADVANCE(307);
      if (lookahead == 'O') ADVANCE(322);
      if (lookahead == 'R') ADVANCE(301);
      END_STATE();
    case 53:
      if (lookahead == 'A') ADVANCE(247);
      if (lookahead == 'O') ADVANCE(324);
      END_STATE();
    case 54:
      if (lookahead == 'A') ADVANCE(317);
      if (lookahead == 'I') ADVANCE(273);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(410);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(231);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(404);
      END_STATE();
    case 58:
      if (lookahead == 'A') ADVANCE(341);
      if (lookahead == 'O') ADVANCE(71);
      if (lookahead == 'R') ADVANCE(176);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(200);
      if (lookahead == 'E') ADVANCE(350);
      if (lookahead == 'I') ADVANCE(365);
      if (lookahead == 'O') ADVANCE(305);
      if (lookahead == 'R') ADVANCE(174);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(200);
      if (lookahead == 'I') ADVANCE(365);
      if (lookahead == 'O') ADVANCE(305);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(367);
      if (lookahead == 'E') ADVANCE(340);
      if (lookahead == 'I') ADVANCE(343);
      if (lookahead == 'O') ADVANCE(510);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(367);
      if (lookahead == 'O') ADVANCE(379);
      END_STATE();
    case 63:
      if (lookahead == 'A') ADVANCE(318);
      if (lookahead == 'I') ADVANCE(298);
      END_STATE();
    case 64:
      if (lookahead == 'A') ADVANCE(294);
      if (lookahead == 'E') ADVANCE(312);
      END_STATE();
    case 65:
      if (lookahead == 'A') ADVANCE(123);
      END_STATE();
    case 66:
      if (lookahead == 'A') ADVANCE(311);
      if (lookahead == 'O') ADVANCE(381);
      END_STATE();
    case 67:
      if (lookahead == 'A') ADVANCE(406);
      if (lookahead == 'I') ADVANCE(286);
      END_STATE();
    case 68:
      if (lookahead == 'A') ADVANCE(319);
      END_STATE();
    case 69:
      if (lookahead == 'A') ADVANCE(409);
      END_STATE();
    case 70:
      if (lookahead == 'A') ADVANCE(101);
      END_STATE();
    case 71:
      if (lookahead == 'A') ADVANCE(242);
      if (lookahead == 'N') ADVANCE(373);
      if (lookahead == 'U') ADVANCE(291);
      END_STATE();
    case 72:
      if (lookahead == 'A') ADVANCE(106);
      END_STATE();
    case 73:
      if (lookahead == 'A') ADVANCE(330);
      if (lookahead == 'O') ADVANCE(91);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(284);
      if (lookahead == 'O') ADVANCE(337);
      END_STATE();
    case 75:
      if (lookahead == 'A') ADVANCE(355);
      END_STATE();
    case 76:
      if (lookahead == 'A') ADVANCE(371);
      END_STATE();
    case 77:
      if (lookahead == 'A') ADVANCE(124);
      END_STATE();
    case 78:
      if (lookahead == 'A') ADVANCE(125);
      END_STATE();
    case 79:
      if (lookahead == 'A') ADVANCE(126);
      END_STATE();
    case 80:
      if (lookahead == 'A') ADVANCE(127);
      END_STATE();
    case 81:
      if (lookahead == 'A') ADVANCE(128);
      END_STATE();
    case 82:
      if (lookahead == 'A') ADVANCE(129);
      END_STATE();
    case 83:
      if (lookahead == 'A') ADVANCE(130);
      END_STATE();
    case 84:
      if (lookahead == 'A') ADVANCE(131);
      END_STATE();
    case 85:
      if (lookahead == 'A') ADVANCE(132);
      END_STATE();
    case 86:
      if (lookahead == 'A') ADVANCE(133);
      END_STATE();
    case 87:
      if (lookahead == 'A') ADVANCE(134);
      END_STATE();
    case 88:
      if (lookahead == 'A') ADVANCE(135);
      END_STATE();
    case 89:
      if (lookahead == 'A') ADVANCE(136);
      END_STATE();
    case 90:
      if (lookahead == 'A') ADVANCE(137);
      END_STATE();
    case 91:
      if (lookahead == 'B') ADVANCE(230);
      END_STATE();
    case 92:
      if (lookahead == 'B') ADVANCE(401);
      END_STATE();
    case 93:
      if (lookahead == 'B') ADVANCE(245);
      END_STATE();
    case 94:
      if (lookahead == 'B') ADVANCE(411);
      END_STATE();
    case 95:
      if (lookahead == 'C') ADVANCE(100);
      if (lookahead == 'N') ADVANCE(139);
      if (lookahead == 'R') ADVANCE(327);
      if (lookahead == 'S') ADVANCE(603);
      if (lookahead == 'V') ADVANCE(197);
      END_STATE();
    case 96:
      if (lookahead == 'C') ADVANCE(100);
      if (lookahead == 'N') ADVANCE(138);
      if (lookahead == 'S') ADVANCE(603);
      END_STATE();
    case 97:
      if (lookahead == 'C') ADVANCE(100);
      if (lookahead == 'N') ADVANCE(138);
      if (lookahead == 'S') ADVANCE(603);
      if (lookahead == 'V') ADVANCE(199);
      END_STATE();
    case 98:
      if (lookahead == 'C') ADVANCE(563);
      END_STATE();
    case 99:
      if (lookahead == 'C') ADVANCE(562);
      END_STATE();
    case 100:
      if (lookahead == 'C') ADVANCE(378);
      END_STATE();
    case 101:
      if (lookahead == 'C') ADVANCE(206);
      END_STATE();
    case 102:
      if (lookahead == 'C') ADVANCE(359);
      END_STATE();
    case 103:
      if (lookahead == 'C') ADVANCE(360);
      END_STATE();
    case 104:
      if (lookahead == 'C') ADVANCE(361);
      END_STATE();
    case 105:
      if (lookahead == 'C') ADVANCE(362);
      END_STATE();
    case 106:
      if (lookahead == 'C') ADVANCE(162);
      END_STATE();
    case 107:
      if (lookahead == 'C') ADVANCE(163);
      END_STATE();
    case 108:
      if (lookahead == 'C') ADVANCE(382);
      END_STATE();
    case 109:
      if (lookahead == 'C') ADVANCE(383);
      END_STATE();
    case 110:
      if (lookahead == 'C') ADVANCE(384);
      END_STATE();
    case 111:
      if (lookahead == 'C') ADVANCE(385);
      END_STATE();
    case 112:
      if (lookahead == 'C') ADVANCE(387);
      END_STATE();
    case 113:
      if (lookahead == 'C') ADVANCE(388);
      END_STATE();
    case 114:
      if (lookahead == 'C') ADVANCE(389);
      END_STATE();
    case 115:
      if (lookahead == 'C') ADVANCE(390);
      END_STATE();
    case 116:
      if (lookahead == 'C') ADVANCE(391);
      END_STATE();
    case 117:
      if (lookahead == 'C') ADVANCE(392);
      END_STATE();
    case 118:
      if (lookahead == 'C') ADVANCE(393);
      END_STATE();
    case 119:
      if (lookahead == 'C') ADVANCE(394);
      END_STATE();
    case 120:
      if (lookahead == 'C') ADVANCE(396);
      END_STATE();
    case 121:
      if (lookahead == 'C') ADVANCE(397);
      END_STATE();
    case 122:
      if (lookahead == 'C') ADVANCE(398);
      END_STATE();
    case 123:
      if (lookahead == 'C') ADVANCE(108);
      END_STATE();
    case 124:
      if (lookahead == 'C') ADVANCE(109);
      END_STATE();
    case 125:
      if (lookahead == 'C') ADVANCE(110);
      END_STATE();
    case 126:
      if (lookahead == 'C') ADVANCE(111);
      END_STATE();
    case 127:
      if (lookahead == 'C') ADVANCE(112);
      END_STATE();
    case 128:
      if (lookahead == 'C') ADVANCE(113);
      END_STATE();
    case 129:
      if (lookahead == 'C') ADVANCE(114);
      END_STATE();
    case 130:
      if (lookahead == 'C') ADVANCE(115);
      END_STATE();
    case 131:
      if (lookahead == 'C') ADVANCE(116);
      END_STATE();
    case 132:
      if (lookahead == 'C') ADVANCE(117);
      END_STATE();
    case 133:
      if (lookahead == 'C') ADVANCE(118);
      END_STATE();
    case 134:
      if (lookahead == 'C') ADVANCE(119);
      END_STATE();
    case 135:
      if (lookahead == 'C') ADVANCE(120);
      END_STATE();
    case 136:
      if (lookahead == 'C') ADVANCE(121);
      END_STATE();
    case 137:
      if (lookahead == 'C') ADVANCE(122);
      END_STATE();
    case 138:
      if (lookahead == 'D') ADVANCE(584);
      END_STATE();
    case 139:
      if (lookahead == 'D') ADVANCE(584);
      if (lookahead == 'Y') ADVANCE(489);
      END_STATE();
    case 140:
      if (lookahead == 'D') ADVANCE(502);
      END_STATE();
    case 141:
      if (lookahead == 'D') ADVANCE(454);
      END_STATE();
    case 142:
      if (lookahead == 'D') ADVANCE(201);
      if (lookahead == 'L') ADVANCE(344);
      if (lookahead == 'N') ADVANCE(140);
      END_STATE();
    case 143:
      if (lookahead == 'D') ADVANCE(168);
      END_STATE();
    case 144:
      if (lookahead == 'D') ADVANCE(87);
      END_STATE();
    case 145:
      if (lookahead == 'D') ADVANCE(89);
      END_STATE();
    case 146:
      if (lookahead == 'E') ADVANCE(350);
      END_STATE();
    case 147:
      if (lookahead == 'E') ADVANCE(68);
      END_STATE();
    case 148:
      if (lookahead == 'E') ADVANCE(241);
      if (lookahead == 'T') ADVANCE(178);
      if (lookahead == 'U') ADVANCE(248);
      if (lookahead == 'Y') ADVANCE(289);
      END_STATE();
    case 149:
      if (lookahead == 'E') ADVANCE(276);
      END_STATE();
    case 150:
      if (lookahead == 'E') ADVANCE(276);
      if (lookahead == 'I') ADVANCE(244);
      END_STATE();
    case 151:
      if (lookahead == 'E') ADVANCE(503);
      END_STATE();
    case 152:
      if (lookahead == 'E') ADVANCE(610);
      END_STATE();
    case 153:
      if (lookahead == 'E') ADVANCE(501);
      END_STATE();
    case 154:
      if (lookahead == 'E') ADVANCE(589);
      END_STATE();
    case 155:
      if (lookahead == 'E') ADVANCE(585);
      END_STATE();
    case 156:
      if (lookahead == 'E') ADVANCE(587);
      END_STATE();
    case 157:
      if (lookahead == 'E') ADVANCE(516);
      END_STATE();
    case 158:
      if (lookahead == 'E') ADVANCE(471);
      END_STATE();
    case 159:
      if (lookahead == 'E') ADVANCE(496);
      END_STATE();
    case 160:
      if (lookahead == 'E') ADVANCE(507);
      END_STATE();
    case 161:
      if (lookahead == 'E') ADVANCE(451);
      END_STATE();
    case 162:
      if (lookahead == 'E') ADVANCE(453);
      END_STATE();
    case 163:
      if (lookahead == 'E') ADVANCE(571);
      END_STATE();
    case 164:
      if (lookahead == 'E') ADVANCE(480);
      END_STATE();
    case 165:
      if (lookahead == 'E') ADVANCE(616);
      END_STATE();
    case 166:
      if (lookahead == 'E') ADVANCE(534);
      END_STATE();
    case 167:
      if (lookahead == 'E') ADVANCE(143);
      END_STATE();
    case 168:
      if (lookahead == 'E') ADVANCE(195);
      END_STATE();
    case 169:
      if (lookahead == 'E') ADVANCE(405);
      END_STATE();
    case 170:
      if (lookahead == 'E') ADVANCE(340);
      END_STATE();
    case 171:
      if (lookahead == 'E') ADVANCE(74);
      END_STATE();
    case 172:
      if (lookahead == 'E') ADVANCE(102);
      END_STATE();
    case 173:
      if (lookahead == 'E') ADVANCE(141);
      END_STATE();
    case 174:
      if (lookahead == 'E') ADVANCE(56);
      END_STATE();
    case 175:
      if (lookahead == 'E') ADVANCE(333);
      END_STATE();
    case 176:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 177:
      if (lookahead == 'E') ADVANCE(274);
      END_STATE();
    case 178:
      if (lookahead == 'E') ADVANCE(309);
      if (lookahead == 'R') ADVANCE(224);
      END_STATE();
    case 179:
      if (lookahead == 'E') ADVANCE(328);
      END_STATE();
    case 180:
      if (lookahead == 'E') ADVANCE(348);
      END_STATE();
    case 181:
      if (lookahead == 'E') ADVANCE(336);
      END_STATE();
    case 182:
      if (lookahead == 'E') ADVANCE(323);
      END_STATE();
    case 183:
      if (lookahead == 'E') ADVANCE(278);
      END_STATE();
    case 184:
      if (lookahead == 'E') ADVANCE(368);
      END_STATE();
    case 185:
      if (lookahead == 'E') ADVANCE(325);
      END_STATE();
    case 186:
      if (lookahead == 'E') ADVANCE(358);
      END_STATE();
    case 187:
      if (lookahead == 'E') ADVANCE(275);
      END_STATE();
    case 188:
      if (lookahead == 'E') ADVANCE(363);
      END_STATE();
    case 189:
      if (lookahead == 'E') ADVANCE(183);
      END_STATE();
    case 190:
      if (lookahead == 'E') ADVANCE(104);
      END_STATE();
    case 191:
      if (lookahead == 'E') ADVANCE(105);
      END_STATE();
    case 192:
      if (lookahead == 'E') ADVANCE(376);
      if (lookahead == 'T') ADVANCE(332);
      if (lookahead == 'U') ADVANCE(271);
      END_STATE();
    case 193:
      if (lookahead == 'F') ADVANCE(498);
      if (lookahead == 'N') ADVANCE(514);
      if (lookahead == 'S') ADVANCE(581);
      END_STATE();
    case 194:
      if (lookahead == 'F') ADVANCE(196);
      if (lookahead == 'R') ADVANCE(452);
      END_STATE();
    case 195:
      if (lookahead == 'F') ADVANCE(469);
      END_STATE();
    case 196:
      if (lookahead == 'F') ADVANCE(347);
      END_STATE();
    case 197:
      if (lookahead == 'G') ADVANCE(597);
      END_STATE();
    case 198:
      if (lookahead == 'G') ADVANCE(536);
      END_STATE();
    case 199:
      if (lookahead == 'G') ADVANCE(596);
      END_STATE();
    case 200:
      if (lookahead == 'G') ADVANCE(77);
      END_STATE();
    case 201:
      if (lookahead == 'G') ADVANCE(152);
      END_STATE();
    case 202:
      if (lookahead == 'G') ADVANCE(157);
      END_STATE();
    case 203:
      if (lookahead == 'G') ADVANCE(65);
      END_STATE();
    case 204:
      if (lookahead == 'H') ADVANCE(150);
      END_STATE();
    case 205:
      if (lookahead == 'H') ADVANCE(458);
      END_STATE();
    case 206:
      if (lookahead == 'H') ADVANCE(511);
      END_STATE();
    case 207:
      if (lookahead == 'H') ADVANCE(177);
      END_STATE();
    case 208:
      if (lookahead == 'H') ADVANCE(177);
      if (lookahead == 'R') ADVANCE(386);
      END_STATE();
    case 209:
      if (lookahead == 'H') ADVANCE(177);
      if (lookahead == 'R') ADVANCE(386);
      if (lookahead == 'U') ADVANCE(316);
      if (lookahead == 'Y') ADVANCE(313);
      END_STATE();
    case 210:
      if (lookahead == 'H') ADVANCE(149);
      END_STATE();
    case 211:
      if (lookahead == 'H') ADVANCE(187);
      END_STATE();
    case 212:
      if (lookahead == 'I') ADVANCE(234);
      END_STATE();
    case 213:
      if (lookahead == 'I') ADVANCE(233);
      END_STATE();
    case 214:
      if (lookahead == 'I') ADVANCE(268);
      END_STATE();
    case 215:
      if (lookahead == 'I') ADVANCE(232);
      END_STATE();
    case 216:
      if (lookahead == 'I') ADVANCE(92);
      END_STATE();
    case 217:
      if (lookahead == 'I') ADVANCE(270);
      END_STATE();
    case 218:
      if (lookahead == 'I') ADVANCE(296);
      END_STATE();
    case 219:
      if (lookahead == 'I') ADVANCE(295);
      if (lookahead == 'R') ADVANCE(216);
      END_STATE();
    case 220:
      if (lookahead == 'I') ADVANCE(286);
      END_STATE();
    case 221:
      if (lookahead == 'I') ADVANCE(356);
      END_STATE();
    case 222:
      if (lookahead == 'I') ADVANCE(281);
      END_STATE();
    case 223:
      if (lookahead == 'I') ADVANCE(267);
      END_STATE();
    case 224:
      if (lookahead == 'I') ADVANCE(285);
      END_STATE();
    case 225:
      if (lookahead == 'I') ADVANCE(290);
      END_STATE();
    case 226:
      if (lookahead == 'I') ADVANCE(290);
      if (lookahead == 'N') ADVANCE(227);
      END_STATE();
    case 227:
      if (lookahead == 'I') ADVANCE(308);
      END_STATE();
    case 228:
      if (lookahead == 'I') ADVANCE(292);
      END_STATE();
    case 229:
      if (lookahead == 'I') ADVANCE(346);
      END_STATE();
    case 230:
      if (lookahead == 'J') ADVANCE(191);
      END_STATE();
    case 231:
      if (lookahead == 'K') ADVANCE(478);
      END_STATE();
    case 232:
      if (lookahead == 'K') ADVANCE(154);
      END_STATE();
    case 233:
      if (lookahead == 'K') ADVANCE(154);
      if (lookahead == 'M') ADVANCE(221);
      END_STATE();
    case 234:
      if (lookahead == 'K') ADVANCE(154);
      if (lookahead == 'M') ADVANCE(221);
      if (lookahead == 'S') ADVANCE(377);
      END_STATE();
    case 235:
      if (lookahead == 'L') ADVANCE(604);
      END_STATE();
    case 236:
      if (lookahead == 'L') ADVANCE(582);
      END_STATE();
    case 237:
      if (lookahead == 'L') ADVANCE(307);
      END_STATE();
    case 238:
      if (lookahead == 'L') ADVANCE(374);
      END_STATE();
    case 239:
      if (lookahead == 'L') ADVANCE(236);
      END_STATE();
    case 240:
      if (lookahead == 'L') ADVANCE(72);
      END_STATE();
    case 241:
      if (lookahead == 'L') ADVANCE(172);
      if (lookahead == 'T') ADVANCE(80);
      END_STATE();
    case 242:
      if (lookahead == 'L') ADVANCE(180);
      END_STATE();
    case 243:
      if (lookahead == 'L') ADVANCE(158);
      END_STATE();
    case 244:
      if (lookahead == 'L') ADVANCE(160);
      END_STATE();
    case 245:
      if (lookahead == 'L') ADVANCE(166);
      END_STATE();
    case 246:
      if (lookahead == 'L') ADVANCE(344);
      if (lookahead == 'N') ADVANCE(140);
      END_STATE();
    case 247:
      if (lookahead == 'L') ADVANCE(345);
      END_STATE();
    case 248:
      if (lookahead == 'M') ADVANCE(599);
      END_STATE();
    case 249:
      if (lookahead == 'M') ADVANCE(495);
      END_STATE();
    case 250:
      if (lookahead == 'M') ADVANCE(497);
      END_STATE();
    case 251:
      if (lookahead == 'M') ADVANCE(542);
      END_STATE();
    case 252:
      if (lookahead == 'M') ADVANCE(556);
      END_STATE();
    case 253:
      if (lookahead == 'M') ADVANCE(558);
      END_STATE();
    case 254:
      if (lookahead == 'M') ADVANCE(538);
      END_STATE();
    case 255:
      if (lookahead == 'M') ADVANCE(554);
      END_STATE();
    case 256:
      if (lookahead == 'M') ADVANCE(528);
      END_STATE();
    case 257:
      if (lookahead == 'M') ADVANCE(560);
      END_STATE();
    case 258:
      if (lookahead == 'M') ADVANCE(552);
      END_STATE();
    case 259:
      if (lookahead == 'M') ADVANCE(566);
      END_STATE();
    case 260:
      if (lookahead == 'M') ADVANCE(564);
      END_STATE();
    case 261:
      if (lookahead == 'M') ADVANCE(548);
      END_STATE();
    case 262:
      if (lookahead == 'M') ADVANCE(550);
      END_STATE();
    case 263:
      if (lookahead == 'M') ADVANCE(598);
      END_STATE();
    case 264:
      if (lookahead == 'M') ADVANCE(544);
      END_STATE();
    case 265:
      if (lookahead == 'M') ADVANCE(546);
      END_STATE();
    case 266:
      if (lookahead == 'M') ADVANCE(540);
      END_STATE();
    case 267:
      if (lookahead == 'M') ADVANCE(221);
      END_STATE();
    case 268:
      if (lookahead == 'M') ADVANCE(221);
      if (lookahead == 'S') ADVANCE(377);
      END_STATE();
    case 269:
      if (lookahead == 'M') ADVANCE(315);
      END_STATE();
    case 270:
      if (lookahead == 'M') ADVANCE(165);
      END_STATE();
    case 271:
      if (lookahead == 'M') ADVANCE(81);
      END_STATE();
    case 272:
      if (lookahead == 'N') ADVANCE(514);
      if (lookahead == 'S') ADVANCE(580);
      END_STATE();
    case 273:
      if (lookahead == 'N') ADVANCE(595);
      END_STATE();
    case 274:
      if (lookahead == 'N') ADVANCE(500);
      END_STATE();
    case 275:
      if (lookahead == 'N') ADVANCE(505);
      END_STATE();
    case 276:
      if (lookahead == 'N') ADVANCE(505);
      if (lookahead == 'R') ADVANCE(159);
      END_STATE();
    case 277:
      if (lookahead == 'N') ADVANCE(484);
      END_STATE();
    case 278:
      if (lookahead == 'N') ADVANCE(583);
      END_STATE();
    case 279:
      if (lookahead == 'N') ADVANCE(513);
      END_STATE();
    case 280:
      if (lookahead == 'N') ADVANCE(513);
      if (lookahead == 'S') ADVANCE(580);
      END_STATE();
    case 281:
      if (lookahead == 'N') ADVANCE(594);
      END_STATE();
    case 282:
      if (lookahead == 'N') ADVANCE(73);
      END_STATE();
    case 283:
      if (lookahead == 'N') ADVANCE(227);
      END_STATE();
    case 284:
      if (lookahead == 'N') ADVANCE(144);
      END_STATE();
    case 285:
      if (lookahead == 'N') ADVANCE(198);
      END_STATE();
    case 286:
      if (lookahead == 'N') ADVANCE(380);
      END_STATE();
    case 287:
      if (lookahead == 'N') ADVANCE(138);
      END_STATE();
    case 288:
      if (lookahead == 'N') ADVANCE(138);
      if (lookahead == 'S') ADVANCE(99);
      END_STATE();
    case 289:
      if (lookahead == 'N') ADVANCE(369);
      END_STATE();
    case 290:
      if (lookahead == 'N') ADVANCE(353);
      END_STATE();
    case 291:
      if (lookahead == 'N') ADVANCE(354);
      END_STATE();
    case 292:
      if (lookahead == 'N') ADVANCE(357);
      END_STATE();
    case 293:
      if (lookahead == 'N') ADVANCE(364);
      END_STATE();
    case 294:
      if (lookahead == 'N') ADVANCE(202);
      END_STATE();
    case 295:
      if (lookahead == 'N') ADVANCE(103);
      END_STATE();
    case 296:
      if (lookahead == 'N') ADVANCE(399);
      END_STATE();
    case 297:
      if (lookahead == 'N') ADVANCE(375);
      END_STATE();
    case 298:
      if (lookahead == 'N') ADVANCE(90);
      END_STATE();
    case 299:
      if (lookahead == 'N') ADVANCE(145);
      if (lookahead == 'R') ADVANCE(327);
      if (lookahead == 'V') ADVANCE(203);
      END_STATE();
    case 300:
      if (lookahead == 'O') ADVANCE(510);
      END_STATE();
    case 301:
      if (lookahead == 'O') ADVANCE(249);
      END_STATE();
    case 302:
      if (lookahead == 'O') ADVANCE(381);
      END_STATE();
    case 303:
      if (lookahead == 'O') ADVANCE(351);
      END_STATE();
    case 304:
      if (lookahead == 'O') ADVANCE(351);
      if (lookahead == 'U') ADVANCE(239);
      END_STATE();
    case 305:
      if (lookahead == 'O') ADVANCE(235);
      END_STATE();
    case 306:
      if (lookahead == 'O') ADVANCE(282);
      END_STATE();
    case 307:
      if (lookahead == 'O') ADVANCE(75);
      END_STATE();
    case 308:
      if (lookahead == 'O') ADVANCE(277);
      END_STATE();
    case 309:
      if (lookahead == 'P') ADVANCE(520);
      END_STATE();
    case 310:
      if (lookahead == 'P') ADVANCE(94);
      END_STATE();
    case 311:
      if (lookahead == 'P') ADVANCE(205);
      END_STATE();
    case 312:
      if (lookahead == 'P') ADVANCE(240);
      END_STATE();
    case 313:
      if (lookahead == 'P') ADVANCE(167);
      END_STATE();
    case 314:
      if (lookahead == 'P') ADVANCE(335);
      if (lookahead == 'S') ADVANCE(190);
      END_STATE();
    case 315:
      if (lookahead == 'P') ADVANCE(366);
      END_STATE();
    case 316:
      if (lookahead == 'P') ADVANCE(243);
      END_STATE();
    case 317:
      if (lookahead == 'P') ADVANCE(78);
      if (lookahead == 'X') ADVANCE(593);
      END_STATE();
    case 318:
      if (lookahead == 'P') ADVANCE(78);
      if (lookahead == 'X') ADVANCE(79);
      END_STATE();
    case 319:
      if (lookahead == 'P') ADVANCE(82);
      END_STATE();
    case 320:
      if (lookahead == 'R') ADVANCE(66);
      END_STATE();
    case 321:
      if (lookahead == 'R') ADVANCE(452);
      END_STATE();
    case 322:
      if (lookahead == 'R') ADVANCE(457);
      END_STATE();
    case 323:
      if (lookahead == 'R') ADVANCE(570);
      END_STATE();
    case 324:
      if (lookahead == 'R') ADVANCE(456);
      END_STATE();
    case 325:
      if (lookahead == 'R') ADVANCE(314);
      END_STATE();
    case 326:
      if (lookahead == 'R') ADVANCE(228);
      END_STATE();
    case 327:
      if (lookahead == 'R') ADVANCE(55);
      END_STATE();
    case 328:
      if (lookahead == 'R') ADVANCE(407);
      END_STATE();
    case 329:
      if (lookahead == 'R') ADVANCE(302);
      END_STATE();
    case 330:
      if (lookahead == 'R') ADVANCE(331);
      END_STATE();
    case 331:
      if (lookahead == 'R') ADVANCE(69);
      END_STATE();
    case 332:
      if (lookahead == 'R') ADVANCE(224);
      END_STATE();
    case 333:
      if (lookahead == 'R') ADVANCE(370);
      END_STATE();
    case 334:
      if (lookahead == 'R') ADVANCE(176);
      END_STATE();
    case 335:
      if (lookahead == 'R') ADVANCE(188);
      END_STATE();
    case 336:
      if (lookahead == 'R') ADVANCE(349);
      END_STATE();
    case 337:
      if (lookahead == 'R') ADVANCE(86);
      END_STATE();
    case 338:
      if (lookahead == 'R') ADVANCE(88);
      END_STATE();
    case 339:
      if (lookahead == 'S') ADVANCE(486);
      END_STATE();
    case 340:
      if (lookahead == 'S') ADVANCE(98);
      END_STATE();
    case 341:
      if (lookahead == 'S') ADVANCE(151);
      END_STATE();
    case 342:
      if (lookahead == 'S') ADVANCE(306);
      END_STATE();
    case 343:
      if (lookahead == 'S') ADVANCE(352);
      END_STATE();
    case 344:
      if (lookahead == 'S') ADVANCE(153);
      END_STATE();
    case 345:
      if (lookahead == 'S') ADVANCE(156);
      END_STATE();
    case 346:
      if (lookahead == 'S') ADVANCE(171);
      END_STATE();
    case 347:
      if (lookahead == 'S') ADVANCE(186);
      END_STATE();
    case 348:
      if (lookahead == 'S') ADVANCE(107);
      END_STATE();
    case 349:
      if (lookahead == 'S') ADVANCE(190);
      END_STATE();
    case 350:
      if (lookahead == 'T') ADVANCE(403);
      END_STATE();
    case 351:
      if (lookahead == 'T') ADVANCE(578);
      END_STATE();
    case 352:
      if (lookahead == 'T') ADVANCE(219);
      END_STATE();
    case 353:
      if (lookahead == 'T') ADVANCE(606);
      END_STATE();
    case 354:
      if (lookahead == 'T') ADVANCE(590);
      END_STATE();
    case 355:
      if (lookahead == 'T') ADVANCE(532);
      END_STATE();
    case 356:
      if (lookahead == 'T') ADVANCE(509);
      END_STATE();
    case 357:
      if (lookahead == 'T') ADVANCE(600);
      END_STATE();
    case 358:
      if (lookahead == 'T') ADVANCE(522);
      END_STATE();
    case 359:
      if (lookahead == 'T') ADVANCE(493);
      END_STATE();
    case 360:
      if (lookahead == 'T') ADVANCE(573);
      END_STATE();
    case 361:
      if (lookahead == 'T') ADVANCE(485);
      END_STATE();
    case 362:
      if (lookahead == 'T') ADVANCE(612);
      END_STATE();
    case 363:
      if (lookahead == 'T') ADVANCE(461);
      END_STATE();
    case 364:
      if (lookahead == 'T') ADVANCE(530);
      END_STATE();
    case 365:
      if (lookahead == 'T') ADVANCE(402);
      END_STATE();
    case 366:
      if (lookahead == 'T') ADVANCE(408);
      END_STATE();
    case 367:
      if (lookahead == 'T') ADVANCE(184);
      END_STATE();
    case 368:
      if (lookahead == 'T') ADVANCE(217);
      END_STATE();
    case 369:
      if (lookahead == 'T') ADVANCE(57);
      END_STATE();
    case 370:
      if (lookahead == 'T') ADVANCE(169);
      END_STATE();
    case 371:
      if (lookahead == 'T') ADVANCE(161);
      END_STATE();
    case 372:
      if (lookahead == 'T') ADVANCE(173);
      END_STATE();
    case 373:
      if (lookahead == 'T') ADVANCE(218);
      END_STATE();
    case 374:
      if (lookahead == 'T') ADVANCE(182);
      END_STATE();
    case 375:
      if (lookahead == 'T') ADVANCE(185);
      END_STATE();
    case 376:
      if (lookahead == 'T') ADVANCE(80);
      END_STATE();
    case 377:
      if (lookahead == 'T') ADVANCE(83);
      END_STATE();
    case 378:
      if (lookahead == 'U') ADVANCE(250);
      END_STATE();
    case 379:
      if (lookahead == 'U') ADVANCE(93);
      END_STATE();
    case 380:
      if (lookahead == 'U') ADVANCE(339);
      END_STATE();
    case 381:
      if (lookahead == 'U') ADVANCE(310);
      END_STATE();
    case 382:
      if (lookahead == 'U') ADVANCE(251);
      END_STATE();
    case 383:
      if (lookahead == 'U') ADVANCE(252);
      END_STATE();
    case 384:
      if (lookahead == 'U') ADVANCE(253);
      END_STATE();
    case 385:
      if (lookahead == 'U') ADVANCE(254);
      END_STATE();
    case 386:
      if (lookahead == 'U') ADVANCE(155);
      END_STATE();
    case 387:
      if (lookahead == 'U') ADVANCE(255);
      END_STATE();
    case 388:
      if (lookahead == 'U') ADVANCE(256);
      END_STATE();
    case 389:
      if (lookahead == 'U') ADVANCE(257);
      END_STATE();
    case 390:
      if (lookahead == 'U') ADVANCE(258);
      END_STATE();
    case 391:
      if (lookahead == 'U') ADVANCE(259);
      END_STATE();
    case 392:
      if (lookahead == 'U') ADVANCE(260);
      END_STATE();
    case 393:
      if (lookahead == 'U') ADVANCE(261);
      END_STATE();
    case 394:
      if (lookahead == 'U') ADVANCE(262);
      END_STATE();
    case 395:
      if (lookahead == 'U') ADVANCE(263);
      END_STATE();
    case 396:
      if (lookahead == 'U') ADVANCE(264);
      END_STATE();
    case 397:
      if (lookahead == 'U') ADVANCE(265);
      END_STATE();
    case 398:
      if (lookahead == 'U') ADVANCE(266);
      END_STATE();
    case 399:
      if (lookahead == 'U') ADVANCE(164);
      END_STATE();
    case 400:
      if (lookahead == 'U') ADVANCE(179);
      END_STATE();
    case 401:
      if (lookahead == 'U') ADVANCE(372);
      END_STATE();
    case 402:
      if (lookahead == 'W') ADVANCE(229);
      END_STATE();
    case 403:
      if (lookahead == 'W') ADVANCE(189);
      END_STATE();
    case 404:
      if (lookahead == 'X') ADVANCE(459);
      END_STATE();
    case 405:
      if (lookahead == 'X') ADVANCE(608);
      END_STATE();
    case 406:
      if (lookahead == 'X') ADVANCE(592);
      END_STATE();
    case 407:
      if (lookahead == 'Y') ADVANCE(455);
      END_STATE();
    case 408:
      if (lookahead == 'Y') ADVANCE(575);
      END_STATE();
    case 409:
      if (lookahead == 'Y') ADVANCE(614);
      END_STATE();
    case 410:
      if (lookahead == 'Y') ADVANCE(84);
      END_STATE();
    case 411:
      if (lookahead == 'Y') ADVANCE(85);
      END_STATE();
    case 412:
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 413:
      if (lookahead == '_') ADVANCE(423);
      END_STATE();
    case 414:
      if (lookahead == '_') ADVANCE(425);
      END_STATE();
    case 415:
      if (lookahead == '_') ADVANCE(50);
      END_STATE();
    case 416:
      if (lookahead == '_') ADVANCE(432);
      END_STATE();
    case 417:
      if (lookahead == '_') ADVANCE(431);
      END_STATE();
    case 418:
      if (lookahead == '_') ADVANCE(41);
      END_STATE();
    case 419:
      if (lookahead == 'a') ADVANCE(447);
      END_STATE();
    case 420:
      if (lookahead == 'a') ADVANCE(424);
      END_STATE();
    case 421:
      if (lookahead == 'a') ADVANCE(448);
      if (lookahead == 'i') ADVANCE(433);
      END_STATE();
    case 422:
      if (lookahead == 'c') ADVANCE(445);
      END_STATE();
    case 423:
      if (lookahead == 'c') ADVANCE(441);
      END_STATE();
    case 424:
      if (lookahead == 'c') ADVANCE(422);
      END_STATE();
    case 425:
      if (lookahead == 'i') ADVANCE(434);
      if (lookahead == 'u') ADVANCE(426);
      END_STATE();
    case 426:
      if (lookahead == 'i') ADVANCE(435);
      END_STATE();
    case 427:
      if (lookahead == 'l') ADVANCE(527);
      END_STATE();
    case 428:
      if (lookahead == 'l') ADVANCE(427);
      END_STATE();
    case 429:
      if (lookahead == 'l') ADVANCE(414);
      END_STATE();
    case 430:
      if (lookahead == 'm') ADVANCE(521);
      END_STATE();
    case 431:
      if (lookahead == 'm') ADVANCE(421);
      END_STATE();
    case 432:
      if (lookahead == 'm') ADVANCE(419);
      END_STATE();
    case 433:
      if (lookahead == 'n') ADVANCE(882);
      END_STATE();
    case 434:
      if (lookahead == 'n') ADVANCE(443);
      END_STATE();
    case 435:
      if (lookahead == 'n') ADVANCE(444);
      END_STATE();
    case 436:
      if (lookahead == 'o') ADVANCE(413);
      END_STATE();
    case 437:
      if (lookahead == 'o') ADVANCE(440);
      END_STATE();
    case 438:
      if (lookahead == 'q') ADVANCE(429);
      END_STATE();
    case 439:
      if (lookahead == 's') ADVANCE(438);
      END_STATE();
    case 440:
      if (lookahead == 's') ADVANCE(442);
      END_STATE();
    case 441:
      if (lookahead == 's') ADVANCE(446);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(416);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 445:
      if (lookahead == 'u') ADVANCE(430);
      END_STATE();
    case 446:
      if (lookahead == 'v') ADVANCE(602);
      END_STATE();
    case 447:
      if (lookahead == 'x') ADVANCE(880);
      END_STATE();
    case 448:
      if (lookahead == 'x') ADVANCE(878);
      END_STATE();
    case 449:
      if (eof) ADVANCE(450);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(885);
      if (lookahead == '%') ADVANCE(896);
      if (lookahead == '&') ADVANCE(901);
      if (lookahead == '\'') ADVANCE(890);
      if (lookahead == '(') ADVANCE(462);
      if (lookahead == ')') ADVANCE(463);
      if (lookahead == '*') ADVANCE(526);
      if (lookahead == '+') ADVANCE(897);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '.') ADVANCE(482);
      if (lookahead == '/') ADVANCE(895);
      if (lookahead == ':') ADVANCE(515);
      if (lookahead == ';') ADVANCE(477);
      if (lookahead == '<') ADVANCE(473);
      if (lookahead == '=') ADVANCE(465);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == 'C') ADVANCE(334);
      if (lookahead == 'D') ADVANCE(300);
      if (lookahead == 'E') ADVANCE(246);
      if (lookahead == 'F') ADVANCE(53);
      if (lookahead == 'I') ADVANCE(297);
      if (lookahead == 'L') ADVANCE(223);
      if (lookahead == 'M') ADVANCE(67);
      if (lookahead == 'O') ADVANCE(194);
      if (lookahead == 'S') ADVANCE(395);
      if (lookahead == 'T') ADVANCE(208);
      if (lookahead == 'U') ADVANCE(283);
      if (lookahead == 'W') ADVANCE(210);
      if (lookahead == '[') ADVANCE(518);
      if (lookahead == ']') ADVANCE(519);
      if (lookahead == 'g') ADVANCE(439);
      if (lookahead == 'p') ADVANCE(437);
      if (lookahead == 't') ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(449)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(884);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_CREATE);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_REPLACE);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_DISTRIBUTED);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_QUERY);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == 'E') ADVANCE(70);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_GRAPH);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_SYNTAX);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_v2);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_INTERPRET);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(904);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_TYPEDEF);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_TYPEDEF);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_TUPLE);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(899);
      if (lookahead == '=') ADVANCE(902);
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(899);
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(903);
      if (lookahead == '>') ADVANCE(900);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_BREAK);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_BREAK);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_CONTINUE);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_CONTINUE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(491);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_UNION);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_INTERSECT);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_MINUS);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym__);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_ANY);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_ANY);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_SELECT);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_SELECT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_WHERE);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_ACCUM);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_IF);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_THEN);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_CASE);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_CASE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_WHEN);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_WHEN);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_WHILE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_LIMIT);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_DO);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_FOREACH);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_FOREACH);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == 'T') ADVANCE(181);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_RANGE);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_RANGE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_STEP);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_post_DASHaccum);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_OFFSET);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(577);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_SUMACCUM);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_SUMACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_INT);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_INT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_DOUBLE);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_DOUBLE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_STRING);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_STRING);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_MAXACCUM);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_MAXACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_MINACCUM);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_MINACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_AVGACCUM);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_AVGACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_ORACCUM);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_ORACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_ANDACCUM);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_ANDACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_BITWISEORACCUM);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_BITWISEORACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_BITWISEANDACCUM);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_BITWISEANDACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_LISTACCUM);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_LISTACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_SETACCUM);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_SETACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_BAGACCUM);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_BAGACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_MAPACCUM);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_MAPACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_HEAPACCUM);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_HEAPACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_ASC);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_DESC);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_GROUPBYACCUM);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_GROUPBYACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_ARRAYACCUM);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_ARRAYACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(568);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_FILTER);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_COALESCE);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_COALESCE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_DISTINCT);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_DISTINCT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_ISEMPTY);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_ISEMPTY);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_NOT);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_NOT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_IS);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_IS);
      if (lookahead == 'E') ADVANCE(269);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_BETWEEN);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_LIKE);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_COUNT);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_COUNT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_MAX);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_MAX);
      if (lookahead == 'A') ADVANCE(126);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_MIN);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_MIN);
      if (lookahead == 'U') ADVANCE(339);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_AVG);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_AVG);
      if (lookahead == 'A') ADVANCE(123);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_SUM);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_SUM);
      if (lookahead == 'A') ADVANCE(128);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_PRINT);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_PRINT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
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
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_UINT);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_UINT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_VERTEX);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_VERTEX);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_EDGE);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_EDGE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_JSONOBJECT);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_JSONOBJECT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_JSONARRAY);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_JSONARRAY);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_DATETIME);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_DATETIME);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(791);
      if (lookahead == 'I') ADVANCE(778);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(653);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(738);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(804);
      if (lookahead == 'O') ADVANCE(772);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(856);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(822);
      if (lookahead == 'O') ADVANCE(831);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(792);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(853);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(746);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(652);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(779);
      if (lookahead == 'O') ADVANCE(803);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(801);
      if (lookahead == 'O') ADVANCE(649);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(815);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(776);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(744);
      if (lookahead == 'U') ADVANCE(775);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(673);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(674);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(675);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(676);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(677);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(678);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(679);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(680);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(681);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(682);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(683);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(684);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(685);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(686);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(723);
      if (lookahead == 'I') ADVANCE(812);
      if (lookahead == 'O') ADVANCE(782);
      if (lookahead == 'R') ADVANCE(708);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(723);
      if (lookahead == 'I') ADVANCE(812);
      if (lookahead == 'O') ADVANCE(782);
      if (sym_name_character_set_6(lookahead)) ADVANCE(877);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B') ADVANCE(737);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B') ADVANCE(743);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B') ADVANCE(857);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(724);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(654);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(832);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(817);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(820);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(821);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(702);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(834);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(835);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(836);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(837);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(838);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(839);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(840);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(841);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(843);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(844);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(845);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(846);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(848);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(849);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(659);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(660);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(661);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(662);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(663);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(664);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(665);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(666);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(667);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(668);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(669);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(670);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(671);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(672);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D') ADVANCE(720);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D') ADVANCE(697);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D') ADVANCE(633);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D') ADVANCE(646);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(624);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(504);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(611);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(851);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(508);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(535);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(718);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(481);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(617);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(586);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(588);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(572);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(517);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(688);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(628);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(806);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(829);
      if (lookahead == 'T') ADVANCE(796);
      if (lookahead == 'U') ADVANCE(764);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(620);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(655);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(798);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(627);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(825);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(765);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(762);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(656);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(745);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'F') ADVANCE(499);
      if (lookahead == 'N') ADVANCE(813);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'F') ADVANCE(470);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(537);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(693);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(703);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(634);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(635);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(512);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(728);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(713);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(763);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(742);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(811);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(768);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(770);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(777);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(773);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(807);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(810);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(774);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'J') ADVANCE(709);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'K') ADVANCE(479);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(605);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(786);
      if (lookahead == 'O') ADVANCE(800);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(786);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(695);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(696);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(706);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(715);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(809);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(545);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(547);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(543);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(557);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(559);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(539);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(541);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(555);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(529);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(561);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(553);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(567);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(565);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(549);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(551);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(790);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(699);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(640);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(506);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(689);
      if (lookahead == 'R') ADVANCE(795);
      if (lookahead == 'V') ADVANCE(722);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(629);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(719);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(813);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(842);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(855);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(827);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(814);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(816);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(819);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(721);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(657);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(638);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(690);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(782);
      if (lookahead == 'R') ADVANCE(708);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(782);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(739);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(632);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(833);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(767);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(630);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(818);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(651);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(704);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(823);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(636);
      if (lookahead == 'X') ADVANCE(637);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(641);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(619);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(784);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(622);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(730);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(625);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(826);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(847);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(711);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(797);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(736);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(645);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(692);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(785);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(658);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(705);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(714);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(701);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(828);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(830);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(850);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(531);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(607);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(533);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(601);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(613);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(579);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(591);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(494);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(574);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(712);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(854);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(796);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(727);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(694);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(731);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(732);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(639);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(642);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(650);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(747);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(788);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(748);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(749);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(750);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(751);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(752);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(753);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(754);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(755);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(698);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(756);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(757);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(758);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(759);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(700);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(760);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(761);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'W') ADVANCE(734);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'X') ADVANCE(609);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(789);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(615);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(576);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(490);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(643);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(644);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(863);
      if (sym_name_character_set_7(lookahead)) ADVANCE(877);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(866);
      if (sym_name_character_set_7(lookahead)) ADVANCE(877);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(867);
      if (sym_name_character_set_7(lookahead)) ADVANCE(877);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(875);
      if (sym_name_character_set_8(lookahead)) ADVANCE(877);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(876);
      if (lookahead == 'i') ADVANCE(869);
      if (sym_name_character_set_8(lookahead)) ADVANCE(877);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(868);
      if (lookahead == 'u') ADVANCE(864);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(870);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(858);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(861);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(862);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(873);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(883);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(874);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'q') ADVANCE(865);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(871);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(859);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(860);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'x') ADVANCE(881);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'x') ADVANCE(879);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_gsql_uint_max);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_gsql_uint_max);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_gsql_int_max);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_gsql_int_max);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_gsql_uint_min);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_gsql_uint_min);
      if (sym_name_character_set_5(lookahead)) ADVANCE(877);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_digit);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(907);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(887);
      if (lookahead == '<') ADVANCE(889);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(888);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '&') ADVANCE(886);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(907);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '/') ADVANCE(892);
      if (lookahead == '<') ADVANCE(894);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '\'') ADVANCE(891);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(907);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(492);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(907);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 449},
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
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 16},
  [51] = {.lex_state = 16},
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
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 42},
  [74] = {.lex_state = 42},
  [75] = {.lex_state = 42},
  [76] = {.lex_state = 42},
  [77] = {.lex_state = 42},
  [78] = {.lex_state = 42},
  [79] = {.lex_state = 42},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 42},
  [82] = {.lex_state = 42},
  [83] = {.lex_state = 42},
  [84] = {.lex_state = 42},
  [85] = {.lex_state = 42},
  [86] = {.lex_state = 42},
  [87] = {.lex_state = 42},
  [88] = {.lex_state = 42},
  [89] = {.lex_state = 449},
  [90] = {.lex_state = 25},
  [91] = {.lex_state = 25},
  [92] = {.lex_state = 25},
  [93] = {.lex_state = 23},
  [94] = {.lex_state = 25},
  [95] = {.lex_state = 25},
  [96] = {.lex_state = 25},
  [97] = {.lex_state = 25},
  [98] = {.lex_state = 25},
  [99] = {.lex_state = 26},
  [100] = {.lex_state = 23},
  [101] = {.lex_state = 23},
  [102] = {.lex_state = 23},
  [103] = {.lex_state = 25},
  [104] = {.lex_state = 23},
  [105] = {.lex_state = 23},
  [106] = {.lex_state = 25},
  [107] = {.lex_state = 23},
  [108] = {.lex_state = 25},
  [109] = {.lex_state = 23},
  [110] = {.lex_state = 25},
  [111] = {.lex_state = 25},
  [112] = {.lex_state = 23},
  [113] = {.lex_state = 25},
  [114] = {.lex_state = 25},
  [115] = {.lex_state = 23},
  [116] = {.lex_state = 23},
  [117] = {.lex_state = 23},
  [118] = {.lex_state = 23},
  [119] = {.lex_state = 23},
  [120] = {.lex_state = 25},
  [121] = {.lex_state = 25},
  [122] = {.lex_state = 26},
  [123] = {.lex_state = 25},
  [124] = {.lex_state = 23},
  [125] = {.lex_state = 25},
  [126] = {.lex_state = 23},
  [127] = {.lex_state = 25},
  [128] = {.lex_state = 23},
  [129] = {.lex_state = 25},
  [130] = {.lex_state = 23},
  [131] = {.lex_state = 23},
  [132] = {.lex_state = 23},
  [133] = {.lex_state = 23},
  [134] = {.lex_state = 23},
  [135] = {.lex_state = 23},
  [136] = {.lex_state = 16},
  [137] = {.lex_state = 23},
  [138] = {.lex_state = 23},
  [139] = {.lex_state = 23},
  [140] = {.lex_state = 23},
  [141] = {.lex_state = 23},
  [142] = {.lex_state = 23},
  [143] = {.lex_state = 23},
  [144] = {.lex_state = 23},
  [145] = {.lex_state = 23},
  [146] = {.lex_state = 18},
  [147] = {.lex_state = 23},
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
  [162] = {.lex_state = 18},
  [163] = {.lex_state = 23},
  [164] = {.lex_state = 23},
  [165] = {.lex_state = 16},
  [166] = {.lex_state = 23},
  [167] = {.lex_state = 23},
  [168] = {.lex_state = 23},
  [169] = {.lex_state = 23},
  [170] = {.lex_state = 23},
  [171] = {.lex_state = 23},
  [172] = {.lex_state = 23},
  [173] = {.lex_state = 23},
  [174] = {.lex_state = 23},
  [175] = {.lex_state = 23},
  [176] = {.lex_state = 16},
  [177] = {.lex_state = 18},
  [178] = {.lex_state = 43},
  [179] = {.lex_state = 16},
  [180] = {.lex_state = 18},
  [181] = {.lex_state = 18},
  [182] = {.lex_state = 18},
  [183] = {.lex_state = 18},
  [184] = {.lex_state = 18},
  [185] = {.lex_state = 43},
  [186] = {.lex_state = 18},
  [187] = {.lex_state = 18},
  [188] = {.lex_state = 18},
  [189] = {.lex_state = 18},
  [190] = {.lex_state = 449},
  [191] = {.lex_state = 18},
  [192] = {.lex_state = 43},
  [193] = {.lex_state = 18},
  [194] = {.lex_state = 18},
  [195] = {.lex_state = 449},
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
  [208] = {.lex_state = 20},
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
  [238] = {.lex_state = 449},
  [239] = {.lex_state = 449},
  [240] = {.lex_state = 449},
  [241] = {.lex_state = 18},
  [242] = {.lex_state = 23},
  [243] = {.lex_state = 23},
  [244] = {.lex_state = 449},
  [245] = {.lex_state = 38},
  [246] = {.lex_state = 449},
  [247] = {.lex_state = 449},
  [248] = {.lex_state = 449},
  [249] = {.lex_state = 33},
  [250] = {.lex_state = 33},
  [251] = {.lex_state = 449},
  [252] = {.lex_state = 33},
  [253] = {.lex_state = 38},
  [254] = {.lex_state = 449},
  [255] = {.lex_state = 38},
  [256] = {.lex_state = 449},
  [257] = {.lex_state = 449},
  [258] = {.lex_state = 33},
  [259] = {.lex_state = 449},
  [260] = {.lex_state = 449},
  [261] = {.lex_state = 449},
  [262] = {.lex_state = 38},
  [263] = {.lex_state = 38},
  [264] = {.lex_state = 38},
  [265] = {.lex_state = 38},
  [266] = {.lex_state = 38},
  [267] = {.lex_state = 33},
  [268] = {.lex_state = 449},
  [269] = {.lex_state = 38},
  [270] = {.lex_state = 449},
  [271] = {.lex_state = 33},
  [272] = {.lex_state = 29},
  [273] = {.lex_state = 33},
  [274] = {.lex_state = 38},
  [275] = {.lex_state = 33},
  [276] = {.lex_state = 38},
  [277] = {.lex_state = 38},
  [278] = {.lex_state = 38},
  [279] = {.lex_state = 8},
  [280] = {.lex_state = 38},
  [281] = {.lex_state = 38},
  [282] = {.lex_state = 8},
  [283] = {.lex_state = 33},
  [284] = {.lex_state = 38},
  [285] = {.lex_state = 449},
  [286] = {.lex_state = 449},
  [287] = {.lex_state = 8},
  [288] = {.lex_state = 33},
  [289] = {.lex_state = 449},
  [290] = {.lex_state = 449},
  [291] = {.lex_state = 8},
  [292] = {.lex_state = 33},
  [293] = {.lex_state = 8},
  [294] = {.lex_state = 33},
  [295] = {.lex_state = 33},
  [296] = {.lex_state = 449},
  [297] = {.lex_state = 33},
  [298] = {.lex_state = 33},
  [299] = {.lex_state = 449},
  [300] = {.lex_state = 29},
  [301] = {.lex_state = 449},
  [302] = {.lex_state = 449},
  [303] = {.lex_state = 29},
  [304] = {.lex_state = 22},
  [305] = {.lex_state = 29},
  [306] = {.lex_state = 449},
  [307] = {.lex_state = 29},
  [308] = {.lex_state = 33},
  [309] = {.lex_state = 449},
  [310] = {.lex_state = 449},
  [311] = {.lex_state = 449},
  [312] = {.lex_state = 449},
  [313] = {.lex_state = 449},
  [314] = {.lex_state = 449},
  [315] = {.lex_state = 449},
  [316] = {.lex_state = 449},
  [317] = {.lex_state = 29},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 449},
  [321] = {.lex_state = 29},
  [322] = {.lex_state = 29},
  [323] = {.lex_state = 33},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 29},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 32},
  [329] = {.lex_state = 449},
  [330] = {.lex_state = 29},
  [331] = {.lex_state = 449},
  [332] = {.lex_state = 449},
  [333] = {.lex_state = 449},
  [334] = {.lex_state = 449},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 449},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 449},
  [339] = {.lex_state = 449},
  [340] = {.lex_state = 449},
  [341] = {.lex_state = 449},
  [342] = {.lex_state = 449},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 449},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 449},
  [347] = {.lex_state = 449},
  [348] = {.lex_state = 449},
  [349] = {.lex_state = 449},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 29},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 24},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 29},
  [362] = {.lex_state = 30},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 449},
  [367] = {.lex_state = 449},
  [368] = {.lex_state = 31},
  [369] = {.lex_state = 30},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 449},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 449},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 24},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 29},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 24},
  [381] = {.lex_state = 24},
  [382] = {.lex_state = 24},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 24},
  [385] = {.lex_state = 22},
  [386] = {.lex_state = 24},
  [387] = {.lex_state = 24},
  [388] = {.lex_state = 24},
  [389] = {.lex_state = 24},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 24},
  [394] = {.lex_state = 449},
  [395] = {.lex_state = 24},
  [396] = {.lex_state = 24},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 24},
  [399] = {.lex_state = 449},
  [400] = {.lex_state = 449},
  [401] = {.lex_state = 449},
  [402] = {.lex_state = 24},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 10},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 449},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 24},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 10},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 10},
  [419] = {.lex_state = 24},
  [420] = {.lex_state = 10},
  [421] = {.lex_state = 10},
  [422] = {.lex_state = 10},
  [423] = {.lex_state = 449},
  [424] = {.lex_state = 449},
  [425] = {.lex_state = 449},
  [426] = {.lex_state = 10},
  [427] = {.lex_state = 24},
  [428] = {.lex_state = 449},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 33},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 449},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 24},
  [436] = {.lex_state = 24},
  [437] = {.lex_state = 24},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 449},
  [443] = {.lex_state = 449},
  [444] = {.lex_state = 449},
  [445] = {.lex_state = 24},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 24},
  [450] = {.lex_state = 449},
  [451] = {.lex_state = 449},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 24},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 449},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 10},
  [459] = {.lex_state = 24},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 24},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 24},
  [464] = {.lex_state = 24},
  [465] = {.lex_state = 24},
  [466] = {.lex_state = 449},
  [467] = {.lex_state = 449},
  [468] = {.lex_state = 24},
  [469] = {.lex_state = 24},
  [470] = {.lex_state = 449},
  [471] = {.lex_state = 449},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 449},
  [476] = {.lex_state = 10},
  [477] = {.lex_state = 449},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 10},
  [482] = {.lex_state = 10},
  [483] = {.lex_state = 24},
  [484] = {.lex_state = 10},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 24},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 28},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 27},
  [503] = {.lex_state = 24},
  [504] = {.lex_state = 449},
  [505] = {.lex_state = 24},
  [506] = {.lex_state = 28},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 27},
  [509] = {.lex_state = 27},
  [510] = {.lex_state = 449},
  [511] = {.lex_state = 28},
  [512] = {.lex_state = 449},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 10},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 24},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 449},
  [524] = {.lex_state = 10},
  [525] = {.lex_state = 449},
  [526] = {.lex_state = 449},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 10},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 449},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 449},
  [535] = {.lex_state = 24},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 449},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 449},
  [548] = {.lex_state = 449},
  [549] = {.lex_state = 24},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 27},
  [552] = {.lex_state = 10},
  [553] = {.lex_state = 28},
  [554] = {.lex_state = 449},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 449},
  [558] = {.lex_state = 33},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 24},
  [561] = {.lex_state = 10},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 449},
  [565] = {.lex_state = 449},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 449},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 449},
  [570] = {.lex_state = 449},
  [571] = {.lex_state = 10},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 449},
  [574] = {.lex_state = 8},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 10},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 24},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 27},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 28},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 24},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 10},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 24},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 16},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 18},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 449},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 16},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 449},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 449},
  [618] = {.lex_state = 16},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 10},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 449},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 10},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 10},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 0},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 18},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 449},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 24},
  [651] = {.lex_state = 24},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 24},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 24},
  [662] = {.lex_state = 24},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 24},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 24},
  [669] = {.lex_state = 24},
  [670] = {.lex_state = 0},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 24},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 449},
  [686] = {.lex_state = 24},
  [687] = {.lex_state = 24},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 10},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 10},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 24},
  [703] = {.lex_state = 24},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 16},
  [709] = {.lex_state = 0},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 24},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 24},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 449},
  [718] = {.lex_state = 24},
  [719] = {.lex_state = 24},
  [720] = {.lex_state = 449},
  [721] = {.lex_state = 24},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 24},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 24},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 0},
  [728] = {.lex_state = 449},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 24},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 24},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 10},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 24},
  [742] = {.lex_state = 0},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 24},
  [747] = {.lex_state = 24},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 24},
  [753] = {.lex_state = 24},
  [754] = {.lex_state = 10},
  [755] = {.lex_state = 0},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 10},
  [758] = {.lex_state = 10},
  [759] = {.lex_state = 10},
  [760] = {.lex_state = 10},
  [761] = {.lex_state = 10},
  [762] = {.lex_state = 10},
  [763] = {.lex_state = 10},
  [764] = {.lex_state = 0},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 0},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 24},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 10},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 24},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 24},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 10},
  [784] = {.lex_state = 24},
  [785] = {.lex_state = 10},
  [786] = {.lex_state = 24},
  [787] = {.lex_state = 24},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 0},
  [794] = {.lex_state = 449},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 24},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 24},
  [799] = {.lex_state = 449},
  [800] = {.lex_state = 449},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 24},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 0},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 449},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 24},
  [813] = {.lex_state = 24},
  [814] = {.lex_state = 24},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 449},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 449},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 24},
  [826] = {.lex_state = 24},
  [827] = {.lex_state = 449},
  [828] = {.lex_state = 24},
  [829] = {.lex_state = 24},
  [830] = {.lex_state = 449},
  [831] = {.lex_state = 24},
  [832] = {.lex_state = 0},
  [833] = {.lex_state = 24},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 24},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 0},
  [840] = {.lex_state = 24},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 24},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 24},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 24},
  [855] = {.lex_state = 449},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 24},
  [860] = {.lex_state = 24},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 0},
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
    [anon_sym_SUMACCUM] = ACTIONS(1),
    [anon_sym_FLOAT] = ACTIONS(1),
    [anon_sym_STRING] = ACTIONS(1),
    [anon_sym_MAXACCUM] = ACTIONS(1),
    [anon_sym_AVGACCUM] = ACTIONS(1),
    [anon_sym_BITWISEORACCUM] = ACTIONS(1),
    [anon_sym_BITWISEANDACCUM] = ACTIONS(1),
    [anon_sym_LISTACCUM] = ACTIONS(1),
    [anon_sym_SETACCUM] = ACTIONS(1),
    [anon_sym_BAGACCUM] = ACTIONS(1),
    [anon_sym_MAPACCUM] = ACTIONS(1),
    [anon_sym_HEAPACCUM] = ACTIONS(1),
    [anon_sym_DESC] = ACTIONS(1),
    [anon_sym_GROUPBYACCUM] = ACTIONS(1),
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
    [sym_gsql] = STATE(849),
    [sym__definition] = STATE(371),
    [sym_create_query] = STATE(371),
    [sym_interpret_query] = STATE(371),
    [aux_sym_gsql_repeat1] = STATE(371),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_CREATE] = ACTIONS(7),
    [anon_sym_INTERPRET] = ACTIONS(9),
    [sym_newline] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_typedef] = STATE(3),
    [sym_query_body_stmts] = STATE(5),
    [sym_query_body_stmt] = STATE(751),
    [sym_v_set_var_decl_stmt] = STATE(764),
    [sym_l_accum_assign_stmt] = STATE(764),
    [sym_g_accum_assign_stmt] = STATE(764),
    [sym_g_accum_accum_stmt] = STATE(764),
    [sym_func_call_stmt] = STATE(764),
    [sym_select_stmt] = STATE(764),
    [sym_gsql_select_block] = STATE(750),
    [sym_gsql_select_clause] = STATE(613),
    [sym_query_body_case_stmt] = STATE(764),
    [sym_query_body_if_stmt] = STATE(764),
    [sym_query_body_while_stmt] = STATE(764),
    [sym_query_body_for_each_stmt] = STATE(764),
    [sym_decl_stmt] = STATE(764),
    [sym_base_decl_stmt] = STATE(748),
    [sym_accum_decl_stmt] = STATE(748),
    [sym_accum_type] = STATE(460),
    [sym_global_accum_name] = STATE(458),
    [sym_local_accum_name] = STATE(612),
    [sym_print_stmt] = STATE(764),
    [sym_base_type] = STATE(746),
    [aux_sym_query_body_repeat1] = STATE(3),
    [aux_sym_query_body_repeat2] = STATE(5),
    [anon_sym_RBRACE] = ACTIONS(11),
    [anon_sym_TYPEDEF] = ACTIONS(13),
    [anon_sym_BREAK] = ACTIONS(15),
    [anon_sym_CONTINUE] = ACTIONS(15),
    [anon_sym_IF] = ACTIONS(17),
    [anon_sym_CASE] = ACTIONS(19),
    [anon_sym_WHILE] = ACTIONS(21),
    [anon_sym_FOREACH] = ACTIONS(23),
    [anon_sym_SUMACCUM] = ACTIONS(25),
    [anon_sym_INT] = ACTIONS(27),
    [anon_sym_FLOAT] = ACTIONS(27),
    [anon_sym_DOUBLE] = ACTIONS(27),
    [anon_sym_STRING] = ACTIONS(27),
    [anon_sym_MAXACCUM] = ACTIONS(29),
    [anon_sym_MINACCUM] = ACTIONS(29),
    [anon_sym_AVGACCUM] = ACTIONS(31),
    [anon_sym_ORACCUM] = ACTIONS(31),
    [anon_sym_ANDACCUM] = ACTIONS(31),
    [anon_sym_BITWISEORACCUM] = ACTIONS(31),
    [anon_sym_BITWISEANDACCUM] = ACTIONS(31),
    [anon_sym_LISTACCUM] = ACTIONS(33),
    [anon_sym_SETACCUM] = ACTIONS(35),
    [anon_sym_BAGACCUM] = ACTIONS(35),
    [anon_sym_MAPACCUM] = ACTIONS(37),
    [anon_sym_HEAPACCUM] = ACTIONS(39),
    [anon_sym_GROUPBYACCUM] = ACTIONS(41),
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
    [sym_typedef] = STATE(49),
    [sym_query_body_stmts] = STATE(4),
    [sym_query_body_stmt] = STATE(751),
    [sym_v_set_var_decl_stmt] = STATE(764),
    [sym_l_accum_assign_stmt] = STATE(764),
    [sym_g_accum_assign_stmt] = STATE(764),
    [sym_g_accum_accum_stmt] = STATE(764),
    [sym_func_call_stmt] = STATE(764),
    [sym_select_stmt] = STATE(764),
    [sym_gsql_select_block] = STATE(750),
    [sym_gsql_select_clause] = STATE(613),
    [sym_query_body_case_stmt] = STATE(764),
    [sym_query_body_if_stmt] = STATE(764),
    [sym_query_body_while_stmt] = STATE(764),
    [sym_query_body_for_each_stmt] = STATE(764),
    [sym_decl_stmt] = STATE(764),
    [sym_base_decl_stmt] = STATE(748),
    [sym_accum_decl_stmt] = STATE(748),
    [sym_accum_type] = STATE(460),
    [sym_global_accum_name] = STATE(458),
    [sym_local_accum_name] = STATE(612),
    [sym_print_stmt] = STATE(764),
    [sym_base_type] = STATE(746),
    [aux_sym_query_body_repeat1] = STATE(49),
    [aux_sym_query_body_repeat2] = STATE(4),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_TYPEDEF] = ACTIONS(13),
    [anon_sym_BREAK] = ACTIONS(15),
    [anon_sym_CONTINUE] = ACTIONS(15),
    [anon_sym_IF] = ACTIONS(17),
    [anon_sym_CASE] = ACTIONS(19),
    [anon_sym_WHILE] = ACTIONS(21),
    [anon_sym_FOREACH] = ACTIONS(23),
    [anon_sym_SUMACCUM] = ACTIONS(25),
    [anon_sym_INT] = ACTIONS(27),
    [anon_sym_FLOAT] = ACTIONS(27),
    [anon_sym_DOUBLE] = ACTIONS(27),
    [anon_sym_STRING] = ACTIONS(27),
    [anon_sym_MAXACCUM] = ACTIONS(29),
    [anon_sym_MINACCUM] = ACTIONS(29),
    [anon_sym_AVGACCUM] = ACTIONS(31),
    [anon_sym_ORACCUM] = ACTIONS(31),
    [anon_sym_ANDACCUM] = ACTIONS(31),
    [anon_sym_BITWISEORACCUM] = ACTIONS(31),
    [anon_sym_BITWISEANDACCUM] = ACTIONS(31),
    [anon_sym_LISTACCUM] = ACTIONS(33),
    [anon_sym_SETACCUM] = ACTIONS(35),
    [anon_sym_BAGACCUM] = ACTIONS(35),
    [anon_sym_MAPACCUM] = ACTIONS(37),
    [anon_sym_HEAPACCUM] = ACTIONS(39),
    [anon_sym_GROUPBYACCUM] = ACTIONS(41),
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
      anon_sym_SUMACCUM,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_GROUPBYACCUM,
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
    STATE(458), 1,
      sym_global_accum_name,
    STATE(460), 1,
      sym_accum_type,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(613), 1,
      sym_gsql_select_clause,
    STATE(746), 1,
      sym_base_type,
    STATE(750), 1,
      sym_gsql_select_block,
    STATE(751), 1,
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
    STATE(748), 2,
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
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
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
    STATE(764), 12,
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
  [128] = 32,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_SUMACCUM,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_GROUPBYACCUM,
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
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(458), 1,
      sym_global_accum_name,
    STATE(460), 1,
      sym_accum_type,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(613), 1,
      sym_gsql_select_clause,
    STATE(746), 1,
      sym_base_type,
    STATE(750), 1,
      sym_gsql_select_block,
    STATE(751), 1,
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
    STATE(748), 2,
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
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
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
    STATE(764), 12,
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
  [256] = 32,
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
      anon_sym_SUMACCUM,
    ACTIONS(88), 1,
      anon_sym_LISTACCUM,
    ACTIONS(94), 1,
      anon_sym_MAPACCUM,
    ACTIONS(97), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(100), 1,
      anon_sym_GROUPBYACCUM,
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
    STATE(458), 1,
      sym_global_accum_name,
    STATE(460), 1,
      sym_accum_type,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(613), 1,
      sym_gsql_select_clause,
    STATE(746), 1,
      sym_base_type,
    STATE(750), 1,
      sym_gsql_select_block,
    STATE(751), 1,
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
    STATE(748), 2,
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
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
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
    STATE(764), 12,
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
  [384] = 31,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_SUMACCUM,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_GROUPBYACCUM,
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
    STATE(458), 1,
      sym_global_accum_name,
    STATE(460), 1,
      sym_accum_type,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(613), 1,
      sym_gsql_select_clause,
    STATE(746), 1,
      sym_base_type,
    STATE(750), 1,
      sym_gsql_select_block,
    STATE(767), 1,
      sym_query_body_stmts,
    STATE(788), 1,
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
    STATE(748), 2,
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
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
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
    STATE(764), 12,
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
  [508] = 31,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_SUMACCUM,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_GROUPBYACCUM,
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
    STATE(458), 1,
      sym_global_accum_name,
    STATE(460), 1,
      sym_accum_type,
    STATE(537), 1,
      sym_query_body_stmts,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(613), 1,
      sym_gsql_select_clause,
    STATE(746), 1,
      sym_base_type,
    STATE(750), 1,
      sym_gsql_select_block,
    STATE(788), 1,
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
    STATE(748), 2,
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
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
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
    STATE(764), 12,
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
  [632] = 31,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_SUMACCUM,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_GROUPBYACCUM,
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
    STATE(458), 1,
      sym_global_accum_name,
    STATE(460), 1,
      sym_accum_type,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(613), 1,
      sym_gsql_select_clause,
    STATE(746), 1,
      sym_base_type,
    STATE(750), 1,
      sym_gsql_select_block,
    STATE(788), 1,
      sym_query_body_stmt,
    STATE(856), 1,
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
    STATE(748), 2,
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
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
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
    STATE(764), 12,
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
  [756] = 31,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_SUMACCUM,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_GROUPBYACCUM,
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
    STATE(458), 1,
      sym_global_accum_name,
    STATE(460), 1,
      sym_accum_type,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(613), 1,
      sym_gsql_select_clause,
    STATE(744), 1,
      sym_query_body_stmts,
    STATE(746), 1,
      sym_base_type,
    STATE(750), 1,
      sym_gsql_select_block,
    STATE(788), 1,
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
    STATE(748), 2,
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
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
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
    STATE(764), 12,
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
  [880] = 31,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_SUMACCUM,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_GROUPBYACCUM,
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
    STATE(458), 1,
      sym_global_accum_name,
    STATE(460), 1,
      sym_accum_type,
    STATE(480), 1,
      sym_query_body_stmts,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(613), 1,
      sym_gsql_select_clause,
    STATE(746), 1,
      sym_base_type,
    STATE(750), 1,
      sym_gsql_select_block,
    STATE(788), 1,
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
    STATE(748), 2,
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
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
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
    STATE(764), 12,
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
  [1004] = 31,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_SUMACCUM,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_GROUPBYACCUM,
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
    STATE(458), 1,
      sym_global_accum_name,
    STATE(460), 1,
      sym_accum_type,
    STATE(514), 1,
      sym_query_body_stmts,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(613), 1,
      sym_gsql_select_clause,
    STATE(746), 1,
      sym_base_type,
    STATE(750), 1,
      sym_gsql_select_block,
    STATE(788), 1,
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
    STATE(748), 2,
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
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
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
    STATE(764), 12,
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
  [1128] = 31,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_SUMACCUM,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_GROUPBYACCUM,
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
    STATE(458), 1,
      sym_global_accum_name,
    STATE(460), 1,
      sym_accum_type,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(613), 1,
      sym_gsql_select_clause,
    STATE(683), 1,
      sym_query_body_stmts,
    STATE(746), 1,
      sym_base_type,
    STATE(750), 1,
      sym_gsql_select_block,
    STATE(788), 1,
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
    STATE(748), 2,
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
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
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
    STATE(764), 12,
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
  [1252] = 31,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_SUMACCUM,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_GROUPBYACCUM,
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
    STATE(458), 1,
      sym_global_accum_name,
    STATE(460), 1,
      sym_accum_type,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(613), 1,
      sym_gsql_select_clause,
    STATE(746), 1,
      sym_base_type,
    STATE(750), 1,
      sym_gsql_select_block,
    STATE(788), 1,
      sym_query_body_stmt,
    STATE(841), 1,
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
    STATE(748), 2,
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
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
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
    STATE(764), 12,
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
  [1376] = 31,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_SUMACCUM,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_GROUPBYACCUM,
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
    STATE(458), 1,
      sym_global_accum_name,
    STATE(460), 1,
      sym_accum_type,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(613), 1,
      sym_gsql_select_clause,
    STATE(644), 1,
      sym_query_body_stmts,
    STATE(746), 1,
      sym_base_type,
    STATE(750), 1,
      sym_gsql_select_block,
    STATE(788), 1,
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
    STATE(748), 2,
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
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
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
    STATE(764), 12,
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
  [1500] = 31,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_SUMACCUM,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_GROUPBYACCUM,
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
    STATE(458), 1,
      sym_global_accum_name,
    STATE(460), 1,
      sym_accum_type,
    STATE(533), 1,
      sym_query_body_stmts,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(613), 1,
      sym_gsql_select_clause,
    STATE(746), 1,
      sym_base_type,
    STATE(750), 1,
      sym_gsql_select_block,
    STATE(788), 1,
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
    STATE(748), 2,
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
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
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
    STATE(764), 12,
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
  [1624] = 31,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_SUMACCUM,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_GROUPBYACCUM,
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
    STATE(458), 1,
      sym_global_accum_name,
    STATE(460), 1,
      sym_accum_type,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(613), 1,
      sym_gsql_select_clause,
    STATE(670), 1,
      sym_query_body_stmts,
    STATE(746), 1,
      sym_base_type,
    STATE(750), 1,
      sym_gsql_select_block,
    STATE(788), 1,
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
    STATE(748), 2,
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
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
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
    STATE(764), 12,
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
  [1748] = 31,
    ACTIONS(17), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      anon_sym_WHILE,
    ACTIONS(23), 1,
      anon_sym_FOREACH,
    ACTIONS(25), 1,
      anon_sym_SUMACCUM,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_GROUPBYACCUM,
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
    STATE(458), 1,
      sym_global_accum_name,
    STATE(460), 1,
      sym_accum_type,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(613), 1,
      sym_gsql_select_clause,
    STATE(659), 1,
      sym_query_body_stmts,
    STATE(746), 1,
      sym_base_type,
    STATE(750), 1,
      sym_gsql_select_block,
    STATE(788), 1,
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
    STATE(748), 2,
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
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
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
    STATE(764), 12,
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
  [1872] = 3,
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
  [1929] = 6,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_DOT,
    STATE(26), 1,
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
  [1990] = 6,
    ACTIONS(139), 1,
      anon_sym_DOT,
    STATE(23), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(141), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(137), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(135), 35,
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
  [2050] = 4,
    STATE(26), 1,
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
  [2106] = 5,
    ACTIONS(139), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(145), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(143), 38,
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
  [2164] = 5,
    ACTIONS(139), 1,
      anon_sym_DOT,
    STATE(23), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(147), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(141), 38,
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
  [2222] = 6,
    ACTIONS(149), 1,
      anon_sym_DOT,
    STATE(46), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(141), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(137), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(135), 35,
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
  [2282] = 4,
    STATE(28), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(153), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(151), 39,
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
  [2338] = 4,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(159), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(155), 39,
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
  [2394] = 5,
    ACTIONS(161), 1,
      anon_sym_DOT,
    STATE(28), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(159), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(155), 38,
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
  [2452] = 5,
    ACTIONS(168), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(166), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(164), 38,
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
  [2510] = 3,
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
  [2563] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(159), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(155), 39,
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
  [2616] = 4,
    ACTIONS(175), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(147), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(141), 38,
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
  [2671] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(179), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(177), 39,
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
  [2724] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(183), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(181), 39,
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
  [2777] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(187), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(185), 38,
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
  [2829] = 6,
    ACTIONS(193), 1,
      anon_sym_DOT,
    ACTIONS(195), 1,
      sym_digit,
    STATE(41), 1,
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
  [2887] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(187), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(185), 38,
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
  [2939] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(147), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(141), 38,
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
  [2991] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(197), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(137), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(135), 35,
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
  [3045] = 6,
    ACTIONS(195), 1,
      sym_digit,
    ACTIONS(205), 1,
      anon_sym_DOT,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(199), 36,
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
  [3103] = 5,
    ACTIONS(211), 1,
      sym_digit,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
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
  [3159] = 5,
    ACTIONS(195), 1,
      sym_digit,
    STATE(41), 1,
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
  [3214] = 5,
    ACTIONS(195), 1,
      sym_digit,
    STATE(41), 1,
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
  [3269] = 5,
    ACTIONS(195), 1,
      sym_digit,
    STATE(41), 1,
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
  [3324] = 5,
    ACTIONS(230), 1,
      anon_sym_DOT,
    STATE(45), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(166), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(164), 36,
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
  [3379] = 5,
    ACTIONS(149), 1,
      anon_sym_DOT,
    STATE(45), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(235), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(233), 36,
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
  [3434] = 5,
    ACTIONS(195), 1,
      sym_digit,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(239), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(237), 36,
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
  [3489] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(179), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(177), 37,
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
  [3539] = 5,
    ACTIONS(243), 1,
      anon_sym_TYPEDEF,
    ACTIONS(241), 2,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
    STATE(49), 2,
      sym_typedef,
      aux_sym_query_body_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(246), 35,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
      anon_sym_IF,
      anon_sym_CASE,
      anon_sym_WHILE,
      anon_sym_FOREACH,
      anon_sym_SUMACCUM,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
      anon_sym_LISTACCUM,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
      anon_sym_MAPACCUM,
      anon_sym_HEAPACCUM,
      anon_sym_GROUPBYACCUM,
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
  [3593] = 4,
    ACTIONS(252), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(250), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(248), 36,
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
  [3645] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(173), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(171), 37,
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
  [3695] = 4,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(256), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(254), 36,
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
  [3747] = 3,
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
  [3796] = 3,
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
  [3845] = 3,
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
  [3894] = 3,
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
  [3943] = 3,
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
  [3992] = 3,
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
  [4041] = 3,
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
  [4090] = 3,
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
  [4139] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(250), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(248), 36,
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
  [4188] = 3,
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
  [4237] = 3,
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
  [4286] = 3,
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
  [4335] = 3,
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
  [4384] = 3,
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
  [4433] = 3,
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
  [4482] = 3,
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
  [4531] = 3,
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
  [4580] = 3,
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
      anon_sym_SUMACCUM,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
      anon_sym_LISTACCUM,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
      anon_sym_MAPACCUM,
      anon_sym_HEAPACCUM,
      anon_sym_GROUPBYACCUM,
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
  [4628] = 3,
    ACTIONS(324), 2,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(326), 36,
      anon_sym_TYPEDEF,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
      anon_sym_IF,
      anon_sym_CASE,
      anon_sym_WHILE,
      anon_sym_FOREACH,
      anon_sym_SUMACCUM,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
      anon_sym_LISTACCUM,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
      anon_sym_MAPACCUM,
      anon_sym_HEAPACCUM,
      anon_sym_GROUPBYACCUM,
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
  [4676] = 3,
    ACTIONS(328), 2,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(330), 35,
      anon_sym_BREAK,
      anon_sym_CONTINUE,
      anon_sym_IF,
      anon_sym_CASE,
      anon_sym_WHILE,
      anon_sym_FOREACH,
      anon_sym_SUMACCUM,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
      anon_sym_LISTACCUM,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
      anon_sym_MAPACCUM,
      anon_sym_HEAPACCUM,
      anon_sym_GROUPBYACCUM,
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
  [4723] = 17,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(334), 1,
      anon_sym_IF,
    ACTIONS(336), 1,
      anon_sym_CASE,
    ACTIONS(338), 1,
      anon_sym_WHILE,
    ACTIONS(340), 1,
      anon_sym_FOREACH,
    ACTIONS(342), 1,
      sym_name,
    STATE(345), 1,
      sym_dml_sub_stmt,
    STATE(540), 1,
      sym_dml_sub_stmt_list,
    STATE(577), 1,
      sym_global_accum_name,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(712), 1,
      sym_base_type,
    ACTIONS(332), 2,
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
    STATE(352), 11,
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
  [4797] = 17,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(334), 1,
      anon_sym_IF,
    ACTIONS(336), 1,
      anon_sym_CASE,
    ACTIONS(338), 1,
      anon_sym_WHILE,
    ACTIONS(340), 1,
      anon_sym_FOREACH,
    ACTIONS(342), 1,
      sym_name,
    STATE(345), 1,
      sym_dml_sub_stmt,
    STATE(575), 1,
      sym_dml_sub_stmt_list,
    STATE(577), 1,
      sym_global_accum_name,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(712), 1,
      sym_base_type,
    ACTIONS(332), 2,
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
    STATE(352), 11,
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
  [4871] = 17,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(334), 1,
      anon_sym_IF,
    ACTIONS(336), 1,
      anon_sym_CASE,
    ACTIONS(338), 1,
      anon_sym_WHILE,
    ACTIONS(340), 1,
      anon_sym_FOREACH,
    ACTIONS(342), 1,
      sym_name,
    STATE(345), 1,
      sym_dml_sub_stmt,
    STATE(577), 1,
      sym_global_accum_name,
    STATE(582), 1,
      sym_dml_sub_stmt_list,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(712), 1,
      sym_base_type,
    ACTIONS(332), 2,
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
    STATE(352), 11,
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
  [4945] = 17,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(334), 1,
      anon_sym_IF,
    ACTIONS(336), 1,
      anon_sym_CASE,
    ACTIONS(338), 1,
      anon_sym_WHILE,
    ACTIONS(340), 1,
      anon_sym_FOREACH,
    ACTIONS(342), 1,
      sym_name,
    STATE(345), 1,
      sym_dml_sub_stmt,
    STATE(577), 1,
      sym_global_accum_name,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(660), 1,
      sym_dml_sub_stmt_list,
    STATE(712), 1,
      sym_base_type,
    ACTIONS(332), 2,
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
    STATE(352), 11,
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
  [5019] = 17,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(334), 1,
      anon_sym_IF,
    ACTIONS(336), 1,
      anon_sym_CASE,
    ACTIONS(338), 1,
      anon_sym_WHILE,
    ACTIONS(340), 1,
      anon_sym_FOREACH,
    ACTIONS(342), 1,
      sym_name,
    STATE(345), 1,
      sym_dml_sub_stmt,
    STATE(577), 1,
      sym_global_accum_name,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(658), 1,
      sym_dml_sub_stmt_list,
    STATE(712), 1,
      sym_base_type,
    ACTIONS(332), 2,
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
    STATE(352), 11,
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
  [5093] = 17,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(334), 1,
      anon_sym_IF,
    ACTIONS(336), 1,
      anon_sym_CASE,
    ACTIONS(338), 1,
      anon_sym_WHILE,
    ACTIONS(340), 1,
      anon_sym_FOREACH,
    ACTIONS(342), 1,
      sym_name,
    STATE(345), 1,
      sym_dml_sub_stmt,
    STATE(497), 1,
      sym_dml_sub_stmt_list,
    STATE(577), 1,
      sym_global_accum_name,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(712), 1,
      sym_base_type,
    ACTIONS(332), 2,
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
    STATE(352), 11,
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
  [5167] = 17,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(336), 1,
      anon_sym_CASE,
    ACTIONS(338), 1,
      anon_sym_WHILE,
    ACTIONS(340), 1,
      anon_sym_FOREACH,
    ACTIONS(342), 1,
      sym_name,
    ACTIONS(344), 1,
      anon_sym_IF,
    STATE(345), 1,
      sym_dml_sub_stmt,
    STATE(577), 1,
      sym_global_accum_name,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(652), 1,
      sym_dml_sub_stmt_list,
    STATE(712), 1,
      sym_base_type,
    ACTIONS(332), 2,
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
    STATE(352), 11,
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
  [5241] = 7,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_DOT,
    STATE(46), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(141), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(137), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(135), 26,
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
  [5295] = 17,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(334), 1,
      anon_sym_IF,
    ACTIONS(336), 1,
      anon_sym_CASE,
    ACTIONS(338), 1,
      anon_sym_WHILE,
    ACTIONS(340), 1,
      anon_sym_FOREACH,
    ACTIONS(342), 1,
      sym_name,
    STATE(345), 1,
      sym_dml_sub_stmt,
    STATE(577), 1,
      sym_global_accum_name,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(706), 1,
      sym_dml_sub_stmt_list,
    STATE(712), 1,
      sym_base_type,
    ACTIONS(332), 2,
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
    STATE(352), 11,
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
  [5369] = 17,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(334), 1,
      anon_sym_IF,
    ACTIONS(336), 1,
      anon_sym_CASE,
    ACTIONS(338), 1,
      anon_sym_WHILE,
    ACTIONS(340), 1,
      anon_sym_FOREACH,
    ACTIONS(342), 1,
      sym_name,
    STATE(345), 1,
      sym_dml_sub_stmt,
    STATE(577), 1,
      sym_global_accum_name,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(707), 1,
      sym_dml_sub_stmt_list,
    STATE(712), 1,
      sym_base_type,
    ACTIONS(332), 2,
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
    STATE(352), 11,
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
  [5443] = 17,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(334), 1,
      anon_sym_IF,
    ACTIONS(336), 1,
      anon_sym_CASE,
    ACTIONS(338), 1,
      anon_sym_WHILE,
    ACTIONS(340), 1,
      anon_sym_FOREACH,
    ACTIONS(342), 1,
      sym_name,
    STATE(345), 1,
      sym_dml_sub_stmt,
    STATE(577), 1,
      sym_global_accum_name,
    STATE(586), 1,
      sym_dml_sub_stmt_list,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(712), 1,
      sym_base_type,
    ACTIONS(332), 2,
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
    STATE(352), 11,
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
  [5517] = 17,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(334), 1,
      anon_sym_IF,
    ACTIONS(336), 1,
      anon_sym_CASE,
    ACTIONS(338), 1,
      anon_sym_WHILE,
    ACTIONS(340), 1,
      anon_sym_FOREACH,
    ACTIONS(342), 1,
      sym_name,
    STATE(345), 1,
      sym_dml_sub_stmt,
    STATE(577), 1,
      sym_global_accum_name,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(711), 1,
      sym_dml_sub_stmt_list,
    STATE(712), 1,
      sym_base_type,
    ACTIONS(332), 2,
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
    STATE(352), 11,
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
  [5591] = 17,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(336), 1,
      anon_sym_CASE,
    ACTIONS(338), 1,
      anon_sym_WHILE,
    ACTIONS(340), 1,
      anon_sym_FOREACH,
    ACTIONS(342), 1,
      sym_name,
    ACTIONS(344), 1,
      anon_sym_IF,
    STATE(345), 1,
      sym_dml_sub_stmt,
    STATE(577), 1,
      sym_global_accum_name,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(674), 1,
      sym_dml_sub_stmt_list,
    STATE(712), 1,
      sym_base_type,
    ACTIONS(332), 2,
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
    STATE(352), 11,
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
  [5665] = 17,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(334), 1,
      anon_sym_IF,
    ACTIONS(336), 1,
      anon_sym_CASE,
    ACTIONS(338), 1,
      anon_sym_WHILE,
    ACTIONS(340), 1,
      anon_sym_FOREACH,
    ACTIONS(342), 1,
      sym_name,
    STATE(345), 1,
      sym_dml_sub_stmt,
    STATE(577), 1,
      sym_global_accum_name,
    STATE(595), 1,
      sym_dml_sub_stmt_list,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(712), 1,
      sym_base_type,
    ACTIONS(332), 2,
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
    STATE(352), 11,
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
  [5739] = 17,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(334), 1,
      anon_sym_IF,
    ACTIONS(336), 1,
      anon_sym_CASE,
    ACTIONS(338), 1,
      anon_sym_WHILE,
    ACTIONS(340), 1,
      anon_sym_FOREACH,
    ACTIONS(342), 1,
      sym_name,
    STATE(345), 1,
      sym_dml_sub_stmt,
    STATE(572), 1,
      sym_dml_sub_stmt_list,
    STATE(577), 1,
      sym_global_accum_name,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(712), 1,
      sym_base_type,
    ACTIONS(332), 2,
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
    STATE(352), 11,
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
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(334), 1,
      anon_sym_IF,
    ACTIONS(336), 1,
      anon_sym_CASE,
    ACTIONS(338), 1,
      anon_sym_WHILE,
    ACTIONS(340), 1,
      anon_sym_FOREACH,
    ACTIONS(342), 1,
      sym_name,
    STATE(364), 1,
      sym_dml_sub_stmt,
    STATE(577), 1,
      sym_global_accum_name,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(712), 1,
      sym_base_type,
    ACTIONS(332), 2,
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
    STATE(352), 11,
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
  [5884] = 8,
    ACTIONS(137), 1,
      anon_sym_SLASH,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_DOT,
    ACTIONS(350), 1,
      anon_sym_LT,
    STATE(46), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(141), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(135), 27,
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
  [5939] = 29,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      anon_sym_DOT,
    ACTIONS(356), 1,
      anon_sym_LBRACK,
    ACTIONS(358), 1,
      anon_sym_DASH,
    ACTIONS(360), 1,
      anon_sym_AT_AT,
    ACTIONS(362), 1,
      anon_sym_COALESCE,
    ACTIONS(364), 1,
      anon_sym_ISEMPTY,
    ACTIONS(366), 1,
      anon_sym_NOT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(372), 1,
      sym_name,
    ACTIONS(376), 1,
      sym_digit,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    STATE(177), 1,
      sym_global_accum_name,
    STATE(186), 1,
      sym_name_dot,
    STATE(203), 1,
      aux_sym_accum_type_repeat1,
    STATE(206), 1,
      sym_set_bag_expr,
    STATE(207), 1,
      sym_expr,
    STATE(576), 1,
      sym_condition,
    STATE(626), 1,
      sym_local_accum_name,
    STATE(629), 1,
      sym_arg_list,
    STATE(853), 1,
      sym_aggregator,
    ACTIONS(368), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(222), 2,
      sym_numeric,
      sym_string_literal,
    STATE(223), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(225), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(374), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6035] = 29,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      anon_sym_DOT,
    ACTIONS(356), 1,
      anon_sym_LBRACK,
    ACTIONS(358), 1,
      anon_sym_DASH,
    ACTIONS(360), 1,
      anon_sym_AT_AT,
    ACTIONS(362), 1,
      anon_sym_COALESCE,
    ACTIONS(364), 1,
      anon_sym_ISEMPTY,
    ACTIONS(366), 1,
      anon_sym_NOT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(372), 1,
      sym_name,
    ACTIONS(376), 1,
      sym_digit,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    STATE(177), 1,
      sym_global_accum_name,
    STATE(186), 1,
      sym_name_dot,
    STATE(203), 1,
      aux_sym_accum_type_repeat1,
    STATE(205), 1,
      sym_expr,
    STATE(206), 1,
      sym_set_bag_expr,
    STATE(576), 1,
      sym_condition,
    STATE(598), 1,
      sym_arg_list,
    STATE(626), 1,
      sym_local_accum_name,
    STATE(853), 1,
      sym_aggregator,
    ACTIONS(368), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(222), 2,
      sym_numeric,
      sym_string_literal,
    STATE(223), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(225), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(374), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6131] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(366), 1,
      anon_sym_NOT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      anon_sym_DASH,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(396), 1,
      sym_name,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(136), 1,
      sym_expr,
    STATE(447), 1,
      sym_condition,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    ACTIONS(394), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6224] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(268), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(819), 1,
      sym_arg_list,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6315] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(366), 1,
      anon_sym_NOT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      anon_sym_DASH,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(396), 1,
      sym_name,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(136), 1,
      sym_expr,
    STATE(485), 1,
      sym_condition,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    ACTIONS(394), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6408] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(366), 1,
      anon_sym_NOT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      anon_sym_DASH,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(396), 1,
      sym_name,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(136), 1,
      sym_expr,
    STATE(488), 1,
      sym_condition,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    ACTIONS(394), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6501] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(366), 1,
      anon_sym_NOT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      anon_sym_DASH,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(396), 1,
      sym_name,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(136), 1,
      sym_expr,
    STATE(318), 1,
      sym_condition,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    ACTIONS(394), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6594] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(366), 1,
      anon_sym_NOT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      anon_sym_DASH,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(396), 1,
      sym_name,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(136), 1,
      sym_expr,
    STATE(489), 1,
      sym_condition,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    ACTIONS(394), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6687] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(366), 1,
      anon_sym_NOT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      anon_sym_DASH,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(396), 1,
      sym_name,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(136), 1,
      sym_expr,
    STATE(542), 1,
      sym_condition,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    ACTIONS(394), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6780] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(414), 1,
      anon_sym_WHEN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(301), 1,
      sym_expr,
    STATE(446), 1,
      aux_sym_dml_sub_case_stmt_repeat1,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6871] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(268), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(801), 1,
      sym_arg_list,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6962] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(268), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(805), 1,
      sym_arg_list,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7053] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(268), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(835), 1,
      sym_arg_list,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7144] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(366), 1,
      anon_sym_NOT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      anon_sym_DASH,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(396), 1,
      sym_name,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(136), 1,
      sym_expr,
    STATE(584), 1,
      sym_condition,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    ACTIONS(394), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7237] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(268), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(832), 1,
      sym_arg_list,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7328] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(268), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(678), 1,
      sym_arg_list,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7419] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(366), 1,
      anon_sym_NOT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      anon_sym_DASH,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(396), 1,
      sym_name,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(136), 1,
      sym_expr,
    STATE(492), 1,
      sym_condition,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    ACTIONS(394), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7512] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(268), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(755), 1,
      sym_arg_list,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7603] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(366), 1,
      anon_sym_NOT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      anon_sym_DASH,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(396), 1,
      sym_name,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(136), 1,
      sym_expr,
    STATE(479), 1,
      sym_condition,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    ACTIONS(394), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7696] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(268), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(792), 1,
      sym_arg_list,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7787] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(366), 1,
      anon_sym_NOT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      anon_sym_DASH,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(396), 1,
      sym_name,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(136), 1,
      sym_expr,
    STATE(327), 1,
      sym_condition,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    ACTIONS(394), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7880] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(366), 1,
      anon_sym_NOT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      anon_sym_DASH,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(396), 1,
      sym_name,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(136), 1,
      sym_expr,
    STATE(507), 1,
      sym_condition,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    ACTIONS(394), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7973] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(260), 1,
      sym_expr,
    STATE(411), 1,
      sym_print_expr,
    STATE(412), 1,
      sym_v_expr_set,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8064] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(366), 1,
      anon_sym_NOT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      anon_sym_DASH,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(396), 1,
      sym_name,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(136), 1,
      sym_expr,
    STATE(432), 1,
      sym_condition,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    ACTIONS(394), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8157] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(366), 1,
      anon_sym_NOT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      anon_sym_DASH,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(396), 1,
      sym_name,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(136), 1,
      sym_expr,
    STATE(518), 1,
      sym_condition,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    ACTIONS(394), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8250] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(268), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(823), 1,
      sym_arg_list,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8341] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(268), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(822), 1,
      sym_arg_list,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8432] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(268), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(684), 1,
      sym_arg_list,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8523] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(268), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(818), 1,
      sym_arg_list,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8614] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(268), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(698), 1,
      sym_arg_list,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8705] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(366), 1,
      anon_sym_NOT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      anon_sym_DASH,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(396), 1,
      sym_name,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(136), 1,
      sym_expr,
    STATE(397), 1,
      sym_condition,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    ACTIONS(394), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8798] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(366), 1,
      anon_sym_NOT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      anon_sym_DASH,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(396), 1,
      sym_name,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(136), 1,
      sym_expr,
    STATE(457), 1,
      sym_condition,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    ACTIONS(394), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8891] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(440), 1,
      anon_sym_WHEN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(306), 1,
      sym_expr,
    STATE(454), 1,
      aux_sym_query_body_case_stmt_repeat1,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8982] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(366), 1,
      anon_sym_NOT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      anon_sym_DASH,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(396), 1,
      sym_name,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(136), 1,
      sym_expr,
    STATE(555), 1,
      sym_condition,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    ACTIONS(394), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9075] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(268), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(817), 1,
      sym_arg_list,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9166] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(366), 1,
      anon_sym_NOT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      anon_sym_DASH,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(396), 1,
      sym_name,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(136), 1,
      sym_expr,
    STATE(531), 1,
      sym_condition,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    ACTIONS(394), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9259] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(268), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(724), 1,
      sym_arg_list,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9350] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(366), 1,
      anon_sym_NOT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      anon_sym_DASH,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(396), 1,
      sym_name,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(136), 1,
      sym_expr,
    STATE(580), 1,
      sym_condition,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    ACTIONS(394), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9443] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(268), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(838), 1,
      sym_arg_list,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9534] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(366), 1,
      anon_sym_NOT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      anon_sym_DASH,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(396), 1,
      sym_name,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(136), 1,
      sym_expr,
    STATE(472), 1,
      sym_condition,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    ACTIONS(394), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9627] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(268), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(806), 1,
      sym_arg_list,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9718] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(260), 1,
      sym_expr,
    STATE(412), 1,
      sym_v_expr_set,
    STATE(473), 1,
      sym_print_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9809] = 26,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(290), 1,
      sym_expr,
    STATE(545), 1,
      sym_v_set_proj,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9897] = 26,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(268), 1,
      sym_expr,
    STATE(270), 1,
      sym_set_bag_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(647), 1,
      sym_arg_list,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9985] = 26,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(354), 1,
      anon_sym_DOT,
    ACTIONS(356), 1,
      anon_sym_LBRACK,
    ACTIONS(360), 1,
      anon_sym_AT_AT,
    ACTIONS(362), 1,
      anon_sym_COALESCE,
    ACTIONS(364), 1,
      anon_sym_ISEMPTY,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(376), 1,
      sym_digit,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      sym_name,
    STATE(177), 1,
      sym_global_accum_name,
    STATE(186), 1,
      sym_name_dot,
    STATE(203), 1,
      aux_sym_accum_type_repeat1,
    STATE(206), 1,
      sym_set_bag_expr,
    STATE(282), 1,
      sym_expr,
    STATE(598), 1,
      sym_arg_list,
    STATE(626), 1,
      sym_local_accum_name,
    STATE(853), 1,
      sym_aggregator,
    STATE(222), 2,
      sym_numeric,
      sym_string_literal,
    STATE(223), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(225), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(374), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10073] = 26,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(268), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(731), 1,
      sym_arg_list,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10161] = 13,
    ACTIONS(460), 1,
      anon_sym_IN,
    ACTIONS(464), 1,
      anon_sym_NOT,
    ACTIONS(466), 1,
      anon_sym_IS,
    ACTIONS(468), 1,
      anon_sym_BETWEEN,
    ACTIONS(470), 1,
      anon_sym_LIKE,
    ACTIONS(472), 1,
      anon_sym_SLASH,
    STATE(148), 1,
      sym_math_operator,
    STATE(152), 1,
      sym_comparison_operator,
    ACTIONS(458), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(474), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(462), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(456), 10,
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
  [10223] = 26,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(268), 1,
      sym_expr,
    STATE(270), 1,
      sym_set_bag_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(737), 1,
      sym_arg_list,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10311] = 26,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(290), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(633), 1,
      sym_v_set_proj,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10399] = 26,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(268), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(710), 1,
      sym_arg_list,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10487] = 26,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(268), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(797), 1,
      sym_arg_list,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10575] = 26,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(354), 1,
      anon_sym_DOT,
    ACTIONS(356), 1,
      anon_sym_LBRACK,
    ACTIONS(360), 1,
      anon_sym_AT_AT,
    ACTIONS(362), 1,
      anon_sym_COALESCE,
    ACTIONS(364), 1,
      anon_sym_ISEMPTY,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(376), 1,
      sym_digit,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      sym_name,
    STATE(177), 1,
      sym_global_accum_name,
    STATE(186), 1,
      sym_name_dot,
    STATE(203), 1,
      aux_sym_accum_type_repeat1,
    STATE(206), 1,
      sym_set_bag_expr,
    STATE(279), 1,
      sym_expr,
    STATE(626), 1,
      sym_local_accum_name,
    STATE(629), 1,
      sym_arg_list,
    STATE(853), 1,
      sym_aggregator,
    STATE(222), 2,
      sym_numeric,
      sym_string_literal,
    STATE(223), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(225), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(374), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10663] = 26,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(268), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(811), 1,
      sym_arg_list,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10751] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(190), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10836] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(238), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10921] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(244), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11006] = 6,
    ACTIONS(476), 1,
      anon_sym_LPAREN,
    ACTIONS(478), 1,
      anon_sym_DOT,
    STATE(180), 1,
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
  [11053] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(314), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11138] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      anon_sym_DASH,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(396), 1,
      sym_name,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(165), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11223] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(480), 1,
      anon_sym_DOT,
    ACTIONS(482), 1,
      sym_digit,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_accum_type_repeat1,
    STATE(195), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11308] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(239), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11393] = 25,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(354), 1,
      anon_sym_DOT,
    ACTIONS(356), 1,
      anon_sym_LBRACK,
    ACTIONS(360), 1,
      anon_sym_AT_AT,
    ACTIONS(362), 1,
      anon_sym_COALESCE,
    ACTIONS(364), 1,
      anon_sym_ISEMPTY,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(376), 1,
      sym_digit,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      sym_name,
    STATE(177), 1,
      sym_global_accum_name,
    STATE(186), 1,
      sym_name_dot,
    STATE(198), 1,
      sym_set_bag_expr,
    STATE(203), 1,
      aux_sym_accum_type_repeat1,
    STATE(287), 1,
      sym_expr,
    STATE(626), 1,
      sym_local_accum_name,
    STATE(853), 1,
      sym_aggregator,
    STATE(222), 2,
      sym_numeric,
      sym_string_literal,
    STATE(223), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(225), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(374), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11478] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(240), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11563] = 25,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(354), 1,
      anon_sym_DOT,
    ACTIONS(356), 1,
      anon_sym_LBRACK,
    ACTIONS(358), 1,
      anon_sym_DASH,
    ACTIONS(360), 1,
      anon_sym_AT_AT,
    ACTIONS(362), 1,
      anon_sym_COALESCE,
    ACTIONS(364), 1,
      anon_sym_ISEMPTY,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(372), 1,
      sym_name,
    ACTIONS(376), 1,
      sym_digit,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    STATE(177), 1,
      sym_global_accum_name,
    STATE(186), 1,
      sym_name_dot,
    STATE(198), 1,
      sym_set_bag_expr,
    STATE(203), 1,
      aux_sym_accum_type_repeat1,
    STATE(217), 1,
      sym_expr,
    STATE(626), 1,
      sym_local_accum_name,
    STATE(853), 1,
      sym_aggregator,
    STATE(222), 2,
      sym_numeric,
      sym_string_literal,
    STATE(223), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(225), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(374), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11648] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(248), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11733] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(251), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11818] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(315), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11903] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(310), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11988] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(311), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12073] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(312), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12158] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(286), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12243] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(247), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12328] = 7,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      anon_sym_DOT,
    STATE(211), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(141), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(137), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(135), 20,
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
  [12377] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(316), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12462] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(309), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12547] = 4,
    STATE(148), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(310), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(308), 27,
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
  [12590] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(289), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12675] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(246), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12760] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(313), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12845] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(254), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12930] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(299), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [13015] = 25,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(356), 1,
      anon_sym_LBRACK,
    ACTIONS(360), 1,
      anon_sym_AT_AT,
    ACTIONS(362), 1,
      anon_sym_COALESCE,
    ACTIONS(364), 1,
      anon_sym_ISEMPTY,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      sym_name,
    ACTIONS(488), 1,
      anon_sym_DOT,
    ACTIONS(490), 1,
      sym_digit,
    STATE(177), 1,
      sym_global_accum_name,
    STATE(186), 1,
      sym_name_dot,
    STATE(198), 1,
      sym_set_bag_expr,
    STATE(204), 1,
      aux_sym_accum_type_repeat1,
    STATE(293), 1,
      sym_expr,
    STATE(626), 1,
      sym_local_accum_name,
    STATE(853), 1,
      sym_aggregator,
    STATE(222), 2,
      sym_numeric,
      sym_string_literal,
    STATE(223), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(225), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(374), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [13100] = 25,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(354), 1,
      anon_sym_DOT,
    ACTIONS(356), 1,
      anon_sym_LBRACK,
    ACTIONS(360), 1,
      anon_sym_AT_AT,
    ACTIONS(362), 1,
      anon_sym_COALESCE,
    ACTIONS(364), 1,
      anon_sym_ISEMPTY,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(376), 1,
      sym_digit,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      sym_name,
    STATE(177), 1,
      sym_global_accum_name,
    STATE(186), 1,
      sym_name_dot,
    STATE(198), 1,
      sym_set_bag_expr,
    STATE(203), 1,
      aux_sym_accum_type_repeat1,
    STATE(291), 1,
      sym_expr,
    STATE(626), 1,
      sym_local_accum_name,
    STATE(853), 1,
      sym_aggregator,
    STATE(222), 2,
      sym_numeric,
      sym_string_literal,
    STATE(223), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(225), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(374), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [13185] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      anon_sym_DASH,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(396), 1,
      sym_name,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(480), 1,
      anon_sym_DOT,
    ACTIONS(482), 1,
      sym_digit,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(40), 1,
      aux_sym_accum_type_repeat1,
    STATE(176), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [13270] = 25,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(356), 1,
      anon_sym_LBRACK,
    ACTIONS(358), 1,
      anon_sym_DASH,
    ACTIONS(360), 1,
      anon_sym_AT_AT,
    ACTIONS(362), 1,
      anon_sym_COALESCE,
    ACTIONS(364), 1,
      anon_sym_ISEMPTY,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(372), 1,
      sym_name,
    ACTIONS(378), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_DOT,
    ACTIONS(490), 1,
      sym_digit,
    STATE(177), 1,
      sym_global_accum_name,
    STATE(186), 1,
      sym_name_dot,
    STATE(198), 1,
      sym_set_bag_expr,
    STATE(204), 1,
      aux_sym_accum_type_repeat1,
    STATE(215), 1,
      sym_expr,
    STATE(626), 1,
      sym_local_accum_name,
    STATE(853), 1,
      sym_aggregator,
    STATE(222), 2,
      sym_numeric,
      sym_string_literal,
    STATE(223), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(225), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(374), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [13355] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(370), 1,
      anon_sym_COUNT,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_COALESCE,
    ACTIONS(392), 1,
      anon_sym_ISEMPTY,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_DASH,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(39), 1,
      sym_set_bag_expr,
    STATE(302), 1,
      sym_expr,
    STATE(612), 1,
      sym_local_accum_name,
    STATE(729), 1,
      sym_aggregator,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    STATE(69), 2,
      sym_func_call_stmt,
      sym_constant,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [13440] = 6,
    ACTIONS(472), 1,
      anon_sym_SLASH,
    STATE(148), 1,
      sym_math_operator,
    ACTIONS(494), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(462), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(492), 19,
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
  [13487] = 6,
    ACTIONS(496), 1,
      anon_sym_DOT,
    STATE(211), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(141), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(137), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(135), 20,
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
  [13533] = 15,
    ACTIONS(25), 1,
      anon_sym_SUMACCUM,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_GROUPBYACCUM,
    ACTIONS(43), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(498), 1,
      sym_name,
    STATE(831), 1,
      sym_accum_type,
    ACTIONS(29), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(35), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(825), 2,
      sym__element_type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
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
  [13597] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(282), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(456), 10,
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
    ACTIONS(280), 17,
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
  [13639] = 4,
    STATE(183), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(153), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(151), 24,
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
  [13681] = 5,
    ACTIONS(500), 1,
      anon_sym_DOT,
    STATE(184), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(145), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(143), 23,
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
  [13725] = 4,
    ACTIONS(502), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(159), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(155), 24,
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
  [13767] = 5,
    ACTIONS(504), 1,
      anon_sym_DOT,
    STATE(183), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(159), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(155), 23,
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
  [13811] = 5,
    ACTIONS(507), 1,
      anon_sym_DOT,
    STATE(184), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(166), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(164), 23,
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
  [13855] = 15,
    ACTIONS(25), 1,
      anon_sym_SUMACCUM,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_GROUPBYACCUM,
    ACTIONS(43), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(498), 1,
      sym_name,
    STATE(732), 1,
      sym_accum_type,
    ACTIONS(29), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(35), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(825), 2,
      sym__element_type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
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
  [13919] = 6,
    ACTIONS(500), 1,
      anon_sym_DOT,
    STATE(181), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(141), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(137), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(135), 20,
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
  [13965] = 5,
    ACTIONS(500), 1,
      anon_sym_DOT,
    STATE(181), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(147), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(141), 23,
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
  [14009] = 4,
    STATE(180), 1,
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
  [14051] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(159), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(155), 24,
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
  [14090] = 4,
    ACTIONS(310), 1,
      anon_sym_SLASH,
    STATE(143), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(308), 27,
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
  [14131] = 4,
    ACTIONS(510), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(147), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(141), 23,
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
  [14172] = 14,
    ACTIONS(25), 1,
      anon_sym_SUMACCUM,
    ACTIONS(33), 1,
      anon_sym_LISTACCUM,
    ACTIONS(37), 1,
      anon_sym_MAPACCUM,
    ACTIONS(39), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(41), 1,
      anon_sym_GROUPBYACCUM,
    ACTIONS(43), 1,
      anon_sym_ARRAYACCUM,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(512), 1,
      sym_name,
    ACTIONS(29), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(35), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(774), 2,
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
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
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
  [14233] = 3,
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
  [14272] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(183), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(181), 24,
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
  [14311] = 5,
    ACTIONS(472), 1,
      anon_sym_SLASH,
    STATE(143), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(462), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(492), 19,
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
  [14354] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(179), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(177), 24,
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
  [14393] = 3,
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
  [14432] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(514), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(137), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(135), 20,
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
  [14472] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(187), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(185), 23,
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
  [14510] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(187), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(185), 23,
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
  [14548] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(147), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(141), 23,
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
  [14586] = 5,
    ACTIONS(516), 1,
      sym_digit,
    STATE(202), 1,
      aux_sym_accum_type_repeat1,
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
  [14628] = 6,
    ACTIONS(519), 1,
      anon_sym_DOT,
    ACTIONS(521), 1,
      sym_digit,
    STATE(202), 1,
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
  [14672] = 6,
    ACTIONS(521), 1,
      sym_digit,
    ACTIONS(523), 1,
      anon_sym_DOT,
    STATE(202), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(199), 21,
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
  [14716] = 17,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    ACTIONS(460), 1,
      anon_sym_IN,
    ACTIONS(464), 1,
      anon_sym_NOT,
    ACTIONS(466), 1,
      anon_sym_IS,
    ACTIONS(468), 1,
      anon_sym_BETWEEN,
    ACTIONS(470), 1,
      anon_sym_LIKE,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(527), 1,
      anon_sym_DASH_GT,
    STATE(152), 1,
      sym_comparison_operator,
    STATE(153), 1,
      sym_math_operator,
    STATE(452), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(456), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(458), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(472), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(474), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(462), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [14782] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(514), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(137), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(135), 20,
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
  [14822] = 17,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    ACTIONS(460), 1,
      anon_sym_IN,
    ACTIONS(464), 1,
      anon_sym_NOT,
    ACTIONS(466), 1,
      anon_sym_IS,
    ACTIONS(468), 1,
      anon_sym_BETWEEN,
    ACTIONS(470), 1,
      anon_sym_LIKE,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(527), 1,
      anon_sym_DASH_GT,
    STATE(152), 1,
      sym_comparison_operator,
    STATE(153), 1,
      sym_math_operator,
    STATE(452), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(456), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(458), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(472), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(474), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(462), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [14888] = 5,
    ACTIONS(521), 1,
      sym_digit,
    STATE(202), 1,
      aux_sym_accum_type_repeat1,
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
  [14929] = 5,
    ACTIONS(521), 1,
      sym_digit,
    STATE(202), 1,
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
  [14970] = 5,
    ACTIONS(521), 1,
      sym_digit,
    STATE(202), 1,
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
  [15011] = 5,
    ACTIONS(496), 1,
      anon_sym_DOT,
    STATE(213), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(235), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(233), 21,
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
  [15052] = 5,
    ACTIONS(521), 1,
      sym_digit,
    STATE(202), 1,
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
  [15093] = 5,
    ACTIONS(529), 1,
      anon_sym_DOT,
    STATE(213), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(166), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(164), 21,
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
  [15134] = 3,
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
  [15170] = 6,
    STATE(153), 1,
      sym_math_operator,
    ACTIONS(472), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(494), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(462), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(492), 14,
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
  [15212] = 4,
    ACTIONS(532), 1,
      anon_sym_DOT,
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
  [15250] = 4,
    STATE(153), 1,
      sym_math_operator,
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
  [15288] = 4,
    ACTIONS(534), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(256), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(254), 21,
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
  [15326] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(179), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(177), 22,
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
  [15362] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(456), 3,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_AND,
    ACTIONS(282), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(280), 18,
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
  [15399] = 3,
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
  [15434] = 3,
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
  [15469] = 3,
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
  [15504] = 3,
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
  [15539] = 3,
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
  [15574] = 3,
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
  [15609] = 3,
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
  [15644] = 3,
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
  [15679] = 3,
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
  [15714] = 3,
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
  [15749] = 3,
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
  [15784] = 3,
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
  [15819] = 3,
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
  [15854] = 3,
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
  [15889] = 3,
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
  [15924] = 3,
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
  [15959] = 3,
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
  [15994] = 5,
    ACTIONS(472), 1,
      anon_sym_SLASH,
    STATE(143), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(462), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(536), 10,
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
  [16028] = 5,
    ACTIONS(472), 1,
      anon_sym_SLASH,
    STATE(143), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(462), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(538), 10,
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
  [16062] = 5,
    ACTIONS(472), 1,
      anon_sym_SLASH,
    STATE(143), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(462), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(540), 10,
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
  [16096] = 8,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      anon_sym_DOT,
    ACTIONS(542), 1,
      anon_sym_LT,
    STATE(211), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(141), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(135), 10,
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
  [16135] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(544), 8,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_AT_AT,
      sym_digit,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(546), 10,
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
  [16163] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(548), 8,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_AT_AT,
      sym_digit,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(550), 10,
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
  [16191] = 5,
    ACTIONS(472), 1,
      anon_sym_SLASH,
    STATE(143), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(552), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
    ACTIONS(462), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16222] = 8,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(554), 1,
      anon_sym_GT,
    ACTIONS(556), 1,
      sym_name,
    STATE(262), 1,
      sym_tuple_field,
    STATE(650), 1,
      sym_base_type,
    STATE(255), 2,
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
  [16259] = 5,
    ACTIONS(472), 1,
      anon_sym_SLASH,
    STATE(143), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(558), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
    ACTIONS(462), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16290] = 5,
    ACTIONS(472), 1,
      anon_sym_SLASH,
    STATE(143), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(560), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
    ACTIONS(462), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16321] = 5,
    ACTIONS(472), 1,
      anon_sym_SLASH,
    STATE(143), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(562), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
    ACTIONS(462), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16352] = 7,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    ACTIONS(569), 1,
      anon_sym_VERTEX,
    STATE(283), 1,
      sym_query_param,
    STATE(249), 2,
      sym_query_params,
      aux_sym_parameter_list_repeat1,
    STATE(812), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(566), 10,
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
  [16387] = 7,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
    ACTIONS(576), 1,
      anon_sym_VERTEX,
    STATE(283), 1,
      sym_query_param,
    STATE(249), 2,
      sym_query_params,
      aux_sym_parameter_list_repeat1,
    STATE(812), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(574), 10,
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
  [16422] = 5,
    ACTIONS(472), 1,
      anon_sym_SLASH,
    STATE(143), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(578), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
    ACTIONS(462), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16453] = 7,
    ACTIONS(576), 1,
      anon_sym_VERTEX,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      sym_query_param,
    STATE(250), 2,
      sym_query_params,
      aux_sym_parameter_list_repeat1,
    STATE(812), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(574), 10,
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
  [16488] = 8,
    ACTIONS(582), 1,
      anon_sym_GT,
    ACTIONS(587), 1,
      anon_sym_VERTEX,
    ACTIONS(590), 1,
      sym_name,
    STATE(262), 1,
      sym_tuple_field,
    STATE(650), 1,
      sym_base_type,
    STATE(253), 2,
      sym_tuple_fields,
      aux_sym_typedef_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(584), 10,
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
  [16525] = 5,
    ACTIONS(472), 1,
      anon_sym_SLASH,
    STATE(143), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(593), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
    ACTIONS(462), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16556] = 8,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(556), 1,
      sym_name,
    ACTIONS(595), 1,
      anon_sym_GT,
    STATE(262), 1,
      sym_tuple_field,
    STATE(650), 1,
      sym_base_type,
    STATE(253), 2,
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
  [16593] = 11,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(597), 1,
      anon_sym_DASH,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(614), 1,
      sym_constant,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(599), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [16635] = 11,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(597), 1,
      anon_sym_DASH,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(713), 1,
      sym_constant,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(599), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [16677] = 11,
    ACTIONS(601), 1,
      anon_sym_SUMACCUM,
    ACTIONS(607), 1,
      anon_sym_LISTACCUM,
    ACTIONS(611), 1,
      anon_sym_MAPACCUM,
    ACTIONS(613), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(615), 1,
      anon_sym_GROUPBYACCUM,
    ACTIONS(617), 1,
      anon_sym_ARRAYACCUM,
    STATE(662), 1,
      sym_accum_type,
    ACTIONS(603), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(609), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(605), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
  [16719] = 11,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(597), 1,
      anon_sym_DASH,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(568), 1,
      sym_constant,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(599), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [16761] = 7,
    ACTIONS(472), 1,
      anon_sym_SLASH,
    ACTIONS(621), 1,
      anon_sym_LBRACK,
    ACTIONS(623), 1,
      anon_sym_AS,
    STATE(143), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(619), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_to_csv,
    ACTIONS(462), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16795] = 11,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(400), 1,
      sym_digit,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(597), 1,
      anon_sym_DASH,
    STATE(36), 1,
      aux_sym_accum_type_repeat1,
    STATE(654), 1,
      sym_constant,
    STATE(58), 2,
      sym_numeric,
      sym_string_literal,
    STATE(59), 2,
      sym_integer,
      sym_real,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(599), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [16837] = 5,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    ACTIONS(627), 1,
      anon_sym_GT,
    STATE(265), 1,
      aux_sym_tuple_fields_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(629), 12,
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
  [16866] = 4,
    ACTIONS(633), 1,
      anon_sym_LT,
    ACTIONS(631), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(635), 12,
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
  [16893] = 5,
    ACTIONS(637), 1,
      anon_sym_COMMA,
    ACTIONS(640), 1,
      anon_sym_GT,
    STATE(264), 1,
      aux_sym_tuple_fields_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(642), 12,
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
  [16922] = 5,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    ACTIONS(644), 1,
      anon_sym_GT,
    STATE(264), 1,
      aux_sym_tuple_fields_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(646), 12,
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
  [16951] = 6,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(556), 1,
      sym_name,
    STATE(281), 1,
      sym_tuple_field,
    STATE(650), 1,
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
  [16981] = 4,
    ACTIONS(650), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(648), 12,
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
  [17007] = 7,
    ACTIONS(472), 1,
      anon_sym_SLASH,
    ACTIONS(653), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      sym_math_operator,
    STATE(455), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(527), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(462), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17039] = 3,
    ACTIONS(655), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(657), 12,
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
  [17063] = 4,
    ACTIONS(137), 1,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(197), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(135), 10,
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
  [17089] = 4,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(659), 12,
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
  [17115] = 14,
    ACTIONS(663), 1,
      anon_sym_LPAREN,
    ACTIONS(665), 1,
      anon_sym_LT,
    ACTIONS(669), 1,
      anon_sym_AT_AT,
    ACTIONS(671), 1,
      sym_name,
    STATE(418), 1,
      sym_edge_set_type,
    STATE(421), 1,
      sym_global_accum_name,
    STATE(424), 1,
      sym_atomic_edge_pattern,
    STATE(426), 1,
      sym_atomic_edge_type,
    STATE(510), 1,
      sym_path_edge_pattern,
    STATE(512), 1,
      sym_disj_pattern,
    STATE(625), 1,
      sym_step_edge_types,
    STATE(789), 1,
      sym_step_edge_set,
    ACTIONS(667), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [17161] = 3,
    ACTIONS(675), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(673), 13,
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
  [17185] = 3,
    ACTIONS(677), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(679), 12,
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
  [17209] = 5,
    ACTIONS(576), 1,
      anon_sym_VERTEX,
    STATE(292), 1,
      sym_query_param,
    STATE(812), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(574), 10,
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
  [17237] = 5,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(681), 1,
      sym_name,
    STATE(691), 2,
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
  [17265] = 5,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(683), 1,
      sym_name,
    STATE(690), 2,
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
  [17293] = 5,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(685), 1,
      sym_name,
    STATE(687), 2,
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
  [17321] = 8,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(527), 1,
      anon_sym_DASH_GT,
    STATE(151), 1,
      sym_math_operator,
    STATE(452), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(472), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(462), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17355] = 5,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(498), 1,
      sym_name,
    STATE(825), 2,
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
  [17383] = 3,
    ACTIONS(640), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(642), 12,
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
  [17407] = 8,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(527), 1,
      anon_sym_DASH_GT,
    STATE(151), 1,
      sym_math_operator,
    STATE(452), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(472), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(462), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17441] = 4,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(687), 12,
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
  [17467] = 3,
    ACTIONS(631), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(635), 12,
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
  [17491] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(197), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(536), 10,
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
  [17514] = 6,
    ACTIONS(472), 1,
      anon_sym_SLASH,
    ACTIONS(691), 1,
      anon_sym_SEMI,
    STATE(143), 1,
      sym_math_operator,
    ACTIONS(689), 2,
      anon_sym_COMMA,
      anon_sym_OFFSET,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(462), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17543] = 4,
    STATE(151), 1,
      sym_math_operator,
    ACTIONS(310), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(308), 10,
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
  [17568] = 4,
    ACTIONS(576), 1,
      anon_sym_VERTEX,
    STATE(624), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(574), 10,
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
  [17593] = 7,
    ACTIONS(472), 1,
      anon_sym_SLASH,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(695), 1,
      anon_sym_SEMI,
    STATE(143), 1,
      sym_math_operator,
    STATE(494), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(462), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17624] = 6,
    ACTIONS(472), 1,
      anon_sym_SLASH,
    ACTIONS(699), 1,
      anon_sym_AS,
    STATE(143), 1,
      sym_math_operator,
    ACTIONS(697), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(462), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17653] = 5,
    STATE(151), 1,
      sym_math_operator,
    ACTIONS(472), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(701), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(462), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17680] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(648), 13,
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
  [17701] = 5,
    STATE(151), 1,
      sym_math_operator,
    ACTIONS(472), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(492), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(462), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17728] = 4,
    ACTIONS(576), 1,
      anon_sym_VERTEX,
    STATE(484), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(574), 10,
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
  [17753] = 4,
    ACTIONS(576), 1,
      anon_sym_VERTEX,
    STATE(482), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(574), 10,
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
  [17778] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(197), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(540), 10,
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
  [17801] = 4,
    ACTIONS(576), 1,
      anon_sym_VERTEX,
    STATE(691), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(574), 10,
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
  [17826] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(703), 13,
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
  [17847] = 5,
    ACTIONS(472), 1,
      anon_sym_SLASH,
    STATE(143), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(701), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(462), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17874] = 12,
    ACTIONS(665), 1,
      anon_sym_LT,
    ACTIONS(669), 1,
      anon_sym_AT_AT,
    ACTIONS(671), 1,
      sym_name,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    STATE(420), 1,
      sym_edge_set_type,
    STATE(421), 1,
      sym_global_accum_name,
    STATE(422), 1,
      sym_atomic_edge_type,
    STATE(424), 1,
      sym_atomic_edge_pattern,
    STATE(512), 1,
      sym_disj_pattern,
    STATE(600), 1,
      sym_path_edge_pattern,
    ACTIONS(667), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [17914] = 6,
    ACTIONS(472), 1,
      anon_sym_SLASH,
    ACTIONS(707), 1,
      anon_sym_WHEN,
    STATE(143), 1,
      sym_math_operator,
    STATE(431), 1,
      aux_sym_dml_sub_case_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(462), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17942] = 5,
    ACTIONS(472), 1,
      anon_sym_SLASH,
    STATE(143), 1,
      sym_math_operator,
    ACTIONS(709), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(462), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17968] = 12,
    ACTIONS(665), 1,
      anon_sym_LT,
    ACTIONS(669), 1,
      anon_sym_AT_AT,
    ACTIONS(671), 1,
      sym_name,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    STATE(418), 1,
      sym_edge_set_type,
    STATE(421), 1,
      sym_global_accum_name,
    STATE(422), 1,
      sym_atomic_edge_type,
    STATE(424), 1,
      sym_atomic_edge_pattern,
    STATE(510), 1,
      sym_path_edge_pattern,
    STATE(512), 1,
      sym_disj_pattern,
    ACTIONS(667), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18008] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(181), 12,
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
  [18028] = 12,
    ACTIONS(665), 1,
      anon_sym_LT,
    ACTIONS(669), 1,
      anon_sym_AT_AT,
    ACTIONS(671), 1,
      sym_name,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    STATE(418), 1,
      sym_edge_set_type,
    STATE(421), 1,
      sym_global_accum_name,
    STATE(422), 1,
      sym_atomic_edge_type,
    STATE(424), 1,
      sym_atomic_edge_pattern,
    STATE(512), 1,
      sym_disj_pattern,
    STATE(600), 1,
      sym_path_edge_pattern,
    ACTIONS(667), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18068] = 6,
    ACTIONS(472), 1,
      anon_sym_SLASH,
    ACTIONS(711), 1,
      anon_sym_WHEN,
    STATE(143), 1,
      sym_math_operator,
    STATE(429), 1,
      aux_sym_query_body_case_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(462), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18096] = 12,
    ACTIONS(665), 1,
      anon_sym_LT,
    ACTIONS(669), 1,
      anon_sym_AT_AT,
    ACTIONS(671), 1,
      sym_name,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    STATE(418), 1,
      sym_edge_set_type,
    STATE(421), 1,
      sym_global_accum_name,
    STATE(422), 1,
      sym_atomic_edge_type,
    STATE(424), 1,
      sym_atomic_edge_pattern,
    STATE(512), 1,
      sym_disj_pattern,
    STATE(548), 1,
      sym_path_edge_pattern,
    ACTIONS(667), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18136] = 4,
    ACTIONS(715), 1,
      anon_sym_VERTEX,
    STATE(274), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(713), 10,
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
  [18160] = 5,
    ACTIONS(472), 1,
      anon_sym_SLASH,
    ACTIONS(717), 1,
      anon_sym_SEMI,
    STATE(143), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(462), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18185] = 5,
    ACTIONS(472), 1,
      anon_sym_SLASH,
    ACTIONS(719), 1,
      anon_sym_AND,
    STATE(143), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(462), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18210] = 5,
    ACTIONS(472), 1,
      anon_sym_SLASH,
    ACTIONS(721), 1,
      anon_sym_SEMI,
    STATE(143), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(462), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18235] = 5,
    ACTIONS(472), 1,
      anon_sym_SLASH,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(462), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18260] = 5,
    ACTIONS(472), 1,
      anon_sym_SLASH,
    ACTIONS(725), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(462), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18285] = 5,
    ACTIONS(472), 1,
      anon_sym_SLASH,
    ACTIONS(727), 1,
      anon_sym_SEMI,
    STATE(143), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(462), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18310] = 5,
    ACTIONS(472), 1,
      anon_sym_SLASH,
    ACTIONS(721), 1,
      anon_sym_SEMI,
    STATE(143), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(462), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18335] = 5,
    ACTIONS(472), 1,
      anon_sym_SLASH,
    ACTIONS(729), 1,
      anon_sym_RBRACK,
    STATE(143), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(462), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18360] = 11,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(731), 1,
      anon_sym_LPAREN,
    ACTIONS(733), 1,
      anon_sym_GT,
    ACTIONS(737), 1,
      sym_name,
    STATE(320), 1,
      sym_global_accum_name,
    STATE(339), 1,
      sym_atomic_vertex_type,
    STATE(340), 1,
      sym_step_vertex_types,
    STATE(341), 1,
      sym_vertex_set_type,
    STATE(413), 1,
      sym_step_vertex_set,
    ACTIONS(735), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18397] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(540), 10,
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
  [18415] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(536), 10,
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
  [18433] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(739), 10,
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
  [18451] = 10,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(731), 1,
      anon_sym_LPAREN,
    ACTIONS(737), 1,
      sym_name,
    STATE(320), 1,
      sym_global_accum_name,
    STATE(339), 1,
      sym_atomic_vertex_type,
    STATE(340), 1,
      sym_step_vertex_types,
    STATE(341), 1,
      sym_vertex_set_type,
    STATE(373), 1,
      sym_step_vertex_set,
    ACTIONS(735), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18485] = 10,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(731), 1,
      anon_sym_LPAREN,
    ACTIONS(737), 1,
      sym_name,
    STATE(320), 1,
      sym_global_accum_name,
    STATE(339), 1,
      sym_atomic_vertex_type,
    STATE(340), 1,
      sym_step_vertex_types,
    STATE(341), 1,
      sym_vertex_set_type,
    STATE(367), 1,
      sym_step_vertex_set,
    ACTIONS(735), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18519] = 5,
    ACTIONS(743), 1,
      anon_sym_DOT,
    ACTIONS(745), 1,
      anon_sym_PLUS_EQ,
    STATE(331), 1,
      aux_sym_v_accum_func_call_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(741), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [18543] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(540), 10,
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
  [18561] = 10,
    ACTIONS(747), 1,
      anon_sym_SEMI,
    ACTIONS(749), 1,
      anon_sym_WHERE,
    ACTIONS(751), 1,
      anon_sym_ACCUM,
    ACTIONS(753), 1,
      anon_sym_LIMIT,
    ACTIONS(755), 1,
      anon_sym_post_DASHaccum,
    STATE(337), 1,
      sym_where_clause,
    STATE(377), 1,
      sym_accum_clause,
    STATE(664), 1,
      sym_limit_clause,
    STATE(383), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18595] = 10,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(731), 1,
      anon_sym_LPAREN,
    ACTIONS(737), 1,
      sym_name,
    STATE(320), 1,
      sym_global_accum_name,
    STATE(339), 1,
      sym_atomic_vertex_type,
    STATE(340), 1,
      sym_step_vertex_types,
    STATE(341), 1,
      sym_vertex_set_type,
    STATE(415), 1,
      sym_step_vertex_set,
    ACTIONS(735), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18629] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(757), 10,
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
  [18647] = 9,
    ACTIONS(759), 1,
      anon_sym_LPAREN,
    ACTIONS(761), 1,
      anon_sym_LBRACE,
    ACTIONS(763), 1,
      anon_sym_SELECT,
    ACTIONS(765), 1,
      sym_name,
    STATE(475), 1,
      sym_simple_set,
    STATE(613), 1,
      sym_gsql_select_clause,
    STATE(750), 1,
      sym_gsql_select_block,
    STATE(676), 2,
      sym_seed_set,
      sym_select_stmt,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18678] = 4,
    ACTIONS(769), 1,
      anon_sym_DOT,
    STATE(329), 1,
      aux_sym_v_accum_func_call_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(767), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [18699] = 9,
    ACTIONS(665), 1,
      anon_sym_LT,
    ACTIONS(669), 1,
      anon_sym_AT_AT,
    ACTIONS(671), 1,
      sym_name,
    STATE(418), 1,
      sym_edge_set_type,
    STATE(421), 1,
      sym_global_accum_name,
    STATE(422), 1,
      sym_atomic_edge_type,
    STATE(471), 1,
      sym_atomic_edge_pattern,
    ACTIONS(667), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18730] = 4,
    ACTIONS(743), 1,
      anon_sym_DOT,
    STATE(329), 1,
      aux_sym_v_accum_func_call_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(772), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [18751] = 3,
    ACTIONS(776), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(774), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [18769] = 4,
    ACTIONS(780), 1,
      anon_sym_DASH,
    STATE(347), 1,
      aux_sym_path_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(778), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [18789] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(782), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [18805] = 4,
    ACTIONS(784), 1,
      anon_sym_COMMA,
    STATE(335), 1,
      aux_sym_dml_sub_stmt_list_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(787), 6,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [18825] = 4,
    ACTIONS(791), 1,
      anon_sym_DASH,
    STATE(333), 1,
      aux_sym_path_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(789), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [18845] = 8,
    ACTIONS(751), 1,
      anon_sym_ACCUM,
    ACTIONS(753), 1,
      anon_sym_LIMIT,
    ACTIONS(755), 1,
      anon_sym_post_DASHaccum,
    ACTIONS(793), 1,
      anon_sym_SEMI,
    STATE(392), 1,
      sym_accum_clause,
    STATE(646), 1,
      sym_limit_clause,
    STATE(390), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18873] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(795), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [18889] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(797), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [18905] = 3,
    ACTIONS(801), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(799), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [18923] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(803), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [18939] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(805), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [18955] = 4,
    ACTIONS(807), 1,
      anon_sym_COMMA,
    STATE(335), 1,
      aux_sym_dml_sub_stmt_list_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(809), 6,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [18975] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(811), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [18991] = 4,
    ACTIONS(807), 1,
      anon_sym_COMMA,
    STATE(343), 1,
      aux_sym_dml_sub_stmt_list_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(813), 6,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19011] = 4,
    ACTIONS(780), 1,
      anon_sym_DASH,
    STATE(333), 1,
      aux_sym_path_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(789), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19031] = 4,
    ACTIONS(817), 1,
      anon_sym_DASH,
    STATE(347), 1,
      aux_sym_path_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(815), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19051] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(820), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [19066] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(822), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [19081] = 4,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    STATE(358), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(826), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19100] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(828), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19115] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(830), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19130] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(671), 1,
      sym_name,
    STATE(418), 1,
      sym_edge_set_type,
    STATE(421), 1,
      sym_global_accum_name,
    STATE(451), 1,
      sym_atomic_edge_type,
    ACTIONS(667), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19155] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(832), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19170] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(834), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19185] = 7,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(669), 1,
      anon_sym_AT_AT,
    ACTIONS(836), 1,
      anon_sym_LPAREN,
    ACTIONS(838), 1,
      sym_name,
    STATE(795), 1,
      sym_for_each_control,
    STATE(605), 2,
      sym_global_accum_name,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19210] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(840), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19225] = 4,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    STATE(358), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(845), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19244] = 2,
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
  [19259] = 2,
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
  [19274] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(851), 1,
      anon_sym_RBRACE,
    ACTIONS(855), 1,
      sym_name,
    STATE(578), 1,
      sym_seed,
    STATE(601), 1,
      sym_global_accum_name,
    ACTIONS(853), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19299] = 8,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(857), 1,
      anon_sym_LPAREN,
    ACTIONS(859), 1,
      anon_sym_DISTINCT,
    ACTIONS(861), 1,
      sym_name,
    STATE(24), 1,
      sym_name_dot,
    STATE(38), 1,
      sym_global_accum_name,
    STATE(467), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19326] = 4,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    STATE(350), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(863), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19345] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(787), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19360] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(865), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19375] = 5,
    ACTIONS(867), 1,
      ts_builtin_sym_end,
    ACTIONS(869), 1,
      anon_sym_CREATE,
    ACTIONS(872), 1,
      anon_sym_INTERPRET,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    STATE(366), 4,
      sym__definition,
      sym_create_query,
      sym_interpret_query,
      aux_sym_gsql_repeat1,
  [19396] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(875), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [19411] = 8,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(857), 1,
      anon_sym_LPAREN,
    ACTIONS(861), 1,
      sym_name,
    ACTIONS(877), 1,
      anon_sym_RANGE,
    STATE(24), 1,
      sym_name_dot,
    STATE(38), 1,
      sym_global_accum_name,
    STATE(442), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19438] = 8,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(857), 1,
      anon_sym_LPAREN,
    ACTIONS(861), 1,
      sym_name,
    ACTIONS(879), 1,
      anon_sym_DISTINCT,
    STATE(24), 1,
      sym_name_dot,
    STATE(38), 1,
      sym_global_accum_name,
    STATE(433), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19465] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(881), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19480] = 5,
    ACTIONS(7), 1,
      anon_sym_CREATE,
    ACTIONS(9), 1,
      anon_sym_INTERPRET,
    ACTIONS(883), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    STATE(366), 4,
      sym__definition,
      sym_create_query,
      sym_interpret_query,
      aux_sym_gsql_repeat1,
  [19501] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(885), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19516] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(887), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [19531] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(889), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19546] = 7,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(669), 1,
      anon_sym_AT_AT,
    ACTIONS(836), 1,
      anon_sym_LPAREN,
    ACTIONS(838), 1,
      sym_name,
    STATE(726), 1,
      sym_for_each_control,
    STATE(605), 2,
      sym_global_accum_name,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19571] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(891), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19586] = 6,
    ACTIONS(753), 1,
      anon_sym_LIMIT,
    ACTIONS(755), 1,
      anon_sym_post_DASHaccum,
    ACTIONS(793), 1,
      anon_sym_SEMI,
    STATE(646), 1,
      sym_limit_clause,
    STATE(390), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19608] = 6,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(855), 1,
      sym_name,
    STATE(601), 1,
      sym_global_accum_name,
    STATE(631), 1,
      sym_seed,
    ACTIONS(853), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19630] = 6,
    ACTIONS(753), 1,
      anon_sym_LIMIT,
    ACTIONS(755), 1,
      anon_sym_post_DASHaccum,
    ACTIONS(893), 1,
      anon_sym_SEMI,
    STATE(766), 1,
      sym_limit_clause,
    STATE(416), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19652] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(857), 1,
      anon_sym_LPAREN,
    ACTIONS(895), 1,
      sym_name,
    STATE(24), 1,
      sym_name_dot,
    STATE(38), 1,
      sym_global_accum_name,
    STATE(285), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19676] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(857), 1,
      anon_sym_LPAREN,
    ACTIONS(895), 1,
      sym_name,
    STATE(24), 1,
      sym_name_dot,
    STATE(37), 1,
      sym_set_bag_expr,
    STATE(38), 1,
      sym_global_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19700] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(857), 1,
      anon_sym_LPAREN,
    ACTIONS(895), 1,
      sym_name,
    STATE(24), 1,
      sym_name_dot,
    STATE(38), 1,
      sym_global_accum_name,
    STATE(442), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19724] = 6,
    ACTIONS(753), 1,
      anon_sym_LIMIT,
    ACTIONS(755), 1,
      anon_sym_post_DASHaccum,
    ACTIONS(793), 1,
      anon_sym_SEMI,
    STATE(646), 1,
      sym_limit_clause,
    STATE(416), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19746] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(857), 1,
      anon_sym_LPAREN,
    ACTIONS(895), 1,
      sym_name,
    STATE(24), 1,
      sym_name_dot,
    STATE(38), 1,
      sym_global_accum_name,
    STATE(296), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19770] = 2,
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
  [19784] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(857), 1,
      anon_sym_LPAREN,
    ACTIONS(895), 1,
      sym_name,
    STATE(24), 1,
      sym_name_dot,
    STATE(38), 1,
      sym_global_accum_name,
    STATE(450), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19808] = 7,
    ACTIONS(360), 1,
      anon_sym_AT_AT,
    ACTIONS(897), 1,
      anon_sym_LPAREN,
    ACTIONS(899), 1,
      sym_name,
    STATE(187), 1,
      sym_name_dot,
    STATE(199), 1,
      sym_set_bag_expr,
    STATE(201), 1,
      sym_global_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19832] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(857), 1,
      anon_sym_LPAREN,
    ACTIONS(895), 1,
      sym_name,
    STATE(24), 1,
      sym_name_dot,
    STATE(38), 1,
      sym_global_accum_name,
    STATE(456), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19856] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(857), 1,
      anon_sym_LPAREN,
    ACTIONS(895), 1,
      sym_name,
    STATE(24), 1,
      sym_name_dot,
    STATE(38), 1,
      sym_global_accum_name,
    STATE(467), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19880] = 6,
    ACTIONS(753), 1,
      anon_sym_LIMIT,
    ACTIONS(755), 1,
      anon_sym_post_DASHaccum,
    ACTIONS(901), 1,
      anon_sym_SEMI,
    STATE(802), 1,
      sym_limit_clause,
    STATE(416), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19902] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(845), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19916] = 6,
    ACTIONS(753), 1,
      anon_sym_LIMIT,
    ACTIONS(755), 1,
      anon_sym_post_DASHaccum,
    ACTIONS(901), 1,
      anon_sym_SEMI,
    STATE(802), 1,
      sym_limit_clause,
    STATE(379), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19938] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(857), 1,
      anon_sym_LPAREN,
    ACTIONS(895), 1,
      sym_name,
    STATE(24), 1,
      sym_name_dot,
    STATE(38), 1,
      sym_global_accum_name,
    STATE(428), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19962] = 5,
    ACTIONS(195), 1,
      sym_digit,
    ACTIONS(905), 1,
      anon_sym_DOT,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(903), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_THEN,
  [19982] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(857), 1,
      anon_sym_LPAREN,
    ACTIONS(895), 1,
      sym_name,
    STATE(24), 1,
      sym_name_dot,
    STATE(38), 1,
      sym_global_accum_name,
    STATE(433), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20006] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(857), 1,
      anon_sym_LPAREN,
    ACTIONS(895), 1,
      sym_name,
    STATE(24), 1,
      sym_name_dot,
    STATE(38), 1,
      sym_global_accum_name,
    STATE(470), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20030] = 3,
    ACTIONS(907), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(909), 4,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [20046] = 6,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(911), 1,
      sym_name,
    STATE(655), 1,
      sym_file_path,
    STATE(739), 1,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20067] = 4,
    ACTIONS(915), 1,
      anon_sym_PIPE,
    STATE(400), 1,
      aux_sym_disj_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(913), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [20084] = 4,
    ACTIONS(919), 1,
      anon_sym_PIPE,
    STATE(400), 1,
      aux_sym_disj_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(917), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [20101] = 3,
    ACTIONS(922), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(924), 4,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20116] = 6,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(926), 1,
      sym_name,
    STATE(739), 1,
      sym_string_literal,
    STATE(780), 1,
      sym_file_path,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20137] = 6,
    ACTIONS(928), 1,
      anon_sym_COMMA,
    ACTIONS(930), 1,
      anon_sym_SEMI,
    ACTIONS(932), 1,
      anon_sym_WHERE,
    ACTIONS(934), 1,
      anon_sym_to_csv,
    STATE(404), 1,
      aux_sym_print_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20158] = 4,
    ACTIONS(936), 1,
      anon_sym_COMMA,
    STATE(404), 1,
      aux_sym_print_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(939), 3,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_to_csv,
  [20175] = 6,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LT,
    ACTIONS(941), 1,
      anon_sym_EQ,
    ACTIONS(943), 1,
      anon_sym_DOT,
    STATE(46), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20196] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(945), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_to_csv,
      anon_sym_AS,
  [20209] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(863), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [20222] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(924), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20235] = 4,
    ACTIONS(195), 1,
      sym_digit,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(947), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_THEN,
  [20252] = 6,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(949), 1,
      sym_name,
    STATE(727), 1,
      sym_file_path,
    STATE(739), 1,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20273] = 6,
    ACTIONS(928), 1,
      anon_sym_COMMA,
    ACTIONS(951), 1,
      anon_sym_SEMI,
    ACTIONS(953), 1,
      anon_sym_WHERE,
    ACTIONS(955), 1,
      anon_sym_to_csv,
    STATE(403), 1,
      aux_sym_print_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20294] = 3,
    ACTIONS(623), 1,
      anon_sym_AS,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(619), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_to_csv,
  [20309] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(957), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [20322] = 6,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_LT,
    ACTIONS(959), 1,
      anon_sym_EQ,
    ACTIONS(961), 1,
      anon_sym_DOT,
    STATE(46), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20343] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(963), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [20356] = 4,
    ACTIONS(967), 1,
      anon_sym_post_DASHaccum,
    ACTIONS(965), 2,
      anon_sym_SEMI,
      anon_sym_LIMIT,
    STATE(416), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20373] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(970), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_to_csv,
      anon_sym_AS,
  [20386] = 2,
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
  [20399] = 6,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(974), 1,
      sym_name,
    STATE(739), 1,
      sym_string_literal,
    STATE(815), 1,
      sym_file_path,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20420] = 5,
    ACTIONS(976), 1,
      anon_sym_RPAREN,
    ACTIONS(978), 1,
      anon_sym_PIPE,
    STATE(556), 1,
      aux_sym_step_edge_types_repeat1,
    ACTIONS(972), 2,
      anon_sym_GT,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20439] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(980), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20452] = 3,
    ACTIONS(984), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(982), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20467] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(986), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20480] = 4,
    ACTIONS(915), 1,
      anon_sym_PIPE,
    STATE(399), 1,
      aux_sym_disj_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(988), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [20497] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(986), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20510] = 4,
    ACTIONS(984), 1,
      anon_sym_GT,
    ACTIONS(982), 2,
      anon_sym_DOT,
      anon_sym_PIPE,
    ACTIONS(990), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20527] = 3,
    ACTIONS(994), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(992), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [20541] = 3,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(197), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20555] = 5,
    ACTIONS(711), 1,
      anon_sym_WHEN,
    ACTIONS(998), 1,
      anon_sym_ELSE,
    ACTIONS(1000), 1,
      anon_sym_END,
    STATE(439), 1,
      aux_sym_query_body_case_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20573] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1002), 4,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
  [20585] = 5,
    ACTIONS(707), 1,
      anon_sym_WHEN,
    ACTIONS(1004), 1,
      anon_sym_ELSE,
    ACTIONS(1006), 1,
      anon_sym_END,
    STATE(440), 1,
      aux_sym_dml_sub_case_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20603] = 4,
    ACTIONS(1008), 1,
      anon_sym_SEMI,
    ACTIONS(1010), 1,
      anon_sym_to_csv,
    ACTIONS(907), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20619] = 3,
    ACTIONS(1012), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(197), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20633] = 4,
    ACTIONS(1016), 1,
      anon_sym_WHEN,
    STATE(434), 1,
      aux_sym_query_body_case_stmt_repeat1,
    ACTIONS(1014), 2,
      anon_sym_ELSE,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20649] = 5,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(1019), 1,
      sym_name,
    STATE(320), 1,
      sym_global_accum_name,
    STATE(486), 1,
      sym_vertex_set_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20667] = 3,
    ACTIONS(1023), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1021), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [20681] = 5,
    ACTIONS(1025), 1,
      sym_name,
    ACTIONS(1027), 1,
      sym_digit,
    STATE(536), 1,
      aux_sym_accum_type_repeat1,
    STATE(673), 1,
      sym_simple_size,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20699] = 4,
    ACTIONS(1029), 1,
      anon_sym_COMMA,
    STATE(438), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(701), 2,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20715] = 4,
    ACTIONS(1034), 1,
      anon_sym_WHEN,
    STATE(439), 1,
      aux_sym_query_body_case_stmt_repeat2,
    ACTIONS(1032), 2,
      anon_sym_ELSE,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20731] = 4,
    ACTIONS(1039), 1,
      anon_sym_WHEN,
    STATE(440), 1,
      aux_sym_dml_sub_case_stmt_repeat2,
    ACTIONS(1037), 2,
      anon_sym_ELSE,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20747] = 4,
    ACTIONS(1044), 1,
      anon_sym_WHEN,
    STATE(441), 1,
      aux_sym_dml_sub_case_stmt_repeat1,
    ACTIONS(1042), 2,
      anon_sym_ELSE,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20763] = 3,
    ACTIONS(1047), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(197), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20777] = 5,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(1049), 1,
      anon_sym_EQ,
    ACTIONS(1051), 1,
      anon_sym_SEMI,
    STATE(493), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20795] = 5,
    ACTIONS(1053), 1,
      anon_sym_COMMA,
    ACTIONS(1055), 1,
      anon_sym_EQ,
    ACTIONS(1057), 1,
      anon_sym_SEMI,
    STATE(491), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20813] = 5,
    ACTIONS(1059), 1,
      sym_name,
    STATE(336), 1,
      sym_step_source_set,
    STATE(363), 1,
      sym_path_pattern,
    STATE(407), 1,
      sym_step,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20831] = 5,
    ACTIONS(1061), 1,
      anon_sym_ELSE,
    ACTIONS(1063), 1,
      anon_sym_END,
    ACTIONS(1065), 1,
      anon_sym_WHEN,
    STATE(441), 1,
      aux_sym_dml_sub_case_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20849] = 4,
    ACTIONS(1067), 1,
      anon_sym_LIMIT,
    ACTIONS(1069), 1,
      anon_sym_DO,
    ACTIONS(907), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20865] = 4,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(569), 2,
      sym_global_accum_name,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20881] = 5,
    ACTIONS(1025), 1,
      sym_name,
    ACTIONS(1027), 1,
      sym_digit,
    STATE(536), 1,
      aux_sym_accum_type_repeat1,
    STATE(709), 1,
      sym_simple_size,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20899] = 3,
    ACTIONS(1071), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(197), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20913] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1073), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20925] = 4,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    STATE(438), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(1075), 2,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20941] = 5,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(1019), 1,
      sym_name,
    STATE(320), 1,
      sym_global_accum_name,
    STATE(590), 1,
      sym_vertex_set_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20959] = 5,
    ACTIONS(1077), 1,
      anon_sym_ELSE,
    ACTIONS(1079), 1,
      anon_sym_END,
    ACTIONS(1081), 1,
      anon_sym_WHEN,
    STATE(434), 1,
      aux_sym_query_body_case_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20977] = 4,
    ACTIONS(653), 1,
      anon_sym_COMMA,
    STATE(462), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(1075), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20993] = 3,
    ACTIONS(1071), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(197), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21007] = 4,
    ACTIONS(1083), 1,
      anon_sym_LIMIT,
    ACTIONS(1085), 1,
      anon_sym_DO,
    ACTIONS(907), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21023] = 5,
    ACTIONS(149), 1,
      anon_sym_DOT,
    ACTIONS(1087), 1,
      anon_sym_EQ,
    ACTIONS(1089), 1,
      anon_sym_PLUS_EQ,
    STATE(46), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21041] = 3,
    ACTIONS(1093), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1091), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [21055] = 4,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(444), 2,
      sym_global_accum_name,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21071] = 3,
    ACTIONS(1097), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1095), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [21085] = 4,
    ACTIONS(1099), 1,
      anon_sym_COMMA,
    STATE(462), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(701), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21101] = 3,
    ACTIONS(1104), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1102), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [21115] = 3,
    ACTIONS(1108), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1106), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [21129] = 3,
    ACTIONS(1112), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1110), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [21143] = 3,
    ACTIONS(1114), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1116), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21157] = 3,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(197), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21171] = 3,
    ACTIONS(1120), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(631), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [21185] = 5,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(1122), 1,
      sym_name,
    STATE(421), 1,
      sym_global_accum_name,
    STATE(622), 1,
      sym_edge_set_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21203] = 3,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(197), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21217] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(917), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [21229] = 4,
    ACTIONS(1126), 1,
      anon_sym_SEMI,
    ACTIONS(1128), 1,
      anon_sym_to_csv,
    ACTIONS(907), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21245] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(939), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_to_csv,
  [21257] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1130), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_to_csv,
  [21269] = 3,
    ACTIONS(1132), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1116), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21283] = 4,
    ACTIONS(1134), 1,
      anon_sym_COMMA,
    ACTIONS(1137), 1,
      anon_sym_GT,
    STATE(476), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21298] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1139), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [21309] = 4,
    ACTIONS(1141), 1,
      anon_sym_ELSE,
    ACTIONS(1144), 1,
      anon_sym_END,
    STATE(478), 1,
      aux_sym_query_body_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21324] = 3,
    ACTIONS(1146), 1,
      anon_sym_RPAREN,
    ACTIONS(907), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21337] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1148), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [21348] = 4,
    ACTIONS(1150), 1,
      anon_sym_COMMA,
    ACTIONS(1152), 1,
      anon_sym_GT,
    STATE(476), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21363] = 4,
    ACTIONS(1150), 1,
      anon_sym_COMMA,
    ACTIONS(1154), 1,
      anon_sym_GT,
    STATE(481), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21378] = 4,
    ACTIONS(759), 1,
      anon_sym_LPAREN,
    ACTIONS(1156), 1,
      sym_name,
    STATE(466), 1,
      sym_simple_set,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21393] = 4,
    ACTIONS(1150), 1,
      anon_sym_COMMA,
    ACTIONS(1158), 1,
      anon_sym_GT,
    STATE(587), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21408] = 3,
    ACTIONS(1160), 1,
      anon_sym_THEN,
    ACTIONS(907), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21421] = 4,
    ACTIONS(1162), 1,
      anon_sym_RPAREN,
    ACTIONS(1164), 1,
      anon_sym_PIPE,
    STATE(546), 1,
      aux_sym_step_vertex_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21436] = 4,
    ACTIONS(195), 1,
      sym_digit,
    ACTIONS(1166), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21451] = 3,
    ACTIONS(1168), 1,
      anon_sym_RPAREN,
    ACTIONS(907), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21464] = 3,
    ACTIONS(1170), 1,
      anon_sym_RPAREN,
    ACTIONS(907), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21477] = 4,
    ACTIONS(1172), 1,
      anon_sym_RPAREN,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    STATE(562), 1,
      aux_sym_accum_type_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21492] = 4,
    ACTIONS(1053), 1,
      anon_sym_COMMA,
    ACTIONS(1176), 1,
      anon_sym_SEMI,
    STATE(566), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21507] = 3,
    ACTIONS(1178), 1,
      anon_sym_RPAREN,
    ACTIONS(907), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21520] = 4,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(1180), 1,
      anon_sym_SEMI,
    STATE(563), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21535] = 4,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(1182), 1,
      anon_sym_SEMI,
    STATE(563), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21550] = 4,
    ACTIONS(1184), 1,
      anon_sym_COMMA,
    ACTIONS(1187), 1,
      anon_sym_RBRACK,
    STATE(495), 1,
      aux_sym_v_expr_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21565] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(631), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [21576] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1189), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [21587] = 4,
    ACTIONS(1053), 1,
      anon_sym_COMMA,
    ACTIONS(1191), 1,
      anon_sym_SEMI,
    STATE(566), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21602] = 4,
    ACTIONS(1193), 1,
      anon_sym_ELSE,
    ACTIONS(1196), 1,
      anon_sym_END,
    STATE(499), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21617] = 4,
    ACTIONS(1198), 1,
      anon_sym_SQUOTE,
    ACTIONS(1200), 1,
      aux_sym_string_literal_token2,
    STATE(511), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1202), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21632] = 4,
    ACTIONS(1204), 1,
      anon_sym_COMMA,
    ACTIONS(1207), 1,
      anon_sym_RBRACE,
    STATE(501), 1,
      aux_sym_seed_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21647] = 4,
    ACTIONS(1198), 1,
      anon_sym_DQUOTE,
    ACTIONS(1209), 1,
      aux_sym_string_literal_token1,
    STATE(509), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1202), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21662] = 4,
    ACTIONS(1211), 1,
      anon_sym_AT,
    ACTIONS(1213), 1,
      sym_name,
    STATE(188), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21677] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1215), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [21688] = 4,
    ACTIONS(1217), 1,
      anon_sym_AT,
    ACTIONS(1219), 1,
      sym_name,
    STATE(323), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21703] = 4,
    ACTIONS(1221), 1,
      anon_sym_SQUOTE,
    ACTIONS(1223), 1,
      aux_sym_string_literal_token2,
    STATE(500), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1202), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21718] = 3,
    ACTIONS(1225), 1,
      anon_sym_THEN,
    ACTIONS(907), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21731] = 4,
    ACTIONS(1221), 1,
      anon_sym_DQUOTE,
    ACTIONS(1227), 1,
      aux_sym_string_literal_token1,
    STATE(502), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1202), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21746] = 4,
    ACTIONS(1229), 1,
      anon_sym_DQUOTE,
    ACTIONS(1231), 1,
      aux_sym_string_literal_token1,
    STATE(509), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1202), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21761] = 4,
    ACTIONS(1234), 1,
      anon_sym_RPAREN,
    ACTIONS(1236), 1,
      anon_sym_DOT,
    ACTIONS(1238), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21776] = 4,
    ACTIONS(1240), 1,
      anon_sym_SQUOTE,
    ACTIONS(1242), 1,
      aux_sym_string_literal_token2,
    STATE(511), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1202), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21791] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(988), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [21802] = 4,
    ACTIONS(1245), 1,
      anon_sym_SYNTAX,
    ACTIONS(1247), 1,
      anon_sym_LBRACE,
    STATE(523), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21817] = 4,
    ACTIONS(1249), 1,
      anon_sym_ELSE,
    ACTIONS(1251), 1,
      anon_sym_END,
    STATE(538), 1,
      aux_sym_query_body_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21832] = 4,
    ACTIONS(1253), 1,
      anon_sym_RPAREN,
    ACTIONS(1255), 1,
      anon_sym_PIPE,
    STATE(515), 1,
      aux_sym_step_edge_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21847] = 4,
    ACTIONS(1258), 1,
      anon_sym_COMMA,
    ACTIONS(1260), 1,
      anon_sym_RBRACE,
    STATE(501), 1,
      aux_sym_seed_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21862] = 4,
    ACTIONS(1247), 1,
      anon_sym_LBRACE,
    ACTIONS(1262), 1,
      anon_sym_SYNTAX,
    STATE(526), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21877] = 3,
    ACTIONS(1264), 1,
      anon_sym_THEN,
    ACTIONS(907), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21890] = 4,
    ACTIONS(1266), 1,
      anon_sym_COMMA,
    ACTIONS(1268), 1,
      anon_sym_GT,
    STATE(524), 1,
      aux_sym_accum_type_repeat4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21905] = 4,
    ACTIONS(1247), 1,
      anon_sym_LBRACE,
    ACTIONS(1270), 1,
      anon_sym_SYNTAX,
    STATE(532), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21920] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(655), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [21931] = 4,
    ACTIONS(1272), 1,
      anon_sym_COMMA,
    ACTIONS(1274), 1,
      anon_sym_RBRACK,
    STATE(495), 1,
      aux_sym_v_expr_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21946] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1276), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [21957] = 4,
    ACTIONS(1278), 1,
      anon_sym_COMMA,
    ACTIONS(1281), 1,
      anon_sym_GT,
    STATE(524), 1,
      aux_sym_accum_type_repeat4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21972] = 4,
    ACTIONS(193), 1,
      anon_sym_DOT,
    ACTIONS(1283), 1,
      sym_digit,
    STATE(394), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21987] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1285), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [21998] = 4,
    ACTIONS(1247), 1,
      anon_sym_LBRACE,
    ACTIONS(1287), 1,
      anon_sym_SYNTAX,
    STATE(544), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22013] = 4,
    ACTIONS(1289), 1,
      anon_sym_LPAREN,
    ACTIONS(1291), 1,
      anon_sym_EQ,
    ACTIONS(1293), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22028] = 4,
    ACTIONS(1295), 1,
      anon_sym_RPAREN,
    ACTIONS(1297), 1,
      anon_sym_COMMA,
    STATE(529), 1,
      aux_sym_for_each_control_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22043] = 4,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    ACTIONS(1268), 1,
      anon_sym_RPAREN,
    STATE(490), 1,
      aux_sym_accum_type_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22058] = 3,
    ACTIONS(1300), 1,
      anon_sym_THEN,
    ACTIONS(907), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22071] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1302), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [22082] = 4,
    ACTIONS(1249), 1,
      anon_sym_ELSE,
    ACTIONS(1251), 1,
      anon_sym_END,
    STATE(538), 1,
      aux_sym_query_body_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22097] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1304), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [22108] = 4,
    ACTIONS(1211), 1,
      anon_sym_AT,
    ACTIONS(1306), 1,
      sym_name,
    STATE(188), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22123] = 4,
    ACTIONS(195), 1,
      sym_digit,
    ACTIONS(1308), 1,
      anon_sym_DO,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22138] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1310), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [22149] = 4,
    ACTIONS(1312), 1,
      anon_sym_ELSE,
    ACTIONS(1314), 1,
      anon_sym_END,
    STATE(478), 1,
      aux_sym_query_body_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22164] = 4,
    ACTIONS(1316), 1,
      anon_sym_RPAREN,
    ACTIONS(1318), 1,
      anon_sym_COMMA,
    STATE(529), 1,
      aux_sym_for_each_control_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22179] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1320), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [22190] = 4,
    ACTIONS(1322), 1,
      anon_sym_ELSE,
    ACTIONS(1324), 1,
      anon_sym_END,
    STATE(499), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22205] = 3,
    ACTIONS(1326), 1,
      anon_sym_THEN,
    ACTIONS(907), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22218] = 4,
    ACTIONS(1247), 1,
      anon_sym_LBRACE,
    ACTIONS(1328), 1,
      anon_sym_SYNTAX,
    STATE(570), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22233] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1330), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [22244] = 4,
    ACTIONS(1272), 1,
      anon_sym_COMMA,
    ACTIONS(1332), 1,
      anon_sym_RBRACK,
    STATE(522), 1,
      aux_sym_v_expr_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22259] = 4,
    ACTIONS(1164), 1,
      anon_sym_PIPE,
    ACTIONS(1334), 1,
      anon_sym_RPAREN,
    STATE(588), 1,
      aux_sym_step_vertex_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22274] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1336), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [22285] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1338), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [22296] = 4,
    ACTIONS(1340), 1,
      anon_sym_AT,
    ACTIONS(1342), 1,
      sym_name,
    STATE(22), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22311] = 4,
    ACTIONS(1344), 1,
      anon_sym_OR,
    ACTIONS(1346), 1,
      anon_sym_DISTRIBUTED,
    ACTIONS(1348), 1,
      anon_sym_QUERY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22326] = 4,
    ACTIONS(1350), 1,
      anon_sym_DQUOTE,
    ACTIONS(1352), 1,
      aux_sym_string_literal_token1,
    STATE(581), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1202), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22341] = 4,
    ACTIONS(1266), 1,
      anon_sym_COMMA,
    ACTIONS(1354), 1,
      anon_sym_GT,
    STATE(571), 1,
      aux_sym_accum_type_repeat4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22356] = 4,
    ACTIONS(1350), 1,
      anon_sym_SQUOTE,
    ACTIONS(1356), 1,
      aux_sym_string_literal_token2,
    STATE(583), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1202), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22371] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1358), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [22382] = 3,
    ACTIONS(1360), 1,
      anon_sym_THEN,
    ACTIONS(907), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22395] = 4,
    ACTIONS(978), 1,
      anon_sym_PIPE,
    ACTIONS(1362), 1,
      anon_sym_RPAREN,
    STATE(515), 1,
      aux_sym_step_edge_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22410] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1338), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [22421] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1002), 3,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
  [22432] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(328), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [22443] = 4,
    ACTIONS(1217), 1,
      anon_sym_AT,
    ACTIONS(1364), 1,
      sym_name,
    STATE(639), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22458] = 4,
    ACTIONS(1266), 1,
      anon_sym_COMMA,
    ACTIONS(1366), 1,
      anon_sym_GT,
    STATE(519), 1,
      aux_sym_accum_type_repeat4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22473] = 4,
    ACTIONS(1368), 1,
      anon_sym_RPAREN,
    ACTIONS(1370), 1,
      anon_sym_COMMA,
    STATE(562), 1,
      aux_sym_accum_type_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22488] = 4,
    ACTIONS(1373), 1,
      anon_sym_COMMA,
    ACTIONS(1376), 1,
      anon_sym_SEMI,
    STATE(563), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22503] = 3,
    ACTIONS(1378), 1,
      anon_sym_EQ,
    ACTIONS(1376), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22516] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1380), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [22527] = 4,
    ACTIONS(1382), 1,
      anon_sym_COMMA,
    ACTIONS(1385), 1,
      anon_sym_SEMI,
    STATE(566), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22542] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1387), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [22553] = 4,
    ACTIONS(1053), 1,
      anon_sym_COMMA,
    ACTIONS(1389), 1,
      anon_sym_SEMI,
    STATE(498), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22568] = 3,
    ACTIONS(1391), 1,
      anon_sym_EQ,
    ACTIONS(1385), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22581] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1393), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [22592] = 4,
    ACTIONS(1266), 1,
      anon_sym_COMMA,
    ACTIONS(1366), 1,
      anon_sym_GT,
    STATE(524), 1,
      aux_sym_accum_type_repeat4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22607] = 4,
    ACTIONS(1395), 1,
      anon_sym_ELSE,
    ACTIONS(1397), 1,
      anon_sym_END,
    STATE(541), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22622] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1399), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [22633] = 3,
    ACTIONS(1403), 1,
      anon_sym_DOT_STAR,
    ACTIONS(1401), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22646] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1405), 3,
      anon_sym_SEMI,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [22657] = 3,
    ACTIONS(1407), 1,
      anon_sym_RPAREN,
    ACTIONS(907), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22670] = 4,
    ACTIONS(149), 1,
      anon_sym_DOT,
    ACTIONS(1409), 1,
      anon_sym_PLUS_EQ,
    STATE(46), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22685] = 4,
    ACTIONS(1258), 1,
      anon_sym_COMMA,
    ACTIONS(1411), 1,
      anon_sym_RBRACE,
    STATE(516), 1,
      aux_sym_seed_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22700] = 4,
    ACTIONS(1340), 1,
      anon_sym_AT,
    ACTIONS(1413), 1,
      sym_name,
    STATE(22), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22715] = 3,
    ACTIONS(1415), 1,
      anon_sym_THEN,
    ACTIONS(907), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22728] = 4,
    ACTIONS(1209), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1417), 1,
      anon_sym_DQUOTE,
    STATE(509), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1202), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22743] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1419), 3,
      anon_sym_SEMI,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [22754] = 4,
    ACTIONS(1200), 1,
      aux_sym_string_literal_token2,
    ACTIONS(1417), 1,
      anon_sym_SQUOTE,
    STATE(511), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1202), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22769] = 3,
    ACTIONS(1421), 1,
      anon_sym_THEN,
    ACTIONS(907), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22782] = 4,
    ACTIONS(1059), 1,
      sym_name,
    STATE(346), 1,
      sym_step_source_set,
    STATE(391), 1,
      sym_path_pattern,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22797] = 4,
    ACTIONS(1395), 1,
      anon_sym_ELSE,
    ACTIONS(1397), 1,
      anon_sym_END,
    STATE(541), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22812] = 4,
    ACTIONS(1150), 1,
      anon_sym_COMMA,
    ACTIONS(1423), 1,
      anon_sym_GT,
    STATE(476), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22827] = 4,
    ACTIONS(1425), 1,
      anon_sym_RPAREN,
    ACTIONS(1427), 1,
      anon_sym_PIPE,
    STATE(588), 1,
      aux_sym_step_vertex_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22842] = 4,
    ACTIONS(759), 1,
      anon_sym_LPAREN,
    ACTIONS(1156), 1,
      sym_name,
    STATE(425), 1,
      sym_simple_set,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22857] = 2,
    ACTIONS(1425), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22867] = 2,
    ACTIONS(1430), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22877] = 3,
    ACTIONS(1432), 1,
      anon_sym_IN,
    ACTIONS(1434), 1,
      anon_sym_LIKE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22889] = 3,
    ACTIONS(1407), 1,
      anon_sym_NULL,
    ACTIONS(1436), 1,
      anon_sym_NOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22901] = 3,
    ACTIONS(1438), 1,
      sym_digit,
    STATE(43), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22913] = 2,
    ACTIONS(1440), 2,
      anon_sym_ELSE,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22923] = 2,
    ACTIONS(1442), 2,
      anon_sym_ASC,
      anon_sym_DESC,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22933] = 3,
    ACTIONS(1444), 1,
      sym_digit,
    STATE(44), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22945] = 3,
    ACTIONS(1446), 1,
      anon_sym_RPAREN,
    ACTIONS(1448), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22957] = 3,
    ACTIONS(1247), 1,
      anon_sym_LBRACE,
    STATE(504), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22969] = 3,
    ACTIONS(1236), 1,
      anon_sym_DOT,
    ACTIONS(1450), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22981] = 2,
    ACTIONS(1401), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22991] = 3,
    ACTIONS(1452), 1,
      sym_digit,
    STATE(212), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23003] = 2,
    ACTIONS(1454), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23013] = 3,
    ACTIONS(1318), 1,
      anon_sym_COMMA,
    STATE(539), 1,
      aux_sym_for_each_control_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23025] = 3,
    ACTIONS(1456), 1,
      anon_sym_IN,
    ACTIONS(1458), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23037] = 3,
    ACTIONS(1460), 1,
      sym_digit,
    STATE(209), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23049] = 3,
    ACTIONS(1462), 1,
      sym_digit,
    STATE(47), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23061] = 3,
    ACTIONS(1464), 1,
      sym_digit,
    STATE(210), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23073] = 3,
    ACTIONS(1247), 1,
      anon_sym_LBRACE,
    STATE(573), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23085] = 3,
    ACTIONS(1466), 1,
      anon_sym_COMMA,
    STATE(620), 1,
      aux_sym_accum_type_repeat3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23097] = 3,
    ACTIONS(1247), 1,
      anon_sym_LBRACE,
    STATE(567), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23109] = 3,
    ACTIONS(149), 1,
      anon_sym_DOT,
    STATE(46), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23121] = 3,
    ACTIONS(1468), 1,
      anon_sym_FROM,
    STATE(325), 1,
      sym_from_clause,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23133] = 2,
    ACTIONS(1470), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23143] = 3,
    ACTIONS(1247), 1,
      anon_sym_LBRACE,
    STATE(547), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23155] = 2,
    ACTIONS(1472), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23165] = 3,
    ACTIONS(1474), 1,
      anon_sym_DOT,
    ACTIONS(1476), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23177] = 3,
    ACTIONS(1478), 1,
      anon_sym_IN,
    ACTIONS(1480), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23189] = 3,
    ACTIONS(1482), 1,
      sym_digit,
    STATE(487), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23201] = 3,
    ACTIONS(1484), 1,
      anon_sym_COMMA,
    STATE(635), 1,
      aux_sym_accum_type_repeat3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23213] = 2,
    ACTIONS(1486), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23223] = 2,
    ACTIONS(1253), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23233] = 2,
    ACTIONS(1488), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23243] = 2,
    ACTIONS(1137), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23253] = 3,
    ACTIONS(1490), 1,
      anon_sym_RPAREN,
    ACTIONS(1492), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23265] = 3,
    ACTIONS(496), 1,
      anon_sym_DOT,
    STATE(211), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23277] = 3,
    ACTIONS(1494), 1,
      sym_digit,
    STATE(208), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23289] = 3,
    ACTIONS(1496), 1,
      sym_digit,
    STATE(42), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23301] = 3,
    ACTIONS(1498), 1,
      anon_sym_RPAREN,
    ACTIONS(1500), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23313] = 3,
    ACTIONS(1247), 1,
      anon_sym_LBRACE,
    STATE(477), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23325] = 2,
    ACTIONS(1207), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23335] = 3,
    ACTIONS(1502), 1,
      anon_sym_LPAREN,
    STATE(794), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23347] = 2,
    ACTIONS(1187), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23357] = 2,
    ACTIONS(1504), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23367] = 3,
    ACTIONS(1506), 1,
      anon_sym_COMMA,
    STATE(635), 1,
      aux_sym_accum_type_repeat3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23379] = 3,
    ACTIONS(1502), 1,
      anon_sym_LPAREN,
    STATE(807), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23391] = 2,
    ACTIONS(1509), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23401] = 3,
    ACTIONS(1502), 1,
      anon_sym_LPAREN,
    STATE(820), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23413] = 2,
    ACTIONS(1511), 2,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23423] = 3,
    ACTIONS(1502), 1,
      anon_sym_LPAREN,
    STATE(827), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23435] = 3,
    ACTIONS(1502), 1,
      anon_sym_LPAREN,
    STATE(830), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23447] = 3,
    ACTIONS(1513), 1,
      anon_sym_DISTRIBUTED,
    ACTIONS(1515), 1,
      anon_sym_QUERY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23459] = 3,
    ACTIONS(1517), 1,
      sym_digit,
    STATE(409), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23471] = 2,
    ACTIONS(1519), 2,
      anon_sym_ELSE,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23481] = 2,
    ACTIONS(1521), 2,
      anon_sym_ASC,
      anon_sym_DESC,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23491] = 2,
    ACTIONS(901), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23500] = 2,
    ACTIONS(1498), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23509] = 2,
    ACTIONS(1523), 1,
      anon_sym_DASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23518] = 2,
    ACTIONS(1525), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23527] = 2,
    ACTIONS(1527), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23536] = 2,
    ACTIONS(1529), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23545] = 2,
    ACTIONS(1531), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23554] = 2,
    ACTIONS(1533), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23563] = 2,
    ACTIONS(1535), 1,
      anon_sym_THEN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23572] = 2,
    ACTIONS(1126), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23581] = 2,
    ACTIONS(1537), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23590] = 2,
    ACTIONS(1539), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23599] = 2,
    ACTIONS(1541), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23608] = 2,
    ACTIONS(1543), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23617] = 2,
    ACTIONS(1545), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23626] = 2,
    ACTIONS(1547), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23635] = 2,
    ACTIONS(1549), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23644] = 2,
    ACTIONS(1551), 1,
      anon_sym_STEP,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23653] = 2,
    ACTIONS(793), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23662] = 2,
    ACTIONS(1553), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23671] = 2,
    ACTIONS(1555), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23680] = 2,
    ACTIONS(1126), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23689] = 2,
    ACTIONS(1557), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23698] = 2,
    ACTIONS(1559), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23707] = 2,
    ACTIONS(1561), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23716] = 2,
    ACTIONS(1289), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23725] = 2,
    ACTIONS(1563), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23734] = 2,
    ACTIONS(1565), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23743] = 2,
    ACTIONS(1567), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23752] = 2,
    ACTIONS(1569), 1,
      anon_sym_IF,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23761] = 2,
    ACTIONS(1132), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23770] = 2,
    ACTIONS(1571), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23779] = 2,
    ACTIONS(1573), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23788] = 2,
    ACTIONS(1575), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23797] = 2,
    ACTIONS(1577), 1,
      anon_sym_NULL,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23806] = 2,
    ACTIONS(1308), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23815] = 2,
    ACTIONS(1579), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23824] = 2,
    ACTIONS(1581), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23833] = 2,
    ACTIONS(1583), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23842] = 2,
    ACTIONS(1585), 1,
      anon_sym_AVG,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23851] = 2,
    ACTIONS(1587), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23860] = 2,
    ACTIONS(1589), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23869] = 2,
    ACTIONS(1591), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23878] = 2,
    ACTIONS(1593), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23887] = 2,
    ACTIONS(1595), 1,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23896] = 2,
    ACTIONS(1597), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23905] = 2,
    ACTIONS(1599), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23914] = 2,
    ACTIONS(1601), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23923] = 2,
    ACTIONS(1603), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23932] = 2,
    ACTIONS(1605), 1,
      anon_sym_FROM,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23941] = 2,
    ACTIONS(1607), 1,
      anon_sym_SELECT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23950] = 2,
    ACTIONS(1609), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23959] = 2,
    ACTIONS(1611), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23968] = 2,
    ACTIONS(1613), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23977] = 2,
    ACTIONS(1615), 1,
      anon_sym_FILTER,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23986] = 2,
    ACTIONS(1617), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23995] = 2,
    ACTIONS(1619), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24004] = 2,
    ACTIONS(1621), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24013] = 2,
    ACTIONS(1623), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24022] = 2,
    ACTIONS(1625), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24031] = 2,
    ACTIONS(1627), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24040] = 2,
    ACTIONS(1629), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24049] = 2,
    ACTIONS(1631), 1,
      anon_sym_MIN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24058] = 2,
    ACTIONS(1633), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24067] = 2,
    ACTIONS(426), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24076] = 2,
    ACTIONS(1635), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24085] = 2,
    ACTIONS(1637), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24094] = 2,
    ACTIONS(1639), 1,
      anon_sym_THEN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24103] = 2,
    ACTIONS(1641), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24112] = 2,
    ACTIONS(1643), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24121] = 2,
    ACTIONS(1645), 1,
      anon_sym_v2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24130] = 2,
    ACTIONS(1647), 1,
      anon_sym_DASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24139] = 2,
    ACTIONS(1649), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24148] = 2,
    ACTIONS(1364), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24157] = 2,
    ACTIONS(1651), 1,
      anon_sym_DASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24166] = 2,
    ACTIONS(1002), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24175] = 2,
    ACTIONS(1653), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24184] = 2,
    ACTIONS(1655), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24193] = 2,
    ACTIONS(1657), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24202] = 2,
    ACTIONS(1659), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24211] = 2,
    ACTIONS(1661), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24220] = 2,
    ACTIONS(1591), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24229] = 2,
    ACTIONS(1663), 1,
      anon_sym_MAX,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24238] = 2,
    ACTIONS(1665), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24247] = 2,
    ACTIONS(1667), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24256] = 2,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24265] = 2,
    ACTIONS(1669), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24274] = 2,
    ACTIONS(1671), 1,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24283] = 2,
    ACTIONS(1673), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24292] = 2,
    ACTIONS(1675), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24301] = 2,
    ACTIONS(1677), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24310] = 2,
    ACTIONS(1446), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24319] = 2,
    ACTIONS(1679), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24328] = 2,
    ACTIONS(1681), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24337] = 2,
    ACTIONS(1683), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24346] = 2,
    ACTIONS(1685), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24355] = 2,
    ACTIONS(1687), 1,
      anon_sym_IF,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24364] = 2,
    ACTIONS(1689), 1,
      anon_sym_v2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24373] = 2,
    ACTIONS(1691), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24382] = 2,
    ACTIONS(1693), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24391] = 2,
    ACTIONS(1695), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24400] = 2,
    ACTIONS(1697), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24409] = 2,
    ACTIONS(1699), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24418] = 2,
    ACTIONS(1701), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24427] = 2,
    ACTIONS(1703), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24436] = 2,
    ACTIONS(1705), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24445] = 2,
    ACTIONS(1707), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24454] = 2,
    ACTIONS(1709), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24463] = 2,
    ACTIONS(1711), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24472] = 2,
    ACTIONS(1012), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24481] = 2,
    ACTIONS(1713), 1,
      anon_sym_FILTER,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24490] = 2,
    ACTIONS(1715), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24499] = 2,
    ACTIONS(1717), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24508] = 2,
    ACTIONS(1719), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24517] = 2,
    ACTIONS(1721), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24526] = 2,
    ACTIONS(1723), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24535] = 2,
    ACTIONS(1725), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24544] = 2,
    ACTIONS(1727), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24553] = 2,
    ACTIONS(1729), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24562] = 2,
    ACTIONS(1731), 1,
      anon_sym_TUPLE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24571] = 2,
    ACTIONS(1733), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24580] = 2,
    ACTIONS(1735), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24589] = 2,
    ACTIONS(1737), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24598] = 2,
    ACTIONS(1739), 1,
      anon_sym_v2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24607] = 2,
    ACTIONS(1741), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24616] = 2,
    ACTIONS(1743), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24625] = 2,
    ACTIONS(1745), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24634] = 2,
    ACTIONS(1747), 1,
      anon_sym_v2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24643] = 2,
    ACTIONS(1749), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24652] = 2,
    ACTIONS(1751), 1,
      anon_sym_v2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24661] = 2,
    ACTIONS(1753), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24670] = 2,
    ACTIONS(1008), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24679] = 2,
    ACTIONS(1755), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24688] = 2,
    ACTIONS(1757), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24697] = 2,
    ACTIONS(1008), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24706] = 2,
    ACTIONS(1759), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24715] = 2,
    ACTIONS(1761), 1,
      sym_digit,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24724] = 2,
    ACTIONS(1763), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24733] = 2,
    ACTIONS(1765), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24742] = 2,
    ACTIONS(1767), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24751] = 2,
    ACTIONS(1769), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24760] = 2,
    ACTIONS(1771), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24769] = 2,
    ACTIONS(1773), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24778] = 2,
    ACTIONS(1775), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24787] = 2,
    ACTIONS(1777), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24796] = 2,
    ACTIONS(1779), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24805] = 2,
    ACTIONS(1781), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24814] = 2,
    ACTIONS(1783), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24823] = 2,
    ACTIONS(1785), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24832] = 2,
    ACTIONS(1787), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24841] = 2,
    ACTIONS(1789), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24850] = 2,
    ACTIONS(448), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24859] = 2,
    ACTIONS(1791), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24868] = 2,
    ACTIONS(1793), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24877] = 2,
    ACTIONS(1795), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24886] = 2,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24895] = 2,
    ACTIONS(893), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24904] = 2,
    ACTIONS(1797), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24913] = 2,
    ACTIONS(1799), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24922] = 2,
    ACTIONS(1801), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24931] = 2,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24940] = 2,
    ACTIONS(1803), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24949] = 2,
    ACTIONS(1805), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24958] = 2,
    ACTIONS(1807), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24967] = 2,
    ACTIONS(1809), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24976] = 2,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24985] = 2,
    ACTIONS(1811), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24994] = 2,
    ACTIONS(1813), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25003] = 2,
    ACTIONS(1815), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25012] = 2,
    ACTIONS(1817), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25021] = 2,
    ACTIONS(1819), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25030] = 2,
    ACTIONS(1821), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25039] = 2,
    ACTIONS(1823), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25048] = 2,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25057] = 2,
    ACTIONS(1825), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25066] = 2,
    ACTIONS(1817), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25075] = 2,
    ACTIONS(1827), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25084] = 2,
    ACTIONS(1829), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25093] = 2,
    ACTIONS(1831), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25102] = 2,
    ACTIONS(1833), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25111] = 2,
    ACTIONS(1835), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25120] = 2,
    ACTIONS(1837), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25129] = 2,
    ACTIONS(1839), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25138] = 2,
    ACTIONS(1841), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25147] = 2,
    ACTIONS(1843), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25156] = 2,
    ACTIONS(1845), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25165] = 2,
    ACTIONS(1847), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25174] = 2,
    ACTIONS(1849), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25183] = 2,
    ACTIONS(1851), 1,
      anon_sym_QUERY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25192] = 2,
    ACTIONS(1853), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25201] = 2,
    ACTIONS(1855), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25210] = 2,
    ACTIONS(1857), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25219] = 2,
    ACTIONS(1859), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25228] = 2,
    ACTIONS(1861), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25237] = 2,
    ACTIONS(1863), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25246] = 2,
    ACTIONS(1865), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25255] = 2,
    ACTIONS(1867), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25264] = 2,
    ACTIONS(1869), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25273] = 2,
    ACTIONS(1871), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25282] = 2,
    ACTIONS(1873), 1,
      anon_sym_QUERY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25291] = 2,
    ACTIONS(1875), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25300] = 2,
    ACTIONS(1877), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25309] = 2,
    ACTIONS(1879), 1,
      anon_sym_REPLACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25318] = 2,
    ACTIONS(1881), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25327] = 2,
    ACTIONS(1883), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25336] = 2,
    ACTIONS(1885), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25345] = 2,
    ACTIONS(1887), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25354] = 2,
    ACTIONS(1889), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25363] = 2,
    ACTIONS(1891), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25372] = 2,
    ACTIONS(1893), 1,
      anon_sym_SUM,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25381] = 2,
    ACTIONS(1895), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25390] = 2,
    ACTIONS(1897), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25399] = 2,
    ACTIONS(1899), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25408] = 2,
    ACTIONS(1901), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25417] = 2,
    ACTIONS(1903), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25426] = 2,
    ACTIONS(1905), 1,
      anon_sym_QUERY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25435] = 2,
    ACTIONS(1907), 1,
      anon_sym_FILTER,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25444] = 2,
    ACTIONS(1909), 1,
      anon_sym_FILTER,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 128,
  [SMALL_STATE(6)] = 256,
  [SMALL_STATE(7)] = 384,
  [SMALL_STATE(8)] = 508,
  [SMALL_STATE(9)] = 632,
  [SMALL_STATE(10)] = 756,
  [SMALL_STATE(11)] = 880,
  [SMALL_STATE(12)] = 1004,
  [SMALL_STATE(13)] = 1128,
  [SMALL_STATE(14)] = 1252,
  [SMALL_STATE(15)] = 1376,
  [SMALL_STATE(16)] = 1500,
  [SMALL_STATE(17)] = 1624,
  [SMALL_STATE(18)] = 1748,
  [SMALL_STATE(19)] = 1872,
  [SMALL_STATE(20)] = 1929,
  [SMALL_STATE(21)] = 1990,
  [SMALL_STATE(22)] = 2050,
  [SMALL_STATE(23)] = 2106,
  [SMALL_STATE(24)] = 2164,
  [SMALL_STATE(25)] = 2222,
  [SMALL_STATE(26)] = 2282,
  [SMALL_STATE(27)] = 2338,
  [SMALL_STATE(28)] = 2394,
  [SMALL_STATE(29)] = 2452,
  [SMALL_STATE(30)] = 2510,
  [SMALL_STATE(31)] = 2563,
  [SMALL_STATE(32)] = 2616,
  [SMALL_STATE(33)] = 2671,
  [SMALL_STATE(34)] = 2724,
  [SMALL_STATE(35)] = 2777,
  [SMALL_STATE(36)] = 2829,
  [SMALL_STATE(37)] = 2887,
  [SMALL_STATE(38)] = 2939,
  [SMALL_STATE(39)] = 2991,
  [SMALL_STATE(40)] = 3045,
  [SMALL_STATE(41)] = 3103,
  [SMALL_STATE(42)] = 3159,
  [SMALL_STATE(43)] = 3214,
  [SMALL_STATE(44)] = 3269,
  [SMALL_STATE(45)] = 3324,
  [SMALL_STATE(46)] = 3379,
  [SMALL_STATE(47)] = 3434,
  [SMALL_STATE(48)] = 3489,
  [SMALL_STATE(49)] = 3539,
  [SMALL_STATE(50)] = 3593,
  [SMALL_STATE(51)] = 3645,
  [SMALL_STATE(52)] = 3695,
  [SMALL_STATE(53)] = 3747,
  [SMALL_STATE(54)] = 3796,
  [SMALL_STATE(55)] = 3845,
  [SMALL_STATE(56)] = 3894,
  [SMALL_STATE(57)] = 3943,
  [SMALL_STATE(58)] = 3992,
  [SMALL_STATE(59)] = 4041,
  [SMALL_STATE(60)] = 4090,
  [SMALL_STATE(61)] = 4139,
  [SMALL_STATE(62)] = 4188,
  [SMALL_STATE(63)] = 4237,
  [SMALL_STATE(64)] = 4286,
  [SMALL_STATE(65)] = 4335,
  [SMALL_STATE(66)] = 4384,
  [SMALL_STATE(67)] = 4433,
  [SMALL_STATE(68)] = 4482,
  [SMALL_STATE(69)] = 4531,
  [SMALL_STATE(70)] = 4580,
  [SMALL_STATE(71)] = 4628,
  [SMALL_STATE(72)] = 4676,
  [SMALL_STATE(73)] = 4723,
  [SMALL_STATE(74)] = 4797,
  [SMALL_STATE(75)] = 4871,
  [SMALL_STATE(76)] = 4945,
  [SMALL_STATE(77)] = 5019,
  [SMALL_STATE(78)] = 5093,
  [SMALL_STATE(79)] = 5167,
  [SMALL_STATE(80)] = 5241,
  [SMALL_STATE(81)] = 5295,
  [SMALL_STATE(82)] = 5369,
  [SMALL_STATE(83)] = 5443,
  [SMALL_STATE(84)] = 5517,
  [SMALL_STATE(85)] = 5591,
  [SMALL_STATE(86)] = 5665,
  [SMALL_STATE(87)] = 5739,
  [SMALL_STATE(88)] = 5813,
  [SMALL_STATE(89)] = 5884,
  [SMALL_STATE(90)] = 5939,
  [SMALL_STATE(91)] = 6035,
  [SMALL_STATE(92)] = 6131,
  [SMALL_STATE(93)] = 6224,
  [SMALL_STATE(94)] = 6315,
  [SMALL_STATE(95)] = 6408,
  [SMALL_STATE(96)] = 6501,
  [SMALL_STATE(97)] = 6594,
  [SMALL_STATE(98)] = 6687,
  [SMALL_STATE(99)] = 6780,
  [SMALL_STATE(100)] = 6871,
  [SMALL_STATE(101)] = 6962,
  [SMALL_STATE(102)] = 7053,
  [SMALL_STATE(103)] = 7144,
  [SMALL_STATE(104)] = 7237,
  [SMALL_STATE(105)] = 7328,
  [SMALL_STATE(106)] = 7419,
  [SMALL_STATE(107)] = 7512,
  [SMALL_STATE(108)] = 7603,
  [SMALL_STATE(109)] = 7696,
  [SMALL_STATE(110)] = 7787,
  [SMALL_STATE(111)] = 7880,
  [SMALL_STATE(112)] = 7973,
  [SMALL_STATE(113)] = 8064,
  [SMALL_STATE(114)] = 8157,
  [SMALL_STATE(115)] = 8250,
  [SMALL_STATE(116)] = 8341,
  [SMALL_STATE(117)] = 8432,
  [SMALL_STATE(118)] = 8523,
  [SMALL_STATE(119)] = 8614,
  [SMALL_STATE(120)] = 8705,
  [SMALL_STATE(121)] = 8798,
  [SMALL_STATE(122)] = 8891,
  [SMALL_STATE(123)] = 8982,
  [SMALL_STATE(124)] = 9075,
  [SMALL_STATE(125)] = 9166,
  [SMALL_STATE(126)] = 9259,
  [SMALL_STATE(127)] = 9350,
  [SMALL_STATE(128)] = 9443,
  [SMALL_STATE(129)] = 9534,
  [SMALL_STATE(130)] = 9627,
  [SMALL_STATE(131)] = 9718,
  [SMALL_STATE(132)] = 9809,
  [SMALL_STATE(133)] = 9897,
  [SMALL_STATE(134)] = 9985,
  [SMALL_STATE(135)] = 10073,
  [SMALL_STATE(136)] = 10161,
  [SMALL_STATE(137)] = 10223,
  [SMALL_STATE(138)] = 10311,
  [SMALL_STATE(139)] = 10399,
  [SMALL_STATE(140)] = 10487,
  [SMALL_STATE(141)] = 10575,
  [SMALL_STATE(142)] = 10663,
  [SMALL_STATE(143)] = 10751,
  [SMALL_STATE(144)] = 10836,
  [SMALL_STATE(145)] = 10921,
  [SMALL_STATE(146)] = 11006,
  [SMALL_STATE(147)] = 11053,
  [SMALL_STATE(148)] = 11138,
  [SMALL_STATE(149)] = 11223,
  [SMALL_STATE(150)] = 11308,
  [SMALL_STATE(151)] = 11393,
  [SMALL_STATE(152)] = 11478,
  [SMALL_STATE(153)] = 11563,
  [SMALL_STATE(154)] = 11648,
  [SMALL_STATE(155)] = 11733,
  [SMALL_STATE(156)] = 11818,
  [SMALL_STATE(157)] = 11903,
  [SMALL_STATE(158)] = 11988,
  [SMALL_STATE(159)] = 12073,
  [SMALL_STATE(160)] = 12158,
  [SMALL_STATE(161)] = 12243,
  [SMALL_STATE(162)] = 12328,
  [SMALL_STATE(163)] = 12377,
  [SMALL_STATE(164)] = 12462,
  [SMALL_STATE(165)] = 12547,
  [SMALL_STATE(166)] = 12590,
  [SMALL_STATE(167)] = 12675,
  [SMALL_STATE(168)] = 12760,
  [SMALL_STATE(169)] = 12845,
  [SMALL_STATE(170)] = 12930,
  [SMALL_STATE(171)] = 13015,
  [SMALL_STATE(172)] = 13100,
  [SMALL_STATE(173)] = 13185,
  [SMALL_STATE(174)] = 13270,
  [SMALL_STATE(175)] = 13355,
  [SMALL_STATE(176)] = 13440,
  [SMALL_STATE(177)] = 13487,
  [SMALL_STATE(178)] = 13533,
  [SMALL_STATE(179)] = 13597,
  [SMALL_STATE(180)] = 13639,
  [SMALL_STATE(181)] = 13681,
  [SMALL_STATE(182)] = 13725,
  [SMALL_STATE(183)] = 13767,
  [SMALL_STATE(184)] = 13811,
  [SMALL_STATE(185)] = 13855,
  [SMALL_STATE(186)] = 13919,
  [SMALL_STATE(187)] = 13965,
  [SMALL_STATE(188)] = 14009,
  [SMALL_STATE(189)] = 14051,
  [SMALL_STATE(190)] = 14090,
  [SMALL_STATE(191)] = 14131,
  [SMALL_STATE(192)] = 14172,
  [SMALL_STATE(193)] = 14233,
  [SMALL_STATE(194)] = 14272,
  [SMALL_STATE(195)] = 14311,
  [SMALL_STATE(196)] = 14354,
  [SMALL_STATE(197)] = 14393,
  [SMALL_STATE(198)] = 14432,
  [SMALL_STATE(199)] = 14472,
  [SMALL_STATE(200)] = 14510,
  [SMALL_STATE(201)] = 14548,
  [SMALL_STATE(202)] = 14586,
  [SMALL_STATE(203)] = 14628,
  [SMALL_STATE(204)] = 14672,
  [SMALL_STATE(205)] = 14716,
  [SMALL_STATE(206)] = 14782,
  [SMALL_STATE(207)] = 14822,
  [SMALL_STATE(208)] = 14888,
  [SMALL_STATE(209)] = 14929,
  [SMALL_STATE(210)] = 14970,
  [SMALL_STATE(211)] = 15011,
  [SMALL_STATE(212)] = 15052,
  [SMALL_STATE(213)] = 15093,
  [SMALL_STATE(214)] = 15134,
  [SMALL_STATE(215)] = 15170,
  [SMALL_STATE(216)] = 15212,
  [SMALL_STATE(217)] = 15250,
  [SMALL_STATE(218)] = 15288,
  [SMALL_STATE(219)] = 15326,
  [SMALL_STATE(220)] = 15362,
  [SMALL_STATE(221)] = 15399,
  [SMALL_STATE(222)] = 15434,
  [SMALL_STATE(223)] = 15469,
  [SMALL_STATE(224)] = 15504,
  [SMALL_STATE(225)] = 15539,
  [SMALL_STATE(226)] = 15574,
  [SMALL_STATE(227)] = 15609,
  [SMALL_STATE(228)] = 15644,
  [SMALL_STATE(229)] = 15679,
  [SMALL_STATE(230)] = 15714,
  [SMALL_STATE(231)] = 15749,
  [SMALL_STATE(232)] = 15784,
  [SMALL_STATE(233)] = 15819,
  [SMALL_STATE(234)] = 15854,
  [SMALL_STATE(235)] = 15889,
  [SMALL_STATE(236)] = 15924,
  [SMALL_STATE(237)] = 15959,
  [SMALL_STATE(238)] = 15994,
  [SMALL_STATE(239)] = 16028,
  [SMALL_STATE(240)] = 16062,
  [SMALL_STATE(241)] = 16096,
  [SMALL_STATE(242)] = 16135,
  [SMALL_STATE(243)] = 16163,
  [SMALL_STATE(244)] = 16191,
  [SMALL_STATE(245)] = 16222,
  [SMALL_STATE(246)] = 16259,
  [SMALL_STATE(247)] = 16290,
  [SMALL_STATE(248)] = 16321,
  [SMALL_STATE(249)] = 16352,
  [SMALL_STATE(250)] = 16387,
  [SMALL_STATE(251)] = 16422,
  [SMALL_STATE(252)] = 16453,
  [SMALL_STATE(253)] = 16488,
  [SMALL_STATE(254)] = 16525,
  [SMALL_STATE(255)] = 16556,
  [SMALL_STATE(256)] = 16593,
  [SMALL_STATE(257)] = 16635,
  [SMALL_STATE(258)] = 16677,
  [SMALL_STATE(259)] = 16719,
  [SMALL_STATE(260)] = 16761,
  [SMALL_STATE(261)] = 16795,
  [SMALL_STATE(262)] = 16837,
  [SMALL_STATE(263)] = 16866,
  [SMALL_STATE(264)] = 16893,
  [SMALL_STATE(265)] = 16922,
  [SMALL_STATE(266)] = 16951,
  [SMALL_STATE(267)] = 16981,
  [SMALL_STATE(268)] = 17007,
  [SMALL_STATE(269)] = 17039,
  [SMALL_STATE(270)] = 17063,
  [SMALL_STATE(271)] = 17089,
  [SMALL_STATE(272)] = 17115,
  [SMALL_STATE(273)] = 17161,
  [SMALL_STATE(274)] = 17185,
  [SMALL_STATE(275)] = 17209,
  [SMALL_STATE(276)] = 17237,
  [SMALL_STATE(277)] = 17265,
  [SMALL_STATE(278)] = 17293,
  [SMALL_STATE(279)] = 17321,
  [SMALL_STATE(280)] = 17355,
  [SMALL_STATE(281)] = 17383,
  [SMALL_STATE(282)] = 17407,
  [SMALL_STATE(283)] = 17441,
  [SMALL_STATE(284)] = 17467,
  [SMALL_STATE(285)] = 17491,
  [SMALL_STATE(286)] = 17514,
  [SMALL_STATE(287)] = 17543,
  [SMALL_STATE(288)] = 17568,
  [SMALL_STATE(289)] = 17593,
  [SMALL_STATE(290)] = 17624,
  [SMALL_STATE(291)] = 17653,
  [SMALL_STATE(292)] = 17680,
  [SMALL_STATE(293)] = 17701,
  [SMALL_STATE(294)] = 17728,
  [SMALL_STATE(295)] = 17753,
  [SMALL_STATE(296)] = 17778,
  [SMALL_STATE(297)] = 17801,
  [SMALL_STATE(298)] = 17826,
  [SMALL_STATE(299)] = 17847,
  [SMALL_STATE(300)] = 17874,
  [SMALL_STATE(301)] = 17914,
  [SMALL_STATE(302)] = 17942,
  [SMALL_STATE(303)] = 17968,
  [SMALL_STATE(304)] = 18008,
  [SMALL_STATE(305)] = 18028,
  [SMALL_STATE(306)] = 18068,
  [SMALL_STATE(307)] = 18096,
  [SMALL_STATE(308)] = 18136,
  [SMALL_STATE(309)] = 18160,
  [SMALL_STATE(310)] = 18185,
  [SMALL_STATE(311)] = 18210,
  [SMALL_STATE(312)] = 18235,
  [SMALL_STATE(313)] = 18260,
  [SMALL_STATE(314)] = 18285,
  [SMALL_STATE(315)] = 18310,
  [SMALL_STATE(316)] = 18335,
  [SMALL_STATE(317)] = 18360,
  [SMALL_STATE(318)] = 18397,
  [SMALL_STATE(319)] = 18415,
  [SMALL_STATE(320)] = 18433,
  [SMALL_STATE(321)] = 18451,
  [SMALL_STATE(322)] = 18485,
  [SMALL_STATE(323)] = 18519,
  [SMALL_STATE(324)] = 18543,
  [SMALL_STATE(325)] = 18561,
  [SMALL_STATE(326)] = 18595,
  [SMALL_STATE(327)] = 18629,
  [SMALL_STATE(328)] = 18647,
  [SMALL_STATE(329)] = 18678,
  [SMALL_STATE(330)] = 18699,
  [SMALL_STATE(331)] = 18730,
  [SMALL_STATE(332)] = 18751,
  [SMALL_STATE(333)] = 18769,
  [SMALL_STATE(334)] = 18789,
  [SMALL_STATE(335)] = 18805,
  [SMALL_STATE(336)] = 18825,
  [SMALL_STATE(337)] = 18845,
  [SMALL_STATE(338)] = 18873,
  [SMALL_STATE(339)] = 18889,
  [SMALL_STATE(340)] = 18905,
  [SMALL_STATE(341)] = 18923,
  [SMALL_STATE(342)] = 18939,
  [SMALL_STATE(343)] = 18955,
  [SMALL_STATE(344)] = 18975,
  [SMALL_STATE(345)] = 18991,
  [SMALL_STATE(346)] = 19011,
  [SMALL_STATE(347)] = 19031,
  [SMALL_STATE(348)] = 19051,
  [SMALL_STATE(349)] = 19066,
  [SMALL_STATE(350)] = 19081,
  [SMALL_STATE(351)] = 19100,
  [SMALL_STATE(352)] = 19115,
  [SMALL_STATE(353)] = 19130,
  [SMALL_STATE(354)] = 19155,
  [SMALL_STATE(355)] = 19170,
  [SMALL_STATE(356)] = 19185,
  [SMALL_STATE(357)] = 19210,
  [SMALL_STATE(358)] = 19225,
  [SMALL_STATE(359)] = 19244,
  [SMALL_STATE(360)] = 19259,
  [SMALL_STATE(361)] = 19274,
  [SMALL_STATE(362)] = 19299,
  [SMALL_STATE(363)] = 19326,
  [SMALL_STATE(364)] = 19345,
  [SMALL_STATE(365)] = 19360,
  [SMALL_STATE(366)] = 19375,
  [SMALL_STATE(367)] = 19396,
  [SMALL_STATE(368)] = 19411,
  [SMALL_STATE(369)] = 19438,
  [SMALL_STATE(370)] = 19465,
  [SMALL_STATE(371)] = 19480,
  [SMALL_STATE(372)] = 19501,
  [SMALL_STATE(373)] = 19516,
  [SMALL_STATE(374)] = 19531,
  [SMALL_STATE(375)] = 19546,
  [SMALL_STATE(376)] = 19571,
  [SMALL_STATE(377)] = 19586,
  [SMALL_STATE(378)] = 19608,
  [SMALL_STATE(379)] = 19630,
  [SMALL_STATE(380)] = 19652,
  [SMALL_STATE(381)] = 19676,
  [SMALL_STATE(382)] = 19700,
  [SMALL_STATE(383)] = 19724,
  [SMALL_STATE(384)] = 19746,
  [SMALL_STATE(385)] = 19770,
  [SMALL_STATE(386)] = 19784,
  [SMALL_STATE(387)] = 19808,
  [SMALL_STATE(388)] = 19832,
  [SMALL_STATE(389)] = 19856,
  [SMALL_STATE(390)] = 19880,
  [SMALL_STATE(391)] = 19902,
  [SMALL_STATE(392)] = 19916,
  [SMALL_STATE(393)] = 19938,
  [SMALL_STATE(394)] = 19962,
  [SMALL_STATE(395)] = 19982,
  [SMALL_STATE(396)] = 20006,
  [SMALL_STATE(397)] = 20030,
  [SMALL_STATE(398)] = 20046,
  [SMALL_STATE(399)] = 20067,
  [SMALL_STATE(400)] = 20084,
  [SMALL_STATE(401)] = 20101,
  [SMALL_STATE(402)] = 20116,
  [SMALL_STATE(403)] = 20137,
  [SMALL_STATE(404)] = 20158,
  [SMALL_STATE(405)] = 20175,
  [SMALL_STATE(406)] = 20196,
  [SMALL_STATE(407)] = 20209,
  [SMALL_STATE(408)] = 20222,
  [SMALL_STATE(409)] = 20235,
  [SMALL_STATE(410)] = 20252,
  [SMALL_STATE(411)] = 20273,
  [SMALL_STATE(412)] = 20294,
  [SMALL_STATE(413)] = 20309,
  [SMALL_STATE(414)] = 20322,
  [SMALL_STATE(415)] = 20343,
  [SMALL_STATE(416)] = 20356,
  [SMALL_STATE(417)] = 20373,
  [SMALL_STATE(418)] = 20386,
  [SMALL_STATE(419)] = 20399,
  [SMALL_STATE(420)] = 20420,
  [SMALL_STATE(421)] = 20439,
  [SMALL_STATE(422)] = 20452,
  [SMALL_STATE(423)] = 20467,
  [SMALL_STATE(424)] = 20480,
  [SMALL_STATE(425)] = 20497,
  [SMALL_STATE(426)] = 20510,
  [SMALL_STATE(427)] = 20527,
  [SMALL_STATE(428)] = 20541,
  [SMALL_STATE(429)] = 20555,
  [SMALL_STATE(430)] = 20573,
  [SMALL_STATE(431)] = 20585,
  [SMALL_STATE(432)] = 20603,
  [SMALL_STATE(433)] = 20619,
  [SMALL_STATE(434)] = 20633,
  [SMALL_STATE(435)] = 20649,
  [SMALL_STATE(436)] = 20667,
  [SMALL_STATE(437)] = 20681,
  [SMALL_STATE(438)] = 20699,
  [SMALL_STATE(439)] = 20715,
  [SMALL_STATE(440)] = 20731,
  [SMALL_STATE(441)] = 20747,
  [SMALL_STATE(442)] = 20763,
  [SMALL_STATE(443)] = 20777,
  [SMALL_STATE(444)] = 20795,
  [SMALL_STATE(445)] = 20813,
  [SMALL_STATE(446)] = 20831,
  [SMALL_STATE(447)] = 20849,
  [SMALL_STATE(448)] = 20865,
  [SMALL_STATE(449)] = 20881,
  [SMALL_STATE(450)] = 20899,
  [SMALL_STATE(451)] = 20913,
  [SMALL_STATE(452)] = 20925,
  [SMALL_STATE(453)] = 20941,
  [SMALL_STATE(454)] = 20959,
  [SMALL_STATE(455)] = 20977,
  [SMALL_STATE(456)] = 20993,
  [SMALL_STATE(457)] = 21007,
  [SMALL_STATE(458)] = 21023,
  [SMALL_STATE(459)] = 21041,
  [SMALL_STATE(460)] = 21055,
  [SMALL_STATE(461)] = 21071,
  [SMALL_STATE(462)] = 21085,
  [SMALL_STATE(463)] = 21101,
  [SMALL_STATE(464)] = 21115,
  [SMALL_STATE(465)] = 21129,
  [SMALL_STATE(466)] = 21143,
  [SMALL_STATE(467)] = 21157,
  [SMALL_STATE(468)] = 21171,
  [SMALL_STATE(469)] = 21185,
  [SMALL_STATE(470)] = 21203,
  [SMALL_STATE(471)] = 21217,
  [SMALL_STATE(472)] = 21229,
  [SMALL_STATE(473)] = 21245,
  [SMALL_STATE(474)] = 21257,
  [SMALL_STATE(475)] = 21269,
  [SMALL_STATE(476)] = 21283,
  [SMALL_STATE(477)] = 21298,
  [SMALL_STATE(478)] = 21309,
  [SMALL_STATE(479)] = 21324,
  [SMALL_STATE(480)] = 21337,
  [SMALL_STATE(481)] = 21348,
  [SMALL_STATE(482)] = 21363,
  [SMALL_STATE(483)] = 21378,
  [SMALL_STATE(484)] = 21393,
  [SMALL_STATE(485)] = 21408,
  [SMALL_STATE(486)] = 21421,
  [SMALL_STATE(487)] = 21436,
  [SMALL_STATE(488)] = 21451,
  [SMALL_STATE(489)] = 21464,
  [SMALL_STATE(490)] = 21477,
  [SMALL_STATE(491)] = 21492,
  [SMALL_STATE(492)] = 21507,
  [SMALL_STATE(493)] = 21520,
  [SMALL_STATE(494)] = 21535,
  [SMALL_STATE(495)] = 21550,
  [SMALL_STATE(496)] = 21565,
  [SMALL_STATE(497)] = 21576,
  [SMALL_STATE(498)] = 21587,
  [SMALL_STATE(499)] = 21602,
  [SMALL_STATE(500)] = 21617,
  [SMALL_STATE(501)] = 21632,
  [SMALL_STATE(502)] = 21647,
  [SMALL_STATE(503)] = 21662,
  [SMALL_STATE(504)] = 21677,
  [SMALL_STATE(505)] = 21688,
  [SMALL_STATE(506)] = 21703,
  [SMALL_STATE(507)] = 21718,
  [SMALL_STATE(508)] = 21731,
  [SMALL_STATE(509)] = 21746,
  [SMALL_STATE(510)] = 21761,
  [SMALL_STATE(511)] = 21776,
  [SMALL_STATE(512)] = 21791,
  [SMALL_STATE(513)] = 21802,
  [SMALL_STATE(514)] = 21817,
  [SMALL_STATE(515)] = 21832,
  [SMALL_STATE(516)] = 21847,
  [SMALL_STATE(517)] = 21862,
  [SMALL_STATE(518)] = 21877,
  [SMALL_STATE(519)] = 21890,
  [SMALL_STATE(520)] = 21905,
  [SMALL_STATE(521)] = 21920,
  [SMALL_STATE(522)] = 21931,
  [SMALL_STATE(523)] = 21946,
  [SMALL_STATE(524)] = 21957,
  [SMALL_STATE(525)] = 21972,
  [SMALL_STATE(526)] = 21987,
  [SMALL_STATE(527)] = 21998,
  [SMALL_STATE(528)] = 22013,
  [SMALL_STATE(529)] = 22028,
  [SMALL_STATE(530)] = 22043,
  [SMALL_STATE(531)] = 22058,
  [SMALL_STATE(532)] = 22071,
  [SMALL_STATE(533)] = 22082,
  [SMALL_STATE(534)] = 22097,
  [SMALL_STATE(535)] = 22108,
  [SMALL_STATE(536)] = 22123,
  [SMALL_STATE(537)] = 22138,
  [SMALL_STATE(538)] = 22149,
  [SMALL_STATE(539)] = 22164,
  [SMALL_STATE(540)] = 22179,
  [SMALL_STATE(541)] = 22190,
  [SMALL_STATE(542)] = 22205,
  [SMALL_STATE(543)] = 22218,
  [SMALL_STATE(544)] = 22233,
  [SMALL_STATE(545)] = 22244,
  [SMALL_STATE(546)] = 22259,
  [SMALL_STATE(547)] = 22274,
  [SMALL_STATE(548)] = 22285,
  [SMALL_STATE(549)] = 22296,
  [SMALL_STATE(550)] = 22311,
  [SMALL_STATE(551)] = 22326,
  [SMALL_STATE(552)] = 22341,
  [SMALL_STATE(553)] = 22356,
  [SMALL_STATE(554)] = 22371,
  [SMALL_STATE(555)] = 22382,
  [SMALL_STATE(556)] = 22395,
  [SMALL_STATE(557)] = 22410,
  [SMALL_STATE(558)] = 22421,
  [SMALL_STATE(559)] = 22432,
  [SMALL_STATE(560)] = 22443,
  [SMALL_STATE(561)] = 22458,
  [SMALL_STATE(562)] = 22473,
  [SMALL_STATE(563)] = 22488,
  [SMALL_STATE(564)] = 22503,
  [SMALL_STATE(565)] = 22516,
  [SMALL_STATE(566)] = 22527,
  [SMALL_STATE(567)] = 22542,
  [SMALL_STATE(568)] = 22553,
  [SMALL_STATE(569)] = 22568,
  [SMALL_STATE(570)] = 22581,
  [SMALL_STATE(571)] = 22592,
  [SMALL_STATE(572)] = 22607,
  [SMALL_STATE(573)] = 22622,
  [SMALL_STATE(574)] = 22633,
  [SMALL_STATE(575)] = 22646,
  [SMALL_STATE(576)] = 22657,
  [SMALL_STATE(577)] = 22670,
  [SMALL_STATE(578)] = 22685,
  [SMALL_STATE(579)] = 22700,
  [SMALL_STATE(580)] = 22715,
  [SMALL_STATE(581)] = 22728,
  [SMALL_STATE(582)] = 22743,
  [SMALL_STATE(583)] = 22754,
  [SMALL_STATE(584)] = 22769,
  [SMALL_STATE(585)] = 22782,
  [SMALL_STATE(586)] = 22797,
  [SMALL_STATE(587)] = 22812,
  [SMALL_STATE(588)] = 22827,
  [SMALL_STATE(589)] = 22842,
  [SMALL_STATE(590)] = 22857,
  [SMALL_STATE(591)] = 22867,
  [SMALL_STATE(592)] = 22877,
  [SMALL_STATE(593)] = 22889,
  [SMALL_STATE(594)] = 22901,
  [SMALL_STATE(595)] = 22913,
  [SMALL_STATE(596)] = 22923,
  [SMALL_STATE(597)] = 22933,
  [SMALL_STATE(598)] = 22945,
  [SMALL_STATE(599)] = 22957,
  [SMALL_STATE(600)] = 22969,
  [SMALL_STATE(601)] = 22981,
  [SMALL_STATE(602)] = 22991,
  [SMALL_STATE(603)] = 23003,
  [SMALL_STATE(604)] = 23013,
  [SMALL_STATE(605)] = 23025,
  [SMALL_STATE(606)] = 23037,
  [SMALL_STATE(607)] = 23049,
  [SMALL_STATE(608)] = 23061,
  [SMALL_STATE(609)] = 23073,
  [SMALL_STATE(610)] = 23085,
  [SMALL_STATE(611)] = 23097,
  [SMALL_STATE(612)] = 23109,
  [SMALL_STATE(613)] = 23121,
  [SMALL_STATE(614)] = 23133,
  [SMALL_STATE(615)] = 23143,
  [SMALL_STATE(616)] = 23155,
  [SMALL_STATE(617)] = 23165,
  [SMALL_STATE(618)] = 23177,
  [SMALL_STATE(619)] = 23189,
  [SMALL_STATE(620)] = 23201,
  [SMALL_STATE(621)] = 23213,
  [SMALL_STATE(622)] = 23223,
  [SMALL_STATE(623)] = 23233,
  [SMALL_STATE(624)] = 23243,
  [SMALL_STATE(625)] = 23253,
  [SMALL_STATE(626)] = 23265,
  [SMALL_STATE(627)] = 23277,
  [SMALL_STATE(628)] = 23289,
  [SMALL_STATE(629)] = 23301,
  [SMALL_STATE(630)] = 23313,
  [SMALL_STATE(631)] = 23325,
  [SMALL_STATE(632)] = 23335,
  [SMALL_STATE(633)] = 23347,
  [SMALL_STATE(634)] = 23357,
  [SMALL_STATE(635)] = 23367,
  [SMALL_STATE(636)] = 23379,
  [SMALL_STATE(637)] = 23391,
  [SMALL_STATE(638)] = 23401,
  [SMALL_STATE(639)] = 23413,
  [SMALL_STATE(640)] = 23423,
  [SMALL_STATE(641)] = 23435,
  [SMALL_STATE(642)] = 23447,
  [SMALL_STATE(643)] = 23459,
  [SMALL_STATE(644)] = 23471,
  [SMALL_STATE(645)] = 23481,
  [SMALL_STATE(646)] = 23491,
  [SMALL_STATE(647)] = 23500,
  [SMALL_STATE(648)] = 23509,
  [SMALL_STATE(649)] = 23518,
  [SMALL_STATE(650)] = 23527,
  [SMALL_STATE(651)] = 23536,
  [SMALL_STATE(652)] = 23545,
  [SMALL_STATE(653)] = 23554,
  [SMALL_STATE(654)] = 23563,
  [SMALL_STATE(655)] = 23572,
  [SMALL_STATE(656)] = 23581,
  [SMALL_STATE(657)] = 23590,
  [SMALL_STATE(658)] = 23599,
  [SMALL_STATE(659)] = 23608,
  [SMALL_STATE(660)] = 23617,
  [SMALL_STATE(661)] = 23626,
  [SMALL_STATE(662)] = 23635,
  [SMALL_STATE(663)] = 23644,
  [SMALL_STATE(664)] = 23653,
  [SMALL_STATE(665)] = 23662,
  [SMALL_STATE(666)] = 23671,
  [SMALL_STATE(667)] = 23680,
  [SMALL_STATE(668)] = 23689,
  [SMALL_STATE(669)] = 23698,
  [SMALL_STATE(670)] = 23707,
  [SMALL_STATE(671)] = 23716,
  [SMALL_STATE(672)] = 23725,
  [SMALL_STATE(673)] = 23734,
  [SMALL_STATE(674)] = 23743,
  [SMALL_STATE(675)] = 23752,
  [SMALL_STATE(676)] = 23761,
  [SMALL_STATE(677)] = 23770,
  [SMALL_STATE(678)] = 23779,
  [SMALL_STATE(679)] = 23788,
  [SMALL_STATE(680)] = 23797,
  [SMALL_STATE(681)] = 23806,
  [SMALL_STATE(682)] = 23815,
  [SMALL_STATE(683)] = 23824,
  [SMALL_STATE(684)] = 23833,
  [SMALL_STATE(685)] = 23842,
  [SMALL_STATE(686)] = 23851,
  [SMALL_STATE(687)] = 23860,
  [SMALL_STATE(688)] = 23869,
  [SMALL_STATE(689)] = 23878,
  [SMALL_STATE(690)] = 23887,
  [SMALL_STATE(691)] = 23896,
  [SMALL_STATE(692)] = 23905,
  [SMALL_STATE(693)] = 23914,
  [SMALL_STATE(694)] = 23923,
  [SMALL_STATE(695)] = 23932,
  [SMALL_STATE(696)] = 23941,
  [SMALL_STATE(697)] = 23950,
  [SMALL_STATE(698)] = 23959,
  [SMALL_STATE(699)] = 23968,
  [SMALL_STATE(700)] = 23977,
  [SMALL_STATE(701)] = 23986,
  [SMALL_STATE(702)] = 23995,
  [SMALL_STATE(703)] = 24004,
  [SMALL_STATE(704)] = 24013,
  [SMALL_STATE(705)] = 24022,
  [SMALL_STATE(706)] = 24031,
  [SMALL_STATE(707)] = 24040,
  [SMALL_STATE(708)] = 24049,
  [SMALL_STATE(709)] = 24058,
  [SMALL_STATE(710)] = 24067,
  [SMALL_STATE(711)] = 24076,
  [SMALL_STATE(712)] = 24085,
  [SMALL_STATE(713)] = 24094,
  [SMALL_STATE(714)] = 24103,
  [SMALL_STATE(715)] = 24112,
  [SMALL_STATE(716)] = 24121,
  [SMALL_STATE(717)] = 24130,
  [SMALL_STATE(718)] = 24139,
  [SMALL_STATE(719)] = 24148,
  [SMALL_STATE(720)] = 24157,
  [SMALL_STATE(721)] = 24166,
  [SMALL_STATE(722)] = 24175,
  [SMALL_STATE(723)] = 24184,
  [SMALL_STATE(724)] = 24193,
  [SMALL_STATE(725)] = 24202,
  [SMALL_STATE(726)] = 24211,
  [SMALL_STATE(727)] = 24220,
  [SMALL_STATE(728)] = 24229,
  [SMALL_STATE(729)] = 24238,
  [SMALL_STATE(730)] = 24247,
  [SMALL_STATE(731)] = 24256,
  [SMALL_STATE(732)] = 24265,
  [SMALL_STATE(733)] = 24274,
  [SMALL_STATE(734)] = 24283,
  [SMALL_STATE(735)] = 24292,
  [SMALL_STATE(736)] = 24301,
  [SMALL_STATE(737)] = 24310,
  [SMALL_STATE(738)] = 24319,
  [SMALL_STATE(739)] = 24328,
  [SMALL_STATE(740)] = 24337,
  [SMALL_STATE(741)] = 24346,
  [SMALL_STATE(742)] = 24355,
  [SMALL_STATE(743)] = 24364,
  [SMALL_STATE(744)] = 24373,
  [SMALL_STATE(745)] = 24382,
  [SMALL_STATE(746)] = 24391,
  [SMALL_STATE(747)] = 24400,
  [SMALL_STATE(748)] = 24409,
  [SMALL_STATE(749)] = 24418,
  [SMALL_STATE(750)] = 24427,
  [SMALL_STATE(751)] = 24436,
  [SMALL_STATE(752)] = 24445,
  [SMALL_STATE(753)] = 24454,
  [SMALL_STATE(754)] = 24463,
  [SMALL_STATE(755)] = 24472,
  [SMALL_STATE(756)] = 24481,
  [SMALL_STATE(757)] = 24490,
  [SMALL_STATE(758)] = 24499,
  [SMALL_STATE(759)] = 24508,
  [SMALL_STATE(760)] = 24517,
  [SMALL_STATE(761)] = 24526,
  [SMALL_STATE(762)] = 24535,
  [SMALL_STATE(763)] = 24544,
  [SMALL_STATE(764)] = 24553,
  [SMALL_STATE(765)] = 24562,
  [SMALL_STATE(766)] = 24571,
  [SMALL_STATE(767)] = 24580,
  [SMALL_STATE(768)] = 24589,
  [SMALL_STATE(769)] = 24598,
  [SMALL_STATE(770)] = 24607,
  [SMALL_STATE(771)] = 24616,
  [SMALL_STATE(772)] = 24625,
  [SMALL_STATE(773)] = 24634,
  [SMALL_STATE(774)] = 24643,
  [SMALL_STATE(775)] = 24652,
  [SMALL_STATE(776)] = 24661,
  [SMALL_STATE(777)] = 24670,
  [SMALL_STATE(778)] = 24679,
  [SMALL_STATE(779)] = 24688,
  [SMALL_STATE(780)] = 24697,
  [SMALL_STATE(781)] = 24706,
  [SMALL_STATE(782)] = 24715,
  [SMALL_STATE(783)] = 24724,
  [SMALL_STATE(784)] = 24733,
  [SMALL_STATE(785)] = 24742,
  [SMALL_STATE(786)] = 24751,
  [SMALL_STATE(787)] = 24760,
  [SMALL_STATE(788)] = 24769,
  [SMALL_STATE(789)] = 24778,
  [SMALL_STATE(790)] = 24787,
  [SMALL_STATE(791)] = 24796,
  [SMALL_STATE(792)] = 24805,
  [SMALL_STATE(793)] = 24814,
  [SMALL_STATE(794)] = 24823,
  [SMALL_STATE(795)] = 24832,
  [SMALL_STATE(796)] = 24841,
  [SMALL_STATE(797)] = 24850,
  [SMALL_STATE(798)] = 24859,
  [SMALL_STATE(799)] = 24868,
  [SMALL_STATE(800)] = 24877,
  [SMALL_STATE(801)] = 24886,
  [SMALL_STATE(802)] = 24895,
  [SMALL_STATE(803)] = 24904,
  [SMALL_STATE(804)] = 24913,
  [SMALL_STATE(805)] = 24922,
  [SMALL_STATE(806)] = 24931,
  [SMALL_STATE(807)] = 24940,
  [SMALL_STATE(808)] = 24949,
  [SMALL_STATE(809)] = 24958,
  [SMALL_STATE(810)] = 24967,
  [SMALL_STATE(811)] = 24976,
  [SMALL_STATE(812)] = 24985,
  [SMALL_STATE(813)] = 24994,
  [SMALL_STATE(814)] = 25003,
  [SMALL_STATE(815)] = 25012,
  [SMALL_STATE(816)] = 25021,
  [SMALL_STATE(817)] = 25030,
  [SMALL_STATE(818)] = 25039,
  [SMALL_STATE(819)] = 25048,
  [SMALL_STATE(820)] = 25057,
  [SMALL_STATE(821)] = 25066,
  [SMALL_STATE(822)] = 25075,
  [SMALL_STATE(823)] = 25084,
  [SMALL_STATE(824)] = 25093,
  [SMALL_STATE(825)] = 25102,
  [SMALL_STATE(826)] = 25111,
  [SMALL_STATE(827)] = 25120,
  [SMALL_STATE(828)] = 25129,
  [SMALL_STATE(829)] = 25138,
  [SMALL_STATE(830)] = 25147,
  [SMALL_STATE(831)] = 25156,
  [SMALL_STATE(832)] = 25165,
  [SMALL_STATE(833)] = 25174,
  [SMALL_STATE(834)] = 25183,
  [SMALL_STATE(835)] = 25192,
  [SMALL_STATE(836)] = 25201,
  [SMALL_STATE(837)] = 25210,
  [SMALL_STATE(838)] = 25219,
  [SMALL_STATE(839)] = 25228,
  [SMALL_STATE(840)] = 25237,
  [SMALL_STATE(841)] = 25246,
  [SMALL_STATE(842)] = 25255,
  [SMALL_STATE(843)] = 25264,
  [SMALL_STATE(844)] = 25273,
  [SMALL_STATE(845)] = 25282,
  [SMALL_STATE(846)] = 25291,
  [SMALL_STATE(847)] = 25300,
  [SMALL_STATE(848)] = 25309,
  [SMALL_STATE(849)] = 25318,
  [SMALL_STATE(850)] = 25327,
  [SMALL_STATE(851)] = 25336,
  [SMALL_STATE(852)] = 25345,
  [SMALL_STATE(853)] = 25354,
  [SMALL_STATE(854)] = 25363,
  [SMALL_STATE(855)] = 25372,
  [SMALL_STATE(856)] = 25381,
  [SMALL_STATE(857)] = 25390,
  [SMALL_STATE(858)] = 25399,
  [SMALL_STATE(859)] = 25408,
  [SMALL_STATE(860)] = 25417,
  [SMALL_STATE(861)] = 25426,
  [SMALL_STATE(862)] = 25435,
  [SMALL_STATE(863)] = 25444,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(765),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(764),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(763),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(762),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(761),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(760),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(759),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(758),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(757),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(754),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(752),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_repeat2, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(764),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(123),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(122),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(121),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(375),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(763),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(496),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(762),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(463),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(761),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(760),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(759),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(758),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(757),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(754),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(753),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(752),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(112),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(468),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(405),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_accum_name, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_accum_name, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_dot, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_dot, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_dot, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_dot, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_dot_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2), SHIFT_REPEAT(747),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(854),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 4),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 5),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_accum_name, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_accum_name, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_integer, 1), REDUCE(sym_integer, 2),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_integer, 1), REDUCE(sym_integer, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_accum_type_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2), SHIFT_REPEAT(41),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_real, 3), REDUCE(sym_real, 4),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_real, 3), REDUCE(sym_real, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 3),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 3),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_real, 2), REDUCE(sym_real, 3),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_real, 2), REDUCE(sym_real, 3),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(719),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_repeat1, 2),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(765),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 5),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 5),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 6),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 6),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 8),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 8),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 10),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 10),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 7),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 7),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 11),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 11),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 7),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 7),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 4),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 4),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 8),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 8),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 4),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 4),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 6),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 6),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 7, .production_id = 16),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef, 7, .production_id = 16),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 6, .production_id = 14),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef, 6, .production_id = 14),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_stmts, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_body_stmts, 2),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(839),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(852),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(728),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(736),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(735),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(825),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2), SHIFT_REPEAT(814),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(860),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(774),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2), SHIFT_REPEAT(202),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 1),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(859),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 1),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_operator, 1),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_operator, 1),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt, 3),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_l_accum_accum_stmt, 5, .production_id = 21),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_accum_stmt, 5, .production_id = 21),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt, 5),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(496),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(468),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var_decl_stmt, 4, .production_id = 19),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 2),
  [584] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(496),
  [587] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(468),
  [590] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(308),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_g_accum_accum_stmt, 3, .production_id = 6),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_expr, 1),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_fields, 1),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_fields, 1),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(836),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 1),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_fields_repeat1, 2), SHIFT_REPEAT(266),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_fields_repeat1, 2),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tuple_fields_repeat1, 2),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_fields, 2),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_fields, 2),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2), SHIFT_REPEAT(275),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 4),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 4),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 2),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(786),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 2),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_field, 2),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_field, 2),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(691),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(690),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(687),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 1),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 4),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_proj, 1),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 4),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_l_accum_assign_stmt, 5, .production_id = 11),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_g_accum_assign_stmt, 3),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 4),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertex_set_type, 1),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_accum_func_call, 3, .production_id = 15),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 2),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 2),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 2, .production_id = 22),
  [769] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 2, .production_id = 22), SHIFT_REPEAT(703),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_accum_func_call, 4, .production_id = 18),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_source_set, 1, .production_id = 5),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_pattern, 2, .production_id = 8),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 4, .production_id = 23),
  [784] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_stmt_list_repeat1, 2), SHIFT_REPEAT(88),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_stmt_list_repeat1, 2),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_pattern, 1),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 3),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 3),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 1),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_set, 1),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_vertex_type, 1),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 5, .production_id = 23),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt_list, 2),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 4),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt_list, 1),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 2, .production_id = 13),
  [817] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 2, .production_id = 13), SHIFT_REPEAT(793),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_source_set, 3, .production_id = 12),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_set, 3, .production_id = 24),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_while_stmt, 7),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt, 1),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_case_stmt, 5),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_while_stmt, 5),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 7),
  [842] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2), SHIFT_REPEAT(585),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_case_stmt, 4),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_for_each_stmt, 5),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(601),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 5),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2),
  [869] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2), SHIFT_REPEAT(550),
  [872] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2), SHIFT_REPEAT(861),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 8, .production_id = 25),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_case_stmt, 6),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql, 1),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 6),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 6),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_case_stmt, 3),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 8),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 5),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 4),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disj_pattern, 2),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disj_pattern_repeat1, 2),
  [919] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disj_pattern_repeat1, 2), SHIFT_REPEAT(330),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_set, 1),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 3),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [936] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_stmt_repeat1, 2), SHIFT_REPEAT(131),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_print_stmt_repeat1, 2),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_expr_set, 5),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 4),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 2),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 7),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 8),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsql_select_block_repeat1, 2),
  [967] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_select_block_repeat1, 2), SHIFT_REPEAT(74),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_expr_set, 4),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_type, 1),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edge_set_type, 1),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_pattern, 1),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_set, 3),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_edge_pattern, 1),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 1),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 8),
  [994] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 8),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 5),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 2),
  [1016] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 2), SHIFT_REPEAT(127),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 9),
  [1023] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 9),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1029] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2), SHIFT_REPEAT(172),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 2),
  [1034] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 2), SHIFT_REPEAT(261),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat2, 2),
  [1039] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat2, 2), SHIFT_REPEAT(257),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 2),
  [1044] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 2), SHIFT_REPEAT(114),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 3, .production_id = 7),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 2),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 2),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 6, .production_id = 17),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_pattern, 2),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 2),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 10),
  [1093] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 10),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 4),
  [1097] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 4),
  [1099] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2), SHIFT_REPEAT(170),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 1),
  [1104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 1),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 11),
  [1108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 11),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 6),
  [1112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 6),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(803),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 4),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_expr, 3),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_var_decl_stmt, 3),
  [1134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat1, 2), SHIFT_REPEAT(288),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat1, 2),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 13, .production_id = 4),
  [1141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 2), SHIFT_REPEAT(742),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 2),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 4),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 3),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 3),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 5),
  [1184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_v_expr_set_repeat1, 2), SHIFT_REPEAT(138),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_expr_set_repeat1, 2),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat2, 4),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 5),
  [1193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 2), SHIFT_REPEAT(675),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 2),
  [1198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [1200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [1202] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seed_set_repeat1, 2), SHIFT_REPEAT(378),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seed_set_repeat1, 2),
  [1209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 12, .production_id = 3),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [1223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [1229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [1231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(509),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [1240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2),
  [1242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(511),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_edge_types_repeat1, 2),
  [1255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_edge_types_repeat1, 2), SHIFT_REPEAT(469),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 8, .production_id = 1),
  [1278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat4, 2), SHIFT_REPEAT(258),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat4, 2),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpret_query, 8, .production_id = 1),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 10),
  [1297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 10), SHIFT_REPEAT(668),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 9, .production_id = 2),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 2),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_size, 1),
  [1310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 4),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 4),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 10, .production_id = 3),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 10, .production_id = 1),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_edge_pattern, 3),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [1352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [1358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 4),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 2),
  [1370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 2), SHIFT_REPEAT(665),
  [1373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 2), SHIFT_REPEAT(661),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 2),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 3),
  [1382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 2), SHIFT_REPEAT(448),
  [1385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 2),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpret_query, 10, .production_id = 1),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 4),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 11, .production_id = 4),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 11, .production_id = 2),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 1),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_accum_clause, 2),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_clause, 2),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_vertex_types_repeat1, 2),
  [1427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_vertex_types_repeat1, 2), SHIFT_REPEAT(453),
  [1430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 3),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 5),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 3),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 4),
  [1472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 9),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 8, .production_id = 7),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 2),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 4),
  [1490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_set, 1),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_proj, 3),
  [1506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat3, 2), SHIFT_REPEAT(280),
  [1509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat4, 3),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 5),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 4),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_set, 3, .production_id = 20),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 7),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 3),
  [1603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 2),
  [1605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_clause, 4),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 8),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 13, .production_id = 7),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 6),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 6),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat3, 3),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [1681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [1683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_while_stmt, 7),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 7),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_stmt, 1),
  [1701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 5),
  [1703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_stmt, 1),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(721),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [1717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(723),
  [1719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [1721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [1723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [1725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [1727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [1729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_stmt, 1),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 6),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 5),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_while_stmt, 5),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_for_each_stmt, 5),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 3),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [1805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 4),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 6),
  [1819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 5),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1881] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
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
