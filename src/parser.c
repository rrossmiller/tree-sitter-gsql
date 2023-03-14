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
  sym__select_stmt = 153,
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
      if (eof) ADVANCE(449);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(884);
      if (lookahead == '%') ADVANCE(895);
      if (lookahead == '&') ADVANCE(900);
      if (lookahead == '\'') ADVANCE(889);
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '*') ADVANCE(525);
      if (lookahead == '+') ADVANCE(897);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '.') ADVANCE(482);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == ':') ADVANCE(514);
      if (lookahead == ';') ADVANCE(476);
      if (lookahead == '<') ADVANCE(471);
      if (lookahead == '=') ADVANCE(465);
      if (lookahead == '>') ADVANCE(475);
      if (lookahead == '@') ADVANCE(568);
      if (lookahead == 'A') ADVANCE(95);
      if (lookahead == 'B') ADVANCE(59);
      if (lookahead == 'C') ADVANCE(58);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'E') ADVANCE(140);
      if (lookahead == 'F') ADVANCE(52);
      if (lookahead == 'G') ADVANCE(315);
      if (lookahead == 'H') ADVANCE(145);
      if (lookahead == 'I') ADVANCE(191);
      if (lookahead == 'J') ADVANCE(337);
      if (lookahead == 'L') ADVANCE(210);
      if (lookahead == 'M') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(299);
      if (lookahead == 'O') ADVANCE(192);
      if (lookahead == 'P') ADVANCE(321);
      if (lookahead == 'Q') ADVANCE(393);
      if (lookahead == 'R') ADVANCE(64);
      if (lookahead == 'S') ADVANCE(146);
      if (lookahead == 'T') ADVANCE(207);
      if (lookahead == 'U') ADVANCE(224);
      if (lookahead == 'V') ADVANCE(173);
      if (lookahead == 'W') ADVANCE(202);
      if (lookahead == '[') ADVANCE(517);
      if (lookahead == ']') ADVANCE(518);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'a') ADVANCE(423);
      if (lookahead == 'g') ADVANCE(436);
      if (lookahead == 'p') ADVANCE(434);
      if (lookahead == 's') ADVANCE(442);
      if (lookahead == 't') ADVANCE(433);
      if (lookahead == 'v') ADVANCE(44);
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == '}') ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(883);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(905);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(884);
      if (lookahead == '%') ADVANCE(895);
      if (lookahead == '&') ADVANCE(900);
      if (lookahead == '\'') ADVANCE(889);
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '*') ADVANCE(525);
      if (lookahead == '+') ADVANCE(897);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '.') ADVANCE(482);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == ':') ADVANCE(514);
      if (lookahead == ';') ADVANCE(476);
      if (lookahead == '<') ADVANCE(471);
      if (lookahead == '=') ADVANCE(465);
      if (lookahead == '>') ADVANCE(475);
      if (lookahead == '@') ADVANCE(568);
      if (lookahead == 'A') ADVANCE(95);
      if (lookahead == 'B') ADVANCE(59);
      if (lookahead == 'C') ADVANCE(58);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'E') ADVANCE(140);
      if (lookahead == 'F') ADVANCE(52);
      if (lookahead == 'G') ADVANCE(315);
      if (lookahead == 'H') ADVANCE(145);
      if (lookahead == 'I') ADVANCE(191);
      if (lookahead == 'J') ADVANCE(337);
      if (lookahead == 'L') ADVANCE(210);
      if (lookahead == 'M') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(299);
      if (lookahead == 'O') ADVANCE(192);
      if (lookahead == 'P') ADVANCE(321);
      if (lookahead == 'Q') ADVANCE(393);
      if (lookahead == 'R') ADVANCE(64);
      if (lookahead == 'S') ADVANCE(146);
      if (lookahead == 'T') ADVANCE(207);
      if (lookahead == 'U') ADVANCE(224);
      if (lookahead == 'V') ADVANCE(173);
      if (lookahead == 'W') ADVANCE(202);
      if (lookahead == '[') ADVANCE(517);
      if (lookahead == ']') ADVANCE(518);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'a') ADVANCE(423);
      if (lookahead == 'g') ADVANCE(436);
      if (lookahead == 'p') ADVANCE(434);
      if (lookahead == 's') ADVANCE(442);
      if (lookahead == 't') ADVANCE(433);
      if (lookahead == 'v') ADVANCE(44);
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '}') ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(883);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(884);
      if (lookahead == '%') ADVANCE(895);
      if (lookahead == '&') ADVANCE(900);
      if (lookahead == '\'') ADVANCE(889);
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '*') ADVANCE(525);
      if (lookahead == '+') ADVANCE(897);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '.') ADVANCE(482);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == ':') ADVANCE(514);
      if (lookahead == ';') ADVANCE(476);
      if (lookahead == '<') ADVANCE(471);
      if (lookahead == '=') ADVANCE(465);
      if (lookahead == '>') ADVANCE(475);
      if (lookahead == '@') ADVANCE(568);
      if (lookahead == 'A') ADVANCE(95);
      if (lookahead == 'B') ADVANCE(59);
      if (lookahead == 'C') ADVANCE(58);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'E') ADVANCE(140);
      if (lookahead == 'F') ADVANCE(52);
      if (lookahead == 'G') ADVANCE(315);
      if (lookahead == 'H') ADVANCE(145);
      if (lookahead == 'I') ADVANCE(191);
      if (lookahead == 'J') ADVANCE(337);
      if (lookahead == 'L') ADVANCE(210);
      if (lookahead == 'M') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(299);
      if (lookahead == 'O') ADVANCE(192);
      if (lookahead == 'P') ADVANCE(321);
      if (lookahead == 'Q') ADVANCE(393);
      if (lookahead == 'R') ADVANCE(64);
      if (lookahead == 'S') ADVANCE(146);
      if (lookahead == 'T') ADVANCE(207);
      if (lookahead == 'U') ADVANCE(224);
      if (lookahead == 'V') ADVANCE(173);
      if (lookahead == 'W') ADVANCE(202);
      if (lookahead == '[') ADVANCE(517);
      if (lookahead == ']') ADVANCE(518);
      if (lookahead == '_') ADVANCE(486);
      if (lookahead == 'a') ADVANCE(423);
      if (lookahead == 'g') ADVANCE(436);
      if (lookahead == 'p') ADVANCE(434);
      if (lookahead == 's') ADVANCE(442);
      if (lookahead == 't') ADVANCE(433);
      if (lookahead == 'v') ADVANCE(44);
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == '}') ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(883);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(524);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(884);
      if (lookahead == '%') ADVANCE(895);
      if (lookahead == '&') ADVANCE(900);
      if (lookahead == '\'') ADVANCE(889);
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '*') ADVANCE(525);
      if (lookahead == '+') ADVANCE(896);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == ':') ADVANCE(514);
      if (lookahead == ';') ADVANCE(476);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(464);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == 'C') ADVANCE(329);
      if (lookahead == 'D') ADVANCE(295);
      if (lookahead == 'E') ADVANCE(244);
      if (lookahead == 'F') ADVANCE(53);
      if (lookahead == 'I') ADVANCE(292);
      if (lookahead == 'L') ADVANCE(221);
      if (lookahead == 'M') ADVANCE(68);
      if (lookahead == 'O') ADVANCE(192);
      if (lookahead == 'T') ADVANCE(206);
      if (lookahead == 'U') ADVANCE(278);
      if (lookahead == 'W') ADVANCE(208);
      if (lookahead == '[') ADVANCE(517);
      if (lookahead == ']') ADVANCE(518);
      if (lookahead == 'g') ADVANCE(436);
      if (lookahead == 'p') ADVANCE(434);
      if (lookahead == 't') ADVANCE(433);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(883);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(884);
      if (lookahead == '%') ADVANCE(895);
      if (lookahead == '&') ADVANCE(900);
      if (lookahead == '\'') ADVANCE(889);
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '*') ADVANCE(525);
      if (lookahead == '+') ADVANCE(896);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == ':') ADVANCE(514);
      if (lookahead == ';') ADVANCE(476);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(464);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == 'C') ADVANCE(329);
      if (lookahead == 'D') ADVANCE(295);
      if (lookahead == 'E') ADVANCE(244);
      if (lookahead == 'F') ADVANCE(53);
      if (lookahead == 'I') ADVANCE(292);
      if (lookahead == 'L') ADVANCE(221);
      if (lookahead == 'M') ADVANCE(68);
      if (lookahead == 'O') ADVANCE(192);
      if (lookahead == 'T') ADVANCE(206);
      if (lookahead == 'U') ADVANCE(278);
      if (lookahead == 'W') ADVANCE(208);
      if (lookahead == '[') ADVANCE(517);
      if (lookahead == ']') ADVANCE(518);
      if (lookahead == 'g') ADVANCE(436);
      if (lookahead == 'p') ADVANCE(434);
      if (lookahead == 't') ADVANCE(433);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(883);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '%') ADVANCE(895);
      if (lookahead == '&') ADVANCE(900);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '*') ADVANCE(525);
      if (lookahead == '+') ADVANCE(896);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '@') ADVANCE(568);
      if (lookahead == 'A') ADVANCE(760);
      if (lookahead == 'B') ADVANCE(645);
      if (lookahead == 'C') ADVANCE(620);
      if (lookahead == 'D') ADVANCE(622);
      if (lookahead == 'E') ADVANCE(683);
      if (lookahead == 'F') ADVANCE(736);
      if (lookahead == 'G') ADVANCE(788);
      if (lookahead == 'H') ADVANCE(687);
      if (lookahead == 'I') ADVANCE(713);
      if (lookahead == 'J') ADVANCE(799);
      if (lookahead == 'L') ADVANCE(725);
      if (lookahead == 'M') ADVANCE(616);
      if (lookahead == 'O') ADVANCE(787);
      if (lookahead == 'P') ADVANCE(796);
      if (lookahead == 'S') ADVANCE(703);
      if (lookahead == 'T') ADVANCE(845);
      if (lookahead == 'U') ADVANCE(729);
      if (lookahead == 'V') ADVANCE(706);
      if (lookahead == 'W') ADVANCE(721);
      if (lookahead == 's') ADVANCE(872);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '}') ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (sym_name_character_set_1(lookahead)) ADVANCE(876);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '%') ADVANCE(895);
      if (lookahead == '&') ADVANCE(900);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '*') ADVANCE(525);
      if (lookahead == '+') ADVANCE(896);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '@') ADVANCE(568);
      if (lookahead == 'A') ADVANCE(760);
      if (lookahead == 'B') ADVANCE(645);
      if (lookahead == 'C') ADVANCE(620);
      if (lookahead == 'D') ADVANCE(622);
      if (lookahead == 'E') ADVANCE(683);
      if (lookahead == 'F') ADVANCE(736);
      if (lookahead == 'G') ADVANCE(788);
      if (lookahead == 'H') ADVANCE(687);
      if (lookahead == 'I') ADVANCE(713);
      if (lookahead == 'J') ADVANCE(799);
      if (lookahead == 'L') ADVANCE(725);
      if (lookahead == 'M') ADVANCE(616);
      if (lookahead == 'O') ADVANCE(787);
      if (lookahead == 'P') ADVANCE(796);
      if (lookahead == 'S') ADVANCE(703);
      if (lookahead == 'T') ADVANCE(845);
      if (lookahead == 'U') ADVANCE(729);
      if (lookahead == 'V') ADVANCE(706);
      if (lookahead == 'W') ADVANCE(721);
      if (lookahead == 's') ADVANCE(872);
      if (lookahead == '}') ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (sym_name_character_set_1(lookahead)) ADVANCE(876);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(514);
      if (lookahead == '<') ADVANCE(473);
      if (lookahead == '=') ADVANCE(464);
      if (lookahead == '>') ADVANCE(474);
      if (lookahead == '@') ADVANCE(568);
      if (lookahead == 'A') ADVANCE(760);
      if (lookahead == 'B') ADVANCE(645);
      if (lookahead == 'C') ADVANCE(620);
      if (lookahead == 'D') ADVANCE(622);
      if (lookahead == 'E') ADVANCE(683);
      if (lookahead == 'F') ADVANCE(736);
      if (lookahead == 'G') ADVANCE(788);
      if (lookahead == 'H') ADVANCE(687);
      if (lookahead == 'I') ADVANCE(713);
      if (lookahead == 'J') ADVANCE(799);
      if (lookahead == 'L') ADVANCE(725);
      if (lookahead == 'M') ADVANCE(616);
      if (lookahead == 'O') ADVANCE(787);
      if (lookahead == 'P') ADVANCE(796);
      if (lookahead == 'S') ADVANCE(703);
      if (lookahead == 'U') ADVANCE(729);
      if (lookahead == 'V') ADVANCE(706);
      if (lookahead == 'W') ADVANCE(721);
      if (lookahead == 's') ADVANCE(872);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '}') ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      if (sym_name_character_set_1(lookahead)) ADVANCE(876);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(514);
      if (lookahead == '<') ADVANCE(473);
      if (lookahead == '=') ADVANCE(464);
      if (lookahead == '>') ADVANCE(474);
      if (lookahead == '@') ADVANCE(568);
      if (lookahead == 'A') ADVANCE(760);
      if (lookahead == 'B') ADVANCE(645);
      if (lookahead == 'C') ADVANCE(620);
      if (lookahead == 'D') ADVANCE(622);
      if (lookahead == 'E') ADVANCE(683);
      if (lookahead == 'F') ADVANCE(736);
      if (lookahead == 'G') ADVANCE(788);
      if (lookahead == 'H') ADVANCE(687);
      if (lookahead == 'I') ADVANCE(713);
      if (lookahead == 'J') ADVANCE(799);
      if (lookahead == 'L') ADVANCE(725);
      if (lookahead == 'M') ADVANCE(616);
      if (lookahead == 'O') ADVANCE(787);
      if (lookahead == 'P') ADVANCE(796);
      if (lookahead == 'S') ADVANCE(703);
      if (lookahead == 'U') ADVANCE(729);
      if (lookahead == 'V') ADVANCE(706);
      if (lookahead == 'W') ADVANCE(721);
      if (lookahead == 's') ADVANCE(872);
      if (lookahead == '}') ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      if (sym_name_character_set_1(lookahead)) ADVANCE(876);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(895);
      if (lookahead == '&') ADVANCE(900);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '*') ADVANCE(525);
      if (lookahead == '+') ADVANCE(897);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == ':') ADVANCE(514);
      if (lookahead == ';') ADVANCE(476);
      if (lookahead == '<') ADVANCE(471);
      if (lookahead == '=') ADVANCE(465);
      if (lookahead == '>') ADVANCE(475);
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'B') ADVANCE(144);
      if (lookahead == 'D') ADVANCE(295);
      if (lookahead == 'E') ADVANCE(244);
      if (lookahead == 'I') ADVANCE(267);
      if (lookahead == 'L') ADVANCE(211);
      if (lookahead == 'M') ADVANCE(218);
      if (lookahead == 'N') ADVANCE(298);
      if (lookahead == 'O') ADVANCE(192);
      if (lookahead == 'T') ADVANCE(205);
      if (lookahead == 'U') ADVANCE(278);
      if (lookahead == 'W') ADVANCE(208);
      if (lookahead == '[') ADVANCE(517);
      if (lookahead == ']') ADVANCE(518);
      if (lookahead == 'p') ADVANCE(434);
      if (lookahead == 't') ADVANCE(433);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '}') ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(895);
      if (lookahead == '&') ADVANCE(900);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '*') ADVANCE(525);
      if (lookahead == '+') ADVANCE(897);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == ':') ADVANCE(514);
      if (lookahead == ';') ADVANCE(476);
      if (lookahead == '<') ADVANCE(471);
      if (lookahead == '=') ADVANCE(465);
      if (lookahead == '>') ADVANCE(475);
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'B') ADVANCE(144);
      if (lookahead == 'D') ADVANCE(295);
      if (lookahead == 'E') ADVANCE(244);
      if (lookahead == 'I') ADVANCE(267);
      if (lookahead == 'L') ADVANCE(211);
      if (lookahead == 'M') ADVANCE(218);
      if (lookahead == 'N') ADVANCE(298);
      if (lookahead == 'O') ADVANCE(192);
      if (lookahead == 'T') ADVANCE(205);
      if (lookahead == 'U') ADVANCE(278);
      if (lookahead == 'W') ADVANCE(208);
      if (lookahead == '[') ADVANCE(517);
      if (lookahead == ']') ADVANCE(518);
      if (lookahead == 'p') ADVANCE(434);
      if (lookahead == 't') ADVANCE(433);
      if (lookahead == '}') ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(895);
      if (lookahead == '&') ADVANCE(900);
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '*') ADVANCE(525);
      if (lookahead == '+') ADVANCE(896);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == ';') ADVANCE(476);
      if (lookahead == '<') ADVANCE(471);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(475);
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'B') ADVANCE(144);
      if (lookahead == 'D') ADVANCE(295);
      if (lookahead == 'E') ADVANCE(244);
      if (lookahead == 'I') ADVANCE(267);
      if (lookahead == 'L') ADVANCE(211);
      if (lookahead == 'M') ADVANCE(218);
      if (lookahead == 'N') ADVANCE(298);
      if (lookahead == 'O') ADVANCE(192);
      if (lookahead == 'T') ADVANCE(205);
      if (lookahead == 'U') ADVANCE(278);
      if (lookahead == 'W') ADVANCE(208);
      if (lookahead == '[') ADVANCE(517);
      if (lookahead == ']') ADVANCE(518);
      if (lookahead == 'p') ADVANCE(434);
      if (lookahead == 't') ADVANCE(433);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(14)
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(895);
      if (lookahead == '&') ADVANCE(900);
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '*') ADVANCE(525);
      if (lookahead == '+') ADVANCE(896);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == ';') ADVANCE(476);
      if (lookahead == '<') ADVANCE(471);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(475);
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'B') ADVANCE(144);
      if (lookahead == 'D') ADVANCE(295);
      if (lookahead == 'E') ADVANCE(244);
      if (lookahead == 'I') ADVANCE(267);
      if (lookahead == 'L') ADVANCE(211);
      if (lookahead == 'M') ADVANCE(218);
      if (lookahead == 'N') ADVANCE(298);
      if (lookahead == 'O') ADVANCE(192);
      if (lookahead == 'T') ADVANCE(205);
      if (lookahead == 'U') ADVANCE(278);
      if (lookahead == 'W') ADVANCE(208);
      if (lookahead == '[') ADVANCE(517);
      if (lookahead == ']') ADVANCE(518);
      if (lookahead == 'p') ADVANCE(434);
      if (lookahead == 't') ADVANCE(433);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(895);
      if (lookahead == '&') ADVANCE(900);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '*') ADVANCE(525);
      if (lookahead == '+') ADVANCE(896);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == ':') ADVANCE(514);
      if (lookahead == ';') ADVANCE(476);
      if (lookahead == '<') ADVANCE(471);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(475);
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'B') ADVANCE(144);
      if (lookahead == 'D') ADVANCE(295);
      if (lookahead == 'E') ADVANCE(244);
      if (lookahead == 'I') ADVANCE(275);
      if (lookahead == 'L') ADVANCE(211);
      if (lookahead == 'M') ADVANCE(220);
      if (lookahead == 'N') ADVANCE(298);
      if (lookahead == 'O') ADVANCE(192);
      if (lookahead == 'T') ADVANCE(205);
      if (lookahead == 'W') ADVANCE(208);
      if (lookahead == '[') ADVANCE(517);
      if (lookahead == ']') ADVANCE(518);
      if (lookahead == 'p') ADVANCE(434);
      if (lookahead == 't') ADVANCE(433);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(883);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(895);
      if (lookahead == '&') ADVANCE(900);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '*') ADVANCE(525);
      if (lookahead == '+') ADVANCE(896);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == ':') ADVANCE(514);
      if (lookahead == ';') ADVANCE(476);
      if (lookahead == '<') ADVANCE(471);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(475);
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead == 'B') ADVANCE(144);
      if (lookahead == 'D') ADVANCE(295);
      if (lookahead == 'E') ADVANCE(244);
      if (lookahead == 'I') ADVANCE(275);
      if (lookahead == 'L') ADVANCE(211);
      if (lookahead == 'M') ADVANCE(220);
      if (lookahead == 'N') ADVANCE(298);
      if (lookahead == 'O') ADVANCE(192);
      if (lookahead == 'T') ADVANCE(205);
      if (lookahead == 'W') ADVANCE(208);
      if (lookahead == '[') ADVANCE(517);
      if (lookahead == ']') ADVANCE(518);
      if (lookahead == 'p') ADVANCE(434);
      if (lookahead == 't') ADVANCE(433);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(883);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(895);
      if (lookahead == '&') ADVANCE(900);
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '*') ADVANCE(525);
      if (lookahead == '+') ADVANCE(896);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == '<') ADVANCE(471);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(475);
      if (lookahead == 'A') ADVANCE(283);
      if (lookahead == 'B') ADVANCE(144);
      if (lookahead == 'D') ADVANCE(168);
      if (lookahead == 'I') ADVANCE(267);
      if (lookahead == 'L') ADVANCE(213);
      if (lookahead == 'M') ADVANCE(218);
      if (lookahead == 'N') ADVANCE(298);
      if (lookahead == 'O') ADVANCE(316);
      if (lookahead == 'U') ADVANCE(278);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(895);
      if (lookahead == '&') ADVANCE(900);
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '*') ADVANCE(525);
      if (lookahead == '+') ADVANCE(896);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == '<') ADVANCE(471);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(475);
      if (lookahead == 'A') ADVANCE(283);
      if (lookahead == 'B') ADVANCE(144);
      if (lookahead == 'D') ADVANCE(168);
      if (lookahead == 'I') ADVANCE(267);
      if (lookahead == 'L') ADVANCE(213);
      if (lookahead == 'M') ADVANCE(218);
      if (lookahead == 'N') ADVANCE(298);
      if (lookahead == 'O') ADVANCE(316);
      if (lookahead == 'U') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(895);
      if (lookahead == '&') ADVANCE(900);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '*') ADVANCE(525);
      if (lookahead == '+') ADVANCE(896);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == '<') ADVANCE(471);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(475);
      if (lookahead == 'A') ADVANCE(282);
      if (lookahead == 'B') ADVANCE(144);
      if (lookahead == 'I') ADVANCE(275);
      if (lookahead == 'L') ADVANCE(213);
      if (lookahead == 'N') ADVANCE(298);
      if (lookahead == 'O') ADVANCE(316);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(883);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '%') ADVANCE(895);
      if (lookahead == '&') ADVANCE(900);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '*') ADVANCE(525);
      if (lookahead == '+') ADVANCE(896);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == '<') ADVANCE(471);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '>') ADVANCE(475);
      if (lookahead == 'A') ADVANCE(282);
      if (lookahead == 'B') ADVANCE(144);
      if (lookahead == 'I') ADVANCE(275);
      if (lookahead == 'L') ADVANCE(213);
      if (lookahead == 'N') ADVANCE(298);
      if (lookahead == 'O') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(883);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(514);
      if (lookahead == ';') ADVANCE(476);
      if (lookahead == '<') ADVANCE(405);
      if (lookahead == '=') ADVANCE(464);
      if (lookahead == '>') ADVANCE(474);
      if (lookahead == 'E') ADVANCE(244);
      if (lookahead == 'I') ADVANCE(274);
      if (lookahead == 'L') ADVANCE(221);
      if (lookahead == 'W') ADVANCE(209);
      if (lookahead == 'p') ADVANCE(434);
      if (lookahead == '|') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(22)
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(514);
      if (lookahead == ';') ADVANCE(476);
      if (lookahead == '<') ADVANCE(405);
      if (lookahead == '=') ADVANCE(464);
      if (lookahead == '>') ADVANCE(474);
      if (lookahead == 'E') ADVANCE(244);
      if (lookahead == 'I') ADVANCE(274);
      if (lookahead == 'L') ADVANCE(221);
      if (lookahead == 'W') ADVANCE(209);
      if (lookahead == 'p') ADVANCE(434);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(884);
      if (lookahead == '\'') ADVANCE(889);
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(405);
      if (lookahead == '@') ADVANCE(568);
      if (lookahead == 'C') ADVANCE(777);
      if (lookahead == 'F') ADVANCE(625);
      if (lookahead == 'I') ADVANCE(802);
      if (lookahead == 'T') ADVANCE(793);
      if (lookahead == '[') ADVANCE(517);
      if (lookahead == 'g') ADVANCE(869);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(883);
      if (sym_name_character_set_2(lookahead)) ADVANCE(876);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(884);
      if (lookahead == '\'') ADVANCE(889);
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(473);
      if (lookahead == '>') ADVANCE(474);
      if (lookahead == '@') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(883);
      if (sym_name_character_set_2(lookahead)) ADVANCE(876);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(884);
      if (lookahead == '\'') ADVANCE(889);
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(405);
      if (lookahead == '@') ADVANCE(568);
      if (lookahead == 'C') ADVANCE(777);
      if (lookahead == 'F') ADVANCE(625);
      if (lookahead == 'I') ADVANCE(802);
      if (lookahead == 'N') ADVANCE(781);
      if (lookahead == 'T') ADVANCE(793);
      if (lookahead == '[') ADVANCE(517);
      if (lookahead == 'g') ADVANCE(869);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(883);
      if (sym_name_character_set_2(lookahead)) ADVANCE(876);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(884);
      if (lookahead == '\'') ADVANCE(889);
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(405);
      if (lookahead == '@') ADVANCE(568);
      if (lookahead == 'C') ADVANCE(777);
      if (lookahead == 'F') ADVANCE(625);
      if (lookahead == 'I') ADVANCE(802);
      if (lookahead == 'S') ADVANCE(712);
      if (lookahead == 'T') ADVANCE(793);
      if (lookahead == '[') ADVANCE(517);
      if (lookahead == 'g') ADVANCE(869);
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(883);
      if (sym_name_character_set_2(lookahead)) ADVANCE(876);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(884);
      if (lookahead == '\'') ADVANCE(889);
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(405);
      if (lookahead == '@') ADVANCE(568);
      if (lookahead == 'C') ADVANCE(777);
      if (lookahead == 'F') ADVANCE(625);
      if (lookahead == 'I') ADVANCE(802);
      if (lookahead == 'T') ADVANCE(793);
      if (lookahead == 'W') ADVANCE(722);
      if (lookahead == '[') ADVANCE(517);
      if (lookahead == 'g') ADVANCE(869);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(883);
      if (sym_name_character_set_2(lookahead)) ADVANCE(876);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(884);
      if (lookahead == '/') ADVANCE(886);
      if (lookahead == '<') ADVANCE(888);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '&') ADVANCE(885);
      END_STATE();
    case 29:
      if (lookahead == '\'') ADVANCE(889);
      if (lookahead == '/') ADVANCE(891);
      if (lookahead == '<') ADVANCE(893);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '&') ADVANCE(890);
      END_STATE();
    case 30:
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(473);
      if (lookahead == '>') ADVANCE(474);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == 'A') ADVANCE(764);
      if (lookahead == '_') ADVANCE(487);
      if (lookahead == '}') ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (sym_name_character_set_3(lookahead)) ADVANCE(876);
      END_STATE();
    case 31:
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(405);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == 'D') ADVANCE(731);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (sym_name_character_set_2(lookahead)) ADVANCE(876);
      END_STATE();
    case 32:
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(405);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == 'R') ADVANCE(630);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (sym_name_character_set_2(lookahead)) ADVANCE(876);
      END_STATE();
    case 33:
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ';') ADVANCE(476);
      if (lookahead == '<') ADVANCE(405);
      if (lookahead == '=') ADVANCE(464);
      if (lookahead == 'A') ADVANCE(294);
      if (lookahead == 'B') ADVANCE(60);
      if (lookahead == 'D') ADVANCE(62);
      if (lookahead == 'E') ADVANCE(140);
      if (lookahead == 'F') ADVANCE(235);
      if (lookahead == 'G') ADVANCE(324);
      if (lookahead == 'H') ADVANCE(145);
      if (lookahead == 'I') ADVANCE(288);
      if (lookahead == 'J') ADVANCE(337);
      if (lookahead == 'L') ADVANCE(212);
      if (lookahead == 'M') ADVANCE(63);
      if (lookahead == 'O') ADVANCE(333);
      if (lookahead == 'S') ADVANCE(190);
      if (lookahead == 'U') ADVANCE(223);
      if (lookahead == 'V') ADVANCE(173);
      if (lookahead == 'W') ADVANCE(209);
      if (lookahead == 'p') ADVANCE(434);
      if (lookahead == 's') ADVANCE(442);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(490);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(906);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '/') ADVANCE(907);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(36);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(473);
      if (lookahead == '>') ADVANCE(474);
      if (lookahead == 'B') ADVANCE(775);
      if (lookahead == 'D') ADVANCE(622);
      if (lookahead == 'E') ADVANCE(683);
      if (lookahead == 'F') ADVANCE(737);
      if (lookahead == 'I') ADVANCE(763);
      if (lookahead == 'J') ADVANCE(799);
      if (lookahead == 'S') ADVANCE(818);
      if (lookahead == 'U') ADVANCE(729);
      if (lookahead == 'V') ADVANCE(706);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (sym_name_character_set_2(lookahead)) ADVANCE(876);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(414);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(411);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(408);
      END_STATE();
    case 42:
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(405);
      if (lookahead == '@') ADVANCE(568);
      if (lookahead == 'B') ADVANCE(774);
      if (lookahead == 'C') ADVANCE(620);
      if (lookahead == 'D') ADVANCE(622);
      if (lookahead == 'E') ADVANCE(683);
      if (lookahead == 'F') ADVANCE(736);
      if (lookahead == 'I') ADVANCE(713);
      if (lookahead == 'J') ADVANCE(799);
      if (lookahead == 'S') ADVANCE(818);
      if (lookahead == 'U') ADVANCE(729);
      if (lookahead == 'V') ADVANCE(706);
      if (lookahead == 'W') ADVANCE(721);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (sym_name_character_set_2(lookahead)) ADVANCE(876);
      END_STATE();
    case 43:
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(405);
      if (lookahead == 'A') ADVANCE(760);
      if (lookahead == 'B') ADVANCE(646);
      if (lookahead == 'D') ADVANCE(622);
      if (lookahead == 'E') ADVANCE(683);
      if (lookahead == 'F') ADVANCE(737);
      if (lookahead == 'G') ADVANCE(788);
      if (lookahead == 'H') ADVANCE(687);
      if (lookahead == 'I') ADVANCE(763);
      if (lookahead == 'J') ADVANCE(799);
      if (lookahead == 'L') ADVANCE(725);
      if (lookahead == 'M') ADVANCE(616);
      if (lookahead == 'O') ADVANCE(787);
      if (lookahead == 'S') ADVANCE(703);
      if (lookahead == 'U') ADVANCE(729);
      if (lookahead == 'V') ADVANCE(706);
      if (lookahead == 's') ADVANCE(872);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (sym_name_character_set_4(lookahead)) ADVANCE(876);
      END_STATE();
    case 44:
      if (lookahead == '2') ADVANCE(459);
      END_STATE();
    case 45:
      if (lookahead == '<') ADVANCE(898);
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(904);
      END_STATE();
    case 47:
      if (lookahead == '=') ADVANCE(491);
      END_STATE();
    case 48:
      if (lookahead == '=') ADVANCE(903);
      END_STATE();
    case 49:
      if (lookahead == '>') ADVANCE(899);
      END_STATE();
    case 50:
      if (lookahead == '>') ADVANCE(1);
      END_STATE();
    case 51:
      if (lookahead == '@') ADVANCE(567);
      END_STATE();
    case 52:
      if (lookahead == 'A') ADVANCE(245);
      if (lookahead == 'I') ADVANCE(236);
      if (lookahead == 'L') ADVANCE(302);
      if (lookahead == 'O') ADVANCE(317);
      if (lookahead == 'R') ADVANCE(296);
      END_STATE();
    case 53:
      if (lookahead == 'A') ADVANCE(245);
      if (lookahead == 'O') ADVANCE(319);
      END_STATE();
    case 54:
      if (lookahead == 'A') ADVANCE(312);
      if (lookahead == 'I') ADVANCE(268);
      END_STATE();
    case 55:
      if (lookahead == 'A') ADVANCE(403);
      END_STATE();
    case 56:
      if (lookahead == 'A') ADVANCE(229);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(397);
      END_STATE();
    case 58:
      if (lookahead == 'A') ADVANCE(336);
      if (lookahead == 'O') ADVANCE(72);
      if (lookahead == 'R') ADVANCE(174);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(198);
      if (lookahead == 'E') ADVANCE(345);
      if (lookahead == 'I') ADVANCE(360);
      if (lookahead == 'O') ADVANCE(300);
      if (lookahead == 'R') ADVANCE(172);
      END_STATE();
    case 60:
      if (lookahead == 'A') ADVANCE(198);
      if (lookahead == 'I') ADVANCE(360);
      if (lookahead == 'O') ADVANCE(300);
      END_STATE();
    case 61:
      if (lookahead == 'A') ADVANCE(362);
      if (lookahead == 'E') ADVANCE(335);
      if (lookahead == 'I') ADVANCE(338);
      if (lookahead == 'O') ADVANCE(509);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(362);
      if (lookahead == 'O') ADVANCE(374);
      END_STATE();
    case 63:
      if (lookahead == 'A') ADVANCE(313);
      if (lookahead == 'I') ADVANCE(293);
      END_STATE();
    case 64:
      if (lookahead == 'A') ADVANCE(289);
      if (lookahead == 'E') ADVANCE(307);
      END_STATE();
    case 65:
      if (lookahead == 'A') ADVANCE(416);
      END_STATE();
    case 66:
      if (lookahead == 'A') ADVANCE(122);
      END_STATE();
    case 67:
      if (lookahead == 'A') ADVANCE(306);
      if (lookahead == 'O') ADVANCE(376);
      END_STATE();
    case 68:
      if (lookahead == 'A') ADVANCE(399);
      if (lookahead == 'I') ADVANCE(281);
      END_STATE();
    case 69:
      if (lookahead == 'A') ADVANCE(314);
      END_STATE();
    case 70:
      if (lookahead == 'A') ADVANCE(402);
      END_STATE();
    case 71:
      if (lookahead == 'A') ADVANCE(101);
      END_STATE();
    case 72:
      if (lookahead == 'A') ADVANCE(240);
      if (lookahead == 'N') ADVANCE(368);
      if (lookahead == 'U') ADVANCE(286);
      END_STATE();
    case 73:
      if (lookahead == 'A') ADVANCE(106);
      END_STATE();
    case 74:
      if (lookahead == 'A') ADVANCE(325);
      if (lookahead == 'O') ADVANCE(91);
      END_STATE();
    case 75:
      if (lookahead == 'A') ADVANCE(279);
      if (lookahead == 'O') ADVANCE(332);
      END_STATE();
    case 76:
      if (lookahead == 'A') ADVANCE(350);
      END_STATE();
    case 77:
      if (lookahead == 'A') ADVANCE(366);
      END_STATE();
    case 78:
      if (lookahead == 'A') ADVANCE(123);
      END_STATE();
    case 79:
      if (lookahead == 'A') ADVANCE(124);
      END_STATE();
    case 80:
      if (lookahead == 'A') ADVANCE(125);
      END_STATE();
    case 81:
      if (lookahead == 'A') ADVANCE(126);
      END_STATE();
    case 82:
      if (lookahead == 'A') ADVANCE(127);
      END_STATE();
    case 83:
      if (lookahead == 'A') ADVANCE(128);
      END_STATE();
    case 84:
      if (lookahead == 'A') ADVANCE(129);
      END_STATE();
    case 85:
      if (lookahead == 'A') ADVANCE(130);
      END_STATE();
    case 86:
      if (lookahead == 'A') ADVANCE(131);
      END_STATE();
    case 87:
      if (lookahead == 'A') ADVANCE(132);
      END_STATE();
    case 88:
      if (lookahead == 'A') ADVANCE(133);
      END_STATE();
    case 89:
      if (lookahead == 'A') ADVANCE(134);
      END_STATE();
    case 90:
      if (lookahead == 'A') ADVANCE(135);
      END_STATE();
    case 91:
      if (lookahead == 'B') ADVANCE(228);
      END_STATE();
    case 92:
      if (lookahead == 'B') ADVANCE(394);
      END_STATE();
    case 93:
      if (lookahead == 'B') ADVANCE(243);
      END_STATE();
    case 94:
      if (lookahead == 'B') ADVANCE(404);
      END_STATE();
    case 95:
      if (lookahead == 'C') ADVANCE(100);
      if (lookahead == 'N') ADVANCE(137);
      if (lookahead == 'R') ADVANCE(322);
      if (lookahead == 'S') ADVANCE(601);
      if (lookahead == 'V') ADVANCE(195);
      END_STATE();
    case 96:
      if (lookahead == 'C') ADVANCE(100);
      if (lookahead == 'N') ADVANCE(136);
      if (lookahead == 'S') ADVANCE(601);
      END_STATE();
    case 97:
      if (lookahead == 'C') ADVANCE(100);
      if (lookahead == 'N') ADVANCE(136);
      if (lookahead == 'S') ADVANCE(601);
      if (lookahead == 'V') ADVANCE(197);
      END_STATE();
    case 98:
      if (lookahead == 'C') ADVANCE(562);
      END_STATE();
    case 99:
      if (lookahead == 'C') ADVANCE(561);
      END_STATE();
    case 100:
      if (lookahead == 'C') ADVANCE(373);
      END_STATE();
    case 101:
      if (lookahead == 'C') ADVANCE(204);
      END_STATE();
    case 102:
      if (lookahead == 'C') ADVANCE(354);
      END_STATE();
    case 103:
      if (lookahead == 'C') ADVANCE(355);
      END_STATE();
    case 104:
      if (lookahead == 'C') ADVANCE(356);
      END_STATE();
    case 105:
      if (lookahead == 'C') ADVANCE(357);
      END_STATE();
    case 106:
      if (lookahead == 'C') ADVANCE(160);
      END_STATE();
    case 107:
      if (lookahead == 'C') ADVANCE(161);
      END_STATE();
    case 108:
      if (lookahead == 'C') ADVANCE(377);
      END_STATE();
    case 109:
      if (lookahead == 'C') ADVANCE(378);
      END_STATE();
    case 110:
      if (lookahead == 'C') ADVANCE(379);
      END_STATE();
    case 111:
      if (lookahead == 'C') ADVANCE(380);
      END_STATE();
    case 112:
      if (lookahead == 'C') ADVANCE(382);
      END_STATE();
    case 113:
      if (lookahead == 'C') ADVANCE(383);
      END_STATE();
    case 114:
      if (lookahead == 'C') ADVANCE(384);
      END_STATE();
    case 115:
      if (lookahead == 'C') ADVANCE(385);
      END_STATE();
    case 116:
      if (lookahead == 'C') ADVANCE(386);
      END_STATE();
    case 117:
      if (lookahead == 'C') ADVANCE(387);
      END_STATE();
    case 118:
      if (lookahead == 'C') ADVANCE(388);
      END_STATE();
    case 119:
      if (lookahead == 'C') ADVANCE(389);
      END_STATE();
    case 120:
      if (lookahead == 'C') ADVANCE(390);
      END_STATE();
    case 121:
      if (lookahead == 'C') ADVANCE(391);
      END_STATE();
    case 122:
      if (lookahead == 'C') ADVANCE(108);
      END_STATE();
    case 123:
      if (lookahead == 'C') ADVANCE(109);
      END_STATE();
    case 124:
      if (lookahead == 'C') ADVANCE(110);
      END_STATE();
    case 125:
      if (lookahead == 'C') ADVANCE(111);
      END_STATE();
    case 126:
      if (lookahead == 'C') ADVANCE(112);
      END_STATE();
    case 127:
      if (lookahead == 'C') ADVANCE(113);
      END_STATE();
    case 128:
      if (lookahead == 'C') ADVANCE(114);
      END_STATE();
    case 129:
      if (lookahead == 'C') ADVANCE(115);
      END_STATE();
    case 130:
      if (lookahead == 'C') ADVANCE(116);
      END_STATE();
    case 131:
      if (lookahead == 'C') ADVANCE(117);
      END_STATE();
    case 132:
      if (lookahead == 'C') ADVANCE(118);
      END_STATE();
    case 133:
      if (lookahead == 'C') ADVANCE(119);
      END_STATE();
    case 134:
      if (lookahead == 'C') ADVANCE(120);
      END_STATE();
    case 135:
      if (lookahead == 'C') ADVANCE(121);
      END_STATE();
    case 136:
      if (lookahead == 'D') ADVANCE(583);
      END_STATE();
    case 137:
      if (lookahead == 'D') ADVANCE(583);
      if (lookahead == 'Y') ADVANCE(488);
      END_STATE();
    case 138:
      if (lookahead == 'D') ADVANCE(501);
      END_STATE();
    case 139:
      if (lookahead == 'D') ADVANCE(453);
      END_STATE();
    case 140:
      if (lookahead == 'D') ADVANCE(199);
      if (lookahead == 'L') ADVANCE(339);
      if (lookahead == 'N') ADVANCE(138);
      END_STATE();
    case 141:
      if (lookahead == 'D') ADVANCE(166);
      END_STATE();
    case 142:
      if (lookahead == 'D') ADVANCE(87);
      END_STATE();
    case 143:
      if (lookahead == 'D') ADVANCE(89);
      END_STATE();
    case 144:
      if (lookahead == 'E') ADVANCE(345);
      END_STATE();
    case 145:
      if (lookahead == 'E') ADVANCE(69);
      END_STATE();
    case 146:
      if (lookahead == 'E') ADVANCE(238);
      if (lookahead == 'T') ADVANCE(176);
      if (lookahead == 'U') ADVANCE(246);
      if (lookahead == 'Y') ADVANCE(284);
      END_STATE();
    case 147:
      if (lookahead == 'E') ADVANCE(271);
      END_STATE();
    case 148:
      if (lookahead == 'E') ADVANCE(271);
      if (lookahead == 'I') ADVANCE(242);
      END_STATE();
    case 149:
      if (lookahead == 'E') ADVANCE(502);
      END_STATE();
    case 150:
      if (lookahead == 'E') ADVANCE(608);
      END_STATE();
    case 151:
      if (lookahead == 'E') ADVANCE(500);
      END_STATE();
    case 152:
      if (lookahead == 'E') ADVANCE(588);
      END_STATE();
    case 153:
      if (lookahead == 'E') ADVANCE(584);
      END_STATE();
    case 154:
      if (lookahead == 'E') ADVANCE(586);
      END_STATE();
    case 155:
      if (lookahead == 'E') ADVANCE(515);
      END_STATE();
    case 156:
      if (lookahead == 'E') ADVANCE(470);
      END_STATE();
    case 157:
      if (lookahead == 'E') ADVANCE(495);
      END_STATE();
    case 158:
      if (lookahead == 'E') ADVANCE(506);
      END_STATE();
    case 159:
      if (lookahead == 'E') ADVANCE(450);
      END_STATE();
    case 160:
      if (lookahead == 'E') ADVANCE(452);
      END_STATE();
    case 161:
      if (lookahead == 'E') ADVANCE(570);
      END_STATE();
    case 162:
      if (lookahead == 'E') ADVANCE(479);
      END_STATE();
    case 163:
      if (lookahead == 'E') ADVANCE(614);
      END_STATE();
    case 164:
      if (lookahead == 'E') ADVANCE(533);
      END_STATE();
    case 165:
      if (lookahead == 'E') ADVANCE(141);
      END_STATE();
    case 166:
      if (lookahead == 'E') ADVANCE(193);
      END_STATE();
    case 167:
      if (lookahead == 'E') ADVANCE(398);
      END_STATE();
    case 168:
      if (lookahead == 'E') ADVANCE(335);
      END_STATE();
    case 169:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 170:
      if (lookahead == 'E') ADVANCE(102);
      END_STATE();
    case 171:
      if (lookahead == 'E') ADVANCE(139);
      END_STATE();
    case 172:
      if (lookahead == 'E') ADVANCE(56);
      END_STATE();
    case 173:
      if (lookahead == 'E') ADVANCE(328);
      END_STATE();
    case 174:
      if (lookahead == 'E') ADVANCE(77);
      END_STATE();
    case 175:
      if (lookahead == 'E') ADVANCE(269);
      END_STATE();
    case 176:
      if (lookahead == 'E') ADVANCE(304);
      if (lookahead == 'R') ADVANCE(222);
      END_STATE();
    case 177:
      if (lookahead == 'E') ADVANCE(323);
      END_STATE();
    case 178:
      if (lookahead == 'E') ADVANCE(343);
      END_STATE();
    case 179:
      if (lookahead == 'E') ADVANCE(331);
      END_STATE();
    case 180:
      if (lookahead == 'E') ADVANCE(318);
      END_STATE();
    case 181:
      if (lookahead == 'E') ADVANCE(273);
      END_STATE();
    case 182:
      if (lookahead == 'E') ADVANCE(363);
      END_STATE();
    case 183:
      if (lookahead == 'E') ADVANCE(320);
      END_STATE();
    case 184:
      if (lookahead == 'E') ADVANCE(353);
      END_STATE();
    case 185:
      if (lookahead == 'E') ADVANCE(270);
      END_STATE();
    case 186:
      if (lookahead == 'E') ADVANCE(358);
      END_STATE();
    case 187:
      if (lookahead == 'E') ADVANCE(181);
      END_STATE();
    case 188:
      if (lookahead == 'E') ADVANCE(104);
      END_STATE();
    case 189:
      if (lookahead == 'E') ADVANCE(105);
      END_STATE();
    case 190:
      if (lookahead == 'E') ADVANCE(371);
      if (lookahead == 'T') ADVANCE(327);
      END_STATE();
    case 191:
      if (lookahead == 'F') ADVANCE(497);
      if (lookahead == 'N') ADVANCE(513);
      if (lookahead == 'S') ADVANCE(580);
      END_STATE();
    case 192:
      if (lookahead == 'F') ADVANCE(194);
      if (lookahead == 'R') ADVANCE(451);
      END_STATE();
    case 193:
      if (lookahead == 'F') ADVANCE(468);
      END_STATE();
    case 194:
      if (lookahead == 'F') ADVANCE(342);
      END_STATE();
    case 195:
      if (lookahead == 'G') ADVANCE(596);
      END_STATE();
    case 196:
      if (lookahead == 'G') ADVANCE(535);
      END_STATE();
    case 197:
      if (lookahead == 'G') ADVANCE(595);
      END_STATE();
    case 198:
      if (lookahead == 'G') ADVANCE(78);
      END_STATE();
    case 199:
      if (lookahead == 'G') ADVANCE(150);
      END_STATE();
    case 200:
      if (lookahead == 'G') ADVANCE(155);
      END_STATE();
    case 201:
      if (lookahead == 'G') ADVANCE(66);
      END_STATE();
    case 202:
      if (lookahead == 'H') ADVANCE(148);
      END_STATE();
    case 203:
      if (lookahead == 'H') ADVANCE(457);
      END_STATE();
    case 204:
      if (lookahead == 'H') ADVANCE(510);
      END_STATE();
    case 205:
      if (lookahead == 'H') ADVANCE(175);
      END_STATE();
    case 206:
      if (lookahead == 'H') ADVANCE(175);
      if (lookahead == 'R') ADVANCE(381);
      END_STATE();
    case 207:
      if (lookahead == 'H') ADVANCE(175);
      if (lookahead == 'R') ADVANCE(381);
      if (lookahead == 'U') ADVANCE(311);
      if (lookahead == 'Y') ADVANCE(308);
      END_STATE();
    case 208:
      if (lookahead == 'H') ADVANCE(147);
      END_STATE();
    case 209:
      if (lookahead == 'H') ADVANCE(185);
      END_STATE();
    case 210:
      if (lookahead == 'I') ADVANCE(232);
      END_STATE();
    case 211:
      if (lookahead == 'I') ADVANCE(231);
      END_STATE();
    case 212:
      if (lookahead == 'I') ADVANCE(264);
      END_STATE();
    case 213:
      if (lookahead == 'I') ADVANCE(230);
      END_STATE();
    case 214:
      if (lookahead == 'I') ADVANCE(92);
      END_STATE();
    case 215:
      if (lookahead == 'I') ADVANCE(266);
      END_STATE();
    case 216:
      if (lookahead == 'I') ADVANCE(291);
      END_STATE();
    case 217:
      if (lookahead == 'I') ADVANCE(290);
      if (lookahead == 'R') ADVANCE(214);
      END_STATE();
    case 218:
      if (lookahead == 'I') ADVANCE(281);
      END_STATE();
    case 219:
      if (lookahead == 'I') ADVANCE(351);
      END_STATE();
    case 220:
      if (lookahead == 'I') ADVANCE(276);
      END_STATE();
    case 221:
      if (lookahead == 'I') ADVANCE(263);
      END_STATE();
    case 222:
      if (lookahead == 'I') ADVANCE(280);
      END_STATE();
    case 223:
      if (lookahead == 'I') ADVANCE(285);
      END_STATE();
    case 224:
      if (lookahead == 'I') ADVANCE(285);
      if (lookahead == 'N') ADVANCE(225);
      END_STATE();
    case 225:
      if (lookahead == 'I') ADVANCE(303);
      END_STATE();
    case 226:
      if (lookahead == 'I') ADVANCE(287);
      END_STATE();
    case 227:
      if (lookahead == 'I') ADVANCE(341);
      END_STATE();
    case 228:
      if (lookahead == 'J') ADVANCE(189);
      END_STATE();
    case 229:
      if (lookahead == 'K') ADVANCE(477);
      END_STATE();
    case 230:
      if (lookahead == 'K') ADVANCE(152);
      END_STATE();
    case 231:
      if (lookahead == 'K') ADVANCE(152);
      if (lookahead == 'M') ADVANCE(219);
      END_STATE();
    case 232:
      if (lookahead == 'K') ADVANCE(152);
      if (lookahead == 'M') ADVANCE(219);
      if (lookahead == 'S') ADVANCE(372);
      END_STATE();
    case 233:
      if (lookahead == 'L') ADVANCE(602);
      END_STATE();
    case 234:
      if (lookahead == 'L') ADVANCE(581);
      END_STATE();
    case 235:
      if (lookahead == 'L') ADVANCE(302);
      END_STATE();
    case 236:
      if (lookahead == 'L') ADVANCE(369);
      END_STATE();
    case 237:
      if (lookahead == 'L') ADVANCE(234);
      END_STATE();
    case 238:
      if (lookahead == 'L') ADVANCE(170);
      if (lookahead == 'T') ADVANCE(81);
      END_STATE();
    case 239:
      if (lookahead == 'L') ADVANCE(73);
      END_STATE();
    case 240:
      if (lookahead == 'L') ADVANCE(178);
      END_STATE();
    case 241:
      if (lookahead == 'L') ADVANCE(156);
      END_STATE();
    case 242:
      if (lookahead == 'L') ADVANCE(158);
      END_STATE();
    case 243:
      if (lookahead == 'L') ADVANCE(164);
      END_STATE();
    case 244:
      if (lookahead == 'L') ADVANCE(339);
      if (lookahead == 'N') ADVANCE(138);
      END_STATE();
    case 245:
      if (lookahead == 'L') ADVANCE(340);
      END_STATE();
    case 246:
      if (lookahead == 'M') ADVANCE(597);
      END_STATE();
    case 247:
      if (lookahead == 'M') ADVANCE(494);
      END_STATE();
    case 248:
      if (lookahead == 'M') ADVANCE(496);
      END_STATE();
    case 249:
      if (lookahead == 'M') ADVANCE(541);
      END_STATE();
    case 250:
      if (lookahead == 'M') ADVANCE(555);
      END_STATE();
    case 251:
      if (lookahead == 'M') ADVANCE(557);
      END_STATE();
    case 252:
      if (lookahead == 'M') ADVANCE(537);
      END_STATE();
    case 253:
      if (lookahead == 'M') ADVANCE(553);
      END_STATE();
    case 254:
      if (lookahead == 'M') ADVANCE(559);
      END_STATE();
    case 255:
      if (lookahead == 'M') ADVANCE(551);
      END_STATE();
    case 256:
      if (lookahead == 'M') ADVANCE(565);
      END_STATE();
    case 257:
      if (lookahead == 'M') ADVANCE(563);
      END_STATE();
    case 258:
      if (lookahead == 'M') ADVANCE(547);
      END_STATE();
    case 259:
      if (lookahead == 'M') ADVANCE(549);
      END_STATE();
    case 260:
      if (lookahead == 'M') ADVANCE(543);
      END_STATE();
    case 261:
      if (lookahead == 'M') ADVANCE(545);
      END_STATE();
    case 262:
      if (lookahead == 'M') ADVANCE(539);
      END_STATE();
    case 263:
      if (lookahead == 'M') ADVANCE(219);
      END_STATE();
    case 264:
      if (lookahead == 'M') ADVANCE(219);
      if (lookahead == 'S') ADVANCE(372);
      END_STATE();
    case 265:
      if (lookahead == 'M') ADVANCE(310);
      END_STATE();
    case 266:
      if (lookahead == 'M') ADVANCE(163);
      END_STATE();
    case 267:
      if (lookahead == 'N') ADVANCE(513);
      if (lookahead == 'S') ADVANCE(579);
      END_STATE();
    case 268:
      if (lookahead == 'N') ADVANCE(594);
      END_STATE();
    case 269:
      if (lookahead == 'N') ADVANCE(499);
      END_STATE();
    case 270:
      if (lookahead == 'N') ADVANCE(504);
      END_STATE();
    case 271:
      if (lookahead == 'N') ADVANCE(504);
      if (lookahead == 'R') ADVANCE(157);
      END_STATE();
    case 272:
      if (lookahead == 'N') ADVANCE(483);
      END_STATE();
    case 273:
      if (lookahead == 'N') ADVANCE(582);
      END_STATE();
    case 274:
      if (lookahead == 'N') ADVANCE(512);
      END_STATE();
    case 275:
      if (lookahead == 'N') ADVANCE(512);
      if (lookahead == 'S') ADVANCE(579);
      END_STATE();
    case 276:
      if (lookahead == 'N') ADVANCE(593);
      END_STATE();
    case 277:
      if (lookahead == 'N') ADVANCE(74);
      END_STATE();
    case 278:
      if (lookahead == 'N') ADVANCE(225);
      END_STATE();
    case 279:
      if (lookahead == 'N') ADVANCE(142);
      END_STATE();
    case 280:
      if (lookahead == 'N') ADVANCE(196);
      END_STATE();
    case 281:
      if (lookahead == 'N') ADVANCE(375);
      END_STATE();
    case 282:
      if (lookahead == 'N') ADVANCE(136);
      END_STATE();
    case 283:
      if (lookahead == 'N') ADVANCE(136);
      if (lookahead == 'S') ADVANCE(99);
      END_STATE();
    case 284:
      if (lookahead == 'N') ADVANCE(364);
      END_STATE();
    case 285:
      if (lookahead == 'N') ADVANCE(348);
      END_STATE();
    case 286:
      if (lookahead == 'N') ADVANCE(349);
      END_STATE();
    case 287:
      if (lookahead == 'N') ADVANCE(352);
      END_STATE();
    case 288:
      if (lookahead == 'N') ADVANCE(359);
      END_STATE();
    case 289:
      if (lookahead == 'N') ADVANCE(200);
      END_STATE();
    case 290:
      if (lookahead == 'N') ADVANCE(103);
      END_STATE();
    case 291:
      if (lookahead == 'N') ADVANCE(392);
      END_STATE();
    case 292:
      if (lookahead == 'N') ADVANCE(370);
      END_STATE();
    case 293:
      if (lookahead == 'N') ADVANCE(90);
      END_STATE();
    case 294:
      if (lookahead == 'N') ADVANCE(143);
      if (lookahead == 'R') ADVANCE(322);
      if (lookahead == 'V') ADVANCE(201);
      END_STATE();
    case 295:
      if (lookahead == 'O') ADVANCE(509);
      END_STATE();
    case 296:
      if (lookahead == 'O') ADVANCE(247);
      END_STATE();
    case 297:
      if (lookahead == 'O') ADVANCE(376);
      END_STATE();
    case 298:
      if (lookahead == 'O') ADVANCE(346);
      END_STATE();
    case 299:
      if (lookahead == 'O') ADVANCE(346);
      if (lookahead == 'U') ADVANCE(237);
      END_STATE();
    case 300:
      if (lookahead == 'O') ADVANCE(233);
      END_STATE();
    case 301:
      if (lookahead == 'O') ADVANCE(277);
      END_STATE();
    case 302:
      if (lookahead == 'O') ADVANCE(76);
      END_STATE();
    case 303:
      if (lookahead == 'O') ADVANCE(272);
      END_STATE();
    case 304:
      if (lookahead == 'P') ADVANCE(519);
      END_STATE();
    case 305:
      if (lookahead == 'P') ADVANCE(94);
      END_STATE();
    case 306:
      if (lookahead == 'P') ADVANCE(203);
      END_STATE();
    case 307:
      if (lookahead == 'P') ADVANCE(239);
      END_STATE();
    case 308:
      if (lookahead == 'P') ADVANCE(165);
      END_STATE();
    case 309:
      if (lookahead == 'P') ADVANCE(330);
      if (lookahead == 'S') ADVANCE(188);
      END_STATE();
    case 310:
      if (lookahead == 'P') ADVANCE(361);
      END_STATE();
    case 311:
      if (lookahead == 'P') ADVANCE(241);
      END_STATE();
    case 312:
      if (lookahead == 'P') ADVANCE(79);
      if (lookahead == 'X') ADVANCE(592);
      END_STATE();
    case 313:
      if (lookahead == 'P') ADVANCE(79);
      if (lookahead == 'X') ADVANCE(80);
      END_STATE();
    case 314:
      if (lookahead == 'P') ADVANCE(82);
      END_STATE();
    case 315:
      if (lookahead == 'R') ADVANCE(67);
      END_STATE();
    case 316:
      if (lookahead == 'R') ADVANCE(451);
      END_STATE();
    case 317:
      if (lookahead == 'R') ADVANCE(456);
      END_STATE();
    case 318:
      if (lookahead == 'R') ADVANCE(569);
      END_STATE();
    case 319:
      if (lookahead == 'R') ADVANCE(455);
      END_STATE();
    case 320:
      if (lookahead == 'R') ADVANCE(309);
      END_STATE();
    case 321:
      if (lookahead == 'R') ADVANCE(226);
      END_STATE();
    case 322:
      if (lookahead == 'R') ADVANCE(55);
      END_STATE();
    case 323:
      if (lookahead == 'R') ADVANCE(400);
      END_STATE();
    case 324:
      if (lookahead == 'R') ADVANCE(297);
      END_STATE();
    case 325:
      if (lookahead == 'R') ADVANCE(326);
      END_STATE();
    case 326:
      if (lookahead == 'R') ADVANCE(70);
      END_STATE();
    case 327:
      if (lookahead == 'R') ADVANCE(222);
      END_STATE();
    case 328:
      if (lookahead == 'R') ADVANCE(365);
      END_STATE();
    case 329:
      if (lookahead == 'R') ADVANCE(174);
      END_STATE();
    case 330:
      if (lookahead == 'R') ADVANCE(186);
      END_STATE();
    case 331:
      if (lookahead == 'R') ADVANCE(344);
      END_STATE();
    case 332:
      if (lookahead == 'R') ADVANCE(86);
      END_STATE();
    case 333:
      if (lookahead == 'R') ADVANCE(88);
      END_STATE();
    case 334:
      if (lookahead == 'S') ADVANCE(485);
      END_STATE();
    case 335:
      if (lookahead == 'S') ADVANCE(98);
      END_STATE();
    case 336:
      if (lookahead == 'S') ADVANCE(149);
      END_STATE();
    case 337:
      if (lookahead == 'S') ADVANCE(301);
      END_STATE();
    case 338:
      if (lookahead == 'S') ADVANCE(347);
      END_STATE();
    case 339:
      if (lookahead == 'S') ADVANCE(151);
      END_STATE();
    case 340:
      if (lookahead == 'S') ADVANCE(154);
      END_STATE();
    case 341:
      if (lookahead == 'S') ADVANCE(169);
      END_STATE();
    case 342:
      if (lookahead == 'S') ADVANCE(184);
      END_STATE();
    case 343:
      if (lookahead == 'S') ADVANCE(107);
      END_STATE();
    case 344:
      if (lookahead == 'S') ADVANCE(188);
      END_STATE();
    case 345:
      if (lookahead == 'T') ADVANCE(396);
      END_STATE();
    case 346:
      if (lookahead == 'T') ADVANCE(577);
      END_STATE();
    case 347:
      if (lookahead == 'T') ADVANCE(217);
      END_STATE();
    case 348:
      if (lookahead == 'T') ADVANCE(604);
      END_STATE();
    case 349:
      if (lookahead == 'T') ADVANCE(589);
      END_STATE();
    case 350:
      if (lookahead == 'T') ADVANCE(531);
      END_STATE();
    case 351:
      if (lookahead == 'T') ADVANCE(508);
      END_STATE();
    case 352:
      if (lookahead == 'T') ADVANCE(598);
      END_STATE();
    case 353:
      if (lookahead == 'T') ADVANCE(521);
      END_STATE();
    case 354:
      if (lookahead == 'T') ADVANCE(492);
      END_STATE();
    case 355:
      if (lookahead == 'T') ADVANCE(572);
      END_STATE();
    case 356:
      if (lookahead == 'T') ADVANCE(484);
      END_STATE();
    case 357:
      if (lookahead == 'T') ADVANCE(610);
      END_STATE();
    case 358:
      if (lookahead == 'T') ADVANCE(460);
      END_STATE();
    case 359:
      if (lookahead == 'T') ADVANCE(529);
      END_STATE();
    case 360:
      if (lookahead == 'T') ADVANCE(395);
      END_STATE();
    case 361:
      if (lookahead == 'T') ADVANCE(401);
      END_STATE();
    case 362:
      if (lookahead == 'T') ADVANCE(182);
      END_STATE();
    case 363:
      if (lookahead == 'T') ADVANCE(215);
      END_STATE();
    case 364:
      if (lookahead == 'T') ADVANCE(57);
      END_STATE();
    case 365:
      if (lookahead == 'T') ADVANCE(167);
      END_STATE();
    case 366:
      if (lookahead == 'T') ADVANCE(159);
      END_STATE();
    case 367:
      if (lookahead == 'T') ADVANCE(171);
      END_STATE();
    case 368:
      if (lookahead == 'T') ADVANCE(216);
      END_STATE();
    case 369:
      if (lookahead == 'T') ADVANCE(180);
      END_STATE();
    case 370:
      if (lookahead == 'T') ADVANCE(183);
      END_STATE();
    case 371:
      if (lookahead == 'T') ADVANCE(81);
      END_STATE();
    case 372:
      if (lookahead == 'T') ADVANCE(83);
      END_STATE();
    case 373:
      if (lookahead == 'U') ADVANCE(248);
      END_STATE();
    case 374:
      if (lookahead == 'U') ADVANCE(93);
      END_STATE();
    case 375:
      if (lookahead == 'U') ADVANCE(334);
      END_STATE();
    case 376:
      if (lookahead == 'U') ADVANCE(305);
      END_STATE();
    case 377:
      if (lookahead == 'U') ADVANCE(249);
      END_STATE();
    case 378:
      if (lookahead == 'U') ADVANCE(250);
      END_STATE();
    case 379:
      if (lookahead == 'U') ADVANCE(251);
      END_STATE();
    case 380:
      if (lookahead == 'U') ADVANCE(252);
      END_STATE();
    case 381:
      if (lookahead == 'U') ADVANCE(153);
      END_STATE();
    case 382:
      if (lookahead == 'U') ADVANCE(253);
      END_STATE();
    case 383:
      if (lookahead == 'U') ADVANCE(254);
      END_STATE();
    case 384:
      if (lookahead == 'U') ADVANCE(255);
      END_STATE();
    case 385:
      if (lookahead == 'U') ADVANCE(256);
      END_STATE();
    case 386:
      if (lookahead == 'U') ADVANCE(257);
      END_STATE();
    case 387:
      if (lookahead == 'U') ADVANCE(258);
      END_STATE();
    case 388:
      if (lookahead == 'U') ADVANCE(259);
      END_STATE();
    case 389:
      if (lookahead == 'U') ADVANCE(260);
      END_STATE();
    case 390:
      if (lookahead == 'U') ADVANCE(261);
      END_STATE();
    case 391:
      if (lookahead == 'U') ADVANCE(262);
      END_STATE();
    case 392:
      if (lookahead == 'U') ADVANCE(162);
      END_STATE();
    case 393:
      if (lookahead == 'U') ADVANCE(177);
      END_STATE();
    case 394:
      if (lookahead == 'U') ADVANCE(367);
      END_STATE();
    case 395:
      if (lookahead == 'W') ADVANCE(227);
      END_STATE();
    case 396:
      if (lookahead == 'W') ADVANCE(187);
      END_STATE();
    case 397:
      if (lookahead == 'X') ADVANCE(458);
      END_STATE();
    case 398:
      if (lookahead == 'X') ADVANCE(606);
      END_STATE();
    case 399:
      if (lookahead == 'X') ADVANCE(591);
      END_STATE();
    case 400:
      if (lookahead == 'Y') ADVANCE(454);
      END_STATE();
    case 401:
      if (lookahead == 'Y') ADVANCE(574);
      END_STATE();
    case 402:
      if (lookahead == 'Y') ADVANCE(612);
      END_STATE();
    case 403:
      if (lookahead == 'Y') ADVANCE(84);
      END_STATE();
    case 404:
      if (lookahead == 'Y') ADVANCE(85);
      END_STATE();
    case 405:
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 406:
      if (lookahead == '_') ADVANCE(415);
      END_STATE();
    case 407:
      if (lookahead == '_') ADVANCE(420);
      END_STATE();
    case 408:
      if (lookahead == '_') ADVANCE(50);
      END_STATE();
    case 409:
      if (lookahead == '_') ADVANCE(428);
      END_STATE();
    case 410:
      if (lookahead == '_') ADVANCE(427);
      END_STATE();
    case 411:
      if (lookahead == '_') ADVANCE(41);
      END_STATE();
    case 412:
      if (lookahead == 'a') ADVANCE(446);
      END_STATE();
    case 413:
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == 'i') ADVANCE(430);
      END_STATE();
    case 414:
      if (lookahead == 'a') ADVANCE(419);
      END_STATE();
    case 415:
      if (lookahead == 'c') ADVANCE(438);
      END_STATE();
    case 416:
      if (lookahead == 'c') ADVANCE(417);
      END_STATE();
    case 417:
      if (lookahead == 'c') ADVANCE(443);
      END_STATE();
    case 418:
      if (lookahead == 'c') ADVANCE(444);
      END_STATE();
    case 419:
      if (lookahead == 'c') ADVANCE(418);
      END_STATE();
    case 420:
      if (lookahead == 'i') ADVANCE(431);
      if (lookahead == 'u') ADVANCE(421);
      END_STATE();
    case 421:
      if (lookahead == 'i') ADVANCE(432);
      END_STATE();
    case 422:
      if (lookahead == 'l') ADVANCE(526);
      END_STATE();
    case 423:
      if (lookahead == 'l') ADVANCE(422);
      END_STATE();
    case 424:
      if (lookahead == 'l') ADVANCE(407);
      END_STATE();
    case 425:
      if (lookahead == 'm') ADVANCE(527);
      END_STATE();
    case 426:
      if (lookahead == 'm') ADVANCE(520);
      END_STATE();
    case 427:
      if (lookahead == 'm') ADVANCE(413);
      END_STATE();
    case 428:
      if (lookahead == 'm') ADVANCE(412);
      END_STATE();
    case 429:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 430:
      if (lookahead == 'n') ADVANCE(881);
      END_STATE();
    case 431:
      if (lookahead == 'n') ADVANCE(440);
      END_STATE();
    case 432:
      if (lookahead == 'n') ADVANCE(441);
      END_STATE();
    case 433:
      if (lookahead == 'o') ADVANCE(406);
      END_STATE();
    case 434:
      if (lookahead == 'o') ADVANCE(437);
      END_STATE();
    case 435:
      if (lookahead == 'q') ADVANCE(424);
      END_STATE();
    case 436:
      if (lookahead == 's') ADVANCE(435);
      END_STATE();
    case 437:
      if (lookahead == 's') ADVANCE(439);
      END_STATE();
    case 438:
      if (lookahead == 's') ADVANCE(445);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(409);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(410);
      END_STATE();
    case 442:
      if (lookahead == 'u') ADVANCE(429);
      END_STATE();
    case 443:
      if (lookahead == 'u') ADVANCE(425);
      END_STATE();
    case 444:
      if (lookahead == 'u') ADVANCE(426);
      END_STATE();
    case 445:
      if (lookahead == 'v') ADVANCE(600);
      END_STATE();
    case 446:
      if (lookahead == 'x') ADVANCE(879);
      END_STATE();
    case 447:
      if (lookahead == 'x') ADVANCE(877);
      END_STATE();
    case 448:
      if (eof) ADVANCE(449);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(884);
      if (lookahead == '%') ADVANCE(895);
      if (lookahead == '&') ADVANCE(900);
      if (lookahead == '\'') ADVANCE(889);
      if (lookahead == '(') ADVANCE(461);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '*') ADVANCE(525);
      if (lookahead == '+') ADVANCE(896);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead == '.') ADVANCE(481);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == ':') ADVANCE(514);
      if (lookahead == ';') ADVANCE(476);
      if (lookahead == '<') ADVANCE(472);
      if (lookahead == '=') ADVANCE(464);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == 'C') ADVANCE(329);
      if (lookahead == 'D') ADVANCE(295);
      if (lookahead == 'E') ADVANCE(244);
      if (lookahead == 'F') ADVANCE(53);
      if (lookahead == 'I') ADVANCE(292);
      if (lookahead == 'L') ADVANCE(221);
      if (lookahead == 'M') ADVANCE(68);
      if (lookahead == 'O') ADVANCE(192);
      if (lookahead == 'T') ADVANCE(206);
      if (lookahead == 'U') ADVANCE(278);
      if (lookahead == 'W') ADVANCE(208);
      if (lookahead == '[') ADVANCE(517);
      if (lookahead == ']') ADVANCE(518);
      if (lookahead == 'g') ADVANCE(436);
      if (lookahead == 'p') ADVANCE(434);
      if (lookahead == 't') ADVANCE(433);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(448)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(883);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_CREATE);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_REPLACE);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_DISTRIBUTED);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_QUERY);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_FOR);
      if (lookahead == 'E') ADVANCE(71);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_GRAPH);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_SYNTAX);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_v2);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_INTERPRET);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(903);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_TYPEDEF);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_TYPEDEF);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_TUPLE);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(898);
      if (lookahead == '=') ADVANCE(901);
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(898);
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(902);
      if (lookahead == '>') ADVANCE(899);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_BREAK);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_BREAK);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_CONTINUE);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_CONTINUE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(490);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_UNION);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_INTERSECT);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_MINUS);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym__);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_ANY);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_ANY);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_SELECT);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_SELECT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_WHERE);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_ACCUM);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_IF);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_THEN);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_END);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_CASE);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_CASE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_WHEN);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_WHEN);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_WHILE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_LIMIT);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_DO);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_FOREACH);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_FOREACH);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == 'T') ADVANCE(179);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_RANGE);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_RANGE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_STEP);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_post_DASHaccum);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_OFFSET);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(576);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_sumAccum);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_sumAccum);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_INT);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_INT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_FLOAT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_DOUBLE);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_DOUBLE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_STRING);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_STRING);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_MAXACCUM);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_MAXACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_MINACCUM);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_MINACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_AVGACCUM);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_AVGACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_ORACCUM);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_ORACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_ANDACCUM);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_ANDACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_BITWISEORACCUM);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_BITWISEORACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_BITWISEANDACCUM);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_BITWISEANDACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_LISTACCUM);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_LISTACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_SETACCUM);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_SETACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_BAGACCUM);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_BAGACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_MAPACCUM);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_MAPACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_HEAPACCUM);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_HEAPACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_ASC);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_DESC);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_GROUPBYACCUM);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_GROUPBYACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_ARRAYACCUM);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_ARRAYACCUM);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(567);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_FILTER);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_COALESCE);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_COALESCE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_DISTINCT);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_DISTINCT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_ISEMPTY);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_ISEMPTY);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_NOT);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_NOT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_IS);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_IS);
      if (lookahead == 'E') ADVANCE(265);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_BETWEEN);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_LIKE);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_COUNT);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_COUNT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_MAX);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_MAX);
      if (lookahead == 'A') ADVANCE(125);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_MIN);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_MIN);
      if (lookahead == 'U') ADVANCE(334);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_AVG);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_AVG);
      if (lookahead == 'A') ADVANCE(122);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_SUM);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_PRINT);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_PRINT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_to_csv);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_AS);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_BOOL);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_BOOL);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_UINT);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_UINT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_VERTEX);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_VERTEX);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_EDGE);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_EDGE);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_JSONOBJECT);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_JSONOBJECT);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_JSONARRAY);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_JSONARRAY);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_DATETIME);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_DATETIME);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(785);
      if (lookahead == 'I') ADVANCE(772);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(651);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(734);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(856);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(798);
      if (lookahead == 'O') ADVANCE(765);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(849);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(816);
      if (lookahead == 'O') ADVANCE(825);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(786);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(846);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(742);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(650);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(773);
      if (lookahead == 'O') ADVANCE(797);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(795);
      if (lookahead == 'O') ADVANCE(647);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(809);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(770);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(740);
      if (lookahead == 'U') ADVANCE(769);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(670);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(671);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(672);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(673);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(674);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(675);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(676);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(677);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(678);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(679);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(680);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(681);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(682);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(719);
      if (lookahead == 'I') ADVANCE(806);
      if (lookahead == 'O') ADVANCE(776);
      if (lookahead == 'R') ADVANCE(704);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'A') ADVANCE(719);
      if (lookahead == 'I') ADVANCE(806);
      if (lookahead == 'O') ADVANCE(776);
      if (sym_name_character_set_6(lookahead)) ADVANCE(876);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B') ADVANCE(733);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B') ADVANCE(739);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'B') ADVANCE(850);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(720);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(652);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(826);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(828);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(829);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(830);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(831);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(832);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(811);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(833);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(834);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(835);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(813);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(836);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(838);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(839);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(815);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(840);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(841);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(698);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(653);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(654);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(655);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(656);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(657);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(659);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(660);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(661);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(663);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(664);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(665);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(667);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'C') ADVANCE(668);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D') ADVANCE(716);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D') ADVANCE(693);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D') ADVANCE(632);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'D') ADVANCE(644);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(623);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(503);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(609);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(844);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(507);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(534);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(714);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(480);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(615);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(585);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(587);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(571);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(516);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(684);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(627);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(800);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(823);
      if (lookahead == 'T') ADVANCE(790);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(618);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(658);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(792);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(819);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(759);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(626);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(757);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(662);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'E') ADVANCE(741);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'F') ADVANCE(498);
      if (lookahead == 'N') ADVANCE(807);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'F') ADVANCE(469);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(536);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(689);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(699);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(633);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'G') ADVANCE(634);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(511);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(724);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'H') ADVANCE(708);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(758);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(738);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(805);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(762);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(767);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(771);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(766);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(801);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(804);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'I') ADVANCE(768);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'J') ADVANCE(705);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'K') ADVANCE(478);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(603);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(780);
      if (lookahead == 'O') ADVANCE(794);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(780);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(691);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(692);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(702);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(711);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'L') ADVANCE(803);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(544);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(546);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(542);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(556);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(558);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(538);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(540);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(554);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(560);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(552);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(566);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(564);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(548);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(550);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(784);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'M') ADVANCE(695);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(505);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(685);
      if (lookahead == 'R') ADVANCE(789);
      if (lookahead == 'V') ADVANCE(718);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(628);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(715);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(807);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(848);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(821);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(808);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(837);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(810);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(812);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(717);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(666);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(637);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'N') ADVANCE(686);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(776);
      if (lookahead == 'R') ADVANCE(704);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(776);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(735);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(631);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(827);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(761);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(629);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'O') ADVANCE(814);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(649);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(700);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(817);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(635);
      if (lookahead == 'X') ADVANCE(636);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'P') ADVANCE(639);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(617);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(778);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(621);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(726);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(624);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(820);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(842);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(709);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(791);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(732);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'R') ADVANCE(643);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(688);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(779);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(669);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(701);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(710);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(697);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(822);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'S') ADVANCE(824);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(843);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(530);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(605);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(532);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(599);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(611);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(590);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(493);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(578);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(573);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(707);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(847);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(790);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(723);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(690);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(727);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(728);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(638);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'T') ADVANCE(640);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(648);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(743);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(782);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(744);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(745);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(746);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(747);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(748);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(749);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(750);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(751);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(752);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(694);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(753);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(754);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(755);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(756);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'U') ADVANCE(696);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'W') ADVANCE(730);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'X') ADVANCE(607);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(783);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(613);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(575);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(489);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(641);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'Y') ADVANCE(642);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(858);
      if (sym_name_character_set_7(lookahead)) ADVANCE(876);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(862);
      if (sym_name_character_set_7(lookahead)) ADVANCE(876);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '_') ADVANCE(863);
      if (sym_name_character_set_7(lookahead)) ADVANCE(876);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(874);
      if (sym_name_character_set_8(lookahead)) ADVANCE(876);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(875);
      if (lookahead == 'i') ADVANCE(866);
      if (sym_name_character_set_8(lookahead)) ADVANCE(876);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(857);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(873);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(865);
      if (lookahead == 'u') ADVANCE(859);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(867);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(851);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(528);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(854);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(855);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(619);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(870);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(882);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(871);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'q') ADVANCE(860);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(868);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(852);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(853);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(864);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(861);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'x') ADVANCE(880);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'x') ADVANCE(878);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_gsql_uint_max);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_gsql_uint_max);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_gsql_int_max);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_gsql_int_max);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_gsql_uint_min);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_gsql_uint_min);
      if (sym_name_character_set_5(lookahead)) ADVANCE(876);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_digit);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(906);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(886);
      if (lookahead == '<') ADVANCE(888);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '&') ADVANCE(885);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(906);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '/') ADVANCE(891);
      if (lookahead == '<') ADVANCE(893);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '\'') ADVANCE(890);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_string_literal_token2);
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(906);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(491);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(906);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 448},
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
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 16},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 14},
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
  [51] = {.lex_state = 16},
  [52] = {.lex_state = 8},
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
  [70] = {.lex_state = 26},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 42},
  [75] = {.lex_state = 42},
  [76] = {.lex_state = 42},
  [77] = {.lex_state = 14},
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
  [89] = {.lex_state = 448},
  [90] = {.lex_state = 42},
  [91] = {.lex_state = 25},
  [92] = {.lex_state = 25},
  [93] = {.lex_state = 23},
  [94] = {.lex_state = 25},
  [95] = {.lex_state = 25},
  [96] = {.lex_state = 23},
  [97] = {.lex_state = 25},
  [98] = {.lex_state = 23},
  [99] = {.lex_state = 25},
  [100] = {.lex_state = 23},
  [101] = {.lex_state = 23},
  [102] = {.lex_state = 23},
  [103] = {.lex_state = 23},
  [104] = {.lex_state = 23},
  [105] = {.lex_state = 23},
  [106] = {.lex_state = 23},
  [107] = {.lex_state = 25},
  [108] = {.lex_state = 23},
  [109] = {.lex_state = 25},
  [110] = {.lex_state = 25},
  [111] = {.lex_state = 23},
  [112] = {.lex_state = 23},
  [113] = {.lex_state = 25},
  [114] = {.lex_state = 25},
  [115] = {.lex_state = 25},
  [116] = {.lex_state = 27},
  [117] = {.lex_state = 25},
  [118] = {.lex_state = 23},
  [119] = {.lex_state = 23},
  [120] = {.lex_state = 23},
  [121] = {.lex_state = 23},
  [122] = {.lex_state = 23},
  [123] = {.lex_state = 25},
  [124] = {.lex_state = 23},
  [125] = {.lex_state = 25},
  [126] = {.lex_state = 25},
  [127] = {.lex_state = 25},
  [128] = {.lex_state = 23},
  [129] = {.lex_state = 25},
  [130] = {.lex_state = 25},
  [131] = {.lex_state = 25},
  [132] = {.lex_state = 23},
  [133] = {.lex_state = 25},
  [134] = {.lex_state = 27},
  [135] = {.lex_state = 23},
  [136] = {.lex_state = 23},
  [137] = {.lex_state = 23},
  [138] = {.lex_state = 23},
  [139] = {.lex_state = 23},
  [140] = {.lex_state = 23},
  [141] = {.lex_state = 16},
  [142] = {.lex_state = 23},
  [143] = {.lex_state = 23},
  [144] = {.lex_state = 23},
  [145] = {.lex_state = 23},
  [146] = {.lex_state = 23},
  [147] = {.lex_state = 23},
  [148] = {.lex_state = 23},
  [149] = {.lex_state = 23},
  [150] = {.lex_state = 23},
  [151] = {.lex_state = 23},
  [152] = {.lex_state = 23},
  [153] = {.lex_state = 23},
  [154] = {.lex_state = 18},
  [155] = {.lex_state = 23},
  [156] = {.lex_state = 23},
  [157] = {.lex_state = 23},
  [158] = {.lex_state = 23},
  [159] = {.lex_state = 23},
  [160] = {.lex_state = 18},
  [161] = {.lex_state = 23},
  [162] = {.lex_state = 23},
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
  [175] = {.lex_state = 16},
  [176] = {.lex_state = 23},
  [177] = {.lex_state = 23},
  [178] = {.lex_state = 23},
  [179] = {.lex_state = 23},
  [180] = {.lex_state = 18},
  [181] = {.lex_state = 18},
  [182] = {.lex_state = 43},
  [183] = {.lex_state = 18},
  [184] = {.lex_state = 18},
  [185] = {.lex_state = 18},
  [186] = {.lex_state = 18},
  [187] = {.lex_state = 43},
  [188] = {.lex_state = 18},
  [189] = {.lex_state = 16},
  [190] = {.lex_state = 18},
  [191] = {.lex_state = 18},
  [192] = {.lex_state = 448},
  [193] = {.lex_state = 448},
  [194] = {.lex_state = 18},
  [195] = {.lex_state = 18},
  [196] = {.lex_state = 18},
  [197] = {.lex_state = 18},
  [198] = {.lex_state = 18},
  [199] = {.lex_state = 43},
  [200] = {.lex_state = 18},
  [201] = {.lex_state = 20},
  [202] = {.lex_state = 18},
  [203] = {.lex_state = 18},
  [204] = {.lex_state = 20},
  [205] = {.lex_state = 20},
  [206] = {.lex_state = 18},
  [207] = {.lex_state = 20},
  [208] = {.lex_state = 20},
  [209] = {.lex_state = 18},
  [210] = {.lex_state = 18},
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
  [239] = {.lex_state = 20},
  [240] = {.lex_state = 20},
  [241] = {.lex_state = 448},
  [242] = {.lex_state = 448},
  [243] = {.lex_state = 448},
  [244] = {.lex_state = 18},
  [245] = {.lex_state = 18},
  [246] = {.lex_state = 448},
  [247] = {.lex_state = 23},
  [248] = {.lex_state = 23},
  [249] = {.lex_state = 448},
  [250] = {.lex_state = 33},
  [251] = {.lex_state = 448},
  [252] = {.lex_state = 448},
  [253] = {.lex_state = 448},
  [254] = {.lex_state = 33},
  [255] = {.lex_state = 38},
  [256] = {.lex_state = 38},
  [257] = {.lex_state = 38},
  [258] = {.lex_state = 33},
  [259] = {.lex_state = 448},
  [260] = {.lex_state = 448},
  [261] = {.lex_state = 448},
  [262] = {.lex_state = 448},
  [263] = {.lex_state = 448},
  [264] = {.lex_state = 33},
  [265] = {.lex_state = 448},
  [266] = {.lex_state = 448},
  [267] = {.lex_state = 38},
  [268] = {.lex_state = 38},
  [269] = {.lex_state = 38},
  [270] = {.lex_state = 38},
  [271] = {.lex_state = 38},
  [272] = {.lex_state = 33},
  [273] = {.lex_state = 38},
  [274] = {.lex_state = 33},
  [275] = {.lex_state = 8},
  [276] = {.lex_state = 38},
  [277] = {.lex_state = 38},
  [278] = {.lex_state = 38},
  [279] = {.lex_state = 38},
  [280] = {.lex_state = 448},
  [281] = {.lex_state = 8},
  [282] = {.lex_state = 38},
  [283] = {.lex_state = 33},
  [284] = {.lex_state = 448},
  [285] = {.lex_state = 38},
  [286] = {.lex_state = 38},
  [287] = {.lex_state = 30},
  [288] = {.lex_state = 33},
  [289] = {.lex_state = 33},
  [290] = {.lex_state = 33},
  [291] = {.lex_state = 448},
  [292] = {.lex_state = 448},
  [293] = {.lex_state = 448},
  [294] = {.lex_state = 448},
  [295] = {.lex_state = 33},
  [296] = {.lex_state = 33},
  [297] = {.lex_state = 448},
  [298] = {.lex_state = 33},
  [299] = {.lex_state = 33},
  [300] = {.lex_state = 448},
  [301] = {.lex_state = 8},
  [302] = {.lex_state = 8},
  [303] = {.lex_state = 8},
  [304] = {.lex_state = 33},
  [305] = {.lex_state = 30},
  [306] = {.lex_state = 448},
  [307] = {.lex_state = 448},
  [308] = {.lex_state = 448},
  [309] = {.lex_state = 30},
  [310] = {.lex_state = 22},
  [311] = {.lex_state = 33},
  [312] = {.lex_state = 30},
  [313] = {.lex_state = 30},
  [314] = {.lex_state = 448},
  [315] = {.lex_state = 448},
  [316] = {.lex_state = 448},
  [317] = {.lex_state = 30},
  [318] = {.lex_state = 448},
  [319] = {.lex_state = 448},
  [320] = {.lex_state = 448},
  [321] = {.lex_state = 448},
  [322] = {.lex_state = 448},
  [323] = {.lex_state = 30},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 30},
  [326] = {.lex_state = 30},
  [327] = {.lex_state = 33},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 448},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 30},
  [334] = {.lex_state = 448},
  [335] = {.lex_state = 448},
  [336] = {.lex_state = 448},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 448},
  [340] = {.lex_state = 448},
  [341] = {.lex_state = 448},
  [342] = {.lex_state = 448},
  [343] = {.lex_state = 448},
  [344] = {.lex_state = 448},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 448},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 448},
  [349] = {.lex_state = 448},
  [350] = {.lex_state = 448},
  [351] = {.lex_state = 448},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 24},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 30},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 30},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 448},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 448},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 448},
  [367] = {.lex_state = 32},
  [368] = {.lex_state = 24},
  [369] = {.lex_state = 448},
  [370] = {.lex_state = 31},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 448},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 448},
  [377] = {.lex_state = 31},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 24},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 24},
  [386] = {.lex_state = 24},
  [387] = {.lex_state = 24},
  [388] = {.lex_state = 24},
  [389] = {.lex_state = 24},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 448},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 24},
  [396] = {.lex_state = 22},
  [397] = {.lex_state = 24},
  [398] = {.lex_state = 24},
  [399] = {.lex_state = 30},
  [400] = {.lex_state = 24},
  [401] = {.lex_state = 24},
  [402] = {.lex_state = 448},
  [403] = {.lex_state = 10},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 24},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 24},
  [410] = {.lex_state = 448},
  [411] = {.lex_state = 10},
  [412] = {.lex_state = 10},
  [413] = {.lex_state = 448},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 448},
  [417] = {.lex_state = 10},
  [418] = {.lex_state = 10},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 10},
  [421] = {.lex_state = 24},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 10},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 448},
  [426] = {.lex_state = 24},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 448},
  [430] = {.lex_state = 24},
  [431] = {.lex_state = 448},
  [432] = {.lex_state = 448},
  [433] = {.lex_state = 448},
  [434] = {.lex_state = 24},
  [435] = {.lex_state = 24},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 24},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 24},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 448},
  [445] = {.lex_state = 24},
  [446] = {.lex_state = 448},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 24},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 448},
  [455] = {.lex_state = 24},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 10},
  [458] = {.lex_state = 448},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 24},
  [461] = {.lex_state = 24},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 24},
  [465] = {.lex_state = 448},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 448},
  [468] = {.lex_state = 448},
  [469] = {.lex_state = 33},
  [470] = {.lex_state = 448},
  [471] = {.lex_state = 448},
  [472] = {.lex_state = 24},
  [473] = {.lex_state = 24},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 24},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 448},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 28},
  [482] = {.lex_state = 10},
  [483] = {.lex_state = 29},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 24},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 8},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 33},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 24},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 10},
  [499] = {.lex_state = 24},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 448},
  [502] = {.lex_state = 448},
  [503] = {.lex_state = 448},
  [504] = {.lex_state = 448},
  [505] = {.lex_state = 448},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 10},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 448},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 448},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 24},
  [521] = {.lex_state = 448},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 24},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 28},
  [527] = {.lex_state = 448},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 448},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 10},
  [533] = {.lex_state = 448},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 29},
  [536] = {.lex_state = 448},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 24},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 448},
  [545] = {.lex_state = 448},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 10},
  [549] = {.lex_state = 448},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 448},
  [552] = {.lex_state = 24},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 10},
  [556] = {.lex_state = 10},
  [557] = {.lex_state = 10},
  [558] = {.lex_state = 24},
  [559] = {.lex_state = 448},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 28},
  [570] = {.lex_state = 29},
  [571] = {.lex_state = 10},
  [572] = {.lex_state = 28},
  [573] = {.lex_state = 29},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 24},
  [578] = {.lex_state = 28},
  [579] = {.lex_state = 29},
  [580] = {.lex_state = 24},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 24},
  [583] = {.lex_state = 448},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 448},
  [587] = {.lex_state = 10},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 10},
  [590] = {.lex_state = 10},
  [591] = {.lex_state = 448},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 18},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 18},
  [603] = {.lex_state = 16},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 448},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 10},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 448},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 10},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 448},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 448},
  [631] = {.lex_state = 16},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 448},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 0},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 16},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 10},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 10},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 448},
  [655] = {.lex_state = 0},
  [656] = {.lex_state = 24},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 0},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 24},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 24},
  [663] = {.lex_state = 0},
  [664] = {.lex_state = 24},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 24},
  [667] = {.lex_state = 10},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 10},
  [670] = {.lex_state = 448},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 0},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 0},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 0},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 24},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 24},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 24},
  [689] = {.lex_state = 0},
  [690] = {.lex_state = 0},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 16},
  [695] = {.lex_state = 0},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 0},
  [698] = {.lex_state = 0},
  [699] = {.lex_state = 0},
  [700] = {.lex_state = 0},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 0},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 0},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 0},
  [708] = {.lex_state = 24},
  [709] = {.lex_state = 24},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 24},
  [712] = {.lex_state = 0},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 24},
  [716] = {.lex_state = 24},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 0},
  [719] = {.lex_state = 0},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 0},
  [725] = {.lex_state = 0},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 24},
  [728] = {.lex_state = 448},
  [729] = {.lex_state = 24},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 10},
  [733] = {.lex_state = 24},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 448},
  [736] = {.lex_state = 24},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 24},
  [741] = {.lex_state = 24},
  [742] = {.lex_state = 24},
  [743] = {.lex_state = 448},
  [744] = {.lex_state = 448},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 24},
  [751] = {.lex_state = 24},
  [752] = {.lex_state = 10},
  [753] = {.lex_state = 10},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 10},
  [756] = {.lex_state = 10},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 24},
  [760] = {.lex_state = 10},
  [761] = {.lex_state = 24},
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
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 0},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 24},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 10},
  [784] = {.lex_state = 24},
  [785] = {.lex_state = 0},
  [786] = {.lex_state = 448},
  [787] = {.lex_state = 10},
  [788] = {.lex_state = 24},
  [789] = {.lex_state = 24},
  [790] = {.lex_state = 0},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 24},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 24},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 448},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 24},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 24},
  [803] = {.lex_state = 24},
  [804] = {.lex_state = 24},
  [805] = {.lex_state = 448},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 24},
  [813] = {.lex_state = 10},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 24},
  [817] = {.lex_state = 24},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 448},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 0},
  [823] = {.lex_state = 448},
  [824] = {.lex_state = 24},
  [825] = {.lex_state = 0},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 24},
  [830] = {.lex_state = 448},
  [831] = {.lex_state = 24},
  [832] = {.lex_state = 24},
  [833] = {.lex_state = 448},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 24},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 0},
  [839] = {.lex_state = 24},
  [840] = {.lex_state = 0},
  [841] = {.lex_state = 0},
  [842] = {.lex_state = 0},
  [843] = {.lex_state = 24},
  [844] = {.lex_state = 24},
  [845] = {.lex_state = 24},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 24},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 24},
  [858] = {.lex_state = 24},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 24},
  [863] = {.lex_state = 24},
  [864] = {.lex_state = 0},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 0},
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
    [sym_gsql] = STATE(852),
    [sym__definition] = STATE(372),
    [sym_create_query] = STATE(372),
    [sym_interpret_query] = STATE(372),
    [aux_sym_gsql_repeat1] = STATE(372),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_CREATE] = ACTIONS(7),
    [anon_sym_INTERPRET] = ACTIONS(9),
    [sym_newline] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_typedef] = STATE(52),
    [sym_query_body_stmts] = STATE(4),
    [sym_query_body_stmt] = STATE(748),
    [sym_assign_stmt] = STATE(764),
    [sym_v_set_var_decl_stmt] = STATE(764),
    [sym_l_accum_assign_stmt] = STATE(764),
    [sym_g_accum_assign_stmt] = STATE(764),
    [sym_g_accum_accum_stmt] = STATE(764),
    [sym_func_call_stmt] = STATE(764),
    [sym__select_stmt] = STATE(764),
    [sym_gsql_select_block] = STATE(764),
    [sym_gsql_select_clause] = STATE(616),
    [sym_query_body_case_stmt] = STATE(764),
    [sym_query_body_if_stmt] = STATE(764),
    [sym_query_body_while_stmt] = STATE(764),
    [sym_query_body_for_each_stmt] = STATE(764),
    [sym_decl_stmt] = STATE(764),
    [sym_base_decl_stmt] = STATE(746),
    [sym_accum_decl_stmt] = STATE(746),
    [sym_accum_type] = STATE(453),
    [sym_global_accum_name] = STATE(457),
    [sym_local_accum_name] = STATE(617),
    [sym_print_stmt] = STATE(764),
    [sym_base_type] = STATE(741),
    [aux_sym_query_body_repeat1] = STATE(52),
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
    [sym_typedef] = STATE(2),
    [sym_query_body_stmts] = STATE(6),
    [sym_query_body_stmt] = STATE(748),
    [sym_assign_stmt] = STATE(764),
    [sym_v_set_var_decl_stmt] = STATE(764),
    [sym_l_accum_assign_stmt] = STATE(764),
    [sym_g_accum_assign_stmt] = STATE(764),
    [sym_g_accum_accum_stmt] = STATE(764),
    [sym_func_call_stmt] = STATE(764),
    [sym__select_stmt] = STATE(764),
    [sym_gsql_select_block] = STATE(764),
    [sym_gsql_select_clause] = STATE(616),
    [sym_query_body_case_stmt] = STATE(764),
    [sym_query_body_if_stmt] = STATE(764),
    [sym_query_body_while_stmt] = STATE(764),
    [sym_query_body_for_each_stmt] = STATE(764),
    [sym_decl_stmt] = STATE(764),
    [sym_base_decl_stmt] = STATE(746),
    [sym_accum_decl_stmt] = STATE(746),
    [sym_accum_type] = STATE(453),
    [sym_global_accum_name] = STATE(457),
    [sym_local_accum_name] = STATE(617),
    [sym_print_stmt] = STATE(764),
    [sym_base_type] = STATE(741),
    [aux_sym_query_body_repeat1] = STATE(2),
    [aux_sym_query_body_repeat2] = STATE(6),
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
  [0] = 31,
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
    STATE(453), 1,
      sym_accum_type,
    STATE(457), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_gsql_select_clause,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(741), 1,
      sym_base_type,
    STATE(748), 1,
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
    STATE(5), 2,
      sym_query_body_stmts,
      aux_sym_query_body_repeat2,
    STATE(746), 2,
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
    STATE(764), 14,
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
    STATE(453), 1,
      sym_accum_type,
    STATE(457), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_gsql_select_clause,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(741), 1,
      sym_base_type,
    STATE(748), 1,
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
    STATE(5), 2,
      sym_query_body_stmts,
      aux_sym_query_body_repeat2,
    STATE(746), 2,
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
    STATE(764), 14,
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
    STATE(453), 1,
      sym_accum_type,
    STATE(457), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_gsql_select_clause,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(741), 1,
      sym_base_type,
    STATE(748), 1,
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
    STATE(5), 2,
      sym_query_body_stmts,
      aux_sym_query_body_repeat2,
    STATE(746), 2,
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
    STATE(764), 14,
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
    STATE(453), 1,
      sym_accum_type,
    STATE(457), 1,
      sym_global_accum_name,
    STATE(550), 1,
      sym_query_body_stmts,
    STATE(616), 1,
      sym_gsql_select_clause,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(741), 1,
      sym_base_type,
    STATE(790), 1,
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
    STATE(746), 2,
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
    STATE(764), 14,
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
    STATE(453), 1,
      sym_accum_type,
    STATE(457), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_gsql_select_clause,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(720), 1,
      sym_query_body_stmts,
    STATE(741), 1,
      sym_base_type,
    STATE(790), 1,
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
    STATE(746), 2,
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
    STATE(764), 14,
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
    STATE(453), 1,
      sym_accum_type,
    STATE(457), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_gsql_select_clause,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(646), 1,
      sym_query_body_stmts,
    STATE(741), 1,
      sym_base_type,
    STATE(790), 1,
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
    STATE(746), 2,
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
    STATE(764), 14,
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
    STATE(453), 1,
      sym_accum_type,
    STATE(457), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_gsql_select_clause,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(673), 1,
      sym_query_body_stmts,
    STATE(741), 1,
      sym_base_type,
    STATE(790), 1,
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
    STATE(746), 2,
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
    STATE(764), 14,
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
    STATE(453), 1,
      sym_accum_type,
    STATE(457), 1,
      sym_global_accum_name,
    STATE(492), 1,
      sym_query_body_stmts,
    STATE(616), 1,
      sym_gsql_select_clause,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(741), 1,
      sym_base_type,
    STATE(790), 1,
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
    STATE(746), 2,
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
    STATE(764), 14,
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
    STATE(453), 1,
      sym_accum_type,
    STATE(457), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_gsql_select_clause,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(713), 1,
      sym_query_body_stmts,
    STATE(741), 1,
      sym_base_type,
    STATE(790), 1,
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
    STATE(746), 2,
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
    STATE(764), 14,
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
    STATE(453), 1,
      sym_accum_type,
    STATE(457), 1,
      sym_global_accum_name,
    STATE(563), 1,
      sym_query_body_stmts,
    STATE(616), 1,
      sym_gsql_select_clause,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(741), 1,
      sym_base_type,
    STATE(790), 1,
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
    STATE(746), 2,
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
    STATE(764), 14,
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
    STATE(453), 1,
      sym_accum_type,
    STATE(457), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_gsql_select_clause,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(690), 1,
      sym_query_body_stmts,
    STATE(741), 1,
      sym_base_type,
    STATE(790), 1,
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
    STATE(746), 2,
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
    STATE(764), 14,
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
    STATE(453), 1,
      sym_accum_type,
    STATE(457), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_gsql_select_clause,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(734), 1,
      sym_query_body_stmts,
    STATE(741), 1,
      sym_base_type,
    STATE(790), 1,
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
    STATE(746), 2,
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
    STATE(764), 14,
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
    STATE(453), 1,
      sym_accum_type,
    STATE(457), 1,
      sym_global_accum_name,
    STATE(562), 1,
      sym_query_body_stmts,
    STATE(616), 1,
      sym_gsql_select_clause,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(741), 1,
      sym_base_type,
    STATE(790), 1,
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
    STATE(746), 2,
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
    STATE(764), 14,
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
    STATE(453), 1,
      sym_accum_type,
    STATE(457), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_gsql_select_clause,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(679), 1,
      sym_query_body_stmts,
    STATE(741), 1,
      sym_base_type,
    STATE(790), 1,
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
    STATE(746), 2,
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
    STATE(764), 14,
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
    STATE(453), 1,
      sym_accum_type,
    STATE(457), 1,
      sym_global_accum_name,
    STATE(616), 1,
      sym_gsql_select_clause,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(687), 1,
      sym_query_body_stmts,
    STATE(741), 1,
      sym_base_type,
    STATE(790), 1,
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
    STATE(746), 2,
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
    STATE(764), 14,
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
  [1914] = 6,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_DOT,
    STATE(27), 1,
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
  [1975] = 6,
    ACTIONS(139), 1,
      anon_sym_DOT,
    STATE(24), 1,
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
  [2035] = 5,
    ACTIONS(139), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(143), 4,
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
  [2093] = 4,
    STATE(27), 1,
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
  [2149] = 5,
    ACTIONS(139), 1,
      anon_sym_DOT,
    STATE(29), 1,
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
    ACTIONS(145), 38,
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
  [2207] = 6,
    ACTIONS(149), 1,
      anon_sym_DOT,
    STATE(43), 1,
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
  [2267] = 4,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(155), 4,
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
  [2323] = 4,
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
    ACTIONS(157), 39,
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
  [2379] = 5,
    ACTIONS(161), 1,
      anon_sym_DOT,
    STATE(28), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(155), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(151), 38,
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
  [2437] = 5,
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
  [2495] = 3,
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
  [2548] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(155), 4,
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
  [2601] = 3,
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
  [2654] = 3,
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
  [2707] = 4,
    ACTIONS(183), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(143), 4,
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
  [2818] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(143), 4,
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
  [2870] = 6,
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
  [2928] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 3,
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
  [2982] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(206), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(204), 38,
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
  [3034] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(206), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_SLASH,
    ACTIONS(204), 38,
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
  [3086] = 6,
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
  [3199] = 5,
    ACTIONS(149), 1,
      anon_sym_DOT,
    STATE(45), 1,
      aux_sym_func_call_stmt_repeat2,
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
  [3254] = 5,
    ACTIONS(200), 1,
      sym_digit,
    STATE(35), 1,
      aux_sym_accum_type_repeat1,
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
  [3309] = 5,
    ACTIONS(228), 1,
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
  [3364] = 5,
    ACTIONS(200), 1,
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
  [3419] = 5,
    ACTIONS(200), 1,
      sym_digit,
    STATE(35), 1,
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
  [3576] = 3,
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
  [3626] = 4,
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
  [3678] = 5,
    ACTIONS(255), 1,
      anon_sym_TYPEDEF,
    ACTIONS(253), 2,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
    STATE(52), 2,
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
  [3879] = 3,
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
  [3928] = 3,
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
  [3977] = 3,
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
  [4271] = 3,
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
  [4320] = 3,
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
  [4369] = 3,
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
  [4418] = 3,
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
  [4467] = 3,
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
  [4565] = 30,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      anon_sym_LBRACE,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(326), 1,
      anon_sym_SELECT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(340), 1,
      sym_name,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(253), 1,
      sym_expr,
    STATE(454), 1,
      sym_simple_set,
    STATE(616), 1,
      sym_gsql_select_clause,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    STATE(731), 3,
      sym_seed_set,
      sym__select_stmt,
      sym_gsql_select_block,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [4667] = 3,
    ACTIONS(348), 2,
      anon_sym_RBRACE,
      anon_sym_AT_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(350), 36,
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
  [4715] = 3,
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
  [4763] = 3,
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
  [4810] = 17,
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
    STATE(347), 1,
      sym_dml_sub_stmt,
    STATE(513), 1,
      sym_global_accum_name,
    STATE(518), 1,
      sym_dml_sub_stmt_list,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(740), 1,
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
  [4884] = 17,
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
    STATE(347), 1,
      sym_dml_sub_stmt,
    STATE(513), 1,
      sym_global_accum_name,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(739), 1,
      sym_dml_sub_stmt_list,
    STATE(740), 1,
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
  [4958] = 17,
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
    STATE(347), 1,
      sym_dml_sub_stmt,
    STATE(513), 1,
      sym_global_accum_name,
    STATE(574), 1,
      sym_dml_sub_stmt_list,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(740), 1,
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
  [5032] = 7,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    STATE(43), 1,
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
  [5086] = 17,
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
    STATE(347), 1,
      sym_dml_sub_stmt,
    STATE(513), 1,
      sym_global_accum_name,
    STATE(542), 1,
      sym_dml_sub_stmt_list,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(740), 1,
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
  [5160] = 17,
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
    STATE(347), 1,
      sym_dml_sub_stmt,
    STATE(513), 1,
      sym_global_accum_name,
    STATE(576), 1,
      sym_dml_sub_stmt_list,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(740), 1,
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
  [5234] = 17,
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
    STATE(347), 1,
      sym_dml_sub_stmt,
    STATE(513), 1,
      sym_global_accum_name,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(740), 1,
      sym_base_type,
    STATE(780), 1,
      sym_dml_sub_stmt_list,
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
  [5308] = 17,
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
    STATE(347), 1,
      sym_dml_sub_stmt,
    STATE(513), 1,
      sym_global_accum_name,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(740), 1,
      sym_base_type,
    STATE(797), 1,
      sym_dml_sub_stmt_list,
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
  [5382] = 17,
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
    STATE(347), 1,
      sym_dml_sub_stmt,
    STATE(513), 1,
      sym_global_accum_name,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(647), 1,
      sym_dml_sub_stmt_list,
    STATE(740), 1,
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
  [5456] = 17,
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
    STATE(347), 1,
      sym_dml_sub_stmt,
    STATE(513), 1,
      sym_global_accum_name,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(740), 1,
      sym_base_type,
    STATE(806), 1,
      sym_dml_sub_stmt_list,
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
  [5530] = 17,
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
    STATE(347), 1,
      sym_dml_sub_stmt,
    STATE(496), 1,
      sym_dml_sub_stmt_list,
    STATE(513), 1,
      sym_global_accum_name,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(740), 1,
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
  [5604] = 17,
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
    STATE(347), 1,
      sym_dml_sub_stmt,
    STATE(513), 1,
      sym_global_accum_name,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(691), 1,
      sym_dml_sub_stmt_list,
    STATE(740), 1,
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
  [5678] = 17,
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
    STATE(347), 1,
      sym_dml_sub_stmt,
    STATE(513), 1,
      sym_global_accum_name,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(674), 1,
      sym_dml_sub_stmt_list,
    STATE(740), 1,
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
  [5752] = 17,
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
    STATE(347), 1,
      sym_dml_sub_stmt,
    STATE(513), 1,
      sym_global_accum_name,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(680), 1,
      sym_dml_sub_stmt_list,
    STATE(740), 1,
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
  [5826] = 17,
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
    STATE(347), 1,
      sym_dml_sub_stmt,
    STATE(512), 1,
      sym_dml_sub_stmt_list,
    STATE(513), 1,
      sym_global_accum_name,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(740), 1,
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
  [5900] = 8,
    ACTIONS(137), 1,
      anon_sym_SLASH,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(378), 1,
      anon_sym_LT,
    STATE(43), 1,
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
  [5955] = 16,
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
    STATE(378), 1,
      sym_dml_sub_stmt,
    STATE(513), 1,
      sym_global_accum_name,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(740), 1,
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
  [6026] = 29,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(338), 1,
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
    STATE(184), 1,
      sym_global_accum_name,
    STATE(185), 1,
      sym_name_dot,
    STATE(204), 1,
      aux_sym_accum_type_repeat1,
    STATE(208), 1,
      sym_expr,
    STATE(210), 1,
      sym_set_bag_expr,
    STATE(507), 1,
      sym_condition,
    STATE(611), 1,
      sym_local_accum_name,
    STATE(633), 1,
      sym_arg_list,
    STATE(856), 1,
      sym_aggregator,
    ACTIONS(396), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(224), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(233), 2,
      sym_integer,
      sym_real,
    STATE(237), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(400), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6122] = 29,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(338), 1,
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
    STATE(184), 1,
      sym_global_accum_name,
    STATE(185), 1,
      sym_name_dot,
    STATE(204), 1,
      aux_sym_accum_type_repeat1,
    STATE(205), 1,
      sym_expr,
    STATE(210), 1,
      sym_set_bag_expr,
    STATE(507), 1,
      sym_condition,
    STATE(609), 1,
      sym_arg_list,
    STATE(611), 1,
      sym_local_accum_name,
    STATE(856), 1,
      sym_aggregator,
    ACTIONS(396), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(224), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(233), 2,
      sym_integer,
      sym_real,
    STATE(237), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(400), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6218] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(280), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(834), 1,
      sym_arg_list,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6309] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(420), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(141), 1,
      sym_expr,
    STATE(528), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    ACTIONS(418), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6402] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(420), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(141), 1,
      sym_expr,
    STATE(588), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    ACTIONS(418), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6495] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(280), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(838), 1,
      sym_arg_list,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6586] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(420), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(141), 1,
      sym_expr,
    STATE(463), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    ACTIONS(418), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6679] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(280), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(776), 1,
      sym_arg_list,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6770] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(420), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(141), 1,
      sym_expr,
    STATE(585), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    ACTIONS(418), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6863] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(280), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(835), 1,
      sym_arg_list,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [6954] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(266), 1,
      sym_expr,
    STATE(404), 1,
      sym_v_expr_set,
    STATE(462), 1,
      sym_print_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7045] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(280), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(826), 1,
      sym_arg_list,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7136] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(280), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(702), 1,
      sym_arg_list,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7227] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(280), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(825), 1,
      sym_arg_list,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7318] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(280), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(822), 1,
      sym_arg_list,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7409] = 27,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(338), 1,
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
    ACTIONS(436), 1,
      anon_sym_LPAREN,
    ACTIONS(438), 1,
      anon_sym_DASH,
    ACTIONS(440), 1,
      sym_name,
    STATE(184), 1,
      sym_global_accum_name,
    STATE(185), 1,
      sym_name_dot,
    STATE(204), 1,
      aux_sym_accum_type_repeat1,
    STATE(210), 1,
      sym_set_bag_expr,
    STATE(281), 1,
      sym_expr,
    STATE(470), 1,
      sym_simple_set,
    STATE(611), 1,
      sym_local_accum_name,
    STATE(633), 1,
      sym_arg_list,
    STATE(856), 1,
      sym_aggregator,
    STATE(224), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(233), 2,
      sym_integer,
      sym_real,
    STATE(237), 2,
      sym_numeric,
      sym_string_literal,
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
  [7500] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(420), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(141), 1,
      sym_expr,
    STATE(530), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    ACTIONS(418), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7593] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(280), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(658), 1,
      sym_arg_list,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7684] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(420), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(141), 1,
      sym_expr,
    STATE(332), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    ACTIONS(418), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7777] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(420), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(141), 1,
      sym_expr,
    STATE(331), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    ACTIONS(418), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7870] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(280), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(821), 1,
      sym_arg_list,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [7961] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(280), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(820), 1,
      sym_arg_list,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8052] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(420), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(141), 1,
      sym_expr,
    STATE(442), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    ACTIONS(418), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8145] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(420), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(141), 1,
      sym_expr,
    STATE(495), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    ACTIONS(418), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8238] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(420), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(141), 1,
      sym_expr,
    STATE(477), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    ACTIONS(418), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8331] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(448), 1,
      anon_sym_WHEN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(307), 1,
      sym_expr,
    STATE(476), 1,
      aux_sym_query_body_case_stmt_repeat1,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8422] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(420), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(141), 1,
      sym_expr,
    STATE(485), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    ACTIONS(418), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8515] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(280), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(724), 1,
      sym_arg_list,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8606] = 27,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(338), 1,
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
    ACTIONS(436), 1,
      anon_sym_LPAREN,
    ACTIONS(438), 1,
      anon_sym_DASH,
    ACTIONS(440), 1,
      sym_name,
    STATE(184), 1,
      sym_global_accum_name,
    STATE(185), 1,
      sym_name_dot,
    STATE(204), 1,
      aux_sym_accum_type_repeat1,
    STATE(210), 1,
      sym_set_bag_expr,
    STATE(275), 1,
      sym_expr,
    STATE(470), 1,
      sym_simple_set,
    STATE(609), 1,
      sym_arg_list,
    STATE(611), 1,
      sym_local_accum_name,
    STATE(856), 1,
      sym_aggregator,
    STATE(224), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(233), 2,
      sym_integer,
      sym_real,
    STATE(237), 2,
      sym_numeric,
      sym_string_literal,
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
  [8697] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(266), 1,
      sym_expr,
    STATE(404), 1,
      sym_v_expr_set,
    STATE(406), 1,
      sym_print_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8788] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(280), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(695), 1,
      sym_arg_list,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8879] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(280), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(809), 1,
      sym_arg_list,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [8970] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(420), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(141), 1,
      sym_expr,
    STATE(546), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    ACTIONS(418), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9063] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(280), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(770), 1,
      sym_arg_list,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9154] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(420), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(141), 1,
      sym_expr,
    STATE(523), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    ACTIONS(418), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9247] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(420), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(141), 1,
      sym_expr,
    STATE(541), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    ACTIONS(418), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9340] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(420), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(141), 1,
      sym_expr,
    STATE(561), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    ACTIONS(418), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9433] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(280), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(807), 1,
      sym_arg_list,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9524] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(420), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(141), 1,
      sym_expr,
    STATE(519), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    ACTIONS(418), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9617] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(420), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(141), 1,
      sym_expr,
    STATE(540), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    ACTIONS(418), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9710] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(420), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(141), 1,
      sym_expr,
    STATE(392), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    ACTIONS(418), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9803] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(280), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(653), 1,
      sym_arg_list,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9894] = 28,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      anon_sym_NOT,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(420), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(141), 1,
      sym_expr,
    STATE(452), 1,
      sym_condition,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    ACTIONS(418), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 3,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [9987] = 27,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(462), 1,
      anon_sym_WHEN,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(306), 1,
      sym_expr,
    STATE(451), 1,
      aux_sym_dml_sub_case_stmt_repeat1,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10078] = 26,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(280), 1,
      sym_expr,
    STATE(284), 1,
      sym_set_bag_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(697), 1,
      sym_arg_list,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10166] = 26,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(297), 1,
      sym_expr,
    STATE(522), 1,
      sym_v_set_proj,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10254] = 26,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(280), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(799), 1,
      sym_arg_list,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10342] = 26,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(280), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(699), 1,
      sym_arg_list,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10430] = 26,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(297), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(632), 1,
      sym_v_set_proj,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10518] = 26,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(280), 1,
      sym_expr,
    STATE(284), 1,
      sym_set_bag_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(757), 1,
      sym_arg_list,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10606] = 13,
    ACTIONS(468), 1,
      anon_sym_IN,
    ACTIONS(472), 1,
      anon_sym_NOT,
    ACTIONS(474), 1,
      anon_sym_IS,
    ACTIONS(476), 1,
      anon_sym_BETWEEN,
    ACTIONS(478), 1,
      anon_sym_LIKE,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(166), 1,
      sym_comparison_operator,
    STATE(167), 1,
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
  [10668] = 26,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(338), 1,
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
    ACTIONS(438), 1,
      anon_sym_DASH,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      sym_name,
    STATE(184), 1,
      sym_global_accum_name,
    STATE(185), 1,
      sym_name_dot,
    STATE(204), 1,
      aux_sym_accum_type_repeat1,
    STATE(210), 1,
      sym_set_bag_expr,
    STATE(281), 1,
      sym_expr,
    STATE(611), 1,
      sym_local_accum_name,
    STATE(633), 1,
      sym_arg_list,
    STATE(856), 1,
      sym_aggregator,
    STATE(224), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(233), 2,
      sym_integer,
      sym_real,
    STATE(237), 2,
      sym_numeric,
      sym_string_literal,
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
  [10756] = 26,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(280), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(814), 1,
      sym_arg_list,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10844] = 26,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(280), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(766), 1,
      sym_arg_list,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [10932] = 26,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(338), 1,
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
    ACTIONS(438), 1,
      anon_sym_DASH,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      sym_name,
    STATE(184), 1,
      sym_global_accum_name,
    STATE(185), 1,
      sym_name_dot,
    STATE(204), 1,
      aux_sym_accum_type_repeat1,
    STATE(210), 1,
      sym_set_bag_expr,
    STATE(275), 1,
      sym_expr,
    STATE(609), 1,
      sym_arg_list,
    STATE(611), 1,
      sym_local_accum_name,
    STATE(856), 1,
      sym_aggregator,
    STATE(224), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(233), 2,
      sym_integer,
      sym_real,
    STATE(237), 2,
      sym_numeric,
      sym_string_literal,
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
  [11020] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(319), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11105] = 25,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(338), 1,
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
    ACTIONS(438), 1,
      anon_sym_DASH,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      sym_name,
    STATE(184), 1,
      sym_global_accum_name,
    STATE(185), 1,
      sym_name_dot,
    STATE(204), 1,
      aux_sym_accum_type_repeat1,
    STATE(209), 1,
      sym_set_bag_expr,
    STATE(301), 1,
      sym_expr,
    STATE(611), 1,
      sym_local_accum_name,
    STATE(856), 1,
      sym_aggregator,
    STATE(224), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(233), 2,
      sym_integer,
      sym_real,
    STATE(237), 2,
      sym_numeric,
      sym_string_literal,
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
  [11190] = 25,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(338), 1,
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
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    STATE(184), 1,
      sym_global_accum_name,
    STATE(185), 1,
      sym_name_dot,
    STATE(204), 1,
      aux_sym_accum_type_repeat1,
    STATE(209), 1,
      sym_set_bag_expr,
    STATE(217), 1,
      sym_expr,
    STATE(611), 1,
      sym_local_accum_name,
    STATE(856), 1,
      sym_aggregator,
    STATE(224), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(233), 2,
      sym_integer,
      sym_real,
    STATE(237), 2,
      sym_numeric,
      sym_string_literal,
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
  [11275] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(260), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11360] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    ACTIONS(488), 1,
      anon_sym_DOT,
    ACTIONS(490), 1,
      sym_digit,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(192), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11445] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(314), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11530] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(252), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11615] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(253), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11700] = 7,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    ACTIONS(494), 1,
      anon_sym_DOT,
    STATE(215), 1,
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
  [11749] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(322), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11834] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(293), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [11919] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(321), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12004] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(308), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12089] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(251), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12174] = 6,
    ACTIONS(496), 1,
      anon_sym_LPAREN,
    ACTIONS(498), 1,
      anon_sym_DOT,
    STATE(188), 1,
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
  [12221] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(241), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12306] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(315), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12391] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(318), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12476] = 25,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(338), 1,
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
    ACTIONS(438), 1,
      anon_sym_DASH,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      sym_name,
    STATE(184), 1,
      sym_global_accum_name,
    STATE(185), 1,
      sym_name_dot,
    STATE(204), 1,
      aux_sym_accum_type_repeat1,
    STATE(209), 1,
      sym_set_bag_expr,
    STATE(303), 1,
      sym_expr,
    STATE(611), 1,
      sym_local_accum_name,
    STATE(856), 1,
      sym_aggregator,
    STATE(224), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(233), 2,
      sym_integer,
      sym_real,
    STATE(237), 2,
      sym_numeric,
      sym_string_literal,
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
  [12561] = 4,
    STATE(167), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(270), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(268), 27,
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
  [12604] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(243), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12689] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(420), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(165), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12774] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(259), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12859] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(420), 1,
      sym_name,
    ACTIONS(488), 1,
      anon_sym_DOT,
    ACTIONS(490), 1,
      sym_digit,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(37), 1,
      aux_sym_accum_type_repeat1,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(175), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [12944] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(316), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [13029] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(320), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [13114] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(242), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [13199] = 25,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(338), 1,
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
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(500), 1,
      anon_sym_DOT,
    ACTIONS(502), 1,
      sym_digit,
    STATE(184), 1,
      sym_global_accum_name,
    STATE(185), 1,
      sym_name_dot,
    STATE(207), 1,
      aux_sym_accum_type_repeat1,
    STATE(209), 1,
      sym_set_bag_expr,
    STATE(222), 1,
      sym_expr,
    STATE(611), 1,
      sym_local_accum_name,
    STATE(856), 1,
      sym_aggregator,
    STATE(224), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(233), 2,
      sym_integer,
      sym_real,
    STATE(237), 2,
      sym_numeric,
      sym_string_literal,
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
  [13284] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(193), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [13369] = 6,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(167), 1,
      sym_math_operator,
    ACTIONS(506), 2,
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
  [13416] = 25,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(338), 1,
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
    ACTIONS(438), 1,
      anon_sym_DASH,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      sym_name,
    ACTIONS(500), 1,
      anon_sym_DOT,
    ACTIONS(502), 1,
      sym_digit,
    STATE(184), 1,
      sym_global_accum_name,
    STATE(185), 1,
      sym_name_dot,
    STATE(207), 1,
      aux_sym_accum_type_repeat1,
    STATE(209), 1,
      sym_set_bag_expr,
    STATE(302), 1,
      sym_expr,
    STATE(611), 1,
      sym_local_accum_name,
    STATE(856), 1,
      sym_aggregator,
    STATE(224), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(233), 2,
      sym_integer,
      sym_real,
    STATE(237), 2,
      sym_numeric,
      sym_string_literal,
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
  [13501] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(300), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [13586] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(294), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [13671] = 25,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_COALESCE,
    ACTIONS(334), 1,
      anon_sym_ISEMPTY,
    ACTIONS(338), 1,
      anon_sym_COUNT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      sym_name,
    STATE(21), 1,
      sym_name_dot,
    STATE(25), 1,
      sym_global_accum_name,
    STATE(38), 1,
      sym_set_bag_expr,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(249), 1,
      sym_expr,
    STATE(617), 1,
      sym_local_accum_name,
    STATE(722), 1,
      sym_aggregator,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(64), 2,
      sym_func_call_stmt,
      sym_constant,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [13756] = 5,
    ACTIONS(508), 1,
      anon_sym_DOT,
    STATE(180), 1,
      aux_sym_name_dot_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(155), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(151), 23,
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
  [13800] = 4,
    STATE(188), 1,
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
  [13842] = 15,
    ACTIONS(25), 1,
      anon_sym_sumAccum,
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
    ACTIONS(511), 1,
      sym_name,
    STATE(711), 1,
      sym_accum_type,
    ACTIONS(29), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(35), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(709), 2,
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
  [13906] = 5,
    ACTIONS(513), 1,
      anon_sym_DOT,
    STATE(183), 1,
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
  [13950] = 6,
    ACTIONS(516), 1,
      anon_sym_DOT,
    STATE(215), 1,
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
  [13996] = 6,
    ACTIONS(518), 1,
      anon_sym_DOT,
    STATE(190), 1,
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
  [14042] = 4,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(155), 5,
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
  [14084] = 15,
    ACTIONS(25), 1,
      anon_sym_sumAccum,
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
    ACTIONS(511), 1,
      sym_name,
    STATE(662), 1,
      sym_accum_type,
    ACTIONS(29), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(35), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(709), 2,
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
  [14148] = 4,
    STATE(180), 1,
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
    ACTIONS(157), 24,
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
  [14190] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(306), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(464), 10,
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
    ACTIONS(304), 17,
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
  [14232] = 5,
    ACTIONS(518), 1,
      anon_sym_DOT,
    STATE(183), 1,
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
    ACTIONS(145), 23,
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
  [14276] = 5,
    ACTIONS(518), 1,
      anon_sym_DOT,
    STATE(190), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(143), 5,
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
  [14320] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(174), 1,
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
  [14363] = 4,
    ACTIONS(270), 1,
      anon_sym_SLASH,
    STATE(174), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(268), 27,
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
  [14404] = 3,
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
  [14443] = 3,
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
  [14482] = 3,
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
  [14521] = 3,
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
  [14560] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(155), 5,
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
  [14599] = 14,
    ACTIONS(25), 1,
      anon_sym_sumAccum,
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
    ACTIONS(522), 1,
      sym_name,
    ACTIONS(29), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(35), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    STATE(813), 2,
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
  [14660] = 4,
    ACTIONS(524), 1,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(143), 5,
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
  [14701] = 5,
    ACTIONS(526), 1,
      sym_digit,
    STATE(201), 1,
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
  [14743] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(206), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(204), 23,
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
  [14781] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(206), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_IN,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(204), 23,
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
  [14819] = 6,
    ACTIONS(529), 1,
      anon_sym_DOT,
    ACTIONS(531), 1,
      sym_digit,
    STATE(201), 1,
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
  [14863] = 17,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    ACTIONS(468), 1,
      anon_sym_IN,
    ACTIONS(472), 1,
      anon_sym_NOT,
    ACTIONS(474), 1,
      anon_sym_IS,
    ACTIONS(476), 1,
      anon_sym_BETWEEN,
    ACTIONS(478), 1,
      anon_sym_LIKE,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    ACTIONS(535), 1,
      anon_sym_DASH_GT,
    STATE(148), 1,
      sym_math_operator,
    STATE(166), 1,
      sym_comparison_operator,
    STATE(474), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(464), 2,
      anon_sym_OR,
      anon_sym_AND,
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
  [14929] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(143), 5,
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
  [14967] = 6,
    ACTIONS(531), 1,
      sym_digit,
    ACTIONS(537), 1,
      anon_sym_DOT,
    STATE(201), 1,
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
  [15011] = 17,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    ACTIONS(468), 1,
      anon_sym_IN,
    ACTIONS(472), 1,
      anon_sym_NOT,
    ACTIONS(474), 1,
      anon_sym_IS,
    ACTIONS(476), 1,
      anon_sym_BETWEEN,
    ACTIONS(478), 1,
      anon_sym_LIKE,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    ACTIONS(535), 1,
      anon_sym_DASH_GT,
    STATE(148), 1,
      sym_math_operator,
    STATE(166), 1,
      sym_comparison_operator,
    STATE(474), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(464), 2,
      anon_sym_OR,
      anon_sym_AND,
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
  [15077] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(539), 3,
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
  [15117] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(539), 3,
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
  [15157] = 5,
    ACTIONS(531), 1,
      sym_digit,
    STATE(201), 1,
      aux_sym_accum_type_repeat1,
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
  [15198] = 5,
    ACTIONS(541), 1,
      anon_sym_DOT,
    STATE(212), 1,
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
  [15239] = 5,
    ACTIONS(531), 1,
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
  [15280] = 5,
    ACTIONS(531), 1,
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
  [15321] = 5,
    ACTIONS(516), 1,
      anon_sym_DOT,
    STATE(212), 1,
      aux_sym_func_call_stmt_repeat2,
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
  [15362] = 5,
    ACTIONS(531), 1,
      sym_digit,
    STATE(201), 1,
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
  [15403] = 4,
    STATE(148), 1,
      sym_math_operator,
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
  [15441] = 4,
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
  [15479] = 3,
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
  [15515] = 3,
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
  [15551] = 4,
    ACTIONS(546), 1,
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
  [15589] = 6,
    STATE(148), 1,
      sym_math_operator,
    ACTIONS(480), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(506), 2,
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
  [15631] = 3,
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
  [15666] = 3,
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
  [15701] = 3,
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
  [15736] = 3,
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
  [15771] = 3,
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
  [15806] = 3,
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
  [15841] = 3,
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
  [15876] = 3,
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
  [15911] = 3,
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
  [15946] = 3,
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
  [15981] = 3,
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
  [16016] = 3,
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
  [16051] = 3,
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
  [16086] = 3,
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
  [16121] = 3,
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
  [16156] = 3,
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
  [16191] = 3,
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
  [16226] = 4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(464), 3,
      anon_sym_OR,
      anon_sym_RPAREN,
      anon_sym_AND,
    ACTIONS(306), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(304), 18,
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
  [16263] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(174), 1,
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
  [16297] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(174), 1,
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
  [16331] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(174), 1,
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
    ACTIONS(552), 10,
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
  [16365] = 8,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    ACTIONS(494), 1,
      anon_sym_DOT,
    ACTIONS(554), 1,
      anon_sym_LT,
    STATE(215), 1,
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
  [16404] = 8,
    ACTIONS(492), 1,
      anon_sym_LPAREN,
    ACTIONS(494), 1,
      anon_sym_DOT,
    ACTIONS(554), 1,
      anon_sym_LT,
    STATE(215), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(137), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(556), 3,
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
  [16443] = 9,
    ACTIONS(137), 1,
      anon_sym_SLASH,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_DOT,
    ACTIONS(378), 1,
      anon_sym_LT,
    ACTIONS(558), 1,
      anon_sym_EQ,
    STATE(43), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(556), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(135), 9,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16483] = 3,
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
      anon_sym_COALESCE,
      anon_sym_ISEMPTY,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_COUNT,
      sym_name,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [16511] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(564), 8,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_AT_AT,
      sym_digit,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    ACTIONS(566), 10,
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
  [16539] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(174), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(568), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16570] = 7,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    ACTIONS(575), 1,
      anon_sym_VERTEX,
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
    ACTIONS(572), 10,
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
  [16605] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(174), 1,
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
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16636] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(174), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(580), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16667] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(174), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(582), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16698] = 7,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
    ACTIONS(588), 1,
      anon_sym_VERTEX,
    STATE(283), 1,
      sym_query_param,
    STATE(258), 2,
      sym_query_params,
      aux_sym_parameter_list_repeat1,
    STATE(812), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(586), 10,
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
  [16733] = 8,
    ACTIONS(590), 1,
      anon_sym_GT,
    ACTIONS(595), 1,
      anon_sym_VERTEX,
    ACTIONS(598), 1,
      sym_name,
    STATE(267), 1,
      sym_tuple_field,
    STATE(727), 1,
      sym_base_type,
    STATE(255), 2,
      sym_tuple_fields,
      aux_sym_typedef_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(592), 10,
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
  [16770] = 8,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(601), 1,
      anon_sym_GT,
    ACTIONS(603), 1,
      sym_name,
    STATE(267), 1,
      sym_tuple_field,
    STATE(727), 1,
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
  [16807] = 8,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(603), 1,
      sym_name,
    ACTIONS(605), 1,
      anon_sym_GT,
    STATE(267), 1,
      sym_tuple_field,
    STATE(727), 1,
      sym_base_type,
    STATE(256), 2,
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
  [16844] = 7,
    ACTIONS(588), 1,
      anon_sym_VERTEX,
    ACTIONS(607), 1,
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
    ACTIONS(586), 10,
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
  [16879] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(174), 1,
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
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16910] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(174), 1,
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
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [16941] = 11,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(613), 1,
      anon_sym_DASH,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(747), 1,
      sym_constant,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(615), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [16983] = 11,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(613), 1,
      anon_sym_DASH,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(665), 1,
      sym_constant,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(615), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [17025] = 11,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(613), 1,
      anon_sym_DASH,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(645), 1,
      sym_constant,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(615), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [17067] = 11,
    ACTIONS(617), 1,
      anon_sym_sumAccum,
    ACTIONS(623), 1,
      anon_sym_LISTACCUM,
    ACTIONS(627), 1,
      anon_sym_MAPACCUM,
    ACTIONS(629), 1,
      anon_sym_HEAPACCUM,
    ACTIONS(631), 1,
      anon_sym_GROUPBYACCUM,
    ACTIONS(633), 1,
      anon_sym_ARRAYACCUM,
    STATE(660), 1,
      sym_accum_type,
    ACTIONS(619), 2,
      anon_sym_MAXACCUM,
      anon_sym_MINACCUM,
    ACTIONS(625), 2,
      anon_sym_SETACCUM,
      anon_sym_BAGACCUM,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(621), 5,
      anon_sym_AVGACCUM,
      anon_sym_ORACCUM,
      anon_sym_ANDACCUM,
      anon_sym_BITWISEORACCUM,
      anon_sym_BITWISEANDACCUM,
  [17109] = 11,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      sym_digit,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(613), 1,
      anon_sym_DASH,
    STATE(41), 1,
      aux_sym_accum_type_repeat1,
    STATE(525), 1,
      sym_constant,
    STATE(54), 2,
      sym_integer,
      sym_real,
    STATE(66), 2,
      sym_numeric,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(615), 5,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_gsql_uint_max,
      anon_sym_gsql_int_max,
      anon_sym_gsql_uint_min,
  [17151] = 7,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(637), 1,
      anon_sym_LBRACK,
    ACTIONS(639), 1,
      anon_sym_AS,
    STATE(174), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(635), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_to_csv,
    ACTIONS(470), 8,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [17185] = 5,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    ACTIONS(643), 1,
      anon_sym_GT,
    STATE(268), 1,
      aux_sym_tuple_fields_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(645), 12,
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
  [17214] = 5,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    ACTIONS(647), 1,
      anon_sym_GT,
    STATE(270), 1,
      aux_sym_tuple_fields_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(649), 12,
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
  [17243] = 4,
    ACTIONS(653), 1,
      anon_sym_LT,
    ACTIONS(651), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(655), 12,
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
  [17270] = 5,
    ACTIONS(657), 1,
      anon_sym_COMMA,
    ACTIONS(660), 1,
      anon_sym_GT,
    STATE(270), 1,
      aux_sym_tuple_fields_repeat1,
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
  [17299] = 5,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(664), 1,
      sym_name,
    STATE(669), 2,
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
  [17327] = 3,
    ACTIONS(668), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(666), 13,
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
  [17351] = 3,
    ACTIONS(670), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(672), 12,
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
  [17375] = 4,
    ACTIONS(676), 1,
      anon_sym_COMMA,
    STATE(274), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(674), 12,
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
  [17401] = 8,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    ACTIONS(535), 1,
      anon_sym_DASH_GT,
    STATE(164), 1,
      sym_math_operator,
    STATE(474), 1,
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
  [17435] = 5,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(679), 1,
      sym_name,
    STATE(668), 2,
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
  [17463] = 5,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(681), 1,
      sym_name,
    STATE(666), 2,
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
  [17491] = 6,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(603), 1,
      sym_name,
    STATE(285), 1,
      sym_tuple_field,
    STATE(727), 1,
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
  [17521] = 3,
    ACTIONS(651), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(655), 12,
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
  [17545] = 7,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(683), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      sym_math_operator,
    STATE(459), 1,
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
  [17577] = 8,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    ACTIONS(535), 1,
      anon_sym_DASH_GT,
    STATE(164), 1,
      sym_math_operator,
    STATE(474), 1,
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
  [17611] = 3,
    ACTIONS(685), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(687), 12,
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
  [17635] = 4,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    STATE(289), 1,
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
  [17661] = 4,
    ACTIONS(137), 1,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 3,
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
  [17687] = 3,
    ACTIONS(660), 2,
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
  [17711] = 5,
    ACTIONS(51), 1,
      anon_sym_VERTEX,
    ACTIONS(511), 1,
      sym_name,
    STATE(709), 2,
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
  [17739] = 14,
    ACTIONS(693), 1,
      anon_sym_LPAREN,
    ACTIONS(695), 1,
      anon_sym_LT,
    ACTIONS(699), 1,
      anon_sym_AT_AT,
    ACTIONS(701), 1,
      sym_name,
    STATE(403), 1,
      sym_edge_set_type,
    STATE(412), 1,
      sym_global_accum_name,
    STATE(413), 1,
      sym_atomic_edge_pattern,
    STATE(417), 1,
      sym_atomic_edge_type,
    STATE(515), 1,
      sym_path_edge_pattern,
    STATE(517), 1,
      sym_disj_pattern,
    STATE(593), 1,
      sym_step_edge_types,
    STATE(698), 1,
      sym_step_edge_set,
    ACTIONS(697), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [17785] = 5,
    ACTIONS(588), 1,
      anon_sym_VERTEX,
    STATE(304), 1,
      sym_query_param,
    STATE(812), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(586), 10,
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
  [17813] = 4,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    STATE(274), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(703), 12,
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
  [17839] = 4,
    ACTIONS(588), 1,
      anon_sym_VERTEX,
    STATE(571), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(586), 10,
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
  [17864] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
    ACTIONS(552), 10,
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
  [17887] = 3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 3,
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
  [17910] = 6,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(707), 1,
      anon_sym_SEMI,
    STATE(174), 1,
      sym_math_operator,
    ACTIONS(705), 2,
      anon_sym_COMMA,
      anon_sym_OFFSET,
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
  [17939] = 7,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(709), 1,
      anon_sym_COMMA,
    ACTIONS(711), 1,
      anon_sym_SEMI,
    STATE(174), 1,
      sym_math_operator,
    STATE(509), 1,
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
  [17970] = 4,
    ACTIONS(588), 1,
      anon_sym_VERTEX,
    STATE(613), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(586), 10,
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
  [17995] = 4,
    ACTIONS(588), 1,
      anon_sym_VERTEX,
    STATE(590), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(586), 10,
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
  [18020] = 6,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(715), 1,
      anon_sym_AS,
    STATE(174), 1,
      sym_math_operator,
    ACTIONS(713), 2,
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
  [18049] = 4,
    ACTIONS(588), 1,
      anon_sym_VERTEX,
    STATE(669), 2,
      sym__type,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(586), 10,
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
  [18074] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(717), 13,
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
  [18095] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(174), 1,
      sym_math_operator,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(719), 3,
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
  [18122] = 5,
    STATE(164), 1,
      sym_math_operator,
    ACTIONS(480), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(719), 3,
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
  [18149] = 5,
    STATE(164), 1,
      sym_math_operator,
    ACTIONS(480), 2,
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
    ACTIONS(470), 7,
      anon_sym_PIPE,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
  [18176] = 4,
    STATE(164), 1,
      sym_math_operator,
    ACTIONS(270), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(268), 10,
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
  [18201] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(674), 13,
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
  [18222] = 12,
    ACTIONS(695), 1,
      anon_sym_LT,
    ACTIONS(699), 1,
      anon_sym_AT_AT,
    ACTIONS(701), 1,
      sym_name,
    ACTIONS(721), 1,
      anon_sym_LPAREN,
    STATE(403), 1,
      sym_edge_set_type,
    STATE(412), 1,
      sym_global_accum_name,
    STATE(413), 1,
      sym_atomic_edge_pattern,
    STATE(423), 1,
      sym_atomic_edge_type,
    STATE(517), 1,
      sym_disj_pattern,
    STATE(583), 1,
      sym_path_edge_pattern,
    ACTIONS(697), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18262] = 6,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(723), 1,
      anon_sym_WHEN,
    STATE(174), 1,
      sym_math_operator,
    STATE(449), 1,
      aux_sym_dml_sub_case_stmt_repeat2,
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
  [18290] = 6,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(725), 1,
      anon_sym_WHEN,
    STATE(174), 1,
      sym_math_operator,
    STATE(437), 1,
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
  [18318] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    STATE(174), 1,
      sym_math_operator,
    ACTIONS(727), 2,
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
  [18344] = 12,
    ACTIONS(695), 1,
      anon_sym_LT,
    ACTIONS(699), 1,
      anon_sym_AT_AT,
    ACTIONS(701), 1,
      sym_name,
    ACTIONS(721), 1,
      anon_sym_LPAREN,
    STATE(403), 1,
      sym_edge_set_type,
    STATE(412), 1,
      sym_global_accum_name,
    STATE(413), 1,
      sym_atomic_edge_pattern,
    STATE(423), 1,
      sym_atomic_edge_type,
    STATE(517), 1,
      sym_disj_pattern,
    STATE(630), 1,
      sym_path_edge_pattern,
    ACTIONS(697), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18384] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(175), 12,
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
  [18404] = 4,
    ACTIONS(731), 1,
      anon_sym_VERTEX,
    STATE(282), 1,
      sym_base_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(729), 10,
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
  [18428] = 12,
    ACTIONS(695), 1,
      anon_sym_LT,
    ACTIONS(699), 1,
      anon_sym_AT_AT,
    ACTIONS(701), 1,
      sym_name,
    ACTIONS(721), 1,
      anon_sym_LPAREN,
    STATE(403), 1,
      sym_edge_set_type,
    STATE(412), 1,
      sym_global_accum_name,
    STATE(413), 1,
      sym_atomic_edge_pattern,
    STATE(423), 1,
      sym_atomic_edge_type,
    STATE(515), 1,
      sym_path_edge_pattern,
    STATE(517), 1,
      sym_disj_pattern,
    ACTIONS(697), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18468] = 12,
    ACTIONS(695), 1,
      anon_sym_LT,
    ACTIONS(699), 1,
      anon_sym_AT_AT,
    ACTIONS(701), 1,
      sym_name,
    ACTIONS(721), 1,
      anon_sym_LPAREN,
    STATE(412), 1,
      sym_global_accum_name,
    STATE(413), 1,
      sym_atomic_edge_pattern,
    STATE(420), 1,
      sym_edge_set_type,
    STATE(423), 1,
      sym_atomic_edge_type,
    STATE(517), 1,
      sym_disj_pattern,
    STATE(630), 1,
      sym_path_edge_pattern,
    ACTIONS(697), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18508] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(733), 1,
      anon_sym_SEMI,
    STATE(174), 1,
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
  [18533] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(735), 1,
      anon_sym_AND,
    STATE(174), 1,
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
  [18558] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(737), 1,
      anon_sym_SEMI,
    STATE(174), 1,
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
  [18583] = 11,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(739), 1,
      anon_sym_LPAREN,
    ACTIONS(741), 1,
      anon_sym_GT,
    ACTIONS(745), 1,
      sym_name,
    STATE(330), 1,
      sym_global_accum_name,
    STATE(336), 1,
      sym_vertex_set_type,
    STATE(341), 1,
      sym_step_vertex_types,
    STATE(344), 1,
      sym_atomic_vertex_type,
    STATE(427), 1,
      sym_step_vertex_set,
    ACTIONS(743), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18620] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    STATE(174), 1,
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
  [18645] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(749), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
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
  [18670] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(751), 1,
      anon_sym_RBRACK,
    STATE(174), 1,
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
  [18695] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(753), 1,
      anon_sym_SEMI,
    STATE(174), 1,
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
  [18720] = 5,
    ACTIONS(480), 1,
      anon_sym_SLASH,
    ACTIONS(753), 1,
      anon_sym_SEMI,
    STATE(174), 1,
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
  [18745] = 10,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(739), 1,
      anon_sym_LPAREN,
    ACTIONS(745), 1,
      sym_name,
    STATE(330), 1,
      sym_global_accum_name,
    STATE(336), 1,
      sym_vertex_set_type,
    STATE(341), 1,
      sym_step_vertex_types,
    STATE(344), 1,
      sym_atomic_vertex_type,
    STATE(366), 1,
      sym_step_vertex_set,
    ACTIONS(743), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18779] = 2,
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
  [18797] = 10,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(739), 1,
      anon_sym_LPAREN,
    ACTIONS(745), 1,
      sym_name,
    STATE(330), 1,
      sym_global_accum_name,
    STATE(336), 1,
      sym_vertex_set_type,
    STATE(341), 1,
      sym_step_vertex_types,
    STATE(344), 1,
      sym_atomic_vertex_type,
    STATE(364), 1,
      sym_step_vertex_set,
    ACTIONS(743), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18831] = 10,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(739), 1,
      anon_sym_LPAREN,
    ACTIONS(745), 1,
      sym_name,
    STATE(330), 1,
      sym_global_accum_name,
    STATE(336), 1,
      sym_vertex_set_type,
    STATE(341), 1,
      sym_step_vertex_types,
    STATE(344), 1,
      sym_atomic_vertex_type,
    STATE(422), 1,
      sym_step_vertex_set,
    ACTIONS(743), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18865] = 5,
    ACTIONS(757), 1,
      anon_sym_DOT,
    ACTIONS(759), 1,
      anon_sym_PLUS_EQ,
    STATE(335), 1,
      aux_sym_v_accum_func_call_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(755), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [18889] = 10,
    ACTIONS(761), 1,
      anon_sym_SEMI,
    ACTIONS(763), 1,
      anon_sym_WHERE,
    ACTIONS(765), 1,
      anon_sym_ACCUM,
    ACTIONS(767), 1,
      anon_sym_LIMIT,
    ACTIONS(769), 1,
      anon_sym_post_DASHaccum,
    STATE(345), 1,
      sym_where_clause,
    STATE(394), 1,
      sym_accum_clause,
    STATE(767), 1,
      sym_limit_clause,
    STATE(381), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [18923] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(552), 10,
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
  [18941] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(771), 10,
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
  [18959] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(552), 10,
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
  [18977] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(773), 10,
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
  [18995] = 9,
    ACTIONS(695), 1,
      anon_sym_LT,
    ACTIONS(699), 1,
      anon_sym_AT_AT,
    ACTIONS(701), 1,
      sym_name,
    STATE(403), 1,
      sym_edge_set_type,
    STATE(412), 1,
      sym_global_accum_name,
    STATE(423), 1,
      sym_atomic_edge_type,
    STATE(471), 1,
      sym_atomic_edge_pattern,
    ACTIONS(697), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19026] = 4,
    ACTIONS(777), 1,
      anon_sym_DOT,
    STATE(334), 1,
      aux_sym_v_accum_func_call_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(775), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19047] = 4,
    ACTIONS(757), 1,
      anon_sym_DOT,
    STATE(334), 1,
      aux_sym_v_accum_func_call_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(780), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19068] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(782), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [19084] = 4,
    ACTIONS(784), 1,
      anon_sym_COMMA,
    STATE(337), 1,
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
  [19104] = 4,
    ACTIONS(789), 1,
      anon_sym_COMMA,
    STATE(337), 1,
      aux_sym_dml_sub_stmt_list_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(791), 6,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19124] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(793), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19140] = 4,
    ACTIONS(797), 1,
      anon_sym_DASH,
    STATE(340), 1,
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
  [19160] = 3,
    ACTIONS(802), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(800), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [19178] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(804), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [19194] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(806), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19210] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(808), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [19226] = 8,
    ACTIONS(765), 1,
      anon_sym_ACCUM,
    ACTIONS(767), 1,
      anon_sym_LIMIT,
    ACTIONS(769), 1,
      anon_sym_post_DASHaccum,
    ACTIONS(810), 1,
      anon_sym_SEMI,
    STATE(390), 1,
      sym_accum_clause,
    STATE(745), 1,
      sym_limit_clause,
    STATE(384), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19254] = 4,
    ACTIONS(814), 1,
      anon_sym_DASH,
    STATE(350), 1,
      aux_sym_path_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(812), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19274] = 4,
    ACTIONS(789), 1,
      anon_sym_COMMA,
    STATE(338), 1,
      aux_sym_dml_sub_stmt_list_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(816), 6,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19294] = 4,
    ACTIONS(818), 1,
      anon_sym_DASH,
    STATE(350), 1,
      aux_sym_path_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(812), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19314] = 3,
    ACTIONS(822), 1,
      anon_sym_COLON,
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
  [19332] = 4,
    ACTIONS(818), 1,
      anon_sym_DASH,
    STATE(340), 1,
      aux_sym_path_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(824), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19352] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(826), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_COLON,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [19368] = 2,
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
  [19383] = 2,
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
  [19398] = 2,
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
  [19413] = 2,
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
  [19428] = 7,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(699), 1,
      anon_sym_AT_AT,
    ACTIONS(836), 1,
      anon_sym_LPAREN,
    ACTIONS(838), 1,
      sym_name,
    STATE(749), 1,
      sym_for_each_control,
    STATE(631), 2,
      sym_global_accum_name,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19453] = 2,
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
  [19468] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(701), 1,
      sym_name,
    STATE(403), 1,
      sym_edge_set_type,
    STATE(412), 1,
      sym_global_accum_name,
    STATE(446), 1,
      sym_atomic_edge_type,
    ACTIONS(697), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19493] = 4,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(844), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19512] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(846), 1,
      anon_sym_RBRACE,
    ACTIONS(850), 1,
      sym_name,
    STATE(487), 1,
      sym_seed,
    STATE(614), 1,
      sym_global_accum_name,
    ACTIONS(848), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19537] = 4,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    STATE(359), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(852), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19556] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(854), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [19571] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(856), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19586] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(858), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [19601] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(860), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19616] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(862), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [19631] = 8,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(864), 1,
      anon_sym_LPAREN,
    ACTIONS(866), 1,
      anon_sym_RANGE,
    ACTIONS(868), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(444), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19658] = 7,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(699), 1,
      anon_sym_AT_AT,
    ACTIONS(836), 1,
      anon_sym_LPAREN,
    ACTIONS(838), 1,
      sym_name,
    STATE(718), 1,
      sym_for_each_control,
    STATE(631), 2,
      sym_global_accum_name,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19683] = 5,
    ACTIONS(870), 1,
      ts_builtin_sym_end,
    ACTIONS(872), 1,
      anon_sym_CREATE,
    ACTIONS(875), 1,
      anon_sym_INTERPRET,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    STATE(369), 4,
      sym__definition,
      sym_create_query,
      sym_interpret_query,
      aux_sym_gsql_repeat1,
  [19704] = 8,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(864), 1,
      anon_sym_LPAREN,
    ACTIONS(868), 1,
      sym_name,
    ACTIONS(878), 1,
      anon_sym_DISTINCT,
    STATE(22), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(458), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19731] = 4,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(883), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19750] = 5,
    ACTIONS(7), 1,
      anon_sym_CREATE,
    ACTIONS(9), 1,
      anon_sym_INTERPRET,
    ACTIONS(885), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    STATE(369), 4,
      sym__definition,
      sym_create_query,
      sym_interpret_query,
      aux_sym_gsql_repeat1,
  [19771] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(887), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19786] = 2,
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
  [19801] = 2,
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
  [19816] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(893), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
      anon_sym_DASH,
  [19831] = 8,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(864), 1,
      anon_sym_LPAREN,
    ACTIONS(868), 1,
      sym_name,
    ACTIONS(895), 1,
      anon_sym_DISTINCT,
    STATE(22), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(465), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19858] = 2,
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
  [19873] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(897), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19888] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(899), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19903] = 6,
    ACTIONS(767), 1,
      anon_sym_LIMIT,
    ACTIONS(769), 1,
      anon_sym_post_DASHaccum,
    ACTIONS(810), 1,
      anon_sym_SEMI,
    STATE(745), 1,
      sym_limit_clause,
    STATE(414), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19925] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(864), 1,
      anon_sym_LPAREN,
    ACTIONS(901), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(291), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19949] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(883), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [19963] = 6,
    ACTIONS(767), 1,
      anon_sym_LIMIT,
    ACTIONS(769), 1,
      anon_sym_post_DASHaccum,
    ACTIONS(903), 1,
      anon_sym_SEMI,
    STATE(738), 1,
      sym_limit_clause,
    STATE(414), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [19985] = 7,
    ACTIONS(388), 1,
      anon_sym_AT_AT,
    ACTIONS(905), 1,
      anon_sym_LPAREN,
    ACTIONS(907), 1,
      sym_name,
    STATE(191), 1,
      sym_name_dot,
    STATE(202), 1,
      sym_set_bag_expr,
    STATE(206), 1,
      sym_global_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20009] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(864), 1,
      anon_sym_LPAREN,
    ACTIONS(901), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(444), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20033] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(864), 1,
      anon_sym_LPAREN,
    ACTIONS(901), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(40), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20057] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(864), 1,
      anon_sym_LPAREN,
    ACTIONS(901), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(465), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20081] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(864), 1,
      anon_sym_LPAREN,
    ACTIONS(901), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(433), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20105] = 6,
    ACTIONS(767), 1,
      anon_sym_LIMIT,
    ACTIONS(769), 1,
      anon_sym_post_DASHaccum,
    ACTIONS(903), 1,
      anon_sym_SEMI,
    STATE(738), 1,
      sym_limit_clause,
    STATE(391), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20127] = 6,
    ACTIONS(767), 1,
      anon_sym_LIMIT,
    ACTIONS(769), 1,
      anon_sym_post_DASHaccum,
    ACTIONS(909), 1,
      anon_sym_SEMI,
    STATE(684), 1,
      sym_limit_clause,
    STATE(414), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20149] = 3,
    ACTIONS(911), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(913), 4,
      anon_sym_SEMI,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [20165] = 5,
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
      anon_sym_THEN,
  [20185] = 6,
    ACTIONS(767), 1,
      anon_sym_LIMIT,
    ACTIONS(769), 1,
      anon_sym_post_DASHaccum,
    ACTIONS(810), 1,
      anon_sym_SEMI,
    STATE(745), 1,
      sym_limit_clause,
    STATE(384), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20207] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(864), 1,
      anon_sym_LPAREN,
    ACTIONS(901), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(292), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20231] = 2,
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
  [20245] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(864), 1,
      anon_sym_LPAREN,
    ACTIONS(901), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(458), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20269] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(864), 1,
      anon_sym_LPAREN,
    ACTIONS(901), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(431), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20293] = 6,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(850), 1,
      sym_name,
    STATE(614), 1,
      sym_global_accum_name,
    STATE(626), 1,
      sym_seed,
    ACTIONS(848), 2,
      anon_sym__,
      anon_sym_ANY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20315] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(864), 1,
      anon_sym_LPAREN,
    ACTIONS(901), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(467), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20339] = 7,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(864), 1,
      anon_sym_LPAREN,
    ACTIONS(901), 1,
      sym_name,
    STATE(22), 1,
      sym_name_dot,
    STATE(36), 1,
      sym_global_accum_name,
    STATE(432), 1,
      sym_set_bag_expr,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20363] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(919), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20376] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(921), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20389] = 3,
    ACTIONS(639), 1,
      anon_sym_AS,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(635), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_to_csv,
  [20404] = 6,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(923), 1,
      sym_name,
    STATE(703), 1,
      sym_string_literal,
    STATE(781), 1,
      sym_file_path,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20425] = 6,
    ACTIONS(925), 1,
      anon_sym_COMMA,
    ACTIONS(927), 1,
      anon_sym_SEMI,
    ACTIONS(929), 1,
      anon_sym_WHERE,
    ACTIONS(931), 1,
      anon_sym_to_csv,
    STATE(424), 1,
      aux_sym_print_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20446] = 4,
    ACTIONS(933), 1,
      anon_sym_COMMA,
    STATE(407), 1,
      aux_sym_print_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(936), 3,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_to_csv,
  [20463] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(938), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_to_csv,
      anon_sym_AS,
  [20476] = 6,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(940), 1,
      sym_name,
    STATE(659), 1,
      sym_file_path,
    STATE(703), 1,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20497] = 4,
    ACTIONS(944), 1,
      anon_sym_PIPE,
    STATE(410), 1,
      aux_sym_disj_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(942), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [20514] = 6,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      anon_sym_LT,
    ACTIONS(947), 1,
      anon_sym_EQ,
    ACTIONS(949), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20535] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(951), 5,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20548] = 4,
    ACTIONS(955), 1,
      anon_sym_PIPE,
    STATE(416), 1,
      aux_sym_disj_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(953), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [20565] = 4,
    ACTIONS(959), 1,
      anon_sym_post_DASHaccum,
    ACTIONS(957), 2,
      anon_sym_SEMI,
      anon_sym_LIMIT,
    STATE(414), 2,
      sym_post_accum_clause,
      aux_sym_gsql_select_block_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20582] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(852), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [20595] = 4,
    ACTIONS(955), 1,
      anon_sym_PIPE,
    STATE(410), 1,
      aux_sym_disj_pattern_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(962), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [20612] = 4,
    ACTIONS(966), 1,
      anon_sym_GT,
    ACTIONS(964), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(968), 2,
      anon_sym_DOT,
      anon_sym_PIPE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20629] = 6,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(378), 1,
      anon_sym_LT,
    ACTIONS(970), 1,
      anon_sym_EQ,
    ACTIONS(972), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20650] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(974), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_to_csv,
      anon_sym_AS,
  [20663] = 5,
    ACTIONS(976), 1,
      anon_sym_RPAREN,
    ACTIONS(978), 1,
      anon_sym_PIPE,
    STATE(584), 1,
      aux_sym_step_edge_types_repeat1,
    ACTIONS(921), 2,
      anon_sym_GT,
      anon_sym_DOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20682] = 6,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(980), 1,
      sym_name,
    STATE(703), 1,
      sym_string_literal,
    STATE(706), 1,
      sym_file_path,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20703] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(982), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [20716] = 3,
    ACTIONS(966), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(968), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [20731] = 6,
    ACTIONS(925), 1,
      anon_sym_COMMA,
    ACTIONS(984), 1,
      anon_sym_SEMI,
    ACTIONS(986), 1,
      anon_sym_WHERE,
    ACTIONS(988), 1,
      anon_sym_to_csv,
    STATE(407), 1,
      aux_sym_print_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20752] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(919), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20765] = 6,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      anon_sym_SQUOTE,
    ACTIONS(990), 1,
      sym_name,
    STATE(701), 1,
      sym_file_path,
    STATE(703), 1,
      sym_string_literal,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20786] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(992), 5,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_ACCUM,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [20799] = 4,
    ACTIONS(200), 1,
      sym_digit,
    STATE(35), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(994), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_THEN,
  [20816] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(556), 5,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20829] = 5,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(996), 1,
      sym_name,
    STATE(330), 1,
      sym_global_accum_name,
    STATE(480), 1,
      sym_vertex_set_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20847] = 3,
    ACTIONS(998), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20861] = 3,
    ACTIONS(1000), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20875] = 3,
    ACTIONS(998), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [20889] = 5,
    ACTIONS(1002), 1,
      sym_name,
    ACTIONS(1004), 1,
      sym_digit,
    STATE(537), 1,
      aux_sym_accum_type_repeat1,
    STATE(685), 1,
      sym_simple_size,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20907] = 3,
    ACTIONS(1008), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1006), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [20921] = 4,
    ACTIONS(1012), 1,
      anon_sym_WHEN,
    STATE(436), 1,
      aux_sym_query_body_case_stmt_repeat1,
    ACTIONS(1010), 2,
      anon_sym_ELSE,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20937] = 5,
    ACTIONS(725), 1,
      anon_sym_WHEN,
    ACTIONS(1015), 1,
      anon_sym_ELSE,
    ACTIONS(1017), 1,
      anon_sym_END,
    STATE(438), 1,
      aux_sym_query_body_case_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20955] = 4,
    ACTIONS(1021), 1,
      anon_sym_WHEN,
    STATE(438), 1,
      aux_sym_query_body_case_stmt_repeat2,
    ACTIONS(1019), 2,
      anon_sym_ELSE,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [20971] = 3,
    ACTIONS(1026), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1024), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [20985] = 4,
    ACTIONS(1028), 1,
      anon_sym_COMMA,
    STATE(440), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(719), 2,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21001] = 3,
    ACTIONS(1033), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1031), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [21015] = 4,
    ACTIONS(1035), 1,
      anon_sym_SEMI,
    ACTIONS(1037), 1,
      anon_sym_to_csv,
    ACTIONS(911), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21031] = 4,
    ACTIONS(1039), 1,
      anon_sym_COMMA,
    STATE(443), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(719), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21047] = 3,
    ACTIONS(1042), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21061] = 5,
    ACTIONS(1002), 1,
      sym_name,
    ACTIONS(1004), 1,
      sym_digit,
    STATE(537), 1,
      aux_sym_accum_type_repeat1,
    STATE(791), 1,
      sym_simple_size,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21079] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1044), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [21091] = 4,
    ACTIONS(1048), 1,
      anon_sym_WHEN,
    STATE(447), 1,
      aux_sym_dml_sub_case_stmt_repeat1,
    ACTIONS(1046), 2,
      anon_sym_ELSE,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21107] = 3,
    ACTIONS(1053), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1051), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [21121] = 5,
    ACTIONS(723), 1,
      anon_sym_WHEN,
    ACTIONS(1055), 1,
      anon_sym_ELSE,
    ACTIONS(1057), 1,
      anon_sym_END,
    STATE(466), 1,
      aux_sym_dml_sub_case_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21139] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1059), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_to_csv,
  [21151] = 5,
    ACTIONS(1061), 1,
      anon_sym_ELSE,
    ACTIONS(1063), 1,
      anon_sym_END,
    ACTIONS(1065), 1,
      anon_sym_WHEN,
    STATE(447), 1,
      aux_sym_dml_sub_case_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21169] = 4,
    ACTIONS(1067), 1,
      anon_sym_LIMIT,
    ACTIONS(1069), 1,
      anon_sym_DO,
    ACTIONS(911), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21185] = 4,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(478), 2,
      sym_global_accum_name,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21201] = 3,
    ACTIONS(1071), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1073), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21215] = 3,
    ACTIONS(1077), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1075), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [21229] = 4,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(47), 1,
      anon_sym_AT,
    STATE(521), 2,
      sym_global_accum_name,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21245] = 5,
    ACTIONS(149), 1,
      anon_sym_DOT,
    ACTIONS(1079), 1,
      anon_sym_EQ,
    ACTIONS(1081), 1,
      anon_sym_PLUS_EQ,
    STATE(43), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21263] = 3,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21277] = 4,
    ACTIONS(683), 1,
      anon_sym_COMMA,
    STATE(443), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(1085), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21293] = 3,
    ACTIONS(1087), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(651), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [21307] = 5,
    ACTIONS(1089), 1,
      sym_name,
    STATE(346), 1,
      sym_step_source_set,
    STATE(361), 1,
      sym_path_pattern,
    STATE(415), 1,
      sym_step,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21325] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(936), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_WHERE,
      anon_sym_to_csv,
  [21337] = 4,
    ACTIONS(1091), 1,
      anon_sym_SEMI,
    ACTIONS(1093), 1,
      anon_sym_to_csv,
    ACTIONS(911), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21353] = 5,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(996), 1,
      sym_name,
    STATE(330), 1,
      sym_global_accum_name,
    STATE(629), 1,
      sym_vertex_set_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21371] = 3,
    ACTIONS(1095), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21385] = 4,
    ACTIONS(1099), 1,
      anon_sym_WHEN,
    STATE(466), 1,
      aux_sym_dml_sub_case_stmt_repeat2,
    ACTIONS(1097), 2,
      anon_sym_ELSE,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21401] = 3,
    ACTIONS(1102), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21415] = 5,
    ACTIONS(709), 1,
      anon_sym_COMMA,
    ACTIONS(1104), 1,
      anon_sym_EQ,
    ACTIONS(1106), 1,
      anon_sym_SEMI,
    STATE(489), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21433] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1108), 4,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
      anon_sym_STRING,
  [21445] = 3,
    ACTIONS(1110), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1073), 3,
      anon_sym_UNION,
      anon_sym_INTERSECT,
      anon_sym_MINUS,
  [21459] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(942), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_PIPE,
  [21471] = 3,
    ACTIONS(1114), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1112), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [21485] = 5,
    ACTIONS(45), 1,
      anon_sym_AT_AT,
    ACTIONS(1116), 1,
      sym_name,
    STATE(412), 1,
      sym_global_accum_name,
    STATE(641), 1,
      sym_edge_set_type,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21503] = 4,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    STATE(440), 1,
      aux_sym_arg_list_repeat1,
    ACTIONS(1085), 2,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21519] = 3,
    ACTIONS(1120), 1,
      anon_sym_AT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1118), 3,
      anon_sym_GT,
      anon_sym_AT_AT,
      sym_name,
  [21533] = 5,
    ACTIONS(1122), 1,
      anon_sym_ELSE,
    ACTIONS(1124), 1,
      anon_sym_END,
    ACTIONS(1126), 1,
      anon_sym_WHEN,
    STATE(436), 1,
      aux_sym_query_body_case_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21551] = 4,
    ACTIONS(1128), 1,
      anon_sym_LIMIT,
    ACTIONS(1130), 1,
      anon_sym_DO,
    ACTIONS(911), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21567] = 5,
    ACTIONS(1132), 1,
      anon_sym_COMMA,
    ACTIONS(1134), 1,
      anon_sym_EQ,
    ACTIONS(1136), 1,
      anon_sym_SEMI,
    STATE(592), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21585] = 4,
    ACTIONS(1138), 1,
      anon_sym_COMMA,
    ACTIONS(1141), 1,
      anon_sym_SEMI,
    STATE(479), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21600] = 4,
    ACTIONS(1143), 1,
      anon_sym_RPAREN,
    ACTIONS(1145), 1,
      anon_sym_PIPE,
    STATE(508), 1,
      aux_sym_step_vertex_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21615] = 4,
    ACTIONS(1147), 1,
      anon_sym_DQUOTE,
    ACTIONS(1149), 1,
      aux_sym_string_literal_token1,
    STATE(526), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1151), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21630] = 4,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    ACTIONS(1155), 1,
      anon_sym_GT,
    STATE(548), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21645] = 4,
    ACTIONS(1147), 1,
      anon_sym_SQUOTE,
    ACTIONS(1157), 1,
      aux_sym_string_literal_token2,
    STATE(535), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1151), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21660] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(356), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [21671] = 3,
    ACTIONS(1159), 1,
      anon_sym_THEN,
    ACTIONS(911), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21684] = 4,
    ACTIONS(1161), 1,
      anon_sym_LPAREN,
    ACTIONS(1163), 1,
      sym_name,
    STATE(402), 1,
      sym_simple_set,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21699] = 4,
    ACTIONS(1165), 1,
      anon_sym_COMMA,
    ACTIONS(1167), 1,
      anon_sym_RBRACE,
    STATE(553), 1,
      aux_sym_seed_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21714] = 3,
    ACTIONS(1171), 1,
      anon_sym_DOT_STAR,
    ACTIONS(1169), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21727] = 4,
    ACTIONS(709), 1,
      anon_sym_COMMA,
    ACTIONS(1173), 1,
      anon_sym_SEMI,
    STATE(531), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21742] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1108), 3,
      anon_sym_INT,
      anon_sym_FLOAT,
      anon_sym_DOUBLE,
  [21753] = 4,
    ACTIONS(1175), 1,
      anon_sym_ELSE,
    ACTIONS(1178), 1,
      anon_sym_END,
    STATE(491), 1,
      aux_sym_query_body_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21768] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1180), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [21779] = 4,
    ACTIONS(1182), 1,
      anon_sym_AT,
    ACTIONS(1184), 1,
      sym_name,
    STATE(620), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21794] = 4,
    ACTIONS(200), 1,
      sym_digit,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21809] = 3,
    ACTIONS(1188), 1,
      anon_sym_THEN,
    ACTIONS(911), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21822] = 4,
    ACTIONS(1190), 1,
      anon_sym_ELSE,
    ACTIONS(1192), 1,
      anon_sym_END,
    STATE(575), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21837] = 4,
    ACTIONS(1194), 1,
      anon_sym_RPAREN,
    ACTIONS(1196), 1,
      anon_sym_PIPE,
    STATE(497), 1,
      aux_sym_step_vertex_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21852] = 4,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    ACTIONS(1199), 1,
      anon_sym_GT,
    STATE(548), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21867] = 4,
    ACTIONS(1089), 1,
      sym_name,
    STATE(348), 1,
      sym_step_source_set,
    STATE(383), 1,
      sym_path_pattern,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21882] = 4,
    ACTIONS(1201), 1,
      anon_sym_COMMA,
    ACTIONS(1204), 1,
      anon_sym_RBRACK,
    STATE(500), 1,
      aux_sym_v_expr_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21897] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1206), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [21908] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1208), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [21919] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1210), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [21930] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1212), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [21941] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1214), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [21952] = 4,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    ACTIONS(1219), 1,
      anon_sym_RBRACE,
    STATE(506), 1,
      aux_sym_seed_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21967] = 3,
    ACTIONS(1221), 1,
      anon_sym_RPAREN,
    ACTIONS(911), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21980] = 4,
    ACTIONS(1145), 1,
      anon_sym_PIPE,
    ACTIONS(1223), 1,
      anon_sym_RPAREN,
    STATE(497), 1,
      aux_sym_step_vertex_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [21995] = 4,
    ACTIONS(709), 1,
      anon_sym_COMMA,
    ACTIONS(1225), 1,
      anon_sym_SEMI,
    STATE(531), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22010] = 4,
    ACTIONS(1227), 1,
      anon_sym_RPAREN,
    ACTIONS(1229), 1,
      anon_sym_COMMA,
    STATE(510), 1,
      aux_sym_accum_type_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22025] = 4,
    ACTIONS(1132), 1,
      anon_sym_COMMA,
    ACTIONS(1232), 1,
      anon_sym_SEMI,
    STATE(479), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22040] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1234), 3,
      anon_sym_SEMI,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [22051] = 4,
    ACTIONS(149), 1,
      anon_sym_DOT,
    ACTIONS(1236), 1,
      anon_sym_PLUS_EQ,
    STATE(43), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22066] = 4,
    ACTIONS(1238), 1,
      anon_sym_OR,
    ACTIONS(1240), 1,
      anon_sym_DISTRIBUTED,
    ACTIONS(1242), 1,
      anon_sym_QUERY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22081] = 4,
    ACTIONS(1244), 1,
      anon_sym_RPAREN,
    ACTIONS(1246), 1,
      anon_sym_DOT,
    ACTIONS(1248), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22096] = 4,
    ACTIONS(1250), 1,
      anon_sym_SYNTAX,
    ACTIONS(1252), 1,
      anon_sym_LBRACE,
    STATE(504), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22111] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(953), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [22122] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1254), 3,
      anon_sym_SEMI,
      anon_sym_LIMIT,
      anon_sym_post_DASHaccum,
  [22133] = 3,
    ACTIONS(1256), 1,
      anon_sym_RPAREN,
    ACTIONS(911), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22146] = 4,
    ACTIONS(1182), 1,
      anon_sym_AT,
    ACTIONS(1258), 1,
      sym_name,
    STATE(327), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22161] = 3,
    ACTIONS(1260), 1,
      anon_sym_EQ,
    ACTIONS(1141), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22174] = 4,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    ACTIONS(1264), 1,
      anon_sym_RBRACK,
    STATE(568), 1,
      aux_sym_v_expr_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22189] = 3,
    ACTIONS(1266), 1,
      anon_sym_THEN,
    ACTIONS(911), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22202] = 4,
    ACTIONS(1268), 1,
      anon_sym_AT,
    ACTIONS(1270), 1,
      sym_name,
    STATE(23), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22217] = 4,
    ACTIONS(1132), 1,
      anon_sym_COMMA,
    ACTIONS(1272), 1,
      anon_sym_SEMI,
    STATE(511), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22232] = 4,
    ACTIONS(1274), 1,
      anon_sym_DQUOTE,
    ACTIONS(1276), 1,
      aux_sym_string_literal_token1,
    STATE(572), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1151), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22247] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1278), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [22258] = 3,
    ACTIONS(1280), 1,
      anon_sym_THEN,
    ACTIONS(911), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22271] = 3,
    ACTIONS(1284), 1,
      anon_sym_EQ,
    ACTIONS(1282), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22284] = 3,
    ACTIONS(1286), 1,
      anon_sym_THEN,
    ACTIONS(911), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22297] = 4,
    ACTIONS(1282), 1,
      anon_sym_SEMI,
    ACTIONS(1288), 1,
      anon_sym_COMMA,
    STATE(531), 1,
      aux_sym_base_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22312] = 4,
    ACTIONS(1291), 1,
      anon_sym_LPAREN,
    ACTIONS(1293), 1,
      anon_sym_EQ,
    ACTIONS(1295), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22327] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1297), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [22338] = 4,
    ACTIONS(1299), 1,
      anon_sym_RPAREN,
    ACTIONS(1301), 1,
      anon_sym_COMMA,
    STATE(581), 1,
      aux_sym_for_each_control_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22353] = 4,
    ACTIONS(1274), 1,
      anon_sym_SQUOTE,
    ACTIONS(1303), 1,
      aux_sym_string_literal_token2,
    STATE(570), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1151), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22368] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1305), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [22379] = 4,
    ACTIONS(200), 1,
      sym_digit,
    ACTIONS(1307), 1,
      anon_sym_DO,
    STATE(35), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22394] = 4,
    ACTIONS(1309), 1,
      anon_sym_RPAREN,
    ACTIONS(1311), 1,
      anon_sym_COMMA,
    STATE(510), 1,
      aux_sym_accum_type_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22409] = 4,
    ACTIONS(1313), 1,
      anon_sym_AT,
    ACTIONS(1315), 1,
      sym_name,
    STATE(181), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22424] = 3,
    ACTIONS(1317), 1,
      anon_sym_RPAREN,
    ACTIONS(911), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22437] = 3,
    ACTIONS(1319), 1,
      anon_sym_THEN,
    ACTIONS(911), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22450] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1321), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [22461] = 4,
    ACTIONS(1323), 1,
      anon_sym_ELSE,
    ACTIONS(1326), 1,
      anon_sym_END,
    STATE(543), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22476] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1328), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [22487] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1330), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [22498] = 3,
    ACTIONS(1332), 1,
      anon_sym_THEN,
    ACTIONS(911), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22511] = 4,
    ACTIONS(1252), 1,
      anon_sym_LBRACE,
    ACTIONS(1334), 1,
      anon_sym_SYNTAX,
    STATE(503), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22526] = 4,
    ACTIONS(1336), 1,
      anon_sym_COMMA,
    ACTIONS(1339), 1,
      anon_sym_GT,
    STATE(548), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22541] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1341), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [22552] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1343), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [22563] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1345), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [22574] = 4,
    ACTIONS(1161), 1,
      anon_sym_LPAREN,
    ACTIONS(1163), 1,
      sym_name,
    STATE(470), 1,
      sym_simple_set,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22589] = 4,
    ACTIONS(1165), 1,
      anon_sym_COMMA,
    ACTIONS(1347), 1,
      anon_sym_RBRACE,
    STATE(506), 1,
      aux_sym_seed_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22604] = 4,
    ACTIONS(1349), 1,
      anon_sym_RPAREN,
    ACTIONS(1351), 1,
      anon_sym_PIPE,
    STATE(554), 1,
      aux_sym_step_edge_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22619] = 4,
    ACTIONS(1354), 1,
      anon_sym_COMMA,
    ACTIONS(1356), 1,
      anon_sym_GT,
    STATE(557), 1,
      aux_sym_accum_type_repeat4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22634] = 4,
    ACTIONS(1354), 1,
      anon_sym_COMMA,
    ACTIONS(1358), 1,
      anon_sym_GT,
    STATE(587), 1,
      aux_sym_accum_type_repeat4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22649] = 4,
    ACTIONS(1360), 1,
      anon_sym_COMMA,
    ACTIONS(1363), 1,
      anon_sym_GT,
    STATE(557), 1,
      aux_sym_accum_type_repeat4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22664] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(670), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [22675] = 4,
    ACTIONS(212), 1,
      anon_sym_DOT,
    ACTIONS(1365), 1,
      sym_digit,
    STATE(393), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22690] = 4,
    ACTIONS(1311), 1,
      anon_sym_COMMA,
    ACTIONS(1356), 1,
      anon_sym_RPAREN,
    STATE(538), 1,
      aux_sym_accum_type_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22705] = 3,
    ACTIONS(1367), 1,
      anon_sym_THEN,
    ACTIONS(911), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22718] = 4,
    ACTIONS(1369), 1,
      anon_sym_ELSE,
    ACTIONS(1371), 1,
      anon_sym_END,
    STATE(564), 1,
      aux_sym_query_body_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22733] = 4,
    ACTIONS(1369), 1,
      anon_sym_ELSE,
    ACTIONS(1371), 1,
      anon_sym_END,
    STATE(564), 1,
      aux_sym_query_body_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22748] = 4,
    ACTIONS(1373), 1,
      anon_sym_ELSE,
    ACTIONS(1375), 1,
      anon_sym_END,
    STATE(491), 1,
      aux_sym_query_body_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22763] = 4,
    ACTIONS(1252), 1,
      anon_sym_LBRACE,
    ACTIONS(1377), 1,
      anon_sym_SYNTAX,
    STATE(545), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22778] = 4,
    ACTIONS(1252), 1,
      anon_sym_LBRACE,
    ACTIONS(1379), 1,
      anon_sym_SYNTAX,
    STATE(549), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22793] = 4,
    ACTIONS(1252), 1,
      anon_sym_LBRACE,
    ACTIONS(1381), 1,
      anon_sym_SYNTAX,
    STATE(551), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22808] = 4,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    ACTIONS(1383), 1,
      anon_sym_RBRACK,
    STATE(500), 1,
      aux_sym_v_expr_set_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22823] = 4,
    ACTIONS(1385), 1,
      anon_sym_DQUOTE,
    ACTIONS(1387), 1,
      aux_sym_string_literal_token1,
    STATE(578), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1151), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22838] = 4,
    ACTIONS(1389), 1,
      anon_sym_SQUOTE,
    ACTIONS(1391), 1,
      aux_sym_string_literal_token2,
    STATE(570), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1151), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22853] = 4,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    ACTIONS(1394), 1,
      anon_sym_GT,
    STATE(482), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22868] = 4,
    ACTIONS(1396), 1,
      anon_sym_DQUOTE,
    ACTIONS(1398), 1,
      aux_sym_string_literal_token1,
    STATE(572), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1151), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22883] = 4,
    ACTIONS(1385), 1,
      anon_sym_SQUOTE,
    ACTIONS(1401), 1,
      aux_sym_string_literal_token2,
    STATE(579), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1151), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22898] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1403), 3,
      anon_sym_ELSE,
      anon_sym_END,
      anon_sym_WHEN,
  [22909] = 4,
    ACTIONS(1405), 1,
      anon_sym_ELSE,
    ACTIONS(1407), 1,
      anon_sym_END,
    STATE(543), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22924] = 4,
    ACTIONS(1190), 1,
      anon_sym_ELSE,
    ACTIONS(1192), 1,
      anon_sym_END,
    STATE(575), 1,
      aux_sym_dml_sub_if_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22939] = 4,
    ACTIONS(1313), 1,
      anon_sym_AT,
    ACTIONS(1409), 1,
      sym_name,
    STATE(181), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22954] = 4,
    ACTIONS(1276), 1,
      aux_sym_string_literal_token1,
    ACTIONS(1411), 1,
      anon_sym_DQUOTE,
    STATE(572), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(1151), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22969] = 4,
    ACTIONS(1303), 1,
      aux_sym_string_literal_token2,
    ACTIONS(1411), 1,
      anon_sym_SQUOTE,
    STATE(570), 1,
      aux_sym_string_literal_repeat2,
    ACTIONS(1151), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22984] = 4,
    ACTIONS(1268), 1,
      anon_sym_AT,
    ACTIONS(1413), 1,
      sym_name,
    STATE(23), 1,
      sym_local_accum_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [22999] = 4,
    ACTIONS(1415), 1,
      anon_sym_RPAREN,
    ACTIONS(1417), 1,
      anon_sym_COMMA,
    STATE(581), 1,
      aux_sym_for_each_control_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23014] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(651), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_name,
  [23025] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1420), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [23036] = 4,
    ACTIONS(978), 1,
      anon_sym_PIPE,
    ACTIONS(1422), 1,
      anon_sym_RPAREN,
    STATE(554), 1,
      aux_sym_step_edge_types_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23051] = 3,
    ACTIONS(1424), 1,
      anon_sym_RPAREN,
    ACTIONS(911), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23064] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1420), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COLON,
  [23075] = 4,
    ACTIONS(1354), 1,
      anon_sym_COMMA,
    ACTIONS(1426), 1,
      anon_sym_GT,
    STATE(557), 1,
      aux_sym_accum_type_repeat4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23090] = 3,
    ACTIONS(1428), 1,
      anon_sym_RPAREN,
    ACTIONS(911), 2,
      anon_sym_OR,
      anon_sym_AND,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23103] = 4,
    ACTIONS(1354), 1,
      anon_sym_COMMA,
    ACTIONS(1426), 1,
      anon_sym_GT,
    STATE(555), 1,
      aux_sym_accum_type_repeat4,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23118] = 4,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    ACTIONS(1430), 1,
      anon_sym_GT,
    STATE(498), 1,
      aux_sym_func_call_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23133] = 2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(1432), 3,
      ts_builtin_sym_end,
      anon_sym_CREATE,
      anon_sym_INTERPRET,
  [23144] = 4,
    ACTIONS(1132), 1,
      anon_sym_COMMA,
    ACTIONS(1434), 1,
      anon_sym_SEMI,
    STATE(479), 1,
      aux_sym_accum_decl_stmt_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23159] = 3,
    ACTIONS(1436), 1,
      anon_sym_RPAREN,
    ACTIONS(1438), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23171] = 2,
    ACTIONS(1440), 2,
      anon_sym_ASC,
      anon_sym_DESC,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23181] = 3,
    ACTIONS(1442), 1,
      anon_sym_DISTRIBUTED,
    ACTIONS(1444), 1,
      anon_sym_QUERY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23193] = 3,
    ACTIONS(1446), 1,
      anon_sym_LPAREN,
    STATE(833), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23205] = 3,
    ACTIONS(1446), 1,
      anon_sym_LPAREN,
    STATE(830), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23217] = 3,
    ACTIONS(1446), 1,
      anon_sym_LPAREN,
    STATE(823), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23229] = 2,
    ACTIONS(1448), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23239] = 3,
    ACTIONS(1252), 1,
      anon_sym_LBRACE,
    STATE(533), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23251] = 3,
    ACTIONS(1446), 1,
      anon_sym_LPAREN,
    STATE(805), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23263] = 2,
    ACTIONS(1450), 2,
      anon_sym_ASC,
      anon_sym_DESC,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23273] = 3,
    ACTIONS(1452), 1,
      anon_sym_IN,
    ACTIONS(1454), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23285] = 3,
    ACTIONS(1456), 1,
      sym_digit,
    STATE(494), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23297] = 3,
    ACTIONS(1446), 1,
      anon_sym_LPAREN,
    STATE(786), 1,
      sym_parameter_list,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23309] = 2,
    ACTIONS(1458), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23319] = 3,
    ACTIONS(1460), 1,
      sym_digit,
    STATE(42), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23331] = 3,
    ACTIONS(1462), 1,
      anon_sym_COMMA,
    STATE(637), 1,
      aux_sym_accum_type_repeat3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23343] = 3,
    ACTIONS(1464), 1,
      anon_sym_RPAREN,
    ACTIONS(1466), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23355] = 3,
    ACTIONS(1468), 1,
      sym_digit,
    STATE(216), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23367] = 3,
    ACTIONS(516), 1,
      anon_sym_DOT,
    STATE(215), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23379] = 2,
    ACTIONS(1470), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23389] = 2,
    ACTIONS(1339), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23399] = 2,
    ACTIONS(1169), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23409] = 3,
    ACTIONS(1252), 1,
      anon_sym_LBRACE,
    STATE(536), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23421] = 3,
    ACTIONS(1472), 1,
      anon_sym_FROM,
    STATE(328), 1,
      sym_from_clause,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23433] = 3,
    ACTIONS(149), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_func_call_stmt_repeat2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23445] = 3,
    ACTIONS(1474), 1,
      sym_digit,
    STATE(214), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23457] = 3,
    ACTIONS(1252), 1,
      anon_sym_LBRACE,
    STATE(502), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23469] = 2,
    ACTIONS(1476), 2,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23479] = 3,
    ACTIONS(1252), 1,
      anon_sym_LBRACE,
    STATE(505), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23491] = 3,
    ACTIONS(1291), 1,
      anon_sym_LPAREN,
    ACTIONS(1293), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23503] = 3,
    ACTIONS(1478), 1,
      sym_digit,
    STATE(211), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23515] = 3,
    ACTIONS(1480), 1,
      sym_digit,
    STATE(47), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23527] = 3,
    ACTIONS(1482), 1,
      sym_digit,
    STATE(213), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23539] = 2,
    ACTIONS(1219), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23549] = 3,
    ACTIONS(1484), 1,
      sym_digit,
    STATE(428), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23561] = 2,
    ACTIONS(1486), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23571] = 2,
    ACTIONS(1194), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23581] = 3,
    ACTIONS(1246), 1,
      anon_sym_DOT,
    ACTIONS(1488), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23593] = 3,
    ACTIONS(1490), 1,
      anon_sym_IN,
    ACTIONS(1492), 1,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23605] = 2,
    ACTIONS(1204), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23615] = 3,
    ACTIONS(1494), 1,
      anon_sym_RPAREN,
    ACTIONS(1496), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23627] = 2,
    ACTIONS(1498), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23637] = 3,
    ACTIONS(1500), 1,
      anon_sym_DOT,
    ACTIONS(1502), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23649] = 3,
    ACTIONS(1252), 1,
      anon_sym_LBRACE,
    STATE(527), 1,
      sym_query_body,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23661] = 3,
    ACTIONS(1504), 1,
      anon_sym_COMMA,
    STATE(637), 1,
      aux_sym_accum_type_repeat3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23673] = 3,
    ACTIONS(1507), 1,
      sym_digit,
    STATE(44), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23685] = 3,
    ACTIONS(1509), 1,
      sym_digit,
    STATE(46), 1,
      aux_sym_accum_type_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23697] = 3,
    ACTIONS(1221), 1,
      anon_sym_NULL,
    ACTIONS(1511), 1,
      anon_sym_NOT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23709] = 2,
    ACTIONS(1349), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23719] = 2,
    ACTIONS(1513), 2,
      anon_sym_RPAREN,
      anon_sym_COLON,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23729] = 3,
    ACTIONS(1515), 1,
      anon_sym_IN,
    ACTIONS(1517), 1,
      anon_sym_LIKE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23741] = 3,
    ACTIONS(1519), 1,
      anon_sym_COMMA,
    STATE(608), 1,
      aux_sym_accum_type_repeat3,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23753] = 2,
    ACTIONS(1521), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23763] = 2,
    ACTIONS(1523), 2,
      anon_sym_ELSE,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23773] = 2,
    ACTIONS(1525), 2,
      anon_sym_ELSE,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23783] = 2,
    ACTIONS(1527), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23793] = 3,
    ACTIONS(1301), 1,
      anon_sym_COMMA,
    STATE(534), 1,
      aux_sym_for_each_control_repeat1,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23805] = 2,
    ACTIONS(1529), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23814] = 2,
    ACTIONS(1531), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23823] = 2,
    ACTIONS(1533), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23832] = 2,
    ACTIONS(1535), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23841] = 2,
    ACTIONS(1537), 1,
      anon_sym_DASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23850] = 2,
    ACTIONS(1539), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23859] = 2,
    ACTIONS(1541), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23868] = 2,
    ACTIONS(1543), 1,
      anon_sym_NULL,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23877] = 2,
    ACTIONS(1545), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23886] = 2,
    ACTIONS(1547), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23895] = 2,
    ACTIONS(1549), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23904] = 2,
    ACTIONS(1547), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23913] = 2,
    ACTIONS(1551), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23922] = 2,
    ACTIONS(1553), 1,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23931] = 2,
    ACTIONS(1555), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23940] = 2,
    ACTIONS(1557), 1,
      anon_sym_THEN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23949] = 2,
    ACTIONS(1559), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23958] = 2,
    ACTIONS(1561), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23967] = 2,
    ACTIONS(1563), 1,
      anon_sym_COMMA,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23976] = 2,
    ACTIONS(1565), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23985] = 2,
    ACTIONS(1567), 1,
      anon_sym_DASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [23994] = 2,
    ACTIONS(1569), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24003] = 2,
    ACTIONS(1571), 1,
      anon_sym_IF,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24012] = 2,
    ACTIONS(1573), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24021] = 2,
    ACTIONS(1575), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24030] = 2,
    ACTIONS(1577), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24039] = 2,
    ACTIONS(1579), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24048] = 2,
    ACTIONS(1581), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24057] = 2,
    ACTIONS(1583), 1,
      anon_sym_FILTER,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24066] = 2,
    ACTIONS(1585), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24075] = 2,
    ACTIONS(1587), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24084] = 2,
    ACTIONS(1307), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24093] = 2,
    ACTIONS(1589), 1,
      anon_sym_STEP,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24102] = 2,
    ACTIONS(1591), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24111] = 2,
    ACTIONS(1593), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24120] = 2,
    ACTIONS(1595), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24129] = 2,
    ACTIONS(1597), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24138] = 2,
    ACTIONS(1599), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24147] = 2,
    ACTIONS(1601), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24156] = 2,
    ACTIONS(1603), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24165] = 2,
    ACTIONS(1605), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24174] = 2,
    ACTIONS(1607), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24183] = 2,
    ACTIONS(1609), 1,
      anon_sym_IF,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24192] = 2,
    ACTIONS(1611), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24201] = 2,
    ACTIONS(1613), 1,
      anon_sym_MIN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24210] = 2,
    ACTIONS(1615), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24219] = 2,
    ACTIONS(1617), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24228] = 2,
    ACTIONS(1494), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24237] = 2,
    ACTIONS(1619), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24246] = 2,
    ACTIONS(424), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24255] = 2,
    ACTIONS(1091), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24264] = 2,
    ACTIONS(1091), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24273] = 2,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24282] = 2,
    ACTIONS(1621), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24291] = 2,
    ACTIONS(1623), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24300] = 2,
    ACTIONS(1625), 1,
      anon_sym_v2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24309] = 2,
    ACTIONS(1627), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24318] = 2,
    ACTIONS(1627), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24327] = 2,
    ACTIONS(1629), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24336] = 2,
    ACTIONS(1631), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24345] = 2,
    ACTIONS(1633), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24354] = 2,
    ACTIONS(1635), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24363] = 2,
    ACTIONS(1637), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24372] = 2,
    ACTIONS(1639), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24381] = 2,
    ACTIONS(1641), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24390] = 2,
    ACTIONS(1108), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24399] = 2,
    ACTIONS(1643), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24408] = 2,
    ACTIONS(1645), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24417] = 2,
    ACTIONS(1647), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24426] = 2,
    ACTIONS(1649), 1,
      anon_sym_v2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24435] = 2,
    ACTIONS(1651), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24444] = 2,
    ACTIONS(1653), 1,
      anon_sym_FROM,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24453] = 2,
    ACTIONS(1655), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24462] = 2,
    ACTIONS(1657), 1,
      anon_sym_SELECT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24471] = 2,
    ACTIONS(1659), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24480] = 2,
    ACTIONS(1661), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24489] = 2,
    ACTIONS(1663), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24498] = 2,
    ACTIONS(1665), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24507] = 2,
    ACTIONS(1667), 1,
      anon_sym_MAX,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24516] = 2,
    ACTIONS(1669), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24525] = 2,
    ACTIONS(1671), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24534] = 2,
    ACTIONS(1071), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24543] = 2,
    ACTIONS(1673), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24552] = 2,
    ACTIONS(1675), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24561] = 2,
    ACTIONS(1677), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24570] = 2,
    ACTIONS(1679), 1,
      anon_sym_DASH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24579] = 2,
    ACTIONS(1681), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24588] = 2,
    ACTIONS(1683), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24597] = 2,
    ACTIONS(909), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24606] = 2,
    ACTIONS(1685), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24615] = 2,
    ACTIONS(1687), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24624] = 2,
    ACTIONS(1689), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24633] = 2,
    ACTIONS(1691), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24642] = 2,
    ACTIONS(1693), 1,
      anon_sym_AVG,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24651] = 2,
    ACTIONS(1695), 1,
      anon_sym_EQ,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24660] = 2,
    ACTIONS(903), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24669] = 2,
    ACTIONS(1697), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24678] = 2,
    ACTIONS(1699), 1,
      anon_sym_THEN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24687] = 2,
    ACTIONS(1701), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24696] = 2,
    ACTIONS(1703), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24705] = 2,
    ACTIONS(1705), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24714] = 2,
    ACTIONS(1707), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24723] = 2,
    ACTIONS(1709), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24732] = 2,
    ACTIONS(1711), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24741] = 2,
    ACTIONS(1713), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24750] = 2,
    ACTIONS(1715), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24759] = 2,
    ACTIONS(1717), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24768] = 2,
    ACTIONS(1464), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24777] = 2,
    ACTIONS(1719), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24786] = 2,
    ACTIONS(1721), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24795] = 2,
    ACTIONS(1723), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24804] = 2,
    ACTIONS(1725), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24813] = 2,
    ACTIONS(1727), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24822] = 2,
    ACTIONS(1729), 1,
      anon_sym_LT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24831] = 2,
    ACTIONS(1731), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24840] = 2,
    ACTIONS(1733), 1,
      anon_sym_TUPLE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24849] = 2,
    ACTIONS(1000), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24858] = 2,
    ACTIONS(810), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24867] = 2,
    ACTIONS(1735), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24876] = 2,
    ACTIONS(1737), 1,
      anon_sym_v2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24885] = 2,
    ACTIONS(1739), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24894] = 2,
    ACTIONS(1741), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24903] = 2,
    ACTIONS(1743), 1,
      anon_sym_SUM,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24912] = 2,
    ACTIONS(1745), 1,
      anon_sym_v2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24921] = 2,
    ACTIONS(1747), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24930] = 2,
    ACTIONS(1749), 1,
      anon_sym_v2,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24939] = 2,
    ACTIONS(1095), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24948] = 2,
    ACTIONS(1751), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24957] = 2,
    ACTIONS(1753), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24966] = 2,
    ACTIONS(1755), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24975] = 2,
    ACTIONS(1757), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24984] = 2,
    ACTIONS(1035), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [24993] = 2,
    ACTIONS(1759), 1,
      sym_digit,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25002] = 2,
    ACTIONS(1761), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25011] = 2,
    ACTIONS(1763), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25020] = 2,
    ACTIONS(1765), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25029] = 2,
    ACTIONS(1767), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25038] = 2,
    ACTIONS(1769), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25047] = 2,
    ACTIONS(1771), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25056] = 2,
    ACTIONS(1773), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25065] = 2,
    ACTIONS(1775), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25074] = 2,
    ACTIONS(1777), 1,
      anon_sym_DO,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25083] = 2,
    ACTIONS(1779), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25092] = 2,
    ACTIONS(1781), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25101] = 2,
    ACTIONS(1035), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25110] = 2,
    ACTIONS(1783), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25119] = 2,
    ACTIONS(1785), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25128] = 2,
    ACTIONS(1787), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25137] = 2,
    ACTIONS(1789), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25146] = 2,
    ACTIONS(454), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25155] = 2,
    ACTIONS(1791), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25164] = 2,
    ACTIONS(1793), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25173] = 2,
    ACTIONS(1795), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25182] = 2,
    ACTIONS(1797), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25191] = 2,
    ACTIONS(1799), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25200] = 2,
    ACTIONS(1801), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25209] = 2,
    ACTIONS(1803), 1,
      anon_sym_END,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25218] = 2,
    ACTIONS(1805), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25227] = 2,
    ACTIONS(1807), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25236] = 2,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25245] = 2,
    ACTIONS(1809), 1,
      anon_sym_GRAPH,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25254] = 2,
    ACTIONS(1811), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25263] = 2,
    ACTIONS(1813), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25272] = 2,
    ACTIONS(1815), 1,
      anon_sym_GT,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25281] = 2,
    ACTIONS(1102), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25290] = 2,
    ACTIONS(1817), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25299] = 2,
    ACTIONS(1819), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25308] = 2,
    ACTIONS(1821), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25317] = 2,
    ACTIONS(1291), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25326] = 2,
    ACTIONS(1823), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25335] = 2,
    ACTIONS(1825), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25344] = 2,
    ACTIONS(1827), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25353] = 2,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25362] = 2,
    ACTIONS(1829), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25371] = 2,
    ACTIONS(1831), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25380] = 2,
    ACTIONS(1833), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25389] = 2,
    ACTIONS(1835), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25398] = 2,
    ACTIONS(1837), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25407] = 2,
    ACTIONS(1839), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25416] = 2,
    ACTIONS(1841), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25425] = 2,
    ACTIONS(1843), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25434] = 2,
    ACTIONS(1845), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25443] = 2,
    ACTIONS(1847), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25452] = 2,
    ACTIONS(1849), 1,
      anon_sym_FOR,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25461] = 2,
    ACTIONS(1851), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25470] = 2,
    ACTIONS(1853), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25479] = 2,
    ACTIONS(1855), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25488] = 2,
    ACTIONS(1857), 1,
      anon_sym_QUERY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25497] = 2,
    ACTIONS(1859), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25506] = 2,
    ACTIONS(1861), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25515] = 2,
    ACTIONS(1863), 1,
      anon_sym_FILTER,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25524] = 2,
    ACTIONS(1865), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25533] = 2,
    ACTIONS(1867), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25542] = 2,
    ACTIONS(1869), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25551] = 2,
    ACTIONS(1871), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25560] = 2,
    ACTIONS(1873), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25569] = 2,
    ACTIONS(1875), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25578] = 2,
    ACTIONS(1877), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25587] = 2,
    ACTIONS(1879), 1,
      anon_sym_QUERY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25596] = 2,
    ACTIONS(1881), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25605] = 2,
    ACTIONS(1883), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25614] = 2,
    ACTIONS(1885), 1,
      anon_sym_REPLACE,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25623] = 2,
    ACTIONS(1887), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25632] = 2,
    ACTIONS(1889), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25641] = 2,
    ACTIONS(1891), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25650] = 2,
    ACTIONS(1893), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25659] = 2,
    ACTIONS(1895), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25668] = 2,
    ACTIONS(1897), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25677] = 2,
    ACTIONS(1899), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25686] = 2,
    ACTIONS(1901), 1,
      anon_sym_SEMI,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25695] = 2,
    ACTIONS(1903), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25704] = 2,
    ACTIONS(1905), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25713] = 2,
    ACTIONS(1907), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25722] = 2,
    ACTIONS(1909), 1,
      sym_name,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25731] = 2,
    ACTIONS(1911), 1,
      anon_sym_QUERY,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25740] = 2,
    ACTIONS(1913), 1,
      anon_sym_FILTER,
    ACTIONS(3), 3,
      sym_newline,
      sym_line_comment,
      sym_block_comment,
  [25749] = 2,
    ACTIONS(1915), 1,
      anon_sym_FILTER,
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
  [SMALL_STATE(22)] = 2035,
  [SMALL_STATE(23)] = 2093,
  [SMALL_STATE(24)] = 2149,
  [SMALL_STATE(25)] = 2207,
  [SMALL_STATE(26)] = 2267,
  [SMALL_STATE(27)] = 2323,
  [SMALL_STATE(28)] = 2379,
  [SMALL_STATE(29)] = 2437,
  [SMALL_STATE(30)] = 2495,
  [SMALL_STATE(31)] = 2548,
  [SMALL_STATE(32)] = 2601,
  [SMALL_STATE(33)] = 2654,
  [SMALL_STATE(34)] = 2707,
  [SMALL_STATE(35)] = 2762,
  [SMALL_STATE(36)] = 2818,
  [SMALL_STATE(37)] = 2870,
  [SMALL_STATE(38)] = 2928,
  [SMALL_STATE(39)] = 2982,
  [SMALL_STATE(40)] = 3034,
  [SMALL_STATE(41)] = 3086,
  [SMALL_STATE(42)] = 3144,
  [SMALL_STATE(43)] = 3199,
  [SMALL_STATE(44)] = 3254,
  [SMALL_STATE(45)] = 3309,
  [SMALL_STATE(46)] = 3364,
  [SMALL_STATE(47)] = 3419,
  [SMALL_STATE(48)] = 3474,
  [SMALL_STATE(49)] = 3526,
  [SMALL_STATE(50)] = 3576,
  [SMALL_STATE(51)] = 3626,
  [SMALL_STATE(52)] = 3678,
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
  [SMALL_STATE(71)] = 4667,
  [SMALL_STATE(72)] = 4715,
  [SMALL_STATE(73)] = 4763,
  [SMALL_STATE(74)] = 4810,
  [SMALL_STATE(75)] = 4884,
  [SMALL_STATE(76)] = 4958,
  [SMALL_STATE(77)] = 5032,
  [SMALL_STATE(78)] = 5086,
  [SMALL_STATE(79)] = 5160,
  [SMALL_STATE(80)] = 5234,
  [SMALL_STATE(81)] = 5308,
  [SMALL_STATE(82)] = 5382,
  [SMALL_STATE(83)] = 5456,
  [SMALL_STATE(84)] = 5530,
  [SMALL_STATE(85)] = 5604,
  [SMALL_STATE(86)] = 5678,
  [SMALL_STATE(87)] = 5752,
  [SMALL_STATE(88)] = 5826,
  [SMALL_STATE(89)] = 5900,
  [SMALL_STATE(90)] = 5955,
  [SMALL_STATE(91)] = 6026,
  [SMALL_STATE(92)] = 6122,
  [SMALL_STATE(93)] = 6218,
  [SMALL_STATE(94)] = 6309,
  [SMALL_STATE(95)] = 6402,
  [SMALL_STATE(96)] = 6495,
  [SMALL_STATE(97)] = 6586,
  [SMALL_STATE(98)] = 6679,
  [SMALL_STATE(99)] = 6770,
  [SMALL_STATE(100)] = 6863,
  [SMALL_STATE(101)] = 6954,
  [SMALL_STATE(102)] = 7045,
  [SMALL_STATE(103)] = 7136,
  [SMALL_STATE(104)] = 7227,
  [SMALL_STATE(105)] = 7318,
  [SMALL_STATE(106)] = 7409,
  [SMALL_STATE(107)] = 7500,
  [SMALL_STATE(108)] = 7593,
  [SMALL_STATE(109)] = 7684,
  [SMALL_STATE(110)] = 7777,
  [SMALL_STATE(111)] = 7870,
  [SMALL_STATE(112)] = 7961,
  [SMALL_STATE(113)] = 8052,
  [SMALL_STATE(114)] = 8145,
  [SMALL_STATE(115)] = 8238,
  [SMALL_STATE(116)] = 8331,
  [SMALL_STATE(117)] = 8422,
  [SMALL_STATE(118)] = 8515,
  [SMALL_STATE(119)] = 8606,
  [SMALL_STATE(120)] = 8697,
  [SMALL_STATE(121)] = 8788,
  [SMALL_STATE(122)] = 8879,
  [SMALL_STATE(123)] = 8970,
  [SMALL_STATE(124)] = 9063,
  [SMALL_STATE(125)] = 9154,
  [SMALL_STATE(126)] = 9247,
  [SMALL_STATE(127)] = 9340,
  [SMALL_STATE(128)] = 9433,
  [SMALL_STATE(129)] = 9524,
  [SMALL_STATE(130)] = 9617,
  [SMALL_STATE(131)] = 9710,
  [SMALL_STATE(132)] = 9803,
  [SMALL_STATE(133)] = 9894,
  [SMALL_STATE(134)] = 9987,
  [SMALL_STATE(135)] = 10078,
  [SMALL_STATE(136)] = 10166,
  [SMALL_STATE(137)] = 10254,
  [SMALL_STATE(138)] = 10342,
  [SMALL_STATE(139)] = 10430,
  [SMALL_STATE(140)] = 10518,
  [SMALL_STATE(141)] = 10606,
  [SMALL_STATE(142)] = 10668,
  [SMALL_STATE(143)] = 10756,
  [SMALL_STATE(144)] = 10844,
  [SMALL_STATE(145)] = 10932,
  [SMALL_STATE(146)] = 11020,
  [SMALL_STATE(147)] = 11105,
  [SMALL_STATE(148)] = 11190,
  [SMALL_STATE(149)] = 11275,
  [SMALL_STATE(150)] = 11360,
  [SMALL_STATE(151)] = 11445,
  [SMALL_STATE(152)] = 11530,
  [SMALL_STATE(153)] = 11615,
  [SMALL_STATE(154)] = 11700,
  [SMALL_STATE(155)] = 11749,
  [SMALL_STATE(156)] = 11834,
  [SMALL_STATE(157)] = 11919,
  [SMALL_STATE(158)] = 12004,
  [SMALL_STATE(159)] = 12089,
  [SMALL_STATE(160)] = 12174,
  [SMALL_STATE(161)] = 12221,
  [SMALL_STATE(162)] = 12306,
  [SMALL_STATE(163)] = 12391,
  [SMALL_STATE(164)] = 12476,
  [SMALL_STATE(165)] = 12561,
  [SMALL_STATE(166)] = 12604,
  [SMALL_STATE(167)] = 12689,
  [SMALL_STATE(168)] = 12774,
  [SMALL_STATE(169)] = 12859,
  [SMALL_STATE(170)] = 12944,
  [SMALL_STATE(171)] = 13029,
  [SMALL_STATE(172)] = 13114,
  [SMALL_STATE(173)] = 13199,
  [SMALL_STATE(174)] = 13284,
  [SMALL_STATE(175)] = 13369,
  [SMALL_STATE(176)] = 13416,
  [SMALL_STATE(177)] = 13501,
  [SMALL_STATE(178)] = 13586,
  [SMALL_STATE(179)] = 13671,
  [SMALL_STATE(180)] = 13756,
  [SMALL_STATE(181)] = 13800,
  [SMALL_STATE(182)] = 13842,
  [SMALL_STATE(183)] = 13906,
  [SMALL_STATE(184)] = 13950,
  [SMALL_STATE(185)] = 13996,
  [SMALL_STATE(186)] = 14042,
  [SMALL_STATE(187)] = 14084,
  [SMALL_STATE(188)] = 14148,
  [SMALL_STATE(189)] = 14190,
  [SMALL_STATE(190)] = 14232,
  [SMALL_STATE(191)] = 14276,
  [SMALL_STATE(192)] = 14320,
  [SMALL_STATE(193)] = 14363,
  [SMALL_STATE(194)] = 14404,
  [SMALL_STATE(195)] = 14443,
  [SMALL_STATE(196)] = 14482,
  [SMALL_STATE(197)] = 14521,
  [SMALL_STATE(198)] = 14560,
  [SMALL_STATE(199)] = 14599,
  [SMALL_STATE(200)] = 14660,
  [SMALL_STATE(201)] = 14701,
  [SMALL_STATE(202)] = 14743,
  [SMALL_STATE(203)] = 14781,
  [SMALL_STATE(204)] = 14819,
  [SMALL_STATE(205)] = 14863,
  [SMALL_STATE(206)] = 14929,
  [SMALL_STATE(207)] = 14967,
  [SMALL_STATE(208)] = 15011,
  [SMALL_STATE(209)] = 15077,
  [SMALL_STATE(210)] = 15117,
  [SMALL_STATE(211)] = 15157,
  [SMALL_STATE(212)] = 15198,
  [SMALL_STATE(213)] = 15239,
  [SMALL_STATE(214)] = 15280,
  [SMALL_STATE(215)] = 15321,
  [SMALL_STATE(216)] = 15362,
  [SMALL_STATE(217)] = 15403,
  [SMALL_STATE(218)] = 15441,
  [SMALL_STATE(219)] = 15479,
  [SMALL_STATE(220)] = 15515,
  [SMALL_STATE(221)] = 15551,
  [SMALL_STATE(222)] = 15589,
  [SMALL_STATE(223)] = 15631,
  [SMALL_STATE(224)] = 15666,
  [SMALL_STATE(225)] = 15701,
  [SMALL_STATE(226)] = 15736,
  [SMALL_STATE(227)] = 15771,
  [SMALL_STATE(228)] = 15806,
  [SMALL_STATE(229)] = 15841,
  [SMALL_STATE(230)] = 15876,
  [SMALL_STATE(231)] = 15911,
  [SMALL_STATE(232)] = 15946,
  [SMALL_STATE(233)] = 15981,
  [SMALL_STATE(234)] = 16016,
  [SMALL_STATE(235)] = 16051,
  [SMALL_STATE(236)] = 16086,
  [SMALL_STATE(237)] = 16121,
  [SMALL_STATE(238)] = 16156,
  [SMALL_STATE(239)] = 16191,
  [SMALL_STATE(240)] = 16226,
  [SMALL_STATE(241)] = 16263,
  [SMALL_STATE(242)] = 16297,
  [SMALL_STATE(243)] = 16331,
  [SMALL_STATE(244)] = 16365,
  [SMALL_STATE(245)] = 16404,
  [SMALL_STATE(246)] = 16443,
  [SMALL_STATE(247)] = 16483,
  [SMALL_STATE(248)] = 16511,
  [SMALL_STATE(249)] = 16539,
  [SMALL_STATE(250)] = 16570,
  [SMALL_STATE(251)] = 16605,
  [SMALL_STATE(252)] = 16636,
  [SMALL_STATE(253)] = 16667,
  [SMALL_STATE(254)] = 16698,
  [SMALL_STATE(255)] = 16733,
  [SMALL_STATE(256)] = 16770,
  [SMALL_STATE(257)] = 16807,
  [SMALL_STATE(258)] = 16844,
  [SMALL_STATE(259)] = 16879,
  [SMALL_STATE(260)] = 16910,
  [SMALL_STATE(261)] = 16941,
  [SMALL_STATE(262)] = 16983,
  [SMALL_STATE(263)] = 17025,
  [SMALL_STATE(264)] = 17067,
  [SMALL_STATE(265)] = 17109,
  [SMALL_STATE(266)] = 17151,
  [SMALL_STATE(267)] = 17185,
  [SMALL_STATE(268)] = 17214,
  [SMALL_STATE(269)] = 17243,
  [SMALL_STATE(270)] = 17270,
  [SMALL_STATE(271)] = 17299,
  [SMALL_STATE(272)] = 17327,
  [SMALL_STATE(273)] = 17351,
  [SMALL_STATE(274)] = 17375,
  [SMALL_STATE(275)] = 17401,
  [SMALL_STATE(276)] = 17435,
  [SMALL_STATE(277)] = 17463,
  [SMALL_STATE(278)] = 17491,
  [SMALL_STATE(279)] = 17521,
  [SMALL_STATE(280)] = 17545,
  [SMALL_STATE(281)] = 17577,
  [SMALL_STATE(282)] = 17611,
  [SMALL_STATE(283)] = 17635,
  [SMALL_STATE(284)] = 17661,
  [SMALL_STATE(285)] = 17687,
  [SMALL_STATE(286)] = 17711,
  [SMALL_STATE(287)] = 17739,
  [SMALL_STATE(288)] = 17785,
  [SMALL_STATE(289)] = 17813,
  [SMALL_STATE(290)] = 17839,
  [SMALL_STATE(291)] = 17864,
  [SMALL_STATE(292)] = 17887,
  [SMALL_STATE(293)] = 17910,
  [SMALL_STATE(294)] = 17939,
  [SMALL_STATE(295)] = 17970,
  [SMALL_STATE(296)] = 17995,
  [SMALL_STATE(297)] = 18020,
  [SMALL_STATE(298)] = 18049,
  [SMALL_STATE(299)] = 18074,
  [SMALL_STATE(300)] = 18095,
  [SMALL_STATE(301)] = 18122,
  [SMALL_STATE(302)] = 18149,
  [SMALL_STATE(303)] = 18176,
  [SMALL_STATE(304)] = 18201,
  [SMALL_STATE(305)] = 18222,
  [SMALL_STATE(306)] = 18262,
  [SMALL_STATE(307)] = 18290,
  [SMALL_STATE(308)] = 18318,
  [SMALL_STATE(309)] = 18344,
  [SMALL_STATE(310)] = 18384,
  [SMALL_STATE(311)] = 18404,
  [SMALL_STATE(312)] = 18428,
  [SMALL_STATE(313)] = 18468,
  [SMALL_STATE(314)] = 18508,
  [SMALL_STATE(315)] = 18533,
  [SMALL_STATE(316)] = 18558,
  [SMALL_STATE(317)] = 18583,
  [SMALL_STATE(318)] = 18620,
  [SMALL_STATE(319)] = 18645,
  [SMALL_STATE(320)] = 18670,
  [SMALL_STATE(321)] = 18695,
  [SMALL_STATE(322)] = 18720,
  [SMALL_STATE(323)] = 18745,
  [SMALL_STATE(324)] = 18779,
  [SMALL_STATE(325)] = 18797,
  [SMALL_STATE(326)] = 18831,
  [SMALL_STATE(327)] = 18865,
  [SMALL_STATE(328)] = 18889,
  [SMALL_STATE(329)] = 18923,
  [SMALL_STATE(330)] = 18941,
  [SMALL_STATE(331)] = 18959,
  [SMALL_STATE(332)] = 18977,
  [SMALL_STATE(333)] = 18995,
  [SMALL_STATE(334)] = 19026,
  [SMALL_STATE(335)] = 19047,
  [SMALL_STATE(336)] = 19068,
  [SMALL_STATE(337)] = 19084,
  [SMALL_STATE(338)] = 19104,
  [SMALL_STATE(339)] = 19124,
  [SMALL_STATE(340)] = 19140,
  [SMALL_STATE(341)] = 19160,
  [SMALL_STATE(342)] = 19178,
  [SMALL_STATE(343)] = 19194,
  [SMALL_STATE(344)] = 19210,
  [SMALL_STATE(345)] = 19226,
  [SMALL_STATE(346)] = 19254,
  [SMALL_STATE(347)] = 19274,
  [SMALL_STATE(348)] = 19294,
  [SMALL_STATE(349)] = 19314,
  [SMALL_STATE(350)] = 19332,
  [SMALL_STATE(351)] = 19352,
  [SMALL_STATE(352)] = 19368,
  [SMALL_STATE(353)] = 19383,
  [SMALL_STATE(354)] = 19398,
  [SMALL_STATE(355)] = 19413,
  [SMALL_STATE(356)] = 19428,
  [SMALL_STATE(357)] = 19453,
  [SMALL_STATE(358)] = 19468,
  [SMALL_STATE(359)] = 19493,
  [SMALL_STATE(360)] = 19512,
  [SMALL_STATE(361)] = 19537,
  [SMALL_STATE(362)] = 19556,
  [SMALL_STATE(363)] = 19571,
  [SMALL_STATE(364)] = 19586,
  [SMALL_STATE(365)] = 19601,
  [SMALL_STATE(366)] = 19616,
  [SMALL_STATE(367)] = 19631,
  [SMALL_STATE(368)] = 19658,
  [SMALL_STATE(369)] = 19683,
  [SMALL_STATE(370)] = 19704,
  [SMALL_STATE(371)] = 19731,
  [SMALL_STATE(372)] = 19750,
  [SMALL_STATE(373)] = 19771,
  [SMALL_STATE(374)] = 19786,
  [SMALL_STATE(375)] = 19801,
  [SMALL_STATE(376)] = 19816,
  [SMALL_STATE(377)] = 19831,
  [SMALL_STATE(378)] = 19858,
  [SMALL_STATE(379)] = 19873,
  [SMALL_STATE(380)] = 19888,
  [SMALL_STATE(381)] = 19903,
  [SMALL_STATE(382)] = 19925,
  [SMALL_STATE(383)] = 19949,
  [SMALL_STATE(384)] = 19963,
  [SMALL_STATE(385)] = 19985,
  [SMALL_STATE(386)] = 20009,
  [SMALL_STATE(387)] = 20033,
  [SMALL_STATE(388)] = 20057,
  [SMALL_STATE(389)] = 20081,
  [SMALL_STATE(390)] = 20105,
  [SMALL_STATE(391)] = 20127,
  [SMALL_STATE(392)] = 20149,
  [SMALL_STATE(393)] = 20165,
  [SMALL_STATE(394)] = 20185,
  [SMALL_STATE(395)] = 20207,
  [SMALL_STATE(396)] = 20231,
  [SMALL_STATE(397)] = 20245,
  [SMALL_STATE(398)] = 20269,
  [SMALL_STATE(399)] = 20293,
  [SMALL_STATE(400)] = 20315,
  [SMALL_STATE(401)] = 20339,
  [SMALL_STATE(402)] = 20363,
  [SMALL_STATE(403)] = 20376,
  [SMALL_STATE(404)] = 20389,
  [SMALL_STATE(405)] = 20404,
  [SMALL_STATE(406)] = 20425,
  [SMALL_STATE(407)] = 20446,
  [SMALL_STATE(408)] = 20463,
  [SMALL_STATE(409)] = 20476,
  [SMALL_STATE(410)] = 20497,
  [SMALL_STATE(411)] = 20514,
  [SMALL_STATE(412)] = 20535,
  [SMALL_STATE(413)] = 20548,
  [SMALL_STATE(414)] = 20565,
  [SMALL_STATE(415)] = 20582,
  [SMALL_STATE(416)] = 20595,
  [SMALL_STATE(417)] = 20612,
  [SMALL_STATE(418)] = 20629,
  [SMALL_STATE(419)] = 20650,
  [SMALL_STATE(420)] = 20663,
  [SMALL_STATE(421)] = 20682,
  [SMALL_STATE(422)] = 20703,
  [SMALL_STATE(423)] = 20716,
  [SMALL_STATE(424)] = 20731,
  [SMALL_STATE(425)] = 20752,
  [SMALL_STATE(426)] = 20765,
  [SMALL_STATE(427)] = 20786,
  [SMALL_STATE(428)] = 20799,
  [SMALL_STATE(429)] = 20816,
  [SMALL_STATE(430)] = 20829,
  [SMALL_STATE(431)] = 20847,
  [SMALL_STATE(432)] = 20861,
  [SMALL_STATE(433)] = 20875,
  [SMALL_STATE(434)] = 20889,
  [SMALL_STATE(435)] = 20907,
  [SMALL_STATE(436)] = 20921,
  [SMALL_STATE(437)] = 20937,
  [SMALL_STATE(438)] = 20955,
  [SMALL_STATE(439)] = 20971,
  [SMALL_STATE(440)] = 20985,
  [SMALL_STATE(441)] = 21001,
  [SMALL_STATE(442)] = 21015,
  [SMALL_STATE(443)] = 21031,
  [SMALL_STATE(444)] = 21047,
  [SMALL_STATE(445)] = 21061,
  [SMALL_STATE(446)] = 21079,
  [SMALL_STATE(447)] = 21091,
  [SMALL_STATE(448)] = 21107,
  [SMALL_STATE(449)] = 21121,
  [SMALL_STATE(450)] = 21139,
  [SMALL_STATE(451)] = 21151,
  [SMALL_STATE(452)] = 21169,
  [SMALL_STATE(453)] = 21185,
  [SMALL_STATE(454)] = 21201,
  [SMALL_STATE(455)] = 21215,
  [SMALL_STATE(456)] = 21229,
  [SMALL_STATE(457)] = 21245,
  [SMALL_STATE(458)] = 21263,
  [SMALL_STATE(459)] = 21277,
  [SMALL_STATE(460)] = 21293,
  [SMALL_STATE(461)] = 21307,
  [SMALL_STATE(462)] = 21325,
  [SMALL_STATE(463)] = 21337,
  [SMALL_STATE(464)] = 21353,
  [SMALL_STATE(465)] = 21371,
  [SMALL_STATE(466)] = 21385,
  [SMALL_STATE(467)] = 21401,
  [SMALL_STATE(468)] = 21415,
  [SMALL_STATE(469)] = 21433,
  [SMALL_STATE(470)] = 21445,
  [SMALL_STATE(471)] = 21459,
  [SMALL_STATE(472)] = 21471,
  [SMALL_STATE(473)] = 21485,
  [SMALL_STATE(474)] = 21503,
  [SMALL_STATE(475)] = 21519,
  [SMALL_STATE(476)] = 21533,
  [SMALL_STATE(477)] = 21551,
  [SMALL_STATE(478)] = 21567,
  [SMALL_STATE(479)] = 21585,
  [SMALL_STATE(480)] = 21600,
  [SMALL_STATE(481)] = 21615,
  [SMALL_STATE(482)] = 21630,
  [SMALL_STATE(483)] = 21645,
  [SMALL_STATE(484)] = 21660,
  [SMALL_STATE(485)] = 21671,
  [SMALL_STATE(486)] = 21684,
  [SMALL_STATE(487)] = 21699,
  [SMALL_STATE(488)] = 21714,
  [SMALL_STATE(489)] = 21727,
  [SMALL_STATE(490)] = 21742,
  [SMALL_STATE(491)] = 21753,
  [SMALL_STATE(492)] = 21768,
  [SMALL_STATE(493)] = 21779,
  [SMALL_STATE(494)] = 21794,
  [SMALL_STATE(495)] = 21809,
  [SMALL_STATE(496)] = 21822,
  [SMALL_STATE(497)] = 21837,
  [SMALL_STATE(498)] = 21852,
  [SMALL_STATE(499)] = 21867,
  [SMALL_STATE(500)] = 21882,
  [SMALL_STATE(501)] = 21897,
  [SMALL_STATE(502)] = 21908,
  [SMALL_STATE(503)] = 21919,
  [SMALL_STATE(504)] = 21930,
  [SMALL_STATE(505)] = 21941,
  [SMALL_STATE(506)] = 21952,
  [SMALL_STATE(507)] = 21967,
  [SMALL_STATE(508)] = 21980,
  [SMALL_STATE(509)] = 21995,
  [SMALL_STATE(510)] = 22010,
  [SMALL_STATE(511)] = 22025,
  [SMALL_STATE(512)] = 22040,
  [SMALL_STATE(513)] = 22051,
  [SMALL_STATE(514)] = 22066,
  [SMALL_STATE(515)] = 22081,
  [SMALL_STATE(516)] = 22096,
  [SMALL_STATE(517)] = 22111,
  [SMALL_STATE(518)] = 22122,
  [SMALL_STATE(519)] = 22133,
  [SMALL_STATE(520)] = 22146,
  [SMALL_STATE(521)] = 22161,
  [SMALL_STATE(522)] = 22174,
  [SMALL_STATE(523)] = 22189,
  [SMALL_STATE(524)] = 22202,
  [SMALL_STATE(525)] = 22217,
  [SMALL_STATE(526)] = 22232,
  [SMALL_STATE(527)] = 22247,
  [SMALL_STATE(528)] = 22258,
  [SMALL_STATE(529)] = 22271,
  [SMALL_STATE(530)] = 22284,
  [SMALL_STATE(531)] = 22297,
  [SMALL_STATE(532)] = 22312,
  [SMALL_STATE(533)] = 22327,
  [SMALL_STATE(534)] = 22338,
  [SMALL_STATE(535)] = 22353,
  [SMALL_STATE(536)] = 22368,
  [SMALL_STATE(537)] = 22379,
  [SMALL_STATE(538)] = 22394,
  [SMALL_STATE(539)] = 22409,
  [SMALL_STATE(540)] = 22424,
  [SMALL_STATE(541)] = 22437,
  [SMALL_STATE(542)] = 22450,
  [SMALL_STATE(543)] = 22461,
  [SMALL_STATE(544)] = 22476,
  [SMALL_STATE(545)] = 22487,
  [SMALL_STATE(546)] = 22498,
  [SMALL_STATE(547)] = 22511,
  [SMALL_STATE(548)] = 22526,
  [SMALL_STATE(549)] = 22541,
  [SMALL_STATE(550)] = 22552,
  [SMALL_STATE(551)] = 22563,
  [SMALL_STATE(552)] = 22574,
  [SMALL_STATE(553)] = 22589,
  [SMALL_STATE(554)] = 22604,
  [SMALL_STATE(555)] = 22619,
  [SMALL_STATE(556)] = 22634,
  [SMALL_STATE(557)] = 22649,
  [SMALL_STATE(558)] = 22664,
  [SMALL_STATE(559)] = 22675,
  [SMALL_STATE(560)] = 22690,
  [SMALL_STATE(561)] = 22705,
  [SMALL_STATE(562)] = 22718,
  [SMALL_STATE(563)] = 22733,
  [SMALL_STATE(564)] = 22748,
  [SMALL_STATE(565)] = 22763,
  [SMALL_STATE(566)] = 22778,
  [SMALL_STATE(567)] = 22793,
  [SMALL_STATE(568)] = 22808,
  [SMALL_STATE(569)] = 22823,
  [SMALL_STATE(570)] = 22838,
  [SMALL_STATE(571)] = 22853,
  [SMALL_STATE(572)] = 22868,
  [SMALL_STATE(573)] = 22883,
  [SMALL_STATE(574)] = 22898,
  [SMALL_STATE(575)] = 22909,
  [SMALL_STATE(576)] = 22924,
  [SMALL_STATE(577)] = 22939,
  [SMALL_STATE(578)] = 22954,
  [SMALL_STATE(579)] = 22969,
  [SMALL_STATE(580)] = 22984,
  [SMALL_STATE(581)] = 22999,
  [SMALL_STATE(582)] = 23014,
  [SMALL_STATE(583)] = 23025,
  [SMALL_STATE(584)] = 23036,
  [SMALL_STATE(585)] = 23051,
  [SMALL_STATE(586)] = 23064,
  [SMALL_STATE(587)] = 23075,
  [SMALL_STATE(588)] = 23090,
  [SMALL_STATE(589)] = 23103,
  [SMALL_STATE(590)] = 23118,
  [SMALL_STATE(591)] = 23133,
  [SMALL_STATE(592)] = 23144,
  [SMALL_STATE(593)] = 23159,
  [SMALL_STATE(594)] = 23171,
  [SMALL_STATE(595)] = 23181,
  [SMALL_STATE(596)] = 23193,
  [SMALL_STATE(597)] = 23205,
  [SMALL_STATE(598)] = 23217,
  [SMALL_STATE(599)] = 23229,
  [SMALL_STATE(600)] = 23239,
  [SMALL_STATE(601)] = 23251,
  [SMALL_STATE(602)] = 23263,
  [SMALL_STATE(603)] = 23273,
  [SMALL_STATE(604)] = 23285,
  [SMALL_STATE(605)] = 23297,
  [SMALL_STATE(606)] = 23309,
  [SMALL_STATE(607)] = 23319,
  [SMALL_STATE(608)] = 23331,
  [SMALL_STATE(609)] = 23343,
  [SMALL_STATE(610)] = 23355,
  [SMALL_STATE(611)] = 23367,
  [SMALL_STATE(612)] = 23379,
  [SMALL_STATE(613)] = 23389,
  [SMALL_STATE(614)] = 23399,
  [SMALL_STATE(615)] = 23409,
  [SMALL_STATE(616)] = 23421,
  [SMALL_STATE(617)] = 23433,
  [SMALL_STATE(618)] = 23445,
  [SMALL_STATE(619)] = 23457,
  [SMALL_STATE(620)] = 23469,
  [SMALL_STATE(621)] = 23479,
  [SMALL_STATE(622)] = 23491,
  [SMALL_STATE(623)] = 23503,
  [SMALL_STATE(624)] = 23515,
  [SMALL_STATE(625)] = 23527,
  [SMALL_STATE(626)] = 23539,
  [SMALL_STATE(627)] = 23549,
  [SMALL_STATE(628)] = 23561,
  [SMALL_STATE(629)] = 23571,
  [SMALL_STATE(630)] = 23581,
  [SMALL_STATE(631)] = 23593,
  [SMALL_STATE(632)] = 23605,
  [SMALL_STATE(633)] = 23615,
  [SMALL_STATE(634)] = 23627,
  [SMALL_STATE(635)] = 23637,
  [SMALL_STATE(636)] = 23649,
  [SMALL_STATE(637)] = 23661,
  [SMALL_STATE(638)] = 23673,
  [SMALL_STATE(639)] = 23685,
  [SMALL_STATE(640)] = 23697,
  [SMALL_STATE(641)] = 23709,
  [SMALL_STATE(642)] = 23719,
  [SMALL_STATE(643)] = 23729,
  [SMALL_STATE(644)] = 23741,
  [SMALL_STATE(645)] = 23753,
  [SMALL_STATE(646)] = 23763,
  [SMALL_STATE(647)] = 23773,
  [SMALL_STATE(648)] = 23783,
  [SMALL_STATE(649)] = 23793,
  [SMALL_STATE(650)] = 23805,
  [SMALL_STATE(651)] = 23814,
  [SMALL_STATE(652)] = 23823,
  [SMALL_STATE(653)] = 23832,
  [SMALL_STATE(654)] = 23841,
  [SMALL_STATE(655)] = 23850,
  [SMALL_STATE(656)] = 23859,
  [SMALL_STATE(657)] = 23868,
  [SMALL_STATE(658)] = 23877,
  [SMALL_STATE(659)] = 23886,
  [SMALL_STATE(660)] = 23895,
  [SMALL_STATE(661)] = 23904,
  [SMALL_STATE(662)] = 23913,
  [SMALL_STATE(663)] = 23922,
  [SMALL_STATE(664)] = 23931,
  [SMALL_STATE(665)] = 23940,
  [SMALL_STATE(666)] = 23949,
  [SMALL_STATE(667)] = 23958,
  [SMALL_STATE(668)] = 23967,
  [SMALL_STATE(669)] = 23976,
  [SMALL_STATE(670)] = 23985,
  [SMALL_STATE(671)] = 23994,
  [SMALL_STATE(672)] = 24003,
  [SMALL_STATE(673)] = 24012,
  [SMALL_STATE(674)] = 24021,
  [SMALL_STATE(675)] = 24030,
  [SMALL_STATE(676)] = 24039,
  [SMALL_STATE(677)] = 24048,
  [SMALL_STATE(678)] = 24057,
  [SMALL_STATE(679)] = 24066,
  [SMALL_STATE(680)] = 24075,
  [SMALL_STATE(681)] = 24084,
  [SMALL_STATE(682)] = 24093,
  [SMALL_STATE(683)] = 24102,
  [SMALL_STATE(684)] = 24111,
  [SMALL_STATE(685)] = 24120,
  [SMALL_STATE(686)] = 24129,
  [SMALL_STATE(687)] = 24138,
  [SMALL_STATE(688)] = 24147,
  [SMALL_STATE(689)] = 24156,
  [SMALL_STATE(690)] = 24165,
  [SMALL_STATE(691)] = 24174,
  [SMALL_STATE(692)] = 24183,
  [SMALL_STATE(693)] = 24192,
  [SMALL_STATE(694)] = 24201,
  [SMALL_STATE(695)] = 24210,
  [SMALL_STATE(696)] = 24219,
  [SMALL_STATE(697)] = 24228,
  [SMALL_STATE(698)] = 24237,
  [SMALL_STATE(699)] = 24246,
  [SMALL_STATE(700)] = 24255,
  [SMALL_STATE(701)] = 24264,
  [SMALL_STATE(702)] = 24273,
  [SMALL_STATE(703)] = 24282,
  [SMALL_STATE(704)] = 24291,
  [SMALL_STATE(705)] = 24300,
  [SMALL_STATE(706)] = 24309,
  [SMALL_STATE(707)] = 24318,
  [SMALL_STATE(708)] = 24327,
  [SMALL_STATE(709)] = 24336,
  [SMALL_STATE(710)] = 24345,
  [SMALL_STATE(711)] = 24354,
  [SMALL_STATE(712)] = 24363,
  [SMALL_STATE(713)] = 24372,
  [SMALL_STATE(714)] = 24381,
  [SMALL_STATE(715)] = 24390,
  [SMALL_STATE(716)] = 24399,
  [SMALL_STATE(717)] = 24408,
  [SMALL_STATE(718)] = 24417,
  [SMALL_STATE(719)] = 24426,
  [SMALL_STATE(720)] = 24435,
  [SMALL_STATE(721)] = 24444,
  [SMALL_STATE(722)] = 24453,
  [SMALL_STATE(723)] = 24462,
  [SMALL_STATE(724)] = 24471,
  [SMALL_STATE(725)] = 24480,
  [SMALL_STATE(726)] = 24489,
  [SMALL_STATE(727)] = 24498,
  [SMALL_STATE(728)] = 24507,
  [SMALL_STATE(729)] = 24516,
  [SMALL_STATE(730)] = 24525,
  [SMALL_STATE(731)] = 24534,
  [SMALL_STATE(732)] = 24543,
  [SMALL_STATE(733)] = 24552,
  [SMALL_STATE(734)] = 24561,
  [SMALL_STATE(735)] = 24570,
  [SMALL_STATE(736)] = 24579,
  [SMALL_STATE(737)] = 24588,
  [SMALL_STATE(738)] = 24597,
  [SMALL_STATE(739)] = 24606,
  [SMALL_STATE(740)] = 24615,
  [SMALL_STATE(741)] = 24624,
  [SMALL_STATE(742)] = 24633,
  [SMALL_STATE(743)] = 24642,
  [SMALL_STATE(744)] = 24651,
  [SMALL_STATE(745)] = 24660,
  [SMALL_STATE(746)] = 24669,
  [SMALL_STATE(747)] = 24678,
  [SMALL_STATE(748)] = 24687,
  [SMALL_STATE(749)] = 24696,
  [SMALL_STATE(750)] = 24705,
  [SMALL_STATE(751)] = 24714,
  [SMALL_STATE(752)] = 24723,
  [SMALL_STATE(753)] = 24732,
  [SMALL_STATE(754)] = 24741,
  [SMALL_STATE(755)] = 24750,
  [SMALL_STATE(756)] = 24759,
  [SMALL_STATE(757)] = 24768,
  [SMALL_STATE(758)] = 24777,
  [SMALL_STATE(759)] = 24786,
  [SMALL_STATE(760)] = 24795,
  [SMALL_STATE(761)] = 24804,
  [SMALL_STATE(762)] = 24813,
  [SMALL_STATE(763)] = 24822,
  [SMALL_STATE(764)] = 24831,
  [SMALL_STATE(765)] = 24840,
  [SMALL_STATE(766)] = 24849,
  [SMALL_STATE(767)] = 24858,
  [SMALL_STATE(768)] = 24867,
  [SMALL_STATE(769)] = 24876,
  [SMALL_STATE(770)] = 24885,
  [SMALL_STATE(771)] = 24894,
  [SMALL_STATE(772)] = 24903,
  [SMALL_STATE(773)] = 24912,
  [SMALL_STATE(774)] = 24921,
  [SMALL_STATE(775)] = 24930,
  [SMALL_STATE(776)] = 24939,
  [SMALL_STATE(777)] = 24948,
  [SMALL_STATE(778)] = 24957,
  [SMALL_STATE(779)] = 24966,
  [SMALL_STATE(780)] = 24975,
  [SMALL_STATE(781)] = 24984,
  [SMALL_STATE(782)] = 24993,
  [SMALL_STATE(783)] = 25002,
  [SMALL_STATE(784)] = 25011,
  [SMALL_STATE(785)] = 25020,
  [SMALL_STATE(786)] = 25029,
  [SMALL_STATE(787)] = 25038,
  [SMALL_STATE(788)] = 25047,
  [SMALL_STATE(789)] = 25056,
  [SMALL_STATE(790)] = 25065,
  [SMALL_STATE(791)] = 25074,
  [SMALL_STATE(792)] = 25083,
  [SMALL_STATE(793)] = 25092,
  [SMALL_STATE(794)] = 25101,
  [SMALL_STATE(795)] = 25110,
  [SMALL_STATE(796)] = 25119,
  [SMALL_STATE(797)] = 25128,
  [SMALL_STATE(798)] = 25137,
  [SMALL_STATE(799)] = 25146,
  [SMALL_STATE(800)] = 25155,
  [SMALL_STATE(801)] = 25164,
  [SMALL_STATE(802)] = 25173,
  [SMALL_STATE(803)] = 25182,
  [SMALL_STATE(804)] = 25191,
  [SMALL_STATE(805)] = 25200,
  [SMALL_STATE(806)] = 25209,
  [SMALL_STATE(807)] = 25218,
  [SMALL_STATE(808)] = 25227,
  [SMALL_STATE(809)] = 25236,
  [SMALL_STATE(810)] = 25245,
  [SMALL_STATE(811)] = 25254,
  [SMALL_STATE(812)] = 25263,
  [SMALL_STATE(813)] = 25272,
  [SMALL_STATE(814)] = 25281,
  [SMALL_STATE(815)] = 25290,
  [SMALL_STATE(816)] = 25299,
  [SMALL_STATE(817)] = 25308,
  [SMALL_STATE(818)] = 25317,
  [SMALL_STATE(819)] = 25326,
  [SMALL_STATE(820)] = 25335,
  [SMALL_STATE(821)] = 25344,
  [SMALL_STATE(822)] = 25353,
  [SMALL_STATE(823)] = 25362,
  [SMALL_STATE(824)] = 25371,
  [SMALL_STATE(825)] = 25380,
  [SMALL_STATE(826)] = 25389,
  [SMALL_STATE(827)] = 25398,
  [SMALL_STATE(828)] = 25407,
  [SMALL_STATE(829)] = 25416,
  [SMALL_STATE(830)] = 25425,
  [SMALL_STATE(831)] = 25434,
  [SMALL_STATE(832)] = 25443,
  [SMALL_STATE(833)] = 25452,
  [SMALL_STATE(834)] = 25461,
  [SMALL_STATE(835)] = 25470,
  [SMALL_STATE(836)] = 25479,
  [SMALL_STATE(837)] = 25488,
  [SMALL_STATE(838)] = 25497,
  [SMALL_STATE(839)] = 25506,
  [SMALL_STATE(840)] = 25515,
  [SMALL_STATE(841)] = 25524,
  [SMALL_STATE(842)] = 25533,
  [SMALL_STATE(843)] = 25542,
  [SMALL_STATE(844)] = 25551,
  [SMALL_STATE(845)] = 25560,
  [SMALL_STATE(846)] = 25569,
  [SMALL_STATE(847)] = 25578,
  [SMALL_STATE(848)] = 25587,
  [SMALL_STATE(849)] = 25596,
  [SMALL_STATE(850)] = 25605,
  [SMALL_STATE(851)] = 25614,
  [SMALL_STATE(852)] = 25623,
  [SMALL_STATE(853)] = 25632,
  [SMALL_STATE(854)] = 25641,
  [SMALL_STATE(855)] = 25650,
  [SMALL_STATE(856)] = 25659,
  [SMALL_STATE(857)] = 25668,
  [SMALL_STATE(858)] = 25677,
  [SMALL_STATE(859)] = 25686,
  [SMALL_STATE(860)] = 25695,
  [SMALL_STATE(861)] = 25704,
  [SMALL_STATE(862)] = 25713,
  [SMALL_STATE(863)] = 25722,
  [SMALL_STATE(864)] = 25731,
  [SMALL_STATE(865)] = 25740,
  [SMALL_STATE(866)] = 25749,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(765),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(764),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(763),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(762),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(760),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(651),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(756),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(755),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(753),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(752),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(750),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_repeat2, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(764),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(117),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(116),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(115),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(368),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(763),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(582),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(762),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(441),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(760),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(651),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(756),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(755),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(753),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(752),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(751),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(750),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(120),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(460),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat2, 2), SHIFT_REPEAT(418),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_accum_name, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_accum_name, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_dot, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_dot, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_dot_repeat1, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_dot, 4),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name_dot, 4),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2), SHIFT_REPEAT(804),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(857),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 5),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 5),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_accum_name, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_accum_name, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 4),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_stmt_repeat2, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_accum_type_repeat1, 2),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2), SHIFT_REPEAT(35),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_integer, 1), REDUCE(sym_integer, 2),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_integer, 1), REDUCE(sym_integer, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_bag_expr, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_bag_expr, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_real, 3), REDUCE(sym_real, 4),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_real, 3), REDUCE(sym_real, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 3),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(708),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_real, 2), REDUCE(sym_real, 3),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_real, 2), REDUCE(sym_real, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_real, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 5),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 5),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 6),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 6),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_repeat1, 2),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2), SHIFT_REPEAT(765),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_body_repeat1, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 6),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 6),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 10),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 10),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 8),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 8),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 7),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 7),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 11),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 11),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 4),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 4),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 7),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 7),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 4),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 4),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 3),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_stmt, 8),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_stmt, 8),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(759),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(730),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(650),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(728),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 7, .production_id = 16),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef, 7, .production_id = 16),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef, 6, .production_id = 14),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typedef, 6, .production_id = 14),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_stmts, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_body_stmts, 2),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(842),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(855),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 2),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 2),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_dot_repeat1, 2), SHIFT_REPEAT(817),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(709),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(863),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(813),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat1, 2), SHIFT_REPEAT(201),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 1),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat2, 2), SHIFT_REPEAT(862),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_set, 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_operator, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_operator, 1),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_operator, 1),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var_decl_stmt, 4, .production_id = 19),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(582),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(460),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt, 5),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_g_accum_accum_stmt, 3, .production_id = 6),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stmt, 3),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typedef_repeat1, 2),
  [592] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(582),
  [595] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(460),
  [598] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_typedef_repeat1, 2), SHIFT_REPEAT(311),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(798),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_accum_stmt, 5, .production_id = 21),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_l_accum_accum_stmt, 5, .production_id = 21),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(753),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_expr, 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_fields, 1),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_fields, 1),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_fields, 2),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_fields, 2),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(839),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 1),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_fields_repeat1, 2), SHIFT_REPEAT(278),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_fields_repeat1, 2),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tuple_fields_repeat1, 2),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(669),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 4),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_base_type, 4),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [676] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2), SHIFT_REPEAT(288),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(668),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_field, 2),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple_field, 2),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 1),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 2),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 4),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_proj, 1),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 4),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 4),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 4),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_l_accum_assign_stmt, 5, .production_id = 11),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_g_accum_assign_stmt, 3),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_accum_func_call, 3, .production_id = 15),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 2),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vertex_set_type, 1),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 2),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 2, .production_id = 22),
  [777] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 2, .production_id = 22), SHIFT_REPEAT(729),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_accum_func_call, 4, .production_id = 18),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_vertex_type, 1),
  [784] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_stmt_list_repeat1, 2), SHIFT_REPEAT(90),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_stmt_list_repeat1, 2),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt_list, 2),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 4, .production_id = 23),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 2, .production_id = 13),
  [797] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 2, .production_id = 13), SHIFT_REPEAT(754),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_set, 1),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 4),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_accum_func_call_repeat1, 5, .production_id = 23),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 1),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 3),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_pattern, 1),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt_list, 1),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_source_set, 1, .production_id = 5),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_pattern, 2, .production_id = 8),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_types, 3),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_stmt, 1),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 5),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_case_stmt, 5),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_while_stmt, 5),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_for_each_stmt, 5),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_vertex_set, 3, .production_id = 24),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_case_stmt, 4),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 8, .production_id = 25),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 8),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_pattern_repeat1, 6),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(811),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2),
  [872] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2), SHIFT_REPEAT(514),
  [875] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_repeat1, 2), SHIFT_REPEAT(864),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [880] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2), SHIFT_REPEAT(499),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql, 1),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_case_stmt, 3),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 6),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_case_stmt, 6),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_source_set, 3, .production_id = 12),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_if_stmt, 7),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dml_sub_while_stmt, 7),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 4),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 5),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_set, 3),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_type, 1),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 2),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [933] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_stmt_repeat1, 2), SHIFT_REPEAT(101),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_print_stmt_repeat1, 2),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_expr_set, 5),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disj_pattern_repeat1, 2),
  [944] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disj_pattern_repeat1, 2), SHIFT_REPEAT(333),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edge_set_type, 1),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_edge_pattern, 1),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_gsql_select_block_repeat1, 2),
  [959] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_gsql_select_block_repeat1, 2), SHIFT_REPEAT(74),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disj_pattern, 2),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 1),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_pattern, 1),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_expr_set, 4),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 8),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 3),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 7),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_real, 4),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 6, .production_id = 17),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 9),
  [1008] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 9),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 2),
  [1012] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 2), SHIFT_REPEAT(126),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 2),
  [1021] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 2), SHIFT_REPEAT(262),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 10),
  [1026] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 10),
  [1028] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2), SHIFT_REPEAT(147),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 1),
  [1033] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 1),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 5),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1039] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arg_list_repeat1, 2), SHIFT_REPEAT(177),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 3, .production_id = 7),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_edge_pattern, 2),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 2),
  [1048] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 2), SHIFT_REPEAT(125),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 4),
  [1053] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 4),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_expr, 3),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_var_decl_stmt, 3),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 11),
  [1077] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 11),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 2),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(800),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 4),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat2, 2),
  [1099] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat2, 2), SHIFT_REPEAT(261),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 2),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 6),
  [1114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 6),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_type, 8),
  [1120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accum_type, 8),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 2),
  [1138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 2), SHIFT_REPEAT(456),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 2),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [1149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [1151] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 1),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 3),
  [1175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 2), SHIFT_REPEAT(672),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 2),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat2, 4),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_vertex_types_repeat1, 2),
  [1196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_vertex_types_repeat1, 2), SHIFT_REPEAT(464),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [1201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_v_expr_set_repeat1, 2), SHIFT_REPEAT(139),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_v_expr_set_repeat1, 2),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 3),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpret_query, 10, .production_id = 1),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 10, .production_id = 3),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 11, .production_id = 4),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 11, .production_id = 2),
  [1216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seed_set_repeat1, 2), SHIFT_REPEAT(399),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seed_set_repeat1, 2),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_decl_stmt, 5),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 2),
  [1229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 2), SHIFT_REPEAT(683),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 5),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_clause, 2),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_accum_clause, 2),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 4),
  [1274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [1276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(572),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 12, .production_id = 3),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 2),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_base_decl_stmt_repeat1, 2), SHIFT_REPEAT(824),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 13, .production_id = 4),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 10, .production_id = 1),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_size, 1),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat2, 4),
  [1323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 2), SHIFT_REPEAT(692),
  [1326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 2),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 2),
  [1330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 9, .production_id = 2),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [1336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat1, 2), SHIFT_REPEAT(295),
  [1339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_stmt_repeat1, 2),
  [1341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpret_query, 8, .production_id = 1),
  [1343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_case_stmt_repeat1, 4),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_query, 8, .production_id = 1),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_edge_types_repeat1, 2),
  [1351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_edge_types_repeat1, 2), SHIFT_REPEAT(473),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat4, 2), SHIFT_REPEAT(264),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat4, 2),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(769),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [1387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [1389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2),
  [1391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat2, 2), SHIFT_REPEAT(570),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [1398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(572),
  [1401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [1403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_case_stmt_repeat1, 4),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 10),
  [1417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 10), SHIFT_REPEAT(688),
  [1420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_edge_pattern, 3),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [1432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body, 4),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accum_decl_stmt, 3),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_set, 1),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_for_each_control_repeat1, 2, .production_id = 9),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 3),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed, 2),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat2, 3),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_v_set_proj, 3),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 8, .production_id = 7),
  [1504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat3, 2), SHIFT_REPEAT(286),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_types, 4),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_decl_stmt_repeat1, 4),
  [1523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_body_if_stmt_repeat1, 5),
  [1525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dml_sub_if_stmt_repeat1, 5),
  [1527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat4, 3),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 7),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_accum_type_repeat3, 3),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_while_stmt, 7),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 3),
  [1579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 7),
  [1581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 4),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_block, 6),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [1623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 4),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stmt, 6),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_each_control, 13, .production_id = 7),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 2),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 6),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 6),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gsql_select_clause, 4),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 5),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_stmt, 1),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(715),
  [1711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(716),
  [1717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [1729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [1731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_stmt, 1),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_edge_set, 3, .production_id = 20),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seed_set, 3),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 5),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(783),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_for_each_stmt, 5),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_if_stmt, 8),
  [1839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_while_stmt, 5),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1887] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_body_case_stmt, 5),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
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
