#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 158
#define SYMBOL_COUNT 121
#define ALIAS_COUNT 0
#define TOKEN_COUNT 77
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
  anon_sym_defstruct = 75,
  sym_comment = 76,
  sym_program = 77,
  sym__expression = 78,
  sym__value = 79,
  sym_true = 80,
  sym_false = 81,
  sym_atom = 82,
  sym__operator_atom = 83,
  sym_keyword = 84,
  sym_nil = 85,
  sym_charlist = 86,
  sym_binary = 87,
  sym_binary_segment = 88,
  sym_string = 89,
  sym_tuple = 90,
  sym__list_or_keyword_list = 91,
  sym_list = 92,
  sym__empty_list = 93,
  sym__simple_list = 94,
  sym__head_tail_list = 95,
  sym_head = 96,
  sym_tail = 97,
  sym_keyword_list = 98,
  sym_map = 99,
  sym__empty_map = 100,
  sym__map = 101,
  sym__keyword_map = 102,
  sym_pair = 103,
  sym_struct = 104,
  sym__empty_struct_body = 105,
  sym__struct_body = 106,
  sym__keyword_struct_body = 107,
  sym_implicit_keyword_list = 108,
  sym_module = 109,
  sym__module_body = 110,
  sym_module_attribute = 111,
  sym_defstruct = 112,
  aux_sym_program_repeat1 = 113,
  aux_sym_charlist_repeat1 = 114,
  aux_sym_binary_repeat1 = 115,
  aux_sym_string_repeat1 = 116,
  aux_sym_tuple_repeat1 = 117,
  aux_sym_keyword_list_repeat1 = 118,
  aux_sym__map_repeat1 = 119,
  aux_sym_module_repeat1 = 120,
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
  [anon_sym_defstruct] = "defstruct",
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
  [sym__keyword_map] = "_keyword_map",
  [sym_pair] = "pair",
  [sym_struct] = "struct",
  [sym__empty_struct_body] = "_empty_struct_body",
  [sym__struct_body] = "_struct_body",
  [sym__keyword_struct_body] = "_keyword_struct_body",
  [sym_implicit_keyword_list] = "implicit_keyword_list",
  [sym_module] = "module",
  [sym__module_body] = "_module_body",
  [sym_module_attribute] = "module_attribute",
  [sym_defstruct] = "defstruct",
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
  [anon_sym_defstruct] = {
    .visible = true,
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
  [sym__keyword_map] = {
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
  [sym__keyword_struct_body] = {
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
  [sym__module_body] = {
    .visible = false,
    .named = true,
  },
  [sym_module_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_defstruct] = {
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
        ADVANCE(120);
      if (lookahead == 'f')
        ADVANCE(123);
      if (lookahead == 'n')
        ADVANCE(128);
      if (lookahead == 't')
        ADVANCE(131);
      if (lookahead == '{')
        ADVANCE(135);
      if (lookahead == '|')
        ADVANCE(136);
      if (lookahead == '}')
        ADVANCE(137);
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
        ADVANCE(138);
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
        ADVANCE(119);
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
      if (lookahead == 's')
        ADVANCE(113);
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
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 't')
        ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 114:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'r')
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
      if (lookahead == 'u')
        ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 116:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'c')
        ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 117:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 't')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_defstruct);
      if (lookahead == ':')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == ':')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 120:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'n')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 121:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'd')
        ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ':')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 123:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'a')
        ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 124:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'l')
        ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 125:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 's')
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
      if (lookahead == 'e')
        ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ':')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 128:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'i')
        ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 129:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'l')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_nil);
      if (lookahead == ':')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 131:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'r')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 132:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'u')
        ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 133:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'e')
        ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ':')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead == '.')
        ADVANCE(139);
      if (lookahead == ':')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(138);
      END_STATE();
    case 139:
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead == '.')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(140);
      END_STATE();
    case 141:
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
        ADVANCE(142);
      if (lookahead == ':')
        ADVANCE(151);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '[')
        ADVANCE(101);
      if (lookahead == '\\')
        SKIP(153);
      if (lookahead == 'd')
        ADVANCE(154);
      if (lookahead == 'f')
        ADVANCE(163);
      if (lookahead == 'n')
        ADVANCE(168);
      if (lookahead == 't')
        ADVANCE(171);
      if (lookahead == '{')
        ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(141);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '_')
        ADVANCE(143);
      if (lookahead == 'b')
        ADVANCE(145);
      if (lookahead == 'o')
        ADVANCE(147);
      if (lookahead == 'x')
        ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(144);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '_')
        ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(144);
      END_STATE();
    case 145:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(145);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(146);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(148);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(150);
      END_STATE();
    case 151:
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
        ADVANCE(152);
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
    case 152:
      if (lookahead == ':')
        ADVANCE(45);
      END_STATE();
    case 153:
      if (lookahead == '\n')
        SKIP(141);
      END_STATE();
    case 154:
      if (lookahead == 'e')
        ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == 'f')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 'm')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'o')
        ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == 'd')
        ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 'u')
        ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 'l')
        ADVANCE(161);
      END_STATE();
    case 161:
      if (lookahead == 'e')
        ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_defmodule);
      END_STATE();
    case 163:
      if (lookahead == 'a')
        ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'l')
        ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == 's')
        ADVANCE(166);
      END_STATE();
    case 166:
      if (lookahead == 'e')
        ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 168:
      if (lookahead == 'i')
        ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 'l')
        ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 171:
      if (lookahead == 'r')
        ADVANCE(172);
      END_STATE();
    case 172:
      if (lookahead == 'u')
        ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == 'e')
        ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 175:
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
        ADVANCE(142);
      if (lookahead == ':')
        ADVANCE(151);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '=')
        ADVANCE(95);
      if (lookahead == '@')
        ADVANCE(99);
      if (lookahead == '[')
        ADVANCE(101);
      if (lookahead == '\\')
        SKIP(176);
      if (lookahead == ']')
        ADVANCE(103);
      if (lookahead == 'd')
        ADVANCE(177);
      if (lookahead == 'e')
        ADVANCE(186);
      if (lookahead == 'f')
        ADVANCE(163);
      if (lookahead == 'n')
        ADVANCE(168);
      if (lookahead == 't')
        ADVANCE(171);
      if (lookahead == '{')
        ADVANCE(135);
      if (lookahead == '|')
        ADVANCE(136);
      if (lookahead == '}')
        ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(175);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(140);
      END_STATE();
    case 176:
      if (lookahead == '\n')
        SKIP(175);
      END_STATE();
    case 177:
      if (lookahead == 'e')
        ADVANCE(178);
      END_STATE();
    case 178:
      if (lookahead == 'f')
        ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == 'm')
        ADVANCE(157);
      if (lookahead == 's')
        ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 't')
        ADVANCE(181);
      END_STATE();
    case 181:
      if (lookahead == 'r')
        ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == 'u')
        ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == 'c')
        ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead == 't')
        ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_defstruct);
      END_STATE();
    case 186:
      if (lookahead == 'n')
        ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == 'd')
        ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 189:
      if (lookahead == '#')
        ADVANCE(190);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '\\')
        ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(192);
      if (lookahead != 0)
        ADVANCE(192);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead == '\'')
        ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      END_STATE();
    case 193:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(194);
      if (lookahead == '>')
        ADVANCE(97);
      if (lookahead == '\\')
        SKIP(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(193);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(196);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(195);
      if (lookahead == 'b')
        ADVANCE(145);
      if (lookahead == 'o')
        ADVANCE(147);
      if (lookahead == 'x')
        ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(196);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(196);
      END_STATE();
    case 197:
      if (lookahead == '\n')
        SKIP(193);
      END_STATE();
    case 198:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(199);
      if (lookahead == '\\')
        ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(201);
      if (lookahead != 0)
        ADVANCE(201);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 202:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(142);
      if (lookahead == ':')
        ADVANCE(151);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '[')
        ADVANCE(101);
      if (lookahead == '\\')
        SKIP(203);
      if (lookahead == 'd')
        ADVANCE(154);
      if (lookahead == 'f')
        ADVANCE(163);
      if (lookahead == 'n')
        ADVANCE(168);
      if (lookahead == 't')
        ADVANCE(171);
      if (lookahead == '{')
        ADVANCE(135);
      if (lookahead == '}')
        ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(202);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(140);
      END_STATE();
    case 203:
      if (lookahead == '\n')
        SKIP(202);
      END_STATE();
    case 204:
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
        ADVANCE(151);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '[')
        ADVANCE(101);
      if (lookahead == '\\')
        SKIP(205);
      if (lookahead == ']')
        ADVANCE(103);
      if (lookahead == 'd')
        ADVANCE(206);
      if (lookahead == 'f')
        ADVANCE(123);
      if (lookahead == 'n')
        ADVANCE(128);
      if (lookahead == 't')
        ADVANCE(131);
      if (lookahead == '{')
        ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(204);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(138);
      END_STATE();
    case 205:
      if (lookahead == '\n')
        SKIP(204);
      END_STATE();
    case 206:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'e')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 207:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'f')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 208:
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
    case 209:
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
        ADVANCE(151);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '[')
        ADVANCE(101);
      if (lookahead == '\\')
        SKIP(210);
      if (lookahead == 'd')
        ADVANCE(206);
      if (lookahead == 'f')
        ADVANCE(123);
      if (lookahead == 'n')
        ADVANCE(128);
      if (lookahead == 't')
        ADVANCE(131);
      if (lookahead == '{')
        ADVANCE(135);
      if (lookahead == '}')
        ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(209);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(138);
      END_STATE();
    case 210:
      if (lookahead == '\n')
        SKIP(209);
      END_STATE();
    case 211:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(211);
      END_STATE();
    case 212:
      if (lookahead == '\n')
        SKIP(211);
      END_STATE();
    case 213:
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
        ADVANCE(142);
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
        SKIP(214);
      if (lookahead == ']')
        ADVANCE(103);
      if (lookahead == 'd')
        ADVANCE(177);
      if (lookahead == 'e')
        ADVANCE(186);
      if (lookahead == 'f')
        ADVANCE(163);
      if (lookahead == 'n')
        ADVANCE(168);
      if (lookahead == 't')
        ADVANCE(171);
      if (lookahead == '{')
        ADVANCE(135);
      if (lookahead == '|')
        ADVANCE(136);
      if (lookahead == '}')
        ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(213);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(140);
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
      if (lookahead == ':')
        ADVANCE(216);
      if (lookahead == '>')
        ADVANCE(97);
      if (lookahead == '\\')
        SKIP(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(215);
      END_STATE();
    case 216:
      if (lookahead == ':')
        ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 218:
      if (lookahead == '\n')
        SKIP(215);
      END_STATE();
    case 219:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '\\')
        SKIP(220);
      if (lookahead == '}')
        ADVANCE(137);
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
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '\\')
        SKIP(222);
      if (lookahead == ']')
        ADVANCE(103);
      if (lookahead == '|')
        ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(221);
      END_STATE();
    case 222:
      if (lookahead == '\n')
        SKIP(221);
      END_STATE();
    case 223:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '=')
        ADVANCE(95);
      if (lookahead == '\\')
        SKIP(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(223);
      END_STATE();
    case 224:
      if (lookahead == '\n')
        SKIP(223);
      END_STATE();
    case 225:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(226);
      if (lookahead == 'd')
        ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(225);
      END_STATE();
    case 226:
      if (lookahead == '\n')
        SKIP(225);
      END_STATE();
    case 227:
      if (lookahead == 'o')
        ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_binary_options);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(229);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(231);
      END_STATE();
    case 230:
      if (lookahead == '\n')
        SKIP(229);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_binary_options);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(231);
      END_STATE();
    case 232:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '@')
        ADVANCE(99);
      if (lookahead == '\\')
        SKIP(233);
      if (lookahead == ']')
        ADVANCE(103);
      if (lookahead == 'd')
        ADVANCE(234);
      if (lookahead == 'e')
        ADVANCE(186);
      if (lookahead == '}')
        ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(232);
      END_STATE();
    case 233:
      if (lookahead == '\n')
        SKIP(232);
      END_STATE();
    case 234:
      if (lookahead == 'e')
        ADVANCE(235);
      END_STATE();
    case 235:
      if (lookahead == 'f')
        ADVANCE(236);
      END_STATE();
    case 236:
      if (lookahead == 's')
        ADVANCE(180);
      END_STATE();
    case 237:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '@')
        ADVANCE(99);
      if (lookahead == '\\')
        SKIP(238);
      if (lookahead == 'd')
        ADVANCE(234);
      if (lookahead == 'e')
        ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(237);
      END_STATE();
    case 238:
      if (lookahead == '\n')
        SKIP(237);
      END_STATE();
    case 239:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '\\')
        SKIP(240);
      if (lookahead == ']')
        ADVANCE(103);
      if (lookahead == '}')
        ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(239);
      END_STATE();
    case 240:
      if (lookahead == '\n')
        SKIP(239);
      END_STATE();
    case 241:
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
        ADVANCE(151);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '@')
        ADVANCE(99);
      if (lookahead == '[')
        ADVANCE(101);
      if (lookahead == '\\')
        SKIP(242);
      if (lookahead == 'd')
        ADVANCE(243);
      if (lookahead == 'e')
        ADVANCE(120);
      if (lookahead == 'f')
        ADVANCE(123);
      if (lookahead == 'n')
        ADVANCE(128);
      if (lookahead == 't')
        ADVANCE(131);
      if (lookahead == '{')
        ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(241);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(138);
      END_STATE();
    case 242:
      if (lookahead == '\n')
        SKIP(241);
      END_STATE();
    case 243:
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
    case 244:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(142);
      if (lookahead == ':')
        ADVANCE(151);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '[')
        ADVANCE(101);
      if (lookahead == '\\')
        SKIP(245);
      if (lookahead == ']')
        ADVANCE(103);
      if (lookahead == 'd')
        ADVANCE(154);
      if (lookahead == 'f')
        ADVANCE(163);
      if (lookahead == 'n')
        ADVANCE(168);
      if (lookahead == 't')
        ADVANCE(171);
      if (lookahead == '{')
        ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(244);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(140);
      END_STATE();
    case 245:
      if (lookahead == '\n')
        SKIP(244);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 141},
  [2] = {.lex_state = 175},
  [3] = {.lex_state = 175},
  [4] = {.lex_state = 175},
  [5] = {.lex_state = 175},
  [6] = {.lex_state = 189},
  [7] = {.lex_state = 193},
  [8] = {.lex_state = 198},
  [9] = {.lex_state = 202},
  [10] = {.lex_state = 204},
  [11] = {.lex_state = 209},
  [12] = {.lex_state = 141},
  [13] = {.lex_state = 141},
  [14] = {.lex_state = 211},
  [15] = {.lex_state = 175},
  [16] = {.lex_state = 175},
  [17] = {.lex_state = 141},
  [18] = {.lex_state = 213},
  [19] = {.lex_state = 189},
  [20] = {.lex_state = 215},
  [21] = {.lex_state = 175},
  [22] = {.lex_state = 215},
  [23] = {.lex_state = 213},
  [24] = {.lex_state = 198},
  [25] = {.lex_state = 175},
  [26] = {.lex_state = 219},
  [27] = {.lex_state = 141},
  [28] = {.lex_state = 175},
  [29] = {.lex_state = 221},
  [30] = {.lex_state = 221},
  [31] = {.lex_state = 221},
  [32] = {.lex_state = 175},
  [33] = {.lex_state = 223},
  [34] = {.lex_state = 219},
  [35] = {.lex_state = 219},
  [36] = {.lex_state = 141},
  [37] = {.lex_state = 225},
  [38] = {.lex_state = 141},
  [39] = {.lex_state = 213},
  [40] = {.lex_state = 189},
  [41] = {.lex_state = 229},
  [42] = {.lex_state = 193},
  [43] = {.lex_state = 175},
  [44] = {.lex_state = 215},
  [45] = {.lex_state = 213},
  [46] = {.lex_state = 198},
  [47] = {.lex_state = 209},
  [48] = {.lex_state = 175},
  [49] = {.lex_state = 219},
  [50] = {.lex_state = 232},
  [51] = {.lex_state = 204},
  [52] = {.lex_state = 175},
  [53] = {.lex_state = 221},
  [54] = {.lex_state = 204},
  [55] = {.lex_state = 175},
  [56] = {.lex_state = 221},
  [57] = {.lex_state = 141},
  [58] = {.lex_state = 141},
  [59] = {.lex_state = 209},
  [60] = {.lex_state = 175},
  [61] = {.lex_state = 219},
  [62] = {.lex_state = 209},
  [63] = {.lex_state = 175},
  [64] = {.lex_state = 219},
  [65] = {.lex_state = 219},
  [66] = {.lex_state = 209},
  [67] = {.lex_state = 175},
  [68] = {.lex_state = 237},
  [69] = {.lex_state = 215},
  [70] = {.lex_state = 175},
  [71] = {.lex_state = 215},
  [72] = {.lex_state = 193},
  [73] = {.lex_state = 215},
  [74] = {.lex_state = 175},
  [75] = {.lex_state = 239},
  [76] = {.lex_state = 219},
  [77] = {.lex_state = 219},
  [78] = {.lex_state = 209},
  [79] = {.lex_state = 219},
  [80] = {.lex_state = 175},
  [81] = {.lex_state = 221},
  [82] = {.lex_state = 221},
  [83] = {.lex_state = 204},
  [84] = {.lex_state = 221},
  [85] = {.lex_state = 175},
  [86] = {.lex_state = 232},
  [87] = {.lex_state = 204},
  [88] = {.lex_state = 221},
  [89] = {.lex_state = 204},
  [90] = {.lex_state = 204},
  [91] = {.lex_state = 219},
  [92] = {.lex_state = 175},
  [93] = {.lex_state = 209},
  [94] = {.lex_state = 219},
  [95] = {.lex_state = 175},
  [96] = {.lex_state = 219},
  [97] = {.lex_state = 209},
  [98] = {.lex_state = 209},
  [99] = {.lex_state = 219},
  [100] = {.lex_state = 219},
  [101] = {.lex_state = 175},
  [102] = {.lex_state = 219},
  [103] = {.lex_state = 219},
  [104] = {.lex_state = 175},
  [105] = {.lex_state = 241},
  [106] = {.lex_state = 204},
  [107] = {.lex_state = 237},
  [108] = {.lex_state = 175},
  [109] = {.lex_state = 141},
  [110] = {.lex_state = 204},
  [111] = {.lex_state = 219},
  [112] = {.lex_state = 202},
  [113] = {.lex_state = 175},
  [114] = {.lex_state = 219},
  [115] = {.lex_state = 141},
  [116] = {.lex_state = 221},
  [117] = {.lex_state = 204},
  [118] = {.lex_state = 175},
  [119] = {.lex_state = 221},
  [120] = {.lex_state = 175},
  [121] = {.lex_state = 175},
  [122] = {.lex_state = 175},
  [123] = {.lex_state = 175},
  [124] = {.lex_state = 209},
  [125] = {.lex_state = 141},
  [126] = {.lex_state = 209},
  [127] = {.lex_state = 175},
  [128] = {.lex_state = 219},
  [129] = {.lex_state = 209},
  [130] = {.lex_state = 175},
  [131] = {.lex_state = 219},
  [132] = {.lex_state = 219},
  [133] = {.lex_state = 237},
  [134] = {.lex_state = 237},
  [135] = {.lex_state = 244},
  [136] = {.lex_state = 237},
  [137] = {.lex_state = 175},
  [138] = {.lex_state = 237},
  [139] = {.lex_state = 175},
  [140] = {.lex_state = 202},
  [141] = {.lex_state = 175},
  [142] = {.lex_state = 204},
  [143] = {.lex_state = 175},
  [144] = {.lex_state = 175},
  [145] = {.lex_state = 209},
  [146] = {.lex_state = 175},
  [147] = {.lex_state = 209},
  [148] = {.lex_state = 209},
  [149] = {.lex_state = 219},
  [150] = {.lex_state = 237},
  [151] = {.lex_state = 175},
  [152] = {.lex_state = 175},
  [153] = {.lex_state = 175},
  [154] = {.lex_state = 175},
  [155] = {.lex_state = 209},
  [156] = {.lex_state = 237},
  [157] = {.lex_state = 175},
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
    [anon_sym_defstruct] = ACTIONS(3),
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
    [sym__keyword_map] = STATE(16),
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
    [anon_sym_defstruct] = ACTIONS(45),
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
    [anon_sym_defstruct] = ACTIONS(49),
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
    [anon_sym_defstruct] = ACTIONS(53),
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
    [anon_sym_defstruct] = ACTIONS(57),
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
    [sym__keyword_map] = STATE(16),
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
    [sym__keyword_map] = STATE(16),
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
    [sym_keyword] = STATE(34),
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
    [sym__keyword_map] = STATE(16),
    [sym_pair] = STATE(35),
    [sym_struct] = STATE(33),
    [sym_module] = STATE(33),
    [sym_alias] = ACTIONS(91),
    [sym_integer] = ACTIONS(91),
    [sym_float] = ACTIONS(93),
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
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
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
    [anon_sym_defstruct] = ACTIONS(103),
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
    [anon_sym_defstruct] = ACTIONS(107),
    [sym_comment] = ACTIONS(43),
  },
  [17] = {
    [sym__expression] = STATE(38),
    [sym__value] = STATE(38),
    [sym_true] = STATE(38),
    [sym_false] = STATE(38),
    [sym_atom] = STATE(38),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(38),
    [sym_charlist] = STATE(38),
    [sym_binary] = STATE(38),
    [sym_string] = STATE(38),
    [sym_tuple] = STATE(38),
    [sym__list_or_keyword_list] = STATE(38),
    [sym_list] = STATE(38),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(38),
    [sym_map] = STATE(38),
    [sym__empty_map] = STATE(16),
    [sym__map] = STATE(16),
    [sym__keyword_map] = STATE(16),
    [sym_struct] = STATE(38),
    [sym_module] = STATE(38),
    [aux_sym_program_repeat1] = STATE(38),
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
    [anon_sym_defstruct] = ACTIONS(117),
    [sym_comment] = ACTIONS(43),
  },
  [19] = {
    [aux_sym_charlist_repeat1] = STATE(40),
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
    [anon_sym_defstruct] = ACTIONS(129),
    [sym_comment] = ACTIONS(43),
  },
  [22] = {
    [aux_sym_binary_repeat1] = STATE(44),
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
    [anon_sym_defstruct] = ACTIONS(137),
    [sym_comment] = ACTIONS(43),
  },
  [24] = {
    [aux_sym_string_repeat1] = STATE(46),
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
    [anon_sym_defstruct] = ACTIONS(145),
    [sym_comment] = ACTIONS(43),
  },
  [26] = {
    [aux_sym_tuple_repeat1] = STATE(49),
    [anon_sym_COMMA] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(151),
    [sym_comment] = ACTIONS(43),
  },
  [27] = {
    [sym__value] = STATE(50),
    [sym_true] = STATE(50),
    [sym_false] = STATE(50),
    [sym_atom] = STATE(50),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(50),
    [sym_charlist] = STATE(50),
    [sym_binary] = STATE(50),
    [sym_string] = STATE(50),
    [sym_tuple] = STATE(50),
    [sym__list_or_keyword_list] = STATE(50),
    [sym_list] = STATE(50),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(50),
    [sym_map] = STATE(50),
    [sym__empty_map] = STATE(16),
    [sym__map] = STATE(16),
    [sym__keyword_map] = STATE(16),
    [sym_struct] = STATE(50),
    [sym_module] = STATE(50),
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
    [anon_sym_defstruct] = ACTIONS(157),
    [sym_comment] = ACTIONS(43),
  },
  [29] = {
    [aux_sym_tuple_repeat1] = STATE(53),
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_RBRACK] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(165),
    [sym_comment] = ACTIONS(43),
  },
  [30] = {
    [aux_sym_keyword_list_repeat1] = STATE(56),
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
    [anon_sym_defstruct] = ACTIONS(173),
    [sym_comment] = ACTIONS(43),
  },
  [33] = {
    [anon_sym_EQ_GT] = ACTIONS(177),
    [sym_comment] = ACTIONS(43),
  },
  [34] = {
    [aux_sym_keyword_list_repeat1] = STATE(61),
    [anon_sym_COMMA] = ACTIONS(179),
    [anon_sym_RBRACE] = ACTIONS(181),
    [sym_comment] = ACTIONS(43),
  },
  [35] = {
    [aux_sym_keyword_list_repeat1] = STATE(64),
    [aux_sym__map_repeat1] = STATE(65),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_RBRACE] = ACTIONS(185),
    [sym_comment] = ACTIONS(43),
  },
  [36] = {
    [sym__empty_struct_body] = STATE(67),
    [sym__struct_body] = STATE(67),
    [sym__keyword_struct_body] = STATE(67),
    [anon_sym_LBRACE] = ACTIONS(187),
    [sym_comment] = ACTIONS(43),
  },
  [37] = {
    [anon_sym_do] = ACTIONS(189),
    [sym_comment] = ACTIONS(43),
  },
  [38] = {
    [sym__expression] = STATE(38),
    [sym__value] = STATE(38),
    [sym_true] = STATE(38),
    [sym_false] = STATE(38),
    [sym_atom] = STATE(38),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(38),
    [sym_charlist] = STATE(38),
    [sym_binary] = STATE(38),
    [sym_string] = STATE(38),
    [sym_tuple] = STATE(38),
    [sym__list_or_keyword_list] = STATE(38),
    [sym_list] = STATE(38),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(38),
    [sym_map] = STATE(38),
    [sym__empty_map] = STATE(16),
    [sym__map] = STATE(16),
    [sym__keyword_map] = STATE(16),
    [sym_struct] = STATE(38),
    [sym_module] = STATE(38),
    [aux_sym_program_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(191),
    [sym_alias] = ACTIONS(193),
    [sym_integer] = ACTIONS(196),
    [sym_float] = ACTIONS(193),
    [anon_sym_true] = ACTIONS(199),
    [anon_sym_COLONtrue] = ACTIONS(202),
    [anon_sym_false] = ACTIONS(205),
    [anon_sym_COLONfalse] = ACTIONS(208),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(211),
    [anon_sym_COLON_BANG] = ACTIONS(211),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(211),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(214),
    [anon_sym_COLON_AMP] = ACTIONS(211),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(211),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(214),
    [anon_sym_COLON_STAR] = ACTIONS(214),
    [anon_sym_COLON_PLUS] = ACTIONS(211),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(214),
    [anon_sym_COLON_DASH] = ACTIONS(211),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(214),
    [anon_sym_COLON_DOT] = ACTIONS(211),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(214),
    [anon_sym_COLON_SLASH] = ACTIONS(214),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(214),
    [anon_sym_COLON_LT] = ACTIONS(211),
    [anon_sym_COLON_LT_DASH] = ACTIONS(214),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(214),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(214),
    [anon_sym_COLON_LT_EQ] = ACTIONS(214),
    [anon_sym_COLON_LT_GT] = ACTIONS(214),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(214),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(211),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(214),
    [anon_sym_COLON_EQ] = ACTIONS(211),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(211),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(214),
    [anon_sym_COLON_EQ_GT] = ACTIONS(214),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(214),
    [anon_sym_COLON_GT] = ACTIONS(211),
    [anon_sym_COLON_GT_EQ] = ACTIONS(214),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(214),
    [anon_sym_COLON_AT] = ACTIONS(214),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(214),
    [anon_sym_COLON_CARET] = ACTIONS(214),
    [anon_sym_COLON_PIPE] = ACTIONS(211),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(214),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(211),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(214),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(211),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(214),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(214),
    [anon_sym_nil] = ACTIONS(217),
    [anon_sym_COLONnil] = ACTIONS(220),
    [anon_sym_SQUOTE] = ACTIONS(223),
    [anon_sym_LT_LT] = ACTIONS(226),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_LBRACE] = ACTIONS(232),
    [anon_sym_LBRACK] = ACTIONS(235),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(241),
    [anon_sym_defmodule] = ACTIONS(244),
    [sym_comment] = ACTIONS(43),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(247),
    [sym_alias] = ACTIONS(247),
    [sym_integer] = ACTIONS(249),
    [sym_float] = ACTIONS(247),
    [anon_sym_true] = ACTIONS(247),
    [anon_sym_COLONtrue] = ACTIONS(249),
    [anon_sym_false] = ACTIONS(247),
    [anon_sym_COLONfalse] = ACTIONS(249),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(249),
    [anon_sym_COLON_BANG] = ACTIONS(249),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(249),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(247),
    [anon_sym_COLON_AMP] = ACTIONS(249),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(249),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(247),
    [anon_sym_COLON_STAR] = ACTIONS(247),
    [anon_sym_COLON_PLUS] = ACTIONS(249),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(247),
    [anon_sym_COLON_DASH] = ACTIONS(249),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(247),
    [anon_sym_COLON_DOT] = ACTIONS(249),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(247),
    [anon_sym_COLON_SLASH] = ACTIONS(247),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(247),
    [anon_sym_COLON_LT] = ACTIONS(249),
    [anon_sym_COLON_LT_DASH] = ACTIONS(247),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(247),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(247),
    [anon_sym_COLON_LT_EQ] = ACTIONS(247),
    [anon_sym_COLON_LT_GT] = ACTIONS(247),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(247),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(249),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(247),
    [anon_sym_COLON_EQ] = ACTIONS(249),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(249),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(247),
    [anon_sym_COLON_EQ_GT] = ACTIONS(247),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(247),
    [anon_sym_COLON_GT] = ACTIONS(249),
    [anon_sym_COLON_GT_EQ] = ACTIONS(247),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(247),
    [anon_sym_COLON_AT] = ACTIONS(247),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(247),
    [anon_sym_COLON_CARET] = ACTIONS(247),
    [anon_sym_COLON_PIPE] = ACTIONS(249),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(247),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(249),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(247),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(249),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(247),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(247),
    [anon_sym_nil] = ACTIONS(247),
    [anon_sym_COLONnil] = ACTIONS(249),
    [anon_sym_SQUOTE] = ACTIONS(247),
    [anon_sym_LT_LT] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(247),
    [anon_sym_GT_GT] = ACTIONS(247),
    [anon_sym_COLON_COLON] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(247),
    [anon_sym_LBRACE] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(247),
    [anon_sym_RBRACK] = ACTIONS(247),
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(247),
    [anon_sym_EQ_GT] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_defmodule] = ACTIONS(247),
    [anon_sym_end] = ACTIONS(247),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(247),
    [anon_sym_defstruct] = ACTIONS(247),
    [sym_comment] = ACTIONS(43),
  },
  [40] = {
    [aux_sym_charlist_repeat1] = STATE(40),
    [anon_sym_SQUOTE] = ACTIONS(251),
    [aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(253),
    [sym_comment] = ACTIONS(65),
  },
  [41] = {
    [sym_binary_options] = ACTIONS(256),
    [sym_comment] = ACTIONS(43),
  },
  [42] = {
    [sym_charlist] = STATE(20),
    [sym_binary_segment] = STATE(71),
    [sym_string] = STATE(20),
    [sym_integer] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_GT_GT] = ACTIONS(258),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(43),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(260),
    [sym_alias] = ACTIONS(260),
    [sym_integer] = ACTIONS(262),
    [sym_float] = ACTIONS(260),
    [anon_sym_true] = ACTIONS(260),
    [anon_sym_COLONtrue] = ACTIONS(262),
    [anon_sym_false] = ACTIONS(260),
    [anon_sym_COLONfalse] = ACTIONS(262),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(262),
    [anon_sym_COLON_BANG] = ACTIONS(262),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(262),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(260),
    [anon_sym_COLON_AMP] = ACTIONS(262),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(262),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(260),
    [anon_sym_COLON_STAR] = ACTIONS(260),
    [anon_sym_COLON_PLUS] = ACTIONS(262),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(260),
    [anon_sym_COLON_DASH] = ACTIONS(262),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(260),
    [anon_sym_COLON_DOT] = ACTIONS(262),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(260),
    [anon_sym_COLON_SLASH] = ACTIONS(260),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(260),
    [anon_sym_COLON_LT] = ACTIONS(262),
    [anon_sym_COLON_LT_DASH] = ACTIONS(260),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(260),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(260),
    [anon_sym_COLON_LT_EQ] = ACTIONS(260),
    [anon_sym_COLON_LT_GT] = ACTIONS(260),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(260),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(262),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(260),
    [anon_sym_COLON_EQ] = ACTIONS(262),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(262),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(260),
    [anon_sym_COLON_EQ_GT] = ACTIONS(260),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(260),
    [anon_sym_COLON_GT] = ACTIONS(262),
    [anon_sym_COLON_GT_EQ] = ACTIONS(260),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(260),
    [anon_sym_COLON_AT] = ACTIONS(260),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(260),
    [anon_sym_COLON_CARET] = ACTIONS(260),
    [anon_sym_COLON_PIPE] = ACTIONS(262),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(260),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(262),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(260),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(262),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(260),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(260),
    [anon_sym_nil] = ACTIONS(260),
    [anon_sym_COLONnil] = ACTIONS(262),
    [anon_sym_SQUOTE] = ACTIONS(260),
    [anon_sym_LT_LT] = ACTIONS(260),
    [anon_sym_COMMA] = ACTIONS(260),
    [anon_sym_DQUOTE] = ACTIONS(260),
    [anon_sym_LBRACE] = ACTIONS(260),
    [anon_sym_RBRACE] = ACTIONS(260),
    [anon_sym_LBRACK] = ACTIONS(260),
    [anon_sym_RBRACK] = ACTIONS(260),
    [anon_sym_PIPE] = ACTIONS(260),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(260),
    [anon_sym_EQ_GT] = ACTIONS(260),
    [anon_sym_PERCENT] = ACTIONS(262),
    [anon_sym_defmodule] = ACTIONS(260),
    [anon_sym_end] = ACTIONS(260),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(260),
    [anon_sym_defstruct] = ACTIONS(260),
    [sym_comment] = ACTIONS(43),
  },
  [44] = {
    [aux_sym_binary_repeat1] = STATE(73),
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_GT_GT] = ACTIONS(258),
    [sym_comment] = ACTIONS(43),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(266),
    [sym_alias] = ACTIONS(266),
    [sym_integer] = ACTIONS(268),
    [sym_float] = ACTIONS(266),
    [anon_sym_true] = ACTIONS(266),
    [anon_sym_COLONtrue] = ACTIONS(268),
    [anon_sym_false] = ACTIONS(266),
    [anon_sym_COLONfalse] = ACTIONS(268),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(268),
    [anon_sym_COLON_BANG] = ACTIONS(268),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(268),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(266),
    [anon_sym_COLON_AMP] = ACTIONS(268),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(268),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(266),
    [anon_sym_COLON_STAR] = ACTIONS(266),
    [anon_sym_COLON_PLUS] = ACTIONS(268),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(266),
    [anon_sym_COLON_DASH] = ACTIONS(268),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(266),
    [anon_sym_COLON_DOT] = ACTIONS(268),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(266),
    [anon_sym_COLON_SLASH] = ACTIONS(266),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(266),
    [anon_sym_COLON_LT] = ACTIONS(268),
    [anon_sym_COLON_LT_DASH] = ACTIONS(266),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(266),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(266),
    [anon_sym_COLON_LT_EQ] = ACTIONS(266),
    [anon_sym_COLON_LT_GT] = ACTIONS(266),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(266),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(268),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(266),
    [anon_sym_COLON_EQ] = ACTIONS(268),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(268),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(266),
    [anon_sym_COLON_EQ_GT] = ACTIONS(266),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(266),
    [anon_sym_COLON_GT] = ACTIONS(268),
    [anon_sym_COLON_GT_EQ] = ACTIONS(266),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(266),
    [anon_sym_COLON_AT] = ACTIONS(266),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(266),
    [anon_sym_COLON_CARET] = ACTIONS(266),
    [anon_sym_COLON_PIPE] = ACTIONS(268),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(266),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(268),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(266),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(268),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(266),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(266),
    [anon_sym_nil] = ACTIONS(266),
    [anon_sym_COLONnil] = ACTIONS(268),
    [anon_sym_SQUOTE] = ACTIONS(266),
    [anon_sym_LT_LT] = ACTIONS(266),
    [anon_sym_COMMA] = ACTIONS(266),
    [anon_sym_GT_GT] = ACTIONS(266),
    [anon_sym_COLON_COLON] = ACTIONS(268),
    [anon_sym_DQUOTE] = ACTIONS(266),
    [anon_sym_LBRACE] = ACTIONS(266),
    [anon_sym_RBRACE] = ACTIONS(266),
    [anon_sym_LBRACK] = ACTIONS(266),
    [anon_sym_RBRACK] = ACTIONS(266),
    [anon_sym_PIPE] = ACTIONS(266),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(266),
    [anon_sym_EQ_GT] = ACTIONS(266),
    [anon_sym_PERCENT] = ACTIONS(268),
    [anon_sym_defmodule] = ACTIONS(266),
    [anon_sym_end] = ACTIONS(266),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(266),
    [anon_sym_defstruct] = ACTIONS(266),
    [sym_comment] = ACTIONS(43),
  },
  [46] = {
    [aux_sym_string_repeat1] = STATE(46),
    [anon_sym_DQUOTE] = ACTIONS(270),
    [aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(272),
    [sym_comment] = ACTIONS(65),
  },
  [47] = {
    [sym__expression] = STATE(75),
    [sym__value] = STATE(75),
    [sym_true] = STATE(75),
    [sym_false] = STATE(75),
    [sym_atom] = STATE(75),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(76),
    [sym_nil] = STATE(75),
    [sym_charlist] = STATE(75),
    [sym_binary] = STATE(75),
    [sym_string] = STATE(75),
    [sym_tuple] = STATE(75),
    [sym__list_or_keyword_list] = STATE(75),
    [sym_list] = STATE(75),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(75),
    [sym_map] = STATE(75),
    [sym__empty_map] = STATE(16),
    [sym__map] = STATE(16),
    [sym__keyword_map] = STATE(16),
    [sym_struct] = STATE(75),
    [sym_implicit_keyword_list] = STATE(77),
    [sym_module] = STATE(75),
    [sym_alias] = ACTIONS(275),
    [sym_integer] = ACTIONS(275),
    [sym_float] = ACTIONS(277),
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
    [anon_sym_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(281),
    [sym_alias] = ACTIONS(281),
    [sym_integer] = ACTIONS(283),
    [sym_float] = ACTIONS(281),
    [anon_sym_true] = ACTIONS(281),
    [anon_sym_COLONtrue] = ACTIONS(283),
    [anon_sym_false] = ACTIONS(281),
    [anon_sym_COLONfalse] = ACTIONS(283),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(283),
    [anon_sym_COLON_BANG] = ACTIONS(283),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(283),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(281),
    [anon_sym_COLON_AMP] = ACTIONS(283),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(283),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(281),
    [anon_sym_COLON_STAR] = ACTIONS(281),
    [anon_sym_COLON_PLUS] = ACTIONS(283),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(281),
    [anon_sym_COLON_DASH] = ACTIONS(283),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(281),
    [anon_sym_COLON_DOT] = ACTIONS(283),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(281),
    [anon_sym_COLON_SLASH] = ACTIONS(281),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(281),
    [anon_sym_COLON_LT] = ACTIONS(283),
    [anon_sym_COLON_LT_DASH] = ACTIONS(281),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(281),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(281),
    [anon_sym_COLON_LT_EQ] = ACTIONS(281),
    [anon_sym_COLON_LT_GT] = ACTIONS(281),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(281),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(283),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(281),
    [anon_sym_COLON_EQ] = ACTIONS(283),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(283),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(281),
    [anon_sym_COLON_EQ_GT] = ACTIONS(281),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(281),
    [anon_sym_COLON_GT] = ACTIONS(283),
    [anon_sym_COLON_GT_EQ] = ACTIONS(281),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(281),
    [anon_sym_COLON_AT] = ACTIONS(281),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(281),
    [anon_sym_COLON_CARET] = ACTIONS(281),
    [anon_sym_COLON_PIPE] = ACTIONS(283),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(281),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(283),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(283),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(281),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(281),
    [anon_sym_nil] = ACTIONS(281),
    [anon_sym_COLONnil] = ACTIONS(283),
    [anon_sym_SQUOTE] = ACTIONS(281),
    [anon_sym_LT_LT] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(281),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(281),
    [anon_sym_RBRACK] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(281),
    [anon_sym_EQ_GT] = ACTIONS(281),
    [anon_sym_PERCENT] = ACTIONS(283),
    [anon_sym_defmodule] = ACTIONS(281),
    [anon_sym_end] = ACTIONS(281),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(281),
    [anon_sym_defstruct] = ACTIONS(281),
    [sym_comment] = ACTIONS(43),
  },
  [49] = {
    [aux_sym_tuple_repeat1] = STATE(79),
    [anon_sym_COMMA] = ACTIONS(285),
    [anon_sym_RBRACE] = ACTIONS(279),
    [sym_comment] = ACTIONS(43),
  },
  [50] = {
    [anon_sym_COMMA] = ACTIONS(287),
    [anon_sym_RBRACE] = ACTIONS(287),
    [anon_sym_RBRACK] = ACTIONS(287),
    [anon_sym_end] = ACTIONS(287),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(287),
    [anon_sym_defstruct] = ACTIONS(287),
    [sym_comment] = ACTIONS(43),
  },
  [51] = {
    [sym__expression] = STATE(75),
    [sym__value] = STATE(75),
    [sym_true] = STATE(75),
    [sym_false] = STATE(75),
    [sym_atom] = STATE(75),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(81),
    [sym_nil] = STATE(75),
    [sym_charlist] = STATE(75),
    [sym_binary] = STATE(75),
    [sym_string] = STATE(75),
    [sym_tuple] = STATE(75),
    [sym__list_or_keyword_list] = STATE(75),
    [sym_list] = STATE(75),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(75),
    [sym_map] = STATE(75),
    [sym__empty_map] = STATE(16),
    [sym__map] = STATE(16),
    [sym__keyword_map] = STATE(16),
    [sym_struct] = STATE(75),
    [sym_implicit_keyword_list] = STATE(82),
    [sym_module] = STATE(75),
    [sym_alias] = ACTIONS(275),
    [sym_integer] = ACTIONS(275),
    [sym_float] = ACTIONS(277),
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
    [anon_sym_RBRACK] = ACTIONS(289),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(291),
    [sym_alias] = ACTIONS(291),
    [sym_integer] = ACTIONS(293),
    [sym_float] = ACTIONS(291),
    [anon_sym_true] = ACTIONS(291),
    [anon_sym_COLONtrue] = ACTIONS(293),
    [anon_sym_false] = ACTIONS(291),
    [anon_sym_COLONfalse] = ACTIONS(293),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(293),
    [anon_sym_COLON_BANG] = ACTIONS(293),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(293),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(291),
    [anon_sym_COLON_AMP] = ACTIONS(293),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(293),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(291),
    [anon_sym_COLON_STAR] = ACTIONS(291),
    [anon_sym_COLON_PLUS] = ACTIONS(293),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(291),
    [anon_sym_COLON_DASH] = ACTIONS(293),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(291),
    [anon_sym_COLON_DOT] = ACTIONS(293),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(291),
    [anon_sym_COLON_SLASH] = ACTIONS(291),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(291),
    [anon_sym_COLON_LT] = ACTIONS(293),
    [anon_sym_COLON_LT_DASH] = ACTIONS(291),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(291),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(291),
    [anon_sym_COLON_LT_EQ] = ACTIONS(291),
    [anon_sym_COLON_LT_GT] = ACTIONS(291),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(291),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(293),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(291),
    [anon_sym_COLON_EQ] = ACTIONS(293),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(293),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(291),
    [anon_sym_COLON_EQ_GT] = ACTIONS(291),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(291),
    [anon_sym_COLON_GT] = ACTIONS(293),
    [anon_sym_COLON_GT_EQ] = ACTIONS(291),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(291),
    [anon_sym_COLON_AT] = ACTIONS(291),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(291),
    [anon_sym_COLON_CARET] = ACTIONS(291),
    [anon_sym_COLON_PIPE] = ACTIONS(293),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(291),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(293),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(291),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(293),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(291),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(291),
    [anon_sym_nil] = ACTIONS(291),
    [anon_sym_COLONnil] = ACTIONS(293),
    [anon_sym_SQUOTE] = ACTIONS(291),
    [anon_sym_LT_LT] = ACTIONS(291),
    [anon_sym_COMMA] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(291),
    [anon_sym_LBRACE] = ACTIONS(291),
    [anon_sym_RBRACE] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(291),
    [anon_sym_RBRACK] = ACTIONS(291),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(291),
    [anon_sym_EQ_GT] = ACTIONS(291),
    [anon_sym_PERCENT] = ACTIONS(293),
    [anon_sym_defmodule] = ACTIONS(291),
    [anon_sym_end] = ACTIONS(291),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(291),
    [anon_sym_defstruct] = ACTIONS(291),
    [sym_comment] = ACTIONS(43),
  },
  [53] = {
    [aux_sym_tuple_repeat1] = STATE(84),
    [anon_sym_COMMA] = ACTIONS(295),
    [anon_sym_RBRACK] = ACTIONS(289),
    [sym_comment] = ACTIONS(43),
  },
  [54] = {
    [sym_keyword] = STATE(86),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(297),
    [sym_comment] = ACTIONS(43),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(299),
    [sym_alias] = ACTIONS(299),
    [sym_integer] = ACTIONS(301),
    [sym_float] = ACTIONS(299),
    [anon_sym_true] = ACTIONS(299),
    [anon_sym_COLONtrue] = ACTIONS(301),
    [anon_sym_false] = ACTIONS(299),
    [anon_sym_COLONfalse] = ACTIONS(301),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(301),
    [anon_sym_COLON_BANG] = ACTIONS(301),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(301),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(299),
    [anon_sym_COLON_AMP] = ACTIONS(301),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(301),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(299),
    [anon_sym_COLON_STAR] = ACTIONS(299),
    [anon_sym_COLON_PLUS] = ACTIONS(301),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(299),
    [anon_sym_COLON_DASH] = ACTIONS(301),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(299),
    [anon_sym_COLON_DOT] = ACTIONS(301),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(299),
    [anon_sym_COLON_SLASH] = ACTIONS(299),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(299),
    [anon_sym_COLON_LT] = ACTIONS(301),
    [anon_sym_COLON_LT_DASH] = ACTIONS(299),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(299),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(299),
    [anon_sym_COLON_LT_EQ] = ACTIONS(299),
    [anon_sym_COLON_LT_GT] = ACTIONS(299),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(299),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(301),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(299),
    [anon_sym_COLON_EQ] = ACTIONS(301),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(301),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(299),
    [anon_sym_COLON_EQ_GT] = ACTIONS(299),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(299),
    [anon_sym_COLON_GT] = ACTIONS(301),
    [anon_sym_COLON_GT_EQ] = ACTIONS(299),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(299),
    [anon_sym_COLON_AT] = ACTIONS(299),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(299),
    [anon_sym_COLON_CARET] = ACTIONS(299),
    [anon_sym_COLON_PIPE] = ACTIONS(301),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(299),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(301),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(299),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(299),
    [anon_sym_nil] = ACTIONS(299),
    [anon_sym_COLONnil] = ACTIONS(301),
    [anon_sym_SQUOTE] = ACTIONS(299),
    [anon_sym_LT_LT] = ACTIONS(299),
    [anon_sym_COMMA] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(299),
    [anon_sym_LBRACE] = ACTIONS(299),
    [anon_sym_RBRACE] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(299),
    [anon_sym_RBRACK] = ACTIONS(299),
    [anon_sym_PIPE] = ACTIONS(299),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(299),
    [anon_sym_EQ_GT] = ACTIONS(299),
    [anon_sym_PERCENT] = ACTIONS(301),
    [anon_sym_defmodule] = ACTIONS(299),
    [anon_sym_end] = ACTIONS(299),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(299),
    [anon_sym_defstruct] = ACTIONS(299),
    [sym_comment] = ACTIONS(43),
  },
  [56] = {
    [aux_sym_keyword_list_repeat1] = STATE(88),
    [anon_sym_COMMA] = ACTIONS(303),
    [anon_sym_RBRACK] = ACTIONS(297),
    [sym_comment] = ACTIONS(43),
  },
  [57] = {
    [sym__list_or_keyword_list] = STATE(89),
    [sym_list] = STATE(89),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_tail] = STATE(90),
    [sym_keyword_list] = STATE(89),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_comment] = ACTIONS(43),
  },
  [58] = {
    [sym__value] = STATE(91),
    [sym_true] = STATE(91),
    [sym_false] = STATE(91),
    [sym_atom] = STATE(91),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(91),
    [sym_charlist] = STATE(91),
    [sym_binary] = STATE(91),
    [sym_string] = STATE(91),
    [sym_tuple] = STATE(91),
    [sym__list_or_keyword_list] = STATE(91),
    [sym_list] = STATE(91),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(91),
    [sym_map] = STATE(91),
    [sym__empty_map] = STATE(16),
    [sym__map] = STATE(16),
    [sym__keyword_map] = STATE(16),
    [sym_struct] = STATE(91),
    [sym_module] = STATE(91),
    [sym_alias] = ACTIONS(305),
    [sym_integer] = ACTIONS(307),
    [sym_float] = ACTIONS(305),
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
  [59] = {
    [sym_keyword] = STATE(86),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(309),
    [sym_comment] = ACTIONS(43),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(311),
    [sym_alias] = ACTIONS(311),
    [sym_integer] = ACTIONS(313),
    [sym_float] = ACTIONS(311),
    [anon_sym_true] = ACTIONS(311),
    [anon_sym_COLONtrue] = ACTIONS(313),
    [anon_sym_false] = ACTIONS(311),
    [anon_sym_COLONfalse] = ACTIONS(313),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(313),
    [anon_sym_COLON_BANG] = ACTIONS(313),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(313),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(311),
    [anon_sym_COLON_AMP] = ACTIONS(313),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(313),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(311),
    [anon_sym_COLON_STAR] = ACTIONS(311),
    [anon_sym_COLON_PLUS] = ACTIONS(313),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(311),
    [anon_sym_COLON_DASH] = ACTIONS(313),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(311),
    [anon_sym_COLON_DOT] = ACTIONS(313),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(311),
    [anon_sym_COLON_SLASH] = ACTIONS(311),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(311),
    [anon_sym_COLON_LT] = ACTIONS(313),
    [anon_sym_COLON_LT_DASH] = ACTIONS(311),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(311),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(311),
    [anon_sym_COLON_LT_EQ] = ACTIONS(311),
    [anon_sym_COLON_LT_GT] = ACTIONS(311),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(311),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(313),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(311),
    [anon_sym_COLON_EQ] = ACTIONS(313),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(313),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(311),
    [anon_sym_COLON_EQ_GT] = ACTIONS(311),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(311),
    [anon_sym_COLON_GT] = ACTIONS(313),
    [anon_sym_COLON_GT_EQ] = ACTIONS(311),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(311),
    [anon_sym_COLON_AT] = ACTIONS(311),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(311),
    [anon_sym_COLON_CARET] = ACTIONS(311),
    [anon_sym_COLON_PIPE] = ACTIONS(313),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(311),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(311),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(313),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(311),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(311),
    [anon_sym_nil] = ACTIONS(311),
    [anon_sym_COLONnil] = ACTIONS(313),
    [anon_sym_SQUOTE] = ACTIONS(311),
    [anon_sym_LT_LT] = ACTIONS(311),
    [anon_sym_COMMA] = ACTIONS(311),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [anon_sym_LBRACE] = ACTIONS(311),
    [anon_sym_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(311),
    [anon_sym_RBRACK] = ACTIONS(311),
    [anon_sym_PIPE] = ACTIONS(311),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(311),
    [anon_sym_EQ_GT] = ACTIONS(311),
    [anon_sym_PERCENT] = ACTIONS(313),
    [anon_sym_defmodule] = ACTIONS(311),
    [anon_sym_end] = ACTIONS(311),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(311),
    [anon_sym_defstruct] = ACTIONS(311),
    [sym_comment] = ACTIONS(43),
  },
  [61] = {
    [aux_sym_keyword_list_repeat1] = STATE(94),
    [anon_sym_COMMA] = ACTIONS(315),
    [anon_sym_RBRACE] = ACTIONS(309),
    [sym_comment] = ACTIONS(43),
  },
  [62] = {
    [sym__value] = STATE(33),
    [sym_true] = STATE(33),
    [sym_false] = STATE(33),
    [sym_atom] = STATE(33),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(86),
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
    [sym__keyword_map] = STATE(16),
    [sym_pair] = STATE(96),
    [sym_struct] = STATE(33),
    [sym_module] = STATE(33),
    [sym_alias] = ACTIONS(91),
    [sym_integer] = ACTIONS(91),
    [sym_float] = ACTIONS(93),
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
    [anon_sym_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(319),
    [sym_alias] = ACTIONS(319),
    [sym_integer] = ACTIONS(321),
    [sym_float] = ACTIONS(319),
    [anon_sym_true] = ACTIONS(319),
    [anon_sym_COLONtrue] = ACTIONS(321),
    [anon_sym_false] = ACTIONS(319),
    [anon_sym_COLONfalse] = ACTIONS(321),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(321),
    [anon_sym_COLON_BANG] = ACTIONS(321),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(321),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(319),
    [anon_sym_COLON_AMP] = ACTIONS(321),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(321),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(319),
    [anon_sym_COLON_STAR] = ACTIONS(319),
    [anon_sym_COLON_PLUS] = ACTIONS(321),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(319),
    [anon_sym_COLON_DASH] = ACTIONS(321),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(319),
    [anon_sym_COLON_DOT] = ACTIONS(321),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(319),
    [anon_sym_COLON_SLASH] = ACTIONS(319),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(319),
    [anon_sym_COLON_LT] = ACTIONS(321),
    [anon_sym_COLON_LT_DASH] = ACTIONS(319),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(319),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(319),
    [anon_sym_COLON_LT_EQ] = ACTIONS(319),
    [anon_sym_COLON_LT_GT] = ACTIONS(319),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(319),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(321),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(319),
    [anon_sym_COLON_EQ] = ACTIONS(321),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(321),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(319),
    [anon_sym_COLON_EQ_GT] = ACTIONS(319),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(319),
    [anon_sym_COLON_GT] = ACTIONS(321),
    [anon_sym_COLON_GT_EQ] = ACTIONS(319),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(319),
    [anon_sym_COLON_AT] = ACTIONS(319),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(319),
    [anon_sym_COLON_CARET] = ACTIONS(319),
    [anon_sym_COLON_PIPE] = ACTIONS(321),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(319),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(321),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(319),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(321),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(319),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(319),
    [anon_sym_nil] = ACTIONS(319),
    [anon_sym_COLONnil] = ACTIONS(321),
    [anon_sym_SQUOTE] = ACTIONS(319),
    [anon_sym_LT_LT] = ACTIONS(319),
    [anon_sym_COMMA] = ACTIONS(319),
    [anon_sym_DQUOTE] = ACTIONS(319),
    [anon_sym_LBRACE] = ACTIONS(319),
    [anon_sym_RBRACE] = ACTIONS(319),
    [anon_sym_LBRACK] = ACTIONS(319),
    [anon_sym_RBRACK] = ACTIONS(319),
    [anon_sym_PIPE] = ACTIONS(319),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(319),
    [anon_sym_EQ_GT] = ACTIONS(319),
    [anon_sym_PERCENT] = ACTIONS(321),
    [anon_sym_defmodule] = ACTIONS(319),
    [anon_sym_end] = ACTIONS(319),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(319),
    [anon_sym_defstruct] = ACTIONS(319),
    [sym_comment] = ACTIONS(43),
  },
  [64] = {
    [aux_sym_keyword_list_repeat1] = STATE(94),
    [anon_sym_COMMA] = ACTIONS(323),
    [anon_sym_RBRACE] = ACTIONS(317),
    [sym_comment] = ACTIONS(43),
  },
  [65] = {
    [aux_sym_keyword_list_repeat1] = STATE(99),
    [aux_sym__map_repeat1] = STATE(100),
    [anon_sym_COMMA] = ACTIONS(325),
    [anon_sym_RBRACE] = ACTIONS(317),
    [sym_comment] = ACTIONS(43),
  },
  [66] = {
    [sym__value] = STATE(33),
    [sym_true] = STATE(33),
    [sym_false] = STATE(33),
    [sym_atom] = STATE(33),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(102),
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
    [sym__keyword_map] = STATE(16),
    [sym_pair] = STATE(103),
    [sym_struct] = STATE(33),
    [sym_module] = STATE(33),
    [sym_alias] = ACTIONS(91),
    [sym_integer] = ACTIONS(91),
    [sym_float] = ACTIONS(93),
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
    [anon_sym_RBRACE] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(329),
    [sym_alias] = ACTIONS(329),
    [sym_integer] = ACTIONS(331),
    [sym_float] = ACTIONS(329),
    [anon_sym_true] = ACTIONS(329),
    [anon_sym_COLONtrue] = ACTIONS(331),
    [anon_sym_false] = ACTIONS(329),
    [anon_sym_COLONfalse] = ACTIONS(331),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(331),
    [anon_sym_COLON_BANG] = ACTIONS(331),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(331),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(329),
    [anon_sym_COLON_AMP] = ACTIONS(331),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(331),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(329),
    [anon_sym_COLON_STAR] = ACTIONS(329),
    [anon_sym_COLON_PLUS] = ACTIONS(331),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(329),
    [anon_sym_COLON_DASH] = ACTIONS(331),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(329),
    [anon_sym_COLON_DOT] = ACTIONS(331),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(329),
    [anon_sym_COLON_SLASH] = ACTIONS(329),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(329),
    [anon_sym_COLON_LT] = ACTIONS(331),
    [anon_sym_COLON_LT_DASH] = ACTIONS(329),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(329),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(329),
    [anon_sym_COLON_LT_EQ] = ACTIONS(329),
    [anon_sym_COLON_LT_GT] = ACTIONS(329),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(329),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(331),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(329),
    [anon_sym_COLON_EQ] = ACTIONS(331),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(331),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(329),
    [anon_sym_COLON_EQ_GT] = ACTIONS(329),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(329),
    [anon_sym_COLON_GT] = ACTIONS(331),
    [anon_sym_COLON_GT_EQ] = ACTIONS(329),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(329),
    [anon_sym_COLON_AT] = ACTIONS(329),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(329),
    [anon_sym_COLON_CARET] = ACTIONS(329),
    [anon_sym_COLON_PIPE] = ACTIONS(331),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(329),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(331),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(329),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(331),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(329),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(329),
    [anon_sym_nil] = ACTIONS(329),
    [anon_sym_COLONnil] = ACTIONS(331),
    [anon_sym_SQUOTE] = ACTIONS(329),
    [anon_sym_LT_LT] = ACTIONS(329),
    [anon_sym_COMMA] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(329),
    [anon_sym_LBRACE] = ACTIONS(329),
    [anon_sym_RBRACE] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(329),
    [anon_sym_RBRACK] = ACTIONS(329),
    [anon_sym_PIPE] = ACTIONS(329),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(329),
    [anon_sym_EQ_GT] = ACTIONS(329),
    [anon_sym_PERCENT] = ACTIONS(331),
    [anon_sym_defmodule] = ACTIONS(329),
    [anon_sym_end] = ACTIONS(329),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(329),
    [anon_sym_defstruct] = ACTIONS(329),
    [sym_comment] = ACTIONS(43),
  },
  [68] = {
    [sym__module_body] = STATE(107),
    [sym_module_attribute] = STATE(107),
    [sym_defstruct] = STATE(107),
    [aux_sym_module_repeat1] = STATE(107),
    [anon_sym_end] = ACTIONS(333),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(335),
    [anon_sym_defstruct] = ACTIONS(337),
    [sym_comment] = ACTIONS(43),
  },
  [69] = {
    [anon_sym_COMMA] = ACTIONS(339),
    [anon_sym_GT_GT] = ACTIONS(339),
    [sym_comment] = ACTIONS(43),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(341),
    [sym_alias] = ACTIONS(341),
    [sym_integer] = ACTIONS(343),
    [sym_float] = ACTIONS(341),
    [anon_sym_true] = ACTIONS(341),
    [anon_sym_COLONtrue] = ACTIONS(343),
    [anon_sym_false] = ACTIONS(341),
    [anon_sym_COLONfalse] = ACTIONS(343),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(343),
    [anon_sym_COLON_BANG] = ACTIONS(343),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(343),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(341),
    [anon_sym_COLON_AMP] = ACTIONS(343),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(343),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(341),
    [anon_sym_COLON_STAR] = ACTIONS(341),
    [anon_sym_COLON_PLUS] = ACTIONS(343),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(341),
    [anon_sym_COLON_DASH] = ACTIONS(343),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(341),
    [anon_sym_COLON_DOT] = ACTIONS(343),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(341),
    [anon_sym_COLON_SLASH] = ACTIONS(341),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(341),
    [anon_sym_COLON_LT] = ACTIONS(343),
    [anon_sym_COLON_LT_DASH] = ACTIONS(341),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(341),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(341),
    [anon_sym_COLON_LT_EQ] = ACTIONS(341),
    [anon_sym_COLON_LT_GT] = ACTIONS(341),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(341),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(343),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(341),
    [anon_sym_COLON_EQ] = ACTIONS(343),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(343),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(341),
    [anon_sym_COLON_EQ_GT] = ACTIONS(341),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(341),
    [anon_sym_COLON_GT] = ACTIONS(343),
    [anon_sym_COLON_GT_EQ] = ACTIONS(341),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(341),
    [anon_sym_COLON_AT] = ACTIONS(341),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(341),
    [anon_sym_COLON_CARET] = ACTIONS(341),
    [anon_sym_COLON_PIPE] = ACTIONS(343),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(341),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(343),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(341),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(343),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(341),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(341),
    [anon_sym_nil] = ACTIONS(341),
    [anon_sym_COLONnil] = ACTIONS(343),
    [anon_sym_SQUOTE] = ACTIONS(341),
    [anon_sym_LT_LT] = ACTIONS(341),
    [anon_sym_COMMA] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(341),
    [anon_sym_LBRACE] = ACTIONS(341),
    [anon_sym_RBRACE] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(341),
    [anon_sym_RBRACK] = ACTIONS(341),
    [anon_sym_PIPE] = ACTIONS(341),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(341),
    [anon_sym_EQ_GT] = ACTIONS(341),
    [anon_sym_PERCENT] = ACTIONS(343),
    [anon_sym_defmodule] = ACTIONS(341),
    [anon_sym_end] = ACTIONS(341),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(341),
    [anon_sym_defstruct] = ACTIONS(341),
    [sym_comment] = ACTIONS(43),
  },
  [71] = {
    [anon_sym_COMMA] = ACTIONS(345),
    [anon_sym_GT_GT] = ACTIONS(345),
    [sym_comment] = ACTIONS(43),
  },
  [72] = {
    [sym_charlist] = STATE(20),
    [sym_binary_segment] = STATE(71),
    [sym_string] = STATE(20),
    [sym_integer] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_GT_GT] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(43),
  },
  [73] = {
    [aux_sym_binary_repeat1] = STATE(73),
    [anon_sym_COMMA] = ACTIONS(349),
    [anon_sym_GT_GT] = ACTIONS(345),
    [sym_comment] = ACTIONS(43),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(352),
    [sym_alias] = ACTIONS(352),
    [sym_integer] = ACTIONS(354),
    [sym_float] = ACTIONS(352),
    [anon_sym_true] = ACTIONS(352),
    [anon_sym_COLONtrue] = ACTIONS(354),
    [anon_sym_false] = ACTIONS(352),
    [anon_sym_COLONfalse] = ACTIONS(354),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(354),
    [anon_sym_COLON_BANG] = ACTIONS(354),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(354),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(352),
    [anon_sym_COLON_AMP] = ACTIONS(354),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(354),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(352),
    [anon_sym_COLON_STAR] = ACTIONS(352),
    [anon_sym_COLON_PLUS] = ACTIONS(354),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(352),
    [anon_sym_COLON_DASH] = ACTIONS(354),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(352),
    [anon_sym_COLON_DOT] = ACTIONS(354),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(352),
    [anon_sym_COLON_SLASH] = ACTIONS(352),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(352),
    [anon_sym_COLON_LT] = ACTIONS(354),
    [anon_sym_COLON_LT_DASH] = ACTIONS(352),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(352),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(352),
    [anon_sym_COLON_LT_EQ] = ACTIONS(352),
    [anon_sym_COLON_LT_GT] = ACTIONS(352),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(352),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(354),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(352),
    [anon_sym_COLON_EQ] = ACTIONS(354),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(354),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(352),
    [anon_sym_COLON_EQ_GT] = ACTIONS(352),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(352),
    [anon_sym_COLON_GT] = ACTIONS(354),
    [anon_sym_COLON_GT_EQ] = ACTIONS(352),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(352),
    [anon_sym_COLON_AT] = ACTIONS(352),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(352),
    [anon_sym_COLON_CARET] = ACTIONS(352),
    [anon_sym_COLON_PIPE] = ACTIONS(354),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(352),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(354),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(352),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(354),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(352),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(352),
    [anon_sym_nil] = ACTIONS(352),
    [anon_sym_COLONnil] = ACTIONS(354),
    [anon_sym_SQUOTE] = ACTIONS(352),
    [anon_sym_LT_LT] = ACTIONS(352),
    [anon_sym_COMMA] = ACTIONS(352),
    [anon_sym_DQUOTE] = ACTIONS(352),
    [anon_sym_LBRACE] = ACTIONS(352),
    [anon_sym_RBRACE] = ACTIONS(352),
    [anon_sym_LBRACK] = ACTIONS(352),
    [anon_sym_RBRACK] = ACTIONS(352),
    [anon_sym_PIPE] = ACTIONS(352),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(352),
    [anon_sym_EQ_GT] = ACTIONS(352),
    [anon_sym_PERCENT] = ACTIONS(354),
    [anon_sym_defmodule] = ACTIONS(352),
    [anon_sym_end] = ACTIONS(352),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(352),
    [anon_sym_defstruct] = ACTIONS(352),
    [sym_comment] = ACTIONS(43),
  },
  [75] = {
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_RBRACE] = ACTIONS(356),
    [anon_sym_RBRACK] = ACTIONS(356),
    [sym_comment] = ACTIONS(43),
  },
  [76] = {
    [aux_sym_keyword_list_repeat1] = STATE(111),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_RBRACE] = ACTIONS(360),
    [sym_comment] = ACTIONS(43),
  },
  [77] = {
    [anon_sym_COMMA] = ACTIONS(362),
    [anon_sym_RBRACE] = ACTIONS(364),
    [sym_comment] = ACTIONS(43),
  },
  [78] = {
    [sym__expression] = STATE(75),
    [sym__value] = STATE(75),
    [sym_true] = STATE(75),
    [sym_false] = STATE(75),
    [sym_atom] = STATE(75),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(76),
    [sym_nil] = STATE(75),
    [sym_charlist] = STATE(75),
    [sym_binary] = STATE(75),
    [sym_string] = STATE(75),
    [sym_tuple] = STATE(75),
    [sym__list_or_keyword_list] = STATE(75),
    [sym_list] = STATE(75),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(75),
    [sym_map] = STATE(75),
    [sym__empty_map] = STATE(16),
    [sym__map] = STATE(16),
    [sym__keyword_map] = STATE(16),
    [sym_struct] = STATE(75),
    [sym_implicit_keyword_list] = STATE(114),
    [sym_module] = STATE(75),
    [sym_alias] = ACTIONS(275),
    [sym_integer] = ACTIONS(275),
    [sym_float] = ACTIONS(277),
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
    [anon_sym_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [79] = {
    [aux_sym_tuple_repeat1] = STATE(79),
    [anon_sym_COMMA] = ACTIONS(366),
    [anon_sym_RBRACE] = ACTIONS(356),
    [sym_comment] = ACTIONS(43),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(369),
    [sym_alias] = ACTIONS(369),
    [sym_integer] = ACTIONS(371),
    [sym_float] = ACTIONS(369),
    [anon_sym_true] = ACTIONS(369),
    [anon_sym_COLONtrue] = ACTIONS(371),
    [anon_sym_false] = ACTIONS(369),
    [anon_sym_COLONfalse] = ACTIONS(371),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(371),
    [anon_sym_COLON_BANG] = ACTIONS(371),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(371),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(369),
    [anon_sym_COLON_AMP] = ACTIONS(371),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(371),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(369),
    [anon_sym_COLON_STAR] = ACTIONS(369),
    [anon_sym_COLON_PLUS] = ACTIONS(371),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(369),
    [anon_sym_COLON_DASH] = ACTIONS(371),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(369),
    [anon_sym_COLON_DOT] = ACTIONS(371),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(369),
    [anon_sym_COLON_SLASH] = ACTIONS(369),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(369),
    [anon_sym_COLON_LT] = ACTIONS(371),
    [anon_sym_COLON_LT_DASH] = ACTIONS(369),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(369),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(369),
    [anon_sym_COLON_LT_EQ] = ACTIONS(369),
    [anon_sym_COLON_LT_GT] = ACTIONS(369),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(369),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(371),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(369),
    [anon_sym_COLON_EQ] = ACTIONS(371),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(371),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(369),
    [anon_sym_COLON_EQ_GT] = ACTIONS(369),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(369),
    [anon_sym_COLON_GT] = ACTIONS(371),
    [anon_sym_COLON_GT_EQ] = ACTIONS(369),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(369),
    [anon_sym_COLON_AT] = ACTIONS(369),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(369),
    [anon_sym_COLON_CARET] = ACTIONS(369),
    [anon_sym_COLON_PIPE] = ACTIONS(371),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(369),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(371),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(369),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(371),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(369),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(369),
    [anon_sym_nil] = ACTIONS(369),
    [anon_sym_COLONnil] = ACTIONS(371),
    [anon_sym_SQUOTE] = ACTIONS(369),
    [anon_sym_LT_LT] = ACTIONS(369),
    [anon_sym_COMMA] = ACTIONS(369),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [anon_sym_LBRACE] = ACTIONS(369),
    [anon_sym_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACK] = ACTIONS(369),
    [anon_sym_RBRACK] = ACTIONS(369),
    [anon_sym_PIPE] = ACTIONS(369),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(369),
    [anon_sym_EQ_GT] = ACTIONS(369),
    [anon_sym_PERCENT] = ACTIONS(371),
    [anon_sym_defmodule] = ACTIONS(369),
    [anon_sym_end] = ACTIONS(369),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(369),
    [anon_sym_defstruct] = ACTIONS(369),
    [sym_comment] = ACTIONS(43),
  },
  [81] = {
    [aux_sym_keyword_list_repeat1] = STATE(116),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_RBRACK] = ACTIONS(360),
    [sym_comment] = ACTIONS(43),
  },
  [82] = {
    [anon_sym_COMMA] = ACTIONS(373),
    [anon_sym_RBRACK] = ACTIONS(375),
    [sym_comment] = ACTIONS(43),
  },
  [83] = {
    [sym__expression] = STATE(75),
    [sym__value] = STATE(75),
    [sym_true] = STATE(75),
    [sym_false] = STATE(75),
    [sym_atom] = STATE(75),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(81),
    [sym_nil] = STATE(75),
    [sym_charlist] = STATE(75),
    [sym_binary] = STATE(75),
    [sym_string] = STATE(75),
    [sym_tuple] = STATE(75),
    [sym__list_or_keyword_list] = STATE(75),
    [sym_list] = STATE(75),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(75),
    [sym_map] = STATE(75),
    [sym__empty_map] = STATE(16),
    [sym__map] = STATE(16),
    [sym__keyword_map] = STATE(16),
    [sym_struct] = STATE(75),
    [sym_implicit_keyword_list] = STATE(119),
    [sym_module] = STATE(75),
    [sym_alias] = ACTIONS(275),
    [sym_integer] = ACTIONS(275),
    [sym_float] = ACTIONS(277),
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
    [anon_sym_RBRACK] = ACTIONS(375),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [84] = {
    [aux_sym_tuple_repeat1] = STATE(84),
    [anon_sym_COMMA] = ACTIONS(366),
    [anon_sym_RBRACK] = ACTIONS(356),
    [sym_comment] = ACTIONS(43),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(377),
    [sym_alias] = ACTIONS(377),
    [sym_integer] = ACTIONS(379),
    [sym_float] = ACTIONS(377),
    [anon_sym_true] = ACTIONS(377),
    [anon_sym_COLONtrue] = ACTIONS(379),
    [anon_sym_false] = ACTIONS(377),
    [anon_sym_COLONfalse] = ACTIONS(379),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(379),
    [anon_sym_COLON_BANG] = ACTIONS(379),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(379),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(377),
    [anon_sym_COLON_AMP] = ACTIONS(379),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(379),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(377),
    [anon_sym_COLON_STAR] = ACTIONS(377),
    [anon_sym_COLON_PLUS] = ACTIONS(379),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(377),
    [anon_sym_COLON_DASH] = ACTIONS(379),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(377),
    [anon_sym_COLON_DOT] = ACTIONS(379),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(377),
    [anon_sym_COLON_SLASH] = ACTIONS(377),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(377),
    [anon_sym_COLON_LT] = ACTIONS(379),
    [anon_sym_COLON_LT_DASH] = ACTIONS(377),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(377),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(377),
    [anon_sym_COLON_LT_EQ] = ACTIONS(377),
    [anon_sym_COLON_LT_GT] = ACTIONS(377),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(377),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(379),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(377),
    [anon_sym_COLON_EQ] = ACTIONS(379),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(379),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(377),
    [anon_sym_COLON_EQ_GT] = ACTIONS(377),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(377),
    [anon_sym_COLON_GT] = ACTIONS(379),
    [anon_sym_COLON_GT_EQ] = ACTIONS(377),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(377),
    [anon_sym_COLON_AT] = ACTIONS(377),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(377),
    [anon_sym_COLON_CARET] = ACTIONS(377),
    [anon_sym_COLON_PIPE] = ACTIONS(379),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(377),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(379),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(377),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(379),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(377),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(377),
    [anon_sym_nil] = ACTIONS(377),
    [anon_sym_COLONnil] = ACTIONS(379),
    [anon_sym_SQUOTE] = ACTIONS(377),
    [anon_sym_LT_LT] = ACTIONS(377),
    [anon_sym_COMMA] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(377),
    [anon_sym_LBRACE] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(377),
    [anon_sym_RBRACK] = ACTIONS(377),
    [anon_sym_PIPE] = ACTIONS(377),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(377),
    [anon_sym_EQ_GT] = ACTIONS(377),
    [anon_sym_PERCENT] = ACTIONS(379),
    [anon_sym_defmodule] = ACTIONS(377),
    [anon_sym_end] = ACTIONS(377),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(377),
    [anon_sym_defstruct] = ACTIONS(377),
    [sym_comment] = ACTIONS(43),
  },
  [86] = {
    [anon_sym_COMMA] = ACTIONS(381),
    [anon_sym_RBRACE] = ACTIONS(381),
    [anon_sym_RBRACK] = ACTIONS(381),
    [anon_sym_end] = ACTIONS(381),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(381),
    [anon_sym_defstruct] = ACTIONS(381),
    [sym_comment] = ACTIONS(43),
  },
  [87] = {
    [sym_keyword] = STATE(86),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(383),
    [sym_comment] = ACTIONS(43),
  },
  [88] = {
    [aux_sym_keyword_list_repeat1] = STATE(88),
    [anon_sym_COMMA] = ACTIONS(385),
    [anon_sym_RBRACK] = ACTIONS(381),
    [sym_comment] = ACTIONS(43),
  },
  [89] = {
    [anon_sym_RBRACK] = ACTIONS(388),
    [sym_comment] = ACTIONS(43),
  },
  [90] = {
    [anon_sym_RBRACK] = ACTIONS(390),
    [sym_comment] = ACTIONS(43),
  },
  [91] = {
    [anon_sym_COMMA] = ACTIONS(392),
    [anon_sym_RBRACE] = ACTIONS(392),
    [sym_comment] = ACTIONS(43),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(394),
    [sym_alias] = ACTIONS(394),
    [sym_integer] = ACTIONS(396),
    [sym_float] = ACTIONS(394),
    [anon_sym_true] = ACTIONS(394),
    [anon_sym_COLONtrue] = ACTIONS(396),
    [anon_sym_false] = ACTIONS(394),
    [anon_sym_COLONfalse] = ACTIONS(396),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(396),
    [anon_sym_COLON_BANG] = ACTIONS(396),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(396),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(394),
    [anon_sym_COLON_AMP] = ACTIONS(396),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(396),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(394),
    [anon_sym_COLON_STAR] = ACTIONS(394),
    [anon_sym_COLON_PLUS] = ACTIONS(396),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(394),
    [anon_sym_COLON_DASH] = ACTIONS(396),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(394),
    [anon_sym_COLON_DOT] = ACTIONS(396),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(394),
    [anon_sym_COLON_SLASH] = ACTIONS(394),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(394),
    [anon_sym_COLON_LT] = ACTIONS(396),
    [anon_sym_COLON_LT_DASH] = ACTIONS(394),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(394),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(394),
    [anon_sym_COLON_LT_EQ] = ACTIONS(394),
    [anon_sym_COLON_LT_GT] = ACTIONS(394),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(394),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(396),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(394),
    [anon_sym_COLON_EQ] = ACTIONS(396),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(396),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(394),
    [anon_sym_COLON_EQ_GT] = ACTIONS(394),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(394),
    [anon_sym_COLON_GT] = ACTIONS(396),
    [anon_sym_COLON_GT_EQ] = ACTIONS(394),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(394),
    [anon_sym_COLON_AT] = ACTIONS(394),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(394),
    [anon_sym_COLON_CARET] = ACTIONS(394),
    [anon_sym_COLON_PIPE] = ACTIONS(396),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(394),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(396),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(394),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(396),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(394),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(394),
    [anon_sym_nil] = ACTIONS(394),
    [anon_sym_COLONnil] = ACTIONS(396),
    [anon_sym_SQUOTE] = ACTIONS(394),
    [anon_sym_LT_LT] = ACTIONS(394),
    [anon_sym_COMMA] = ACTIONS(394),
    [anon_sym_DQUOTE] = ACTIONS(394),
    [anon_sym_LBRACE] = ACTIONS(394),
    [anon_sym_RBRACE] = ACTIONS(394),
    [anon_sym_LBRACK] = ACTIONS(394),
    [anon_sym_RBRACK] = ACTIONS(394),
    [anon_sym_PIPE] = ACTIONS(394),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(394),
    [anon_sym_EQ_GT] = ACTIONS(394),
    [anon_sym_PERCENT] = ACTIONS(396),
    [anon_sym_defmodule] = ACTIONS(394),
    [anon_sym_end] = ACTIONS(394),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(394),
    [anon_sym_defstruct] = ACTIONS(394),
    [sym_comment] = ACTIONS(43),
  },
  [93] = {
    [sym_keyword] = STATE(86),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(398),
    [sym_comment] = ACTIONS(43),
  },
  [94] = {
    [aux_sym_keyword_list_repeat1] = STATE(94),
    [anon_sym_COMMA] = ACTIONS(385),
    [anon_sym_RBRACE] = ACTIONS(381),
    [sym_comment] = ACTIONS(43),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(400),
    [sym_alias] = ACTIONS(400),
    [sym_integer] = ACTIONS(402),
    [sym_float] = ACTIONS(400),
    [anon_sym_true] = ACTIONS(400),
    [anon_sym_COLONtrue] = ACTIONS(402),
    [anon_sym_false] = ACTIONS(400),
    [anon_sym_COLONfalse] = ACTIONS(402),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(402),
    [anon_sym_COLON_BANG] = ACTIONS(402),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(402),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(400),
    [anon_sym_COLON_AMP] = ACTIONS(402),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(402),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(400),
    [anon_sym_COLON_STAR] = ACTIONS(400),
    [anon_sym_COLON_PLUS] = ACTIONS(402),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(400),
    [anon_sym_COLON_DASH] = ACTIONS(402),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(400),
    [anon_sym_COLON_DOT] = ACTIONS(402),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(400),
    [anon_sym_COLON_SLASH] = ACTIONS(400),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(400),
    [anon_sym_COLON_LT] = ACTIONS(402),
    [anon_sym_COLON_LT_DASH] = ACTIONS(400),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(400),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(400),
    [anon_sym_COLON_LT_EQ] = ACTIONS(400),
    [anon_sym_COLON_LT_GT] = ACTIONS(400),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(400),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(402),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(400),
    [anon_sym_COLON_EQ] = ACTIONS(402),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(402),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(400),
    [anon_sym_COLON_EQ_GT] = ACTIONS(400),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(400),
    [anon_sym_COLON_GT] = ACTIONS(402),
    [anon_sym_COLON_GT_EQ] = ACTIONS(400),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(400),
    [anon_sym_COLON_AT] = ACTIONS(400),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(400),
    [anon_sym_COLON_CARET] = ACTIONS(400),
    [anon_sym_COLON_PIPE] = ACTIONS(402),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(400),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(402),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(400),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(402),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(400),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(400),
    [anon_sym_nil] = ACTIONS(400),
    [anon_sym_COLONnil] = ACTIONS(402),
    [anon_sym_SQUOTE] = ACTIONS(400),
    [anon_sym_LT_LT] = ACTIONS(400),
    [anon_sym_COMMA] = ACTIONS(400),
    [anon_sym_DQUOTE] = ACTIONS(400),
    [anon_sym_LBRACE] = ACTIONS(400),
    [anon_sym_RBRACE] = ACTIONS(400),
    [anon_sym_LBRACK] = ACTIONS(400),
    [anon_sym_RBRACK] = ACTIONS(400),
    [anon_sym_PIPE] = ACTIONS(400),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(400),
    [anon_sym_EQ_GT] = ACTIONS(400),
    [anon_sym_PERCENT] = ACTIONS(402),
    [anon_sym_defmodule] = ACTIONS(400),
    [anon_sym_end] = ACTIONS(400),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(400),
    [anon_sym_defstruct] = ACTIONS(400),
    [sym_comment] = ACTIONS(43),
  },
  [96] = {
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_RBRACE] = ACTIONS(404),
    [sym_comment] = ACTIONS(43),
  },
  [97] = {
    [sym_keyword] = STATE(86),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(406),
    [sym_comment] = ACTIONS(43),
  },
  [98] = {
    [sym__value] = STATE(33),
    [sym_true] = STATE(33),
    [sym_false] = STATE(33),
    [sym_atom] = STATE(33),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(86),
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
    [sym__keyword_map] = STATE(16),
    [sym_pair] = STATE(96),
    [sym_struct] = STATE(33),
    [sym_module] = STATE(33),
    [sym_alias] = ACTIONS(91),
    [sym_integer] = ACTIONS(91),
    [sym_float] = ACTIONS(93),
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
    [anon_sym_RBRACE] = ACTIONS(406),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [99] = {
    [aux_sym_keyword_list_repeat1] = STATE(94),
    [anon_sym_COMMA] = ACTIONS(408),
    [anon_sym_RBRACE] = ACTIONS(406),
    [sym_comment] = ACTIONS(43),
  },
  [100] = {
    [aux_sym__map_repeat1] = STATE(100),
    [anon_sym_COMMA] = ACTIONS(410),
    [anon_sym_RBRACE] = ACTIONS(404),
    [sym_comment] = ACTIONS(43),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(413),
    [sym_alias] = ACTIONS(413),
    [sym_integer] = ACTIONS(415),
    [sym_float] = ACTIONS(413),
    [anon_sym_true] = ACTIONS(413),
    [anon_sym_COLONtrue] = ACTIONS(415),
    [anon_sym_false] = ACTIONS(413),
    [anon_sym_COLONfalse] = ACTIONS(415),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(415),
    [anon_sym_COLON_BANG] = ACTIONS(415),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(415),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(413),
    [anon_sym_COLON_AMP] = ACTIONS(415),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(415),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(413),
    [anon_sym_COLON_STAR] = ACTIONS(413),
    [anon_sym_COLON_PLUS] = ACTIONS(415),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(413),
    [anon_sym_COLON_DASH] = ACTIONS(415),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(413),
    [anon_sym_COLON_DOT] = ACTIONS(415),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(413),
    [anon_sym_COLON_SLASH] = ACTIONS(413),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(413),
    [anon_sym_COLON_LT] = ACTIONS(415),
    [anon_sym_COLON_LT_DASH] = ACTIONS(413),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(413),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(413),
    [anon_sym_COLON_LT_EQ] = ACTIONS(413),
    [anon_sym_COLON_LT_GT] = ACTIONS(413),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(413),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(415),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(413),
    [anon_sym_COLON_EQ] = ACTIONS(415),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(415),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(413),
    [anon_sym_COLON_EQ_GT] = ACTIONS(413),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(413),
    [anon_sym_COLON_GT] = ACTIONS(415),
    [anon_sym_COLON_GT_EQ] = ACTIONS(413),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(413),
    [anon_sym_COLON_AT] = ACTIONS(413),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(413),
    [anon_sym_COLON_CARET] = ACTIONS(413),
    [anon_sym_COLON_PIPE] = ACTIONS(415),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(413),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(415),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(413),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(415),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(413),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(413),
    [anon_sym_nil] = ACTIONS(413),
    [anon_sym_COLONnil] = ACTIONS(415),
    [anon_sym_SQUOTE] = ACTIONS(413),
    [anon_sym_LT_LT] = ACTIONS(413),
    [anon_sym_COMMA] = ACTIONS(413),
    [anon_sym_DQUOTE] = ACTIONS(413),
    [anon_sym_LBRACE] = ACTIONS(413),
    [anon_sym_RBRACE] = ACTIONS(413),
    [anon_sym_LBRACK] = ACTIONS(413),
    [anon_sym_RBRACK] = ACTIONS(413),
    [anon_sym_PIPE] = ACTIONS(413),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(413),
    [anon_sym_EQ_GT] = ACTIONS(413),
    [anon_sym_PERCENT] = ACTIONS(415),
    [anon_sym_defmodule] = ACTIONS(413),
    [anon_sym_end] = ACTIONS(413),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(413),
    [anon_sym_defstruct] = ACTIONS(413),
    [sym_comment] = ACTIONS(43),
  },
  [102] = {
    [aux_sym_keyword_list_repeat1] = STATE(128),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(419),
    [sym_comment] = ACTIONS(43),
  },
  [103] = {
    [aux_sym_keyword_list_repeat1] = STATE(131),
    [aux_sym__map_repeat1] = STATE(132),
    [anon_sym_COMMA] = ACTIONS(421),
    [anon_sym_RBRACE] = ACTIONS(423),
    [sym_comment] = ACTIONS(43),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(425),
    [sym_alias] = ACTIONS(425),
    [sym_integer] = ACTIONS(427),
    [sym_float] = ACTIONS(425),
    [anon_sym_true] = ACTIONS(425),
    [anon_sym_COLONtrue] = ACTIONS(427),
    [anon_sym_false] = ACTIONS(425),
    [anon_sym_COLONfalse] = ACTIONS(427),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(427),
    [anon_sym_COLON_BANG] = ACTIONS(427),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(427),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(425),
    [anon_sym_COLON_AMP] = ACTIONS(427),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(427),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(425),
    [anon_sym_COLON_STAR] = ACTIONS(425),
    [anon_sym_COLON_PLUS] = ACTIONS(427),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(425),
    [anon_sym_COLON_DASH] = ACTIONS(427),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(425),
    [anon_sym_COLON_DOT] = ACTIONS(427),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(425),
    [anon_sym_COLON_SLASH] = ACTIONS(425),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(425),
    [anon_sym_COLON_LT] = ACTIONS(427),
    [anon_sym_COLON_LT_DASH] = ACTIONS(425),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(425),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(425),
    [anon_sym_COLON_LT_EQ] = ACTIONS(425),
    [anon_sym_COLON_LT_GT] = ACTIONS(425),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(425),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(427),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(425),
    [anon_sym_COLON_EQ] = ACTIONS(427),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(427),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(425),
    [anon_sym_COLON_EQ_GT] = ACTIONS(425),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(425),
    [anon_sym_COLON_GT] = ACTIONS(427),
    [anon_sym_COLON_GT_EQ] = ACTIONS(425),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(425),
    [anon_sym_COLON_AT] = ACTIONS(425),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(425),
    [anon_sym_COLON_CARET] = ACTIONS(425),
    [anon_sym_COLON_PIPE] = ACTIONS(427),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(425),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(427),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(425),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(427),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(425),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(425),
    [anon_sym_nil] = ACTIONS(425),
    [anon_sym_COLONnil] = ACTIONS(427),
    [anon_sym_SQUOTE] = ACTIONS(425),
    [anon_sym_LT_LT] = ACTIONS(425),
    [anon_sym_COMMA] = ACTIONS(425),
    [anon_sym_DQUOTE] = ACTIONS(425),
    [anon_sym_LBRACE] = ACTIONS(425),
    [anon_sym_RBRACE] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(425),
    [anon_sym_RBRACK] = ACTIONS(425),
    [anon_sym_PIPE] = ACTIONS(425),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(425),
    [anon_sym_EQ_GT] = ACTIONS(425),
    [anon_sym_PERCENT] = ACTIONS(427),
    [anon_sym_defmodule] = ACTIONS(425),
    [anon_sym_end] = ACTIONS(425),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(425),
    [anon_sym_defstruct] = ACTIONS(425),
    [sym_comment] = ACTIONS(43),
  },
  [105] = {
    [sym__value] = STATE(133),
    [sym_true] = STATE(133),
    [sym_false] = STATE(133),
    [sym_atom] = STATE(133),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(134),
    [sym_nil] = STATE(133),
    [sym_charlist] = STATE(133),
    [sym_binary] = STATE(133),
    [sym_string] = STATE(133),
    [sym_tuple] = STATE(133),
    [sym__list_or_keyword_list] = STATE(133),
    [sym_list] = STATE(133),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(133),
    [sym_map] = STATE(133),
    [sym__empty_map] = STATE(16),
    [sym__map] = STATE(16),
    [sym__keyword_map] = STATE(16),
    [sym_struct] = STATE(133),
    [sym_implicit_keyword_list] = STATE(133),
    [sym_module] = STATE(133),
    [sym_alias] = ACTIONS(429),
    [sym_integer] = ACTIONS(429),
    [sym_float] = ACTIONS(431),
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
    [anon_sym_end] = ACTIONS(433),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(435),
    [anon_sym_defstruct] = ACTIONS(433),
    [sym_comment] = ACTIONS(43),
  },
  [106] = {
    [sym_keyword] = STATE(134),
    [sym_list] = STATE(136),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_implicit_keyword_list] = STATE(136),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(437),
    [sym_comment] = ACTIONS(43),
  },
  [107] = {
    [sym__module_body] = STATE(138),
    [sym_module_attribute] = STATE(138),
    [sym_defstruct] = STATE(138),
    [aux_sym_module_repeat1] = STATE(138),
    [anon_sym_end] = ACTIONS(439),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(335),
    [anon_sym_defstruct] = ACTIONS(337),
    [sym_comment] = ACTIONS(43),
  },
  [108] = {
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
    [anon_sym_defstruct] = ACTIONS(441),
    [sym_comment] = ACTIONS(43),
  },
  [109] = {
    [sym_charlist] = STATE(20),
    [sym_binary_segment] = STATE(71),
    [sym_string] = STATE(20),
    [sym_integer] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(43),
  },
  [110] = {
    [sym_keyword] = STATE(86),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [sym_comment] = ACTIONS(43),
  },
  [111] = {
    [aux_sym_keyword_list_repeat1] = STATE(94),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_RBRACE] = ACTIONS(445),
    [sym_comment] = ACTIONS(43),
  },
  [112] = {
    [anon_sym_RBRACE] = ACTIONS(447),
    [sym_comment] = ACTIONS(43),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(449),
    [sym_alias] = ACTIONS(449),
    [sym_integer] = ACTIONS(451),
    [sym_float] = ACTIONS(449),
    [anon_sym_true] = ACTIONS(449),
    [anon_sym_COLONtrue] = ACTIONS(451),
    [anon_sym_false] = ACTIONS(449),
    [anon_sym_COLONfalse] = ACTIONS(451),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(451),
    [anon_sym_COLON_BANG] = ACTIONS(451),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(451),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(449),
    [anon_sym_COLON_AMP] = ACTIONS(451),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(451),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(449),
    [anon_sym_COLON_STAR] = ACTIONS(449),
    [anon_sym_COLON_PLUS] = ACTIONS(451),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(449),
    [anon_sym_COLON_DASH] = ACTIONS(451),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(449),
    [anon_sym_COLON_DOT] = ACTIONS(451),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(449),
    [anon_sym_COLON_SLASH] = ACTIONS(449),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(449),
    [anon_sym_COLON_LT] = ACTIONS(451),
    [anon_sym_COLON_LT_DASH] = ACTIONS(449),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(449),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(449),
    [anon_sym_COLON_LT_EQ] = ACTIONS(449),
    [anon_sym_COLON_LT_GT] = ACTIONS(449),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(449),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(451),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(449),
    [anon_sym_COLON_EQ] = ACTIONS(451),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(451),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(449),
    [anon_sym_COLON_EQ_GT] = ACTIONS(449),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(449),
    [anon_sym_COLON_GT] = ACTIONS(451),
    [anon_sym_COLON_GT_EQ] = ACTIONS(449),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(449),
    [anon_sym_COLON_AT] = ACTIONS(449),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(449),
    [anon_sym_COLON_CARET] = ACTIONS(449),
    [anon_sym_COLON_PIPE] = ACTIONS(451),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(449),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(451),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(449),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(451),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(449),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(449),
    [anon_sym_nil] = ACTIONS(449),
    [anon_sym_COLONnil] = ACTIONS(451),
    [anon_sym_SQUOTE] = ACTIONS(449),
    [anon_sym_LT_LT] = ACTIONS(449),
    [anon_sym_COMMA] = ACTIONS(449),
    [anon_sym_DQUOTE] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(449),
    [anon_sym_RBRACE] = ACTIONS(449),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_RBRACK] = ACTIONS(449),
    [anon_sym_PIPE] = ACTIONS(449),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(449),
    [anon_sym_EQ_GT] = ACTIONS(449),
    [anon_sym_PERCENT] = ACTIONS(451),
    [anon_sym_defmodule] = ACTIONS(449),
    [anon_sym_end] = ACTIONS(449),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(449),
    [anon_sym_defstruct] = ACTIONS(449),
    [sym_comment] = ACTIONS(43),
  },
  [114] = {
    [anon_sym_COMMA] = ACTIONS(453),
    [anon_sym_RBRACE] = ACTIONS(447),
    [sym_comment] = ACTIONS(43),
  },
  [115] = {
    [sym__expression] = STATE(75),
    [sym__value] = STATE(75),
    [sym_true] = STATE(75),
    [sym_false] = STATE(75),
    [sym_atom] = STATE(75),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(75),
    [sym_charlist] = STATE(75),
    [sym_binary] = STATE(75),
    [sym_string] = STATE(75),
    [sym_tuple] = STATE(75),
    [sym__list_or_keyword_list] = STATE(75),
    [sym_list] = STATE(75),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(75),
    [sym_map] = STATE(75),
    [sym__empty_map] = STATE(16),
    [sym__map] = STATE(16),
    [sym__keyword_map] = STATE(16),
    [sym_struct] = STATE(75),
    [sym_module] = STATE(75),
    [sym_alias] = ACTIONS(277),
    [sym_integer] = ACTIONS(275),
    [sym_float] = ACTIONS(277),
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
  [116] = {
    [aux_sym_keyword_list_repeat1] = STATE(88),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_RBRACK] = ACTIONS(445),
    [sym_comment] = ACTIONS(43),
  },
  [117] = {
    [anon_sym_RBRACK] = ACTIONS(455),
    [sym_comment] = ACTIONS(43),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(457),
    [sym_alias] = ACTIONS(457),
    [sym_integer] = ACTIONS(459),
    [sym_float] = ACTIONS(457),
    [anon_sym_true] = ACTIONS(457),
    [anon_sym_COLONtrue] = ACTIONS(459),
    [anon_sym_false] = ACTIONS(457),
    [anon_sym_COLONfalse] = ACTIONS(459),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(459),
    [anon_sym_COLON_BANG] = ACTIONS(459),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(459),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(457),
    [anon_sym_COLON_AMP] = ACTIONS(459),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(459),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(457),
    [anon_sym_COLON_STAR] = ACTIONS(457),
    [anon_sym_COLON_PLUS] = ACTIONS(459),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(457),
    [anon_sym_COLON_DASH] = ACTIONS(459),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(457),
    [anon_sym_COLON_DOT] = ACTIONS(459),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(457),
    [anon_sym_COLON_SLASH] = ACTIONS(457),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(457),
    [anon_sym_COLON_LT] = ACTIONS(459),
    [anon_sym_COLON_LT_DASH] = ACTIONS(457),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(457),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(457),
    [anon_sym_COLON_LT_EQ] = ACTIONS(457),
    [anon_sym_COLON_LT_GT] = ACTIONS(457),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(457),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(459),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(457),
    [anon_sym_COLON_EQ] = ACTIONS(459),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(459),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(457),
    [anon_sym_COLON_EQ_GT] = ACTIONS(457),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(457),
    [anon_sym_COLON_GT] = ACTIONS(459),
    [anon_sym_COLON_GT_EQ] = ACTIONS(457),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(457),
    [anon_sym_COLON_AT] = ACTIONS(457),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(457),
    [anon_sym_COLON_CARET] = ACTIONS(457),
    [anon_sym_COLON_PIPE] = ACTIONS(459),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(457),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(459),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(457),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(459),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(457),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(457),
    [anon_sym_nil] = ACTIONS(457),
    [anon_sym_COLONnil] = ACTIONS(459),
    [anon_sym_SQUOTE] = ACTIONS(457),
    [anon_sym_LT_LT] = ACTIONS(457),
    [anon_sym_COMMA] = ACTIONS(457),
    [anon_sym_DQUOTE] = ACTIONS(457),
    [anon_sym_LBRACE] = ACTIONS(457),
    [anon_sym_RBRACE] = ACTIONS(457),
    [anon_sym_LBRACK] = ACTIONS(457),
    [anon_sym_RBRACK] = ACTIONS(457),
    [anon_sym_PIPE] = ACTIONS(457),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(457),
    [anon_sym_EQ_GT] = ACTIONS(457),
    [anon_sym_PERCENT] = ACTIONS(459),
    [anon_sym_defmodule] = ACTIONS(457),
    [anon_sym_end] = ACTIONS(457),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(457),
    [anon_sym_defstruct] = ACTIONS(457),
    [sym_comment] = ACTIONS(43),
  },
  [119] = {
    [anon_sym_COMMA] = ACTIONS(461),
    [anon_sym_RBRACK] = ACTIONS(455),
    [sym_comment] = ACTIONS(43),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(463),
    [sym_alias] = ACTIONS(463),
    [sym_integer] = ACTIONS(465),
    [sym_float] = ACTIONS(463),
    [anon_sym_true] = ACTIONS(463),
    [anon_sym_COLONtrue] = ACTIONS(465),
    [anon_sym_false] = ACTIONS(463),
    [anon_sym_COLONfalse] = ACTIONS(465),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(465),
    [anon_sym_COLON_BANG] = ACTIONS(465),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(465),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(463),
    [anon_sym_COLON_AMP] = ACTIONS(465),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(465),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(463),
    [anon_sym_COLON_STAR] = ACTIONS(463),
    [anon_sym_COLON_PLUS] = ACTIONS(465),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(463),
    [anon_sym_COLON_DASH] = ACTIONS(465),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(463),
    [anon_sym_COLON_DOT] = ACTIONS(465),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(463),
    [anon_sym_COLON_SLASH] = ACTIONS(463),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(463),
    [anon_sym_COLON_LT] = ACTIONS(465),
    [anon_sym_COLON_LT_DASH] = ACTIONS(463),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(463),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(463),
    [anon_sym_COLON_LT_EQ] = ACTIONS(463),
    [anon_sym_COLON_LT_GT] = ACTIONS(463),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(463),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(465),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(463),
    [anon_sym_COLON_EQ] = ACTIONS(465),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(465),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(463),
    [anon_sym_COLON_EQ_GT] = ACTIONS(463),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(463),
    [anon_sym_COLON_GT] = ACTIONS(465),
    [anon_sym_COLON_GT_EQ] = ACTIONS(463),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(463),
    [anon_sym_COLON_AT] = ACTIONS(463),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(463),
    [anon_sym_COLON_CARET] = ACTIONS(463),
    [anon_sym_COLON_PIPE] = ACTIONS(465),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(463),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(465),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(463),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(465),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(463),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(463),
    [anon_sym_nil] = ACTIONS(463),
    [anon_sym_COLONnil] = ACTIONS(465),
    [anon_sym_SQUOTE] = ACTIONS(463),
    [anon_sym_LT_LT] = ACTIONS(463),
    [anon_sym_COMMA] = ACTIONS(463),
    [anon_sym_DQUOTE] = ACTIONS(463),
    [anon_sym_LBRACE] = ACTIONS(463),
    [anon_sym_RBRACE] = ACTIONS(463),
    [anon_sym_LBRACK] = ACTIONS(463),
    [anon_sym_RBRACK] = ACTIONS(463),
    [anon_sym_PIPE] = ACTIONS(463),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(463),
    [anon_sym_EQ_GT] = ACTIONS(463),
    [anon_sym_PERCENT] = ACTIONS(465),
    [anon_sym_defmodule] = ACTIONS(463),
    [anon_sym_end] = ACTIONS(463),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(463),
    [anon_sym_defstruct] = ACTIONS(463),
    [sym_comment] = ACTIONS(43),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(467),
    [sym_alias] = ACTIONS(467),
    [sym_integer] = ACTIONS(469),
    [sym_float] = ACTIONS(467),
    [anon_sym_true] = ACTIONS(467),
    [anon_sym_COLONtrue] = ACTIONS(469),
    [anon_sym_false] = ACTIONS(467),
    [anon_sym_COLONfalse] = ACTIONS(469),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(469),
    [anon_sym_COLON_BANG] = ACTIONS(469),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(469),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(467),
    [anon_sym_COLON_AMP] = ACTIONS(469),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(469),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(467),
    [anon_sym_COLON_STAR] = ACTIONS(467),
    [anon_sym_COLON_PLUS] = ACTIONS(469),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(467),
    [anon_sym_COLON_DASH] = ACTIONS(469),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(467),
    [anon_sym_COLON_DOT] = ACTIONS(469),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(467),
    [anon_sym_COLON_SLASH] = ACTIONS(467),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(467),
    [anon_sym_COLON_LT] = ACTIONS(469),
    [anon_sym_COLON_LT_DASH] = ACTIONS(467),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(467),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(467),
    [anon_sym_COLON_LT_EQ] = ACTIONS(467),
    [anon_sym_COLON_LT_GT] = ACTIONS(467),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(467),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(469),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(467),
    [anon_sym_COLON_EQ] = ACTIONS(469),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(469),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(467),
    [anon_sym_COLON_EQ_GT] = ACTIONS(467),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(467),
    [anon_sym_COLON_GT] = ACTIONS(469),
    [anon_sym_COLON_GT_EQ] = ACTIONS(467),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(467),
    [anon_sym_COLON_AT] = ACTIONS(467),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(467),
    [anon_sym_COLON_CARET] = ACTIONS(467),
    [anon_sym_COLON_PIPE] = ACTIONS(469),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(467),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(469),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(467),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(469),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(467),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(467),
    [anon_sym_nil] = ACTIONS(467),
    [anon_sym_COLONnil] = ACTIONS(469),
    [anon_sym_SQUOTE] = ACTIONS(467),
    [anon_sym_LT_LT] = ACTIONS(467),
    [anon_sym_COMMA] = ACTIONS(467),
    [anon_sym_DQUOTE] = ACTIONS(467),
    [anon_sym_LBRACE] = ACTIONS(467),
    [anon_sym_RBRACE] = ACTIONS(467),
    [anon_sym_LBRACK] = ACTIONS(467),
    [anon_sym_RBRACK] = ACTIONS(467),
    [anon_sym_PIPE] = ACTIONS(467),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(467),
    [anon_sym_EQ_GT] = ACTIONS(467),
    [anon_sym_PERCENT] = ACTIONS(469),
    [anon_sym_defmodule] = ACTIONS(467),
    [anon_sym_end] = ACTIONS(467),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(467),
    [anon_sym_defstruct] = ACTIONS(467),
    [sym_comment] = ACTIONS(43),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(471),
    [sym_alias] = ACTIONS(471),
    [sym_integer] = ACTIONS(473),
    [sym_float] = ACTIONS(471),
    [anon_sym_true] = ACTIONS(471),
    [anon_sym_COLONtrue] = ACTIONS(473),
    [anon_sym_false] = ACTIONS(471),
    [anon_sym_COLONfalse] = ACTIONS(473),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(473),
    [anon_sym_COLON_BANG] = ACTIONS(473),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(473),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(471),
    [anon_sym_COLON_AMP] = ACTIONS(473),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(473),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(471),
    [anon_sym_COLON_STAR] = ACTIONS(471),
    [anon_sym_COLON_PLUS] = ACTIONS(473),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(471),
    [anon_sym_COLON_DASH] = ACTIONS(473),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(471),
    [anon_sym_COLON_DOT] = ACTIONS(473),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(471),
    [anon_sym_COLON_SLASH] = ACTIONS(471),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(471),
    [anon_sym_COLON_LT] = ACTIONS(473),
    [anon_sym_COLON_LT_DASH] = ACTIONS(471),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(471),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(471),
    [anon_sym_COLON_LT_EQ] = ACTIONS(471),
    [anon_sym_COLON_LT_GT] = ACTIONS(471),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(471),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(473),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(471),
    [anon_sym_COLON_EQ] = ACTIONS(473),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(473),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(471),
    [anon_sym_COLON_EQ_GT] = ACTIONS(471),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(471),
    [anon_sym_COLON_GT] = ACTIONS(473),
    [anon_sym_COLON_GT_EQ] = ACTIONS(471),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(471),
    [anon_sym_COLON_AT] = ACTIONS(471),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(471),
    [anon_sym_COLON_CARET] = ACTIONS(471),
    [anon_sym_COLON_PIPE] = ACTIONS(473),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(471),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(473),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(471),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(473),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(471),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(471),
    [anon_sym_nil] = ACTIONS(471),
    [anon_sym_COLONnil] = ACTIONS(473),
    [anon_sym_SQUOTE] = ACTIONS(471),
    [anon_sym_LT_LT] = ACTIONS(471),
    [anon_sym_COMMA] = ACTIONS(471),
    [anon_sym_DQUOTE] = ACTIONS(471),
    [anon_sym_LBRACE] = ACTIONS(471),
    [anon_sym_RBRACE] = ACTIONS(471),
    [anon_sym_LBRACK] = ACTIONS(471),
    [anon_sym_RBRACK] = ACTIONS(471),
    [anon_sym_PIPE] = ACTIONS(471),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(471),
    [anon_sym_EQ_GT] = ACTIONS(471),
    [anon_sym_PERCENT] = ACTIONS(473),
    [anon_sym_defmodule] = ACTIONS(471),
    [anon_sym_end] = ACTIONS(471),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(471),
    [anon_sym_defstruct] = ACTIONS(471),
    [sym_comment] = ACTIONS(43),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(475),
    [sym_alias] = ACTIONS(475),
    [sym_integer] = ACTIONS(477),
    [sym_float] = ACTIONS(475),
    [anon_sym_true] = ACTIONS(475),
    [anon_sym_COLONtrue] = ACTIONS(477),
    [anon_sym_false] = ACTIONS(475),
    [anon_sym_COLONfalse] = ACTIONS(477),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(477),
    [anon_sym_COLON_BANG] = ACTIONS(477),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(477),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(475),
    [anon_sym_COLON_AMP] = ACTIONS(477),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(477),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(475),
    [anon_sym_COLON_STAR] = ACTIONS(475),
    [anon_sym_COLON_PLUS] = ACTIONS(477),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(475),
    [anon_sym_COLON_DASH] = ACTIONS(477),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(475),
    [anon_sym_COLON_DOT] = ACTIONS(477),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(475),
    [anon_sym_COLON_SLASH] = ACTIONS(475),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(475),
    [anon_sym_COLON_LT] = ACTIONS(477),
    [anon_sym_COLON_LT_DASH] = ACTIONS(475),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(475),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(475),
    [anon_sym_COLON_LT_EQ] = ACTIONS(475),
    [anon_sym_COLON_LT_GT] = ACTIONS(475),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(475),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(477),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(475),
    [anon_sym_COLON_EQ] = ACTIONS(477),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(477),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(475),
    [anon_sym_COLON_EQ_GT] = ACTIONS(475),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(475),
    [anon_sym_COLON_GT] = ACTIONS(477),
    [anon_sym_COLON_GT_EQ] = ACTIONS(475),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(475),
    [anon_sym_COLON_AT] = ACTIONS(475),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(475),
    [anon_sym_COLON_CARET] = ACTIONS(475),
    [anon_sym_COLON_PIPE] = ACTIONS(477),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(475),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(477),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(475),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(477),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(475),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(475),
    [anon_sym_nil] = ACTIONS(475),
    [anon_sym_COLONnil] = ACTIONS(477),
    [anon_sym_SQUOTE] = ACTIONS(475),
    [anon_sym_LT_LT] = ACTIONS(475),
    [anon_sym_COMMA] = ACTIONS(475),
    [anon_sym_DQUOTE] = ACTIONS(475),
    [anon_sym_LBRACE] = ACTIONS(475),
    [anon_sym_RBRACE] = ACTIONS(475),
    [anon_sym_LBRACK] = ACTIONS(475),
    [anon_sym_RBRACK] = ACTIONS(475),
    [anon_sym_PIPE] = ACTIONS(475),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(475),
    [anon_sym_EQ_GT] = ACTIONS(475),
    [anon_sym_PERCENT] = ACTIONS(477),
    [anon_sym_defmodule] = ACTIONS(475),
    [anon_sym_end] = ACTIONS(475),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(475),
    [anon_sym_defstruct] = ACTIONS(475),
    [sym_comment] = ACTIONS(43),
  },
  [124] = {
    [sym_keyword] = STATE(86),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(479),
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
    [sym__keyword_map] = STATE(16),
    [sym_pair] = STATE(96),
    [sym_struct] = STATE(33),
    [sym_module] = STATE(33),
    [sym_alias] = ACTIONS(93),
    [sym_integer] = ACTIONS(91),
    [sym_float] = ACTIONS(93),
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
  [126] = {
    [sym_keyword] = STATE(86),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(481),
    [sym_comment] = ACTIONS(43),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(483),
    [sym_alias] = ACTIONS(483),
    [sym_integer] = ACTIONS(485),
    [sym_float] = ACTIONS(483),
    [anon_sym_true] = ACTIONS(483),
    [anon_sym_COLONtrue] = ACTIONS(485),
    [anon_sym_false] = ACTIONS(483),
    [anon_sym_COLONfalse] = ACTIONS(485),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(485),
    [anon_sym_COLON_BANG] = ACTIONS(485),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(485),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(483),
    [anon_sym_COLON_AMP] = ACTIONS(485),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(485),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(483),
    [anon_sym_COLON_STAR] = ACTIONS(483),
    [anon_sym_COLON_PLUS] = ACTIONS(485),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(483),
    [anon_sym_COLON_DASH] = ACTIONS(485),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(483),
    [anon_sym_COLON_DOT] = ACTIONS(485),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(483),
    [anon_sym_COLON_SLASH] = ACTIONS(483),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(483),
    [anon_sym_COLON_LT] = ACTIONS(485),
    [anon_sym_COLON_LT_DASH] = ACTIONS(483),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(483),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(483),
    [anon_sym_COLON_LT_EQ] = ACTIONS(483),
    [anon_sym_COLON_LT_GT] = ACTIONS(483),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(483),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(485),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(483),
    [anon_sym_COLON_EQ] = ACTIONS(485),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(485),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(483),
    [anon_sym_COLON_EQ_GT] = ACTIONS(483),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(483),
    [anon_sym_COLON_GT] = ACTIONS(485),
    [anon_sym_COLON_GT_EQ] = ACTIONS(483),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(483),
    [anon_sym_COLON_AT] = ACTIONS(483),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(483),
    [anon_sym_COLON_CARET] = ACTIONS(483),
    [anon_sym_COLON_PIPE] = ACTIONS(485),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(483),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(485),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(483),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(485),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(483),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(483),
    [anon_sym_nil] = ACTIONS(483),
    [anon_sym_COLONnil] = ACTIONS(485),
    [anon_sym_SQUOTE] = ACTIONS(483),
    [anon_sym_LT_LT] = ACTIONS(483),
    [anon_sym_COMMA] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(483),
    [anon_sym_LBRACE] = ACTIONS(483),
    [anon_sym_RBRACE] = ACTIONS(483),
    [anon_sym_LBRACK] = ACTIONS(483),
    [anon_sym_RBRACK] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(483),
    [anon_sym_EQ_GT] = ACTIONS(483),
    [anon_sym_PERCENT] = ACTIONS(485),
    [anon_sym_defmodule] = ACTIONS(483),
    [anon_sym_end] = ACTIONS(483),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(483),
    [anon_sym_defstruct] = ACTIONS(483),
    [sym_comment] = ACTIONS(43),
  },
  [128] = {
    [aux_sym_keyword_list_repeat1] = STATE(94),
    [anon_sym_COMMA] = ACTIONS(487),
    [anon_sym_RBRACE] = ACTIONS(481),
    [sym_comment] = ACTIONS(43),
  },
  [129] = {
    [sym__value] = STATE(33),
    [sym_true] = STATE(33),
    [sym_false] = STATE(33),
    [sym_atom] = STATE(33),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(86),
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
    [sym__keyword_map] = STATE(16),
    [sym_pair] = STATE(96),
    [sym_struct] = STATE(33),
    [sym_module] = STATE(33),
    [sym_alias] = ACTIONS(91),
    [sym_integer] = ACTIONS(91),
    [sym_float] = ACTIONS(93),
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
    [anon_sym_RBRACE] = ACTIONS(489),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(491),
    [sym_alias] = ACTIONS(491),
    [sym_integer] = ACTIONS(493),
    [sym_float] = ACTIONS(491),
    [anon_sym_true] = ACTIONS(491),
    [anon_sym_COLONtrue] = ACTIONS(493),
    [anon_sym_false] = ACTIONS(491),
    [anon_sym_COLONfalse] = ACTIONS(493),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(493),
    [anon_sym_COLON_BANG] = ACTIONS(493),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(493),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(491),
    [anon_sym_COLON_AMP] = ACTIONS(493),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(493),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(491),
    [anon_sym_COLON_STAR] = ACTIONS(491),
    [anon_sym_COLON_PLUS] = ACTIONS(493),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(491),
    [anon_sym_COLON_DASH] = ACTIONS(493),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(491),
    [anon_sym_COLON_DOT] = ACTIONS(493),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(491),
    [anon_sym_COLON_SLASH] = ACTIONS(491),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(491),
    [anon_sym_COLON_LT] = ACTIONS(493),
    [anon_sym_COLON_LT_DASH] = ACTIONS(491),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(491),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(491),
    [anon_sym_COLON_LT_EQ] = ACTIONS(491),
    [anon_sym_COLON_LT_GT] = ACTIONS(491),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(491),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(493),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(491),
    [anon_sym_COLON_EQ] = ACTIONS(493),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(493),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(491),
    [anon_sym_COLON_EQ_GT] = ACTIONS(491),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(491),
    [anon_sym_COLON_GT] = ACTIONS(493),
    [anon_sym_COLON_GT_EQ] = ACTIONS(491),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(491),
    [anon_sym_COLON_AT] = ACTIONS(491),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(491),
    [anon_sym_COLON_CARET] = ACTIONS(491),
    [anon_sym_COLON_PIPE] = ACTIONS(493),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(491),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(493),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(491),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(493),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(491),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(491),
    [anon_sym_nil] = ACTIONS(491),
    [anon_sym_COLONnil] = ACTIONS(493),
    [anon_sym_SQUOTE] = ACTIONS(491),
    [anon_sym_LT_LT] = ACTIONS(491),
    [anon_sym_COMMA] = ACTIONS(491),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [anon_sym_LBRACE] = ACTIONS(491),
    [anon_sym_RBRACE] = ACTIONS(491),
    [anon_sym_LBRACK] = ACTIONS(491),
    [anon_sym_RBRACK] = ACTIONS(491),
    [anon_sym_PIPE] = ACTIONS(491),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(491),
    [anon_sym_EQ_GT] = ACTIONS(491),
    [anon_sym_PERCENT] = ACTIONS(493),
    [anon_sym_defmodule] = ACTIONS(491),
    [anon_sym_end] = ACTIONS(491),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(491),
    [anon_sym_defstruct] = ACTIONS(491),
    [sym_comment] = ACTIONS(43),
  },
  [131] = {
    [aux_sym_keyword_list_repeat1] = STATE(94),
    [anon_sym_COMMA] = ACTIONS(495),
    [anon_sym_RBRACE] = ACTIONS(489),
    [sym_comment] = ACTIONS(43),
  },
  [132] = {
    [aux_sym_keyword_list_repeat1] = STATE(149),
    [aux_sym__map_repeat1] = STATE(100),
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_RBRACE] = ACTIONS(489),
    [sym_comment] = ACTIONS(43),
  },
  [133] = {
    [anon_sym_end] = ACTIONS(499),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(499),
    [anon_sym_defstruct] = ACTIONS(499),
    [sym_comment] = ACTIONS(43),
  },
  [134] = {
    [aux_sym_keyword_list_repeat1] = STATE(150),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_end] = ACTIONS(360),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(360),
    [anon_sym_defstruct] = ACTIONS(360),
    [sym_comment] = ACTIONS(43),
  },
  [135] = {
    [sym__expression] = STATE(29),
    [sym__value] = STATE(29),
    [sym_true] = STATE(29),
    [sym_false] = STATE(29),
    [sym_atom] = STATE(29),
    [sym__operator_atom] = STATE(4),
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
    [sym__keyword_map] = STATE(16),
    [sym_struct] = STATE(29),
    [sym_module] = STATE(29),
    [sym_alias] = ACTIONS(83),
    [sym_integer] = ACTIONS(81),
    [sym_float] = ACTIONS(83),
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
    [anon_sym_RBRACK] = ACTIONS(87),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(41),
    [sym_comment] = ACTIONS(43),
  },
  [136] = {
    [anon_sym_end] = ACTIONS(501),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(501),
    [anon_sym_defstruct] = ACTIONS(501),
    [sym_comment] = ACTIONS(43),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(503),
    [sym_alias] = ACTIONS(503),
    [sym_integer] = ACTIONS(505),
    [sym_float] = ACTIONS(503),
    [anon_sym_true] = ACTIONS(503),
    [anon_sym_COLONtrue] = ACTIONS(505),
    [anon_sym_false] = ACTIONS(503),
    [anon_sym_COLONfalse] = ACTIONS(505),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(505),
    [anon_sym_COLON_BANG] = ACTIONS(505),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(505),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(503),
    [anon_sym_COLON_AMP] = ACTIONS(505),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(505),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(503),
    [anon_sym_COLON_STAR] = ACTIONS(503),
    [anon_sym_COLON_PLUS] = ACTIONS(505),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(503),
    [anon_sym_COLON_DASH] = ACTIONS(505),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(503),
    [anon_sym_COLON_DOT] = ACTIONS(505),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(503),
    [anon_sym_COLON_SLASH] = ACTIONS(503),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(503),
    [anon_sym_COLON_LT] = ACTIONS(505),
    [anon_sym_COLON_LT_DASH] = ACTIONS(503),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(503),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(503),
    [anon_sym_COLON_LT_EQ] = ACTIONS(503),
    [anon_sym_COLON_LT_GT] = ACTIONS(503),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(503),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(505),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(503),
    [anon_sym_COLON_EQ] = ACTIONS(505),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(505),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(503),
    [anon_sym_COLON_EQ_GT] = ACTIONS(503),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(503),
    [anon_sym_COLON_GT] = ACTIONS(505),
    [anon_sym_COLON_GT_EQ] = ACTIONS(503),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(503),
    [anon_sym_COLON_AT] = ACTIONS(503),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(503),
    [anon_sym_COLON_CARET] = ACTIONS(503),
    [anon_sym_COLON_PIPE] = ACTIONS(505),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(503),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(505),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(503),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(505),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(503),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(503),
    [anon_sym_nil] = ACTIONS(503),
    [anon_sym_COLONnil] = ACTIONS(505),
    [anon_sym_SQUOTE] = ACTIONS(503),
    [anon_sym_LT_LT] = ACTIONS(503),
    [anon_sym_COMMA] = ACTIONS(503),
    [anon_sym_DQUOTE] = ACTIONS(503),
    [anon_sym_LBRACE] = ACTIONS(503),
    [anon_sym_RBRACE] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(503),
    [anon_sym_RBRACK] = ACTIONS(503),
    [anon_sym_PIPE] = ACTIONS(503),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(503),
    [anon_sym_EQ_GT] = ACTIONS(503),
    [anon_sym_PERCENT] = ACTIONS(505),
    [anon_sym_defmodule] = ACTIONS(503),
    [anon_sym_end] = ACTIONS(503),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(503),
    [anon_sym_defstruct] = ACTIONS(503),
    [sym_comment] = ACTIONS(43),
  },
  [138] = {
    [sym__module_body] = STATE(138),
    [sym_module_attribute] = STATE(138),
    [sym_defstruct] = STATE(138),
    [aux_sym_module_repeat1] = STATE(138),
    [anon_sym_end] = ACTIONS(507),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(509),
    [anon_sym_defstruct] = ACTIONS(512),
    [sym_comment] = ACTIONS(43),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(515),
    [sym_alias] = ACTIONS(515),
    [sym_integer] = ACTIONS(517),
    [sym_float] = ACTIONS(515),
    [anon_sym_true] = ACTIONS(515),
    [anon_sym_COLONtrue] = ACTIONS(517),
    [anon_sym_false] = ACTIONS(515),
    [anon_sym_COLONfalse] = ACTIONS(517),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(517),
    [anon_sym_COLON_BANG] = ACTIONS(517),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(517),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(515),
    [anon_sym_COLON_AMP] = ACTIONS(517),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(517),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(515),
    [anon_sym_COLON_STAR] = ACTIONS(515),
    [anon_sym_COLON_PLUS] = ACTIONS(517),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(515),
    [anon_sym_COLON_DASH] = ACTIONS(517),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(515),
    [anon_sym_COLON_DOT] = ACTIONS(517),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(515),
    [anon_sym_COLON_SLASH] = ACTIONS(515),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(515),
    [anon_sym_COLON_LT] = ACTIONS(517),
    [anon_sym_COLON_LT_DASH] = ACTIONS(515),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(515),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(515),
    [anon_sym_COLON_LT_EQ] = ACTIONS(515),
    [anon_sym_COLON_LT_GT] = ACTIONS(515),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(515),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(517),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(515),
    [anon_sym_COLON_EQ] = ACTIONS(517),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(517),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(515),
    [anon_sym_COLON_EQ_GT] = ACTIONS(515),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(515),
    [anon_sym_COLON_GT] = ACTIONS(517),
    [anon_sym_COLON_GT_EQ] = ACTIONS(515),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(515),
    [anon_sym_COLON_AT] = ACTIONS(515),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(515),
    [anon_sym_COLON_CARET] = ACTIONS(515),
    [anon_sym_COLON_PIPE] = ACTIONS(517),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(515),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(517),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(515),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(517),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(515),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(515),
    [anon_sym_nil] = ACTIONS(515),
    [anon_sym_COLONnil] = ACTIONS(517),
    [anon_sym_SQUOTE] = ACTIONS(515),
    [anon_sym_LT_LT] = ACTIONS(515),
    [anon_sym_COMMA] = ACTIONS(515),
    [anon_sym_DQUOTE] = ACTIONS(515),
    [anon_sym_LBRACE] = ACTIONS(515),
    [anon_sym_RBRACE] = ACTIONS(515),
    [anon_sym_LBRACK] = ACTIONS(515),
    [anon_sym_RBRACK] = ACTIONS(515),
    [anon_sym_PIPE] = ACTIONS(515),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(515),
    [anon_sym_EQ_GT] = ACTIONS(515),
    [anon_sym_PERCENT] = ACTIONS(517),
    [anon_sym_defmodule] = ACTIONS(515),
    [anon_sym_end] = ACTIONS(515),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(515),
    [anon_sym_defstruct] = ACTIONS(515),
    [sym_comment] = ACTIONS(43),
  },
  [140] = {
    [anon_sym_RBRACE] = ACTIONS(519),
    [sym_comment] = ACTIONS(43),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(521),
    [sym_alias] = ACTIONS(521),
    [sym_integer] = ACTIONS(523),
    [sym_float] = ACTIONS(521),
    [anon_sym_true] = ACTIONS(521),
    [anon_sym_COLONtrue] = ACTIONS(523),
    [anon_sym_false] = ACTIONS(521),
    [anon_sym_COLONfalse] = ACTIONS(523),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(523),
    [anon_sym_COLON_BANG] = ACTIONS(523),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(523),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(521),
    [anon_sym_COLON_AMP] = ACTIONS(523),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(523),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(521),
    [anon_sym_COLON_STAR] = ACTIONS(521),
    [anon_sym_COLON_PLUS] = ACTIONS(523),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(521),
    [anon_sym_COLON_DASH] = ACTIONS(523),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(521),
    [anon_sym_COLON_DOT] = ACTIONS(523),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(521),
    [anon_sym_COLON_SLASH] = ACTIONS(521),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(521),
    [anon_sym_COLON_LT] = ACTIONS(523),
    [anon_sym_COLON_LT_DASH] = ACTIONS(521),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(521),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(521),
    [anon_sym_COLON_LT_EQ] = ACTIONS(521),
    [anon_sym_COLON_LT_GT] = ACTIONS(521),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(521),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(523),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(521),
    [anon_sym_COLON_EQ] = ACTIONS(523),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(523),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(521),
    [anon_sym_COLON_EQ_GT] = ACTIONS(521),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(521),
    [anon_sym_COLON_GT] = ACTIONS(523),
    [anon_sym_COLON_GT_EQ] = ACTIONS(521),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(521),
    [anon_sym_COLON_AT] = ACTIONS(521),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(521),
    [anon_sym_COLON_CARET] = ACTIONS(521),
    [anon_sym_COLON_PIPE] = ACTIONS(523),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(521),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(523),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(521),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(523),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(521),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(521),
    [anon_sym_nil] = ACTIONS(521),
    [anon_sym_COLONnil] = ACTIONS(523),
    [anon_sym_SQUOTE] = ACTIONS(521),
    [anon_sym_LT_LT] = ACTIONS(521),
    [anon_sym_COMMA] = ACTIONS(521),
    [anon_sym_DQUOTE] = ACTIONS(521),
    [anon_sym_LBRACE] = ACTIONS(521),
    [anon_sym_RBRACE] = ACTIONS(521),
    [anon_sym_LBRACK] = ACTIONS(521),
    [anon_sym_RBRACK] = ACTIONS(521),
    [anon_sym_PIPE] = ACTIONS(521),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(521),
    [anon_sym_EQ_GT] = ACTIONS(521),
    [anon_sym_PERCENT] = ACTIONS(523),
    [anon_sym_defmodule] = ACTIONS(521),
    [anon_sym_end] = ACTIONS(521),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(521),
    [anon_sym_defstruct] = ACTIONS(521),
    [sym_comment] = ACTIONS(43),
  },
  [142] = {
    [anon_sym_RBRACK] = ACTIONS(525),
    [sym_comment] = ACTIONS(43),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(527),
    [sym_alias] = ACTIONS(527),
    [sym_integer] = ACTIONS(529),
    [sym_float] = ACTIONS(527),
    [anon_sym_true] = ACTIONS(527),
    [anon_sym_COLONtrue] = ACTIONS(529),
    [anon_sym_false] = ACTIONS(527),
    [anon_sym_COLONfalse] = ACTIONS(529),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(529),
    [anon_sym_COLON_BANG] = ACTIONS(529),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(529),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(527),
    [anon_sym_COLON_AMP] = ACTIONS(529),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(529),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(527),
    [anon_sym_COLON_STAR] = ACTIONS(527),
    [anon_sym_COLON_PLUS] = ACTIONS(529),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(527),
    [anon_sym_COLON_DASH] = ACTIONS(529),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(527),
    [anon_sym_COLON_DOT] = ACTIONS(529),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(527),
    [anon_sym_COLON_SLASH] = ACTIONS(527),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(527),
    [anon_sym_COLON_LT] = ACTIONS(529),
    [anon_sym_COLON_LT_DASH] = ACTIONS(527),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(527),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(527),
    [anon_sym_COLON_LT_EQ] = ACTIONS(527),
    [anon_sym_COLON_LT_GT] = ACTIONS(527),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(527),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(529),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(527),
    [anon_sym_COLON_EQ] = ACTIONS(529),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(529),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(527),
    [anon_sym_COLON_EQ_GT] = ACTIONS(527),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(527),
    [anon_sym_COLON_GT] = ACTIONS(529),
    [anon_sym_COLON_GT_EQ] = ACTIONS(527),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(527),
    [anon_sym_COLON_AT] = ACTIONS(527),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(527),
    [anon_sym_COLON_CARET] = ACTIONS(527),
    [anon_sym_COLON_PIPE] = ACTIONS(529),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(527),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(529),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(527),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(529),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(527),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(527),
    [anon_sym_nil] = ACTIONS(527),
    [anon_sym_COLONnil] = ACTIONS(529),
    [anon_sym_SQUOTE] = ACTIONS(527),
    [anon_sym_LT_LT] = ACTIONS(527),
    [anon_sym_COMMA] = ACTIONS(527),
    [anon_sym_DQUOTE] = ACTIONS(527),
    [anon_sym_LBRACE] = ACTIONS(527),
    [anon_sym_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACK] = ACTIONS(527),
    [anon_sym_RBRACK] = ACTIONS(527),
    [anon_sym_PIPE] = ACTIONS(527),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(527),
    [anon_sym_EQ_GT] = ACTIONS(527),
    [anon_sym_PERCENT] = ACTIONS(529),
    [anon_sym_defmodule] = ACTIONS(527),
    [anon_sym_end] = ACTIONS(527),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(527),
    [anon_sym_defstruct] = ACTIONS(527),
    [sym_comment] = ACTIONS(43),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(531),
    [sym_alias] = ACTIONS(531),
    [sym_integer] = ACTIONS(533),
    [sym_float] = ACTIONS(531),
    [anon_sym_true] = ACTIONS(531),
    [anon_sym_COLONtrue] = ACTIONS(533),
    [anon_sym_false] = ACTIONS(531),
    [anon_sym_COLONfalse] = ACTIONS(533),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(533),
    [anon_sym_COLON_BANG] = ACTIONS(533),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(533),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(531),
    [anon_sym_COLON_AMP] = ACTIONS(533),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(533),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(531),
    [anon_sym_COLON_STAR] = ACTIONS(531),
    [anon_sym_COLON_PLUS] = ACTIONS(533),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(531),
    [anon_sym_COLON_DASH] = ACTIONS(533),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(531),
    [anon_sym_COLON_DOT] = ACTIONS(533),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(531),
    [anon_sym_COLON_SLASH] = ACTIONS(531),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(531),
    [anon_sym_COLON_LT] = ACTIONS(533),
    [anon_sym_COLON_LT_DASH] = ACTIONS(531),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(531),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(531),
    [anon_sym_COLON_LT_EQ] = ACTIONS(531),
    [anon_sym_COLON_LT_GT] = ACTIONS(531),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(531),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(533),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(531),
    [anon_sym_COLON_EQ] = ACTIONS(533),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(533),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(531),
    [anon_sym_COLON_EQ_GT] = ACTIONS(531),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(531),
    [anon_sym_COLON_GT] = ACTIONS(533),
    [anon_sym_COLON_GT_EQ] = ACTIONS(531),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(531),
    [anon_sym_COLON_AT] = ACTIONS(531),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(531),
    [anon_sym_COLON_CARET] = ACTIONS(531),
    [anon_sym_COLON_PIPE] = ACTIONS(533),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(531),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(533),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(531),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(533),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(531),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(531),
    [anon_sym_nil] = ACTIONS(531),
    [anon_sym_COLONnil] = ACTIONS(533),
    [anon_sym_SQUOTE] = ACTIONS(531),
    [anon_sym_LT_LT] = ACTIONS(531),
    [anon_sym_COMMA] = ACTIONS(531),
    [anon_sym_DQUOTE] = ACTIONS(531),
    [anon_sym_LBRACE] = ACTIONS(531),
    [anon_sym_RBRACE] = ACTIONS(531),
    [anon_sym_LBRACK] = ACTIONS(531),
    [anon_sym_RBRACK] = ACTIONS(531),
    [anon_sym_PIPE] = ACTIONS(531),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(531),
    [anon_sym_EQ_GT] = ACTIONS(531),
    [anon_sym_PERCENT] = ACTIONS(533),
    [anon_sym_defmodule] = ACTIONS(531),
    [anon_sym_end] = ACTIONS(531),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(531),
    [anon_sym_defstruct] = ACTIONS(531),
    [sym_comment] = ACTIONS(43),
  },
  [145] = {
    [sym_keyword] = STATE(86),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(535),
    [sym_comment] = ACTIONS(43),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(537),
    [sym_alias] = ACTIONS(537),
    [sym_integer] = ACTIONS(539),
    [sym_float] = ACTIONS(537),
    [anon_sym_true] = ACTIONS(537),
    [anon_sym_COLONtrue] = ACTIONS(539),
    [anon_sym_false] = ACTIONS(537),
    [anon_sym_COLONfalse] = ACTIONS(539),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(539),
    [anon_sym_COLON_BANG] = ACTIONS(539),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(539),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(537),
    [anon_sym_COLON_AMP] = ACTIONS(539),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(539),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(537),
    [anon_sym_COLON_STAR] = ACTIONS(537),
    [anon_sym_COLON_PLUS] = ACTIONS(539),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(537),
    [anon_sym_COLON_DASH] = ACTIONS(539),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(537),
    [anon_sym_COLON_DOT] = ACTIONS(539),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(537),
    [anon_sym_COLON_SLASH] = ACTIONS(537),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(537),
    [anon_sym_COLON_LT] = ACTIONS(539),
    [anon_sym_COLON_LT_DASH] = ACTIONS(537),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(537),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(537),
    [anon_sym_COLON_LT_EQ] = ACTIONS(537),
    [anon_sym_COLON_LT_GT] = ACTIONS(537),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(537),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(539),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(537),
    [anon_sym_COLON_EQ] = ACTIONS(539),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(539),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(537),
    [anon_sym_COLON_EQ_GT] = ACTIONS(537),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(537),
    [anon_sym_COLON_GT] = ACTIONS(539),
    [anon_sym_COLON_GT_EQ] = ACTIONS(537),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(537),
    [anon_sym_COLON_AT] = ACTIONS(537),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(537),
    [anon_sym_COLON_CARET] = ACTIONS(537),
    [anon_sym_COLON_PIPE] = ACTIONS(539),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(537),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(539),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(537),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(539),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(537),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(537),
    [anon_sym_nil] = ACTIONS(537),
    [anon_sym_COLONnil] = ACTIONS(539),
    [anon_sym_SQUOTE] = ACTIONS(537),
    [anon_sym_LT_LT] = ACTIONS(537),
    [anon_sym_COMMA] = ACTIONS(537),
    [anon_sym_DQUOTE] = ACTIONS(537),
    [anon_sym_LBRACE] = ACTIONS(537),
    [anon_sym_RBRACE] = ACTIONS(537),
    [anon_sym_LBRACK] = ACTIONS(537),
    [anon_sym_RBRACK] = ACTIONS(537),
    [anon_sym_PIPE] = ACTIONS(537),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(537),
    [anon_sym_EQ_GT] = ACTIONS(537),
    [anon_sym_PERCENT] = ACTIONS(539),
    [anon_sym_defmodule] = ACTIONS(537),
    [anon_sym_end] = ACTIONS(537),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(537),
    [anon_sym_defstruct] = ACTIONS(537),
    [sym_comment] = ACTIONS(43),
  },
  [147] = {
    [sym_keyword] = STATE(86),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(541),
    [sym_comment] = ACTIONS(43),
  },
  [148] = {
    [sym__value] = STATE(33),
    [sym_true] = STATE(33),
    [sym_false] = STATE(33),
    [sym_atom] = STATE(33),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(86),
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
    [sym__keyword_map] = STATE(16),
    [sym_pair] = STATE(96),
    [sym_struct] = STATE(33),
    [sym_module] = STATE(33),
    [sym_alias] = ACTIONS(91),
    [sym_integer] = ACTIONS(91),
    [sym_float] = ACTIONS(93),
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
    [anon_sym_RBRACE] = ACTIONS(541),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [149] = {
    [aux_sym_keyword_list_repeat1] = STATE(94),
    [anon_sym_COMMA] = ACTIONS(543),
    [anon_sym_RBRACE] = ACTIONS(541),
    [sym_comment] = ACTIONS(43),
  },
  [150] = {
    [aux_sym_keyword_list_repeat1] = STATE(156),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_end] = ACTIONS(445),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(445),
    [anon_sym_defstruct] = ACTIONS(445),
    [sym_comment] = ACTIONS(43),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(545),
    [sym_alias] = ACTIONS(545),
    [sym_integer] = ACTIONS(547),
    [sym_float] = ACTIONS(545),
    [anon_sym_true] = ACTIONS(545),
    [anon_sym_COLONtrue] = ACTIONS(547),
    [anon_sym_false] = ACTIONS(545),
    [anon_sym_COLONfalse] = ACTIONS(547),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(547),
    [anon_sym_COLON_BANG] = ACTIONS(547),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(547),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(545),
    [anon_sym_COLON_AMP] = ACTIONS(547),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(547),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(545),
    [anon_sym_COLON_STAR] = ACTIONS(545),
    [anon_sym_COLON_PLUS] = ACTIONS(547),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(545),
    [anon_sym_COLON_DASH] = ACTIONS(547),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(545),
    [anon_sym_COLON_DOT] = ACTIONS(547),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(545),
    [anon_sym_COLON_SLASH] = ACTIONS(545),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(545),
    [anon_sym_COLON_LT] = ACTIONS(547),
    [anon_sym_COLON_LT_DASH] = ACTIONS(545),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(545),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(545),
    [anon_sym_COLON_LT_EQ] = ACTIONS(545),
    [anon_sym_COLON_LT_GT] = ACTIONS(545),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(545),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(547),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(545),
    [anon_sym_COLON_EQ] = ACTIONS(547),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(547),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(545),
    [anon_sym_COLON_EQ_GT] = ACTIONS(545),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(545),
    [anon_sym_COLON_GT] = ACTIONS(547),
    [anon_sym_COLON_GT_EQ] = ACTIONS(545),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(545),
    [anon_sym_COLON_AT] = ACTIONS(545),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(545),
    [anon_sym_COLON_CARET] = ACTIONS(545),
    [anon_sym_COLON_PIPE] = ACTIONS(547),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(545),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(547),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(545),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(547),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(545),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(545),
    [anon_sym_nil] = ACTIONS(545),
    [anon_sym_COLONnil] = ACTIONS(547),
    [anon_sym_SQUOTE] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_COMMA] = ACTIONS(545),
    [anon_sym_DQUOTE] = ACTIONS(545),
    [anon_sym_LBRACE] = ACTIONS(545),
    [anon_sym_RBRACE] = ACTIONS(545),
    [anon_sym_LBRACK] = ACTIONS(545),
    [anon_sym_RBRACK] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(545),
    [anon_sym_EQ_GT] = ACTIONS(545),
    [anon_sym_PERCENT] = ACTIONS(547),
    [anon_sym_defmodule] = ACTIONS(545),
    [anon_sym_end] = ACTIONS(545),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(545),
    [anon_sym_defstruct] = ACTIONS(545),
    [sym_comment] = ACTIONS(43),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(549),
    [sym_alias] = ACTIONS(549),
    [sym_integer] = ACTIONS(551),
    [sym_float] = ACTIONS(549),
    [anon_sym_true] = ACTIONS(549),
    [anon_sym_COLONtrue] = ACTIONS(551),
    [anon_sym_false] = ACTIONS(549),
    [anon_sym_COLONfalse] = ACTIONS(551),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(551),
    [anon_sym_COLON_BANG] = ACTIONS(551),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(551),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(549),
    [anon_sym_COLON_AMP] = ACTIONS(551),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(551),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(549),
    [anon_sym_COLON_STAR] = ACTIONS(549),
    [anon_sym_COLON_PLUS] = ACTIONS(551),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(549),
    [anon_sym_COLON_DASH] = ACTIONS(551),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(549),
    [anon_sym_COLON_DOT] = ACTIONS(551),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(549),
    [anon_sym_COLON_SLASH] = ACTIONS(549),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(549),
    [anon_sym_COLON_LT] = ACTIONS(551),
    [anon_sym_COLON_LT_DASH] = ACTIONS(549),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(549),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(549),
    [anon_sym_COLON_LT_EQ] = ACTIONS(549),
    [anon_sym_COLON_LT_GT] = ACTIONS(549),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(549),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(551),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(549),
    [anon_sym_COLON_EQ] = ACTIONS(551),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(551),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(549),
    [anon_sym_COLON_EQ_GT] = ACTIONS(549),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(549),
    [anon_sym_COLON_GT] = ACTIONS(551),
    [anon_sym_COLON_GT_EQ] = ACTIONS(549),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(549),
    [anon_sym_COLON_AT] = ACTIONS(549),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(549),
    [anon_sym_COLON_CARET] = ACTIONS(549),
    [anon_sym_COLON_PIPE] = ACTIONS(551),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(549),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(551),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(549),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(551),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(549),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(549),
    [anon_sym_nil] = ACTIONS(549),
    [anon_sym_COLONnil] = ACTIONS(551),
    [anon_sym_SQUOTE] = ACTIONS(549),
    [anon_sym_LT_LT] = ACTIONS(549),
    [anon_sym_COMMA] = ACTIONS(549),
    [anon_sym_DQUOTE] = ACTIONS(549),
    [anon_sym_LBRACE] = ACTIONS(549),
    [anon_sym_RBRACE] = ACTIONS(549),
    [anon_sym_LBRACK] = ACTIONS(549),
    [anon_sym_RBRACK] = ACTIONS(549),
    [anon_sym_PIPE] = ACTIONS(549),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(549),
    [anon_sym_EQ_GT] = ACTIONS(549),
    [anon_sym_PERCENT] = ACTIONS(551),
    [anon_sym_defmodule] = ACTIONS(549),
    [anon_sym_end] = ACTIONS(549),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(549),
    [anon_sym_defstruct] = ACTIONS(549),
    [sym_comment] = ACTIONS(43),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(553),
    [sym_alias] = ACTIONS(553),
    [sym_integer] = ACTIONS(555),
    [sym_float] = ACTIONS(553),
    [anon_sym_true] = ACTIONS(553),
    [anon_sym_COLONtrue] = ACTIONS(555),
    [anon_sym_false] = ACTIONS(553),
    [anon_sym_COLONfalse] = ACTIONS(555),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(555),
    [anon_sym_COLON_BANG] = ACTIONS(555),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(555),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(553),
    [anon_sym_COLON_AMP] = ACTIONS(555),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(555),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(553),
    [anon_sym_COLON_STAR] = ACTIONS(553),
    [anon_sym_COLON_PLUS] = ACTIONS(555),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(553),
    [anon_sym_COLON_DASH] = ACTIONS(555),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(553),
    [anon_sym_COLON_DOT] = ACTIONS(555),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(553),
    [anon_sym_COLON_SLASH] = ACTIONS(553),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(553),
    [anon_sym_COLON_LT] = ACTIONS(555),
    [anon_sym_COLON_LT_DASH] = ACTIONS(553),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(553),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(553),
    [anon_sym_COLON_LT_EQ] = ACTIONS(553),
    [anon_sym_COLON_LT_GT] = ACTIONS(553),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(553),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(555),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(553),
    [anon_sym_COLON_EQ] = ACTIONS(555),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(555),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(553),
    [anon_sym_COLON_EQ_GT] = ACTIONS(553),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(553),
    [anon_sym_COLON_GT] = ACTIONS(555),
    [anon_sym_COLON_GT_EQ] = ACTIONS(553),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(553),
    [anon_sym_COLON_AT] = ACTIONS(553),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(553),
    [anon_sym_COLON_CARET] = ACTIONS(553),
    [anon_sym_COLON_PIPE] = ACTIONS(555),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(553),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(555),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(553),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(555),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(553),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(553),
    [anon_sym_nil] = ACTIONS(553),
    [anon_sym_COLONnil] = ACTIONS(555),
    [anon_sym_SQUOTE] = ACTIONS(553),
    [anon_sym_LT_LT] = ACTIONS(553),
    [anon_sym_COMMA] = ACTIONS(553),
    [anon_sym_DQUOTE] = ACTIONS(553),
    [anon_sym_LBRACE] = ACTIONS(553),
    [anon_sym_RBRACE] = ACTIONS(553),
    [anon_sym_LBRACK] = ACTIONS(553),
    [anon_sym_RBRACK] = ACTIONS(553),
    [anon_sym_PIPE] = ACTIONS(553),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(553),
    [anon_sym_EQ_GT] = ACTIONS(553),
    [anon_sym_PERCENT] = ACTIONS(555),
    [anon_sym_defmodule] = ACTIONS(553),
    [anon_sym_end] = ACTIONS(553),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(553),
    [anon_sym_defstruct] = ACTIONS(553),
    [sym_comment] = ACTIONS(43),
  },
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(557),
    [sym_alias] = ACTIONS(557),
    [sym_integer] = ACTIONS(559),
    [sym_float] = ACTIONS(557),
    [anon_sym_true] = ACTIONS(557),
    [anon_sym_COLONtrue] = ACTIONS(559),
    [anon_sym_false] = ACTIONS(557),
    [anon_sym_COLONfalse] = ACTIONS(559),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(559),
    [anon_sym_COLON_BANG] = ACTIONS(559),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(559),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(557),
    [anon_sym_COLON_AMP] = ACTIONS(559),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(559),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(557),
    [anon_sym_COLON_STAR] = ACTIONS(557),
    [anon_sym_COLON_PLUS] = ACTIONS(559),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(557),
    [anon_sym_COLON_DASH] = ACTIONS(559),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(557),
    [anon_sym_COLON_DOT] = ACTIONS(559),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(557),
    [anon_sym_COLON_SLASH] = ACTIONS(557),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(557),
    [anon_sym_COLON_LT] = ACTIONS(559),
    [anon_sym_COLON_LT_DASH] = ACTIONS(557),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(557),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(557),
    [anon_sym_COLON_LT_EQ] = ACTIONS(557),
    [anon_sym_COLON_LT_GT] = ACTIONS(557),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(557),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(559),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(557),
    [anon_sym_COLON_EQ] = ACTIONS(559),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(559),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(557),
    [anon_sym_COLON_EQ_GT] = ACTIONS(557),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(557),
    [anon_sym_COLON_GT] = ACTIONS(559),
    [anon_sym_COLON_GT_EQ] = ACTIONS(557),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(557),
    [anon_sym_COLON_AT] = ACTIONS(557),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(557),
    [anon_sym_COLON_CARET] = ACTIONS(557),
    [anon_sym_COLON_PIPE] = ACTIONS(559),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(557),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(559),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(557),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(559),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(557),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(557),
    [anon_sym_nil] = ACTIONS(557),
    [anon_sym_COLONnil] = ACTIONS(559),
    [anon_sym_SQUOTE] = ACTIONS(557),
    [anon_sym_LT_LT] = ACTIONS(557),
    [anon_sym_COMMA] = ACTIONS(557),
    [anon_sym_DQUOTE] = ACTIONS(557),
    [anon_sym_LBRACE] = ACTIONS(557),
    [anon_sym_RBRACE] = ACTIONS(557),
    [anon_sym_LBRACK] = ACTIONS(557),
    [anon_sym_RBRACK] = ACTIONS(557),
    [anon_sym_PIPE] = ACTIONS(557),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(557),
    [anon_sym_EQ_GT] = ACTIONS(557),
    [anon_sym_PERCENT] = ACTIONS(559),
    [anon_sym_defmodule] = ACTIONS(557),
    [anon_sym_end] = ACTIONS(557),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(557),
    [anon_sym_defstruct] = ACTIONS(557),
    [sym_comment] = ACTIONS(43),
  },
  [155] = {
    [sym_keyword] = STATE(86),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(561),
    [sym_comment] = ACTIONS(43),
  },
  [156] = {
    [aux_sym_keyword_list_repeat1] = STATE(156),
    [anon_sym_COMMA] = ACTIONS(385),
    [anon_sym_end] = ACTIONS(381),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(381),
    [anon_sym_defstruct] = ACTIONS(381),
    [sym_comment] = ACTIONS(43),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(563),
    [sym_alias] = ACTIONS(563),
    [sym_integer] = ACTIONS(565),
    [sym_float] = ACTIONS(563),
    [anon_sym_true] = ACTIONS(563),
    [anon_sym_COLONtrue] = ACTIONS(565),
    [anon_sym_false] = ACTIONS(563),
    [anon_sym_COLONfalse] = ACTIONS(565),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(565),
    [anon_sym_COLON_BANG] = ACTIONS(565),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(565),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(563),
    [anon_sym_COLON_AMP] = ACTIONS(565),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(565),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(563),
    [anon_sym_COLON_STAR] = ACTIONS(563),
    [anon_sym_COLON_PLUS] = ACTIONS(565),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(563),
    [anon_sym_COLON_DASH] = ACTIONS(565),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(563),
    [anon_sym_COLON_DOT] = ACTIONS(565),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(563),
    [anon_sym_COLON_SLASH] = ACTIONS(563),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(563),
    [anon_sym_COLON_LT] = ACTIONS(565),
    [anon_sym_COLON_LT_DASH] = ACTIONS(563),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(563),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(563),
    [anon_sym_COLON_LT_EQ] = ACTIONS(563),
    [anon_sym_COLON_LT_GT] = ACTIONS(563),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(563),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(565),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(563),
    [anon_sym_COLON_EQ] = ACTIONS(565),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(565),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(563),
    [anon_sym_COLON_EQ_GT] = ACTIONS(563),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(563),
    [anon_sym_COLON_GT] = ACTIONS(565),
    [anon_sym_COLON_GT_EQ] = ACTIONS(563),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(563),
    [anon_sym_COLON_AT] = ACTIONS(563),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(563),
    [anon_sym_COLON_CARET] = ACTIONS(563),
    [anon_sym_COLON_PIPE] = ACTIONS(565),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(563),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(565),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(563),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(565),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(563),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(563),
    [anon_sym_nil] = ACTIONS(563),
    [anon_sym_COLONnil] = ACTIONS(565),
    [anon_sym_SQUOTE] = ACTIONS(563),
    [anon_sym_LT_LT] = ACTIONS(563),
    [anon_sym_COMMA] = ACTIONS(563),
    [anon_sym_DQUOTE] = ACTIONS(563),
    [anon_sym_LBRACE] = ACTIONS(563),
    [anon_sym_RBRACE] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(563),
    [anon_sym_RBRACK] = ACTIONS(563),
    [anon_sym_PIPE] = ACTIONS(563),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(563),
    [anon_sym_EQ_GT] = ACTIONS(563),
    [anon_sym_PERCENT] = ACTIONS(565),
    [anon_sym_defmodule] = ACTIONS(563),
    [anon_sym_end] = ACTIONS(563),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(563),
    [anon_sym_defstruct] = ACTIONS(563),
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
  [91] = {.count = 1, .reusable = false}, SHIFT(33),
  [93] = {.count = 1, .reusable = true}, SHIFT(33),
  [95] = {.count = 1, .reusable = true}, SHIFT(32),
  [97] = {.count = 1, .reusable = true}, SHIFT(36),
  [99] = {.count = 1, .reusable = true}, SHIFT(37),
  [101] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_list, 1),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_list, 1),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_map, 1),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_map, 1),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [113] = {.count = 1, .reusable = true}, SHIFT(38),
  [115] = {.count = 1, .reusable = false}, SHIFT(38),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_charlist, 2),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_charlist, 2),
  [121] = {.count = 1, .reusable = false}, SHIFT(39),
  [123] = {.count = 1, .reusable = false}, SHIFT(40),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_binary_segment, 1),
  [127] = {.count = 1, .reusable = true}, SHIFT(41),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 2),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 2),
  [133] = {.count = 1, .reusable = true}, SHIFT(42),
  [135] = {.count = 1, .reusable = true}, SHIFT(43),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [141] = {.count = 1, .reusable = false}, SHIFT(45),
  [143] = {.count = 1, .reusable = false}, SHIFT(46),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 2),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 2),
  [149] = {.count = 1, .reusable = true}, SHIFT(47),
  [151] = {.count = 1, .reusable = true}, SHIFT(48),
  [153] = {.count = 1, .reusable = true}, SHIFT(50),
  [155] = {.count = 1, .reusable = false}, SHIFT(50),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym__empty_list, 2),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym__empty_list, 2),
  [161] = {.count = 1, .reusable = true}, SHIFT(51),
  [163] = {.count = 1, .reusable = true}, SHIFT(52),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_head, 1),
  [167] = {.count = 1, .reusable = true}, SHIFT(54),
  [169] = {.count = 1, .reusable = true}, SHIFT(55),
  [171] = {.count = 1, .reusable = true}, SHIFT(57),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym__empty_map, 2),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym__empty_map, 2),
  [177] = {.count = 1, .reusable = true}, SHIFT(58),
  [179] = {.count = 1, .reusable = true}, SHIFT(59),
  [181] = {.count = 1, .reusable = true}, SHIFT(60),
  [183] = {.count = 1, .reusable = true}, SHIFT(62),
  [185] = {.count = 1, .reusable = true}, SHIFT(63),
  [187] = {.count = 1, .reusable = true}, SHIFT(66),
  [189] = {.count = 1, .reusable = true}, SHIFT(68),
  [191] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [193] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(38),
  [196] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(38),
  [199] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [202] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [205] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [208] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [211] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [214] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [217] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [220] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [223] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [226] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [229] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [232] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [235] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [238] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [241] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [244] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_charlist, 3),
  [249] = {.count = 1, .reusable = false}, REDUCE(sym_charlist, 3),
  [251] = {.count = 1, .reusable = false}, REDUCE(aux_sym_charlist_repeat1, 2),
  [253] = {.count = 2, .reusable = false}, REDUCE(aux_sym_charlist_repeat1, 2), SHIFT_REPEAT(40),
  [256] = {.count = 1, .reusable = true}, SHIFT(69),
  [258] = {.count = 1, .reusable = true}, SHIFT(70),
  [260] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 3),
  [262] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 3),
  [264] = {.count = 1, .reusable = true}, SHIFT(72),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [268] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [270] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2),
  [272] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(46),
  [275] = {.count = 1, .reusable = false}, SHIFT(75),
  [277] = {.count = 1, .reusable = true}, SHIFT(75),
  [279] = {.count = 1, .reusable = true}, SHIFT(74),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 3),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 3),
  [285] = {.count = 1, .reusable = true}, SHIFT(78),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_keyword, 2),
  [289] = {.count = 1, .reusable = true}, SHIFT(80),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 3),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 3),
  [295] = {.count = 1, .reusable = true}, SHIFT(83),
  [297] = {.count = 1, .reusable = true}, SHIFT(85),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_keyword_list, 3),
  [301] = {.count = 1, .reusable = false}, REDUCE(sym_keyword_list, 3),
  [303] = {.count = 1, .reusable = true}, SHIFT(87),
  [305] = {.count = 1, .reusable = true}, SHIFT(91),
  [307] = {.count = 1, .reusable = false}, SHIFT(91),
  [309] = {.count = 1, .reusable = true}, SHIFT(92),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym__keyword_map, 3),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym__keyword_map, 3),
  [315] = {.count = 1, .reusable = true}, SHIFT(93),
  [317] = {.count = 1, .reusable = true}, SHIFT(95),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym__map, 3),
  [321] = {.count = 1, .reusable = false}, REDUCE(sym__map, 3),
  [323] = {.count = 1, .reusable = true}, SHIFT(97),
  [325] = {.count = 1, .reusable = true}, SHIFT(98),
  [327] = {.count = 1, .reusable = true}, SHIFT(101),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_struct, 3),
  [331] = {.count = 1, .reusable = false}, REDUCE(sym_struct, 3),
  [333] = {.count = 1, .reusable = true}, SHIFT(104),
  [335] = {.count = 1, .reusable = true}, SHIFT(105),
  [337] = {.count = 1, .reusable = true}, SHIFT(106),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_binary_segment, 3),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 4),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 4),
  [345] = {.count = 1, .reusable = true}, REDUCE(aux_sym_binary_repeat1, 2),
  [347] = {.count = 1, .reusable = true}, SHIFT(108),
  [349] = {.count = 2, .reusable = true}, REDUCE(aux_sym_binary_repeat1, 2), SHIFT_REPEAT(109),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 4),
  [354] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 4),
  [356] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [358] = {.count = 1, .reusable = true}, SHIFT(110),
  [360] = {.count = 1, .reusable = true}, REDUCE(sym_implicit_keyword_list, 1),
  [362] = {.count = 1, .reusable = true}, SHIFT(112),
  [364] = {.count = 1, .reusable = true}, SHIFT(113),
  [366] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(115),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 4),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 4),
  [373] = {.count = 1, .reusable = true}, SHIFT(117),
  [375] = {.count = 1, .reusable = true}, SHIFT(118),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_keyword_list, 4),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym_keyword_list, 4),
  [381] = {.count = 1, .reusable = true}, REDUCE(aux_sym_keyword_list_repeat1, 2),
  [383] = {.count = 1, .reusable = true}, SHIFT(120),
  [385] = {.count = 2, .reusable = true}, REDUCE(aux_sym_keyword_list_repeat1, 2), SHIFT_REPEAT(110),
  [388] = {.count = 1, .reusable = true}, REDUCE(sym_tail, 1),
  [390] = {.count = 1, .reusable = true}, SHIFT(121),
  [392] = {.count = 1, .reusable = true}, REDUCE(sym_pair, 3),
  [394] = {.count = 1, .reusable = true}, REDUCE(sym__keyword_map, 4),
  [396] = {.count = 1, .reusable = false}, REDUCE(sym__keyword_map, 4),
  [398] = {.count = 1, .reusable = true}, SHIFT(122),
  [400] = {.count = 1, .reusable = true}, REDUCE(sym__map, 4),
  [402] = {.count = 1, .reusable = false}, REDUCE(sym__map, 4),
  [404] = {.count = 1, .reusable = true}, REDUCE(aux_sym__map_repeat1, 2),
  [406] = {.count = 1, .reusable = true}, SHIFT(123),
  [408] = {.count = 1, .reusable = true}, SHIFT(124),
  [410] = {.count = 2, .reusable = true}, REDUCE(aux_sym__map_repeat1, 2), SHIFT_REPEAT(125),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym__empty_struct_body, 2),
  [415] = {.count = 1, .reusable = false}, REDUCE(sym__empty_struct_body, 2),
  [417] = {.count = 1, .reusable = true}, SHIFT(126),
  [419] = {.count = 1, .reusable = true}, SHIFT(127),
  [421] = {.count = 1, .reusable = true}, SHIFT(129),
  [423] = {.count = 1, .reusable = true}, SHIFT(130),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_module, 4),
  [427] = {.count = 1, .reusable = false}, REDUCE(sym_module, 4),
  [429] = {.count = 1, .reusable = false}, SHIFT(133),
  [431] = {.count = 1, .reusable = true}, SHIFT(133),
  [433] = {.count = 1, .reusable = false}, REDUCE(sym_module_attribute, 1),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_module_attribute, 1),
  [437] = {.count = 1, .reusable = true}, SHIFT(135),
  [439] = {.count = 1, .reusable = true}, SHIFT(137),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 5),
  [443] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 5),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_implicit_keyword_list, 2),
  [447] = {.count = 1, .reusable = true}, SHIFT(139),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 5),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 5),
  [453] = {.count = 1, .reusable = true}, SHIFT(140),
  [455] = {.count = 1, .reusable = true}, SHIFT(141),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 5),
  [459] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 5),
  [461] = {.count = 1, .reusable = true}, SHIFT(142),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_keyword_list, 5),
  [465] = {.count = 1, .reusable = false}, REDUCE(sym_keyword_list, 5),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym__head_tail_list, 5),
  [469] = {.count = 1, .reusable = false}, REDUCE(sym__head_tail_list, 5),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym__keyword_map, 5),
  [473] = {.count = 1, .reusable = false}, REDUCE(sym__keyword_map, 5),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym__map, 5),
  [477] = {.count = 1, .reusable = false}, REDUCE(sym__map, 5),
  [479] = {.count = 1, .reusable = true}, SHIFT(143),
  [481] = {.count = 1, .reusable = true}, SHIFT(144),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym__keyword_struct_body, 3),
  [485] = {.count = 1, .reusable = false}, REDUCE(sym__keyword_struct_body, 3),
  [487] = {.count = 1, .reusable = true}, SHIFT(145),
  [489] = {.count = 1, .reusable = true}, SHIFT(146),
  [491] = {.count = 1, .reusable = true}, REDUCE(sym__struct_body, 3),
  [493] = {.count = 1, .reusable = false}, REDUCE(sym__struct_body, 3),
  [495] = {.count = 1, .reusable = true}, SHIFT(147),
  [497] = {.count = 1, .reusable = true}, SHIFT(148),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym_module_attribute, 2),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_defstruct, 2),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym_module, 5),
  [505] = {.count = 1, .reusable = false}, REDUCE(sym_module, 5),
  [507] = {.count = 1, .reusable = true}, REDUCE(aux_sym_module_repeat1, 2),
  [509] = {.count = 2, .reusable = true}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(105),
  [512] = {.count = 2, .reusable = true}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(106),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 6),
  [517] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 6),
  [519] = {.count = 1, .reusable = true}, SHIFT(151),
  [521] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 6),
  [523] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 6),
  [525] = {.count = 1, .reusable = true}, SHIFT(152),
  [527] = {.count = 1, .reusable = true}, REDUCE(sym__map, 6),
  [529] = {.count = 1, .reusable = false}, REDUCE(sym__map, 6),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym__keyword_struct_body, 4),
  [533] = {.count = 1, .reusable = false}, REDUCE(sym__keyword_struct_body, 4),
  [535] = {.count = 1, .reusable = true}, SHIFT(153),
  [537] = {.count = 1, .reusable = true}, REDUCE(sym__struct_body, 4),
  [539] = {.count = 1, .reusable = false}, REDUCE(sym__struct_body, 4),
  [541] = {.count = 1, .reusable = true}, SHIFT(154),
  [543] = {.count = 1, .reusable = true}, SHIFT(155),
  [545] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 7),
  [547] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 7),
  [549] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 7),
  [551] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 7),
  [553] = {.count = 1, .reusable = true}, REDUCE(sym__keyword_struct_body, 5),
  [555] = {.count = 1, .reusable = false}, REDUCE(sym__keyword_struct_body, 5),
  [557] = {.count = 1, .reusable = true}, REDUCE(sym__struct_body, 5),
  [559] = {.count = 1, .reusable = false}, REDUCE(sym__struct_body, 5),
  [561] = {.count = 1, .reusable = true}, SHIFT(157),
  [563] = {.count = 1, .reusable = true}, REDUCE(sym__struct_body, 6),
  [565] = {.count = 1, .reusable = false}, REDUCE(sym__struct_body, 6),
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
