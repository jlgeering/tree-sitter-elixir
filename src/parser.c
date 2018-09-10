#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 131
#define SYMBOL_COUNT 116
#define ALIAS_COUNT 0
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_alias = 1,
  sym_integer = 2,
  sym_float = 3,
  anon_sym_true = 4,
  anon_sym_COLONtrue = 5,
  anon_sym_false = 6,
  anon_sym_COLONfalse = 7,
  aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH = 8,
  anon_sym_COLON_BANG = 9,
  anon_sym_COLON_BANG_EQ = 10,
  anon_sym_COLON_BANG_EQ_EQ = 11,
  anon_sym_COLON_AMP = 12,
  anon_sym_COLON_AMP_AMP = 13,
  anon_sym_COLON_AMP_AMP_AMP = 14,
  anon_sym_COLON_STAR = 15,
  anon_sym_COLON_PLUS = 16,
  anon_sym_COLON_PLUS_PLUS = 17,
  anon_sym_COLON_DASH = 18,
  anon_sym_COLON_DASH_DASH = 19,
  anon_sym_COLON_DOT = 20,
  anon_sym_COLON_DOT_DOT = 21,
  anon_sym_COLON_SLASH = 22,
  anon_sym_COLON_COLON_COLON = 23,
  anon_sym_COLON_LT = 24,
  anon_sym_COLON_LT_DASH = 25,
  anon_sym_COLON_LT_LT_LT = 26,
  anon_sym_COLON_LT_LT_TILDE = 27,
  anon_sym_COLON_LT_EQ = 28,
  anon_sym_COLON_LT_GT = 29,
  anon_sym_COLON_LT_PIPE_GT = 30,
  anon_sym_COLON_LT_TILDE = 31,
  anon_sym_COLON_LT_TILDE_GT = 32,
  anon_sym_COLON_EQ = 33,
  anon_sym_COLON_EQ_EQ = 34,
  anon_sym_COLON_EQ_EQ_EQ = 35,
  anon_sym_COLON_EQ_GT = 36,
  anon_sym_COLON_EQ_TILDE = 37,
  anon_sym_COLON_GT = 38,
  anon_sym_COLON_GT_EQ = 39,
  anon_sym_COLON_GT_GT_GT = 40,
  anon_sym_COLON_AT = 41,
  anon_sym_COLON_BSLASH_BSLASH = 42,
  anon_sym_COLON_CARET = 43,
  anon_sym_COLON_PIPE = 44,
  anon_sym_COLON_PIPE_GT = 45,
  anon_sym_COLON_PIPE_PIPE = 46,
  anon_sym_COLON_PIPE_PIPE_PIPE = 47,
  anon_sym_COLON_TILDE_GT = 48,
  anon_sym_COLON_TILDE_GT_GT = 49,
  anon_sym_COLON_TILDE_TILDE_TILDE = 50,
  aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH = 51,
  anon_sym_nil = 52,
  anon_sym_COLONnil = 53,
  anon_sym_SQUOTE = 54,
  aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH = 55,
  anon_sym_LT_LT = 56,
  anon_sym_COMMA = 57,
  anon_sym_GT_GT = 58,
  anon_sym_COLON_COLON = 59,
  sym_binary_options = 60,
  anon_sym_DQUOTE = 61,
  aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH = 62,
  anon_sym_LBRACE = 63,
  anon_sym_RBRACE = 64,
  anon_sym_LBRACK = 65,
  anon_sym_RBRACK = 66,
  anon_sym_PIPE = 67,
  anon_sym_PERCENT_LBRACE = 68,
  anon_sym_EQ_GT = 69,
  anon_sym_PERCENT = 70,
  anon_sym_defmodule = 71,
  anon_sym_do = 72,
  anon_sym_end = 73,
  aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH = 74,
  sym_comment = 75,
  sym_program = 76,
  sym__expression = 77,
  sym__value = 78,
  sym_true = 79,
  sym_false = 80,
  sym_atom = 81,
  sym__operator_atom = 82,
  sym_keyword = 83,
  sym_nil = 84,
  sym_charlist = 85,
  sym_binary = 86,
  sym_binary_segment = 87,
  sym_string = 88,
  sym_tuple = 89,
  sym__list_or_keyword_list = 90,
  sym_list = 91,
  sym__empty_list = 92,
  sym__simple_list = 93,
  sym__head_tail_list = 94,
  sym_head = 95,
  sym_tail = 96,
  sym_keyword_list = 97,
  sym_map = 98,
  sym__empty_map = 99,
  sym__map = 100,
  sym_pair = 101,
  sym_struct = 102,
  sym__empty_struct_body = 103,
  sym__struct_body = 104,
  sym_implicit_keyword_list = 105,
  sym_module = 106,
  sym_module_attribute = 107,
  aux_sym_program_repeat1 = 108,
  aux_sym_charlist_repeat1 = 109,
  aux_sym_binary_repeat1 = 110,
  aux_sym_string_repeat1 = 111,
  aux_sym_tuple_repeat1 = 112,
  aux_sym_keyword_list_repeat1 = 113,
  aux_sym__map_repeat1 = 114,
  aux_sym_module_repeat1 = 115,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_alias] = "alias",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [anon_sym_true] = "true",
  [anon_sym_COLONtrue] = ":true",
  [anon_sym_false] = "false",
  [anon_sym_COLONfalse] = ":false",
  [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = "/:\\w([@\\w])*(!|\\?)?|:'.*'|:\".*\"/",
  [anon_sym_COLON_BANG] = ":!",
  [anon_sym_COLON_BANG_EQ] = ":!=",
  [anon_sym_COLON_BANG_EQ_EQ] = ":!==",
  [anon_sym_COLON_AMP] = ":&",
  [anon_sym_COLON_AMP_AMP] = ":&&",
  [anon_sym_COLON_AMP_AMP_AMP] = ":&&&",
  [anon_sym_COLON_STAR] = ":*",
  [anon_sym_COLON_PLUS] = ":+",
  [anon_sym_COLON_PLUS_PLUS] = ":++",
  [anon_sym_COLON_DASH] = ":-",
  [anon_sym_COLON_DASH_DASH] = ":--",
  [anon_sym_COLON_DOT] = ":.",
  [anon_sym_COLON_DOT_DOT] = ":..",
  [anon_sym_COLON_SLASH] = ":/",
  [anon_sym_COLON_COLON_COLON] = ":::",
  [anon_sym_COLON_LT] = ":<",
  [anon_sym_COLON_LT_DASH] = ":<-",
  [anon_sym_COLON_LT_LT_LT] = ":<<<",
  [anon_sym_COLON_LT_LT_TILDE] = ":<<~",
  [anon_sym_COLON_LT_EQ] = ":<=",
  [anon_sym_COLON_LT_GT] = ":<>",
  [anon_sym_COLON_LT_PIPE_GT] = ":<|>",
  [anon_sym_COLON_LT_TILDE] = ":<~",
  [anon_sym_COLON_LT_TILDE_GT] = ":<~>",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_COLON_EQ_EQ] = ":==",
  [anon_sym_COLON_EQ_EQ_EQ] = ":===",
  [anon_sym_COLON_EQ_GT] = ":=>",
  [anon_sym_COLON_EQ_TILDE] = ":=~",
  [anon_sym_COLON_GT] = ":>",
  [anon_sym_COLON_GT_EQ] = ":>=",
  [anon_sym_COLON_GT_GT_GT] = ":>>>",
  [anon_sym_COLON_AT] = ":@",
  [anon_sym_COLON_BSLASH_BSLASH] = ":\\\\",
  [anon_sym_COLON_CARET] = ":^",
  [anon_sym_COLON_PIPE] = ":|",
  [anon_sym_COLON_PIPE_GT] = ":|>",
  [anon_sym_COLON_PIPE_PIPE] = ":||",
  [anon_sym_COLON_PIPE_PIPE_PIPE] = ":|||",
  [anon_sym_COLON_TILDE_GT] = ":~>",
  [anon_sym_COLON_TILDE_GT_GT] = ":~>>",
  [anon_sym_COLON_TILDE_TILDE_TILDE] = ":~~~",
  [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = "/\\w+: /",
  [anon_sym_nil] = "nil",
  [anon_sym_COLONnil] = ":nil",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = "/\\\\'|[^']/",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_COLON_COLON] = "::",
  [sym_binary_options] = "binary_options",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = "/\\\\\"|[^\"]/",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PIPE] = "|",
  [anon_sym_PERCENT_LBRACE] = "%{",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_PERCENT] = "%",
  [anon_sym_defmodule] = "defmodule",
  [anon_sym_do] = "do",
  [anon_sym_end] = "end",
  [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = "/@\\w+/",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym__expression] = "_expression",
  [sym__value] = "_value",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_atom] = "atom",
  [sym__operator_atom] = "_operator_atom",
  [sym_keyword] = "keyword",
  [sym_nil] = "nil",
  [sym_charlist] = "charlist",
  [sym_binary] = "binary",
  [sym_binary_segment] = "binary_segment",
  [sym_string] = "string",
  [sym_tuple] = "tuple",
  [sym__list_or_keyword_list] = "_list_or_keyword_list",
  [sym_list] = "list",
  [sym__empty_list] = "_empty_list",
  [sym__simple_list] = "_simple_list",
  [sym__head_tail_list] = "_head_tail_list",
  [sym_head] = "head",
  [sym_tail] = "tail",
  [sym_keyword_list] = "keyword_list",
  [sym_map] = "map",
  [sym__empty_map] = "_empty_map",
  [sym__map] = "_map",
  [sym_pair] = "pair",
  [sym_struct] = "struct",
  [sym__empty_struct_body] = "_empty_struct_body",
  [sym__struct_body] = "_struct_body",
  [sym_implicit_keyword_list] = "implicit_keyword_list",
  [sym_module] = "module",
  [sym_module_attribute] = "module_attribute",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_charlist_repeat1] = "charlist_repeat1",
  [aux_sym_binary_repeat1] = "binary_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym_keyword_list_repeat1] = "keyword_list_repeat1",
  [aux_sym__map_repeat1] = "_map_repeat1",
  [aux_sym_module_repeat1] = "module_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONtrue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONfalse] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_BANG_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_AMP_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_LT_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_LT_LT_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_LT_PIPE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_LT_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_LT_TILDE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_GT_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_BSLASH_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_PIPE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_PIPE_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_TILDE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_TILDE_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_TILDE_TILDE_TILDE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_nil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONnil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_binary_options] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = {
    .visible = false,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defmodule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
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
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym__operator_atom] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [sym_charlist] = {
    .visible = true,
    .named = true,
  },
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_segment] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym__list_or_keyword_list] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym__empty_list] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_list] = {
    .visible = false,
    .named = true,
  },
  [sym__head_tail_list] = {
    .visible = false,
    .named = true,
  },
  [sym_head] = {
    .visible = true,
    .named = true,
  },
  [sym_tail] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_list] = {
    .visible = true,
    .named = true,
  },
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [sym__empty_map] = {
    .visible = false,
    .named = true,
  },
  [sym__map] = {
    .visible = false,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_struct] = {
    .visible = true,
    .named = true,
  },
  [sym__empty_struct_body] = {
    .visible = false,
    .named = true,
  },
  [sym__struct_body] = {
    .visible = false,
    .named = true,
  },
  [sym_implicit_keyword_list] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_module_attribute] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_charlist_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__map_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '0')
        ADVANCE(8);
      if (lookahead == ':')
        ADVANCE(25);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '=')
        ADVANCE(95);
      if (lookahead == '>')
        ADVANCE(97);
      if (lookahead == '@')
        ADVANCE(99);
      if (lookahead == '[')
        ADVANCE(101);
      if (lookahead == '\\')
        SKIP(102);
      if (lookahead == ']')
        ADVANCE(103);
      if (lookahead == 'd')
        ADVANCE(104);
      if (lookahead == 'e')
        ADVANCE(114);
      if (lookahead == 'f')
        ADVANCE(117);
      if (lookahead == 'n')
        ADVANCE(122);
      if (lookahead == 't')
        ADVANCE(125);
      if (lookahead == '{')
        ADVANCE(129);
      if (lookahead == '|')
        ADVANCE(130);
      if (lookahead == '}')
        ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(132);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '{')
        ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_PERCENT_LBRACE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == '_')
        ADVANCE(16);
      if (lookahead == 'b')
        ADVANCE(19);
      if (lookahead == 'o')
        ADVANCE(21);
      if (lookahead == 'x')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_')
        ADVANCE(9);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == ' ')
        ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH);
      END_STATE();
    case 16:
      if (lookahead == ':')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == '_')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == ':')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(20);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == '_')
        ADVANCE(19);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(20);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == ':')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(22);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == '_')
        ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(22);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == ':')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(24);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == '_')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(24);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 25:
      if (lookahead == '!')
        ADVANCE(26);
      if (lookahead == '\"')
        ADVANCE(29);
      if (lookahead == '&')
        ADVANCE(31);
      if (lookahead == '\'')
        ADVANCE(34);
      if (lookahead == '*')
        ADVANCE(36);
      if (lookahead == '+')
        ADVANCE(37);
      if (lookahead == '-')
        ADVANCE(39);
      if (lookahead == '.')
        ADVANCE(41);
      if (lookahead == '/')
        ADVANCE(43);
      if (lookahead == ':')
        ADVANCE(44);
      if (lookahead == '<')
        ADVANCE(46);
      if (lookahead == '=')
        ADVANCE(57);
      if (lookahead == '>')
        ADVANCE(62);
      if (lookahead == '@')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == 'f')
        ADVANCE(70);
      if (lookahead == 'n')
        ADVANCE(77);
      if (lookahead == 't')
        ADVANCE(80);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '~')
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON_BANG);
      if (lookahead == '=')
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLON_BANG_EQ);
      if (lookahead == '=')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON_BANG_EQ_EQ);
      END_STATE();
    case 29:
      if (lookahead == '\"')
        ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '\"')
        ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(29);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COLON_AMP);
      if (lookahead == '&')
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON_AMP_AMP);
      if (lookahead == '&')
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON_AMP_AMP_AMP);
      END_STATE();
    case 34:
      if (lookahead == '\'')
        ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '\'')
        ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(34);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COLON_STAR);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      if (lookahead == '+')
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS_PLUS);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      if (lookahead == '-')
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COLON_DASH_DASH);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLON_DOT);
      if (lookahead == '.')
        ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLON_DOT_DOT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == ':')
        ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_COLON);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COLON_LT);
      if (lookahead == '-')
        ADVANCE(47);
      if (lookahead == '<')
        ADVANCE(48);
      if (lookahead == '=')
        ADVANCE(51);
      if (lookahead == '>')
        ADVANCE(52);
      if (lookahead == '|')
        ADVANCE(53);
      if (lookahead == '~')
        ADVANCE(55);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COLON_LT_DASH);
      END_STATE();
    case 48:
      if (lookahead == '<')
        ADVANCE(49);
      if (lookahead == '~')
        ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON_LT_LT_LT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COLON_LT_LT_TILDE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COLON_LT_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COLON_LT_GT);
      END_STATE();
    case 53:
      if (lookahead == '>')
        ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COLON_LT_PIPE_GT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COLON_LT_TILDE);
      if (lookahead == '>')
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COLON_LT_TILDE_GT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      if (lookahead == '=')
        ADVANCE(58);
      if (lookahead == '>')
        ADVANCE(60);
      if (lookahead == '~')
        ADVANCE(61);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON_EQ_EQ);
      if (lookahead == '=')
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COLON_EQ_EQ_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_COLON_EQ_GT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COLON_EQ_TILDE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      if (lookahead == '=')
        ADVANCE(63);
      if (lookahead == '>')
        ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COLON_GT_EQ);
      END_STATE();
    case 64:
      if (lookahead == '>')
        ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COLON_GT_GT_GT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COLON_AT);
      END_STATE();
    case 67:
      if (lookahead == '\\')
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COLON_BSLASH_BSLASH);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLON_CARET);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(71);
      if (lookahead == '?')
        ADVANCE(71);
      if (lookahead == 'a')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(71);
      if (lookahead == '?')
        ADVANCE(71);
      if (lookahead == 'l')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(71);
      if (lookahead == '?')
        ADVANCE(71);
      if (lookahead == 's')
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(71);
      if (lookahead == '?')
        ADVANCE(71);
      if (lookahead == 'e')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COLONfalse);
      if (lookahead == '!')
        ADVANCE(71);
      if (lookahead == '?')
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(71);
      if (lookahead == '?')
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(71);
      if (lookahead == '?')
        ADVANCE(71);
      if (lookahead == 'i')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(71);
      if (lookahead == '?')
        ADVANCE(71);
      if (lookahead == 'l')
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COLONnil);
      if (lookahead == '!')
        ADVANCE(71);
      if (lookahead == '?')
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(71);
      if (lookahead == '?')
        ADVANCE(71);
      if (lookahead == 'r')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(71);
      if (lookahead == '?')
        ADVANCE(71);
      if (lookahead == 'u')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(71);
      if (lookahead == '?')
        ADVANCE(71);
      if (lookahead == 'e')
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COLONtrue);
      if (lookahead == '!')
        ADVANCE(71);
      if (lookahead == '?')
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COLON_PIPE);
      if (lookahead == '>')
        ADVANCE(85);
      if (lookahead == '|')
        ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COLON_PIPE_GT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COLON_PIPE_PIPE);
      if (lookahead == '|')
        ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COLON_PIPE_PIPE_PIPE);
      END_STATE();
    case 88:
      if (lookahead == '>')
        ADVANCE(89);
      if (lookahead == '~')
        ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_COLON_TILDE_GT);
      if (lookahead == '>')
        ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COLON_TILDE_GT_GT);
      END_STATE();
    case 91:
      if (lookahead == '~')
        ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COLON_TILDE_TILDE_TILDE);
      END_STATE();
    case 93:
      if (lookahead == '<')
        ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 95:
      if (lookahead == '>')
        ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 97:
      if (lookahead == '>')
        ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 102:
      if (lookahead == '\n')
        SKIP(0);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 104:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'e')
        ADVANCE(105);
      if (lookahead == 'o')
        ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 105:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'f')
        ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 106:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'm')
        ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 107:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'o')
        ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 108:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'd')
        ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 109:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'u')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 110:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'l')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 111:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'e')
        ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_defmodule);
      if (lookahead == ':')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == ':')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 114:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'n')
        ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 115:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'd')
        ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ':')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 117:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'a')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 118:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'l')
        ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 119:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 's')
        ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 120:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'e')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ':')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 122:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'i')
        ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 123:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'l')
        ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_nil);
      if (lookahead == ':')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 125:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'r')
        ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 126:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'u')
        ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 127:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'e')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ':')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead == '.')
        ADVANCE(133);
      if (lookahead == ':')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 133:
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead == '.')
        ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(134);
      END_STATE();
    case 135:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(136);
      if (lookahead == ':')
        ADVANCE(145);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '[')
        ADVANCE(101);
      if (lookahead == '\\')
        SKIP(147);
      if (lookahead == 'd')
        ADVANCE(148);
      if (lookahead == 'f')
        ADVANCE(157);
      if (lookahead == 'n')
        ADVANCE(162);
      if (lookahead == 't')
        ADVANCE(165);
      if (lookahead == '{')
        ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(135);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '_')
        ADVANCE(137);
      if (lookahead == 'b')
        ADVANCE(139);
      if (lookahead == 'o')
        ADVANCE(141);
      if (lookahead == 'x')
        ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(138);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '_')
        ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(138);
      END_STATE();
    case 139:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(139);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(140);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(142);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(144);
      END_STATE();
    case 145:
      if (lookahead == '!')
        ADVANCE(26);
      if (lookahead == '\"')
        ADVANCE(29);
      if (lookahead == '&')
        ADVANCE(31);
      if (lookahead == '\'')
        ADVANCE(34);
      if (lookahead == '*')
        ADVANCE(36);
      if (lookahead == '+')
        ADVANCE(37);
      if (lookahead == '-')
        ADVANCE(39);
      if (lookahead == '.')
        ADVANCE(41);
      if (lookahead == '/')
        ADVANCE(43);
      if (lookahead == ':')
        ADVANCE(146);
      if (lookahead == '<')
        ADVANCE(46);
      if (lookahead == '=')
        ADVANCE(57);
      if (lookahead == '>')
        ADVANCE(62);
      if (lookahead == '@')
        ADVANCE(66);
      if (lookahead == '\\')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(69);
      if (lookahead == 'f')
        ADVANCE(70);
      if (lookahead == 'n')
        ADVANCE(77);
      if (lookahead == 't')
        ADVANCE(80);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '~')
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 146:
      if (lookahead == ':')
        ADVANCE(45);
      END_STATE();
    case 147:
      if (lookahead == '\n')
        SKIP(135);
      END_STATE();
    case 148:
      if (lookahead == 'e')
        ADVANCE(149);
      END_STATE();
    case 149:
      if (lookahead == 'f')
        ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'm')
        ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == 'o')
        ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 'd')
        ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == 'u')
        ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == 'l')
        ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == 'e')
        ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_defmodule);
      END_STATE();
    case 157:
      if (lookahead == 'a')
        ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == 'l')
        ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 's')
        ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 'e')
        ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 162:
      if (lookahead == 'i')
        ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == 'l')
        ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 165:
      if (lookahead == 'r')
        ADVANCE(166);
      END_STATE();
    case 166:
      if (lookahead == 'u')
        ADVANCE(167);
      END_STATE();
    case 167:
      if (lookahead == 'e')
        ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 169:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '0')
        ADVANCE(136);
      if (lookahead == ':')
        ADVANCE(145);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '=')
        ADVANCE(95);
      if (lookahead == '@')
        ADVANCE(99);
      if (lookahead == '[')
        ADVANCE(101);
      if (lookahead == '\\')
        SKIP(170);
      if (lookahead == ']')
        ADVANCE(103);
      if (lookahead == 'd')
        ADVANCE(148);
      if (lookahead == 'e')
        ADVANCE(171);
      if (lookahead == 'f')
        ADVANCE(157);
      if (lookahead == 'n')
        ADVANCE(162);
      if (lookahead == 't')
        ADVANCE(165);
      if (lookahead == '{')
        ADVANCE(129);
      if (lookahead == '|')
        ADVANCE(130);
      if (lookahead == '}')
        ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(169);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(134);
      END_STATE();
    case 170:
      if (lookahead == '\n')
        SKIP(169);
      END_STATE();
    case 171:
      if (lookahead == 'n')
        ADVANCE(172);
      END_STATE();
    case 172:
      if (lookahead == 'd')
        ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 174:
      if (lookahead == '#')
        ADVANCE(175);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '\\')
        ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(177);
      if (lookahead != 0)
        ADVANCE(177);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead == '\'')
        ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      END_STATE();
    case 178:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(179);
      if (lookahead == '>')
        ADVANCE(97);
      if (lookahead == '\\')
        SKIP(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(178);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(181);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(180);
      if (lookahead == 'b')
        ADVANCE(139);
      if (lookahead == 'o')
        ADVANCE(141);
      if (lookahead == 'x')
        ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(181);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(181);
      END_STATE();
    case 182:
      if (lookahead == '\n')
        SKIP(178);
      END_STATE();
    case 183:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(186);
      if (lookahead != 0)
        ADVANCE(186);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(186);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 187:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(136);
      if (lookahead == ':')
        ADVANCE(145);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '[')
        ADVANCE(101);
      if (lookahead == '\\')
        SKIP(188);
      if (lookahead == 'd')
        ADVANCE(148);
      if (lookahead == 'f')
        ADVANCE(157);
      if (lookahead == 'n')
        ADVANCE(162);
      if (lookahead == 't')
        ADVANCE(165);
      if (lookahead == '{')
        ADVANCE(129);
      if (lookahead == '}')
        ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(187);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(134);
      END_STATE();
    case 188:
      if (lookahead == '\n')
        SKIP(187);
      END_STATE();
    case 189:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(8);
      if (lookahead == ':')
        ADVANCE(145);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '[')
        ADVANCE(101);
      if (lookahead == '\\')
        SKIP(190);
      if (lookahead == ']')
        ADVANCE(103);
      if (lookahead == 'd')
        ADVANCE(191);
      if (lookahead == 'f')
        ADVANCE(117);
      if (lookahead == 'n')
        ADVANCE(122);
      if (lookahead == 't')
        ADVANCE(125);
      if (lookahead == '{')
        ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(189);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(132);
      END_STATE();
    case 190:
      if (lookahead == '\n')
        SKIP(189);
      END_STATE();
    case 191:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'e')
        ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 192:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(192);
      END_STATE();
    case 193:
      if (lookahead == '\n')
        SKIP(192);
      END_STATE();
    case 194:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '0')
        ADVANCE(136);
      if (lookahead == ':')
        ADVANCE(25);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '=')
        ADVANCE(95);
      if (lookahead == '>')
        ADVANCE(97);
      if (lookahead == '@')
        ADVANCE(99);
      if (lookahead == '[')
        ADVANCE(101);
      if (lookahead == '\\')
        SKIP(195);
      if (lookahead == ']')
        ADVANCE(103);
      if (lookahead == 'd')
        ADVANCE(148);
      if (lookahead == 'e')
        ADVANCE(171);
      if (lookahead == 'f')
        ADVANCE(157);
      if (lookahead == 'n')
        ADVANCE(162);
      if (lookahead == 't')
        ADVANCE(165);
      if (lookahead == '{')
        ADVANCE(129);
      if (lookahead == '|')
        ADVANCE(130);
      if (lookahead == '}')
        ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(194);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(134);
      END_STATE();
    case 195:
      if (lookahead == '\n')
        SKIP(194);
      END_STATE();
    case 196:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(197);
      if (lookahead == '>')
        ADVANCE(97);
      if (lookahead == '\\')
        SKIP(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(196);
      END_STATE();
    case 197:
      if (lookahead == ':')
        ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 199:
      if (lookahead == '\n')
        SKIP(196);
      END_STATE();
    case 200:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '\\')
        SKIP(201);
      if (lookahead == '}')
        ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(200);
      END_STATE();
    case 201:
      if (lookahead == '\n')
        SKIP(200);
      END_STATE();
    case 202:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '\\')
        SKIP(203);
      if (lookahead == ']')
        ADVANCE(103);
      if (lookahead == '|')
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(202);
      END_STATE();
    case 203:
      if (lookahead == '\n')
        SKIP(202);
      END_STATE();
    case 204:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '=')
        ADVANCE(95);
      if (lookahead == '\\')
        SKIP(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(204);
      END_STATE();
    case 205:
      if (lookahead == '\n')
        SKIP(204);
      END_STATE();
    case 206:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(207);
      if (lookahead == 'd')
        ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(206);
      END_STATE();
    case 207:
      if (lookahead == '\n')
        SKIP(206);
      END_STATE();
    case 208:
      if (lookahead == 'o')
        ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_binary_options);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(210);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 211:
      if (lookahead == '\n')
        SKIP(210);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_binary_options);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 213:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(8);
      if (lookahead == ':')
        ADVANCE(145);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '[')
        ADVANCE(101);
      if (lookahead == '\\')
        SKIP(214);
      if (lookahead == 'd')
        ADVANCE(191);
      if (lookahead == 'f')
        ADVANCE(117);
      if (lookahead == 'n')
        ADVANCE(122);
      if (lookahead == 't')
        ADVANCE(125);
      if (lookahead == '{')
        ADVANCE(129);
      if (lookahead == '}')
        ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(213);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(132);
      END_STATE();
    case 214:
      if (lookahead == '\n')
        SKIP(213);
      END_STATE();
    case 215:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '@')
        ADVANCE(99);
      if (lookahead == '\\')
        SKIP(216);
      if (lookahead == ']')
        ADVANCE(103);
      if (lookahead == 'e')
        ADVANCE(171);
      if (lookahead == '}')
        ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(215);
      END_STATE();
    case 216:
      if (lookahead == '\n')
        SKIP(215);
      END_STATE();
    case 217:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '@')
        ADVANCE(99);
      if (lookahead == '\\')
        SKIP(218);
      if (lookahead == 'e')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(217);
      END_STATE();
    case 218:
      if (lookahead == '\n')
        SKIP(217);
      END_STATE();
    case 219:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '\\')
        SKIP(220);
      if (lookahead == ']')
        ADVANCE(103);
      if (lookahead == '}')
        ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(219);
      END_STATE();
    case 220:
      if (lookahead == '\n')
        SKIP(219);
      END_STATE();
    case 221:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(8);
      if (lookahead == ':')
        ADVANCE(145);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '@')
        ADVANCE(99);
      if (lookahead == '[')
        ADVANCE(101);
      if (lookahead == '\\')
        SKIP(222);
      if (lookahead == 'd')
        ADVANCE(191);
      if (lookahead == 'e')
        ADVANCE(114);
      if (lookahead == 'f')
        ADVANCE(117);
      if (lookahead == 'n')
        ADVANCE(122);
      if (lookahead == 't')
        ADVANCE(125);
      if (lookahead == '{')
        ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(221);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(132);
      END_STATE();
    case 222:
      if (lookahead == '\n')
        SKIP(221);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 135},
  [2] = {.lex_state = 169},
  [3] = {.lex_state = 169},
  [4] = {.lex_state = 169},
  [5] = {.lex_state = 169},
  [6] = {.lex_state = 174},
  [7] = {.lex_state = 178},
  [8] = {.lex_state = 183},
  [9] = {.lex_state = 187},
  [10] = {.lex_state = 189},
  [11] = {.lex_state = 187},
  [12] = {.lex_state = 135},
  [13] = {.lex_state = 135},
  [14] = {.lex_state = 192},
  [15] = {.lex_state = 169},
  [16] = {.lex_state = 169},
  [17] = {.lex_state = 135},
  [18] = {.lex_state = 194},
  [19] = {.lex_state = 174},
  [20] = {.lex_state = 196},
  [21] = {.lex_state = 169},
  [22] = {.lex_state = 196},
  [23] = {.lex_state = 194},
  [24] = {.lex_state = 183},
  [25] = {.lex_state = 169},
  [26] = {.lex_state = 200},
  [27] = {.lex_state = 135},
  [28] = {.lex_state = 169},
  [29] = {.lex_state = 202},
  [30] = {.lex_state = 202},
  [31] = {.lex_state = 202},
  [32] = {.lex_state = 169},
  [33] = {.lex_state = 204},
  [34] = {.lex_state = 200},
  [35] = {.lex_state = 135},
  [36] = {.lex_state = 206},
  [37] = {.lex_state = 135},
  [38] = {.lex_state = 194},
  [39] = {.lex_state = 174},
  [40] = {.lex_state = 210},
  [41] = {.lex_state = 178},
  [42] = {.lex_state = 169},
  [43] = {.lex_state = 196},
  [44] = {.lex_state = 194},
  [45] = {.lex_state = 183},
  [46] = {.lex_state = 213},
  [47] = {.lex_state = 169},
  [48] = {.lex_state = 200},
  [49] = {.lex_state = 215},
  [50] = {.lex_state = 189},
  [51] = {.lex_state = 169},
  [52] = {.lex_state = 202},
  [53] = {.lex_state = 189},
  [54] = {.lex_state = 169},
  [55] = {.lex_state = 202},
  [56] = {.lex_state = 135},
  [57] = {.lex_state = 135},
  [58] = {.lex_state = 187},
  [59] = {.lex_state = 169},
  [60] = {.lex_state = 200},
  [61] = {.lex_state = 187},
  [62] = {.lex_state = 169},
  [63] = {.lex_state = 217},
  [64] = {.lex_state = 196},
  [65] = {.lex_state = 169},
  [66] = {.lex_state = 196},
  [67] = {.lex_state = 178},
  [68] = {.lex_state = 196},
  [69] = {.lex_state = 169},
  [70] = {.lex_state = 219},
  [71] = {.lex_state = 200},
  [72] = {.lex_state = 200},
  [73] = {.lex_state = 213},
  [74] = {.lex_state = 200},
  [75] = {.lex_state = 169},
  [76] = {.lex_state = 202},
  [77] = {.lex_state = 202},
  [78] = {.lex_state = 189},
  [79] = {.lex_state = 202},
  [80] = {.lex_state = 169},
  [81] = {.lex_state = 215},
  [82] = {.lex_state = 189},
  [83] = {.lex_state = 202},
  [84] = {.lex_state = 189},
  [85] = {.lex_state = 189},
  [86] = {.lex_state = 200},
  [87] = {.lex_state = 169},
  [88] = {.lex_state = 200},
  [89] = {.lex_state = 187},
  [90] = {.lex_state = 200},
  [91] = {.lex_state = 169},
  [92] = {.lex_state = 200},
  [93] = {.lex_state = 169},
  [94] = {.lex_state = 221},
  [95] = {.lex_state = 217},
  [96] = {.lex_state = 169},
  [97] = {.lex_state = 135},
  [98] = {.lex_state = 189},
  [99] = {.lex_state = 200},
  [100] = {.lex_state = 187},
  [101] = {.lex_state = 169},
  [102] = {.lex_state = 200},
  [103] = {.lex_state = 135},
  [104] = {.lex_state = 202},
  [105] = {.lex_state = 189},
  [106] = {.lex_state = 169},
  [107] = {.lex_state = 202},
  [108] = {.lex_state = 169},
  [109] = {.lex_state = 169},
  [110] = {.lex_state = 169},
  [111] = {.lex_state = 135},
  [112] = {.lex_state = 187},
  [113] = {.lex_state = 169},
  [114] = {.lex_state = 200},
  [115] = {.lex_state = 217},
  [116] = {.lex_state = 217},
  [117] = {.lex_state = 169},
  [118] = {.lex_state = 217},
  [119] = {.lex_state = 200},
  [120] = {.lex_state = 169},
  [121] = {.lex_state = 187},
  [122] = {.lex_state = 169},
  [123] = {.lex_state = 189},
  [124] = {.lex_state = 169},
  [125] = {.lex_state = 187},
  [126] = {.lex_state = 217},
  [127] = {.lex_state = 169},
  [128] = {.lex_state = 169},
  [129] = {.lex_state = 169},
  [130] = {.lex_state = 217},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_alias] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(3),
    [anon_sym_COLONtrue] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(3),
    [anon_sym_COLONfalse] = ACTIONS(3),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(3),
    [anon_sym_COLON_BANG] = ACTIONS(3),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(3),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(1),
    [anon_sym_COLON_AMP] = ACTIONS(3),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(3),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(1),
    [anon_sym_COLON_STAR] = ACTIONS(1),
    [anon_sym_COLON_PLUS] = ACTIONS(3),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(3),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(1),
    [anon_sym_COLON_DOT] = ACTIONS(3),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(1),
    [anon_sym_COLON_SLASH] = ACTIONS(1),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(1),
    [anon_sym_COLON_LT] = ACTIONS(3),
    [anon_sym_COLON_LT_DASH] = ACTIONS(1),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(1),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(1),
    [anon_sym_COLON_LT_EQ] = ACTIONS(1),
    [anon_sym_COLON_LT_GT] = ACTIONS(1),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(1),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(3),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(3),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(3),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_COLON_EQ_GT] = ACTIONS(1),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(1),
    [anon_sym_COLON_GT] = ACTIONS(3),
    [anon_sym_COLON_GT_EQ] = ACTIONS(1),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(1),
    [anon_sym_COLON_AT] = ACTIONS(1),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_COLON_CARET] = ACTIONS(1),
    [anon_sym_COLON_PIPE] = ACTIONS(3),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(1),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(3),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(3),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(1),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(1),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(3),
    [anon_sym_COLONnil] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(3),
    [anon_sym_defmodule] = ACTIONS(3),
    [anon_sym_do] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(3),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(14),
    [sym__expression] = STATE(17),
    [sym__value] = STATE(17),
    [sym_true] = STATE(17),
    [sym_false] = STATE(17),
    [sym_atom] = STATE(17),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(17),
    [sym_charlist] = STATE(17),
    [sym_binary] = STATE(17),
    [sym_string] = STATE(17),
    [sym_tuple] = STATE(17),
    [sym__list_or_keyword_list] = STATE(17),
    [sym_list] = STATE(17),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(17),
    [sym_map] = STATE(17),
    [sym__empty_map] = STATE(16),
    [sym__map] = STATE(16),
    [sym_struct] = STATE(17),
    [sym_module] = STATE(17),
    [aux_sym_program_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_alias] = ACTIONS(7),
    [sym_integer] = ACTIONS(9),
    [sym_float] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(19),
    [anon_sym_COLON_BANG] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(21),
    [anon_sym_COLON_STAR] = ACTIONS(21),
    [anon_sym_COLON_PLUS] = ACTIONS(19),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(21),
    [anon_sym_COLON_DASH] = ACTIONS(19),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(21),
    [anon_sym_COLON_DOT] = ACTIONS(19),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(21),
    [anon_sym_COLON_SLASH] = ACTIONS(21),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(21),
    [anon_sym_COLON_LT] = ACTIONS(19),
    [anon_sym_COLON_LT_DASH] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(21),
    [anon_sym_COLON_LT_EQ] = ACTIONS(21),
    [anon_sym_COLON_LT_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(19),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_EQ_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(21),
    [anon_sym_COLON_GT] = ACTIONS(19),
    [anon_sym_COLON_GT_EQ] = ACTIONS(21),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_AT] = ACTIONS(21),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_COLON_CARET] = ACTIONS(21),
    [anon_sym_COLON_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(19),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(21),
    [anon_sym_nil] = ACTIONS(23),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(41),
    [sym_comment] = ACTIONS(43),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_alias] = ACTIONS(45),
    [sym_integer] = ACTIONS(47),
    [sym_float] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_COLONtrue] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_COLONfalse] = ACTIONS(47),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(47),
    [anon_sym_COLON_BANG] = ACTIONS(47),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(47),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(45),
    [anon_sym_COLON_AMP] = ACTIONS(47),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(47),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(45),
    [anon_sym_COLON_STAR] = ACTIONS(45),
    [anon_sym_COLON_PLUS] = ACTIONS(47),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(45),
    [anon_sym_COLON_DASH] = ACTIONS(47),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(45),
    [anon_sym_COLON_DOT] = ACTIONS(47),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(45),
    [anon_sym_COLON_SLASH] = ACTIONS(45),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(45),
    [anon_sym_COLON_LT] = ACTIONS(47),
    [anon_sym_COLON_LT_DASH] = ACTIONS(45),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(45),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(45),
    [anon_sym_COLON_LT_EQ] = ACTIONS(45),
    [anon_sym_COLON_LT_GT] = ACTIONS(45),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(45),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(47),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(45),
    [anon_sym_COLON_EQ] = ACTIONS(47),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(47),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(45),
    [anon_sym_COLON_EQ_GT] = ACTIONS(45),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(45),
    [anon_sym_COLON_GT] = ACTIONS(47),
    [anon_sym_COLON_GT_EQ] = ACTIONS(45),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(45),
    [anon_sym_COLON_AT] = ACTIONS(45),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(45),
    [anon_sym_COLON_CARET] = ACTIONS(45),
    [anon_sym_COLON_PIPE] = ACTIONS(47),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(45),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(47),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(45),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(47),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(45),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(45),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_COLONnil] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_LT_LT] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(45),
    [anon_sym_PIPE] = ACTIONS(45),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(45),
    [anon_sym_EQ_GT] = ACTIONS(45),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_defmodule] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(45),
    [sym_comment] = ACTIONS(43),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_alias] = ACTIONS(49),
    [sym_integer] = ACTIONS(51),
    [sym_float] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_COLONtrue] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_COLONfalse] = ACTIONS(51),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(51),
    [anon_sym_COLON_BANG] = ACTIONS(51),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(51),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(49),
    [anon_sym_COLON_AMP] = ACTIONS(51),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(51),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(49),
    [anon_sym_COLON_STAR] = ACTIONS(49),
    [anon_sym_COLON_PLUS] = ACTIONS(51),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_COLON_DASH] = ACTIONS(51),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(49),
    [anon_sym_COLON_DOT] = ACTIONS(51),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(49),
    [anon_sym_COLON_SLASH] = ACTIONS(49),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(49),
    [anon_sym_COLON_LT] = ACTIONS(51),
    [anon_sym_COLON_LT_DASH] = ACTIONS(49),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(49),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(49),
    [anon_sym_COLON_LT_EQ] = ACTIONS(49),
    [anon_sym_COLON_LT_GT] = ACTIONS(49),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(49),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(51),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(49),
    [anon_sym_COLON_EQ] = ACTIONS(51),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(51),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(49),
    [anon_sym_COLON_EQ_GT] = ACTIONS(49),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(49),
    [anon_sym_COLON_GT] = ACTIONS(51),
    [anon_sym_COLON_GT_EQ] = ACTIONS(49),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(49),
    [anon_sym_COLON_AT] = ACTIONS(49),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_COLON_CARET] = ACTIONS(49),
    [anon_sym_COLON_PIPE] = ACTIONS(51),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(49),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(51),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(51),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(49),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(49),
    [anon_sym_nil] = ACTIONS(49),
    [anon_sym_COLONnil] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [anon_sym_LT_LT] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(49),
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(49),
    [anon_sym_EQ_GT] = ACTIONS(49),
    [anon_sym_PERCENT] = ACTIONS(51),
    [anon_sym_defmodule] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(49),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(49),
    [sym_comment] = ACTIONS(43),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_alias] = ACTIONS(53),
    [sym_integer] = ACTIONS(55),
    [sym_float] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_COLONtrue] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_COLONfalse] = ACTIONS(55),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(55),
    [anon_sym_COLON_BANG] = ACTIONS(55),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(55),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(53),
    [anon_sym_COLON_AMP] = ACTIONS(55),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(55),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(53),
    [anon_sym_COLON_STAR] = ACTIONS(53),
    [anon_sym_COLON_PLUS] = ACTIONS(55),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(53),
    [anon_sym_COLON_DASH] = ACTIONS(55),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(53),
    [anon_sym_COLON_DOT] = ACTIONS(55),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(53),
    [anon_sym_COLON_SLASH] = ACTIONS(53),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(53),
    [anon_sym_COLON_LT] = ACTIONS(55),
    [anon_sym_COLON_LT_DASH] = ACTIONS(53),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(53),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(53),
    [anon_sym_COLON_LT_EQ] = ACTIONS(53),
    [anon_sym_COLON_LT_GT] = ACTIONS(53),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(53),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(55),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(53),
    [anon_sym_COLON_EQ] = ACTIONS(55),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(55),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(53),
    [anon_sym_COLON_EQ_GT] = ACTIONS(53),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(53),
    [anon_sym_COLON_GT] = ACTIONS(55),
    [anon_sym_COLON_GT_EQ] = ACTIONS(53),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(53),
    [anon_sym_COLON_AT] = ACTIONS(53),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(53),
    [anon_sym_COLON_CARET] = ACTIONS(53),
    [anon_sym_COLON_PIPE] = ACTIONS(55),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(53),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(55),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(53),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(55),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(53),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(53),
    [anon_sym_nil] = ACTIONS(53),
    [anon_sym_COLONnil] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(53),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(53),
    [anon_sym_EQ_GT] = ACTIONS(53),
    [anon_sym_PERCENT] = ACTIONS(55),
    [anon_sym_defmodule] = ACTIONS(53),
    [anon_sym_end] = ACTIONS(53),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(53),
    [sym_comment] = ACTIONS(43),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_alias] = ACTIONS(57),
    [sym_integer] = ACTIONS(59),
    [sym_float] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_COLONtrue] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_COLONfalse] = ACTIONS(59),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(59),
    [anon_sym_COLON_BANG] = ACTIONS(59),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(59),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(57),
    [anon_sym_COLON_AMP] = ACTIONS(59),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(59),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(57),
    [anon_sym_COLON_STAR] = ACTIONS(57),
    [anon_sym_COLON_PLUS] = ACTIONS(59),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(57),
    [anon_sym_COLON_DASH] = ACTIONS(59),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(57),
    [anon_sym_COLON_DOT] = ACTIONS(59),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(57),
    [anon_sym_COLON_SLASH] = ACTIONS(57),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(57),
    [anon_sym_COLON_LT] = ACTIONS(59),
    [anon_sym_COLON_LT_DASH] = ACTIONS(57),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(57),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(57),
    [anon_sym_COLON_LT_EQ] = ACTIONS(57),
    [anon_sym_COLON_LT_GT] = ACTIONS(57),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(57),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(59),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(57),
    [anon_sym_COLON_EQ] = ACTIONS(59),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(59),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(57),
    [anon_sym_COLON_EQ_GT] = ACTIONS(57),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(57),
    [anon_sym_COLON_GT] = ACTIONS(59),
    [anon_sym_COLON_GT_EQ] = ACTIONS(57),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(57),
    [anon_sym_COLON_AT] = ACTIONS(57),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(57),
    [anon_sym_COLON_CARET] = ACTIONS(57),
    [anon_sym_COLON_PIPE] = ACTIONS(59),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(57),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(59),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(57),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(59),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(57),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(57),
    [anon_sym_nil] = ACTIONS(57),
    [anon_sym_COLONnil] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_LT_LT] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_RBRACK] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(57),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(57),
    [anon_sym_EQ_GT] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_defmodule] = ACTIONS(57),
    [anon_sym_end] = ACTIONS(57),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(57),
    [sym_comment] = ACTIONS(43),
  },
  [6] = {
    [aux_sym_charlist_repeat1] = STATE(19),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(63),
    [sym_comment] = ACTIONS(65),
  },
  [7] = {
    [sym_charlist] = STATE(20),
    [sym_binary_segment] = STATE(22),
    [sym_string] = STATE(20),
    [sym_integer] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_GT_GT] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(43),
  },
  [8] = {
    [aux_sym_string_repeat1] = STATE(24),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(73),
    [sym_comment] = ACTIONS(65),
  },
  [9] = {
    [sym__expression] = STATE(26),
    [sym__value] = STATE(26),
    [sym_true] = STATE(26),
    [sym_false] = STATE(26),
    [sym_atom] = STATE(26),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(26),
    [sym_charlist] = STATE(26),
    [sym_binary] = STATE(26),
    [sym_string] = STATE(26),
    [sym_tuple] = STATE(26),
    [sym__list_or_keyword_list] = STATE(26),
    [sym_list] = STATE(26),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(26),
    [sym_map] = STATE(26),
    [sym__empty_map] = STATE(16),
    [sym__map] = STATE(16),
    [sym_struct] = STATE(26),
    [sym_module] = STATE(26),
    [sym_alias] = ACTIONS(75),
    [sym_integer] = ACTIONS(77),
    [sym_float] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(19),
    [anon_sym_COLON_BANG] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(21),
    [anon_sym_COLON_STAR] = ACTIONS(21),
    [anon_sym_COLON_PLUS] = ACTIONS(19),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(21),
    [anon_sym_COLON_DASH] = ACTIONS(19),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(21),
    [anon_sym_COLON_DOT] = ACTIONS(19),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(21),
    [anon_sym_COLON_SLASH] = ACTIONS(21),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(21),
    [anon_sym_COLON_LT] = ACTIONS(19),
    [anon_sym_COLON_LT_DASH] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(21),
    [anon_sym_COLON_LT_EQ] = ACTIONS(21),
    [anon_sym_COLON_LT_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(19),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_EQ_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(21),
    [anon_sym_COLON_GT] = ACTIONS(19),
    [anon_sym_COLON_GT_EQ] = ACTIONS(21),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_AT] = ACTIONS(21),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_COLON_CARET] = ACTIONS(21),
    [anon_sym_COLON_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(19),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(21),
    [anon_sym_nil] = ACTIONS(23),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(41),
    [sym_comment] = ACTIONS(43),
  },
  [10] = {
    [sym__expression] = STATE(29),
    [sym__value] = STATE(29),
    [sym_true] = STATE(29),
    [sym_false] = STATE(29),
    [sym_atom] = STATE(29),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(30),
    [sym_nil] = STATE(29),
    [sym_charlist] = STATE(29),
    [sym_binary] = STATE(29),
    [sym_string] = STATE(29),
    [sym_tuple] = STATE(29),
    [sym__list_or_keyword_list] = STATE(29),
    [sym_list] = STATE(29),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_head] = STATE(31),
    [sym_keyword_list] = STATE(29),
    [sym_map] = STATE(29),
    [sym__empty_map] = STATE(16),
    [sym__map] = STATE(16),
    [sym_struct] = STATE(29),
    [sym_module] = STATE(29),
    [sym_alias] = ACTIONS(81),
    [sym_integer] = ACTIONS(81),
    [sym_float] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(19),
    [anon_sym_COLON_BANG] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(21),
    [anon_sym_COLON_STAR] = ACTIONS(21),
    [anon_sym_COLON_PLUS] = ACTIONS(19),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(21),
    [anon_sym_COLON_DASH] = ACTIONS(19),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(21),
    [anon_sym_COLON_DOT] = ACTIONS(19),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(21),
    [anon_sym_COLON_SLASH] = ACTIONS(21),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(21),
    [anon_sym_COLON_LT] = ACTIONS(19),
    [anon_sym_COLON_LT_DASH] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(21),
    [anon_sym_COLON_LT_EQ] = ACTIONS(21),
    [anon_sym_COLON_LT_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(19),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_EQ_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(21),
    [anon_sym_COLON_GT] = ACTIONS(19),
    [anon_sym_COLON_GT_EQ] = ACTIONS(21),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_AT] = ACTIONS(21),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_COLON_CARET] = ACTIONS(21),
    [anon_sym_COLON_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(19),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(21),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_nil] = ACTIONS(25),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(87),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [11] = {
    [sym__value] = STATE(33),
    [sym_true] = STATE(33),
    [sym_false] = STATE(33),
    [sym_atom] = STATE(33),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(33),
    [sym_charlist] = STATE(33),
    [sym_binary] = STATE(33),
    [sym_string] = STATE(33),
    [sym_tuple] = STATE(33),
    [sym__list_or_keyword_list] = STATE(33),
    [sym_list] = STATE(33),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(33),
    [sym_map] = STATE(33),
    [sym__empty_map] = STATE(16),
    [sym__map] = STATE(16),
    [sym_pair] = STATE(34),
    [sym_struct] = STATE(33),
    [sym_module] = STATE(33),
    [sym_alias] = ACTIONS(91),
    [sym_integer] = ACTIONS(93),
    [sym_float] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(19),
    [anon_sym_COLON_BANG] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(21),
    [anon_sym_COLON_STAR] = ACTIONS(21),
    [anon_sym_COLON_PLUS] = ACTIONS(19),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(21),
    [anon_sym_COLON_DASH] = ACTIONS(19),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(21),
    [anon_sym_COLON_DOT] = ACTIONS(19),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(21),
    [anon_sym_COLON_SLASH] = ACTIONS(21),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(21),
    [anon_sym_COLON_LT] = ACTIONS(19),
    [anon_sym_COLON_LT_DASH] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(21),
    [anon_sym_COLON_LT_EQ] = ACTIONS(21),
    [anon_sym_COLON_LT_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(19),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_EQ_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(21),
    [anon_sym_COLON_GT] = ACTIONS(19),
    [anon_sym_COLON_GT_EQ] = ACTIONS(21),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_AT] = ACTIONS(21),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_COLON_CARET] = ACTIONS(21),
    [anon_sym_COLON_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(19),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(21),
    [anon_sym_nil] = ACTIONS(23),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(41),
    [sym_comment] = ACTIONS(43),
  },
  [12] = {
    [sym_alias] = ACTIONS(97),
    [sym_comment] = ACTIONS(43),
  },
  [13] = {
    [sym_alias] = ACTIONS(99),
    [sym_comment] = ACTIONS(43),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [sym_comment] = ACTIONS(43),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [sym_alias] = ACTIONS(103),
    [sym_integer] = ACTIONS(105),
    [sym_float] = ACTIONS(103),
    [anon_sym_true] = ACTIONS(103),
    [anon_sym_COLONtrue] = ACTIONS(105),
    [anon_sym_false] = ACTIONS(103),
    [anon_sym_COLONfalse] = ACTIONS(105),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(105),
    [anon_sym_COLON_BANG] = ACTIONS(105),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(105),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(103),
    [anon_sym_COLON_AMP] = ACTIONS(105),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(105),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(103),
    [anon_sym_COLON_STAR] = ACTIONS(103),
    [anon_sym_COLON_PLUS] = ACTIONS(105),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(103),
    [anon_sym_COLON_DASH] = ACTIONS(105),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(103),
    [anon_sym_COLON_DOT] = ACTIONS(105),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(103),
    [anon_sym_COLON_SLASH] = ACTIONS(103),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(103),
    [anon_sym_COLON_LT] = ACTIONS(105),
    [anon_sym_COLON_LT_DASH] = ACTIONS(103),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(103),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(103),
    [anon_sym_COLON_LT_EQ] = ACTIONS(103),
    [anon_sym_COLON_LT_GT] = ACTIONS(103),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(103),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(105),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(103),
    [anon_sym_COLON_EQ] = ACTIONS(105),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(105),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(103),
    [anon_sym_COLON_EQ_GT] = ACTIONS(103),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(103),
    [anon_sym_COLON_GT] = ACTIONS(105),
    [anon_sym_COLON_GT_EQ] = ACTIONS(103),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(103),
    [anon_sym_COLON_AT] = ACTIONS(103),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(103),
    [anon_sym_COLON_CARET] = ACTIONS(103),
    [anon_sym_COLON_PIPE] = ACTIONS(105),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(103),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(105),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(103),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(105),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(103),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(103),
    [anon_sym_nil] = ACTIONS(103),
    [anon_sym_COLONnil] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [anon_sym_LT_LT] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_RBRACK] = ACTIONS(103),
    [anon_sym_PIPE] = ACTIONS(103),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(103),
    [anon_sym_EQ_GT] = ACTIONS(103),
    [anon_sym_PERCENT] = ACTIONS(105),
    [anon_sym_defmodule] = ACTIONS(103),
    [anon_sym_end] = ACTIONS(103),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(103),
    [sym_comment] = ACTIONS(43),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym_alias] = ACTIONS(107),
    [sym_integer] = ACTIONS(109),
    [sym_float] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(107),
    [anon_sym_COLONtrue] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(107),
    [anon_sym_COLONfalse] = ACTIONS(109),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(109),
    [anon_sym_COLON_BANG] = ACTIONS(109),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(109),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(107),
    [anon_sym_COLON_AMP] = ACTIONS(109),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(109),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(107),
    [anon_sym_COLON_STAR] = ACTIONS(107),
    [anon_sym_COLON_PLUS] = ACTIONS(109),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(107),
    [anon_sym_COLON_DASH] = ACTIONS(109),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(107),
    [anon_sym_COLON_DOT] = ACTIONS(109),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(107),
    [anon_sym_COLON_SLASH] = ACTIONS(107),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(107),
    [anon_sym_COLON_LT] = ACTIONS(109),
    [anon_sym_COLON_LT_DASH] = ACTIONS(107),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(107),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(107),
    [anon_sym_COLON_LT_EQ] = ACTIONS(107),
    [anon_sym_COLON_LT_GT] = ACTIONS(107),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(107),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(109),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(107),
    [anon_sym_COLON_EQ] = ACTIONS(109),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(109),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(107),
    [anon_sym_COLON_EQ_GT] = ACTIONS(107),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(107),
    [anon_sym_COLON_GT] = ACTIONS(109),
    [anon_sym_COLON_GT_EQ] = ACTIONS(107),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(107),
    [anon_sym_COLON_AT] = ACTIONS(107),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(107),
    [anon_sym_COLON_CARET] = ACTIONS(107),
    [anon_sym_COLON_PIPE] = ACTIONS(109),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(107),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(109),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(107),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(109),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(107),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(107),
    [anon_sym_nil] = ACTIONS(107),
    [anon_sym_COLONnil] = ACTIONS(109),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [anon_sym_LT_LT] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(107),
    [anon_sym_EQ_GT] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_defmodule] = ACTIONS(107),
    [anon_sym_end] = ACTIONS(107),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(107),
    [sym_comment] = ACTIONS(43),
  },
  [17] = {
    [sym__expression] = STATE(37),
    [sym__value] = STATE(37),
    [sym_true] = STATE(37),
    [sym_false] = STATE(37),
    [sym_atom] = STATE(37),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(37),
    [sym_charlist] = STATE(37),
    [sym_binary] = STATE(37),
    [sym_string] = STATE(37),
    [sym_tuple] = STATE(37),
    [sym__list_or_keyword_list] = STATE(37),
    [sym_list] = STATE(37),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(37),
    [sym_map] = STATE(37),
    [sym__empty_map] = STATE(16),
    [sym__map] = STATE(16),
    [sym_struct] = STATE(37),
    [sym_module] = STATE(37),
    [aux_sym_program_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym_alias] = ACTIONS(113),
    [sym_integer] = ACTIONS(115),
    [sym_float] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(19),
    [anon_sym_COLON_BANG] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(21),
    [anon_sym_COLON_STAR] = ACTIONS(21),
    [anon_sym_COLON_PLUS] = ACTIONS(19),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(21),
    [anon_sym_COLON_DASH] = ACTIONS(19),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(21),
    [anon_sym_COLON_DOT] = ACTIONS(19),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(21),
    [anon_sym_COLON_SLASH] = ACTIONS(21),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(21),
    [anon_sym_COLON_LT] = ACTIONS(19),
    [anon_sym_COLON_LT_DASH] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(21),
    [anon_sym_COLON_LT_EQ] = ACTIONS(21),
    [anon_sym_COLON_LT_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(19),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_EQ_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(21),
    [anon_sym_COLON_GT] = ACTIONS(19),
    [anon_sym_COLON_GT_EQ] = ACTIONS(21),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_AT] = ACTIONS(21),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_COLON_CARET] = ACTIONS(21),
    [anon_sym_COLON_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(19),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(21),
    [anon_sym_nil] = ACTIONS(23),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(41),
    [sym_comment] = ACTIONS(43),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [sym_alias] = ACTIONS(117),
    [sym_integer] = ACTIONS(119),
    [sym_float] = ACTIONS(117),
    [anon_sym_true] = ACTIONS(117),
    [anon_sym_COLONtrue] = ACTIONS(119),
    [anon_sym_false] = ACTIONS(117),
    [anon_sym_COLONfalse] = ACTIONS(119),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(119),
    [anon_sym_COLON_BANG] = ACTIONS(119),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(119),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(117),
    [anon_sym_COLON_AMP] = ACTIONS(119),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(119),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(117),
    [anon_sym_COLON_STAR] = ACTIONS(117),
    [anon_sym_COLON_PLUS] = ACTIONS(119),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(117),
    [anon_sym_COLON_DASH] = ACTIONS(119),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(117),
    [anon_sym_COLON_DOT] = ACTIONS(119),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(117),
    [anon_sym_COLON_SLASH] = ACTIONS(117),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(117),
    [anon_sym_COLON_LT] = ACTIONS(119),
    [anon_sym_COLON_LT_DASH] = ACTIONS(117),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(117),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(117),
    [anon_sym_COLON_LT_EQ] = ACTIONS(117),
    [anon_sym_COLON_LT_GT] = ACTIONS(117),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(117),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(119),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(117),
    [anon_sym_COLON_EQ] = ACTIONS(119),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(119),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(117),
    [anon_sym_COLON_EQ_GT] = ACTIONS(117),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(117),
    [anon_sym_COLON_GT] = ACTIONS(119),
    [anon_sym_COLON_GT_EQ] = ACTIONS(117),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(117),
    [anon_sym_COLON_AT] = ACTIONS(117),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(117),
    [anon_sym_COLON_CARET] = ACTIONS(117),
    [anon_sym_COLON_PIPE] = ACTIONS(119),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(117),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(119),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(119),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(117),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(117),
    [anon_sym_nil] = ACTIONS(117),
    [anon_sym_COLONnil] = ACTIONS(119),
    [anon_sym_SQUOTE] = ACTIONS(117),
    [anon_sym_LT_LT] = ACTIONS(117),
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_GT_GT] = ACTIONS(117),
    [anon_sym_COLON_COLON] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(117),
    [anon_sym_EQ_GT] = ACTIONS(117),
    [anon_sym_PERCENT] = ACTIONS(119),
    [anon_sym_defmodule] = ACTIONS(117),
    [anon_sym_end] = ACTIONS(117),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(117),
    [sym_comment] = ACTIONS(43),
  },
  [19] = {
    [aux_sym_charlist_repeat1] = STATE(39),
    [anon_sym_SQUOTE] = ACTIONS(121),
    [aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(123),
    [sym_comment] = ACTIONS(65),
  },
  [20] = {
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_GT_GT] = ACTIONS(125),
    [anon_sym_COLON_COLON] = ACTIONS(127),
    [sym_comment] = ACTIONS(43),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_alias] = ACTIONS(129),
    [sym_integer] = ACTIONS(131),
    [sym_float] = ACTIONS(129),
    [anon_sym_true] = ACTIONS(129),
    [anon_sym_COLONtrue] = ACTIONS(131),
    [anon_sym_false] = ACTIONS(129),
    [anon_sym_COLONfalse] = ACTIONS(131),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(131),
    [anon_sym_COLON_BANG] = ACTIONS(131),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(131),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(129),
    [anon_sym_COLON_AMP] = ACTIONS(131),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(131),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(129),
    [anon_sym_COLON_STAR] = ACTIONS(129),
    [anon_sym_COLON_PLUS] = ACTIONS(131),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(129),
    [anon_sym_COLON_DASH] = ACTIONS(131),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(129),
    [anon_sym_COLON_DOT] = ACTIONS(131),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(129),
    [anon_sym_COLON_SLASH] = ACTIONS(129),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(129),
    [anon_sym_COLON_LT] = ACTIONS(131),
    [anon_sym_COLON_LT_DASH] = ACTIONS(129),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(129),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(129),
    [anon_sym_COLON_LT_EQ] = ACTIONS(129),
    [anon_sym_COLON_LT_GT] = ACTIONS(129),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(129),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(131),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(129),
    [anon_sym_COLON_EQ] = ACTIONS(131),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(131),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(129),
    [anon_sym_COLON_EQ_GT] = ACTIONS(129),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(129),
    [anon_sym_COLON_GT] = ACTIONS(131),
    [anon_sym_COLON_GT_EQ] = ACTIONS(129),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(129),
    [anon_sym_COLON_AT] = ACTIONS(129),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(129),
    [anon_sym_COLON_CARET] = ACTIONS(129),
    [anon_sym_COLON_PIPE] = ACTIONS(131),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(129),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(131),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(129),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(131),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(129),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(129),
    [anon_sym_nil] = ACTIONS(129),
    [anon_sym_COLONnil] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [anon_sym_LT_LT] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_RBRACK] = ACTIONS(129),
    [anon_sym_PIPE] = ACTIONS(129),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(129),
    [anon_sym_EQ_GT] = ACTIONS(129),
    [anon_sym_PERCENT] = ACTIONS(131),
    [anon_sym_defmodule] = ACTIONS(129),
    [anon_sym_end] = ACTIONS(129),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(129),
    [sym_comment] = ACTIONS(43),
  },
  [22] = {
    [aux_sym_binary_repeat1] = STATE(43),
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_GT_GT] = ACTIONS(135),
    [sym_comment] = ACTIONS(43),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [sym_alias] = ACTIONS(137),
    [sym_integer] = ACTIONS(139),
    [sym_float] = ACTIONS(137),
    [anon_sym_true] = ACTIONS(137),
    [anon_sym_COLONtrue] = ACTIONS(139),
    [anon_sym_false] = ACTIONS(137),
    [anon_sym_COLONfalse] = ACTIONS(139),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(139),
    [anon_sym_COLON_BANG] = ACTIONS(139),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(139),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(137),
    [anon_sym_COLON_AMP] = ACTIONS(139),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(139),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(137),
    [anon_sym_COLON_STAR] = ACTIONS(137),
    [anon_sym_COLON_PLUS] = ACTIONS(139),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(137),
    [anon_sym_COLON_DASH] = ACTIONS(139),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(137),
    [anon_sym_COLON_DOT] = ACTIONS(139),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(137),
    [anon_sym_COLON_SLASH] = ACTIONS(137),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(137),
    [anon_sym_COLON_LT] = ACTIONS(139),
    [anon_sym_COLON_LT_DASH] = ACTIONS(137),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(137),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(137),
    [anon_sym_COLON_LT_EQ] = ACTIONS(137),
    [anon_sym_COLON_LT_GT] = ACTIONS(137),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(137),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(139),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(137),
    [anon_sym_COLON_EQ] = ACTIONS(139),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(139),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(137),
    [anon_sym_COLON_EQ_GT] = ACTIONS(137),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(137),
    [anon_sym_COLON_GT] = ACTIONS(139),
    [anon_sym_COLON_GT_EQ] = ACTIONS(137),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(137),
    [anon_sym_COLON_AT] = ACTIONS(137),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(137),
    [anon_sym_COLON_CARET] = ACTIONS(137),
    [anon_sym_COLON_PIPE] = ACTIONS(139),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(137),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(139),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(139),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(137),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(137),
    [anon_sym_nil] = ACTIONS(137),
    [anon_sym_COLONnil] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_LT_LT] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_GT_GT] = ACTIONS(137),
    [anon_sym_COLON_COLON] = ACTIONS(139),
    [anon_sym_DQUOTE] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(137),
    [anon_sym_PIPE] = ACTIONS(137),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(137),
    [anon_sym_EQ_GT] = ACTIONS(137),
    [anon_sym_PERCENT] = ACTIONS(139),
    [anon_sym_defmodule] = ACTIONS(137),
    [anon_sym_end] = ACTIONS(137),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(137),
    [sym_comment] = ACTIONS(43),
  },
  [24] = {
    [aux_sym_string_repeat1] = STATE(45),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(143),
    [sym_comment] = ACTIONS(65),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [sym_alias] = ACTIONS(145),
    [sym_integer] = ACTIONS(147),
    [sym_float] = ACTIONS(145),
    [anon_sym_true] = ACTIONS(145),
    [anon_sym_COLONtrue] = ACTIONS(147),
    [anon_sym_false] = ACTIONS(145),
    [anon_sym_COLONfalse] = ACTIONS(147),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(147),
    [anon_sym_COLON_BANG] = ACTIONS(147),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(147),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(145),
    [anon_sym_COLON_AMP] = ACTIONS(147),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(147),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(145),
    [anon_sym_COLON_STAR] = ACTIONS(145),
    [anon_sym_COLON_PLUS] = ACTIONS(147),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(145),
    [anon_sym_COLON_DASH] = ACTIONS(147),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(145),
    [anon_sym_COLON_DOT] = ACTIONS(147),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(145),
    [anon_sym_COLON_SLASH] = ACTIONS(145),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(145),
    [anon_sym_COLON_LT] = ACTIONS(147),
    [anon_sym_COLON_LT_DASH] = ACTIONS(145),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(145),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(145),
    [anon_sym_COLON_LT_EQ] = ACTIONS(145),
    [anon_sym_COLON_LT_GT] = ACTIONS(145),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(145),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(147),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(145),
    [anon_sym_COLON_EQ] = ACTIONS(147),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(147),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(145),
    [anon_sym_COLON_EQ_GT] = ACTIONS(145),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(145),
    [anon_sym_COLON_GT] = ACTIONS(147),
    [anon_sym_COLON_GT_EQ] = ACTIONS(145),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(145),
    [anon_sym_COLON_AT] = ACTIONS(145),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(145),
    [anon_sym_COLON_CARET] = ACTIONS(145),
    [anon_sym_COLON_PIPE] = ACTIONS(147),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(145),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(145),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(147),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(145),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(145),
    [anon_sym_nil] = ACTIONS(145),
    [anon_sym_COLONnil] = ACTIONS(147),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [anon_sym_LT_LT] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_RBRACE] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym_RBRACK] = ACTIONS(145),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(145),
    [anon_sym_EQ_GT] = ACTIONS(145),
    [anon_sym_PERCENT] = ACTIONS(147),
    [anon_sym_defmodule] = ACTIONS(145),
    [anon_sym_end] = ACTIONS(145),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(145),
    [sym_comment] = ACTIONS(43),
  },
  [26] = {
    [aux_sym_tuple_repeat1] = STATE(48),
    [anon_sym_COMMA] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(151),
    [sym_comment] = ACTIONS(43),
  },
  [27] = {
    [sym__value] = STATE(49),
    [sym_true] = STATE(49),
    [sym_false] = STATE(49),
    [sym_atom] = STATE(49),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(49),
    [sym_charlist] = STATE(49),
    [sym_binary] = STATE(49),
    [sym_string] = STATE(49),
    [sym_tuple] = STATE(49),
    [sym__list_or_keyword_list] = STATE(49),
    [sym_list] = STATE(49),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(49),
    [sym_map] = STATE(49),
    [sym__empty_map] = STATE(16),
    [sym__map] = STATE(16),
    [sym_struct] = STATE(49),
    [sym_module] = STATE(49),
    [sym_alias] = ACTIONS(153),
    [sym_integer] = ACTIONS(155),
    [sym_float] = ACTIONS(153),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(19),
    [anon_sym_COLON_BANG] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(21),
    [anon_sym_COLON_STAR] = ACTIONS(21),
    [anon_sym_COLON_PLUS] = ACTIONS(19),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(21),
    [anon_sym_COLON_DASH] = ACTIONS(19),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(21),
    [anon_sym_COLON_DOT] = ACTIONS(19),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(21),
    [anon_sym_COLON_SLASH] = ACTIONS(21),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(21),
    [anon_sym_COLON_LT] = ACTIONS(19),
    [anon_sym_COLON_LT_DASH] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(21),
    [anon_sym_COLON_LT_EQ] = ACTIONS(21),
    [anon_sym_COLON_LT_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(19),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_EQ_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(21),
    [anon_sym_COLON_GT] = ACTIONS(19),
    [anon_sym_COLON_GT_EQ] = ACTIONS(21),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_AT] = ACTIONS(21),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_COLON_CARET] = ACTIONS(21),
    [anon_sym_COLON_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(19),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(21),
    [anon_sym_nil] = ACTIONS(23),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(41),
    [sym_comment] = ACTIONS(43),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [sym_alias] = ACTIONS(157),
    [sym_integer] = ACTIONS(159),
    [sym_float] = ACTIONS(157),
    [anon_sym_true] = ACTIONS(157),
    [anon_sym_COLONtrue] = ACTIONS(159),
    [anon_sym_false] = ACTIONS(157),
    [anon_sym_COLONfalse] = ACTIONS(159),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(159),
    [anon_sym_COLON_BANG] = ACTIONS(159),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(159),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(157),
    [anon_sym_COLON_AMP] = ACTIONS(159),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(159),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(157),
    [anon_sym_COLON_STAR] = ACTIONS(157),
    [anon_sym_COLON_PLUS] = ACTIONS(159),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(157),
    [anon_sym_COLON_DASH] = ACTIONS(159),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(157),
    [anon_sym_COLON_DOT] = ACTIONS(159),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(157),
    [anon_sym_COLON_SLASH] = ACTIONS(157),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(157),
    [anon_sym_COLON_LT] = ACTIONS(159),
    [anon_sym_COLON_LT_DASH] = ACTIONS(157),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(157),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(157),
    [anon_sym_COLON_LT_EQ] = ACTIONS(157),
    [anon_sym_COLON_LT_GT] = ACTIONS(157),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(157),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(159),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(157),
    [anon_sym_COLON_EQ] = ACTIONS(159),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(159),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(157),
    [anon_sym_COLON_EQ_GT] = ACTIONS(157),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(157),
    [anon_sym_COLON_GT] = ACTIONS(159),
    [anon_sym_COLON_GT_EQ] = ACTIONS(157),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(157),
    [anon_sym_COLON_AT] = ACTIONS(157),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_COLON_CARET] = ACTIONS(157),
    [anon_sym_COLON_PIPE] = ACTIONS(159),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(157),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(159),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(157),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(159),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(157),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(157),
    [anon_sym_nil] = ACTIONS(157),
    [anon_sym_COLONnil] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_LT_LT] = ACTIONS(157),
    [anon_sym_COMMA] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_RBRACE] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(157),
    [anon_sym_PIPE] = ACTIONS(157),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(157),
    [anon_sym_EQ_GT] = ACTIONS(157),
    [anon_sym_PERCENT] = ACTIONS(159),
    [anon_sym_defmodule] = ACTIONS(157),
    [anon_sym_end] = ACTIONS(157),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(157),
    [sym_comment] = ACTIONS(43),
  },
  [29] = {
    [aux_sym_tuple_repeat1] = STATE(52),
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_RBRACK] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(165),
    [sym_comment] = ACTIONS(43),
  },
  [30] = {
    [aux_sym_keyword_list_repeat1] = STATE(55),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(169),
    [sym_comment] = ACTIONS(43),
  },
  [31] = {
    [anon_sym_PIPE] = ACTIONS(171),
    [sym_comment] = ACTIONS(43),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [sym_alias] = ACTIONS(173),
    [sym_integer] = ACTIONS(175),
    [sym_float] = ACTIONS(173),
    [anon_sym_true] = ACTIONS(173),
    [anon_sym_COLONtrue] = ACTIONS(175),
    [anon_sym_false] = ACTIONS(173),
    [anon_sym_COLONfalse] = ACTIONS(175),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(175),
    [anon_sym_COLON_BANG] = ACTIONS(175),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(175),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(173),
    [anon_sym_COLON_AMP] = ACTIONS(175),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(175),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(173),
    [anon_sym_COLON_STAR] = ACTIONS(173),
    [anon_sym_COLON_PLUS] = ACTIONS(175),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(173),
    [anon_sym_COLON_DASH] = ACTIONS(175),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(173),
    [anon_sym_COLON_DOT] = ACTIONS(175),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(173),
    [anon_sym_COLON_SLASH] = ACTIONS(173),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(173),
    [anon_sym_COLON_LT] = ACTIONS(175),
    [anon_sym_COLON_LT_DASH] = ACTIONS(173),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(173),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(173),
    [anon_sym_COLON_LT_EQ] = ACTIONS(173),
    [anon_sym_COLON_LT_GT] = ACTIONS(173),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(173),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(175),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(173),
    [anon_sym_COLON_EQ] = ACTIONS(175),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(175),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(173),
    [anon_sym_COLON_EQ_GT] = ACTIONS(173),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(173),
    [anon_sym_COLON_GT] = ACTIONS(175),
    [anon_sym_COLON_GT_EQ] = ACTIONS(173),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(173),
    [anon_sym_COLON_AT] = ACTIONS(173),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(173),
    [anon_sym_COLON_CARET] = ACTIONS(173),
    [anon_sym_COLON_PIPE] = ACTIONS(175),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(173),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(175),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(173),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(175),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(173),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(173),
    [anon_sym_nil] = ACTIONS(173),
    [anon_sym_COLONnil] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_LT_LT] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(173),
    [anon_sym_PIPE] = ACTIONS(173),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(173),
    [anon_sym_EQ_GT] = ACTIONS(173),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_defmodule] = ACTIONS(173),
    [anon_sym_end] = ACTIONS(173),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(173),
    [sym_comment] = ACTIONS(43),
  },
  [33] = {
    [anon_sym_EQ_GT] = ACTIONS(177),
    [sym_comment] = ACTIONS(43),
  },
  [34] = {
    [aux_sym__map_repeat1] = STATE(60),
    [anon_sym_COMMA] = ACTIONS(179),
    [anon_sym_RBRACE] = ACTIONS(181),
    [sym_comment] = ACTIONS(43),
  },
  [35] = {
    [sym__empty_struct_body] = STATE(62),
    [sym__struct_body] = STATE(62),
    [anon_sym_LBRACE] = ACTIONS(183),
    [sym_comment] = ACTIONS(43),
  },
  [36] = {
    [anon_sym_do] = ACTIONS(185),
    [sym_comment] = ACTIONS(43),
  },
  [37] = {
    [sym__expression] = STATE(37),
    [sym__value] = STATE(37),
    [sym_true] = STATE(37),
    [sym_false] = STATE(37),
    [sym_atom] = STATE(37),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(37),
    [sym_charlist] = STATE(37),
    [sym_binary] = STATE(37),
    [sym_string] = STATE(37),
    [sym_tuple] = STATE(37),
    [sym__list_or_keyword_list] = STATE(37),
    [sym_list] = STATE(37),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(37),
    [sym_map] = STATE(37),
    [sym__empty_map] = STATE(16),
    [sym__map] = STATE(16),
    [sym_struct] = STATE(37),
    [sym_module] = STATE(37),
    [aux_sym_program_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym_alias] = ACTIONS(189),
    [sym_integer] = ACTIONS(192),
    [sym_float] = ACTIONS(189),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_COLONtrue] = ACTIONS(198),
    [anon_sym_false] = ACTIONS(201),
    [anon_sym_COLONfalse] = ACTIONS(204),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(207),
    [anon_sym_COLON_BANG] = ACTIONS(207),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(207),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(210),
    [anon_sym_COLON_AMP] = ACTIONS(207),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(207),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(210),
    [anon_sym_COLON_STAR] = ACTIONS(210),
    [anon_sym_COLON_PLUS] = ACTIONS(207),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(210),
    [anon_sym_COLON_DASH] = ACTIONS(207),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(210),
    [anon_sym_COLON_DOT] = ACTIONS(207),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(210),
    [anon_sym_COLON_SLASH] = ACTIONS(210),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(210),
    [anon_sym_COLON_LT] = ACTIONS(207),
    [anon_sym_COLON_LT_DASH] = ACTIONS(210),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(210),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(210),
    [anon_sym_COLON_LT_EQ] = ACTIONS(210),
    [anon_sym_COLON_LT_GT] = ACTIONS(210),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(210),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(207),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(210),
    [anon_sym_COLON_EQ] = ACTIONS(207),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(207),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(210),
    [anon_sym_COLON_EQ_GT] = ACTIONS(210),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(210),
    [anon_sym_COLON_GT] = ACTIONS(207),
    [anon_sym_COLON_GT_EQ] = ACTIONS(210),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(210),
    [anon_sym_COLON_AT] = ACTIONS(210),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(210),
    [anon_sym_COLON_CARET] = ACTIONS(210),
    [anon_sym_COLON_PIPE] = ACTIONS(207),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(210),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(207),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(210),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(207),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(210),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(210),
    [anon_sym_nil] = ACTIONS(213),
    [anon_sym_COLONnil] = ACTIONS(216),
    [anon_sym_SQUOTE] = ACTIONS(219),
    [anon_sym_LT_LT] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(228),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(234),
    [anon_sym_PERCENT] = ACTIONS(237),
    [anon_sym_defmodule] = ACTIONS(240),
    [sym_comment] = ACTIONS(43),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(243),
    [sym_alias] = ACTIONS(243),
    [sym_integer] = ACTIONS(245),
    [sym_float] = ACTIONS(243),
    [anon_sym_true] = ACTIONS(243),
    [anon_sym_COLONtrue] = ACTIONS(245),
    [anon_sym_false] = ACTIONS(243),
    [anon_sym_COLONfalse] = ACTIONS(245),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(245),
    [anon_sym_COLON_BANG] = ACTIONS(245),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(245),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(243),
    [anon_sym_COLON_AMP] = ACTIONS(245),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(245),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(243),
    [anon_sym_COLON_STAR] = ACTIONS(243),
    [anon_sym_COLON_PLUS] = ACTIONS(245),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(243),
    [anon_sym_COLON_DASH] = ACTIONS(245),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(243),
    [anon_sym_COLON_DOT] = ACTIONS(245),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(243),
    [anon_sym_COLON_SLASH] = ACTIONS(243),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(243),
    [anon_sym_COLON_LT] = ACTIONS(245),
    [anon_sym_COLON_LT_DASH] = ACTIONS(243),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(243),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(243),
    [anon_sym_COLON_LT_EQ] = ACTIONS(243),
    [anon_sym_COLON_LT_GT] = ACTIONS(243),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(243),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(245),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(243),
    [anon_sym_COLON_EQ] = ACTIONS(245),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(245),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(243),
    [anon_sym_COLON_EQ_GT] = ACTIONS(243),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(243),
    [anon_sym_COLON_GT] = ACTIONS(245),
    [anon_sym_COLON_GT_EQ] = ACTIONS(243),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(243),
    [anon_sym_COLON_AT] = ACTIONS(243),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(243),
    [anon_sym_COLON_CARET] = ACTIONS(243),
    [anon_sym_COLON_PIPE] = ACTIONS(245),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(243),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(245),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(243),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(245),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(243),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(243),
    [anon_sym_nil] = ACTIONS(243),
    [anon_sym_COLONnil] = ACTIONS(245),
    [anon_sym_SQUOTE] = ACTIONS(243),
    [anon_sym_LT_LT] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_GT_GT] = ACTIONS(243),
    [anon_sym_COLON_COLON] = ACTIONS(245),
    [anon_sym_DQUOTE] = ACTIONS(243),
    [anon_sym_LBRACE] = ACTIONS(243),
    [anon_sym_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(243),
    [anon_sym_RBRACK] = ACTIONS(243),
    [anon_sym_PIPE] = ACTIONS(243),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(243),
    [anon_sym_EQ_GT] = ACTIONS(243),
    [anon_sym_PERCENT] = ACTIONS(245),
    [anon_sym_defmodule] = ACTIONS(243),
    [anon_sym_end] = ACTIONS(243),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(243),
    [sym_comment] = ACTIONS(43),
  },
  [39] = {
    [aux_sym_charlist_repeat1] = STATE(39),
    [anon_sym_SQUOTE] = ACTIONS(247),
    [aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(249),
    [sym_comment] = ACTIONS(65),
  },
  [40] = {
    [sym_binary_options] = ACTIONS(252),
    [sym_comment] = ACTIONS(43),
  },
  [41] = {
    [sym_charlist] = STATE(20),
    [sym_binary_segment] = STATE(66),
    [sym_string] = STATE(20),
    [sym_integer] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_GT_GT] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(43),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(256),
    [sym_alias] = ACTIONS(256),
    [sym_integer] = ACTIONS(258),
    [sym_float] = ACTIONS(256),
    [anon_sym_true] = ACTIONS(256),
    [anon_sym_COLONtrue] = ACTIONS(258),
    [anon_sym_false] = ACTIONS(256),
    [anon_sym_COLONfalse] = ACTIONS(258),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(258),
    [anon_sym_COLON_BANG] = ACTIONS(258),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(258),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(256),
    [anon_sym_COLON_AMP] = ACTIONS(258),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(258),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(256),
    [anon_sym_COLON_STAR] = ACTIONS(256),
    [anon_sym_COLON_PLUS] = ACTIONS(258),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(256),
    [anon_sym_COLON_DASH] = ACTIONS(258),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(256),
    [anon_sym_COLON_DOT] = ACTIONS(258),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(256),
    [anon_sym_COLON_SLASH] = ACTIONS(256),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(256),
    [anon_sym_COLON_LT] = ACTIONS(258),
    [anon_sym_COLON_LT_DASH] = ACTIONS(256),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(256),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(256),
    [anon_sym_COLON_LT_EQ] = ACTIONS(256),
    [anon_sym_COLON_LT_GT] = ACTIONS(256),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(256),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(258),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(256),
    [anon_sym_COLON_EQ] = ACTIONS(258),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(258),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(256),
    [anon_sym_COLON_EQ_GT] = ACTIONS(256),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(256),
    [anon_sym_COLON_GT] = ACTIONS(258),
    [anon_sym_COLON_GT_EQ] = ACTIONS(256),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(256),
    [anon_sym_COLON_AT] = ACTIONS(256),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(256),
    [anon_sym_COLON_CARET] = ACTIONS(256),
    [anon_sym_COLON_PIPE] = ACTIONS(258),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(256),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(258),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(256),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(258),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(256),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(256),
    [anon_sym_nil] = ACTIONS(256),
    [anon_sym_COLONnil] = ACTIONS(258),
    [anon_sym_SQUOTE] = ACTIONS(256),
    [anon_sym_LT_LT] = ACTIONS(256),
    [anon_sym_COMMA] = ACTIONS(256),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [anon_sym_LBRACE] = ACTIONS(256),
    [anon_sym_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACK] = ACTIONS(256),
    [anon_sym_RBRACK] = ACTIONS(256),
    [anon_sym_PIPE] = ACTIONS(256),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(256),
    [anon_sym_EQ_GT] = ACTIONS(256),
    [anon_sym_PERCENT] = ACTIONS(258),
    [anon_sym_defmodule] = ACTIONS(256),
    [anon_sym_end] = ACTIONS(256),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(256),
    [sym_comment] = ACTIONS(43),
  },
  [43] = {
    [aux_sym_binary_repeat1] = STATE(68),
    [anon_sym_COMMA] = ACTIONS(260),
    [anon_sym_GT_GT] = ACTIONS(254),
    [sym_comment] = ACTIONS(43),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(262),
    [sym_alias] = ACTIONS(262),
    [sym_integer] = ACTIONS(264),
    [sym_float] = ACTIONS(262),
    [anon_sym_true] = ACTIONS(262),
    [anon_sym_COLONtrue] = ACTIONS(264),
    [anon_sym_false] = ACTIONS(262),
    [anon_sym_COLONfalse] = ACTIONS(264),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(264),
    [anon_sym_COLON_BANG] = ACTIONS(264),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(264),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(262),
    [anon_sym_COLON_AMP] = ACTIONS(264),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(264),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(262),
    [anon_sym_COLON_STAR] = ACTIONS(262),
    [anon_sym_COLON_PLUS] = ACTIONS(264),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(262),
    [anon_sym_COLON_DASH] = ACTIONS(264),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(262),
    [anon_sym_COLON_DOT] = ACTIONS(264),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(262),
    [anon_sym_COLON_SLASH] = ACTIONS(262),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(262),
    [anon_sym_COLON_LT] = ACTIONS(264),
    [anon_sym_COLON_LT_DASH] = ACTIONS(262),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(262),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(262),
    [anon_sym_COLON_LT_EQ] = ACTIONS(262),
    [anon_sym_COLON_LT_GT] = ACTIONS(262),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(262),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(264),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(262),
    [anon_sym_COLON_EQ] = ACTIONS(264),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(264),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(262),
    [anon_sym_COLON_EQ_GT] = ACTIONS(262),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(262),
    [anon_sym_COLON_GT] = ACTIONS(264),
    [anon_sym_COLON_GT_EQ] = ACTIONS(262),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(262),
    [anon_sym_COLON_AT] = ACTIONS(262),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(262),
    [anon_sym_COLON_CARET] = ACTIONS(262),
    [anon_sym_COLON_PIPE] = ACTIONS(264),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(262),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(264),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(262),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(264),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(262),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(262),
    [anon_sym_nil] = ACTIONS(262),
    [anon_sym_COLONnil] = ACTIONS(264),
    [anon_sym_SQUOTE] = ACTIONS(262),
    [anon_sym_LT_LT] = ACTIONS(262),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_GT_GT] = ACTIONS(262),
    [anon_sym_COLON_COLON] = ACTIONS(264),
    [anon_sym_DQUOTE] = ACTIONS(262),
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACK] = ACTIONS(262),
    [anon_sym_RBRACK] = ACTIONS(262),
    [anon_sym_PIPE] = ACTIONS(262),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(262),
    [anon_sym_EQ_GT] = ACTIONS(262),
    [anon_sym_PERCENT] = ACTIONS(264),
    [anon_sym_defmodule] = ACTIONS(262),
    [anon_sym_end] = ACTIONS(262),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(262),
    [sym_comment] = ACTIONS(43),
  },
  [45] = {
    [aux_sym_string_repeat1] = STATE(45),
    [anon_sym_DQUOTE] = ACTIONS(266),
    [aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(268),
    [sym_comment] = ACTIONS(65),
  },
  [46] = {
    [sym__expression] = STATE(70),
    [sym__value] = STATE(70),
    [sym_true] = STATE(70),
    [sym_false] = STATE(70),
    [sym_atom] = STATE(70),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(71),
    [sym_nil] = STATE(70),
    [sym_charlist] = STATE(70),
    [sym_binary] = STATE(70),
    [sym_string] = STATE(70),
    [sym_tuple] = STATE(70),
    [sym__list_or_keyword_list] = STATE(70),
    [sym_list] = STATE(70),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(70),
    [sym_map] = STATE(70),
    [sym__empty_map] = STATE(16),
    [sym__map] = STATE(16),
    [sym_struct] = STATE(70),
    [sym_implicit_keyword_list] = STATE(72),
    [sym_module] = STATE(70),
    [sym_alias] = ACTIONS(271),
    [sym_integer] = ACTIONS(271),
    [sym_float] = ACTIONS(273),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(19),
    [anon_sym_COLON_BANG] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(21),
    [anon_sym_COLON_STAR] = ACTIONS(21),
    [anon_sym_COLON_PLUS] = ACTIONS(19),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(21),
    [anon_sym_COLON_DASH] = ACTIONS(19),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(21),
    [anon_sym_COLON_DOT] = ACTIONS(19),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(21),
    [anon_sym_COLON_SLASH] = ACTIONS(21),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(21),
    [anon_sym_COLON_LT] = ACTIONS(19),
    [anon_sym_COLON_LT_DASH] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(21),
    [anon_sym_COLON_LT_EQ] = ACTIONS(21),
    [anon_sym_COLON_LT_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(19),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_EQ_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(21),
    [anon_sym_COLON_GT] = ACTIONS(19),
    [anon_sym_COLON_GT_EQ] = ACTIONS(21),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_AT] = ACTIONS(21),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_COLON_CARET] = ACTIONS(21),
    [anon_sym_COLON_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(19),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(21),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_nil] = ACTIONS(25),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(275),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(277),
    [sym_alias] = ACTIONS(277),
    [sym_integer] = ACTIONS(279),
    [sym_float] = ACTIONS(277),
    [anon_sym_true] = ACTIONS(277),
    [anon_sym_COLONtrue] = ACTIONS(279),
    [anon_sym_false] = ACTIONS(277),
    [anon_sym_COLONfalse] = ACTIONS(279),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(279),
    [anon_sym_COLON_BANG] = ACTIONS(279),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(279),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(277),
    [anon_sym_COLON_AMP] = ACTIONS(279),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(279),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(277),
    [anon_sym_COLON_STAR] = ACTIONS(277),
    [anon_sym_COLON_PLUS] = ACTIONS(279),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(277),
    [anon_sym_COLON_DASH] = ACTIONS(279),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(277),
    [anon_sym_COLON_DOT] = ACTIONS(279),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(277),
    [anon_sym_COLON_SLASH] = ACTIONS(277),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(277),
    [anon_sym_COLON_LT] = ACTIONS(279),
    [anon_sym_COLON_LT_DASH] = ACTIONS(277),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(277),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(277),
    [anon_sym_COLON_LT_EQ] = ACTIONS(277),
    [anon_sym_COLON_LT_GT] = ACTIONS(277),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(277),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(279),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(277),
    [anon_sym_COLON_EQ] = ACTIONS(279),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(279),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(277),
    [anon_sym_COLON_EQ_GT] = ACTIONS(277),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(277),
    [anon_sym_COLON_GT] = ACTIONS(279),
    [anon_sym_COLON_GT_EQ] = ACTIONS(277),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(277),
    [anon_sym_COLON_AT] = ACTIONS(277),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(277),
    [anon_sym_COLON_CARET] = ACTIONS(277),
    [anon_sym_COLON_PIPE] = ACTIONS(279),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(277),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(279),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(279),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(277),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(277),
    [anon_sym_nil] = ACTIONS(277),
    [anon_sym_COLONnil] = ACTIONS(279),
    [anon_sym_SQUOTE] = ACTIONS(277),
    [anon_sym_LT_LT] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(277),
    [anon_sym_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACK] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [anon_sym_PIPE] = ACTIONS(277),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(277),
    [anon_sym_EQ_GT] = ACTIONS(277),
    [anon_sym_PERCENT] = ACTIONS(279),
    [anon_sym_defmodule] = ACTIONS(277),
    [anon_sym_end] = ACTIONS(277),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(277),
    [sym_comment] = ACTIONS(43),
  },
  [48] = {
    [aux_sym_tuple_repeat1] = STATE(74),
    [anon_sym_COMMA] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(275),
    [sym_comment] = ACTIONS(43),
  },
  [49] = {
    [anon_sym_COMMA] = ACTIONS(283),
    [anon_sym_RBRACE] = ACTIONS(283),
    [anon_sym_RBRACK] = ACTIONS(283),
    [anon_sym_end] = ACTIONS(283),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(283),
    [sym_comment] = ACTIONS(43),
  },
  [50] = {
    [sym__expression] = STATE(70),
    [sym__value] = STATE(70),
    [sym_true] = STATE(70),
    [sym_false] = STATE(70),
    [sym_atom] = STATE(70),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(76),
    [sym_nil] = STATE(70),
    [sym_charlist] = STATE(70),
    [sym_binary] = STATE(70),
    [sym_string] = STATE(70),
    [sym_tuple] = STATE(70),
    [sym__list_or_keyword_list] = STATE(70),
    [sym_list] = STATE(70),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(70),
    [sym_map] = STATE(70),
    [sym__empty_map] = STATE(16),
    [sym__map] = STATE(16),
    [sym_struct] = STATE(70),
    [sym_implicit_keyword_list] = STATE(77),
    [sym_module] = STATE(70),
    [sym_alias] = ACTIONS(271),
    [sym_integer] = ACTIONS(271),
    [sym_float] = ACTIONS(273),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(19),
    [anon_sym_COLON_BANG] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(21),
    [anon_sym_COLON_STAR] = ACTIONS(21),
    [anon_sym_COLON_PLUS] = ACTIONS(19),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(21),
    [anon_sym_COLON_DASH] = ACTIONS(19),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(21),
    [anon_sym_COLON_DOT] = ACTIONS(19),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(21),
    [anon_sym_COLON_SLASH] = ACTIONS(21),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(21),
    [anon_sym_COLON_LT] = ACTIONS(19),
    [anon_sym_COLON_LT_DASH] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(21),
    [anon_sym_COLON_LT_EQ] = ACTIONS(21),
    [anon_sym_COLON_LT_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(19),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_EQ_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(21),
    [anon_sym_COLON_GT] = ACTIONS(19),
    [anon_sym_COLON_GT_EQ] = ACTIONS(21),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_AT] = ACTIONS(21),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_COLON_CARET] = ACTIONS(21),
    [anon_sym_COLON_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(19),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(21),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_nil] = ACTIONS(25),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(285),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [sym_alias] = ACTIONS(287),
    [sym_integer] = ACTIONS(289),
    [sym_float] = ACTIONS(287),
    [anon_sym_true] = ACTIONS(287),
    [anon_sym_COLONtrue] = ACTIONS(289),
    [anon_sym_false] = ACTIONS(287),
    [anon_sym_COLONfalse] = ACTIONS(289),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(289),
    [anon_sym_COLON_BANG] = ACTIONS(289),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(289),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(287),
    [anon_sym_COLON_AMP] = ACTIONS(289),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(289),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(287),
    [anon_sym_COLON_STAR] = ACTIONS(287),
    [anon_sym_COLON_PLUS] = ACTIONS(289),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(287),
    [anon_sym_COLON_DASH] = ACTIONS(289),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(287),
    [anon_sym_COLON_DOT] = ACTIONS(289),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(287),
    [anon_sym_COLON_SLASH] = ACTIONS(287),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(287),
    [anon_sym_COLON_LT] = ACTIONS(289),
    [anon_sym_COLON_LT_DASH] = ACTIONS(287),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(287),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(287),
    [anon_sym_COLON_LT_EQ] = ACTIONS(287),
    [anon_sym_COLON_LT_GT] = ACTIONS(287),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(287),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(289),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(287),
    [anon_sym_COLON_EQ] = ACTIONS(289),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(289),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(287),
    [anon_sym_COLON_EQ_GT] = ACTIONS(287),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(287),
    [anon_sym_COLON_GT] = ACTIONS(289),
    [anon_sym_COLON_GT_EQ] = ACTIONS(287),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(287),
    [anon_sym_COLON_AT] = ACTIONS(287),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(287),
    [anon_sym_COLON_CARET] = ACTIONS(287),
    [anon_sym_COLON_PIPE] = ACTIONS(289),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(287),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(289),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(287),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(289),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(287),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(287),
    [anon_sym_nil] = ACTIONS(287),
    [anon_sym_COLONnil] = ACTIONS(289),
    [anon_sym_SQUOTE] = ACTIONS(287),
    [anon_sym_LT_LT] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(287),
    [anon_sym_DQUOTE] = ACTIONS(287),
    [anon_sym_LBRACE] = ACTIONS(287),
    [anon_sym_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACK] = ACTIONS(287),
    [anon_sym_RBRACK] = ACTIONS(287),
    [anon_sym_PIPE] = ACTIONS(287),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(287),
    [anon_sym_EQ_GT] = ACTIONS(287),
    [anon_sym_PERCENT] = ACTIONS(289),
    [anon_sym_defmodule] = ACTIONS(287),
    [anon_sym_end] = ACTIONS(287),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(287),
    [sym_comment] = ACTIONS(43),
  },
  [52] = {
    [aux_sym_tuple_repeat1] = STATE(79),
    [anon_sym_COMMA] = ACTIONS(291),
    [anon_sym_RBRACK] = ACTIONS(285),
    [sym_comment] = ACTIONS(43),
  },
  [53] = {
    [sym_keyword] = STATE(81),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(293),
    [sym_comment] = ACTIONS(43),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(295),
    [sym_alias] = ACTIONS(295),
    [sym_integer] = ACTIONS(297),
    [sym_float] = ACTIONS(295),
    [anon_sym_true] = ACTIONS(295),
    [anon_sym_COLONtrue] = ACTIONS(297),
    [anon_sym_false] = ACTIONS(295),
    [anon_sym_COLONfalse] = ACTIONS(297),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(297),
    [anon_sym_COLON_BANG] = ACTIONS(297),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(297),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(295),
    [anon_sym_COLON_AMP] = ACTIONS(297),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(297),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(295),
    [anon_sym_COLON_STAR] = ACTIONS(295),
    [anon_sym_COLON_PLUS] = ACTIONS(297),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(295),
    [anon_sym_COLON_DASH] = ACTIONS(297),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(295),
    [anon_sym_COLON_DOT] = ACTIONS(297),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(295),
    [anon_sym_COLON_SLASH] = ACTIONS(295),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(295),
    [anon_sym_COLON_LT] = ACTIONS(297),
    [anon_sym_COLON_LT_DASH] = ACTIONS(295),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(295),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(295),
    [anon_sym_COLON_LT_EQ] = ACTIONS(295),
    [anon_sym_COLON_LT_GT] = ACTIONS(295),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(295),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(297),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(295),
    [anon_sym_COLON_EQ] = ACTIONS(297),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(297),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(295),
    [anon_sym_COLON_EQ_GT] = ACTIONS(295),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(295),
    [anon_sym_COLON_GT] = ACTIONS(297),
    [anon_sym_COLON_GT_EQ] = ACTIONS(295),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(295),
    [anon_sym_COLON_AT] = ACTIONS(295),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(295),
    [anon_sym_COLON_CARET] = ACTIONS(295),
    [anon_sym_COLON_PIPE] = ACTIONS(297),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(295),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(297),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(297),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(295),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(295),
    [anon_sym_nil] = ACTIONS(295),
    [anon_sym_COLONnil] = ACTIONS(297),
    [anon_sym_SQUOTE] = ACTIONS(295),
    [anon_sym_LT_LT] = ACTIONS(295),
    [anon_sym_COMMA] = ACTIONS(295),
    [anon_sym_DQUOTE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(295),
    [anon_sym_RBRACE] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_RBRACK] = ACTIONS(295),
    [anon_sym_PIPE] = ACTIONS(295),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(295),
    [anon_sym_EQ_GT] = ACTIONS(295),
    [anon_sym_PERCENT] = ACTIONS(297),
    [anon_sym_defmodule] = ACTIONS(295),
    [anon_sym_end] = ACTIONS(295),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(295),
    [sym_comment] = ACTIONS(43),
  },
  [55] = {
    [aux_sym_keyword_list_repeat1] = STATE(83),
    [anon_sym_COMMA] = ACTIONS(299),
    [anon_sym_RBRACK] = ACTIONS(293),
    [sym_comment] = ACTIONS(43),
  },
  [56] = {
    [sym__list_or_keyword_list] = STATE(84),
    [sym_list] = STATE(84),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_tail] = STATE(85),
    [sym_keyword_list] = STATE(84),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_comment] = ACTIONS(43),
  },
  [57] = {
    [sym__value] = STATE(86),
    [sym_true] = STATE(86),
    [sym_false] = STATE(86),
    [sym_atom] = STATE(86),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(86),
    [sym_charlist] = STATE(86),
    [sym_binary] = STATE(86),
    [sym_string] = STATE(86),
    [sym_tuple] = STATE(86),
    [sym__list_or_keyword_list] = STATE(86),
    [sym_list] = STATE(86),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(86),
    [sym_map] = STATE(86),
    [sym__empty_map] = STATE(16),
    [sym__map] = STATE(16),
    [sym_struct] = STATE(86),
    [sym_module] = STATE(86),
    [sym_alias] = ACTIONS(301),
    [sym_integer] = ACTIONS(303),
    [sym_float] = ACTIONS(301),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(19),
    [anon_sym_COLON_BANG] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(21),
    [anon_sym_COLON_STAR] = ACTIONS(21),
    [anon_sym_COLON_PLUS] = ACTIONS(19),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(21),
    [anon_sym_COLON_DASH] = ACTIONS(19),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(21),
    [anon_sym_COLON_DOT] = ACTIONS(19),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(21),
    [anon_sym_COLON_SLASH] = ACTIONS(21),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(21),
    [anon_sym_COLON_LT] = ACTIONS(19),
    [anon_sym_COLON_LT_DASH] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(21),
    [anon_sym_COLON_LT_EQ] = ACTIONS(21),
    [anon_sym_COLON_LT_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(19),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_EQ_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(21),
    [anon_sym_COLON_GT] = ACTIONS(19),
    [anon_sym_COLON_GT_EQ] = ACTIONS(21),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_AT] = ACTIONS(21),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_COLON_CARET] = ACTIONS(21),
    [anon_sym_COLON_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(19),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(21),
    [anon_sym_nil] = ACTIONS(23),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(41),
    [sym_comment] = ACTIONS(43),
  },
  [58] = {
    [sym__value] = STATE(33),
    [sym_true] = STATE(33),
    [sym_false] = STATE(33),
    [sym_atom] = STATE(33),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(33),
    [sym_charlist] = STATE(33),
    [sym_binary] = STATE(33),
    [sym_string] = STATE(33),
    [sym_tuple] = STATE(33),
    [sym__list_or_keyword_list] = STATE(33),
    [sym_list] = STATE(33),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(33),
    [sym_map] = STATE(33),
    [sym__empty_map] = STATE(16),
    [sym__map] = STATE(16),
    [sym_pair] = STATE(88),
    [sym_struct] = STATE(33),
    [sym_module] = STATE(33),
    [sym_alias] = ACTIONS(91),
    [sym_integer] = ACTIONS(93),
    [sym_float] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(19),
    [anon_sym_COLON_BANG] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(21),
    [anon_sym_COLON_STAR] = ACTIONS(21),
    [anon_sym_COLON_PLUS] = ACTIONS(19),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(21),
    [anon_sym_COLON_DASH] = ACTIONS(19),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(21),
    [anon_sym_COLON_DOT] = ACTIONS(19),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(21),
    [anon_sym_COLON_SLASH] = ACTIONS(21),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(21),
    [anon_sym_COLON_LT] = ACTIONS(19),
    [anon_sym_COLON_LT_DASH] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(21),
    [anon_sym_COLON_LT_EQ] = ACTIONS(21),
    [anon_sym_COLON_LT_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(19),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_EQ_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(21),
    [anon_sym_COLON_GT] = ACTIONS(19),
    [anon_sym_COLON_GT_EQ] = ACTIONS(21),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_AT] = ACTIONS(21),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_COLON_CARET] = ACTIONS(21),
    [anon_sym_COLON_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(19),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(21),
    [anon_sym_nil] = ACTIONS(23),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(41),
    [sym_comment] = ACTIONS(43),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(307),
    [sym_alias] = ACTIONS(307),
    [sym_integer] = ACTIONS(309),
    [sym_float] = ACTIONS(307),
    [anon_sym_true] = ACTIONS(307),
    [anon_sym_COLONtrue] = ACTIONS(309),
    [anon_sym_false] = ACTIONS(307),
    [anon_sym_COLONfalse] = ACTIONS(309),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(309),
    [anon_sym_COLON_BANG] = ACTIONS(309),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(309),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(307),
    [anon_sym_COLON_AMP] = ACTIONS(309),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(309),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(307),
    [anon_sym_COLON_STAR] = ACTIONS(307),
    [anon_sym_COLON_PLUS] = ACTIONS(309),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(307),
    [anon_sym_COLON_DASH] = ACTIONS(309),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(307),
    [anon_sym_COLON_DOT] = ACTIONS(309),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(307),
    [anon_sym_COLON_SLASH] = ACTIONS(307),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(307),
    [anon_sym_COLON_LT] = ACTIONS(309),
    [anon_sym_COLON_LT_DASH] = ACTIONS(307),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(307),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(307),
    [anon_sym_COLON_LT_EQ] = ACTIONS(307),
    [anon_sym_COLON_LT_GT] = ACTIONS(307),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(307),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(309),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(307),
    [anon_sym_COLON_EQ] = ACTIONS(309),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(309),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(307),
    [anon_sym_COLON_EQ_GT] = ACTIONS(307),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(307),
    [anon_sym_COLON_GT] = ACTIONS(309),
    [anon_sym_COLON_GT_EQ] = ACTIONS(307),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(307),
    [anon_sym_COLON_AT] = ACTIONS(307),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(307),
    [anon_sym_COLON_CARET] = ACTIONS(307),
    [anon_sym_COLON_PIPE] = ACTIONS(309),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(307),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(309),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(307),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(309),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(307),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(307),
    [anon_sym_nil] = ACTIONS(307),
    [anon_sym_COLONnil] = ACTIONS(309),
    [anon_sym_SQUOTE] = ACTIONS(307),
    [anon_sym_LT_LT] = ACTIONS(307),
    [anon_sym_COMMA] = ACTIONS(307),
    [anon_sym_DQUOTE] = ACTIONS(307),
    [anon_sym_LBRACE] = ACTIONS(307),
    [anon_sym_RBRACE] = ACTIONS(307),
    [anon_sym_LBRACK] = ACTIONS(307),
    [anon_sym_RBRACK] = ACTIONS(307),
    [anon_sym_PIPE] = ACTIONS(307),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(307),
    [anon_sym_EQ_GT] = ACTIONS(307),
    [anon_sym_PERCENT] = ACTIONS(309),
    [anon_sym_defmodule] = ACTIONS(307),
    [anon_sym_end] = ACTIONS(307),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(307),
    [sym_comment] = ACTIONS(43),
  },
  [60] = {
    [aux_sym__map_repeat1] = STATE(90),
    [anon_sym_COMMA] = ACTIONS(311),
    [anon_sym_RBRACE] = ACTIONS(305),
    [sym_comment] = ACTIONS(43),
  },
  [61] = {
    [sym__value] = STATE(33),
    [sym_true] = STATE(33),
    [sym_false] = STATE(33),
    [sym_atom] = STATE(33),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(33),
    [sym_charlist] = STATE(33),
    [sym_binary] = STATE(33),
    [sym_string] = STATE(33),
    [sym_tuple] = STATE(33),
    [sym__list_or_keyword_list] = STATE(33),
    [sym_list] = STATE(33),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(33),
    [sym_map] = STATE(33),
    [sym__empty_map] = STATE(16),
    [sym__map] = STATE(16),
    [sym_pair] = STATE(92),
    [sym_struct] = STATE(33),
    [sym_module] = STATE(33),
    [sym_alias] = ACTIONS(91),
    [sym_integer] = ACTIONS(93),
    [sym_float] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(19),
    [anon_sym_COLON_BANG] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(21),
    [anon_sym_COLON_STAR] = ACTIONS(21),
    [anon_sym_COLON_PLUS] = ACTIONS(19),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(21),
    [anon_sym_COLON_DASH] = ACTIONS(19),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(21),
    [anon_sym_COLON_DOT] = ACTIONS(19),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(21),
    [anon_sym_COLON_SLASH] = ACTIONS(21),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(21),
    [anon_sym_COLON_LT] = ACTIONS(19),
    [anon_sym_COLON_LT_DASH] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(21),
    [anon_sym_COLON_LT_EQ] = ACTIONS(21),
    [anon_sym_COLON_LT_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(19),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_EQ_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(21),
    [anon_sym_COLON_GT] = ACTIONS(19),
    [anon_sym_COLON_GT_EQ] = ACTIONS(21),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_AT] = ACTIONS(21),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_COLON_CARET] = ACTIONS(21),
    [anon_sym_COLON_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(19),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(21),
    [anon_sym_nil] = ACTIONS(23),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(41),
    [sym_comment] = ACTIONS(43),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(315),
    [sym_alias] = ACTIONS(315),
    [sym_integer] = ACTIONS(317),
    [sym_float] = ACTIONS(315),
    [anon_sym_true] = ACTIONS(315),
    [anon_sym_COLONtrue] = ACTIONS(317),
    [anon_sym_false] = ACTIONS(315),
    [anon_sym_COLONfalse] = ACTIONS(317),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(317),
    [anon_sym_COLON_BANG] = ACTIONS(317),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(317),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(315),
    [anon_sym_COLON_AMP] = ACTIONS(317),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(317),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(315),
    [anon_sym_COLON_STAR] = ACTIONS(315),
    [anon_sym_COLON_PLUS] = ACTIONS(317),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(315),
    [anon_sym_COLON_DASH] = ACTIONS(317),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(315),
    [anon_sym_COLON_DOT] = ACTIONS(317),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(315),
    [anon_sym_COLON_SLASH] = ACTIONS(315),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(315),
    [anon_sym_COLON_LT] = ACTIONS(317),
    [anon_sym_COLON_LT_DASH] = ACTIONS(315),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(315),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(315),
    [anon_sym_COLON_LT_EQ] = ACTIONS(315),
    [anon_sym_COLON_LT_GT] = ACTIONS(315),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(315),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(317),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(315),
    [anon_sym_COLON_EQ] = ACTIONS(317),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(317),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(315),
    [anon_sym_COLON_EQ_GT] = ACTIONS(315),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(315),
    [anon_sym_COLON_GT] = ACTIONS(317),
    [anon_sym_COLON_GT_EQ] = ACTIONS(315),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(315),
    [anon_sym_COLON_AT] = ACTIONS(315),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(315),
    [anon_sym_COLON_CARET] = ACTIONS(315),
    [anon_sym_COLON_PIPE] = ACTIONS(317),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(315),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(317),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(315),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(317),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(315),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(315),
    [anon_sym_nil] = ACTIONS(315),
    [anon_sym_COLONnil] = ACTIONS(317),
    [anon_sym_SQUOTE] = ACTIONS(315),
    [anon_sym_LT_LT] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_RBRACE] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_RBRACK] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(315),
    [anon_sym_EQ_GT] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(317),
    [anon_sym_defmodule] = ACTIONS(315),
    [anon_sym_end] = ACTIONS(315),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(315),
    [sym_comment] = ACTIONS(43),
  },
  [63] = {
    [sym_module_attribute] = STATE(95),
    [aux_sym_module_repeat1] = STATE(95),
    [anon_sym_end] = ACTIONS(319),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(321),
    [sym_comment] = ACTIONS(43),
  },
  [64] = {
    [anon_sym_COMMA] = ACTIONS(323),
    [anon_sym_GT_GT] = ACTIONS(323),
    [sym_comment] = ACTIONS(43),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(325),
    [sym_alias] = ACTIONS(325),
    [sym_integer] = ACTIONS(327),
    [sym_float] = ACTIONS(325),
    [anon_sym_true] = ACTIONS(325),
    [anon_sym_COLONtrue] = ACTIONS(327),
    [anon_sym_false] = ACTIONS(325),
    [anon_sym_COLONfalse] = ACTIONS(327),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(327),
    [anon_sym_COLON_BANG] = ACTIONS(327),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(327),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(325),
    [anon_sym_COLON_AMP] = ACTIONS(327),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(327),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(325),
    [anon_sym_COLON_STAR] = ACTIONS(325),
    [anon_sym_COLON_PLUS] = ACTIONS(327),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(325),
    [anon_sym_COLON_DASH] = ACTIONS(327),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(325),
    [anon_sym_COLON_DOT] = ACTIONS(327),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(325),
    [anon_sym_COLON_SLASH] = ACTIONS(325),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(325),
    [anon_sym_COLON_LT] = ACTIONS(327),
    [anon_sym_COLON_LT_DASH] = ACTIONS(325),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(325),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(325),
    [anon_sym_COLON_LT_EQ] = ACTIONS(325),
    [anon_sym_COLON_LT_GT] = ACTIONS(325),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(325),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(327),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(325),
    [anon_sym_COLON_EQ] = ACTIONS(327),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(327),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(325),
    [anon_sym_COLON_EQ_GT] = ACTIONS(325),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(325),
    [anon_sym_COLON_GT] = ACTIONS(327),
    [anon_sym_COLON_GT_EQ] = ACTIONS(325),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(325),
    [anon_sym_COLON_AT] = ACTIONS(325),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(325),
    [anon_sym_COLON_CARET] = ACTIONS(325),
    [anon_sym_COLON_PIPE] = ACTIONS(327),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(325),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(327),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(325),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(327),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(325),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(325),
    [anon_sym_nil] = ACTIONS(325),
    [anon_sym_COLONnil] = ACTIONS(327),
    [anon_sym_SQUOTE] = ACTIONS(325),
    [anon_sym_LT_LT] = ACTIONS(325),
    [anon_sym_COMMA] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(325),
    [anon_sym_RBRACE] = ACTIONS(325),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_RBRACK] = ACTIONS(325),
    [anon_sym_PIPE] = ACTIONS(325),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(325),
    [anon_sym_EQ_GT] = ACTIONS(325),
    [anon_sym_PERCENT] = ACTIONS(327),
    [anon_sym_defmodule] = ACTIONS(325),
    [anon_sym_end] = ACTIONS(325),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(325),
    [sym_comment] = ACTIONS(43),
  },
  [66] = {
    [anon_sym_COMMA] = ACTIONS(329),
    [anon_sym_GT_GT] = ACTIONS(329),
    [sym_comment] = ACTIONS(43),
  },
  [67] = {
    [sym_charlist] = STATE(20),
    [sym_binary_segment] = STATE(66),
    [sym_string] = STATE(20),
    [sym_integer] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(43),
  },
  [68] = {
    [aux_sym_binary_repeat1] = STATE(68),
    [anon_sym_COMMA] = ACTIONS(333),
    [anon_sym_GT_GT] = ACTIONS(329),
    [sym_comment] = ACTIONS(43),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(336),
    [sym_alias] = ACTIONS(336),
    [sym_integer] = ACTIONS(338),
    [sym_float] = ACTIONS(336),
    [anon_sym_true] = ACTIONS(336),
    [anon_sym_COLONtrue] = ACTIONS(338),
    [anon_sym_false] = ACTIONS(336),
    [anon_sym_COLONfalse] = ACTIONS(338),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(338),
    [anon_sym_COLON_BANG] = ACTIONS(338),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(338),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(336),
    [anon_sym_COLON_AMP] = ACTIONS(338),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(338),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(336),
    [anon_sym_COLON_STAR] = ACTIONS(336),
    [anon_sym_COLON_PLUS] = ACTIONS(338),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(336),
    [anon_sym_COLON_DASH] = ACTIONS(338),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(336),
    [anon_sym_COLON_DOT] = ACTIONS(338),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(336),
    [anon_sym_COLON_SLASH] = ACTIONS(336),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(336),
    [anon_sym_COLON_LT] = ACTIONS(338),
    [anon_sym_COLON_LT_DASH] = ACTIONS(336),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(336),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(336),
    [anon_sym_COLON_LT_EQ] = ACTIONS(336),
    [anon_sym_COLON_LT_GT] = ACTIONS(336),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(336),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(338),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(336),
    [anon_sym_COLON_EQ] = ACTIONS(338),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(338),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(336),
    [anon_sym_COLON_EQ_GT] = ACTIONS(336),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(336),
    [anon_sym_COLON_GT] = ACTIONS(338),
    [anon_sym_COLON_GT_EQ] = ACTIONS(336),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(336),
    [anon_sym_COLON_AT] = ACTIONS(336),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(336),
    [anon_sym_COLON_CARET] = ACTIONS(336),
    [anon_sym_COLON_PIPE] = ACTIONS(338),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(336),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(338),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(336),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(338),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(336),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(336),
    [anon_sym_nil] = ACTIONS(336),
    [anon_sym_COLONnil] = ACTIONS(338),
    [anon_sym_SQUOTE] = ACTIONS(336),
    [anon_sym_LT_LT] = ACTIONS(336),
    [anon_sym_COMMA] = ACTIONS(336),
    [anon_sym_DQUOTE] = ACTIONS(336),
    [anon_sym_LBRACE] = ACTIONS(336),
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_LBRACK] = ACTIONS(336),
    [anon_sym_RBRACK] = ACTIONS(336),
    [anon_sym_PIPE] = ACTIONS(336),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(336),
    [anon_sym_EQ_GT] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_defmodule] = ACTIONS(336),
    [anon_sym_end] = ACTIONS(336),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(336),
    [sym_comment] = ACTIONS(43),
  },
  [70] = {
    [anon_sym_COMMA] = ACTIONS(340),
    [anon_sym_RBRACE] = ACTIONS(340),
    [anon_sym_RBRACK] = ACTIONS(340),
    [sym_comment] = ACTIONS(43),
  },
  [71] = {
    [aux_sym_keyword_list_repeat1] = STATE(99),
    [anon_sym_COMMA] = ACTIONS(342),
    [anon_sym_RBRACE] = ACTIONS(344),
    [sym_comment] = ACTIONS(43),
  },
  [72] = {
    [anon_sym_COMMA] = ACTIONS(346),
    [anon_sym_RBRACE] = ACTIONS(348),
    [sym_comment] = ACTIONS(43),
  },
  [73] = {
    [sym__expression] = STATE(70),
    [sym__value] = STATE(70),
    [sym_true] = STATE(70),
    [sym_false] = STATE(70),
    [sym_atom] = STATE(70),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(71),
    [sym_nil] = STATE(70),
    [sym_charlist] = STATE(70),
    [sym_binary] = STATE(70),
    [sym_string] = STATE(70),
    [sym_tuple] = STATE(70),
    [sym__list_or_keyword_list] = STATE(70),
    [sym_list] = STATE(70),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(70),
    [sym_map] = STATE(70),
    [sym__empty_map] = STATE(16),
    [sym__map] = STATE(16),
    [sym_struct] = STATE(70),
    [sym_implicit_keyword_list] = STATE(102),
    [sym_module] = STATE(70),
    [sym_alias] = ACTIONS(271),
    [sym_integer] = ACTIONS(271),
    [sym_float] = ACTIONS(273),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(19),
    [anon_sym_COLON_BANG] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(21),
    [anon_sym_COLON_STAR] = ACTIONS(21),
    [anon_sym_COLON_PLUS] = ACTIONS(19),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(21),
    [anon_sym_COLON_DASH] = ACTIONS(19),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(21),
    [anon_sym_COLON_DOT] = ACTIONS(19),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(21),
    [anon_sym_COLON_SLASH] = ACTIONS(21),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(21),
    [anon_sym_COLON_LT] = ACTIONS(19),
    [anon_sym_COLON_LT_DASH] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(21),
    [anon_sym_COLON_LT_EQ] = ACTIONS(21),
    [anon_sym_COLON_LT_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(19),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_EQ_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(21),
    [anon_sym_COLON_GT] = ACTIONS(19),
    [anon_sym_COLON_GT_EQ] = ACTIONS(21),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_AT] = ACTIONS(21),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_COLON_CARET] = ACTIONS(21),
    [anon_sym_COLON_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(19),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(21),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_nil] = ACTIONS(25),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(348),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [74] = {
    [aux_sym_tuple_repeat1] = STATE(74),
    [anon_sym_COMMA] = ACTIONS(350),
    [anon_sym_RBRACE] = ACTIONS(340),
    [sym_comment] = ACTIONS(43),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(353),
    [sym_alias] = ACTIONS(353),
    [sym_integer] = ACTIONS(355),
    [sym_float] = ACTIONS(353),
    [anon_sym_true] = ACTIONS(353),
    [anon_sym_COLONtrue] = ACTIONS(355),
    [anon_sym_false] = ACTIONS(353),
    [anon_sym_COLONfalse] = ACTIONS(355),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(355),
    [anon_sym_COLON_BANG] = ACTIONS(355),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(355),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(353),
    [anon_sym_COLON_AMP] = ACTIONS(355),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(355),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(353),
    [anon_sym_COLON_STAR] = ACTIONS(353),
    [anon_sym_COLON_PLUS] = ACTIONS(355),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(353),
    [anon_sym_COLON_DASH] = ACTIONS(355),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(353),
    [anon_sym_COLON_DOT] = ACTIONS(355),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(353),
    [anon_sym_COLON_SLASH] = ACTIONS(353),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(353),
    [anon_sym_COLON_LT] = ACTIONS(355),
    [anon_sym_COLON_LT_DASH] = ACTIONS(353),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(353),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(353),
    [anon_sym_COLON_LT_EQ] = ACTIONS(353),
    [anon_sym_COLON_LT_GT] = ACTIONS(353),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(353),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(355),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(353),
    [anon_sym_COLON_EQ] = ACTIONS(355),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(355),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(353),
    [anon_sym_COLON_EQ_GT] = ACTIONS(353),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(353),
    [anon_sym_COLON_GT] = ACTIONS(355),
    [anon_sym_COLON_GT_EQ] = ACTIONS(353),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(353),
    [anon_sym_COLON_AT] = ACTIONS(353),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(353),
    [anon_sym_COLON_CARET] = ACTIONS(353),
    [anon_sym_COLON_PIPE] = ACTIONS(355),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(353),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(355),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(353),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(355),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(353),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(353),
    [anon_sym_nil] = ACTIONS(353),
    [anon_sym_COLONnil] = ACTIONS(355),
    [anon_sym_SQUOTE] = ACTIONS(353),
    [anon_sym_LT_LT] = ACTIONS(353),
    [anon_sym_COMMA] = ACTIONS(353),
    [anon_sym_DQUOTE] = ACTIONS(353),
    [anon_sym_LBRACE] = ACTIONS(353),
    [anon_sym_RBRACE] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(353),
    [anon_sym_RBRACK] = ACTIONS(353),
    [anon_sym_PIPE] = ACTIONS(353),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(353),
    [anon_sym_EQ_GT] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(355),
    [anon_sym_defmodule] = ACTIONS(353),
    [anon_sym_end] = ACTIONS(353),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(353),
    [sym_comment] = ACTIONS(43),
  },
  [76] = {
    [aux_sym_keyword_list_repeat1] = STATE(104),
    [anon_sym_COMMA] = ACTIONS(342),
    [anon_sym_RBRACK] = ACTIONS(344),
    [sym_comment] = ACTIONS(43),
  },
  [77] = {
    [anon_sym_COMMA] = ACTIONS(357),
    [anon_sym_RBRACK] = ACTIONS(359),
    [sym_comment] = ACTIONS(43),
  },
  [78] = {
    [sym__expression] = STATE(70),
    [sym__value] = STATE(70),
    [sym_true] = STATE(70),
    [sym_false] = STATE(70),
    [sym_atom] = STATE(70),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(76),
    [sym_nil] = STATE(70),
    [sym_charlist] = STATE(70),
    [sym_binary] = STATE(70),
    [sym_string] = STATE(70),
    [sym_tuple] = STATE(70),
    [sym__list_or_keyword_list] = STATE(70),
    [sym_list] = STATE(70),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(70),
    [sym_map] = STATE(70),
    [sym__empty_map] = STATE(16),
    [sym__map] = STATE(16),
    [sym_struct] = STATE(70),
    [sym_implicit_keyword_list] = STATE(107),
    [sym_module] = STATE(70),
    [sym_alias] = ACTIONS(271),
    [sym_integer] = ACTIONS(271),
    [sym_float] = ACTIONS(273),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(19),
    [anon_sym_COLON_BANG] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(21),
    [anon_sym_COLON_STAR] = ACTIONS(21),
    [anon_sym_COLON_PLUS] = ACTIONS(19),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(21),
    [anon_sym_COLON_DASH] = ACTIONS(19),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(21),
    [anon_sym_COLON_DOT] = ACTIONS(19),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(21),
    [anon_sym_COLON_SLASH] = ACTIONS(21),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(21),
    [anon_sym_COLON_LT] = ACTIONS(19),
    [anon_sym_COLON_LT_DASH] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(21),
    [anon_sym_COLON_LT_EQ] = ACTIONS(21),
    [anon_sym_COLON_LT_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(19),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_EQ_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(21),
    [anon_sym_COLON_GT] = ACTIONS(19),
    [anon_sym_COLON_GT_EQ] = ACTIONS(21),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_AT] = ACTIONS(21),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_COLON_CARET] = ACTIONS(21),
    [anon_sym_COLON_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(19),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(21),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_nil] = ACTIONS(25),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(359),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [79] = {
    [aux_sym_tuple_repeat1] = STATE(79),
    [anon_sym_COMMA] = ACTIONS(350),
    [anon_sym_RBRACK] = ACTIONS(340),
    [sym_comment] = ACTIONS(43),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(361),
    [sym_alias] = ACTIONS(361),
    [sym_integer] = ACTIONS(363),
    [sym_float] = ACTIONS(361),
    [anon_sym_true] = ACTIONS(361),
    [anon_sym_COLONtrue] = ACTIONS(363),
    [anon_sym_false] = ACTIONS(361),
    [anon_sym_COLONfalse] = ACTIONS(363),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(363),
    [anon_sym_COLON_BANG] = ACTIONS(363),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(363),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(361),
    [anon_sym_COLON_AMP] = ACTIONS(363),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(363),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(361),
    [anon_sym_COLON_STAR] = ACTIONS(361),
    [anon_sym_COLON_PLUS] = ACTIONS(363),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(361),
    [anon_sym_COLON_DASH] = ACTIONS(363),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(361),
    [anon_sym_COLON_DOT] = ACTIONS(363),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(361),
    [anon_sym_COLON_SLASH] = ACTIONS(361),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(361),
    [anon_sym_COLON_LT] = ACTIONS(363),
    [anon_sym_COLON_LT_DASH] = ACTIONS(361),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(361),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(361),
    [anon_sym_COLON_LT_EQ] = ACTIONS(361),
    [anon_sym_COLON_LT_GT] = ACTIONS(361),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(361),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(363),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(361),
    [anon_sym_COLON_EQ] = ACTIONS(363),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(363),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(361),
    [anon_sym_COLON_EQ_GT] = ACTIONS(361),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(361),
    [anon_sym_COLON_GT] = ACTIONS(363),
    [anon_sym_COLON_GT_EQ] = ACTIONS(361),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(361),
    [anon_sym_COLON_AT] = ACTIONS(361),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(361),
    [anon_sym_COLON_CARET] = ACTIONS(361),
    [anon_sym_COLON_PIPE] = ACTIONS(363),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(361),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(363),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(361),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(363),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(361),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(361),
    [anon_sym_nil] = ACTIONS(361),
    [anon_sym_COLONnil] = ACTIONS(363),
    [anon_sym_SQUOTE] = ACTIONS(361),
    [anon_sym_LT_LT] = ACTIONS(361),
    [anon_sym_COMMA] = ACTIONS(361),
    [anon_sym_DQUOTE] = ACTIONS(361),
    [anon_sym_LBRACE] = ACTIONS(361),
    [anon_sym_RBRACE] = ACTIONS(361),
    [anon_sym_LBRACK] = ACTIONS(361),
    [anon_sym_RBRACK] = ACTIONS(361),
    [anon_sym_PIPE] = ACTIONS(361),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(361),
    [anon_sym_EQ_GT] = ACTIONS(361),
    [anon_sym_PERCENT] = ACTIONS(363),
    [anon_sym_defmodule] = ACTIONS(361),
    [anon_sym_end] = ACTIONS(361),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(361),
    [sym_comment] = ACTIONS(43),
  },
  [81] = {
    [anon_sym_COMMA] = ACTIONS(365),
    [anon_sym_RBRACE] = ACTIONS(365),
    [anon_sym_RBRACK] = ACTIONS(365),
    [anon_sym_end] = ACTIONS(365),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(365),
    [sym_comment] = ACTIONS(43),
  },
  [82] = {
    [sym_keyword] = STATE(81),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(367),
    [sym_comment] = ACTIONS(43),
  },
  [83] = {
    [aux_sym_keyword_list_repeat1] = STATE(83),
    [anon_sym_COMMA] = ACTIONS(369),
    [anon_sym_RBRACK] = ACTIONS(365),
    [sym_comment] = ACTIONS(43),
  },
  [84] = {
    [anon_sym_RBRACK] = ACTIONS(372),
    [sym_comment] = ACTIONS(43),
  },
  [85] = {
    [anon_sym_RBRACK] = ACTIONS(374),
    [sym_comment] = ACTIONS(43),
  },
  [86] = {
    [anon_sym_COMMA] = ACTIONS(376),
    [anon_sym_RBRACE] = ACTIONS(376),
    [sym_comment] = ACTIONS(43),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(378),
    [sym_alias] = ACTIONS(378),
    [sym_integer] = ACTIONS(380),
    [sym_float] = ACTIONS(378),
    [anon_sym_true] = ACTIONS(378),
    [anon_sym_COLONtrue] = ACTIONS(380),
    [anon_sym_false] = ACTIONS(378),
    [anon_sym_COLONfalse] = ACTIONS(380),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(380),
    [anon_sym_COLON_BANG] = ACTIONS(380),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(380),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(378),
    [anon_sym_COLON_AMP] = ACTIONS(380),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(380),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(378),
    [anon_sym_COLON_STAR] = ACTIONS(378),
    [anon_sym_COLON_PLUS] = ACTIONS(380),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(378),
    [anon_sym_COLON_DASH] = ACTIONS(380),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(378),
    [anon_sym_COLON_DOT] = ACTIONS(380),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(378),
    [anon_sym_COLON_SLASH] = ACTIONS(378),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(378),
    [anon_sym_COLON_LT] = ACTIONS(380),
    [anon_sym_COLON_LT_DASH] = ACTIONS(378),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(378),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(378),
    [anon_sym_COLON_LT_EQ] = ACTIONS(378),
    [anon_sym_COLON_LT_GT] = ACTIONS(378),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(378),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(380),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(378),
    [anon_sym_COLON_EQ] = ACTIONS(380),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(380),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(378),
    [anon_sym_COLON_EQ_GT] = ACTIONS(378),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(378),
    [anon_sym_COLON_GT] = ACTIONS(380),
    [anon_sym_COLON_GT_EQ] = ACTIONS(378),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(378),
    [anon_sym_COLON_AT] = ACTIONS(378),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(378),
    [anon_sym_COLON_CARET] = ACTIONS(378),
    [anon_sym_COLON_PIPE] = ACTIONS(380),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(378),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(380),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(378),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(380),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(378),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(378),
    [anon_sym_nil] = ACTIONS(378),
    [anon_sym_COLONnil] = ACTIONS(380),
    [anon_sym_SQUOTE] = ACTIONS(378),
    [anon_sym_LT_LT] = ACTIONS(378),
    [anon_sym_COMMA] = ACTIONS(378),
    [anon_sym_DQUOTE] = ACTIONS(378),
    [anon_sym_LBRACE] = ACTIONS(378),
    [anon_sym_RBRACE] = ACTIONS(378),
    [anon_sym_LBRACK] = ACTIONS(378),
    [anon_sym_RBRACK] = ACTIONS(378),
    [anon_sym_PIPE] = ACTIONS(378),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(378),
    [anon_sym_EQ_GT] = ACTIONS(378),
    [anon_sym_PERCENT] = ACTIONS(380),
    [anon_sym_defmodule] = ACTIONS(378),
    [anon_sym_end] = ACTIONS(378),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(378),
    [sym_comment] = ACTIONS(43),
  },
  [88] = {
    [anon_sym_COMMA] = ACTIONS(382),
    [anon_sym_RBRACE] = ACTIONS(382),
    [sym_comment] = ACTIONS(43),
  },
  [89] = {
    [sym__value] = STATE(33),
    [sym_true] = STATE(33),
    [sym_false] = STATE(33),
    [sym_atom] = STATE(33),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(33),
    [sym_charlist] = STATE(33),
    [sym_binary] = STATE(33),
    [sym_string] = STATE(33),
    [sym_tuple] = STATE(33),
    [sym__list_or_keyword_list] = STATE(33),
    [sym_list] = STATE(33),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(33),
    [sym_map] = STATE(33),
    [sym__empty_map] = STATE(16),
    [sym__map] = STATE(16),
    [sym_pair] = STATE(88),
    [sym_struct] = STATE(33),
    [sym_module] = STATE(33),
    [sym_alias] = ACTIONS(91),
    [sym_integer] = ACTIONS(93),
    [sym_float] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(19),
    [anon_sym_COLON_BANG] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(21),
    [anon_sym_COLON_STAR] = ACTIONS(21),
    [anon_sym_COLON_PLUS] = ACTIONS(19),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(21),
    [anon_sym_COLON_DASH] = ACTIONS(19),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(21),
    [anon_sym_COLON_DOT] = ACTIONS(19),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(21),
    [anon_sym_COLON_SLASH] = ACTIONS(21),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(21),
    [anon_sym_COLON_LT] = ACTIONS(19),
    [anon_sym_COLON_LT_DASH] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(21),
    [anon_sym_COLON_LT_EQ] = ACTIONS(21),
    [anon_sym_COLON_LT_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(19),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_EQ_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(21),
    [anon_sym_COLON_GT] = ACTIONS(19),
    [anon_sym_COLON_GT_EQ] = ACTIONS(21),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_AT] = ACTIONS(21),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_COLON_CARET] = ACTIONS(21),
    [anon_sym_COLON_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(19),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(21),
    [anon_sym_nil] = ACTIONS(23),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(384),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(41),
    [sym_comment] = ACTIONS(43),
  },
  [90] = {
    [aux_sym__map_repeat1] = STATE(90),
    [anon_sym_COMMA] = ACTIONS(386),
    [anon_sym_RBRACE] = ACTIONS(382),
    [sym_comment] = ACTIONS(43),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(389),
    [sym_alias] = ACTIONS(389),
    [sym_integer] = ACTIONS(391),
    [sym_float] = ACTIONS(389),
    [anon_sym_true] = ACTIONS(389),
    [anon_sym_COLONtrue] = ACTIONS(391),
    [anon_sym_false] = ACTIONS(389),
    [anon_sym_COLONfalse] = ACTIONS(391),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(391),
    [anon_sym_COLON_BANG] = ACTIONS(391),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(391),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(389),
    [anon_sym_COLON_AMP] = ACTIONS(391),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(391),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(389),
    [anon_sym_COLON_STAR] = ACTIONS(389),
    [anon_sym_COLON_PLUS] = ACTIONS(391),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(389),
    [anon_sym_COLON_DASH] = ACTIONS(391),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(389),
    [anon_sym_COLON_DOT] = ACTIONS(391),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(389),
    [anon_sym_COLON_SLASH] = ACTIONS(389),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(389),
    [anon_sym_COLON_LT] = ACTIONS(391),
    [anon_sym_COLON_LT_DASH] = ACTIONS(389),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(389),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(389),
    [anon_sym_COLON_LT_EQ] = ACTIONS(389),
    [anon_sym_COLON_LT_GT] = ACTIONS(389),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(389),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(391),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(389),
    [anon_sym_COLON_EQ] = ACTIONS(391),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(391),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(389),
    [anon_sym_COLON_EQ_GT] = ACTIONS(389),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(389),
    [anon_sym_COLON_GT] = ACTIONS(391),
    [anon_sym_COLON_GT_EQ] = ACTIONS(389),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(389),
    [anon_sym_COLON_AT] = ACTIONS(389),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(389),
    [anon_sym_COLON_CARET] = ACTIONS(389),
    [anon_sym_COLON_PIPE] = ACTIONS(391),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(389),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(391),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(389),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(391),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(389),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(389),
    [anon_sym_nil] = ACTIONS(389),
    [anon_sym_COLONnil] = ACTIONS(391),
    [anon_sym_SQUOTE] = ACTIONS(389),
    [anon_sym_LT_LT] = ACTIONS(389),
    [anon_sym_COMMA] = ACTIONS(389),
    [anon_sym_DQUOTE] = ACTIONS(389),
    [anon_sym_LBRACE] = ACTIONS(389),
    [anon_sym_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(389),
    [anon_sym_RBRACK] = ACTIONS(389),
    [anon_sym_PIPE] = ACTIONS(389),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(389),
    [anon_sym_EQ_GT] = ACTIONS(389),
    [anon_sym_PERCENT] = ACTIONS(391),
    [anon_sym_defmodule] = ACTIONS(389),
    [anon_sym_end] = ACTIONS(389),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(389),
    [sym_comment] = ACTIONS(43),
  },
  [92] = {
    [aux_sym__map_repeat1] = STATE(114),
    [anon_sym_COMMA] = ACTIONS(393),
    [anon_sym_RBRACE] = ACTIONS(395),
    [sym_comment] = ACTIONS(43),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(397),
    [sym_alias] = ACTIONS(397),
    [sym_integer] = ACTIONS(399),
    [sym_float] = ACTIONS(397),
    [anon_sym_true] = ACTIONS(397),
    [anon_sym_COLONtrue] = ACTIONS(399),
    [anon_sym_false] = ACTIONS(397),
    [anon_sym_COLONfalse] = ACTIONS(399),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(399),
    [anon_sym_COLON_BANG] = ACTIONS(399),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(399),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(397),
    [anon_sym_COLON_AMP] = ACTIONS(399),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(399),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(397),
    [anon_sym_COLON_STAR] = ACTIONS(397),
    [anon_sym_COLON_PLUS] = ACTIONS(399),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(397),
    [anon_sym_COLON_DASH] = ACTIONS(399),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(397),
    [anon_sym_COLON_DOT] = ACTIONS(399),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(397),
    [anon_sym_COLON_SLASH] = ACTIONS(397),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(397),
    [anon_sym_COLON_LT] = ACTIONS(399),
    [anon_sym_COLON_LT_DASH] = ACTIONS(397),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(397),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(397),
    [anon_sym_COLON_LT_EQ] = ACTIONS(397),
    [anon_sym_COLON_LT_GT] = ACTIONS(397),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(397),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(399),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(397),
    [anon_sym_COLON_EQ] = ACTIONS(399),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(399),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(397),
    [anon_sym_COLON_EQ_GT] = ACTIONS(397),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(397),
    [anon_sym_COLON_GT] = ACTIONS(399),
    [anon_sym_COLON_GT_EQ] = ACTIONS(397),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(397),
    [anon_sym_COLON_AT] = ACTIONS(397),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(397),
    [anon_sym_COLON_CARET] = ACTIONS(397),
    [anon_sym_COLON_PIPE] = ACTIONS(399),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(397),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(399),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(397),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(399),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(397),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(397),
    [anon_sym_nil] = ACTIONS(397),
    [anon_sym_COLONnil] = ACTIONS(399),
    [anon_sym_SQUOTE] = ACTIONS(397),
    [anon_sym_LT_LT] = ACTIONS(397),
    [anon_sym_COMMA] = ACTIONS(397),
    [anon_sym_DQUOTE] = ACTIONS(397),
    [anon_sym_LBRACE] = ACTIONS(397),
    [anon_sym_RBRACE] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_RBRACK] = ACTIONS(397),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(397),
    [anon_sym_EQ_GT] = ACTIONS(397),
    [anon_sym_PERCENT] = ACTIONS(399),
    [anon_sym_defmodule] = ACTIONS(397),
    [anon_sym_end] = ACTIONS(397),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(397),
    [sym_comment] = ACTIONS(43),
  },
  [94] = {
    [sym__value] = STATE(115),
    [sym_true] = STATE(115),
    [sym_false] = STATE(115),
    [sym_atom] = STATE(115),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(116),
    [sym_nil] = STATE(115),
    [sym_charlist] = STATE(115),
    [sym_binary] = STATE(115),
    [sym_string] = STATE(115),
    [sym_tuple] = STATE(115),
    [sym__list_or_keyword_list] = STATE(115),
    [sym_list] = STATE(115),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(115),
    [sym_map] = STATE(115),
    [sym__empty_map] = STATE(16),
    [sym__map] = STATE(16),
    [sym_struct] = STATE(115),
    [sym_implicit_keyword_list] = STATE(115),
    [sym_module] = STATE(115),
    [sym_alias] = ACTIONS(401),
    [sym_integer] = ACTIONS(401),
    [sym_float] = ACTIONS(403),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(19),
    [anon_sym_COLON_BANG] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(21),
    [anon_sym_COLON_STAR] = ACTIONS(21),
    [anon_sym_COLON_PLUS] = ACTIONS(19),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(21),
    [anon_sym_COLON_DASH] = ACTIONS(19),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(21),
    [anon_sym_COLON_DOT] = ACTIONS(19),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(21),
    [anon_sym_COLON_SLASH] = ACTIONS(21),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(21),
    [anon_sym_COLON_LT] = ACTIONS(19),
    [anon_sym_COLON_LT_DASH] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(21),
    [anon_sym_COLON_LT_EQ] = ACTIONS(21),
    [anon_sym_COLON_LT_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(19),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_EQ_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(21),
    [anon_sym_COLON_GT] = ACTIONS(19),
    [anon_sym_COLON_GT_EQ] = ACTIONS(21),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_AT] = ACTIONS(21),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_COLON_CARET] = ACTIONS(21),
    [anon_sym_COLON_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(19),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(21),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_nil] = ACTIONS(25),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [anon_sym_end] = ACTIONS(405),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(407),
    [sym_comment] = ACTIONS(43),
  },
  [95] = {
    [sym_module_attribute] = STATE(118),
    [aux_sym_module_repeat1] = STATE(118),
    [anon_sym_end] = ACTIONS(409),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(321),
    [sym_comment] = ACTIONS(43),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(411),
    [sym_alias] = ACTIONS(411),
    [sym_integer] = ACTIONS(413),
    [sym_float] = ACTIONS(411),
    [anon_sym_true] = ACTIONS(411),
    [anon_sym_COLONtrue] = ACTIONS(413),
    [anon_sym_false] = ACTIONS(411),
    [anon_sym_COLONfalse] = ACTIONS(413),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(413),
    [anon_sym_COLON_BANG] = ACTIONS(413),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(413),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(411),
    [anon_sym_COLON_AMP] = ACTIONS(413),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(413),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(411),
    [anon_sym_COLON_STAR] = ACTIONS(411),
    [anon_sym_COLON_PLUS] = ACTIONS(413),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(411),
    [anon_sym_COLON_DASH] = ACTIONS(413),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(411),
    [anon_sym_COLON_DOT] = ACTIONS(413),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(411),
    [anon_sym_COLON_SLASH] = ACTIONS(411),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(411),
    [anon_sym_COLON_LT] = ACTIONS(413),
    [anon_sym_COLON_LT_DASH] = ACTIONS(411),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(411),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(411),
    [anon_sym_COLON_LT_EQ] = ACTIONS(411),
    [anon_sym_COLON_LT_GT] = ACTIONS(411),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(411),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(413),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(411),
    [anon_sym_COLON_EQ] = ACTIONS(413),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(413),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(411),
    [anon_sym_COLON_EQ_GT] = ACTIONS(411),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(411),
    [anon_sym_COLON_GT] = ACTIONS(413),
    [anon_sym_COLON_GT_EQ] = ACTIONS(411),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(411),
    [anon_sym_COLON_AT] = ACTIONS(411),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(411),
    [anon_sym_COLON_CARET] = ACTIONS(411),
    [anon_sym_COLON_PIPE] = ACTIONS(413),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(411),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(413),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(411),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(413),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(411),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(411),
    [anon_sym_nil] = ACTIONS(411),
    [anon_sym_COLONnil] = ACTIONS(413),
    [anon_sym_SQUOTE] = ACTIONS(411),
    [anon_sym_LT_LT] = ACTIONS(411),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_DQUOTE] = ACTIONS(411),
    [anon_sym_LBRACE] = ACTIONS(411),
    [anon_sym_RBRACE] = ACTIONS(411),
    [anon_sym_LBRACK] = ACTIONS(411),
    [anon_sym_RBRACK] = ACTIONS(411),
    [anon_sym_PIPE] = ACTIONS(411),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(411),
    [anon_sym_EQ_GT] = ACTIONS(411),
    [anon_sym_PERCENT] = ACTIONS(413),
    [anon_sym_defmodule] = ACTIONS(411),
    [anon_sym_end] = ACTIONS(411),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(411),
    [sym_comment] = ACTIONS(43),
  },
  [97] = {
    [sym_charlist] = STATE(20),
    [sym_binary_segment] = STATE(66),
    [sym_string] = STATE(20),
    [sym_integer] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(43),
  },
  [98] = {
    [sym_keyword] = STATE(81),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [sym_comment] = ACTIONS(43),
  },
  [99] = {
    [aux_sym_keyword_list_repeat1] = STATE(119),
    [anon_sym_COMMA] = ACTIONS(342),
    [anon_sym_RBRACE] = ACTIONS(415),
    [sym_comment] = ACTIONS(43),
  },
  [100] = {
    [anon_sym_RBRACE] = ACTIONS(417),
    [sym_comment] = ACTIONS(43),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(419),
    [sym_alias] = ACTIONS(419),
    [sym_integer] = ACTIONS(421),
    [sym_float] = ACTIONS(419),
    [anon_sym_true] = ACTIONS(419),
    [anon_sym_COLONtrue] = ACTIONS(421),
    [anon_sym_false] = ACTIONS(419),
    [anon_sym_COLONfalse] = ACTIONS(421),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(421),
    [anon_sym_COLON_BANG] = ACTIONS(421),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(421),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(419),
    [anon_sym_COLON_AMP] = ACTIONS(421),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(421),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(419),
    [anon_sym_COLON_STAR] = ACTIONS(419),
    [anon_sym_COLON_PLUS] = ACTIONS(421),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(419),
    [anon_sym_COLON_DASH] = ACTIONS(421),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(419),
    [anon_sym_COLON_DOT] = ACTIONS(421),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(419),
    [anon_sym_COLON_SLASH] = ACTIONS(419),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(419),
    [anon_sym_COLON_LT] = ACTIONS(421),
    [anon_sym_COLON_LT_DASH] = ACTIONS(419),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(419),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(419),
    [anon_sym_COLON_LT_EQ] = ACTIONS(419),
    [anon_sym_COLON_LT_GT] = ACTIONS(419),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(419),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(421),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(419),
    [anon_sym_COLON_EQ] = ACTIONS(421),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(421),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(419),
    [anon_sym_COLON_EQ_GT] = ACTIONS(419),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(419),
    [anon_sym_COLON_GT] = ACTIONS(421),
    [anon_sym_COLON_GT_EQ] = ACTIONS(419),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(419),
    [anon_sym_COLON_AT] = ACTIONS(419),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(419),
    [anon_sym_COLON_CARET] = ACTIONS(419),
    [anon_sym_COLON_PIPE] = ACTIONS(421),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(419),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(421),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(419),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(421),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(419),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(419),
    [anon_sym_nil] = ACTIONS(419),
    [anon_sym_COLONnil] = ACTIONS(421),
    [anon_sym_SQUOTE] = ACTIONS(419),
    [anon_sym_LT_LT] = ACTIONS(419),
    [anon_sym_COMMA] = ACTIONS(419),
    [anon_sym_DQUOTE] = ACTIONS(419),
    [anon_sym_LBRACE] = ACTIONS(419),
    [anon_sym_RBRACE] = ACTIONS(419),
    [anon_sym_LBRACK] = ACTIONS(419),
    [anon_sym_RBRACK] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(419),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(419),
    [anon_sym_EQ_GT] = ACTIONS(419),
    [anon_sym_PERCENT] = ACTIONS(421),
    [anon_sym_defmodule] = ACTIONS(419),
    [anon_sym_end] = ACTIONS(419),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(419),
    [sym_comment] = ACTIONS(43),
  },
  [102] = {
    [anon_sym_COMMA] = ACTIONS(423),
    [anon_sym_RBRACE] = ACTIONS(417),
    [sym_comment] = ACTIONS(43),
  },
  [103] = {
    [sym__expression] = STATE(70),
    [sym__value] = STATE(70),
    [sym_true] = STATE(70),
    [sym_false] = STATE(70),
    [sym_atom] = STATE(70),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(70),
    [sym_charlist] = STATE(70),
    [sym_binary] = STATE(70),
    [sym_string] = STATE(70),
    [sym_tuple] = STATE(70),
    [sym__list_or_keyword_list] = STATE(70),
    [sym_list] = STATE(70),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(70),
    [sym_map] = STATE(70),
    [sym__empty_map] = STATE(16),
    [sym__map] = STATE(16),
    [sym_struct] = STATE(70),
    [sym_module] = STATE(70),
    [sym_alias] = ACTIONS(273),
    [sym_integer] = ACTIONS(271),
    [sym_float] = ACTIONS(273),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(19),
    [anon_sym_COLON_BANG] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(21),
    [anon_sym_COLON_STAR] = ACTIONS(21),
    [anon_sym_COLON_PLUS] = ACTIONS(19),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(21),
    [anon_sym_COLON_DASH] = ACTIONS(19),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(21),
    [anon_sym_COLON_DOT] = ACTIONS(19),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(21),
    [anon_sym_COLON_SLASH] = ACTIONS(21),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(21),
    [anon_sym_COLON_LT] = ACTIONS(19),
    [anon_sym_COLON_LT_DASH] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(21),
    [anon_sym_COLON_LT_EQ] = ACTIONS(21),
    [anon_sym_COLON_LT_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(19),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_EQ_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(21),
    [anon_sym_COLON_GT] = ACTIONS(19),
    [anon_sym_COLON_GT_EQ] = ACTIONS(21),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_AT] = ACTIONS(21),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_COLON_CARET] = ACTIONS(21),
    [anon_sym_COLON_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(19),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(21),
    [anon_sym_nil] = ACTIONS(23),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(41),
    [sym_comment] = ACTIONS(43),
  },
  [104] = {
    [aux_sym_keyword_list_repeat1] = STATE(83),
    [anon_sym_COMMA] = ACTIONS(342),
    [anon_sym_RBRACK] = ACTIONS(415),
    [sym_comment] = ACTIONS(43),
  },
  [105] = {
    [anon_sym_RBRACK] = ACTIONS(425),
    [sym_comment] = ACTIONS(43),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(427),
    [sym_alias] = ACTIONS(427),
    [sym_integer] = ACTIONS(429),
    [sym_float] = ACTIONS(427),
    [anon_sym_true] = ACTIONS(427),
    [anon_sym_COLONtrue] = ACTIONS(429),
    [anon_sym_false] = ACTIONS(427),
    [anon_sym_COLONfalse] = ACTIONS(429),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(429),
    [anon_sym_COLON_BANG] = ACTIONS(429),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(429),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(427),
    [anon_sym_COLON_AMP] = ACTIONS(429),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(429),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(427),
    [anon_sym_COLON_STAR] = ACTIONS(427),
    [anon_sym_COLON_PLUS] = ACTIONS(429),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(427),
    [anon_sym_COLON_DASH] = ACTIONS(429),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(427),
    [anon_sym_COLON_DOT] = ACTIONS(429),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(427),
    [anon_sym_COLON_SLASH] = ACTIONS(427),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(427),
    [anon_sym_COLON_LT] = ACTIONS(429),
    [anon_sym_COLON_LT_DASH] = ACTIONS(427),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(427),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(427),
    [anon_sym_COLON_LT_EQ] = ACTIONS(427),
    [anon_sym_COLON_LT_GT] = ACTIONS(427),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(427),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(429),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(427),
    [anon_sym_COLON_EQ] = ACTIONS(429),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(429),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(427),
    [anon_sym_COLON_EQ_GT] = ACTIONS(427),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(427),
    [anon_sym_COLON_GT] = ACTIONS(429),
    [anon_sym_COLON_GT_EQ] = ACTIONS(427),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(427),
    [anon_sym_COLON_AT] = ACTIONS(427),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(427),
    [anon_sym_COLON_CARET] = ACTIONS(427),
    [anon_sym_COLON_PIPE] = ACTIONS(429),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(427),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(429),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(427),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(429),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(427),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(427),
    [anon_sym_nil] = ACTIONS(427),
    [anon_sym_COLONnil] = ACTIONS(429),
    [anon_sym_SQUOTE] = ACTIONS(427),
    [anon_sym_LT_LT] = ACTIONS(427),
    [anon_sym_COMMA] = ACTIONS(427),
    [anon_sym_DQUOTE] = ACTIONS(427),
    [anon_sym_LBRACE] = ACTIONS(427),
    [anon_sym_RBRACE] = ACTIONS(427),
    [anon_sym_LBRACK] = ACTIONS(427),
    [anon_sym_RBRACK] = ACTIONS(427),
    [anon_sym_PIPE] = ACTIONS(427),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(427),
    [anon_sym_EQ_GT] = ACTIONS(427),
    [anon_sym_PERCENT] = ACTIONS(429),
    [anon_sym_defmodule] = ACTIONS(427),
    [anon_sym_end] = ACTIONS(427),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(427),
    [sym_comment] = ACTIONS(43),
  },
  [107] = {
    [anon_sym_COMMA] = ACTIONS(431),
    [anon_sym_RBRACK] = ACTIONS(425),
    [sym_comment] = ACTIONS(43),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(433),
    [sym_alias] = ACTIONS(433),
    [sym_integer] = ACTIONS(435),
    [sym_float] = ACTIONS(433),
    [anon_sym_true] = ACTIONS(433),
    [anon_sym_COLONtrue] = ACTIONS(435),
    [anon_sym_false] = ACTIONS(433),
    [anon_sym_COLONfalse] = ACTIONS(435),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(435),
    [anon_sym_COLON_BANG] = ACTIONS(435),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(435),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(433),
    [anon_sym_COLON_AMP] = ACTIONS(435),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(435),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(433),
    [anon_sym_COLON_STAR] = ACTIONS(433),
    [anon_sym_COLON_PLUS] = ACTIONS(435),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(433),
    [anon_sym_COLON_DASH] = ACTIONS(435),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(433),
    [anon_sym_COLON_DOT] = ACTIONS(435),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(433),
    [anon_sym_COLON_SLASH] = ACTIONS(433),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(433),
    [anon_sym_COLON_LT] = ACTIONS(435),
    [anon_sym_COLON_LT_DASH] = ACTIONS(433),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(433),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(433),
    [anon_sym_COLON_LT_EQ] = ACTIONS(433),
    [anon_sym_COLON_LT_GT] = ACTIONS(433),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(433),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(435),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(433),
    [anon_sym_COLON_EQ] = ACTIONS(435),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(435),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(433),
    [anon_sym_COLON_EQ_GT] = ACTIONS(433),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(433),
    [anon_sym_COLON_GT] = ACTIONS(435),
    [anon_sym_COLON_GT_EQ] = ACTIONS(433),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(433),
    [anon_sym_COLON_AT] = ACTIONS(433),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(433),
    [anon_sym_COLON_CARET] = ACTIONS(433),
    [anon_sym_COLON_PIPE] = ACTIONS(435),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(433),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(435),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(433),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(435),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(433),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(433),
    [anon_sym_nil] = ACTIONS(433),
    [anon_sym_COLONnil] = ACTIONS(435),
    [anon_sym_SQUOTE] = ACTIONS(433),
    [anon_sym_LT_LT] = ACTIONS(433),
    [anon_sym_COMMA] = ACTIONS(433),
    [anon_sym_DQUOTE] = ACTIONS(433),
    [anon_sym_LBRACE] = ACTIONS(433),
    [anon_sym_RBRACE] = ACTIONS(433),
    [anon_sym_LBRACK] = ACTIONS(433),
    [anon_sym_RBRACK] = ACTIONS(433),
    [anon_sym_PIPE] = ACTIONS(433),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(433),
    [anon_sym_EQ_GT] = ACTIONS(433),
    [anon_sym_PERCENT] = ACTIONS(435),
    [anon_sym_defmodule] = ACTIONS(433),
    [anon_sym_end] = ACTIONS(433),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(433),
    [sym_comment] = ACTIONS(43),
  },
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(437),
    [sym_alias] = ACTIONS(437),
    [sym_integer] = ACTIONS(439),
    [sym_float] = ACTIONS(437),
    [anon_sym_true] = ACTIONS(437),
    [anon_sym_COLONtrue] = ACTIONS(439),
    [anon_sym_false] = ACTIONS(437),
    [anon_sym_COLONfalse] = ACTIONS(439),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(439),
    [anon_sym_COLON_BANG] = ACTIONS(439),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(439),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(437),
    [anon_sym_COLON_AMP] = ACTIONS(439),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(439),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(437),
    [anon_sym_COLON_STAR] = ACTIONS(437),
    [anon_sym_COLON_PLUS] = ACTIONS(439),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(437),
    [anon_sym_COLON_DASH] = ACTIONS(439),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(437),
    [anon_sym_COLON_DOT] = ACTIONS(439),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(437),
    [anon_sym_COLON_SLASH] = ACTIONS(437),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(437),
    [anon_sym_COLON_LT] = ACTIONS(439),
    [anon_sym_COLON_LT_DASH] = ACTIONS(437),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(437),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(437),
    [anon_sym_COLON_LT_EQ] = ACTIONS(437),
    [anon_sym_COLON_LT_GT] = ACTIONS(437),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(437),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(439),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(437),
    [anon_sym_COLON_EQ] = ACTIONS(439),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(439),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(437),
    [anon_sym_COLON_EQ_GT] = ACTIONS(437),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(437),
    [anon_sym_COLON_GT] = ACTIONS(439),
    [anon_sym_COLON_GT_EQ] = ACTIONS(437),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(437),
    [anon_sym_COLON_AT] = ACTIONS(437),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(437),
    [anon_sym_COLON_CARET] = ACTIONS(437),
    [anon_sym_COLON_PIPE] = ACTIONS(439),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(437),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(439),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(437),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(439),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(437),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(437),
    [anon_sym_nil] = ACTIONS(437),
    [anon_sym_COLONnil] = ACTIONS(439),
    [anon_sym_SQUOTE] = ACTIONS(437),
    [anon_sym_LT_LT] = ACTIONS(437),
    [anon_sym_COMMA] = ACTIONS(437),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [anon_sym_LBRACE] = ACTIONS(437),
    [anon_sym_RBRACE] = ACTIONS(437),
    [anon_sym_LBRACK] = ACTIONS(437),
    [anon_sym_RBRACK] = ACTIONS(437),
    [anon_sym_PIPE] = ACTIONS(437),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(437),
    [anon_sym_EQ_GT] = ACTIONS(437),
    [anon_sym_PERCENT] = ACTIONS(439),
    [anon_sym_defmodule] = ACTIONS(437),
    [anon_sym_end] = ACTIONS(437),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(437),
    [sym_comment] = ACTIONS(43),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(441),
    [sym_alias] = ACTIONS(441),
    [sym_integer] = ACTIONS(443),
    [sym_float] = ACTIONS(441),
    [anon_sym_true] = ACTIONS(441),
    [anon_sym_COLONtrue] = ACTIONS(443),
    [anon_sym_false] = ACTIONS(441),
    [anon_sym_COLONfalse] = ACTIONS(443),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(443),
    [anon_sym_COLON_BANG] = ACTIONS(443),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(443),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(441),
    [anon_sym_COLON_AMP] = ACTIONS(443),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(443),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(441),
    [anon_sym_COLON_STAR] = ACTIONS(441),
    [anon_sym_COLON_PLUS] = ACTIONS(443),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(441),
    [anon_sym_COLON_DASH] = ACTIONS(443),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(441),
    [anon_sym_COLON_DOT] = ACTIONS(443),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(441),
    [anon_sym_COLON_SLASH] = ACTIONS(441),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(441),
    [anon_sym_COLON_LT] = ACTIONS(443),
    [anon_sym_COLON_LT_DASH] = ACTIONS(441),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(441),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(441),
    [anon_sym_COLON_LT_EQ] = ACTIONS(441),
    [anon_sym_COLON_LT_GT] = ACTIONS(441),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(441),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(443),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(441),
    [anon_sym_COLON_EQ] = ACTIONS(443),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(443),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(441),
    [anon_sym_COLON_EQ_GT] = ACTIONS(441),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(441),
    [anon_sym_COLON_GT] = ACTIONS(443),
    [anon_sym_COLON_GT_EQ] = ACTIONS(441),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(441),
    [anon_sym_COLON_AT] = ACTIONS(441),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(441),
    [anon_sym_COLON_CARET] = ACTIONS(441),
    [anon_sym_COLON_PIPE] = ACTIONS(443),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(441),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(443),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(441),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(443),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(441),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(441),
    [anon_sym_nil] = ACTIONS(441),
    [anon_sym_COLONnil] = ACTIONS(443),
    [anon_sym_SQUOTE] = ACTIONS(441),
    [anon_sym_LT_LT] = ACTIONS(441),
    [anon_sym_COMMA] = ACTIONS(441),
    [anon_sym_DQUOTE] = ACTIONS(441),
    [anon_sym_LBRACE] = ACTIONS(441),
    [anon_sym_RBRACE] = ACTIONS(441),
    [anon_sym_LBRACK] = ACTIONS(441),
    [anon_sym_RBRACK] = ACTIONS(441),
    [anon_sym_PIPE] = ACTIONS(441),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(441),
    [anon_sym_EQ_GT] = ACTIONS(441),
    [anon_sym_PERCENT] = ACTIONS(443),
    [anon_sym_defmodule] = ACTIONS(441),
    [anon_sym_end] = ACTIONS(441),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(441),
    [sym_comment] = ACTIONS(43),
  },
  [111] = {
    [sym__value] = STATE(33),
    [sym_true] = STATE(33),
    [sym_false] = STATE(33),
    [sym_atom] = STATE(33),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(33),
    [sym_charlist] = STATE(33),
    [sym_binary] = STATE(33),
    [sym_string] = STATE(33),
    [sym_tuple] = STATE(33),
    [sym__list_or_keyword_list] = STATE(33),
    [sym_list] = STATE(33),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(33),
    [sym_map] = STATE(33),
    [sym__empty_map] = STATE(16),
    [sym__map] = STATE(16),
    [sym_pair] = STATE(88),
    [sym_struct] = STATE(33),
    [sym_module] = STATE(33),
    [sym_alias] = ACTIONS(91),
    [sym_integer] = ACTIONS(93),
    [sym_float] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(19),
    [anon_sym_COLON_BANG] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(21),
    [anon_sym_COLON_STAR] = ACTIONS(21),
    [anon_sym_COLON_PLUS] = ACTIONS(19),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(21),
    [anon_sym_COLON_DASH] = ACTIONS(19),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(21),
    [anon_sym_COLON_DOT] = ACTIONS(19),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(21),
    [anon_sym_COLON_SLASH] = ACTIONS(21),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(21),
    [anon_sym_COLON_LT] = ACTIONS(19),
    [anon_sym_COLON_LT_DASH] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(21),
    [anon_sym_COLON_LT_EQ] = ACTIONS(21),
    [anon_sym_COLON_LT_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(19),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_EQ_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(21),
    [anon_sym_COLON_GT] = ACTIONS(19),
    [anon_sym_COLON_GT_EQ] = ACTIONS(21),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_AT] = ACTIONS(21),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_COLON_CARET] = ACTIONS(21),
    [anon_sym_COLON_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(19),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(21),
    [anon_sym_nil] = ACTIONS(23),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(41),
    [sym_comment] = ACTIONS(43),
  },
  [112] = {
    [sym__value] = STATE(33),
    [sym_true] = STATE(33),
    [sym_false] = STATE(33),
    [sym_atom] = STATE(33),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(33),
    [sym_charlist] = STATE(33),
    [sym_binary] = STATE(33),
    [sym_string] = STATE(33),
    [sym_tuple] = STATE(33),
    [sym__list_or_keyword_list] = STATE(33),
    [sym_list] = STATE(33),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(33),
    [sym_map] = STATE(33),
    [sym__empty_map] = STATE(16),
    [sym__map] = STATE(16),
    [sym_pair] = STATE(88),
    [sym_struct] = STATE(33),
    [sym_module] = STATE(33),
    [sym_alias] = ACTIONS(91),
    [sym_integer] = ACTIONS(93),
    [sym_float] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(19),
    [anon_sym_COLON_BANG] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(21),
    [anon_sym_COLON_STAR] = ACTIONS(21),
    [anon_sym_COLON_PLUS] = ACTIONS(19),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(21),
    [anon_sym_COLON_DASH] = ACTIONS(19),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(21),
    [anon_sym_COLON_DOT] = ACTIONS(19),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(21),
    [anon_sym_COLON_SLASH] = ACTIONS(21),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(21),
    [anon_sym_COLON_LT] = ACTIONS(19),
    [anon_sym_COLON_LT_DASH] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(21),
    [anon_sym_COLON_LT_EQ] = ACTIONS(21),
    [anon_sym_COLON_LT_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(19),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_EQ_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(21),
    [anon_sym_COLON_GT] = ACTIONS(19),
    [anon_sym_COLON_GT_EQ] = ACTIONS(21),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_AT] = ACTIONS(21),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_COLON_CARET] = ACTIONS(21),
    [anon_sym_COLON_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(19),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(21),
    [anon_sym_nil] = ACTIONS(23),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(41),
    [sym_comment] = ACTIONS(43),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [sym_alias] = ACTIONS(447),
    [sym_integer] = ACTIONS(449),
    [sym_float] = ACTIONS(447),
    [anon_sym_true] = ACTIONS(447),
    [anon_sym_COLONtrue] = ACTIONS(449),
    [anon_sym_false] = ACTIONS(447),
    [anon_sym_COLONfalse] = ACTIONS(449),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(449),
    [anon_sym_COLON_BANG] = ACTIONS(449),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(449),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(447),
    [anon_sym_COLON_AMP] = ACTIONS(449),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(449),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(447),
    [anon_sym_COLON_STAR] = ACTIONS(447),
    [anon_sym_COLON_PLUS] = ACTIONS(449),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(447),
    [anon_sym_COLON_DASH] = ACTIONS(449),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(447),
    [anon_sym_COLON_DOT] = ACTIONS(449),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(447),
    [anon_sym_COLON_SLASH] = ACTIONS(447),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(447),
    [anon_sym_COLON_LT] = ACTIONS(449),
    [anon_sym_COLON_LT_DASH] = ACTIONS(447),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(447),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(447),
    [anon_sym_COLON_LT_EQ] = ACTIONS(447),
    [anon_sym_COLON_LT_GT] = ACTIONS(447),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(447),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(449),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(447),
    [anon_sym_COLON_EQ] = ACTIONS(449),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(449),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(447),
    [anon_sym_COLON_EQ_GT] = ACTIONS(447),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(447),
    [anon_sym_COLON_GT] = ACTIONS(449),
    [anon_sym_COLON_GT_EQ] = ACTIONS(447),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(447),
    [anon_sym_COLON_AT] = ACTIONS(447),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(447),
    [anon_sym_COLON_CARET] = ACTIONS(447),
    [anon_sym_COLON_PIPE] = ACTIONS(449),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(447),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(449),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(447),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(449),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(447),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(447),
    [anon_sym_nil] = ACTIONS(447),
    [anon_sym_COLONnil] = ACTIONS(449),
    [anon_sym_SQUOTE] = ACTIONS(447),
    [anon_sym_LT_LT] = ACTIONS(447),
    [anon_sym_COMMA] = ACTIONS(447),
    [anon_sym_DQUOTE] = ACTIONS(447),
    [anon_sym_LBRACE] = ACTIONS(447),
    [anon_sym_RBRACE] = ACTIONS(447),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_RBRACK] = ACTIONS(447),
    [anon_sym_PIPE] = ACTIONS(447),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(447),
    [anon_sym_EQ_GT] = ACTIONS(447),
    [anon_sym_PERCENT] = ACTIONS(449),
    [anon_sym_defmodule] = ACTIONS(447),
    [anon_sym_end] = ACTIONS(447),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(447),
    [sym_comment] = ACTIONS(43),
  },
  [114] = {
    [aux_sym__map_repeat1] = STATE(90),
    [anon_sym_COMMA] = ACTIONS(451),
    [anon_sym_RBRACE] = ACTIONS(445),
    [sym_comment] = ACTIONS(43),
  },
  [115] = {
    [anon_sym_end] = ACTIONS(453),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(453),
    [sym_comment] = ACTIONS(43),
  },
  [116] = {
    [aux_sym_keyword_list_repeat1] = STATE(126),
    [anon_sym_COMMA] = ACTIONS(342),
    [anon_sym_end] = ACTIONS(344),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(344),
    [sym_comment] = ACTIONS(43),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(455),
    [sym_alias] = ACTIONS(455),
    [sym_integer] = ACTIONS(457),
    [sym_float] = ACTIONS(455),
    [anon_sym_true] = ACTIONS(455),
    [anon_sym_COLONtrue] = ACTIONS(457),
    [anon_sym_false] = ACTIONS(455),
    [anon_sym_COLONfalse] = ACTIONS(457),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(457),
    [anon_sym_COLON_BANG] = ACTIONS(457),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(457),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(455),
    [anon_sym_COLON_AMP] = ACTIONS(457),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(457),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(455),
    [anon_sym_COLON_STAR] = ACTIONS(455),
    [anon_sym_COLON_PLUS] = ACTIONS(457),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(455),
    [anon_sym_COLON_DASH] = ACTIONS(457),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(455),
    [anon_sym_COLON_DOT] = ACTIONS(457),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(455),
    [anon_sym_COLON_SLASH] = ACTIONS(455),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(455),
    [anon_sym_COLON_LT] = ACTIONS(457),
    [anon_sym_COLON_LT_DASH] = ACTIONS(455),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(455),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(455),
    [anon_sym_COLON_LT_EQ] = ACTIONS(455),
    [anon_sym_COLON_LT_GT] = ACTIONS(455),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(455),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(457),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(455),
    [anon_sym_COLON_EQ] = ACTIONS(457),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(457),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(455),
    [anon_sym_COLON_EQ_GT] = ACTIONS(455),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(455),
    [anon_sym_COLON_GT] = ACTIONS(457),
    [anon_sym_COLON_GT_EQ] = ACTIONS(455),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(455),
    [anon_sym_COLON_AT] = ACTIONS(455),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(455),
    [anon_sym_COLON_CARET] = ACTIONS(455),
    [anon_sym_COLON_PIPE] = ACTIONS(457),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(455),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(457),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(455),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(457),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(455),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(455),
    [anon_sym_nil] = ACTIONS(455),
    [anon_sym_COLONnil] = ACTIONS(457),
    [anon_sym_SQUOTE] = ACTIONS(455),
    [anon_sym_LT_LT] = ACTIONS(455),
    [anon_sym_COMMA] = ACTIONS(455),
    [anon_sym_DQUOTE] = ACTIONS(455),
    [anon_sym_LBRACE] = ACTIONS(455),
    [anon_sym_RBRACE] = ACTIONS(455),
    [anon_sym_LBRACK] = ACTIONS(455),
    [anon_sym_RBRACK] = ACTIONS(455),
    [anon_sym_PIPE] = ACTIONS(455),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(455),
    [anon_sym_EQ_GT] = ACTIONS(455),
    [anon_sym_PERCENT] = ACTIONS(457),
    [anon_sym_defmodule] = ACTIONS(455),
    [anon_sym_end] = ACTIONS(455),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(455),
    [sym_comment] = ACTIONS(43),
  },
  [118] = {
    [sym_module_attribute] = STATE(118),
    [aux_sym_module_repeat1] = STATE(118),
    [anon_sym_end] = ACTIONS(459),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(461),
    [sym_comment] = ACTIONS(43),
  },
  [119] = {
    [aux_sym_keyword_list_repeat1] = STATE(119),
    [anon_sym_COMMA] = ACTIONS(369),
    [anon_sym_RBRACE] = ACTIONS(365),
    [sym_comment] = ACTIONS(43),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(464),
    [sym_alias] = ACTIONS(464),
    [sym_integer] = ACTIONS(466),
    [sym_float] = ACTIONS(464),
    [anon_sym_true] = ACTIONS(464),
    [anon_sym_COLONtrue] = ACTIONS(466),
    [anon_sym_false] = ACTIONS(464),
    [anon_sym_COLONfalse] = ACTIONS(466),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(466),
    [anon_sym_COLON_BANG] = ACTIONS(466),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(466),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(464),
    [anon_sym_COLON_AMP] = ACTIONS(466),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(466),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(464),
    [anon_sym_COLON_STAR] = ACTIONS(464),
    [anon_sym_COLON_PLUS] = ACTIONS(466),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(464),
    [anon_sym_COLON_DASH] = ACTIONS(466),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(464),
    [anon_sym_COLON_DOT] = ACTIONS(466),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(464),
    [anon_sym_COLON_SLASH] = ACTIONS(464),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(464),
    [anon_sym_COLON_LT] = ACTIONS(466),
    [anon_sym_COLON_LT_DASH] = ACTIONS(464),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(464),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(464),
    [anon_sym_COLON_LT_EQ] = ACTIONS(464),
    [anon_sym_COLON_LT_GT] = ACTIONS(464),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(464),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(466),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(464),
    [anon_sym_COLON_EQ] = ACTIONS(466),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(466),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(464),
    [anon_sym_COLON_EQ_GT] = ACTIONS(464),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(464),
    [anon_sym_COLON_GT] = ACTIONS(466),
    [anon_sym_COLON_GT_EQ] = ACTIONS(464),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(464),
    [anon_sym_COLON_AT] = ACTIONS(464),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(464),
    [anon_sym_COLON_CARET] = ACTIONS(464),
    [anon_sym_COLON_PIPE] = ACTIONS(466),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(464),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(466),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(464),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(466),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(464),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(464),
    [anon_sym_nil] = ACTIONS(464),
    [anon_sym_COLONnil] = ACTIONS(466),
    [anon_sym_SQUOTE] = ACTIONS(464),
    [anon_sym_LT_LT] = ACTIONS(464),
    [anon_sym_COMMA] = ACTIONS(464),
    [anon_sym_DQUOTE] = ACTIONS(464),
    [anon_sym_LBRACE] = ACTIONS(464),
    [anon_sym_RBRACE] = ACTIONS(464),
    [anon_sym_LBRACK] = ACTIONS(464),
    [anon_sym_RBRACK] = ACTIONS(464),
    [anon_sym_PIPE] = ACTIONS(464),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(464),
    [anon_sym_EQ_GT] = ACTIONS(464),
    [anon_sym_PERCENT] = ACTIONS(466),
    [anon_sym_defmodule] = ACTIONS(464),
    [anon_sym_end] = ACTIONS(464),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(464),
    [sym_comment] = ACTIONS(43),
  },
  [121] = {
    [anon_sym_RBRACE] = ACTIONS(468),
    [sym_comment] = ACTIONS(43),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(470),
    [sym_alias] = ACTIONS(470),
    [sym_integer] = ACTIONS(472),
    [sym_float] = ACTIONS(470),
    [anon_sym_true] = ACTIONS(470),
    [anon_sym_COLONtrue] = ACTIONS(472),
    [anon_sym_false] = ACTIONS(470),
    [anon_sym_COLONfalse] = ACTIONS(472),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(472),
    [anon_sym_COLON_BANG] = ACTIONS(472),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(472),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(470),
    [anon_sym_COLON_AMP] = ACTIONS(472),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(472),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(470),
    [anon_sym_COLON_STAR] = ACTIONS(470),
    [anon_sym_COLON_PLUS] = ACTIONS(472),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(470),
    [anon_sym_COLON_DASH] = ACTIONS(472),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(470),
    [anon_sym_COLON_DOT] = ACTIONS(472),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(470),
    [anon_sym_COLON_SLASH] = ACTIONS(470),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(470),
    [anon_sym_COLON_LT] = ACTIONS(472),
    [anon_sym_COLON_LT_DASH] = ACTIONS(470),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(470),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(470),
    [anon_sym_COLON_LT_EQ] = ACTIONS(470),
    [anon_sym_COLON_LT_GT] = ACTIONS(470),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(470),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(472),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(470),
    [anon_sym_COLON_EQ] = ACTIONS(472),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(472),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(470),
    [anon_sym_COLON_EQ_GT] = ACTIONS(470),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(470),
    [anon_sym_COLON_GT] = ACTIONS(472),
    [anon_sym_COLON_GT_EQ] = ACTIONS(470),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(470),
    [anon_sym_COLON_AT] = ACTIONS(470),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(470),
    [anon_sym_COLON_CARET] = ACTIONS(470),
    [anon_sym_COLON_PIPE] = ACTIONS(472),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(470),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(472),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(470),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(472),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(470),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(470),
    [anon_sym_nil] = ACTIONS(470),
    [anon_sym_COLONnil] = ACTIONS(472),
    [anon_sym_SQUOTE] = ACTIONS(470),
    [anon_sym_LT_LT] = ACTIONS(470),
    [anon_sym_COMMA] = ACTIONS(470),
    [anon_sym_DQUOTE] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(470),
    [anon_sym_RBRACE] = ACTIONS(470),
    [anon_sym_LBRACK] = ACTIONS(470),
    [anon_sym_RBRACK] = ACTIONS(470),
    [anon_sym_PIPE] = ACTIONS(470),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(470),
    [anon_sym_EQ_GT] = ACTIONS(470),
    [anon_sym_PERCENT] = ACTIONS(472),
    [anon_sym_defmodule] = ACTIONS(470),
    [anon_sym_end] = ACTIONS(470),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(470),
    [sym_comment] = ACTIONS(43),
  },
  [123] = {
    [anon_sym_RBRACK] = ACTIONS(474),
    [sym_comment] = ACTIONS(43),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(476),
    [sym_alias] = ACTIONS(476),
    [sym_integer] = ACTIONS(478),
    [sym_float] = ACTIONS(476),
    [anon_sym_true] = ACTIONS(476),
    [anon_sym_COLONtrue] = ACTIONS(478),
    [anon_sym_false] = ACTIONS(476),
    [anon_sym_COLONfalse] = ACTIONS(478),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(478),
    [anon_sym_COLON_BANG] = ACTIONS(478),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(478),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(476),
    [anon_sym_COLON_AMP] = ACTIONS(478),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(478),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(476),
    [anon_sym_COLON_STAR] = ACTIONS(476),
    [anon_sym_COLON_PLUS] = ACTIONS(478),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(476),
    [anon_sym_COLON_DASH] = ACTIONS(478),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(476),
    [anon_sym_COLON_DOT] = ACTIONS(478),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(476),
    [anon_sym_COLON_SLASH] = ACTIONS(476),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(476),
    [anon_sym_COLON_LT] = ACTIONS(478),
    [anon_sym_COLON_LT_DASH] = ACTIONS(476),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(476),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(476),
    [anon_sym_COLON_LT_EQ] = ACTIONS(476),
    [anon_sym_COLON_LT_GT] = ACTIONS(476),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(476),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(478),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(476),
    [anon_sym_COLON_EQ] = ACTIONS(478),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(478),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(476),
    [anon_sym_COLON_EQ_GT] = ACTIONS(476),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(476),
    [anon_sym_COLON_GT] = ACTIONS(478),
    [anon_sym_COLON_GT_EQ] = ACTIONS(476),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(476),
    [anon_sym_COLON_AT] = ACTIONS(476),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(476),
    [anon_sym_COLON_CARET] = ACTIONS(476),
    [anon_sym_COLON_PIPE] = ACTIONS(478),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(476),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(478),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(476),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(478),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(476),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(476),
    [anon_sym_nil] = ACTIONS(476),
    [anon_sym_COLONnil] = ACTIONS(478),
    [anon_sym_SQUOTE] = ACTIONS(476),
    [anon_sym_LT_LT] = ACTIONS(476),
    [anon_sym_COMMA] = ACTIONS(476),
    [anon_sym_DQUOTE] = ACTIONS(476),
    [anon_sym_LBRACE] = ACTIONS(476),
    [anon_sym_RBRACE] = ACTIONS(476),
    [anon_sym_LBRACK] = ACTIONS(476),
    [anon_sym_RBRACK] = ACTIONS(476),
    [anon_sym_PIPE] = ACTIONS(476),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(476),
    [anon_sym_EQ_GT] = ACTIONS(476),
    [anon_sym_PERCENT] = ACTIONS(478),
    [anon_sym_defmodule] = ACTIONS(476),
    [anon_sym_end] = ACTIONS(476),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(476),
    [sym_comment] = ACTIONS(43),
  },
  [125] = {
    [sym__value] = STATE(33),
    [sym_true] = STATE(33),
    [sym_false] = STATE(33),
    [sym_atom] = STATE(33),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(33),
    [sym_charlist] = STATE(33),
    [sym_binary] = STATE(33),
    [sym_string] = STATE(33),
    [sym_tuple] = STATE(33),
    [sym__list_or_keyword_list] = STATE(33),
    [sym_list] = STATE(33),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(33),
    [sym_map] = STATE(33),
    [sym__empty_map] = STATE(16),
    [sym__map] = STATE(16),
    [sym_pair] = STATE(88),
    [sym_struct] = STATE(33),
    [sym_module] = STATE(33),
    [sym_alias] = ACTIONS(91),
    [sym_integer] = ACTIONS(93),
    [sym_float] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(19),
    [anon_sym_COLON_BANG] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(21),
    [anon_sym_COLON_STAR] = ACTIONS(21),
    [anon_sym_COLON_PLUS] = ACTIONS(19),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(21),
    [anon_sym_COLON_DASH] = ACTIONS(19),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(21),
    [anon_sym_COLON_DOT] = ACTIONS(19),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(21),
    [anon_sym_COLON_SLASH] = ACTIONS(21),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(21),
    [anon_sym_COLON_LT] = ACTIONS(19),
    [anon_sym_COLON_LT_DASH] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(21),
    [anon_sym_COLON_LT_EQ] = ACTIONS(21),
    [anon_sym_COLON_LT_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(19),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_EQ_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(21),
    [anon_sym_COLON_GT] = ACTIONS(19),
    [anon_sym_COLON_GT_EQ] = ACTIONS(21),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_AT] = ACTIONS(21),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_COLON_CARET] = ACTIONS(21),
    [anon_sym_COLON_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(19),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(21),
    [anon_sym_nil] = ACTIONS(23),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(480),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(41),
    [sym_comment] = ACTIONS(43),
  },
  [126] = {
    [aux_sym_keyword_list_repeat1] = STATE(130),
    [anon_sym_COMMA] = ACTIONS(342),
    [anon_sym_end] = ACTIONS(415),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(415),
    [sym_comment] = ACTIONS(43),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(482),
    [sym_alias] = ACTIONS(482),
    [sym_integer] = ACTIONS(484),
    [sym_float] = ACTIONS(482),
    [anon_sym_true] = ACTIONS(482),
    [anon_sym_COLONtrue] = ACTIONS(484),
    [anon_sym_false] = ACTIONS(482),
    [anon_sym_COLONfalse] = ACTIONS(484),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(484),
    [anon_sym_COLON_BANG] = ACTIONS(484),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(484),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(482),
    [anon_sym_COLON_AMP] = ACTIONS(484),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(484),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(482),
    [anon_sym_COLON_STAR] = ACTIONS(482),
    [anon_sym_COLON_PLUS] = ACTIONS(484),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(482),
    [anon_sym_COLON_DASH] = ACTIONS(484),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(482),
    [anon_sym_COLON_DOT] = ACTIONS(484),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(482),
    [anon_sym_COLON_SLASH] = ACTIONS(482),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(482),
    [anon_sym_COLON_LT] = ACTIONS(484),
    [anon_sym_COLON_LT_DASH] = ACTIONS(482),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(482),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(482),
    [anon_sym_COLON_LT_EQ] = ACTIONS(482),
    [anon_sym_COLON_LT_GT] = ACTIONS(482),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(482),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(484),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(482),
    [anon_sym_COLON_EQ] = ACTIONS(484),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(484),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(482),
    [anon_sym_COLON_EQ_GT] = ACTIONS(482),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(482),
    [anon_sym_COLON_GT] = ACTIONS(484),
    [anon_sym_COLON_GT_EQ] = ACTIONS(482),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(482),
    [anon_sym_COLON_AT] = ACTIONS(482),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(482),
    [anon_sym_COLON_CARET] = ACTIONS(482),
    [anon_sym_COLON_PIPE] = ACTIONS(484),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(482),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(484),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(482),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(484),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(482),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(482),
    [anon_sym_nil] = ACTIONS(482),
    [anon_sym_COLONnil] = ACTIONS(484),
    [anon_sym_SQUOTE] = ACTIONS(482),
    [anon_sym_LT_LT] = ACTIONS(482),
    [anon_sym_COMMA] = ACTIONS(482),
    [anon_sym_DQUOTE] = ACTIONS(482),
    [anon_sym_LBRACE] = ACTIONS(482),
    [anon_sym_RBRACE] = ACTIONS(482),
    [anon_sym_LBRACK] = ACTIONS(482),
    [anon_sym_RBRACK] = ACTIONS(482),
    [anon_sym_PIPE] = ACTIONS(482),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(482),
    [anon_sym_EQ_GT] = ACTIONS(482),
    [anon_sym_PERCENT] = ACTIONS(484),
    [anon_sym_defmodule] = ACTIONS(482),
    [anon_sym_end] = ACTIONS(482),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(482),
    [sym_comment] = ACTIONS(43),
  },
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(486),
    [sym_alias] = ACTIONS(486),
    [sym_integer] = ACTIONS(488),
    [sym_float] = ACTIONS(486),
    [anon_sym_true] = ACTIONS(486),
    [anon_sym_COLONtrue] = ACTIONS(488),
    [anon_sym_false] = ACTIONS(486),
    [anon_sym_COLONfalse] = ACTIONS(488),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(488),
    [anon_sym_COLON_BANG] = ACTIONS(488),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(488),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(486),
    [anon_sym_COLON_AMP] = ACTIONS(488),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(488),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(486),
    [anon_sym_COLON_STAR] = ACTIONS(486),
    [anon_sym_COLON_PLUS] = ACTIONS(488),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(486),
    [anon_sym_COLON_DASH] = ACTIONS(488),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(486),
    [anon_sym_COLON_DOT] = ACTIONS(488),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(486),
    [anon_sym_COLON_SLASH] = ACTIONS(486),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(486),
    [anon_sym_COLON_LT] = ACTIONS(488),
    [anon_sym_COLON_LT_DASH] = ACTIONS(486),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(486),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(486),
    [anon_sym_COLON_LT_EQ] = ACTIONS(486),
    [anon_sym_COLON_LT_GT] = ACTIONS(486),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(486),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(488),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(486),
    [anon_sym_COLON_EQ] = ACTIONS(488),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(488),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(486),
    [anon_sym_COLON_EQ_GT] = ACTIONS(486),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(486),
    [anon_sym_COLON_GT] = ACTIONS(488),
    [anon_sym_COLON_GT_EQ] = ACTIONS(486),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(486),
    [anon_sym_COLON_AT] = ACTIONS(486),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(486),
    [anon_sym_COLON_CARET] = ACTIONS(486),
    [anon_sym_COLON_PIPE] = ACTIONS(488),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(486),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(488),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(486),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(488),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(486),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(486),
    [anon_sym_nil] = ACTIONS(486),
    [anon_sym_COLONnil] = ACTIONS(488),
    [anon_sym_SQUOTE] = ACTIONS(486),
    [anon_sym_LT_LT] = ACTIONS(486),
    [anon_sym_COMMA] = ACTIONS(486),
    [anon_sym_DQUOTE] = ACTIONS(486),
    [anon_sym_LBRACE] = ACTIONS(486),
    [anon_sym_RBRACE] = ACTIONS(486),
    [anon_sym_LBRACK] = ACTIONS(486),
    [anon_sym_RBRACK] = ACTIONS(486),
    [anon_sym_PIPE] = ACTIONS(486),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(486),
    [anon_sym_EQ_GT] = ACTIONS(486),
    [anon_sym_PERCENT] = ACTIONS(488),
    [anon_sym_defmodule] = ACTIONS(486),
    [anon_sym_end] = ACTIONS(486),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(486),
    [sym_comment] = ACTIONS(43),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(490),
    [sym_alias] = ACTIONS(490),
    [sym_integer] = ACTIONS(492),
    [sym_float] = ACTIONS(490),
    [anon_sym_true] = ACTIONS(490),
    [anon_sym_COLONtrue] = ACTIONS(492),
    [anon_sym_false] = ACTIONS(490),
    [anon_sym_COLONfalse] = ACTIONS(492),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(492),
    [anon_sym_COLON_BANG] = ACTIONS(492),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(492),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(490),
    [anon_sym_COLON_AMP] = ACTIONS(492),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(492),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(490),
    [anon_sym_COLON_STAR] = ACTIONS(490),
    [anon_sym_COLON_PLUS] = ACTIONS(492),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(490),
    [anon_sym_COLON_DASH] = ACTIONS(492),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(490),
    [anon_sym_COLON_DOT] = ACTIONS(492),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(490),
    [anon_sym_COLON_SLASH] = ACTIONS(490),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(490),
    [anon_sym_COLON_LT] = ACTIONS(492),
    [anon_sym_COLON_LT_DASH] = ACTIONS(490),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(490),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(490),
    [anon_sym_COLON_LT_EQ] = ACTIONS(490),
    [anon_sym_COLON_LT_GT] = ACTIONS(490),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(490),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(492),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(490),
    [anon_sym_COLON_EQ] = ACTIONS(492),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(492),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(490),
    [anon_sym_COLON_EQ_GT] = ACTIONS(490),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(490),
    [anon_sym_COLON_GT] = ACTIONS(492),
    [anon_sym_COLON_GT_EQ] = ACTIONS(490),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(490),
    [anon_sym_COLON_AT] = ACTIONS(490),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(490),
    [anon_sym_COLON_CARET] = ACTIONS(490),
    [anon_sym_COLON_PIPE] = ACTIONS(492),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(490),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(492),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(490),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(492),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(490),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(490),
    [anon_sym_nil] = ACTIONS(490),
    [anon_sym_COLONnil] = ACTIONS(492),
    [anon_sym_SQUOTE] = ACTIONS(490),
    [anon_sym_LT_LT] = ACTIONS(490),
    [anon_sym_COMMA] = ACTIONS(490),
    [anon_sym_DQUOTE] = ACTIONS(490),
    [anon_sym_LBRACE] = ACTIONS(490),
    [anon_sym_RBRACE] = ACTIONS(490),
    [anon_sym_LBRACK] = ACTIONS(490),
    [anon_sym_RBRACK] = ACTIONS(490),
    [anon_sym_PIPE] = ACTIONS(490),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(490),
    [anon_sym_EQ_GT] = ACTIONS(490),
    [anon_sym_PERCENT] = ACTIONS(492),
    [anon_sym_defmodule] = ACTIONS(490),
    [anon_sym_end] = ACTIONS(490),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(490),
    [sym_comment] = ACTIONS(43),
  },
  [130] = {
    [aux_sym_keyword_list_repeat1] = STATE(130),
    [anon_sym_COMMA] = ACTIONS(369),
    [anon_sym_end] = ACTIONS(365),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(365),
    [sym_comment] = ACTIONS(43),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(17),
  [9] = {.count = 1, .reusable = false}, SHIFT(17),
  [11] = {.count = 1, .reusable = true}, SHIFT(2),
  [13] = {.count = 1, .reusable = false}, SHIFT(2),
  [15] = {.count = 1, .reusable = true}, SHIFT(3),
  [17] = {.count = 1, .reusable = false}, SHIFT(3),
  [19] = {.count = 1, .reusable = false}, SHIFT(4),
  [21] = {.count = 1, .reusable = true}, SHIFT(4),
  [23] = {.count = 1, .reusable = true}, SHIFT(5),
  [25] = {.count = 1, .reusable = false}, SHIFT(5),
  [27] = {.count = 1, .reusable = true}, SHIFT(6),
  [29] = {.count = 1, .reusable = true}, SHIFT(7),
  [31] = {.count = 1, .reusable = true}, SHIFT(8),
  [33] = {.count = 1, .reusable = true}, SHIFT(9),
  [35] = {.count = 1, .reusable = true}, SHIFT(10),
  [37] = {.count = 1, .reusable = true}, SHIFT(11),
  [39] = {.count = 1, .reusable = false}, SHIFT(12),
  [41] = {.count = 1, .reusable = true}, SHIFT(13),
  [43] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_true, 1),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym_true, 1),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_false, 1),
  [51] = {.count = 1, .reusable = false}, REDUCE(sym_false, 1),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 1),
  [55] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 1),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_nil, 1),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym_nil, 1),
  [61] = {.count = 1, .reusable = false}, SHIFT(18),
  [63] = {.count = 1, .reusable = false}, SHIFT(19),
  [65] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [67] = {.count = 1, .reusable = true}, SHIFT(20),
  [69] = {.count = 1, .reusable = true}, SHIFT(21),
  [71] = {.count = 1, .reusable = false}, SHIFT(23),
  [73] = {.count = 1, .reusable = false}, SHIFT(24),
  [75] = {.count = 1, .reusable = true}, SHIFT(26),
  [77] = {.count = 1, .reusable = false}, SHIFT(26),
  [79] = {.count = 1, .reusable = true}, SHIFT(25),
  [81] = {.count = 1, .reusable = false}, SHIFT(29),
  [83] = {.count = 1, .reusable = true}, SHIFT(29),
  [85] = {.count = 1, .reusable = true}, SHIFT(27),
  [87] = {.count = 1, .reusable = true}, SHIFT(28),
  [89] = {.count = 1, .reusable = false}, SHIFT(13),
  [91] = {.count = 1, .reusable = true}, SHIFT(33),
  [93] = {.count = 1, .reusable = false}, SHIFT(33),
  [95] = {.count = 1, .reusable = true}, SHIFT(32),
  [97] = {.count = 1, .reusable = true}, SHIFT(35),
  [99] = {.count = 1, .reusable = true}, SHIFT(36),
  [101] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_list, 1),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_list, 1),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_map, 1),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_map, 1),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [113] = {.count = 1, .reusable = true}, SHIFT(37),
  [115] = {.count = 1, .reusable = false}, SHIFT(37),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_charlist, 2),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_charlist, 2),
  [121] = {.count = 1, .reusable = false}, SHIFT(38),
  [123] = {.count = 1, .reusable = false}, SHIFT(39),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_binary_segment, 1),
  [127] = {.count = 1, .reusable = true}, SHIFT(40),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 2),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 2),
  [133] = {.count = 1, .reusable = true}, SHIFT(41),
  [135] = {.count = 1, .reusable = true}, SHIFT(42),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [141] = {.count = 1, .reusable = false}, SHIFT(44),
  [143] = {.count = 1, .reusable = false}, SHIFT(45),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 2),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 2),
  [149] = {.count = 1, .reusable = true}, SHIFT(46),
  [151] = {.count = 1, .reusable = true}, SHIFT(47),
  [153] = {.count = 1, .reusable = true}, SHIFT(49),
  [155] = {.count = 1, .reusable = false}, SHIFT(49),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym__empty_list, 2),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym__empty_list, 2),
  [161] = {.count = 1, .reusable = true}, SHIFT(50),
  [163] = {.count = 1, .reusable = true}, SHIFT(51),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_head, 1),
  [167] = {.count = 1, .reusable = true}, SHIFT(53),
  [169] = {.count = 1, .reusable = true}, SHIFT(54),
  [171] = {.count = 1, .reusable = true}, SHIFT(56),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym__empty_map, 2),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym__empty_map, 2),
  [177] = {.count = 1, .reusable = true}, SHIFT(57),
  [179] = {.count = 1, .reusable = true}, SHIFT(58),
  [181] = {.count = 1, .reusable = true}, SHIFT(59),
  [183] = {.count = 1, .reusable = true}, SHIFT(61),
  [185] = {.count = 1, .reusable = true}, SHIFT(63),
  [187] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [189] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(37),
  [192] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(37),
  [195] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [198] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [201] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [204] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [207] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [210] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [213] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [216] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [219] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [222] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [225] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [228] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [231] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [234] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [237] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [240] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_charlist, 3),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_charlist, 3),
  [247] = {.count = 1, .reusable = false}, REDUCE(aux_sym_charlist_repeat1, 2),
  [249] = {.count = 2, .reusable = false}, REDUCE(aux_sym_charlist_repeat1, 2), SHIFT_REPEAT(39),
  [252] = {.count = 1, .reusable = true}, SHIFT(64),
  [254] = {.count = 1, .reusable = true}, SHIFT(65),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 3),
  [258] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 3),
  [260] = {.count = 1, .reusable = true}, SHIFT(67),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [264] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [266] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2),
  [268] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(45),
  [271] = {.count = 1, .reusable = false}, SHIFT(70),
  [273] = {.count = 1, .reusable = true}, SHIFT(70),
  [275] = {.count = 1, .reusable = true}, SHIFT(69),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 3),
  [279] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 3),
  [281] = {.count = 1, .reusable = true}, SHIFT(73),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_keyword, 2),
  [285] = {.count = 1, .reusable = true}, SHIFT(75),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 3),
  [289] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 3),
  [291] = {.count = 1, .reusable = true}, SHIFT(78),
  [293] = {.count = 1, .reusable = true}, SHIFT(80),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_keyword_list, 3),
  [297] = {.count = 1, .reusable = false}, REDUCE(sym_keyword_list, 3),
  [299] = {.count = 1, .reusable = true}, SHIFT(82),
  [301] = {.count = 1, .reusable = true}, SHIFT(86),
  [303] = {.count = 1, .reusable = false}, SHIFT(86),
  [305] = {.count = 1, .reusable = true}, SHIFT(87),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym__map, 3),
  [309] = {.count = 1, .reusable = false}, REDUCE(sym__map, 3),
  [311] = {.count = 1, .reusable = true}, SHIFT(89),
  [313] = {.count = 1, .reusable = true}, SHIFT(91),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_struct, 3),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym_struct, 3),
  [319] = {.count = 1, .reusable = true}, SHIFT(93),
  [321] = {.count = 1, .reusable = true}, SHIFT(94),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_binary_segment, 3),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 4),
  [327] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 4),
  [329] = {.count = 1, .reusable = true}, REDUCE(aux_sym_binary_repeat1, 2),
  [331] = {.count = 1, .reusable = true}, SHIFT(96),
  [333] = {.count = 2, .reusable = true}, REDUCE(aux_sym_binary_repeat1, 2), SHIFT_REPEAT(97),
  [336] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 4),
  [338] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 4),
  [340] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [342] = {.count = 1, .reusable = true}, SHIFT(98),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym_implicit_keyword_list, 1),
  [346] = {.count = 1, .reusable = true}, SHIFT(100),
  [348] = {.count = 1, .reusable = true}, SHIFT(101),
  [350] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(103),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 4),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 4),
  [357] = {.count = 1, .reusable = true}, SHIFT(105),
  [359] = {.count = 1, .reusable = true}, SHIFT(106),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_keyword_list, 4),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym_keyword_list, 4),
  [365] = {.count = 1, .reusable = true}, REDUCE(aux_sym_keyword_list_repeat1, 2),
  [367] = {.count = 1, .reusable = true}, SHIFT(108),
  [369] = {.count = 2, .reusable = true}, REDUCE(aux_sym_keyword_list_repeat1, 2), SHIFT_REPEAT(98),
  [372] = {.count = 1, .reusable = true}, REDUCE(sym_tail, 1),
  [374] = {.count = 1, .reusable = true}, SHIFT(109),
  [376] = {.count = 1, .reusable = true}, REDUCE(sym_pair, 3),
  [378] = {.count = 1, .reusable = true}, REDUCE(sym__map, 4),
  [380] = {.count = 1, .reusable = false}, REDUCE(sym__map, 4),
  [382] = {.count = 1, .reusable = true}, REDUCE(aux_sym__map_repeat1, 2),
  [384] = {.count = 1, .reusable = true}, SHIFT(110),
  [386] = {.count = 2, .reusable = true}, REDUCE(aux_sym__map_repeat1, 2), SHIFT_REPEAT(111),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym__empty_struct_body, 2),
  [391] = {.count = 1, .reusable = false}, REDUCE(sym__empty_struct_body, 2),
  [393] = {.count = 1, .reusable = true}, SHIFT(112),
  [395] = {.count = 1, .reusable = true}, SHIFT(113),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_module, 4),
  [399] = {.count = 1, .reusable = false}, REDUCE(sym_module, 4),
  [401] = {.count = 1, .reusable = false}, SHIFT(115),
  [403] = {.count = 1, .reusable = true}, SHIFT(115),
  [405] = {.count = 1, .reusable = false}, REDUCE(sym_module_attribute, 1),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_module_attribute, 1),
  [409] = {.count = 1, .reusable = true}, SHIFT(117),
  [411] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 5),
  [413] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 5),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_implicit_keyword_list, 2),
  [417] = {.count = 1, .reusable = true}, SHIFT(120),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 5),
  [421] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 5),
  [423] = {.count = 1, .reusable = true}, SHIFT(121),
  [425] = {.count = 1, .reusable = true}, SHIFT(122),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 5),
  [429] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 5),
  [431] = {.count = 1, .reusable = true}, SHIFT(123),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_keyword_list, 5),
  [435] = {.count = 1, .reusable = false}, REDUCE(sym_keyword_list, 5),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym__head_tail_list, 5),
  [439] = {.count = 1, .reusable = false}, REDUCE(sym__head_tail_list, 5),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym__map, 5),
  [443] = {.count = 1, .reusable = false}, REDUCE(sym__map, 5),
  [445] = {.count = 1, .reusable = true}, SHIFT(124),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym__struct_body, 3),
  [449] = {.count = 1, .reusable = false}, REDUCE(sym__struct_body, 3),
  [451] = {.count = 1, .reusable = true}, SHIFT(125),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_module_attribute, 2),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_module, 5),
  [457] = {.count = 1, .reusable = false}, REDUCE(sym_module, 5),
  [459] = {.count = 1, .reusable = true}, REDUCE(aux_sym_module_repeat1, 2),
  [461] = {.count = 2, .reusable = true}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(94),
  [464] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 6),
  [466] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 6),
  [468] = {.count = 1, .reusable = true}, SHIFT(127),
  [470] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 6),
  [472] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 6),
  [474] = {.count = 1, .reusable = true}, SHIFT(128),
  [476] = {.count = 1, .reusable = true}, REDUCE(sym__struct_body, 4),
  [478] = {.count = 1, .reusable = false}, REDUCE(sym__struct_body, 4),
  [480] = {.count = 1, .reusable = true}, SHIFT(129),
  [482] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 7),
  [484] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 7),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 7),
  [488] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 7),
  [490] = {.count = 1, .reusable = true}, REDUCE(sym__struct_body, 5),
  [492] = {.count = 1, .reusable = false}, REDUCE(sym__struct_body, 5),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_elixir() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
