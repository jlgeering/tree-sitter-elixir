#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 154
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
  sym__map = 99,
  sym_map = 100,
  sym__map_body = 101,
  sym_map_update = 102,
  sym_pair = 103,
  sym_struct = 104,
  sym__empty_struct_body = 105,
  sym__struct_body = 106,
  sym__keyword_struct_body = 107,
  sym_implicit_keyword_list = 108,
  sym_defmodule = 109,
  sym__module_body = 110,
  sym_module_attribute = 111,
  sym_defstruct = 112,
  aux_sym_program_repeat1 = 113,
  aux_sym_charlist_repeat1 = 114,
  aux_sym_binary_repeat1 = 115,
  aux_sym_string_repeat1 = 116,
  aux_sym_tuple_repeat1 = 117,
  aux_sym_keyword_list_repeat1 = 118,
  aux_sym__map_body_repeat1 = 119,
  aux_sym_defmodule_repeat1 = 120,
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
  [sym__map] = "_map",
  [sym_map] = "map",
  [sym__map_body] = "_map_body",
  [sym_map_update] = "map_update",
  [sym_pair] = "pair",
  [sym_struct] = "struct",
  [sym__empty_struct_body] = "_empty_struct_body",
  [sym__struct_body] = "_struct_body",
  [sym__keyword_struct_body] = "_keyword_struct_body",
  [sym_implicit_keyword_list] = "implicit_keyword_list",
  [sym_defmodule] = "defmodule",
  [sym__module_body] = "_module_body",
  [sym_module_attribute] = "module_attribute",
  [sym_defstruct] = "defstruct",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_charlist_repeat1] = "charlist_repeat1",
  [aux_sym_binary_repeat1] = "binary_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym_keyword_list_repeat1] = "keyword_list_repeat1",
  [aux_sym__map_body_repeat1] = "_map_body_repeat1",
  [aux_sym_defmodule_repeat1] = "defmodule_repeat1",
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
  [sym__map] = {
    .visible = false,
    .named = true,
  },
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [sym__map_body] = {
    .visible = false,
    .named = true,
  },
  [sym_map_update] = {
    .visible = true,
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
  [sym_defmodule] = {
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
  [aux_sym__map_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_defmodule_repeat1] = {
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
      if (lookahead == '|')
        ADVANCE(136);
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
  [16] = {.lex_state = 141},
  [17] = {.lex_state = 213},
  [18] = {.lex_state = 189},
  [19] = {.lex_state = 215},
  [20] = {.lex_state = 175},
  [21] = {.lex_state = 215},
  [22] = {.lex_state = 213},
  [23] = {.lex_state = 198},
  [24] = {.lex_state = 175},
  [25] = {.lex_state = 219},
  [26] = {.lex_state = 141},
  [27] = {.lex_state = 175},
  [28] = {.lex_state = 221},
  [29] = {.lex_state = 221},
  [30] = {.lex_state = 221},
  [31] = {.lex_state = 175},
  [32] = {.lex_state = 223},
  [33] = {.lex_state = 219},
  [34] = {.lex_state = 202},
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
  [58] = {.lex_state = 204},
  [59] = {.lex_state = 141},
  [60] = {.lex_state = 209},
  [61] = {.lex_state = 219},
  [62] = {.lex_state = 175},
  [63] = {.lex_state = 209},
  [64] = {.lex_state = 219},
  [65] = {.lex_state = 209},
  [66] = {.lex_state = 175},
  [67] = {.lex_state = 237},
  [68] = {.lex_state = 215},
  [69] = {.lex_state = 175},
  [70] = {.lex_state = 215},
  [71] = {.lex_state = 193},
  [72] = {.lex_state = 215},
  [73] = {.lex_state = 175},
  [74] = {.lex_state = 239},
  [75] = {.lex_state = 219},
  [76] = {.lex_state = 219},
  [77] = {.lex_state = 209},
  [78] = {.lex_state = 219},
  [79] = {.lex_state = 175},
  [80] = {.lex_state = 221},
  [81] = {.lex_state = 221},
  [82] = {.lex_state = 204},
  [83] = {.lex_state = 221},
  [84] = {.lex_state = 175},
  [85] = {.lex_state = 232},
  [86] = {.lex_state = 204},
  [87] = {.lex_state = 221},
  [88] = {.lex_state = 204},
  [89] = {.lex_state = 204},
  [90] = {.lex_state = 223},
  [91] = {.lex_state = 202},
  [92] = {.lex_state = 219},
  [93] = {.lex_state = 209},
  [94] = {.lex_state = 219},
  [95] = {.lex_state = 219},
  [96] = {.lex_state = 209},
  [97] = {.lex_state = 219},
  [98] = {.lex_state = 219},
  [99] = {.lex_state = 175},
  [100] = {.lex_state = 219},
  [101] = {.lex_state = 219},
  [102] = {.lex_state = 175},
  [103] = {.lex_state = 241},
  [104] = {.lex_state = 204},
  [105] = {.lex_state = 237},
  [106] = {.lex_state = 175},
  [107] = {.lex_state = 141},
  [108] = {.lex_state = 204},
  [109] = {.lex_state = 219},
  [110] = {.lex_state = 202},
  [111] = {.lex_state = 175},
  [112] = {.lex_state = 219},
  [113] = {.lex_state = 141},
  [114] = {.lex_state = 221},
  [115] = {.lex_state = 204},
  [116] = {.lex_state = 175},
  [117] = {.lex_state = 221},
  [118] = {.lex_state = 175},
  [119] = {.lex_state = 175},
  [120] = {.lex_state = 175},
  [121] = {.lex_state = 209},
  [122] = {.lex_state = 141},
  [123] = {.lex_state = 209},
  [124] = {.lex_state = 175},
  [125] = {.lex_state = 219},
  [126] = {.lex_state = 209},
  [127] = {.lex_state = 175},
  [128] = {.lex_state = 219},
  [129] = {.lex_state = 219},
  [130] = {.lex_state = 237},
  [131] = {.lex_state = 237},
  [132] = {.lex_state = 244},
  [133] = {.lex_state = 237},
  [134] = {.lex_state = 175},
  [135] = {.lex_state = 237},
  [136] = {.lex_state = 175},
  [137] = {.lex_state = 202},
  [138] = {.lex_state = 175},
  [139] = {.lex_state = 204},
  [140] = {.lex_state = 175},
  [141] = {.lex_state = 209},
  [142] = {.lex_state = 175},
  [143] = {.lex_state = 209},
  [144] = {.lex_state = 209},
  [145] = {.lex_state = 219},
  [146] = {.lex_state = 237},
  [147] = {.lex_state = 175},
  [148] = {.lex_state = 175},
  [149] = {.lex_state = 175},
  [150] = {.lex_state = 175},
  [151] = {.lex_state = 209},
  [152] = {.lex_state = 237},
  [153] = {.lex_state = 175},
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
    [sym__expression] = STATE(16),
    [sym__value] = STATE(16),
    [sym_true] = STATE(16),
    [sym_false] = STATE(16),
    [sym_atom] = STATE(16),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(16),
    [sym_charlist] = STATE(16),
    [sym_binary] = STATE(16),
    [sym_string] = STATE(16),
    [sym_tuple] = STATE(16),
    [sym__list_or_keyword_list] = STATE(16),
    [sym_list] = STATE(16),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(16),
    [sym__map] = STATE(16),
    [sym_map] = STATE(16),
    [sym_map_update] = STATE(16),
    [sym_struct] = STATE(16),
    [sym_defmodule] = STATE(16),
    [aux_sym_program_repeat1] = STATE(16),
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
    [aux_sym_charlist_repeat1] = STATE(18),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(63),
    [sym_comment] = ACTIONS(65),
  },
  [7] = {
    [sym_charlist] = STATE(19),
    [sym_binary_segment] = STATE(21),
    [sym_string] = STATE(19),
    [sym_integer] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_GT_GT] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(43),
  },
  [8] = {
    [aux_sym_string_repeat1] = STATE(23),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(73),
    [sym_comment] = ACTIONS(65),
  },
  [9] = {
    [sym__expression] = STATE(25),
    [sym__value] = STATE(25),
    [sym_true] = STATE(25),
    [sym_false] = STATE(25),
    [sym_atom] = STATE(25),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(25),
    [sym_charlist] = STATE(25),
    [sym_binary] = STATE(25),
    [sym_string] = STATE(25),
    [sym_tuple] = STATE(25),
    [sym__list_or_keyword_list] = STATE(25),
    [sym_list] = STATE(25),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(25),
    [sym__map] = STATE(25),
    [sym_map] = STATE(25),
    [sym_map_update] = STATE(25),
    [sym_struct] = STATE(25),
    [sym_defmodule] = STATE(25),
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
    [sym__expression] = STATE(28),
    [sym__value] = STATE(28),
    [sym_true] = STATE(28),
    [sym_false] = STATE(28),
    [sym_atom] = STATE(28),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(29),
    [sym_nil] = STATE(28),
    [sym_charlist] = STATE(28),
    [sym_binary] = STATE(28),
    [sym_string] = STATE(28),
    [sym_tuple] = STATE(28),
    [sym__list_or_keyword_list] = STATE(28),
    [sym_list] = STATE(28),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_head] = STATE(30),
    [sym_keyword_list] = STATE(28),
    [sym__map] = STATE(28),
    [sym_map] = STATE(28),
    [sym_map_update] = STATE(28),
    [sym_struct] = STATE(28),
    [sym_defmodule] = STATE(28),
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
    [sym__value] = STATE(32),
    [sym_true] = STATE(32),
    [sym_false] = STATE(32),
    [sym_atom] = STATE(32),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(33),
    [sym_nil] = STATE(32),
    [sym_charlist] = STATE(32),
    [sym_binary] = STATE(32),
    [sym_string] = STATE(32),
    [sym_tuple] = STATE(32),
    [sym__list_or_keyword_list] = STATE(32),
    [sym_list] = STATE(32),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(32),
    [sym__map] = STATE(32),
    [sym_map] = STATE(32),
    [sym__map_body] = STATE(34),
    [sym_map_update] = STATE(32),
    [sym_pair] = STATE(35),
    [sym_struct] = STATE(32),
    [sym_defmodule] = STATE(32),
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
    [sym__map] = STATE(38),
    [sym_map] = STATE(38),
    [sym_map_update] = STATE(38),
    [sym_struct] = STATE(38),
    [sym_defmodule] = STATE(38),
    [aux_sym_program_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym_alias] = ACTIONS(109),
    [sym_integer] = ACTIONS(111),
    [sym_float] = ACTIONS(109),
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
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [sym_alias] = ACTIONS(113),
    [sym_integer] = ACTIONS(115),
    [sym_float] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(113),
    [anon_sym_COLONtrue] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(113),
    [anon_sym_COLONfalse] = ACTIONS(115),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(115),
    [anon_sym_COLON_BANG] = ACTIONS(115),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(115),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(113),
    [anon_sym_COLON_AMP] = ACTIONS(115),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(115),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(113),
    [anon_sym_COLON_STAR] = ACTIONS(113),
    [anon_sym_COLON_PLUS] = ACTIONS(115),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(113),
    [anon_sym_COLON_DASH] = ACTIONS(115),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(113),
    [anon_sym_COLON_DOT] = ACTIONS(115),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(113),
    [anon_sym_COLON_SLASH] = ACTIONS(113),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(113),
    [anon_sym_COLON_LT] = ACTIONS(115),
    [anon_sym_COLON_LT_DASH] = ACTIONS(113),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(113),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(113),
    [anon_sym_COLON_LT_EQ] = ACTIONS(113),
    [anon_sym_COLON_LT_GT] = ACTIONS(113),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(113),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(115),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(113),
    [anon_sym_COLON_EQ] = ACTIONS(115),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(115),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(113),
    [anon_sym_COLON_EQ_GT] = ACTIONS(113),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(113),
    [anon_sym_COLON_GT] = ACTIONS(115),
    [anon_sym_COLON_GT_EQ] = ACTIONS(113),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(113),
    [anon_sym_COLON_AT] = ACTIONS(113),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(113),
    [anon_sym_COLON_CARET] = ACTIONS(113),
    [anon_sym_COLON_PIPE] = ACTIONS(115),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(113),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(115),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(113),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(115),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(113),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(113),
    [anon_sym_nil] = ACTIONS(113),
    [anon_sym_COLONnil] = ACTIONS(115),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_LT_LT] = ACTIONS(113),
    [anon_sym_COMMA] = ACTIONS(113),
    [anon_sym_GT_GT] = ACTIONS(113),
    [anon_sym_COLON_COLON] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_RBRACK] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(113),
    [anon_sym_EQ_GT] = ACTIONS(113),
    [anon_sym_PERCENT] = ACTIONS(115),
    [anon_sym_defmodule] = ACTIONS(113),
    [anon_sym_end] = ACTIONS(113),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(113),
    [anon_sym_defstruct] = ACTIONS(113),
    [sym_comment] = ACTIONS(43),
  },
  [18] = {
    [aux_sym_charlist_repeat1] = STATE(40),
    [anon_sym_SQUOTE] = ACTIONS(117),
    [aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(119),
    [sym_comment] = ACTIONS(65),
  },
  [19] = {
    [anon_sym_COMMA] = ACTIONS(121),
    [anon_sym_GT_GT] = ACTIONS(121),
    [anon_sym_COLON_COLON] = ACTIONS(123),
    [sym_comment] = ACTIONS(43),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [sym_alias] = ACTIONS(125),
    [sym_integer] = ACTIONS(127),
    [sym_float] = ACTIONS(125),
    [anon_sym_true] = ACTIONS(125),
    [anon_sym_COLONtrue] = ACTIONS(127),
    [anon_sym_false] = ACTIONS(125),
    [anon_sym_COLONfalse] = ACTIONS(127),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(127),
    [anon_sym_COLON_BANG] = ACTIONS(127),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(127),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(125),
    [anon_sym_COLON_AMP] = ACTIONS(127),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(127),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(125),
    [anon_sym_COLON_STAR] = ACTIONS(125),
    [anon_sym_COLON_PLUS] = ACTIONS(127),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(125),
    [anon_sym_COLON_DASH] = ACTIONS(127),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(125),
    [anon_sym_COLON_DOT] = ACTIONS(127),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(125),
    [anon_sym_COLON_SLASH] = ACTIONS(125),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(125),
    [anon_sym_COLON_LT] = ACTIONS(127),
    [anon_sym_COLON_LT_DASH] = ACTIONS(125),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(125),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(125),
    [anon_sym_COLON_LT_EQ] = ACTIONS(125),
    [anon_sym_COLON_LT_GT] = ACTIONS(125),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(125),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(127),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(125),
    [anon_sym_COLON_EQ] = ACTIONS(127),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(127),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(125),
    [anon_sym_COLON_EQ_GT] = ACTIONS(125),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(125),
    [anon_sym_COLON_GT] = ACTIONS(127),
    [anon_sym_COLON_GT_EQ] = ACTIONS(125),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(125),
    [anon_sym_COLON_AT] = ACTIONS(125),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(125),
    [anon_sym_COLON_CARET] = ACTIONS(125),
    [anon_sym_COLON_PIPE] = ACTIONS(127),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(125),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(127),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(125),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(127),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(125),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(125),
    [anon_sym_nil] = ACTIONS(125),
    [anon_sym_COLONnil] = ACTIONS(127),
    [anon_sym_SQUOTE] = ACTIONS(125),
    [anon_sym_LT_LT] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(125),
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(125),
    [anon_sym_EQ_GT] = ACTIONS(125),
    [anon_sym_PERCENT] = ACTIONS(127),
    [anon_sym_defmodule] = ACTIONS(125),
    [anon_sym_end] = ACTIONS(125),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(125),
    [anon_sym_defstruct] = ACTIONS(125),
    [sym_comment] = ACTIONS(43),
  },
  [21] = {
    [aux_sym_binary_repeat1] = STATE(44),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_GT_GT] = ACTIONS(131),
    [sym_comment] = ACTIONS(43),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [sym_alias] = ACTIONS(133),
    [sym_integer] = ACTIONS(135),
    [sym_float] = ACTIONS(133),
    [anon_sym_true] = ACTIONS(133),
    [anon_sym_COLONtrue] = ACTIONS(135),
    [anon_sym_false] = ACTIONS(133),
    [anon_sym_COLONfalse] = ACTIONS(135),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(135),
    [anon_sym_COLON_BANG] = ACTIONS(135),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(135),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(133),
    [anon_sym_COLON_AMP] = ACTIONS(135),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(135),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(133),
    [anon_sym_COLON_STAR] = ACTIONS(133),
    [anon_sym_COLON_PLUS] = ACTIONS(135),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(133),
    [anon_sym_COLON_DASH] = ACTIONS(135),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(133),
    [anon_sym_COLON_DOT] = ACTIONS(135),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(133),
    [anon_sym_COLON_SLASH] = ACTIONS(133),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(133),
    [anon_sym_COLON_LT] = ACTIONS(135),
    [anon_sym_COLON_LT_DASH] = ACTIONS(133),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(133),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(133),
    [anon_sym_COLON_LT_EQ] = ACTIONS(133),
    [anon_sym_COLON_LT_GT] = ACTIONS(133),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(133),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(135),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(133),
    [anon_sym_COLON_EQ] = ACTIONS(135),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(135),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(133),
    [anon_sym_COLON_EQ_GT] = ACTIONS(133),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(133),
    [anon_sym_COLON_GT] = ACTIONS(135),
    [anon_sym_COLON_GT_EQ] = ACTIONS(133),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(133),
    [anon_sym_COLON_AT] = ACTIONS(133),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(133),
    [anon_sym_COLON_CARET] = ACTIONS(133),
    [anon_sym_COLON_PIPE] = ACTIONS(135),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(133),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(135),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(133),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(135),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(133),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(133),
    [anon_sym_nil] = ACTIONS(133),
    [anon_sym_COLONnil] = ACTIONS(135),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_GT_GT] = ACTIONS(133),
    [anon_sym_COLON_COLON] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(133),
    [anon_sym_RBRACE] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(133),
    [anon_sym_PIPE] = ACTIONS(133),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(133),
    [anon_sym_EQ_GT] = ACTIONS(133),
    [anon_sym_PERCENT] = ACTIONS(135),
    [anon_sym_defmodule] = ACTIONS(133),
    [anon_sym_end] = ACTIONS(133),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(133),
    [anon_sym_defstruct] = ACTIONS(133),
    [sym_comment] = ACTIONS(43),
  },
  [23] = {
    [aux_sym_string_repeat1] = STATE(46),
    [anon_sym_DQUOTE] = ACTIONS(137),
    [aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(139),
    [sym_comment] = ACTIONS(65),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [sym_alias] = ACTIONS(141),
    [sym_integer] = ACTIONS(143),
    [sym_float] = ACTIONS(141),
    [anon_sym_true] = ACTIONS(141),
    [anon_sym_COLONtrue] = ACTIONS(143),
    [anon_sym_false] = ACTIONS(141),
    [anon_sym_COLONfalse] = ACTIONS(143),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(143),
    [anon_sym_COLON_BANG] = ACTIONS(143),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(143),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(141),
    [anon_sym_COLON_AMP] = ACTIONS(143),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(143),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(141),
    [anon_sym_COLON_STAR] = ACTIONS(141),
    [anon_sym_COLON_PLUS] = ACTIONS(143),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(141),
    [anon_sym_COLON_DASH] = ACTIONS(143),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(141),
    [anon_sym_COLON_DOT] = ACTIONS(143),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(141),
    [anon_sym_COLON_SLASH] = ACTIONS(141),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(141),
    [anon_sym_COLON_LT] = ACTIONS(143),
    [anon_sym_COLON_LT_DASH] = ACTIONS(141),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(141),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(141),
    [anon_sym_COLON_LT_EQ] = ACTIONS(141),
    [anon_sym_COLON_LT_GT] = ACTIONS(141),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(141),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(143),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(141),
    [anon_sym_COLON_EQ] = ACTIONS(143),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(143),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(141),
    [anon_sym_COLON_EQ_GT] = ACTIONS(141),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(141),
    [anon_sym_COLON_GT] = ACTIONS(143),
    [anon_sym_COLON_GT_EQ] = ACTIONS(141),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(141),
    [anon_sym_COLON_AT] = ACTIONS(141),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(141),
    [anon_sym_COLON_CARET] = ACTIONS(141),
    [anon_sym_COLON_PIPE] = ACTIONS(143),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(141),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(143),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(141),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(143),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(141),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(141),
    [anon_sym_nil] = ACTIONS(141),
    [anon_sym_COLONnil] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(141),
    [anon_sym_LT_LT] = ACTIONS(141),
    [anon_sym_COMMA] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_RBRACE] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(141),
    [anon_sym_PIPE] = ACTIONS(141),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(141),
    [anon_sym_EQ_GT] = ACTIONS(141),
    [anon_sym_PERCENT] = ACTIONS(143),
    [anon_sym_defmodule] = ACTIONS(141),
    [anon_sym_end] = ACTIONS(141),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(141),
    [anon_sym_defstruct] = ACTIONS(141),
    [sym_comment] = ACTIONS(43),
  },
  [25] = {
    [aux_sym_tuple_repeat1] = STATE(49),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_RBRACE] = ACTIONS(147),
    [sym_comment] = ACTIONS(43),
  },
  [26] = {
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
    [sym__map] = STATE(50),
    [sym_map] = STATE(50),
    [sym_map_update] = STATE(50),
    [sym_struct] = STATE(50),
    [sym_defmodule] = STATE(50),
    [sym_alias] = ACTIONS(149),
    [sym_integer] = ACTIONS(151),
    [sym_float] = ACTIONS(149),
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
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [sym_alias] = ACTIONS(153),
    [sym_integer] = ACTIONS(155),
    [sym_float] = ACTIONS(153),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_COLONtrue] = ACTIONS(155),
    [anon_sym_false] = ACTIONS(153),
    [anon_sym_COLONfalse] = ACTIONS(155),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(155),
    [anon_sym_COLON_BANG] = ACTIONS(155),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(155),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(153),
    [anon_sym_COLON_AMP] = ACTIONS(155),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(155),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(153),
    [anon_sym_COLON_STAR] = ACTIONS(153),
    [anon_sym_COLON_PLUS] = ACTIONS(155),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(153),
    [anon_sym_COLON_DASH] = ACTIONS(155),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(153),
    [anon_sym_COLON_DOT] = ACTIONS(155),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(153),
    [anon_sym_COLON_SLASH] = ACTIONS(153),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(153),
    [anon_sym_COLON_LT] = ACTIONS(155),
    [anon_sym_COLON_LT_DASH] = ACTIONS(153),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(153),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(153),
    [anon_sym_COLON_LT_EQ] = ACTIONS(153),
    [anon_sym_COLON_LT_GT] = ACTIONS(153),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(153),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(155),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(153),
    [anon_sym_COLON_EQ] = ACTIONS(155),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(155),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(153),
    [anon_sym_COLON_EQ_GT] = ACTIONS(153),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(153),
    [anon_sym_COLON_GT] = ACTIONS(155),
    [anon_sym_COLON_GT_EQ] = ACTIONS(153),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(153),
    [anon_sym_COLON_AT] = ACTIONS(153),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(153),
    [anon_sym_COLON_CARET] = ACTIONS(153),
    [anon_sym_COLON_PIPE] = ACTIONS(155),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(153),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(155),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(153),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(155),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(153),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(153),
    [anon_sym_nil] = ACTIONS(153),
    [anon_sym_COLONnil] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(153),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(153),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(153),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(153),
    [anon_sym_EQ_GT] = ACTIONS(153),
    [anon_sym_PERCENT] = ACTIONS(155),
    [anon_sym_defmodule] = ACTIONS(153),
    [anon_sym_end] = ACTIONS(153),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(153),
    [anon_sym_defstruct] = ACTIONS(153),
    [sym_comment] = ACTIONS(43),
  },
  [28] = {
    [aux_sym_tuple_repeat1] = STATE(53),
    [anon_sym_COMMA] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(159),
    [anon_sym_PIPE] = ACTIONS(161),
    [sym_comment] = ACTIONS(43),
  },
  [29] = {
    [aux_sym_keyword_list_repeat1] = STATE(56),
    [anon_sym_COMMA] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(165),
    [sym_comment] = ACTIONS(43),
  },
  [30] = {
    [anon_sym_PIPE] = ACTIONS(167),
    [sym_comment] = ACTIONS(43),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [sym_alias] = ACTIONS(169),
    [sym_integer] = ACTIONS(171),
    [sym_float] = ACTIONS(169),
    [anon_sym_true] = ACTIONS(169),
    [anon_sym_COLONtrue] = ACTIONS(171),
    [anon_sym_false] = ACTIONS(169),
    [anon_sym_COLONfalse] = ACTIONS(171),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(171),
    [anon_sym_COLON_BANG] = ACTIONS(171),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(171),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(169),
    [anon_sym_COLON_AMP] = ACTIONS(171),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(171),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(169),
    [anon_sym_COLON_STAR] = ACTIONS(169),
    [anon_sym_COLON_PLUS] = ACTIONS(171),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(169),
    [anon_sym_COLON_DASH] = ACTIONS(171),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(169),
    [anon_sym_COLON_DOT] = ACTIONS(171),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(169),
    [anon_sym_COLON_SLASH] = ACTIONS(169),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(169),
    [anon_sym_COLON_LT] = ACTIONS(171),
    [anon_sym_COLON_LT_DASH] = ACTIONS(169),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(169),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(169),
    [anon_sym_COLON_LT_EQ] = ACTIONS(169),
    [anon_sym_COLON_LT_GT] = ACTIONS(169),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(169),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(171),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(169),
    [anon_sym_COLON_EQ] = ACTIONS(171),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(171),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(169),
    [anon_sym_COLON_EQ_GT] = ACTIONS(169),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(169),
    [anon_sym_COLON_GT] = ACTIONS(171),
    [anon_sym_COLON_GT_EQ] = ACTIONS(169),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(169),
    [anon_sym_COLON_AT] = ACTIONS(169),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(169),
    [anon_sym_COLON_CARET] = ACTIONS(169),
    [anon_sym_COLON_PIPE] = ACTIONS(171),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(169),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(171),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(169),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(171),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(169),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(169),
    [anon_sym_nil] = ACTIONS(169),
    [anon_sym_COLONnil] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(169),
    [anon_sym_LT_LT] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [anon_sym_LBRACE] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(169),
    [anon_sym_PIPE] = ACTIONS(169),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(169),
    [anon_sym_EQ_GT] = ACTIONS(169),
    [anon_sym_PERCENT] = ACTIONS(171),
    [anon_sym_defmodule] = ACTIONS(169),
    [anon_sym_end] = ACTIONS(169),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(169),
    [anon_sym_defstruct] = ACTIONS(169),
    [sym_comment] = ACTIONS(43),
  },
  [32] = {
    [anon_sym_PIPE] = ACTIONS(173),
    [anon_sym_EQ_GT] = ACTIONS(175),
    [sym_comment] = ACTIONS(43),
  },
  [33] = {
    [aux_sym_keyword_list_repeat1] = STATE(61),
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(179),
    [sym_comment] = ACTIONS(43),
  },
  [34] = {
    [anon_sym_RBRACE] = ACTIONS(181),
    [sym_comment] = ACTIONS(43),
  },
  [35] = {
    [aux_sym_keyword_list_repeat1] = STATE(61),
    [aux_sym__map_body_repeat1] = STATE(64),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_RBRACE] = ACTIONS(179),
    [sym_comment] = ACTIONS(43),
  },
  [36] = {
    [sym__empty_struct_body] = STATE(66),
    [sym__struct_body] = STATE(66),
    [sym__keyword_struct_body] = STATE(66),
    [anon_sym_LBRACE] = ACTIONS(185),
    [sym_comment] = ACTIONS(43),
  },
  [37] = {
    [anon_sym_do] = ACTIONS(187),
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
    [sym__map] = STATE(38),
    [sym_map] = STATE(38),
    [sym_map_update] = STATE(38),
    [sym_struct] = STATE(38),
    [sym_defmodule] = STATE(38),
    [aux_sym_program_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_alias] = ACTIONS(191),
    [sym_integer] = ACTIONS(194),
    [sym_float] = ACTIONS(191),
    [anon_sym_true] = ACTIONS(197),
    [anon_sym_COLONtrue] = ACTIONS(200),
    [anon_sym_false] = ACTIONS(203),
    [anon_sym_COLONfalse] = ACTIONS(206),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(209),
    [anon_sym_COLON_BANG] = ACTIONS(209),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(209),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(212),
    [anon_sym_COLON_AMP] = ACTIONS(209),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(209),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(212),
    [anon_sym_COLON_STAR] = ACTIONS(212),
    [anon_sym_COLON_PLUS] = ACTIONS(209),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(212),
    [anon_sym_COLON_DASH] = ACTIONS(209),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(212),
    [anon_sym_COLON_DOT] = ACTIONS(209),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(212),
    [anon_sym_COLON_SLASH] = ACTIONS(212),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(212),
    [anon_sym_COLON_LT] = ACTIONS(209),
    [anon_sym_COLON_LT_DASH] = ACTIONS(212),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(212),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(212),
    [anon_sym_COLON_LT_EQ] = ACTIONS(212),
    [anon_sym_COLON_LT_GT] = ACTIONS(212),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(212),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(209),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(212),
    [anon_sym_COLON_EQ] = ACTIONS(209),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(209),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(212),
    [anon_sym_COLON_EQ_GT] = ACTIONS(212),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(212),
    [anon_sym_COLON_GT] = ACTIONS(209),
    [anon_sym_COLON_GT_EQ] = ACTIONS(212),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(212),
    [anon_sym_COLON_AT] = ACTIONS(212),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(212),
    [anon_sym_COLON_CARET] = ACTIONS(212),
    [anon_sym_COLON_PIPE] = ACTIONS(209),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(212),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(209),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(212),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(209),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(212),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(212),
    [anon_sym_nil] = ACTIONS(215),
    [anon_sym_COLONnil] = ACTIONS(218),
    [anon_sym_SQUOTE] = ACTIONS(221),
    [anon_sym_LT_LT] = ACTIONS(224),
    [anon_sym_DQUOTE] = ACTIONS(227),
    [anon_sym_LBRACE] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(233),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(236),
    [anon_sym_PERCENT] = ACTIONS(239),
    [anon_sym_defmodule] = ACTIONS(242),
    [sym_comment] = ACTIONS(43),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [sym_alias] = ACTIONS(245),
    [sym_integer] = ACTIONS(247),
    [sym_float] = ACTIONS(245),
    [anon_sym_true] = ACTIONS(245),
    [anon_sym_COLONtrue] = ACTIONS(247),
    [anon_sym_false] = ACTIONS(245),
    [anon_sym_COLONfalse] = ACTIONS(247),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(247),
    [anon_sym_COLON_BANG] = ACTIONS(247),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(247),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(245),
    [anon_sym_COLON_AMP] = ACTIONS(247),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(247),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(245),
    [anon_sym_COLON_STAR] = ACTIONS(245),
    [anon_sym_COLON_PLUS] = ACTIONS(247),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(245),
    [anon_sym_COLON_DASH] = ACTIONS(247),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(245),
    [anon_sym_COLON_DOT] = ACTIONS(247),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(245),
    [anon_sym_COLON_SLASH] = ACTIONS(245),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(245),
    [anon_sym_COLON_LT] = ACTIONS(247),
    [anon_sym_COLON_LT_DASH] = ACTIONS(245),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(245),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(245),
    [anon_sym_COLON_LT_EQ] = ACTIONS(245),
    [anon_sym_COLON_LT_GT] = ACTIONS(245),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(245),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(247),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(245),
    [anon_sym_COLON_EQ] = ACTIONS(247),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(247),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(245),
    [anon_sym_COLON_EQ_GT] = ACTIONS(245),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(245),
    [anon_sym_COLON_GT] = ACTIONS(247),
    [anon_sym_COLON_GT_EQ] = ACTIONS(245),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(245),
    [anon_sym_COLON_AT] = ACTIONS(245),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(245),
    [anon_sym_COLON_CARET] = ACTIONS(245),
    [anon_sym_COLON_PIPE] = ACTIONS(247),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(245),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(247),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(245),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(247),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(245),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(245),
    [anon_sym_nil] = ACTIONS(245),
    [anon_sym_COLONnil] = ACTIONS(247),
    [anon_sym_SQUOTE] = ACTIONS(245),
    [anon_sym_LT_LT] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_GT_GT] = ACTIONS(245),
    [anon_sym_COLON_COLON] = ACTIONS(247),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [anon_sym_LBRACE] = ACTIONS(245),
    [anon_sym_RBRACE] = ACTIONS(245),
    [anon_sym_LBRACK] = ACTIONS(245),
    [anon_sym_RBRACK] = ACTIONS(245),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(245),
    [anon_sym_EQ_GT] = ACTIONS(245),
    [anon_sym_PERCENT] = ACTIONS(247),
    [anon_sym_defmodule] = ACTIONS(245),
    [anon_sym_end] = ACTIONS(245),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(245),
    [anon_sym_defstruct] = ACTIONS(245),
    [sym_comment] = ACTIONS(43),
  },
  [40] = {
    [aux_sym_charlist_repeat1] = STATE(40),
    [anon_sym_SQUOTE] = ACTIONS(249),
    [aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(251),
    [sym_comment] = ACTIONS(65),
  },
  [41] = {
    [sym_binary_options] = ACTIONS(254),
    [sym_comment] = ACTIONS(43),
  },
  [42] = {
    [sym_charlist] = STATE(19),
    [sym_binary_segment] = STATE(70),
    [sym_string] = STATE(19),
    [sym_integer] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_GT_GT] = ACTIONS(256),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(43),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(258),
    [sym_alias] = ACTIONS(258),
    [sym_integer] = ACTIONS(260),
    [sym_float] = ACTIONS(258),
    [anon_sym_true] = ACTIONS(258),
    [anon_sym_COLONtrue] = ACTIONS(260),
    [anon_sym_false] = ACTIONS(258),
    [anon_sym_COLONfalse] = ACTIONS(260),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(260),
    [anon_sym_COLON_BANG] = ACTIONS(260),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(260),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(258),
    [anon_sym_COLON_AMP] = ACTIONS(260),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(260),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(258),
    [anon_sym_COLON_STAR] = ACTIONS(258),
    [anon_sym_COLON_PLUS] = ACTIONS(260),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(258),
    [anon_sym_COLON_DASH] = ACTIONS(260),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(258),
    [anon_sym_COLON_DOT] = ACTIONS(260),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(258),
    [anon_sym_COLON_SLASH] = ACTIONS(258),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(258),
    [anon_sym_COLON_LT] = ACTIONS(260),
    [anon_sym_COLON_LT_DASH] = ACTIONS(258),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(258),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(258),
    [anon_sym_COLON_LT_EQ] = ACTIONS(258),
    [anon_sym_COLON_LT_GT] = ACTIONS(258),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(258),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(260),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(258),
    [anon_sym_COLON_EQ] = ACTIONS(260),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(260),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(258),
    [anon_sym_COLON_EQ_GT] = ACTIONS(258),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(258),
    [anon_sym_COLON_GT] = ACTIONS(260),
    [anon_sym_COLON_GT_EQ] = ACTIONS(258),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(258),
    [anon_sym_COLON_AT] = ACTIONS(258),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(258),
    [anon_sym_COLON_CARET] = ACTIONS(258),
    [anon_sym_COLON_PIPE] = ACTIONS(260),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(258),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(260),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(258),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(260),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(258),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(258),
    [anon_sym_nil] = ACTIONS(258),
    [anon_sym_COLONnil] = ACTIONS(260),
    [anon_sym_SQUOTE] = ACTIONS(258),
    [anon_sym_LT_LT] = ACTIONS(258),
    [anon_sym_COMMA] = ACTIONS(258),
    [anon_sym_DQUOTE] = ACTIONS(258),
    [anon_sym_LBRACE] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(258),
    [anon_sym_LBRACK] = ACTIONS(258),
    [anon_sym_RBRACK] = ACTIONS(258),
    [anon_sym_PIPE] = ACTIONS(258),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(258),
    [anon_sym_EQ_GT] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(260),
    [anon_sym_defmodule] = ACTIONS(258),
    [anon_sym_end] = ACTIONS(258),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(258),
    [anon_sym_defstruct] = ACTIONS(258),
    [sym_comment] = ACTIONS(43),
  },
  [44] = {
    [aux_sym_binary_repeat1] = STATE(72),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_GT_GT] = ACTIONS(256),
    [sym_comment] = ACTIONS(43),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(264),
    [sym_alias] = ACTIONS(264),
    [sym_integer] = ACTIONS(266),
    [sym_float] = ACTIONS(264),
    [anon_sym_true] = ACTIONS(264),
    [anon_sym_COLONtrue] = ACTIONS(266),
    [anon_sym_false] = ACTIONS(264),
    [anon_sym_COLONfalse] = ACTIONS(266),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(266),
    [anon_sym_COLON_BANG] = ACTIONS(266),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(266),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(264),
    [anon_sym_COLON_AMP] = ACTIONS(266),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(266),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(264),
    [anon_sym_COLON_STAR] = ACTIONS(264),
    [anon_sym_COLON_PLUS] = ACTIONS(266),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(264),
    [anon_sym_COLON_DASH] = ACTIONS(266),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(264),
    [anon_sym_COLON_DOT] = ACTIONS(266),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(264),
    [anon_sym_COLON_SLASH] = ACTIONS(264),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(264),
    [anon_sym_COLON_LT] = ACTIONS(266),
    [anon_sym_COLON_LT_DASH] = ACTIONS(264),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(264),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(264),
    [anon_sym_COLON_LT_EQ] = ACTIONS(264),
    [anon_sym_COLON_LT_GT] = ACTIONS(264),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(264),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(266),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(264),
    [anon_sym_COLON_EQ] = ACTIONS(266),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(266),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(264),
    [anon_sym_COLON_EQ_GT] = ACTIONS(264),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(264),
    [anon_sym_COLON_GT] = ACTIONS(266),
    [anon_sym_COLON_GT_EQ] = ACTIONS(264),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(264),
    [anon_sym_COLON_AT] = ACTIONS(264),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(264),
    [anon_sym_COLON_CARET] = ACTIONS(264),
    [anon_sym_COLON_PIPE] = ACTIONS(266),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(264),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(266),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(264),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(266),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(264),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(264),
    [anon_sym_nil] = ACTIONS(264),
    [anon_sym_COLONnil] = ACTIONS(266),
    [anon_sym_SQUOTE] = ACTIONS(264),
    [anon_sym_LT_LT] = ACTIONS(264),
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_GT_GT] = ACTIONS(264),
    [anon_sym_COLON_COLON] = ACTIONS(266),
    [anon_sym_DQUOTE] = ACTIONS(264),
    [anon_sym_LBRACE] = ACTIONS(264),
    [anon_sym_RBRACE] = ACTIONS(264),
    [anon_sym_LBRACK] = ACTIONS(264),
    [anon_sym_RBRACK] = ACTIONS(264),
    [anon_sym_PIPE] = ACTIONS(264),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(264),
    [anon_sym_EQ_GT] = ACTIONS(264),
    [anon_sym_PERCENT] = ACTIONS(266),
    [anon_sym_defmodule] = ACTIONS(264),
    [anon_sym_end] = ACTIONS(264),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(264),
    [anon_sym_defstruct] = ACTIONS(264),
    [sym_comment] = ACTIONS(43),
  },
  [46] = {
    [aux_sym_string_repeat1] = STATE(46),
    [anon_sym_DQUOTE] = ACTIONS(268),
    [aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(270),
    [sym_comment] = ACTIONS(65),
  },
  [47] = {
    [sym__expression] = STATE(74),
    [sym__value] = STATE(74),
    [sym_true] = STATE(74),
    [sym_false] = STATE(74),
    [sym_atom] = STATE(74),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(75),
    [sym_nil] = STATE(74),
    [sym_charlist] = STATE(74),
    [sym_binary] = STATE(74),
    [sym_string] = STATE(74),
    [sym_tuple] = STATE(74),
    [sym__list_or_keyword_list] = STATE(74),
    [sym_list] = STATE(74),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(74),
    [sym__map] = STATE(74),
    [sym_map] = STATE(74),
    [sym_map_update] = STATE(74),
    [sym_struct] = STATE(74),
    [sym_implicit_keyword_list] = STATE(76),
    [sym_defmodule] = STATE(74),
    [sym_alias] = ACTIONS(273),
    [sym_integer] = ACTIONS(273),
    [sym_float] = ACTIONS(275),
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
    [anon_sym_RBRACE] = ACTIONS(277),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [sym_alias] = ACTIONS(279),
    [sym_integer] = ACTIONS(281),
    [sym_float] = ACTIONS(279),
    [anon_sym_true] = ACTIONS(279),
    [anon_sym_COLONtrue] = ACTIONS(281),
    [anon_sym_false] = ACTIONS(279),
    [anon_sym_COLONfalse] = ACTIONS(281),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(281),
    [anon_sym_COLON_BANG] = ACTIONS(281),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(281),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(279),
    [anon_sym_COLON_AMP] = ACTIONS(281),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(281),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(279),
    [anon_sym_COLON_STAR] = ACTIONS(279),
    [anon_sym_COLON_PLUS] = ACTIONS(281),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(279),
    [anon_sym_COLON_DASH] = ACTIONS(281),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(279),
    [anon_sym_COLON_DOT] = ACTIONS(281),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(279),
    [anon_sym_COLON_SLASH] = ACTIONS(279),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(279),
    [anon_sym_COLON_LT] = ACTIONS(281),
    [anon_sym_COLON_LT_DASH] = ACTIONS(279),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(279),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(279),
    [anon_sym_COLON_LT_EQ] = ACTIONS(279),
    [anon_sym_COLON_LT_GT] = ACTIONS(279),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(279),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(281),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(279),
    [anon_sym_COLON_EQ] = ACTIONS(281),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(281),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(279),
    [anon_sym_COLON_EQ_GT] = ACTIONS(279),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(279),
    [anon_sym_COLON_GT] = ACTIONS(281),
    [anon_sym_COLON_GT_EQ] = ACTIONS(279),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(279),
    [anon_sym_COLON_AT] = ACTIONS(279),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(279),
    [anon_sym_COLON_CARET] = ACTIONS(279),
    [anon_sym_COLON_PIPE] = ACTIONS(281),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(279),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(279),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(281),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(279),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(279),
    [anon_sym_nil] = ACTIONS(279),
    [anon_sym_COLONnil] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(279),
    [anon_sym_LT_LT] = ACTIONS(279),
    [anon_sym_COMMA] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(279),
    [anon_sym_LBRACE] = ACTIONS(279),
    [anon_sym_RBRACE] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(279),
    [anon_sym_RBRACK] = ACTIONS(279),
    [anon_sym_PIPE] = ACTIONS(279),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(279),
    [anon_sym_EQ_GT] = ACTIONS(279),
    [anon_sym_PERCENT] = ACTIONS(281),
    [anon_sym_defmodule] = ACTIONS(279),
    [anon_sym_end] = ACTIONS(279),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(279),
    [anon_sym_defstruct] = ACTIONS(279),
    [sym_comment] = ACTIONS(43),
  },
  [49] = {
    [aux_sym_tuple_repeat1] = STATE(78),
    [anon_sym_COMMA] = ACTIONS(283),
    [anon_sym_RBRACE] = ACTIONS(277),
    [sym_comment] = ACTIONS(43),
  },
  [50] = {
    [anon_sym_COMMA] = ACTIONS(285),
    [anon_sym_RBRACE] = ACTIONS(285),
    [anon_sym_RBRACK] = ACTIONS(285),
    [anon_sym_end] = ACTIONS(285),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(285),
    [anon_sym_defstruct] = ACTIONS(285),
    [sym_comment] = ACTIONS(43),
  },
  [51] = {
    [sym__expression] = STATE(74),
    [sym__value] = STATE(74),
    [sym_true] = STATE(74),
    [sym_false] = STATE(74),
    [sym_atom] = STATE(74),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(80),
    [sym_nil] = STATE(74),
    [sym_charlist] = STATE(74),
    [sym_binary] = STATE(74),
    [sym_string] = STATE(74),
    [sym_tuple] = STATE(74),
    [sym__list_or_keyword_list] = STATE(74),
    [sym_list] = STATE(74),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(74),
    [sym__map] = STATE(74),
    [sym_map] = STATE(74),
    [sym_map_update] = STATE(74),
    [sym_struct] = STATE(74),
    [sym_implicit_keyword_list] = STATE(81),
    [sym_defmodule] = STATE(74),
    [sym_alias] = ACTIONS(273),
    [sym_integer] = ACTIONS(273),
    [sym_float] = ACTIONS(275),
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
    [anon_sym_RBRACK] = ACTIONS(287),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [sym_alias] = ACTIONS(289),
    [sym_integer] = ACTIONS(291),
    [sym_float] = ACTIONS(289),
    [anon_sym_true] = ACTIONS(289),
    [anon_sym_COLONtrue] = ACTIONS(291),
    [anon_sym_false] = ACTIONS(289),
    [anon_sym_COLONfalse] = ACTIONS(291),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(291),
    [anon_sym_COLON_BANG] = ACTIONS(291),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(291),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(289),
    [anon_sym_COLON_AMP] = ACTIONS(291),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(291),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(289),
    [anon_sym_COLON_STAR] = ACTIONS(289),
    [anon_sym_COLON_PLUS] = ACTIONS(291),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(289),
    [anon_sym_COLON_DASH] = ACTIONS(291),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(289),
    [anon_sym_COLON_DOT] = ACTIONS(291),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(289),
    [anon_sym_COLON_SLASH] = ACTIONS(289),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(289),
    [anon_sym_COLON_LT] = ACTIONS(291),
    [anon_sym_COLON_LT_DASH] = ACTIONS(289),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(289),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(289),
    [anon_sym_COLON_LT_EQ] = ACTIONS(289),
    [anon_sym_COLON_LT_GT] = ACTIONS(289),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(289),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(291),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(289),
    [anon_sym_COLON_EQ] = ACTIONS(291),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(291),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(289),
    [anon_sym_COLON_EQ_GT] = ACTIONS(289),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(289),
    [anon_sym_COLON_GT] = ACTIONS(291),
    [anon_sym_COLON_GT_EQ] = ACTIONS(289),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(289),
    [anon_sym_COLON_AT] = ACTIONS(289),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(289),
    [anon_sym_COLON_CARET] = ACTIONS(289),
    [anon_sym_COLON_PIPE] = ACTIONS(291),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(289),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(291),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(289),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(291),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(289),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(289),
    [anon_sym_nil] = ACTIONS(289),
    [anon_sym_COLONnil] = ACTIONS(291),
    [anon_sym_SQUOTE] = ACTIONS(289),
    [anon_sym_LT_LT] = ACTIONS(289),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_DQUOTE] = ACTIONS(289),
    [anon_sym_LBRACE] = ACTIONS(289),
    [anon_sym_RBRACE] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(289),
    [anon_sym_RBRACK] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(289),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(289),
    [anon_sym_EQ_GT] = ACTIONS(289),
    [anon_sym_PERCENT] = ACTIONS(291),
    [anon_sym_defmodule] = ACTIONS(289),
    [anon_sym_end] = ACTIONS(289),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(289),
    [anon_sym_defstruct] = ACTIONS(289),
    [sym_comment] = ACTIONS(43),
  },
  [53] = {
    [aux_sym_tuple_repeat1] = STATE(83),
    [anon_sym_COMMA] = ACTIONS(293),
    [anon_sym_RBRACK] = ACTIONS(287),
    [sym_comment] = ACTIONS(43),
  },
  [54] = {
    [sym_keyword] = STATE(85),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(295),
    [sym_comment] = ACTIONS(43),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(297),
    [sym_alias] = ACTIONS(297),
    [sym_integer] = ACTIONS(299),
    [sym_float] = ACTIONS(297),
    [anon_sym_true] = ACTIONS(297),
    [anon_sym_COLONtrue] = ACTIONS(299),
    [anon_sym_false] = ACTIONS(297),
    [anon_sym_COLONfalse] = ACTIONS(299),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(299),
    [anon_sym_COLON_BANG] = ACTIONS(299),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(299),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(297),
    [anon_sym_COLON_AMP] = ACTIONS(299),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(299),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(297),
    [anon_sym_COLON_STAR] = ACTIONS(297),
    [anon_sym_COLON_PLUS] = ACTIONS(299),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(297),
    [anon_sym_COLON_DASH] = ACTIONS(299),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(297),
    [anon_sym_COLON_DOT] = ACTIONS(299),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(297),
    [anon_sym_COLON_SLASH] = ACTIONS(297),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(297),
    [anon_sym_COLON_LT] = ACTIONS(299),
    [anon_sym_COLON_LT_DASH] = ACTIONS(297),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(297),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(297),
    [anon_sym_COLON_LT_EQ] = ACTIONS(297),
    [anon_sym_COLON_LT_GT] = ACTIONS(297),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(297),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(299),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(297),
    [anon_sym_COLON_EQ] = ACTIONS(299),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(299),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(297),
    [anon_sym_COLON_EQ_GT] = ACTIONS(297),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(297),
    [anon_sym_COLON_GT] = ACTIONS(299),
    [anon_sym_COLON_GT_EQ] = ACTIONS(297),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(297),
    [anon_sym_COLON_AT] = ACTIONS(297),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(297),
    [anon_sym_COLON_CARET] = ACTIONS(297),
    [anon_sym_COLON_PIPE] = ACTIONS(299),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(297),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(297),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(299),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(297),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(297),
    [anon_sym_nil] = ACTIONS(297),
    [anon_sym_COLONnil] = ACTIONS(299),
    [anon_sym_SQUOTE] = ACTIONS(297),
    [anon_sym_LT_LT] = ACTIONS(297),
    [anon_sym_COMMA] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(297),
    [anon_sym_LBRACE] = ACTIONS(297),
    [anon_sym_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_RBRACK] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(297),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(297),
    [anon_sym_EQ_GT] = ACTIONS(297),
    [anon_sym_PERCENT] = ACTIONS(299),
    [anon_sym_defmodule] = ACTIONS(297),
    [anon_sym_end] = ACTIONS(297),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(297),
    [anon_sym_defstruct] = ACTIONS(297),
    [sym_comment] = ACTIONS(43),
  },
  [56] = {
    [aux_sym_keyword_list_repeat1] = STATE(87),
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_RBRACK] = ACTIONS(295),
    [sym_comment] = ACTIONS(43),
  },
  [57] = {
    [sym__list_or_keyword_list] = STATE(88),
    [sym_list] = STATE(88),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_tail] = STATE(89),
    [sym_keyword_list] = STATE(88),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_comment] = ACTIONS(43),
  },
  [58] = {
    [sym__value] = STATE(90),
    [sym_true] = STATE(90),
    [sym_false] = STATE(90),
    [sym_atom] = STATE(90),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(33),
    [sym_nil] = STATE(90),
    [sym_charlist] = STATE(90),
    [sym_binary] = STATE(90),
    [sym_string] = STATE(90),
    [sym_tuple] = STATE(90),
    [sym__list_or_keyword_list] = STATE(90),
    [sym_list] = STATE(90),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(90),
    [sym__map] = STATE(90),
    [sym_map] = STATE(90),
    [sym__map_body] = STATE(91),
    [sym_map_update] = STATE(90),
    [sym_pair] = STATE(35),
    [sym_struct] = STATE(90),
    [sym_defmodule] = STATE(90),
    [sym_alias] = ACTIONS(303),
    [sym_integer] = ACTIONS(303),
    [sym_float] = ACTIONS(305),
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
    [sym_comment] = ACTIONS(43),
  },
  [59] = {
    [sym__value] = STATE(92),
    [sym_true] = STATE(92),
    [sym_false] = STATE(92),
    [sym_atom] = STATE(92),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(92),
    [sym_charlist] = STATE(92),
    [sym_binary] = STATE(92),
    [sym_string] = STATE(92),
    [sym_tuple] = STATE(92),
    [sym__list_or_keyword_list] = STATE(92),
    [sym_list] = STATE(92),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(92),
    [sym__map] = STATE(92),
    [sym_map] = STATE(92),
    [sym_map_update] = STATE(92),
    [sym_struct] = STATE(92),
    [sym_defmodule] = STATE(92),
    [sym_alias] = ACTIONS(307),
    [sym_integer] = ACTIONS(309),
    [sym_float] = ACTIONS(307),
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
  [60] = {
    [sym_keyword] = STATE(85),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(311),
    [sym_comment] = ACTIONS(43),
  },
  [61] = {
    [aux_sym_keyword_list_repeat1] = STATE(94),
    [anon_sym_COMMA] = ACTIONS(313),
    [anon_sym_RBRACE] = ACTIONS(311),
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
    [anon_sym_defstruct] = ACTIONS(315),
    [sym_comment] = ACTIONS(43),
  },
  [63] = {
    [sym__value] = STATE(90),
    [sym_true] = STATE(90),
    [sym_false] = STATE(90),
    [sym_atom] = STATE(90),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(85),
    [sym_nil] = STATE(90),
    [sym_charlist] = STATE(90),
    [sym_binary] = STATE(90),
    [sym_string] = STATE(90),
    [sym_tuple] = STATE(90),
    [sym__list_or_keyword_list] = STATE(90),
    [sym_list] = STATE(90),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(90),
    [sym__map] = STATE(90),
    [sym_map] = STATE(90),
    [sym_map_update] = STATE(90),
    [sym_pair] = STATE(95),
    [sym_struct] = STATE(90),
    [sym_defmodule] = STATE(90),
    [sym_alias] = ACTIONS(303),
    [sym_integer] = ACTIONS(303),
    [sym_float] = ACTIONS(305),
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
    [anon_sym_RBRACE] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [64] = {
    [aux_sym_keyword_list_repeat1] = STATE(97),
    [aux_sym__map_body_repeat1] = STATE(98),
    [anon_sym_COMMA] = ACTIONS(319),
    [anon_sym_RBRACE] = ACTIONS(311),
    [sym_comment] = ACTIONS(43),
  },
  [65] = {
    [sym__value] = STATE(90),
    [sym_true] = STATE(90),
    [sym_false] = STATE(90),
    [sym_atom] = STATE(90),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(100),
    [sym_nil] = STATE(90),
    [sym_charlist] = STATE(90),
    [sym_binary] = STATE(90),
    [sym_string] = STATE(90),
    [sym_tuple] = STATE(90),
    [sym__list_or_keyword_list] = STATE(90),
    [sym_list] = STATE(90),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(90),
    [sym__map] = STATE(90),
    [sym_map] = STATE(90),
    [sym_map_update] = STATE(90),
    [sym_pair] = STATE(101),
    [sym_struct] = STATE(90),
    [sym_defmodule] = STATE(90),
    [sym_alias] = ACTIONS(303),
    [sym_integer] = ACTIONS(303),
    [sym_float] = ACTIONS(305),
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
    [anon_sym_RBRACE] = ACTIONS(321),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(323),
    [sym_alias] = ACTIONS(323),
    [sym_integer] = ACTIONS(325),
    [sym_float] = ACTIONS(323),
    [anon_sym_true] = ACTIONS(323),
    [anon_sym_COLONtrue] = ACTIONS(325),
    [anon_sym_false] = ACTIONS(323),
    [anon_sym_COLONfalse] = ACTIONS(325),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(325),
    [anon_sym_COLON_BANG] = ACTIONS(325),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(325),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(323),
    [anon_sym_COLON_AMP] = ACTIONS(325),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(325),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(323),
    [anon_sym_COLON_STAR] = ACTIONS(323),
    [anon_sym_COLON_PLUS] = ACTIONS(325),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(323),
    [anon_sym_COLON_DASH] = ACTIONS(325),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(323),
    [anon_sym_COLON_DOT] = ACTIONS(325),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(323),
    [anon_sym_COLON_SLASH] = ACTIONS(323),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(323),
    [anon_sym_COLON_LT] = ACTIONS(325),
    [anon_sym_COLON_LT_DASH] = ACTIONS(323),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(323),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(323),
    [anon_sym_COLON_LT_EQ] = ACTIONS(323),
    [anon_sym_COLON_LT_GT] = ACTIONS(323),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(323),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(325),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(323),
    [anon_sym_COLON_EQ] = ACTIONS(325),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(325),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(323),
    [anon_sym_COLON_EQ_GT] = ACTIONS(323),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(323),
    [anon_sym_COLON_GT] = ACTIONS(325),
    [anon_sym_COLON_GT_EQ] = ACTIONS(323),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(323),
    [anon_sym_COLON_AT] = ACTIONS(323),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(323),
    [anon_sym_COLON_CARET] = ACTIONS(323),
    [anon_sym_COLON_PIPE] = ACTIONS(325),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(323),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(325),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(323),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(325),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(323),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(323),
    [anon_sym_nil] = ACTIONS(323),
    [anon_sym_COLONnil] = ACTIONS(325),
    [anon_sym_SQUOTE] = ACTIONS(323),
    [anon_sym_LT_LT] = ACTIONS(323),
    [anon_sym_COMMA] = ACTIONS(323),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [anon_sym_LBRACE] = ACTIONS(323),
    [anon_sym_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(323),
    [anon_sym_RBRACK] = ACTIONS(323),
    [anon_sym_PIPE] = ACTIONS(323),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(323),
    [anon_sym_EQ_GT] = ACTIONS(323),
    [anon_sym_PERCENT] = ACTIONS(325),
    [anon_sym_defmodule] = ACTIONS(323),
    [anon_sym_end] = ACTIONS(323),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(323),
    [anon_sym_defstruct] = ACTIONS(323),
    [sym_comment] = ACTIONS(43),
  },
  [67] = {
    [sym__module_body] = STATE(105),
    [sym_module_attribute] = STATE(105),
    [sym_defstruct] = STATE(105),
    [aux_sym_defmodule_repeat1] = STATE(105),
    [anon_sym_end] = ACTIONS(327),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(329),
    [anon_sym_defstruct] = ACTIONS(331),
    [sym_comment] = ACTIONS(43),
  },
  [68] = {
    [anon_sym_COMMA] = ACTIONS(333),
    [anon_sym_GT_GT] = ACTIONS(333),
    [sym_comment] = ACTIONS(43),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(335),
    [sym_alias] = ACTIONS(335),
    [sym_integer] = ACTIONS(337),
    [sym_float] = ACTIONS(335),
    [anon_sym_true] = ACTIONS(335),
    [anon_sym_COLONtrue] = ACTIONS(337),
    [anon_sym_false] = ACTIONS(335),
    [anon_sym_COLONfalse] = ACTIONS(337),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(337),
    [anon_sym_COLON_BANG] = ACTIONS(337),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(337),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(335),
    [anon_sym_COLON_AMP] = ACTIONS(337),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(337),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(335),
    [anon_sym_COLON_STAR] = ACTIONS(335),
    [anon_sym_COLON_PLUS] = ACTIONS(337),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(335),
    [anon_sym_COLON_DASH] = ACTIONS(337),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(335),
    [anon_sym_COLON_DOT] = ACTIONS(337),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(335),
    [anon_sym_COLON_SLASH] = ACTIONS(335),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(335),
    [anon_sym_COLON_LT] = ACTIONS(337),
    [anon_sym_COLON_LT_DASH] = ACTIONS(335),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(335),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(335),
    [anon_sym_COLON_LT_EQ] = ACTIONS(335),
    [anon_sym_COLON_LT_GT] = ACTIONS(335),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(335),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(337),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(335),
    [anon_sym_COLON_EQ] = ACTIONS(337),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(337),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(335),
    [anon_sym_COLON_EQ_GT] = ACTIONS(335),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(335),
    [anon_sym_COLON_GT] = ACTIONS(337),
    [anon_sym_COLON_GT_EQ] = ACTIONS(335),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(335),
    [anon_sym_COLON_AT] = ACTIONS(335),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(335),
    [anon_sym_COLON_CARET] = ACTIONS(335),
    [anon_sym_COLON_PIPE] = ACTIONS(337),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(335),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(335),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(337),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(335),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(335),
    [anon_sym_nil] = ACTIONS(335),
    [anon_sym_COLONnil] = ACTIONS(337),
    [anon_sym_SQUOTE] = ACTIONS(335),
    [anon_sym_LT_LT] = ACTIONS(335),
    [anon_sym_COMMA] = ACTIONS(335),
    [anon_sym_DQUOTE] = ACTIONS(335),
    [anon_sym_LBRACE] = ACTIONS(335),
    [anon_sym_RBRACE] = ACTIONS(335),
    [anon_sym_LBRACK] = ACTIONS(335),
    [anon_sym_RBRACK] = ACTIONS(335),
    [anon_sym_PIPE] = ACTIONS(335),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(335),
    [anon_sym_EQ_GT] = ACTIONS(335),
    [anon_sym_PERCENT] = ACTIONS(337),
    [anon_sym_defmodule] = ACTIONS(335),
    [anon_sym_end] = ACTIONS(335),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(335),
    [anon_sym_defstruct] = ACTIONS(335),
    [sym_comment] = ACTIONS(43),
  },
  [70] = {
    [anon_sym_COMMA] = ACTIONS(339),
    [anon_sym_GT_GT] = ACTIONS(339),
    [sym_comment] = ACTIONS(43),
  },
  [71] = {
    [sym_charlist] = STATE(19),
    [sym_binary_segment] = STATE(70),
    [sym_string] = STATE(19),
    [sym_integer] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_GT_GT] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(43),
  },
  [72] = {
    [aux_sym_binary_repeat1] = STATE(72),
    [anon_sym_COMMA] = ACTIONS(343),
    [anon_sym_GT_GT] = ACTIONS(339),
    [sym_comment] = ACTIONS(43),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(346),
    [sym_alias] = ACTIONS(346),
    [sym_integer] = ACTIONS(348),
    [sym_float] = ACTIONS(346),
    [anon_sym_true] = ACTIONS(346),
    [anon_sym_COLONtrue] = ACTIONS(348),
    [anon_sym_false] = ACTIONS(346),
    [anon_sym_COLONfalse] = ACTIONS(348),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(348),
    [anon_sym_COLON_BANG] = ACTIONS(348),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(348),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(346),
    [anon_sym_COLON_AMP] = ACTIONS(348),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(348),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(346),
    [anon_sym_COLON_STAR] = ACTIONS(346),
    [anon_sym_COLON_PLUS] = ACTIONS(348),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(346),
    [anon_sym_COLON_DASH] = ACTIONS(348),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(346),
    [anon_sym_COLON_DOT] = ACTIONS(348),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(346),
    [anon_sym_COLON_SLASH] = ACTIONS(346),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(346),
    [anon_sym_COLON_LT] = ACTIONS(348),
    [anon_sym_COLON_LT_DASH] = ACTIONS(346),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(346),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(346),
    [anon_sym_COLON_LT_EQ] = ACTIONS(346),
    [anon_sym_COLON_LT_GT] = ACTIONS(346),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(346),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(348),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(346),
    [anon_sym_COLON_EQ] = ACTIONS(348),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(348),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(346),
    [anon_sym_COLON_EQ_GT] = ACTIONS(346),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(346),
    [anon_sym_COLON_GT] = ACTIONS(348),
    [anon_sym_COLON_GT_EQ] = ACTIONS(346),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(346),
    [anon_sym_COLON_AT] = ACTIONS(346),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(346),
    [anon_sym_COLON_CARET] = ACTIONS(346),
    [anon_sym_COLON_PIPE] = ACTIONS(348),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(346),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(346),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(348),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(346),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(346),
    [anon_sym_nil] = ACTIONS(346),
    [anon_sym_COLONnil] = ACTIONS(348),
    [anon_sym_SQUOTE] = ACTIONS(346),
    [anon_sym_LT_LT] = ACTIONS(346),
    [anon_sym_COMMA] = ACTIONS(346),
    [anon_sym_DQUOTE] = ACTIONS(346),
    [anon_sym_LBRACE] = ACTIONS(346),
    [anon_sym_RBRACE] = ACTIONS(346),
    [anon_sym_LBRACK] = ACTIONS(346),
    [anon_sym_RBRACK] = ACTIONS(346),
    [anon_sym_PIPE] = ACTIONS(346),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(346),
    [anon_sym_EQ_GT] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(348),
    [anon_sym_defmodule] = ACTIONS(346),
    [anon_sym_end] = ACTIONS(346),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(346),
    [anon_sym_defstruct] = ACTIONS(346),
    [sym_comment] = ACTIONS(43),
  },
  [74] = {
    [anon_sym_COMMA] = ACTIONS(350),
    [anon_sym_RBRACE] = ACTIONS(350),
    [anon_sym_RBRACK] = ACTIONS(350),
    [sym_comment] = ACTIONS(43),
  },
  [75] = {
    [aux_sym_keyword_list_repeat1] = STATE(109),
    [anon_sym_COMMA] = ACTIONS(352),
    [anon_sym_RBRACE] = ACTIONS(354),
    [sym_comment] = ACTIONS(43),
  },
  [76] = {
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_RBRACE] = ACTIONS(358),
    [sym_comment] = ACTIONS(43),
  },
  [77] = {
    [sym__expression] = STATE(74),
    [sym__value] = STATE(74),
    [sym_true] = STATE(74),
    [sym_false] = STATE(74),
    [sym_atom] = STATE(74),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(75),
    [sym_nil] = STATE(74),
    [sym_charlist] = STATE(74),
    [sym_binary] = STATE(74),
    [sym_string] = STATE(74),
    [sym_tuple] = STATE(74),
    [sym__list_or_keyword_list] = STATE(74),
    [sym_list] = STATE(74),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(74),
    [sym__map] = STATE(74),
    [sym_map] = STATE(74),
    [sym_map_update] = STATE(74),
    [sym_struct] = STATE(74),
    [sym_implicit_keyword_list] = STATE(112),
    [sym_defmodule] = STATE(74),
    [sym_alias] = ACTIONS(273),
    [sym_integer] = ACTIONS(273),
    [sym_float] = ACTIONS(275),
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
    [anon_sym_RBRACE] = ACTIONS(358),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [78] = {
    [aux_sym_tuple_repeat1] = STATE(78),
    [anon_sym_COMMA] = ACTIONS(360),
    [anon_sym_RBRACE] = ACTIONS(350),
    [sym_comment] = ACTIONS(43),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [sym_alias] = ACTIONS(363),
    [sym_integer] = ACTIONS(365),
    [sym_float] = ACTIONS(363),
    [anon_sym_true] = ACTIONS(363),
    [anon_sym_COLONtrue] = ACTIONS(365),
    [anon_sym_false] = ACTIONS(363),
    [anon_sym_COLONfalse] = ACTIONS(365),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(365),
    [anon_sym_COLON_BANG] = ACTIONS(365),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(365),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(363),
    [anon_sym_COLON_AMP] = ACTIONS(365),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(365),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(363),
    [anon_sym_COLON_STAR] = ACTIONS(363),
    [anon_sym_COLON_PLUS] = ACTIONS(365),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(363),
    [anon_sym_COLON_DASH] = ACTIONS(365),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(363),
    [anon_sym_COLON_DOT] = ACTIONS(365),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(363),
    [anon_sym_COLON_SLASH] = ACTIONS(363),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(363),
    [anon_sym_COLON_LT] = ACTIONS(365),
    [anon_sym_COLON_LT_DASH] = ACTIONS(363),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(363),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(363),
    [anon_sym_COLON_LT_EQ] = ACTIONS(363),
    [anon_sym_COLON_LT_GT] = ACTIONS(363),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(363),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(365),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(363),
    [anon_sym_COLON_EQ] = ACTIONS(365),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(365),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(363),
    [anon_sym_COLON_EQ_GT] = ACTIONS(363),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(363),
    [anon_sym_COLON_GT] = ACTIONS(365),
    [anon_sym_COLON_GT_EQ] = ACTIONS(363),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(363),
    [anon_sym_COLON_AT] = ACTIONS(363),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(363),
    [anon_sym_COLON_CARET] = ACTIONS(363),
    [anon_sym_COLON_PIPE] = ACTIONS(365),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(363),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(365),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(363),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(365),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(363),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(363),
    [anon_sym_nil] = ACTIONS(363),
    [anon_sym_COLONnil] = ACTIONS(365),
    [anon_sym_SQUOTE] = ACTIONS(363),
    [anon_sym_LT_LT] = ACTIONS(363),
    [anon_sym_COMMA] = ACTIONS(363),
    [anon_sym_DQUOTE] = ACTIONS(363),
    [anon_sym_LBRACE] = ACTIONS(363),
    [anon_sym_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(363),
    [anon_sym_RBRACK] = ACTIONS(363),
    [anon_sym_PIPE] = ACTIONS(363),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(363),
    [anon_sym_EQ_GT] = ACTIONS(363),
    [anon_sym_PERCENT] = ACTIONS(365),
    [anon_sym_defmodule] = ACTIONS(363),
    [anon_sym_end] = ACTIONS(363),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(363),
    [anon_sym_defstruct] = ACTIONS(363),
    [sym_comment] = ACTIONS(43),
  },
  [80] = {
    [aux_sym_keyword_list_repeat1] = STATE(114),
    [anon_sym_COMMA] = ACTIONS(352),
    [anon_sym_RBRACK] = ACTIONS(354),
    [sym_comment] = ACTIONS(43),
  },
  [81] = {
    [anon_sym_COMMA] = ACTIONS(367),
    [anon_sym_RBRACK] = ACTIONS(369),
    [sym_comment] = ACTIONS(43),
  },
  [82] = {
    [sym__expression] = STATE(74),
    [sym__value] = STATE(74),
    [sym_true] = STATE(74),
    [sym_false] = STATE(74),
    [sym_atom] = STATE(74),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(80),
    [sym_nil] = STATE(74),
    [sym_charlist] = STATE(74),
    [sym_binary] = STATE(74),
    [sym_string] = STATE(74),
    [sym_tuple] = STATE(74),
    [sym__list_or_keyword_list] = STATE(74),
    [sym_list] = STATE(74),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(74),
    [sym__map] = STATE(74),
    [sym_map] = STATE(74),
    [sym_map_update] = STATE(74),
    [sym_struct] = STATE(74),
    [sym_implicit_keyword_list] = STATE(117),
    [sym_defmodule] = STATE(74),
    [sym_alias] = ACTIONS(273),
    [sym_integer] = ACTIONS(273),
    [sym_float] = ACTIONS(275),
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
    [anon_sym_RBRACK] = ACTIONS(369),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [83] = {
    [aux_sym_tuple_repeat1] = STATE(83),
    [anon_sym_COMMA] = ACTIONS(360),
    [anon_sym_RBRACK] = ACTIONS(350),
    [sym_comment] = ACTIONS(43),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(371),
    [sym_alias] = ACTIONS(371),
    [sym_integer] = ACTIONS(373),
    [sym_float] = ACTIONS(371),
    [anon_sym_true] = ACTIONS(371),
    [anon_sym_COLONtrue] = ACTIONS(373),
    [anon_sym_false] = ACTIONS(371),
    [anon_sym_COLONfalse] = ACTIONS(373),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(373),
    [anon_sym_COLON_BANG] = ACTIONS(373),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(373),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(371),
    [anon_sym_COLON_AMP] = ACTIONS(373),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(373),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(371),
    [anon_sym_COLON_STAR] = ACTIONS(371),
    [anon_sym_COLON_PLUS] = ACTIONS(373),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(371),
    [anon_sym_COLON_DASH] = ACTIONS(373),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(371),
    [anon_sym_COLON_DOT] = ACTIONS(373),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(371),
    [anon_sym_COLON_SLASH] = ACTIONS(371),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(371),
    [anon_sym_COLON_LT] = ACTIONS(373),
    [anon_sym_COLON_LT_DASH] = ACTIONS(371),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(371),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(371),
    [anon_sym_COLON_LT_EQ] = ACTIONS(371),
    [anon_sym_COLON_LT_GT] = ACTIONS(371),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(371),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(373),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(371),
    [anon_sym_COLON_EQ] = ACTIONS(373),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(373),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(371),
    [anon_sym_COLON_EQ_GT] = ACTIONS(371),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(371),
    [anon_sym_COLON_GT] = ACTIONS(373),
    [anon_sym_COLON_GT_EQ] = ACTIONS(371),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(371),
    [anon_sym_COLON_AT] = ACTIONS(371),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(371),
    [anon_sym_COLON_CARET] = ACTIONS(371),
    [anon_sym_COLON_PIPE] = ACTIONS(373),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(371),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(373),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(371),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(373),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(371),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(371),
    [anon_sym_nil] = ACTIONS(371),
    [anon_sym_COLONnil] = ACTIONS(373),
    [anon_sym_SQUOTE] = ACTIONS(371),
    [anon_sym_LT_LT] = ACTIONS(371),
    [anon_sym_COMMA] = ACTIONS(371),
    [anon_sym_DQUOTE] = ACTIONS(371),
    [anon_sym_LBRACE] = ACTIONS(371),
    [anon_sym_RBRACE] = ACTIONS(371),
    [anon_sym_LBRACK] = ACTIONS(371),
    [anon_sym_RBRACK] = ACTIONS(371),
    [anon_sym_PIPE] = ACTIONS(371),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(371),
    [anon_sym_EQ_GT] = ACTIONS(371),
    [anon_sym_PERCENT] = ACTIONS(373),
    [anon_sym_defmodule] = ACTIONS(371),
    [anon_sym_end] = ACTIONS(371),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(371),
    [anon_sym_defstruct] = ACTIONS(371),
    [sym_comment] = ACTIONS(43),
  },
  [85] = {
    [anon_sym_COMMA] = ACTIONS(375),
    [anon_sym_RBRACE] = ACTIONS(375),
    [anon_sym_RBRACK] = ACTIONS(375),
    [anon_sym_end] = ACTIONS(375),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(375),
    [anon_sym_defstruct] = ACTIONS(375),
    [sym_comment] = ACTIONS(43),
  },
  [86] = {
    [sym_keyword] = STATE(85),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(377),
    [sym_comment] = ACTIONS(43),
  },
  [87] = {
    [aux_sym_keyword_list_repeat1] = STATE(87),
    [anon_sym_COMMA] = ACTIONS(379),
    [anon_sym_RBRACK] = ACTIONS(375),
    [sym_comment] = ACTIONS(43),
  },
  [88] = {
    [anon_sym_RBRACK] = ACTIONS(382),
    [sym_comment] = ACTIONS(43),
  },
  [89] = {
    [anon_sym_RBRACK] = ACTIONS(384),
    [sym_comment] = ACTIONS(43),
  },
  [90] = {
    [anon_sym_EQ_GT] = ACTIONS(175),
    [sym_comment] = ACTIONS(43),
  },
  [91] = {
    [anon_sym_RBRACE] = ACTIONS(386),
    [sym_comment] = ACTIONS(43),
  },
  [92] = {
    [anon_sym_COMMA] = ACTIONS(388),
    [anon_sym_RBRACE] = ACTIONS(388),
    [sym_comment] = ACTIONS(43),
  },
  [93] = {
    [sym_keyword] = STATE(85),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(390),
    [sym_comment] = ACTIONS(43),
  },
  [94] = {
    [aux_sym_keyword_list_repeat1] = STATE(94),
    [anon_sym_COMMA] = ACTIONS(379),
    [anon_sym_RBRACE] = ACTIONS(375),
    [sym_comment] = ACTIONS(43),
  },
  [95] = {
    [anon_sym_COMMA] = ACTIONS(392),
    [anon_sym_RBRACE] = ACTIONS(392),
    [sym_comment] = ACTIONS(43),
  },
  [96] = {
    [sym__value] = STATE(90),
    [sym_true] = STATE(90),
    [sym_false] = STATE(90),
    [sym_atom] = STATE(90),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(85),
    [sym_nil] = STATE(90),
    [sym_charlist] = STATE(90),
    [sym_binary] = STATE(90),
    [sym_string] = STATE(90),
    [sym_tuple] = STATE(90),
    [sym__list_or_keyword_list] = STATE(90),
    [sym_list] = STATE(90),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(90),
    [sym__map] = STATE(90),
    [sym_map] = STATE(90),
    [sym_map_update] = STATE(90),
    [sym_pair] = STATE(95),
    [sym_struct] = STATE(90),
    [sym_defmodule] = STATE(90),
    [sym_alias] = ACTIONS(303),
    [sym_integer] = ACTIONS(303),
    [sym_float] = ACTIONS(305),
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
    [anon_sym_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [97] = {
    [aux_sym_keyword_list_repeat1] = STATE(94),
    [anon_sym_COMMA] = ACTIONS(394),
    [anon_sym_RBRACE] = ACTIONS(390),
    [sym_comment] = ACTIONS(43),
  },
  [98] = {
    [aux_sym__map_body_repeat1] = STATE(98),
    [anon_sym_COMMA] = ACTIONS(396),
    [anon_sym_RBRACE] = ACTIONS(392),
    [sym_comment] = ACTIONS(43),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(399),
    [sym_alias] = ACTIONS(399),
    [sym_integer] = ACTIONS(401),
    [sym_float] = ACTIONS(399),
    [anon_sym_true] = ACTIONS(399),
    [anon_sym_COLONtrue] = ACTIONS(401),
    [anon_sym_false] = ACTIONS(399),
    [anon_sym_COLONfalse] = ACTIONS(401),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(401),
    [anon_sym_COLON_BANG] = ACTIONS(401),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(401),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(399),
    [anon_sym_COLON_AMP] = ACTIONS(401),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(401),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(399),
    [anon_sym_COLON_STAR] = ACTIONS(399),
    [anon_sym_COLON_PLUS] = ACTIONS(401),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(399),
    [anon_sym_COLON_DASH] = ACTIONS(401),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(399),
    [anon_sym_COLON_DOT] = ACTIONS(401),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(399),
    [anon_sym_COLON_SLASH] = ACTIONS(399),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(399),
    [anon_sym_COLON_LT] = ACTIONS(401),
    [anon_sym_COLON_LT_DASH] = ACTIONS(399),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(399),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(399),
    [anon_sym_COLON_LT_EQ] = ACTIONS(399),
    [anon_sym_COLON_LT_GT] = ACTIONS(399),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(399),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(401),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(399),
    [anon_sym_COLON_EQ] = ACTIONS(401),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(401),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(399),
    [anon_sym_COLON_EQ_GT] = ACTIONS(399),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(399),
    [anon_sym_COLON_GT] = ACTIONS(401),
    [anon_sym_COLON_GT_EQ] = ACTIONS(399),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(399),
    [anon_sym_COLON_AT] = ACTIONS(399),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(399),
    [anon_sym_COLON_CARET] = ACTIONS(399),
    [anon_sym_COLON_PIPE] = ACTIONS(401),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(399),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(401),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(399),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(401),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(399),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(399),
    [anon_sym_nil] = ACTIONS(399),
    [anon_sym_COLONnil] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(399),
    [anon_sym_LT_LT] = ACTIONS(399),
    [anon_sym_COMMA] = ACTIONS(399),
    [anon_sym_DQUOTE] = ACTIONS(399),
    [anon_sym_LBRACE] = ACTIONS(399),
    [anon_sym_RBRACE] = ACTIONS(399),
    [anon_sym_LBRACK] = ACTIONS(399),
    [anon_sym_RBRACK] = ACTIONS(399),
    [anon_sym_PIPE] = ACTIONS(399),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(399),
    [anon_sym_EQ_GT] = ACTIONS(399),
    [anon_sym_PERCENT] = ACTIONS(401),
    [anon_sym_defmodule] = ACTIONS(399),
    [anon_sym_end] = ACTIONS(399),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(399),
    [anon_sym_defstruct] = ACTIONS(399),
    [sym_comment] = ACTIONS(43),
  },
  [100] = {
    [aux_sym_keyword_list_repeat1] = STATE(125),
    [anon_sym_COMMA] = ACTIONS(403),
    [anon_sym_RBRACE] = ACTIONS(405),
    [sym_comment] = ACTIONS(43),
  },
  [101] = {
    [aux_sym_keyword_list_repeat1] = STATE(128),
    [aux_sym__map_body_repeat1] = STATE(129),
    [anon_sym_COMMA] = ACTIONS(407),
    [anon_sym_RBRACE] = ACTIONS(409),
    [sym_comment] = ACTIONS(43),
  },
  [102] = {
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
    [anon_sym_defstruct] = ACTIONS(411),
    [sym_comment] = ACTIONS(43),
  },
  [103] = {
    [sym__value] = STATE(130),
    [sym_true] = STATE(130),
    [sym_false] = STATE(130),
    [sym_atom] = STATE(130),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(131),
    [sym_nil] = STATE(130),
    [sym_charlist] = STATE(130),
    [sym_binary] = STATE(130),
    [sym_string] = STATE(130),
    [sym_tuple] = STATE(130),
    [sym__list_or_keyword_list] = STATE(130),
    [sym_list] = STATE(130),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(130),
    [sym__map] = STATE(130),
    [sym_map] = STATE(130),
    [sym_map_update] = STATE(130),
    [sym_struct] = STATE(130),
    [sym_implicit_keyword_list] = STATE(130),
    [sym_defmodule] = STATE(130),
    [sym_alias] = ACTIONS(415),
    [sym_integer] = ACTIONS(415),
    [sym_float] = ACTIONS(417),
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
    [anon_sym_end] = ACTIONS(419),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(421),
    [anon_sym_defstruct] = ACTIONS(419),
    [sym_comment] = ACTIONS(43),
  },
  [104] = {
    [sym_keyword] = STATE(131),
    [sym_list] = STATE(133),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_implicit_keyword_list] = STATE(133),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(423),
    [sym_comment] = ACTIONS(43),
  },
  [105] = {
    [sym__module_body] = STATE(135),
    [sym_module_attribute] = STATE(135),
    [sym_defstruct] = STATE(135),
    [aux_sym_defmodule_repeat1] = STATE(135),
    [anon_sym_end] = ACTIONS(425),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(329),
    [anon_sym_defstruct] = ACTIONS(331),
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
    [anon_sym_defstruct] = ACTIONS(427),
    [sym_comment] = ACTIONS(43),
  },
  [107] = {
    [sym_charlist] = STATE(19),
    [sym_binary_segment] = STATE(70),
    [sym_string] = STATE(19),
    [sym_integer] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(43),
  },
  [108] = {
    [sym_keyword] = STATE(85),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [sym_comment] = ACTIONS(43),
  },
  [109] = {
    [aux_sym_keyword_list_repeat1] = STATE(94),
    [anon_sym_COMMA] = ACTIONS(352),
    [anon_sym_RBRACE] = ACTIONS(431),
    [sym_comment] = ACTIONS(43),
  },
  [110] = {
    [anon_sym_RBRACE] = ACTIONS(433),
    [sym_comment] = ACTIONS(43),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(435),
    [sym_alias] = ACTIONS(435),
    [sym_integer] = ACTIONS(437),
    [sym_float] = ACTIONS(435),
    [anon_sym_true] = ACTIONS(435),
    [anon_sym_COLONtrue] = ACTIONS(437),
    [anon_sym_false] = ACTIONS(435),
    [anon_sym_COLONfalse] = ACTIONS(437),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(437),
    [anon_sym_COLON_BANG] = ACTIONS(437),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(437),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(435),
    [anon_sym_COLON_AMP] = ACTIONS(437),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(437),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(435),
    [anon_sym_COLON_STAR] = ACTIONS(435),
    [anon_sym_COLON_PLUS] = ACTIONS(437),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(435),
    [anon_sym_COLON_DASH] = ACTIONS(437),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(435),
    [anon_sym_COLON_DOT] = ACTIONS(437),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(435),
    [anon_sym_COLON_SLASH] = ACTIONS(435),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(435),
    [anon_sym_COLON_LT] = ACTIONS(437),
    [anon_sym_COLON_LT_DASH] = ACTIONS(435),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(435),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(435),
    [anon_sym_COLON_LT_EQ] = ACTIONS(435),
    [anon_sym_COLON_LT_GT] = ACTIONS(435),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(435),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(437),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(435),
    [anon_sym_COLON_EQ] = ACTIONS(437),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(437),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(435),
    [anon_sym_COLON_EQ_GT] = ACTIONS(435),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(435),
    [anon_sym_COLON_GT] = ACTIONS(437),
    [anon_sym_COLON_GT_EQ] = ACTIONS(435),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(435),
    [anon_sym_COLON_AT] = ACTIONS(435),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(435),
    [anon_sym_COLON_CARET] = ACTIONS(435),
    [anon_sym_COLON_PIPE] = ACTIONS(437),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(435),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(437),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(435),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(437),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(435),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(435),
    [anon_sym_nil] = ACTIONS(435),
    [anon_sym_COLONnil] = ACTIONS(437),
    [anon_sym_SQUOTE] = ACTIONS(435),
    [anon_sym_LT_LT] = ACTIONS(435),
    [anon_sym_COMMA] = ACTIONS(435),
    [anon_sym_DQUOTE] = ACTIONS(435),
    [anon_sym_LBRACE] = ACTIONS(435),
    [anon_sym_RBRACE] = ACTIONS(435),
    [anon_sym_LBRACK] = ACTIONS(435),
    [anon_sym_RBRACK] = ACTIONS(435),
    [anon_sym_PIPE] = ACTIONS(435),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(435),
    [anon_sym_EQ_GT] = ACTIONS(435),
    [anon_sym_PERCENT] = ACTIONS(437),
    [anon_sym_defmodule] = ACTIONS(435),
    [anon_sym_end] = ACTIONS(435),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(435),
    [anon_sym_defstruct] = ACTIONS(435),
    [sym_comment] = ACTIONS(43),
  },
  [112] = {
    [anon_sym_COMMA] = ACTIONS(439),
    [anon_sym_RBRACE] = ACTIONS(433),
    [sym_comment] = ACTIONS(43),
  },
  [113] = {
    [sym__expression] = STATE(74),
    [sym__value] = STATE(74),
    [sym_true] = STATE(74),
    [sym_false] = STATE(74),
    [sym_atom] = STATE(74),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(74),
    [sym_charlist] = STATE(74),
    [sym_binary] = STATE(74),
    [sym_string] = STATE(74),
    [sym_tuple] = STATE(74),
    [sym__list_or_keyword_list] = STATE(74),
    [sym_list] = STATE(74),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(74),
    [sym__map] = STATE(74),
    [sym_map] = STATE(74),
    [sym_map_update] = STATE(74),
    [sym_struct] = STATE(74),
    [sym_defmodule] = STATE(74),
    [sym_alias] = ACTIONS(275),
    [sym_integer] = ACTIONS(273),
    [sym_float] = ACTIONS(275),
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
  [114] = {
    [aux_sym_keyword_list_repeat1] = STATE(87),
    [anon_sym_COMMA] = ACTIONS(352),
    [anon_sym_RBRACK] = ACTIONS(431),
    [sym_comment] = ACTIONS(43),
  },
  [115] = {
    [anon_sym_RBRACK] = ACTIONS(441),
    [sym_comment] = ACTIONS(43),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(443),
    [sym_alias] = ACTIONS(443),
    [sym_integer] = ACTIONS(445),
    [sym_float] = ACTIONS(443),
    [anon_sym_true] = ACTIONS(443),
    [anon_sym_COLONtrue] = ACTIONS(445),
    [anon_sym_false] = ACTIONS(443),
    [anon_sym_COLONfalse] = ACTIONS(445),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(445),
    [anon_sym_COLON_BANG] = ACTIONS(445),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(445),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(443),
    [anon_sym_COLON_AMP] = ACTIONS(445),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(445),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(443),
    [anon_sym_COLON_STAR] = ACTIONS(443),
    [anon_sym_COLON_PLUS] = ACTIONS(445),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(443),
    [anon_sym_COLON_DASH] = ACTIONS(445),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(443),
    [anon_sym_COLON_DOT] = ACTIONS(445),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(443),
    [anon_sym_COLON_SLASH] = ACTIONS(443),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(443),
    [anon_sym_COLON_LT] = ACTIONS(445),
    [anon_sym_COLON_LT_DASH] = ACTIONS(443),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(443),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(443),
    [anon_sym_COLON_LT_EQ] = ACTIONS(443),
    [anon_sym_COLON_LT_GT] = ACTIONS(443),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(443),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(445),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(443),
    [anon_sym_COLON_EQ] = ACTIONS(445),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(445),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(443),
    [anon_sym_COLON_EQ_GT] = ACTIONS(443),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(443),
    [anon_sym_COLON_GT] = ACTIONS(445),
    [anon_sym_COLON_GT_EQ] = ACTIONS(443),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(443),
    [anon_sym_COLON_AT] = ACTIONS(443),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(443),
    [anon_sym_COLON_CARET] = ACTIONS(443),
    [anon_sym_COLON_PIPE] = ACTIONS(445),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(443),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(445),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(443),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(445),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(443),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(443),
    [anon_sym_nil] = ACTIONS(443),
    [anon_sym_COLONnil] = ACTIONS(445),
    [anon_sym_SQUOTE] = ACTIONS(443),
    [anon_sym_LT_LT] = ACTIONS(443),
    [anon_sym_COMMA] = ACTIONS(443),
    [anon_sym_DQUOTE] = ACTIONS(443),
    [anon_sym_LBRACE] = ACTIONS(443),
    [anon_sym_RBRACE] = ACTIONS(443),
    [anon_sym_LBRACK] = ACTIONS(443),
    [anon_sym_RBRACK] = ACTIONS(443),
    [anon_sym_PIPE] = ACTIONS(443),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(443),
    [anon_sym_EQ_GT] = ACTIONS(443),
    [anon_sym_PERCENT] = ACTIONS(445),
    [anon_sym_defmodule] = ACTIONS(443),
    [anon_sym_end] = ACTIONS(443),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(443),
    [anon_sym_defstruct] = ACTIONS(443),
    [sym_comment] = ACTIONS(43),
  },
  [117] = {
    [anon_sym_COMMA] = ACTIONS(447),
    [anon_sym_RBRACK] = ACTIONS(441),
    [sym_comment] = ACTIONS(43),
  },
  [118] = {
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
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(453),
    [sym_alias] = ACTIONS(453),
    [sym_integer] = ACTIONS(455),
    [sym_float] = ACTIONS(453),
    [anon_sym_true] = ACTIONS(453),
    [anon_sym_COLONtrue] = ACTIONS(455),
    [anon_sym_false] = ACTIONS(453),
    [anon_sym_COLONfalse] = ACTIONS(455),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(455),
    [anon_sym_COLON_BANG] = ACTIONS(455),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(455),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(453),
    [anon_sym_COLON_AMP] = ACTIONS(455),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(455),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(453),
    [anon_sym_COLON_STAR] = ACTIONS(453),
    [anon_sym_COLON_PLUS] = ACTIONS(455),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(453),
    [anon_sym_COLON_DASH] = ACTIONS(455),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(453),
    [anon_sym_COLON_DOT] = ACTIONS(455),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(453),
    [anon_sym_COLON_SLASH] = ACTIONS(453),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(453),
    [anon_sym_COLON_LT] = ACTIONS(455),
    [anon_sym_COLON_LT_DASH] = ACTIONS(453),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(453),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(453),
    [anon_sym_COLON_LT_EQ] = ACTIONS(453),
    [anon_sym_COLON_LT_GT] = ACTIONS(453),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(453),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(455),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(453),
    [anon_sym_COLON_EQ] = ACTIONS(455),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(455),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(453),
    [anon_sym_COLON_EQ_GT] = ACTIONS(453),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(453),
    [anon_sym_COLON_GT] = ACTIONS(455),
    [anon_sym_COLON_GT_EQ] = ACTIONS(453),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(453),
    [anon_sym_COLON_AT] = ACTIONS(453),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(453),
    [anon_sym_COLON_CARET] = ACTIONS(453),
    [anon_sym_COLON_PIPE] = ACTIONS(455),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(453),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(455),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(453),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(455),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(453),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(453),
    [anon_sym_nil] = ACTIONS(453),
    [anon_sym_COLONnil] = ACTIONS(455),
    [anon_sym_SQUOTE] = ACTIONS(453),
    [anon_sym_LT_LT] = ACTIONS(453),
    [anon_sym_COMMA] = ACTIONS(453),
    [anon_sym_DQUOTE] = ACTIONS(453),
    [anon_sym_LBRACE] = ACTIONS(453),
    [anon_sym_RBRACE] = ACTIONS(453),
    [anon_sym_LBRACK] = ACTIONS(453),
    [anon_sym_RBRACK] = ACTIONS(453),
    [anon_sym_PIPE] = ACTIONS(453),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(453),
    [anon_sym_EQ_GT] = ACTIONS(453),
    [anon_sym_PERCENT] = ACTIONS(455),
    [anon_sym_defmodule] = ACTIONS(453),
    [anon_sym_end] = ACTIONS(453),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(453),
    [anon_sym_defstruct] = ACTIONS(453),
    [sym_comment] = ACTIONS(43),
  },
  [120] = {
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
  [121] = {
    [sym_keyword] = STATE(85),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(461),
    [sym_comment] = ACTIONS(43),
  },
  [122] = {
    [sym__value] = STATE(90),
    [sym_true] = STATE(90),
    [sym_false] = STATE(90),
    [sym_atom] = STATE(90),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(90),
    [sym_charlist] = STATE(90),
    [sym_binary] = STATE(90),
    [sym_string] = STATE(90),
    [sym_tuple] = STATE(90),
    [sym__list_or_keyword_list] = STATE(90),
    [sym_list] = STATE(90),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(90),
    [sym__map] = STATE(90),
    [sym_map] = STATE(90),
    [sym_map_update] = STATE(90),
    [sym_pair] = STATE(95),
    [sym_struct] = STATE(90),
    [sym_defmodule] = STATE(90),
    [sym_alias] = ACTIONS(305),
    [sym_integer] = ACTIONS(303),
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
  [123] = {
    [sym_keyword] = STATE(85),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(463),
    [sym_comment] = ACTIONS(43),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(465),
    [sym_alias] = ACTIONS(465),
    [sym_integer] = ACTIONS(467),
    [sym_float] = ACTIONS(465),
    [anon_sym_true] = ACTIONS(465),
    [anon_sym_COLONtrue] = ACTIONS(467),
    [anon_sym_false] = ACTIONS(465),
    [anon_sym_COLONfalse] = ACTIONS(467),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(467),
    [anon_sym_COLON_BANG] = ACTIONS(467),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(467),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(465),
    [anon_sym_COLON_AMP] = ACTIONS(467),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(467),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(465),
    [anon_sym_COLON_STAR] = ACTIONS(465),
    [anon_sym_COLON_PLUS] = ACTIONS(467),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(465),
    [anon_sym_COLON_DASH] = ACTIONS(467),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(465),
    [anon_sym_COLON_DOT] = ACTIONS(467),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(465),
    [anon_sym_COLON_SLASH] = ACTIONS(465),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(465),
    [anon_sym_COLON_LT] = ACTIONS(467),
    [anon_sym_COLON_LT_DASH] = ACTIONS(465),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(465),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(465),
    [anon_sym_COLON_LT_EQ] = ACTIONS(465),
    [anon_sym_COLON_LT_GT] = ACTIONS(465),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(465),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(467),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(465),
    [anon_sym_COLON_EQ] = ACTIONS(467),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(467),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(465),
    [anon_sym_COLON_EQ_GT] = ACTIONS(465),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(465),
    [anon_sym_COLON_GT] = ACTIONS(467),
    [anon_sym_COLON_GT_EQ] = ACTIONS(465),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(465),
    [anon_sym_COLON_AT] = ACTIONS(465),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(465),
    [anon_sym_COLON_CARET] = ACTIONS(465),
    [anon_sym_COLON_PIPE] = ACTIONS(467),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(465),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(467),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(465),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(467),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(465),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(465),
    [anon_sym_nil] = ACTIONS(465),
    [anon_sym_COLONnil] = ACTIONS(467),
    [anon_sym_SQUOTE] = ACTIONS(465),
    [anon_sym_LT_LT] = ACTIONS(465),
    [anon_sym_COMMA] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(465),
    [anon_sym_LBRACE] = ACTIONS(465),
    [anon_sym_RBRACE] = ACTIONS(465),
    [anon_sym_LBRACK] = ACTIONS(465),
    [anon_sym_RBRACK] = ACTIONS(465),
    [anon_sym_PIPE] = ACTIONS(465),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(465),
    [anon_sym_EQ_GT] = ACTIONS(465),
    [anon_sym_PERCENT] = ACTIONS(467),
    [anon_sym_defmodule] = ACTIONS(465),
    [anon_sym_end] = ACTIONS(465),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(465),
    [anon_sym_defstruct] = ACTIONS(465),
    [sym_comment] = ACTIONS(43),
  },
  [125] = {
    [aux_sym_keyword_list_repeat1] = STATE(94),
    [anon_sym_COMMA] = ACTIONS(469),
    [anon_sym_RBRACE] = ACTIONS(463),
    [sym_comment] = ACTIONS(43),
  },
  [126] = {
    [sym__value] = STATE(90),
    [sym_true] = STATE(90),
    [sym_false] = STATE(90),
    [sym_atom] = STATE(90),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(85),
    [sym_nil] = STATE(90),
    [sym_charlist] = STATE(90),
    [sym_binary] = STATE(90),
    [sym_string] = STATE(90),
    [sym_tuple] = STATE(90),
    [sym__list_or_keyword_list] = STATE(90),
    [sym_list] = STATE(90),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(90),
    [sym__map] = STATE(90),
    [sym_map] = STATE(90),
    [sym_map_update] = STATE(90),
    [sym_pair] = STATE(95),
    [sym_struct] = STATE(90),
    [sym_defmodule] = STATE(90),
    [sym_alias] = ACTIONS(303),
    [sym_integer] = ACTIONS(303),
    [sym_float] = ACTIONS(305),
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
    [anon_sym_RBRACE] = ACTIONS(471),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(473),
    [sym_alias] = ACTIONS(473),
    [sym_integer] = ACTIONS(475),
    [sym_float] = ACTIONS(473),
    [anon_sym_true] = ACTIONS(473),
    [anon_sym_COLONtrue] = ACTIONS(475),
    [anon_sym_false] = ACTIONS(473),
    [anon_sym_COLONfalse] = ACTIONS(475),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(475),
    [anon_sym_COLON_BANG] = ACTIONS(475),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(475),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(473),
    [anon_sym_COLON_AMP] = ACTIONS(475),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(475),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(473),
    [anon_sym_COLON_STAR] = ACTIONS(473),
    [anon_sym_COLON_PLUS] = ACTIONS(475),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(473),
    [anon_sym_COLON_DASH] = ACTIONS(475),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(473),
    [anon_sym_COLON_DOT] = ACTIONS(475),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(473),
    [anon_sym_COLON_SLASH] = ACTIONS(473),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(473),
    [anon_sym_COLON_LT] = ACTIONS(475),
    [anon_sym_COLON_LT_DASH] = ACTIONS(473),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(473),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(473),
    [anon_sym_COLON_LT_EQ] = ACTIONS(473),
    [anon_sym_COLON_LT_GT] = ACTIONS(473),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(473),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(475),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(473),
    [anon_sym_COLON_EQ] = ACTIONS(475),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(475),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(473),
    [anon_sym_COLON_EQ_GT] = ACTIONS(473),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(473),
    [anon_sym_COLON_GT] = ACTIONS(475),
    [anon_sym_COLON_GT_EQ] = ACTIONS(473),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(473),
    [anon_sym_COLON_AT] = ACTIONS(473),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(473),
    [anon_sym_COLON_CARET] = ACTIONS(473),
    [anon_sym_COLON_PIPE] = ACTIONS(475),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(473),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(475),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(473),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(475),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(473),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(473),
    [anon_sym_nil] = ACTIONS(473),
    [anon_sym_COLONnil] = ACTIONS(475),
    [anon_sym_SQUOTE] = ACTIONS(473),
    [anon_sym_LT_LT] = ACTIONS(473),
    [anon_sym_COMMA] = ACTIONS(473),
    [anon_sym_DQUOTE] = ACTIONS(473),
    [anon_sym_LBRACE] = ACTIONS(473),
    [anon_sym_RBRACE] = ACTIONS(473),
    [anon_sym_LBRACK] = ACTIONS(473),
    [anon_sym_RBRACK] = ACTIONS(473),
    [anon_sym_PIPE] = ACTIONS(473),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(473),
    [anon_sym_EQ_GT] = ACTIONS(473),
    [anon_sym_PERCENT] = ACTIONS(475),
    [anon_sym_defmodule] = ACTIONS(473),
    [anon_sym_end] = ACTIONS(473),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(473),
    [anon_sym_defstruct] = ACTIONS(473),
    [sym_comment] = ACTIONS(43),
  },
  [128] = {
    [aux_sym_keyword_list_repeat1] = STATE(94),
    [anon_sym_COMMA] = ACTIONS(477),
    [anon_sym_RBRACE] = ACTIONS(471),
    [sym_comment] = ACTIONS(43),
  },
  [129] = {
    [aux_sym_keyword_list_repeat1] = STATE(145),
    [aux_sym__map_body_repeat1] = STATE(98),
    [anon_sym_COMMA] = ACTIONS(479),
    [anon_sym_RBRACE] = ACTIONS(471),
    [sym_comment] = ACTIONS(43),
  },
  [130] = {
    [anon_sym_end] = ACTIONS(481),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(481),
    [anon_sym_defstruct] = ACTIONS(481),
    [sym_comment] = ACTIONS(43),
  },
  [131] = {
    [aux_sym_keyword_list_repeat1] = STATE(146),
    [anon_sym_COMMA] = ACTIONS(352),
    [anon_sym_end] = ACTIONS(354),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(354),
    [anon_sym_defstruct] = ACTIONS(354),
    [sym_comment] = ACTIONS(43),
  },
  [132] = {
    [sym__expression] = STATE(28),
    [sym__value] = STATE(28),
    [sym_true] = STATE(28),
    [sym_false] = STATE(28),
    [sym_atom] = STATE(28),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(28),
    [sym_charlist] = STATE(28),
    [sym_binary] = STATE(28),
    [sym_string] = STATE(28),
    [sym_tuple] = STATE(28),
    [sym__list_or_keyword_list] = STATE(28),
    [sym_list] = STATE(28),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_head] = STATE(30),
    [sym_keyword_list] = STATE(28),
    [sym__map] = STATE(28),
    [sym_map] = STATE(28),
    [sym_map_update] = STATE(28),
    [sym_struct] = STATE(28),
    [sym_defmodule] = STATE(28),
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
  [133] = {
    [anon_sym_end] = ACTIONS(483),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(483),
    [anon_sym_defstruct] = ACTIONS(483),
    [sym_comment] = ACTIONS(43),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(485),
    [sym_alias] = ACTIONS(485),
    [sym_integer] = ACTIONS(487),
    [sym_float] = ACTIONS(485),
    [anon_sym_true] = ACTIONS(485),
    [anon_sym_COLONtrue] = ACTIONS(487),
    [anon_sym_false] = ACTIONS(485),
    [anon_sym_COLONfalse] = ACTIONS(487),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(487),
    [anon_sym_COLON_BANG] = ACTIONS(487),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(487),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(485),
    [anon_sym_COLON_AMP] = ACTIONS(487),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(487),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(485),
    [anon_sym_COLON_STAR] = ACTIONS(485),
    [anon_sym_COLON_PLUS] = ACTIONS(487),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(485),
    [anon_sym_COLON_DASH] = ACTIONS(487),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(485),
    [anon_sym_COLON_DOT] = ACTIONS(487),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(485),
    [anon_sym_COLON_SLASH] = ACTIONS(485),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(485),
    [anon_sym_COLON_LT] = ACTIONS(487),
    [anon_sym_COLON_LT_DASH] = ACTIONS(485),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(485),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(485),
    [anon_sym_COLON_LT_EQ] = ACTIONS(485),
    [anon_sym_COLON_LT_GT] = ACTIONS(485),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(485),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(487),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(485),
    [anon_sym_COLON_EQ] = ACTIONS(487),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(487),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(485),
    [anon_sym_COLON_EQ_GT] = ACTIONS(485),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(485),
    [anon_sym_COLON_GT] = ACTIONS(487),
    [anon_sym_COLON_GT_EQ] = ACTIONS(485),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(485),
    [anon_sym_COLON_AT] = ACTIONS(485),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(485),
    [anon_sym_COLON_CARET] = ACTIONS(485),
    [anon_sym_COLON_PIPE] = ACTIONS(487),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(485),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(485),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(487),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(485),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(485),
    [anon_sym_nil] = ACTIONS(485),
    [anon_sym_COLONnil] = ACTIONS(487),
    [anon_sym_SQUOTE] = ACTIONS(485),
    [anon_sym_LT_LT] = ACTIONS(485),
    [anon_sym_COMMA] = ACTIONS(485),
    [anon_sym_DQUOTE] = ACTIONS(485),
    [anon_sym_LBRACE] = ACTIONS(485),
    [anon_sym_RBRACE] = ACTIONS(485),
    [anon_sym_LBRACK] = ACTIONS(485),
    [anon_sym_RBRACK] = ACTIONS(485),
    [anon_sym_PIPE] = ACTIONS(485),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(485),
    [anon_sym_EQ_GT] = ACTIONS(485),
    [anon_sym_PERCENT] = ACTIONS(487),
    [anon_sym_defmodule] = ACTIONS(485),
    [anon_sym_end] = ACTIONS(485),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(485),
    [anon_sym_defstruct] = ACTIONS(485),
    [sym_comment] = ACTIONS(43),
  },
  [135] = {
    [sym__module_body] = STATE(135),
    [sym_module_attribute] = STATE(135),
    [sym_defstruct] = STATE(135),
    [aux_sym_defmodule_repeat1] = STATE(135),
    [anon_sym_end] = ACTIONS(489),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(491),
    [anon_sym_defstruct] = ACTIONS(494),
    [sym_comment] = ACTIONS(43),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(497),
    [sym_alias] = ACTIONS(497),
    [sym_integer] = ACTIONS(499),
    [sym_float] = ACTIONS(497),
    [anon_sym_true] = ACTIONS(497),
    [anon_sym_COLONtrue] = ACTIONS(499),
    [anon_sym_false] = ACTIONS(497),
    [anon_sym_COLONfalse] = ACTIONS(499),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(499),
    [anon_sym_COLON_BANG] = ACTIONS(499),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(499),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(497),
    [anon_sym_COLON_AMP] = ACTIONS(499),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(499),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(497),
    [anon_sym_COLON_STAR] = ACTIONS(497),
    [anon_sym_COLON_PLUS] = ACTIONS(499),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(497),
    [anon_sym_COLON_DASH] = ACTIONS(499),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(497),
    [anon_sym_COLON_DOT] = ACTIONS(499),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(497),
    [anon_sym_COLON_SLASH] = ACTIONS(497),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(497),
    [anon_sym_COLON_LT] = ACTIONS(499),
    [anon_sym_COLON_LT_DASH] = ACTIONS(497),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(497),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(497),
    [anon_sym_COLON_LT_EQ] = ACTIONS(497),
    [anon_sym_COLON_LT_GT] = ACTIONS(497),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(497),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(499),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(497),
    [anon_sym_COLON_EQ] = ACTIONS(499),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(499),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(497),
    [anon_sym_COLON_EQ_GT] = ACTIONS(497),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(497),
    [anon_sym_COLON_GT] = ACTIONS(499),
    [anon_sym_COLON_GT_EQ] = ACTIONS(497),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(497),
    [anon_sym_COLON_AT] = ACTIONS(497),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(497),
    [anon_sym_COLON_CARET] = ACTIONS(497),
    [anon_sym_COLON_PIPE] = ACTIONS(499),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(497),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(499),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(497),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(499),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(497),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(497),
    [anon_sym_nil] = ACTIONS(497),
    [anon_sym_COLONnil] = ACTIONS(499),
    [anon_sym_SQUOTE] = ACTIONS(497),
    [anon_sym_LT_LT] = ACTIONS(497),
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_RBRACE] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(497),
    [anon_sym_RBRACK] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(497),
    [anon_sym_EQ_GT] = ACTIONS(497),
    [anon_sym_PERCENT] = ACTIONS(499),
    [anon_sym_defmodule] = ACTIONS(497),
    [anon_sym_end] = ACTIONS(497),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(497),
    [anon_sym_defstruct] = ACTIONS(497),
    [sym_comment] = ACTIONS(43),
  },
  [137] = {
    [anon_sym_RBRACE] = ACTIONS(501),
    [sym_comment] = ACTIONS(43),
  },
  [138] = {
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
  [139] = {
    [anon_sym_RBRACK] = ACTIONS(507),
    [sym_comment] = ACTIONS(43),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(509),
    [sym_alias] = ACTIONS(509),
    [sym_integer] = ACTIONS(511),
    [sym_float] = ACTIONS(509),
    [anon_sym_true] = ACTIONS(509),
    [anon_sym_COLONtrue] = ACTIONS(511),
    [anon_sym_false] = ACTIONS(509),
    [anon_sym_COLONfalse] = ACTIONS(511),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(511),
    [anon_sym_COLON_BANG] = ACTIONS(511),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(511),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(509),
    [anon_sym_COLON_AMP] = ACTIONS(511),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(511),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(509),
    [anon_sym_COLON_STAR] = ACTIONS(509),
    [anon_sym_COLON_PLUS] = ACTIONS(511),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(509),
    [anon_sym_COLON_DASH] = ACTIONS(511),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(509),
    [anon_sym_COLON_DOT] = ACTIONS(511),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(509),
    [anon_sym_COLON_SLASH] = ACTIONS(509),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(509),
    [anon_sym_COLON_LT] = ACTIONS(511),
    [anon_sym_COLON_LT_DASH] = ACTIONS(509),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(509),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(509),
    [anon_sym_COLON_LT_EQ] = ACTIONS(509),
    [anon_sym_COLON_LT_GT] = ACTIONS(509),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(509),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(511),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(509),
    [anon_sym_COLON_EQ] = ACTIONS(511),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(511),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(509),
    [anon_sym_COLON_EQ_GT] = ACTIONS(509),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(509),
    [anon_sym_COLON_GT] = ACTIONS(511),
    [anon_sym_COLON_GT_EQ] = ACTIONS(509),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(509),
    [anon_sym_COLON_AT] = ACTIONS(509),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(509),
    [anon_sym_COLON_CARET] = ACTIONS(509),
    [anon_sym_COLON_PIPE] = ACTIONS(511),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(509),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(511),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(509),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(511),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(509),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(509),
    [anon_sym_nil] = ACTIONS(509),
    [anon_sym_COLONnil] = ACTIONS(511),
    [anon_sym_SQUOTE] = ACTIONS(509),
    [anon_sym_LT_LT] = ACTIONS(509),
    [anon_sym_COMMA] = ACTIONS(509),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_LBRACE] = ACTIONS(509),
    [anon_sym_RBRACE] = ACTIONS(509),
    [anon_sym_LBRACK] = ACTIONS(509),
    [anon_sym_RBRACK] = ACTIONS(509),
    [anon_sym_PIPE] = ACTIONS(509),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(509),
    [anon_sym_EQ_GT] = ACTIONS(509),
    [anon_sym_PERCENT] = ACTIONS(511),
    [anon_sym_defmodule] = ACTIONS(509),
    [anon_sym_end] = ACTIONS(509),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(509),
    [anon_sym_defstruct] = ACTIONS(509),
    [sym_comment] = ACTIONS(43),
  },
  [141] = {
    [sym_keyword] = STATE(85),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(513),
    [sym_comment] = ACTIONS(43),
  },
  [142] = {
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
  [143] = {
    [sym_keyword] = STATE(85),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(519),
    [sym_comment] = ACTIONS(43),
  },
  [144] = {
    [sym__value] = STATE(90),
    [sym_true] = STATE(90),
    [sym_false] = STATE(90),
    [sym_atom] = STATE(90),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(85),
    [sym_nil] = STATE(90),
    [sym_charlist] = STATE(90),
    [sym_binary] = STATE(90),
    [sym_string] = STATE(90),
    [sym_tuple] = STATE(90),
    [sym__list_or_keyword_list] = STATE(90),
    [sym_list] = STATE(90),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(90),
    [sym__map] = STATE(90),
    [sym_map] = STATE(90),
    [sym_map_update] = STATE(90),
    [sym_pair] = STATE(95),
    [sym_struct] = STATE(90),
    [sym_defmodule] = STATE(90),
    [sym_alias] = ACTIONS(303),
    [sym_integer] = ACTIONS(303),
    [sym_float] = ACTIONS(305),
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
    [anon_sym_RBRACE] = ACTIONS(519),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [145] = {
    [aux_sym_keyword_list_repeat1] = STATE(94),
    [anon_sym_COMMA] = ACTIONS(521),
    [anon_sym_RBRACE] = ACTIONS(519),
    [sym_comment] = ACTIONS(43),
  },
  [146] = {
    [aux_sym_keyword_list_repeat1] = STATE(152),
    [anon_sym_COMMA] = ACTIONS(352),
    [anon_sym_end] = ACTIONS(431),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(431),
    [anon_sym_defstruct] = ACTIONS(431),
    [sym_comment] = ACTIONS(43),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(523),
    [sym_alias] = ACTIONS(523),
    [sym_integer] = ACTIONS(525),
    [sym_float] = ACTIONS(523),
    [anon_sym_true] = ACTIONS(523),
    [anon_sym_COLONtrue] = ACTIONS(525),
    [anon_sym_false] = ACTIONS(523),
    [anon_sym_COLONfalse] = ACTIONS(525),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(525),
    [anon_sym_COLON_BANG] = ACTIONS(525),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(525),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(523),
    [anon_sym_COLON_AMP] = ACTIONS(525),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(525),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(523),
    [anon_sym_COLON_STAR] = ACTIONS(523),
    [anon_sym_COLON_PLUS] = ACTIONS(525),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(523),
    [anon_sym_COLON_DASH] = ACTIONS(525),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(523),
    [anon_sym_COLON_DOT] = ACTIONS(525),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(523),
    [anon_sym_COLON_SLASH] = ACTIONS(523),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(523),
    [anon_sym_COLON_LT] = ACTIONS(525),
    [anon_sym_COLON_LT_DASH] = ACTIONS(523),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(523),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(523),
    [anon_sym_COLON_LT_EQ] = ACTIONS(523),
    [anon_sym_COLON_LT_GT] = ACTIONS(523),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(523),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(525),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(523),
    [anon_sym_COLON_EQ] = ACTIONS(525),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(525),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(523),
    [anon_sym_COLON_EQ_GT] = ACTIONS(523),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(523),
    [anon_sym_COLON_GT] = ACTIONS(525),
    [anon_sym_COLON_GT_EQ] = ACTIONS(523),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(523),
    [anon_sym_COLON_AT] = ACTIONS(523),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(523),
    [anon_sym_COLON_CARET] = ACTIONS(523),
    [anon_sym_COLON_PIPE] = ACTIONS(525),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(523),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(525),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(523),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(525),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(523),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(523),
    [anon_sym_nil] = ACTIONS(523),
    [anon_sym_COLONnil] = ACTIONS(525),
    [anon_sym_SQUOTE] = ACTIONS(523),
    [anon_sym_LT_LT] = ACTIONS(523),
    [anon_sym_COMMA] = ACTIONS(523),
    [anon_sym_DQUOTE] = ACTIONS(523),
    [anon_sym_LBRACE] = ACTIONS(523),
    [anon_sym_RBRACE] = ACTIONS(523),
    [anon_sym_LBRACK] = ACTIONS(523),
    [anon_sym_RBRACK] = ACTIONS(523),
    [anon_sym_PIPE] = ACTIONS(523),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(523),
    [anon_sym_EQ_GT] = ACTIONS(523),
    [anon_sym_PERCENT] = ACTIONS(525),
    [anon_sym_defmodule] = ACTIONS(523),
    [anon_sym_end] = ACTIONS(523),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(523),
    [anon_sym_defstruct] = ACTIONS(523),
    [sym_comment] = ACTIONS(43),
  },
  [148] = {
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
  [149] = {
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
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(535),
    [sym_alias] = ACTIONS(535),
    [sym_integer] = ACTIONS(537),
    [sym_float] = ACTIONS(535),
    [anon_sym_true] = ACTIONS(535),
    [anon_sym_COLONtrue] = ACTIONS(537),
    [anon_sym_false] = ACTIONS(535),
    [anon_sym_COLONfalse] = ACTIONS(537),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(537),
    [anon_sym_COLON_BANG] = ACTIONS(537),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(537),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(535),
    [anon_sym_COLON_AMP] = ACTIONS(537),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(537),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(535),
    [anon_sym_COLON_STAR] = ACTIONS(535),
    [anon_sym_COLON_PLUS] = ACTIONS(537),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(535),
    [anon_sym_COLON_DASH] = ACTIONS(537),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(535),
    [anon_sym_COLON_DOT] = ACTIONS(537),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(535),
    [anon_sym_COLON_SLASH] = ACTIONS(535),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(535),
    [anon_sym_COLON_LT] = ACTIONS(537),
    [anon_sym_COLON_LT_DASH] = ACTIONS(535),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(535),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(535),
    [anon_sym_COLON_LT_EQ] = ACTIONS(535),
    [anon_sym_COLON_LT_GT] = ACTIONS(535),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(535),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(537),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(535),
    [anon_sym_COLON_EQ] = ACTIONS(537),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(537),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(535),
    [anon_sym_COLON_EQ_GT] = ACTIONS(535),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(535),
    [anon_sym_COLON_GT] = ACTIONS(537),
    [anon_sym_COLON_GT_EQ] = ACTIONS(535),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(535),
    [anon_sym_COLON_AT] = ACTIONS(535),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(535),
    [anon_sym_COLON_CARET] = ACTIONS(535),
    [anon_sym_COLON_PIPE] = ACTIONS(537),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(535),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(537),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(535),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(537),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(535),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(535),
    [anon_sym_nil] = ACTIONS(535),
    [anon_sym_COLONnil] = ACTIONS(537),
    [anon_sym_SQUOTE] = ACTIONS(535),
    [anon_sym_LT_LT] = ACTIONS(535),
    [anon_sym_COMMA] = ACTIONS(535),
    [anon_sym_DQUOTE] = ACTIONS(535),
    [anon_sym_LBRACE] = ACTIONS(535),
    [anon_sym_RBRACE] = ACTIONS(535),
    [anon_sym_LBRACK] = ACTIONS(535),
    [anon_sym_RBRACK] = ACTIONS(535),
    [anon_sym_PIPE] = ACTIONS(535),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(535),
    [anon_sym_EQ_GT] = ACTIONS(535),
    [anon_sym_PERCENT] = ACTIONS(537),
    [anon_sym_defmodule] = ACTIONS(535),
    [anon_sym_end] = ACTIONS(535),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(535),
    [anon_sym_defstruct] = ACTIONS(535),
    [sym_comment] = ACTIONS(43),
  },
  [151] = {
    [sym_keyword] = STATE(85),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(539),
    [sym_comment] = ACTIONS(43),
  },
  [152] = {
    [aux_sym_keyword_list_repeat1] = STATE(152),
    [anon_sym_COMMA] = ACTIONS(379),
    [anon_sym_end] = ACTIONS(375),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(375),
    [anon_sym_defstruct] = ACTIONS(375),
    [sym_comment] = ACTIONS(43),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(541),
    [sym_alias] = ACTIONS(541),
    [sym_integer] = ACTIONS(543),
    [sym_float] = ACTIONS(541),
    [anon_sym_true] = ACTIONS(541),
    [anon_sym_COLONtrue] = ACTIONS(543),
    [anon_sym_false] = ACTIONS(541),
    [anon_sym_COLONfalse] = ACTIONS(543),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(543),
    [anon_sym_COLON_BANG] = ACTIONS(543),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(543),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(541),
    [anon_sym_COLON_AMP] = ACTIONS(543),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(543),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(541),
    [anon_sym_COLON_STAR] = ACTIONS(541),
    [anon_sym_COLON_PLUS] = ACTIONS(543),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(541),
    [anon_sym_COLON_DASH] = ACTIONS(543),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(541),
    [anon_sym_COLON_DOT] = ACTIONS(543),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(541),
    [anon_sym_COLON_SLASH] = ACTIONS(541),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(541),
    [anon_sym_COLON_LT] = ACTIONS(543),
    [anon_sym_COLON_LT_DASH] = ACTIONS(541),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(541),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(541),
    [anon_sym_COLON_LT_EQ] = ACTIONS(541),
    [anon_sym_COLON_LT_GT] = ACTIONS(541),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(541),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(543),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(541),
    [anon_sym_COLON_EQ] = ACTIONS(543),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(543),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(541),
    [anon_sym_COLON_EQ_GT] = ACTIONS(541),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(541),
    [anon_sym_COLON_GT] = ACTIONS(543),
    [anon_sym_COLON_GT_EQ] = ACTIONS(541),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(541),
    [anon_sym_COLON_AT] = ACTIONS(541),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(541),
    [anon_sym_COLON_CARET] = ACTIONS(541),
    [anon_sym_COLON_PIPE] = ACTIONS(543),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(541),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(543),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(541),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(543),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(541),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(541),
    [anon_sym_nil] = ACTIONS(541),
    [anon_sym_COLONnil] = ACTIONS(543),
    [anon_sym_SQUOTE] = ACTIONS(541),
    [anon_sym_LT_LT] = ACTIONS(541),
    [anon_sym_COMMA] = ACTIONS(541),
    [anon_sym_DQUOTE] = ACTIONS(541),
    [anon_sym_LBRACE] = ACTIONS(541),
    [anon_sym_RBRACE] = ACTIONS(541),
    [anon_sym_LBRACK] = ACTIONS(541),
    [anon_sym_RBRACK] = ACTIONS(541),
    [anon_sym_PIPE] = ACTIONS(541),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(541),
    [anon_sym_EQ_GT] = ACTIONS(541),
    [anon_sym_PERCENT] = ACTIONS(543),
    [anon_sym_defmodule] = ACTIONS(541),
    [anon_sym_end] = ACTIONS(541),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(541),
    [anon_sym_defstruct] = ACTIONS(541),
    [sym_comment] = ACTIONS(43),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(16),
  [9] = {.count = 1, .reusable = false}, SHIFT(16),
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
  [61] = {.count = 1, .reusable = false}, SHIFT(17),
  [63] = {.count = 1, .reusable = false}, SHIFT(18),
  [65] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [67] = {.count = 1, .reusable = true}, SHIFT(19),
  [69] = {.count = 1, .reusable = true}, SHIFT(20),
  [71] = {.count = 1, .reusable = false}, SHIFT(22),
  [73] = {.count = 1, .reusable = false}, SHIFT(23),
  [75] = {.count = 1, .reusable = true}, SHIFT(25),
  [77] = {.count = 1, .reusable = false}, SHIFT(25),
  [79] = {.count = 1, .reusable = true}, SHIFT(24),
  [81] = {.count = 1, .reusable = false}, SHIFT(28),
  [83] = {.count = 1, .reusable = true}, SHIFT(28),
  [85] = {.count = 1, .reusable = true}, SHIFT(26),
  [87] = {.count = 1, .reusable = true}, SHIFT(27),
  [89] = {.count = 1, .reusable = false}, SHIFT(13),
  [91] = {.count = 1, .reusable = false}, SHIFT(32),
  [93] = {.count = 1, .reusable = true}, SHIFT(32),
  [95] = {.count = 1, .reusable = true}, SHIFT(31),
  [97] = {.count = 1, .reusable = true}, SHIFT(36),
  [99] = {.count = 1, .reusable = true}, SHIFT(37),
  [101] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_list, 1),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_list, 1),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [109] = {.count = 1, .reusable = true}, SHIFT(38),
  [111] = {.count = 1, .reusable = false}, SHIFT(38),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_charlist, 2),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_charlist, 2),
  [117] = {.count = 1, .reusable = false}, SHIFT(39),
  [119] = {.count = 1, .reusable = false}, SHIFT(40),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_binary_segment, 1),
  [123] = {.count = 1, .reusable = true}, SHIFT(41),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 2),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 2),
  [129] = {.count = 1, .reusable = true}, SHIFT(42),
  [131] = {.count = 1, .reusable = true}, SHIFT(43),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [137] = {.count = 1, .reusable = false}, SHIFT(45),
  [139] = {.count = 1, .reusable = false}, SHIFT(46),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 2),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 2),
  [145] = {.count = 1, .reusable = true}, SHIFT(47),
  [147] = {.count = 1, .reusable = true}, SHIFT(48),
  [149] = {.count = 1, .reusable = true}, SHIFT(50),
  [151] = {.count = 1, .reusable = false}, SHIFT(50),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym__empty_list, 2),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym__empty_list, 2),
  [157] = {.count = 1, .reusable = true}, SHIFT(51),
  [159] = {.count = 1, .reusable = true}, SHIFT(52),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_head, 1),
  [163] = {.count = 1, .reusable = true}, SHIFT(54),
  [165] = {.count = 1, .reusable = true}, SHIFT(55),
  [167] = {.count = 1, .reusable = true}, SHIFT(57),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_map, 2),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym_map, 2),
  [173] = {.count = 1, .reusable = true}, SHIFT(58),
  [175] = {.count = 1, .reusable = true}, SHIFT(59),
  [177] = {.count = 1, .reusable = true}, SHIFT(60),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym__map_body, 1),
  [181] = {.count = 1, .reusable = true}, SHIFT(62),
  [183] = {.count = 1, .reusable = true}, SHIFT(63),
  [185] = {.count = 1, .reusable = true}, SHIFT(65),
  [187] = {.count = 1, .reusable = true}, SHIFT(67),
  [189] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [191] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(38),
  [194] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(38),
  [197] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [200] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [203] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [206] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [209] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [212] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [215] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [218] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [221] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [224] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [227] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [230] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [233] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [236] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [239] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [242] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_charlist, 3),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym_charlist, 3),
  [249] = {.count = 1, .reusable = false}, REDUCE(aux_sym_charlist_repeat1, 2),
  [251] = {.count = 2, .reusable = false}, REDUCE(aux_sym_charlist_repeat1, 2), SHIFT_REPEAT(40),
  [254] = {.count = 1, .reusable = true}, SHIFT(68),
  [256] = {.count = 1, .reusable = true}, SHIFT(69),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 3),
  [260] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 3),
  [262] = {.count = 1, .reusable = true}, SHIFT(71),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [266] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [268] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2),
  [270] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(46),
  [273] = {.count = 1, .reusable = false}, SHIFT(74),
  [275] = {.count = 1, .reusable = true}, SHIFT(74),
  [277] = {.count = 1, .reusable = true}, SHIFT(73),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 3),
  [281] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 3),
  [283] = {.count = 1, .reusable = true}, SHIFT(77),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_keyword, 2),
  [287] = {.count = 1, .reusable = true}, SHIFT(79),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 3),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 3),
  [293] = {.count = 1, .reusable = true}, SHIFT(82),
  [295] = {.count = 1, .reusable = true}, SHIFT(84),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_keyword_list, 3),
  [299] = {.count = 1, .reusable = false}, REDUCE(sym_keyword_list, 3),
  [301] = {.count = 1, .reusable = true}, SHIFT(86),
  [303] = {.count = 1, .reusable = false}, SHIFT(90),
  [305] = {.count = 1, .reusable = true}, SHIFT(90),
  [307] = {.count = 1, .reusable = true}, SHIFT(92),
  [309] = {.count = 1, .reusable = false}, SHIFT(92),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym__map_body, 2),
  [313] = {.count = 1, .reusable = true}, SHIFT(93),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_map, 3),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym_map, 3),
  [319] = {.count = 1, .reusable = true}, SHIFT(96),
  [321] = {.count = 1, .reusable = true}, SHIFT(99),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_struct, 3),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym_struct, 3),
  [327] = {.count = 1, .reusable = true}, SHIFT(102),
  [329] = {.count = 1, .reusable = true}, SHIFT(103),
  [331] = {.count = 1, .reusable = true}, SHIFT(104),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_binary_segment, 3),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 4),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 4),
  [339] = {.count = 1, .reusable = true}, REDUCE(aux_sym_binary_repeat1, 2),
  [341] = {.count = 1, .reusable = true}, SHIFT(106),
  [343] = {.count = 2, .reusable = true}, REDUCE(aux_sym_binary_repeat1, 2), SHIFT_REPEAT(107),
  [346] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 4),
  [348] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 4),
  [350] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [352] = {.count = 1, .reusable = true}, SHIFT(108),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_implicit_keyword_list, 1),
  [356] = {.count = 1, .reusable = true}, SHIFT(110),
  [358] = {.count = 1, .reusable = true}, SHIFT(111),
  [360] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(113),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 4),
  [365] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 4),
  [367] = {.count = 1, .reusable = true}, SHIFT(115),
  [369] = {.count = 1, .reusable = true}, SHIFT(116),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym_keyword_list, 4),
  [373] = {.count = 1, .reusable = false}, REDUCE(sym_keyword_list, 4),
  [375] = {.count = 1, .reusable = true}, REDUCE(aux_sym_keyword_list_repeat1, 2),
  [377] = {.count = 1, .reusable = true}, SHIFT(118),
  [379] = {.count = 2, .reusable = true}, REDUCE(aux_sym_keyword_list_repeat1, 2), SHIFT_REPEAT(108),
  [382] = {.count = 1, .reusable = true}, REDUCE(sym_tail, 1),
  [384] = {.count = 1, .reusable = true}, SHIFT(119),
  [386] = {.count = 1, .reusable = true}, SHIFT(120),
  [388] = {.count = 1, .reusable = true}, REDUCE(sym_pair, 3),
  [390] = {.count = 1, .reusable = true}, REDUCE(sym__map_body, 3),
  [392] = {.count = 1, .reusable = true}, REDUCE(aux_sym__map_body_repeat1, 2),
  [394] = {.count = 1, .reusable = true}, SHIFT(121),
  [396] = {.count = 2, .reusable = true}, REDUCE(aux_sym__map_body_repeat1, 2), SHIFT_REPEAT(122),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym__empty_struct_body, 2),
  [401] = {.count = 1, .reusable = false}, REDUCE(sym__empty_struct_body, 2),
  [403] = {.count = 1, .reusable = true}, SHIFT(123),
  [405] = {.count = 1, .reusable = true}, SHIFT(124),
  [407] = {.count = 1, .reusable = true}, SHIFT(126),
  [409] = {.count = 1, .reusable = true}, SHIFT(127),
  [411] = {.count = 1, .reusable = true}, REDUCE(sym_defmodule, 4),
  [413] = {.count = 1, .reusable = false}, REDUCE(sym_defmodule, 4),
  [415] = {.count = 1, .reusable = false}, SHIFT(130),
  [417] = {.count = 1, .reusable = true}, SHIFT(130),
  [419] = {.count = 1, .reusable = false}, REDUCE(sym_module_attribute, 1),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_module_attribute, 1),
  [423] = {.count = 1, .reusable = true}, SHIFT(132),
  [425] = {.count = 1, .reusable = true}, SHIFT(134),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 5),
  [429] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 5),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym_implicit_keyword_list, 2),
  [433] = {.count = 1, .reusable = true}, SHIFT(136),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 5),
  [437] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 5),
  [439] = {.count = 1, .reusable = true}, SHIFT(137),
  [441] = {.count = 1, .reusable = true}, SHIFT(138),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 5),
  [445] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 5),
  [447] = {.count = 1, .reusable = true}, SHIFT(139),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_keyword_list, 5),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym_keyword_list, 5),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym__head_tail_list, 5),
  [455] = {.count = 1, .reusable = false}, REDUCE(sym__head_tail_list, 5),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_map_update, 5),
  [459] = {.count = 1, .reusable = false}, REDUCE(sym_map_update, 5),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym__map_body, 4),
  [463] = {.count = 1, .reusable = true}, SHIFT(140),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym__keyword_struct_body, 3),
  [467] = {.count = 1, .reusable = false}, REDUCE(sym__keyword_struct_body, 3),
  [469] = {.count = 1, .reusable = true}, SHIFT(141),
  [471] = {.count = 1, .reusable = true}, SHIFT(142),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym__struct_body, 3),
  [475] = {.count = 1, .reusable = false}, REDUCE(sym__struct_body, 3),
  [477] = {.count = 1, .reusable = true}, SHIFT(143),
  [479] = {.count = 1, .reusable = true}, SHIFT(144),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym_module_attribute, 2),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym_defstruct, 2),
  [485] = {.count = 1, .reusable = true}, REDUCE(sym_defmodule, 5),
  [487] = {.count = 1, .reusable = false}, REDUCE(sym_defmodule, 5),
  [489] = {.count = 1, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2),
  [491] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2), SHIFT_REPEAT(103),
  [494] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2), SHIFT_REPEAT(104),
  [497] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 6),
  [499] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 6),
  [501] = {.count = 1, .reusable = true}, SHIFT(147),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 6),
  [505] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 6),
  [507] = {.count = 1, .reusable = true}, SHIFT(148),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym__keyword_struct_body, 4),
  [511] = {.count = 1, .reusable = false}, REDUCE(sym__keyword_struct_body, 4),
  [513] = {.count = 1, .reusable = true}, SHIFT(149),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym__struct_body, 4),
  [517] = {.count = 1, .reusable = false}, REDUCE(sym__struct_body, 4),
  [519] = {.count = 1, .reusable = true}, SHIFT(150),
  [521] = {.count = 1, .reusable = true}, SHIFT(151),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 7),
  [525] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 7),
  [527] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 7),
  [529] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 7),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym__keyword_struct_body, 5),
  [533] = {.count = 1, .reusable = false}, REDUCE(sym__keyword_struct_body, 5),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym__struct_body, 5),
  [537] = {.count = 1, .reusable = false}, REDUCE(sym__struct_body, 5),
  [539] = {.count = 1, .reusable = true}, SHIFT(153),
  [541] = {.count = 1, .reusable = true}, REDUCE(sym__struct_body, 6),
  [543] = {.count = 1, .reusable = false}, REDUCE(sym__struct_body, 6),
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
