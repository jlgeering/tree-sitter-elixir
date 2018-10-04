#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 166
#define SYMBOL_COUNT 128
#define ALIAS_COUNT 0
#define TOKEN_COUNT 81
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
  anon_sym_def = 76,
  anon_sym_defp = 77,
  anon_sym_LPAREN_RPAREN = 78,
  sym_identifier = 79,
  sym_comment = 80,
  sym_program = 81,
  sym__expression = 82,
  sym__value = 83,
  sym_true = 84,
  sym_false = 85,
  sym_atom = 86,
  sym__operator_atom = 87,
  sym_keyword = 88,
  sym_nil = 89,
  sym_charlist = 90,
  sym_binary = 91,
  sym_binary_segment = 92,
  sym_string = 93,
  sym_tuple = 94,
  sym__list_or_keyword_list = 95,
  sym_list = 96,
  sym__empty_list = 97,
  sym__simple_list = 98,
  sym__head_tail_list = 99,
  sym_head = 100,
  sym_tail = 101,
  sym_keyword_list = 102,
  sym__map = 103,
  sym_map = 104,
  sym__map_body = 105,
  sym_map_update = 106,
  sym_pair = 107,
  sym_struct = 108,
  sym__empty_struct_body = 109,
  sym__struct_body = 110,
  sym__keyword_struct_body = 111,
  sym_implicit_keyword_list = 112,
  sym_defmodule = 113,
  sym__module_body = 114,
  sym_module_attribute = 115,
  sym_defstruct = 116,
  sym_def = 117,
  sym_defp = 118,
  sym__function = 119,
  aux_sym_program_repeat1 = 120,
  aux_sym_charlist_repeat1 = 121,
  aux_sym_binary_repeat1 = 122,
  aux_sym_string_repeat1 = 123,
  aux_sym_tuple_repeat1 = 124,
  aux_sym_keyword_list_repeat1 = 125,
  aux_sym__map_body_repeat1 = 126,
  aux_sym_defmodule_repeat1 = 127,
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
  [anon_sym_def] = "def",
  [anon_sym_defp] = "defp",
  [anon_sym_LPAREN_RPAREN] = "()",
  [sym_identifier] = "identifier",
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
  [sym_def] = "def",
  [sym_defp] = "defp",
  [sym__function] = "_function",
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
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
  [sym_def] = {
    .visible = true,
    .named = true,
  },
  [sym_defp] = {
    .visible = true,
    .named = true,
  },
  [sym__function] = {
    .visible = false,
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
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '0')
        ADVANCE(10);
      if (lookahead == ':')
        ADVANCE(27);
      if (lookahead == '<')
        ADVANCE(95);
      if (lookahead == '=')
        ADVANCE(97);
      if (lookahead == '>')
        ADVANCE(99);
      if (lookahead == '@')
        ADVANCE(101);
      if (lookahead == '[')
        ADVANCE(103);
      if (lookahead == '\\')
        SKIP(104);
      if (lookahead == ']')
        ADVANCE(105);
      if (lookahead == '{')
        ADVANCE(106);
      if (lookahead == '|')
        ADVANCE(107);
      if (lookahead == '}')
        ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(109);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(112);
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
      if (lookahead == ')')
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == '_')
        ADVANCE(18);
      if (lookahead == 'b')
        ADVANCE(21);
      if (lookahead == 'o')
        ADVANCE(23);
      if (lookahead == 'x')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_')
        ADVANCE(11);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ' ')
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH);
      END_STATE();
    case 18:
      if (lookahead == ':')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == '_')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == ':')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(22);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == '_')
        ADVANCE(21);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(22);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == ':')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(24);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == '_')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(24);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == ':')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(26);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == '_')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(26);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == '!')
        ADVANCE(28);
      if (lookahead == '\"')
        ADVANCE(31);
      if (lookahead == '&')
        ADVANCE(33);
      if (lookahead == '\'')
        ADVANCE(36);
      if (lookahead == '*')
        ADVANCE(38);
      if (lookahead == '+')
        ADVANCE(39);
      if (lookahead == '-')
        ADVANCE(41);
      if (lookahead == '.')
        ADVANCE(43);
      if (lookahead == '/')
        ADVANCE(45);
      if (lookahead == ':')
        ADVANCE(46);
      if (lookahead == '<')
        ADVANCE(48);
      if (lookahead == '=')
        ADVANCE(59);
      if (lookahead == '>')
        ADVANCE(64);
      if (lookahead == '@')
        ADVANCE(68);
      if (lookahead == '\\')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(71);
      if (lookahead == 'f')
        ADVANCE(72);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 't')
        ADVANCE(82);
      if (lookahead == '|')
        ADVANCE(86);
      if (lookahead == '~')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON_BANG);
      if (lookahead == '=')
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COLON_BANG_EQ);
      if (lookahead == '=')
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COLON_BANG_EQ_EQ);
      END_STATE();
    case 31:
      if (lookahead == '\"')
        ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '\"')
        ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(31);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON_AMP);
      if (lookahead == '&')
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON_AMP_AMP);
      if (lookahead == '&')
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON_AMP_AMP_AMP);
      END_STATE();
    case 36:
      if (lookahead == '\'')
        ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '\'')
        ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(36);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COLON_STAR);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      if (lookahead == '+')
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS_PLUS);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      if (lookahead == '-')
        ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLON_DASH_DASH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON_DOT);
      if (lookahead == '.')
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON_DOT_DOT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == ':')
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_COLON);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COLON_LT);
      if (lookahead == '-')
        ADVANCE(49);
      if (lookahead == '<')
        ADVANCE(50);
      if (lookahead == '=')
        ADVANCE(53);
      if (lookahead == '>')
        ADVANCE(54);
      if (lookahead == '|')
        ADVANCE(55);
      if (lookahead == '~')
        ADVANCE(57);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON_LT_DASH);
      END_STATE();
    case 50:
      if (lookahead == '<')
        ADVANCE(51);
      if (lookahead == '~')
        ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COLON_LT_LT_LT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COLON_LT_LT_TILDE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLON_LT_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COLON_LT_GT);
      END_STATE();
    case 55:
      if (lookahead == '>')
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COLON_LT_PIPE_GT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON_LT_TILDE);
      if (lookahead == '>')
        ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON_LT_TILDE_GT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      if (lookahead == '=')
        ADVANCE(60);
      if (lookahead == '>')
        ADVANCE(62);
      if (lookahead == '~')
        ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_COLON_EQ_EQ);
      if (lookahead == '=')
        ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COLON_EQ_EQ_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_COLON_EQ_GT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COLON_EQ_TILDE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      if (lookahead == '=')
        ADVANCE(65);
      if (lookahead == '>')
        ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COLON_GT_EQ);
      END_STATE();
    case 66:
      if (lookahead == '>')
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLON_GT_GT_GT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COLON_AT);
      END_STATE();
    case 69:
      if (lookahead == '\\')
        ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COLON_BSLASH_BSLASH);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COLON_CARET);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(73);
      if (lookahead == '?')
        ADVANCE(73);
      if (lookahead == 'a')
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(73);
      if (lookahead == '?')
        ADVANCE(73);
      if (lookahead == 'l')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(73);
      if (lookahead == '?')
        ADVANCE(73);
      if (lookahead == 's')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(73);
      if (lookahead == '?')
        ADVANCE(73);
      if (lookahead == 'e')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COLONfalse);
      if (lookahead == '!')
        ADVANCE(73);
      if (lookahead == '?')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(73);
      if (lookahead == '?')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(73);
      if (lookahead == '?')
        ADVANCE(73);
      if (lookahead == 'i')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(73);
      if (lookahead == '?')
        ADVANCE(73);
      if (lookahead == 'l')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COLONnil);
      if (lookahead == '!')
        ADVANCE(73);
      if (lookahead == '?')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(73);
      if (lookahead == '?')
        ADVANCE(73);
      if (lookahead == 'r')
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(73);
      if (lookahead == '?')
        ADVANCE(73);
      if (lookahead == 'u')
        ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(73);
      if (lookahead == '?')
        ADVANCE(73);
      if (lookahead == 'e')
        ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COLONtrue);
      if (lookahead == '!')
        ADVANCE(73);
      if (lookahead == '?')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COLON_PIPE);
      if (lookahead == '>')
        ADVANCE(87);
      if (lookahead == '|')
        ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COLON_PIPE_GT);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_COLON_PIPE_PIPE);
      if (lookahead == '|')
        ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_COLON_PIPE_PIPE_PIPE);
      END_STATE();
    case 90:
      if (lookahead == '>')
        ADVANCE(91);
      if (lookahead == '~')
        ADVANCE(93);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COLON_TILDE_GT);
      if (lookahead == '>')
        ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COLON_TILDE_GT_GT);
      END_STATE();
    case 93:
      if (lookahead == '~')
        ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COLON_TILDE_TILDE_TILDE);
      END_STATE();
    case 95:
      if (lookahead == '<')
        ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 97:
      if (lookahead == '>')
        ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 99:
      if (lookahead == '>')
        ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 104:
      if (lookahead == '\n')
        SKIP(0);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead == '.')
        ADVANCE(110);
      if (lookahead == ':')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(109);
      END_STATE();
    case 110:
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead == '.')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0')
        ADVANCE(20);
      if (lookahead == ':')
        ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(112);
      END_STATE();
    case 113:
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
        ADVANCE(114);
      if (lookahead == ':')
        ADVANCE(123);
      if (lookahead == '<')
        ADVANCE(95);
      if (lookahead == '[')
        ADVANCE(103);
      if (lookahead == '\\')
        SKIP(125);
      if (lookahead == '{')
        ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(113);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(111);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(126);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '_')
        ADVANCE(115);
      if (lookahead == 'b')
        ADVANCE(117);
      if (lookahead == 'o')
        ADVANCE(119);
      if (lookahead == 'x')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(116);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '_')
        ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(116);
      END_STATE();
    case 117:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(117);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(118);
      END_STATE();
    case 119:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(120);
      END_STATE();
    case 121:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(122);
      END_STATE();
    case 123:
      if (lookahead == '!')
        ADVANCE(28);
      if (lookahead == '\"')
        ADVANCE(31);
      if (lookahead == '&')
        ADVANCE(33);
      if (lookahead == '\'')
        ADVANCE(36);
      if (lookahead == '*')
        ADVANCE(38);
      if (lookahead == '+')
        ADVANCE(39);
      if (lookahead == '-')
        ADVANCE(41);
      if (lookahead == '.')
        ADVANCE(43);
      if (lookahead == '/')
        ADVANCE(45);
      if (lookahead == ':')
        ADVANCE(124);
      if (lookahead == '<')
        ADVANCE(48);
      if (lookahead == '=')
        ADVANCE(59);
      if (lookahead == '>')
        ADVANCE(64);
      if (lookahead == '@')
        ADVANCE(68);
      if (lookahead == '\\')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(71);
      if (lookahead == 'f')
        ADVANCE(72);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 't')
        ADVANCE(82);
      if (lookahead == '|')
        ADVANCE(86);
      if (lookahead == '~')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 124:
      if (lookahead == ':')
        ADVANCE(47);
      END_STATE();
    case 125:
      if (lookahead == '\n')
        SKIP(113);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(126);
      END_STATE();
    case 127:
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
        ADVANCE(9);
      if (lookahead == '0')
        ADVANCE(114);
      if (lookahead == ':')
        ADVANCE(123);
      if (lookahead == '<')
        ADVANCE(95);
      if (lookahead == '=')
        ADVANCE(97);
      if (lookahead == '@')
        ADVANCE(101);
      if (lookahead == '[')
        ADVANCE(103);
      if (lookahead == '\\')
        SKIP(128);
      if (lookahead == ']')
        ADVANCE(105);
      if (lookahead == '{')
        ADVANCE(106);
      if (lookahead == '|')
        ADVANCE(107);
      if (lookahead == '}')
        ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(127);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(111);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(126);
      END_STATE();
    case 128:
      if (lookahead == '\n')
        SKIP(127);
      END_STATE();
    case 129:
      if (lookahead == '#')
        ADVANCE(130);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '\\')
        ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(132);
      if (lookahead != 0)
        ADVANCE(132);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead == '\'')
        ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      END_STATE();
    case 133:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(134);
      if (lookahead == '>')
        ADVANCE(99);
      if (lookahead == '\\')
        SKIP(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(133);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(136);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(135);
      if (lookahead == 'b')
        ADVANCE(117);
      if (lookahead == 'o')
        ADVANCE(119);
      if (lookahead == 'x')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(136);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(136);
      END_STATE();
    case 137:
      if (lookahead == '\n')
        SKIP(133);
      END_STATE();
    case 138:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(139);
      if (lookahead == '\\')
        ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(141);
      if (lookahead != 0)
        ADVANCE(141);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 142:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(114);
      if (lookahead == ':')
        ADVANCE(123);
      if (lookahead == '<')
        ADVANCE(95);
      if (lookahead == '[')
        ADVANCE(103);
      if (lookahead == '\\')
        SKIP(143);
      if (lookahead == '{')
        ADVANCE(106);
      if (lookahead == '}')
        ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(142);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(111);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(126);
      END_STATE();
    case 143:
      if (lookahead == '\n')
        SKIP(142);
      END_STATE();
    case 144:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(10);
      if (lookahead == ':')
        ADVANCE(123);
      if (lookahead == '<')
        ADVANCE(95);
      if (lookahead == '[')
        ADVANCE(103);
      if (lookahead == '\\')
        SKIP(145);
      if (lookahead == ']')
        ADVANCE(105);
      if (lookahead == '{')
        ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(144);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(109);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(112);
      END_STATE();
    case 145:
      if (lookahead == '\n')
        SKIP(144);
      END_STATE();
    case 146:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(10);
      if (lookahead == ':')
        ADVANCE(123);
      if (lookahead == '<')
        ADVANCE(95);
      if (lookahead == '[')
        ADVANCE(103);
      if (lookahead == '\\')
        SKIP(147);
      if (lookahead == '{')
        ADVANCE(106);
      if (lookahead == '}')
        ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(146);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(109);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(112);
      END_STATE();
    case 147:
      if (lookahead == '\n')
        SKIP(146);
      END_STATE();
    case 148:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '[')
        ADVANCE(103);
      if (lookahead == '\\')
        SKIP(149);
      if (lookahead == '{')
        ADVANCE(106);
      if (lookahead == '}')
        ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(148);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(111);
      END_STATE();
    case 149:
      if (lookahead == '\n')
        SKIP(148);
      END_STATE();
    case 150:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(150);
      END_STATE();
    case 151:
      if (lookahead == '\n')
        SKIP(150);
      END_STATE();
    case 152:
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
        ADVANCE(9);
      if (lookahead == '0')
        ADVANCE(114);
      if (lookahead == ':')
        ADVANCE(27);
      if (lookahead == '<')
        ADVANCE(95);
      if (lookahead == '=')
        ADVANCE(97);
      if (lookahead == '>')
        ADVANCE(99);
      if (lookahead == '@')
        ADVANCE(101);
      if (lookahead == '[')
        ADVANCE(103);
      if (lookahead == '\\')
        SKIP(153);
      if (lookahead == ']')
        ADVANCE(105);
      if (lookahead == '{')
        ADVANCE(106);
      if (lookahead == '|')
        ADVANCE(107);
      if (lookahead == '}')
        ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(152);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(111);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(126);
      END_STATE();
    case 153:
      if (lookahead == '\n')
        SKIP(152);
      END_STATE();
    case 154:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(155);
      if (lookahead == '>')
        ADVANCE(99);
      if (lookahead == '\\')
        SKIP(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(154);
      END_STATE();
    case 155:
      if (lookahead == ':')
        ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 157:
      if (lookahead == '\n')
        SKIP(154);
      END_STATE();
    case 158:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '\\')
        SKIP(159);
      if (lookahead == '}')
        ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(158);
      END_STATE();
    case 159:
      if (lookahead == '\n')
        SKIP(158);
      END_STATE();
    case 160:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '\\')
        SKIP(161);
      if (lookahead == ']')
        ADVANCE(105);
      if (lookahead == '|')
        ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(160);
      END_STATE();
    case 161:
      if (lookahead == '\n')
        SKIP(160);
      END_STATE();
    case 162:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '=')
        ADVANCE(97);
      if (lookahead == '\\')
        SKIP(163);
      if (lookahead == '|')
        ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(162);
      END_STATE();
    case 163:
      if (lookahead == '\n')
        SKIP(162);
      END_STATE();
    case 164:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(164);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(126);
      END_STATE();
    case 165:
      if (lookahead == '\n')
        SKIP(164);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_binary_options);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(166);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 167:
      if (lookahead == '\n')
        SKIP(166);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_binary_options);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 169:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '@')
        ADVANCE(101);
      if (lookahead == '\\')
        SKIP(170);
      if (lookahead == ']')
        ADVANCE(105);
      if (lookahead == '}')
        ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(169);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(126);
      END_STATE();
    case 170:
      if (lookahead == '\n')
        SKIP(169);
      END_STATE();
    case 171:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '[')
        ADVANCE(103);
      if (lookahead == '\\')
        SKIP(172);
      if (lookahead == ']')
        ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 172:
      if (lookahead == '\n')
        SKIP(171);
      END_STATE();
    case 173:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(10);
      if (lookahead == ':')
        ADVANCE(123);
      if (lookahead == '<')
        ADVANCE(95);
      if (lookahead == '[')
        ADVANCE(103);
      if (lookahead == '\\')
        SKIP(174);
      if (lookahead == '{')
        ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(173);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(109);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(112);
      END_STATE();
    case 174:
      if (lookahead == '\n')
        SKIP(173);
      END_STATE();
    case 175:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(176);
      if (lookahead == '}')
        ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 176:
      if (lookahead == '\n')
        SKIP(175);
      END_STATE();
    case 177:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '@')
        ADVANCE(101);
      if (lookahead == '\\')
        SKIP(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(177);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(126);
      END_STATE();
    case 178:
      if (lookahead == '\n')
        SKIP(177);
      END_STATE();
    case 179:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '\\')
        SKIP(180);
      if (lookahead == ']')
        ADVANCE(105);
      if (lookahead == '}')
        ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(179);
      END_STATE();
    case 180:
      if (lookahead == '\n')
        SKIP(179);
      END_STATE();
    case 181:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(10);
      if (lookahead == ':')
        ADVANCE(123);
      if (lookahead == '<')
        ADVANCE(95);
      if (lookahead == '@')
        ADVANCE(101);
      if (lookahead == '[')
        ADVANCE(103);
      if (lookahead == '\\')
        SKIP(182);
      if (lookahead == '{')
        ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(181);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(109);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(112);
      END_STATE();
    case 182:
      if (lookahead == '\n')
        SKIP(181);
      END_STATE();
    case 183:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '@')
        ADVANCE(101);
      if (lookahead == '\\')
        SKIP(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(183);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(126);
      END_STATE();
    case 184:
      if (lookahead == '\n')
        SKIP(183);
      END_STATE();
    case 185:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(114);
      if (lookahead == ':')
        ADVANCE(123);
      if (lookahead == '<')
        ADVANCE(95);
      if (lookahead == '[')
        ADVANCE(103);
      if (lookahead == '\\')
        SKIP(186);
      if (lookahead == ']')
        ADVANCE(105);
      if (lookahead == '{')
        ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(185);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(111);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(126);
      END_STATE();
    case 186:
      if (lookahead == '\n')
        SKIP(185);
      END_STATE();
    case 187:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '\\')
        SKIP(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(187);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(126);
      END_STATE();
    case 188:
      if (lookahead == '\n')
        SKIP(187);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 'd')
        ADVANCE(1);
      if (lookahead == 'e')
        ADVANCE(18);
      if (lookahead == 'f')
        ADVANCE(21);
      if (lookahead == 'n')
        ADVANCE(26);
      if (lookahead == 't')
        ADVANCE(29);
      END_STATE();
    case 1:
      if (lookahead == 'e')
        ADVANCE(2);
      if (lookahead == 'o')
        ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == 'f')
        ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'm')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(10);
      if (lookahead == 's')
        ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'o')
        ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'd')
        ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'u')
        ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'l')
        ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'e')
        ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_defmodule);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_defp);
      END_STATE();
    case 11:
      if (lookahead == 't')
        ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'r')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'u')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'c')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 't')
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_defstruct);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 18:
      if (lookahead == 'n')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'd')
        ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 21:
      if (lookahead == 'a')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'l')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 's')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'e')
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 26:
      if (lookahead == 'i')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'l')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 29:
      if (lookahead == 'r')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'u')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'e')
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 113},
  [2] = {.lex_state = 127},
  [3] = {.lex_state = 127},
  [4] = {.lex_state = 127},
  [5] = {.lex_state = 127},
  [6] = {.lex_state = 129},
  [7] = {.lex_state = 133},
  [8] = {.lex_state = 138},
  [9] = {.lex_state = 142},
  [10] = {.lex_state = 144},
  [11] = {.lex_state = 146},
  [12] = {.lex_state = 148},
  [13] = {.lex_state = 148},
  [14] = {.lex_state = 150},
  [15] = {.lex_state = 127},
  [16] = {.lex_state = 113},
  [17] = {.lex_state = 152},
  [18] = {.lex_state = 129},
  [19] = {.lex_state = 154},
  [20] = {.lex_state = 127},
  [21] = {.lex_state = 154},
  [22] = {.lex_state = 152},
  [23] = {.lex_state = 138},
  [24] = {.lex_state = 127},
  [25] = {.lex_state = 158},
  [26] = {.lex_state = 113},
  [27] = {.lex_state = 127},
  [28] = {.lex_state = 160},
  [29] = {.lex_state = 160},
  [30] = {.lex_state = 160},
  [31] = {.lex_state = 127},
  [32] = {.lex_state = 162},
  [33] = {.lex_state = 158},
  [34] = {.lex_state = 148},
  [35] = {.lex_state = 158},
  [36] = {.lex_state = 148},
  [37] = {.lex_state = 164},
  [38] = {.lex_state = 113},
  [39] = {.lex_state = 152},
  [40] = {.lex_state = 129},
  [41] = {.lex_state = 166},
  [42] = {.lex_state = 133},
  [43] = {.lex_state = 127},
  [44] = {.lex_state = 154},
  [45] = {.lex_state = 152},
  [46] = {.lex_state = 138},
  [47] = {.lex_state = 146},
  [48] = {.lex_state = 127},
  [49] = {.lex_state = 158},
  [50] = {.lex_state = 169},
  [51] = {.lex_state = 144},
  [52] = {.lex_state = 127},
  [53] = {.lex_state = 160},
  [54] = {.lex_state = 171},
  [55] = {.lex_state = 127},
  [56] = {.lex_state = 160},
  [57] = {.lex_state = 148},
  [58] = {.lex_state = 173},
  [59] = {.lex_state = 113},
  [60] = {.lex_state = 175},
  [61] = {.lex_state = 158},
  [62] = {.lex_state = 127},
  [63] = {.lex_state = 146},
  [64] = {.lex_state = 158},
  [65] = {.lex_state = 146},
  [66] = {.lex_state = 127},
  [67] = {.lex_state = 177},
  [68] = {.lex_state = 154},
  [69] = {.lex_state = 127},
  [70] = {.lex_state = 154},
  [71] = {.lex_state = 133},
  [72] = {.lex_state = 154},
  [73] = {.lex_state = 127},
  [74] = {.lex_state = 179},
  [75] = {.lex_state = 158},
  [76] = {.lex_state = 158},
  [77] = {.lex_state = 146},
  [78] = {.lex_state = 158},
  [79] = {.lex_state = 127},
  [80] = {.lex_state = 160},
  [81] = {.lex_state = 160},
  [82] = {.lex_state = 144},
  [83] = {.lex_state = 160},
  [84] = {.lex_state = 127},
  [85] = {.lex_state = 169},
  [86] = {.lex_state = 171},
  [87] = {.lex_state = 160},
  [88] = {.lex_state = 160},
  [89] = {.lex_state = 160},
  [90] = {.lex_state = 162},
  [91] = {.lex_state = 148},
  [92] = {.lex_state = 158},
  [93] = {.lex_state = 175},
  [94] = {.lex_state = 158},
  [95] = {.lex_state = 158},
  [96] = {.lex_state = 146},
  [97] = {.lex_state = 158},
  [98] = {.lex_state = 158},
  [99] = {.lex_state = 127},
  [100] = {.lex_state = 158},
  [101] = {.lex_state = 158},
  [102] = {.lex_state = 127},
  [103] = {.lex_state = 181},
  [104] = {.lex_state = 171},
  [105] = {.lex_state = 164},
  [106] = {.lex_state = 164},
  [107] = {.lex_state = 177},
  [108] = {.lex_state = 127},
  [109] = {.lex_state = 133},
  [110] = {.lex_state = 171},
  [111] = {.lex_state = 158},
  [112] = {.lex_state = 148},
  [113] = {.lex_state = 127},
  [114] = {.lex_state = 158},
  [115] = {.lex_state = 113},
  [116] = {.lex_state = 160},
  [117] = {.lex_state = 160},
  [118] = {.lex_state = 127},
  [119] = {.lex_state = 160},
  [120] = {.lex_state = 127},
  [121] = {.lex_state = 127},
  [122] = {.lex_state = 127},
  [123] = {.lex_state = 175},
  [124] = {.lex_state = 113},
  [125] = {.lex_state = 175},
  [126] = {.lex_state = 127},
  [127] = {.lex_state = 158},
  [128] = {.lex_state = 146},
  [129] = {.lex_state = 127},
  [130] = {.lex_state = 158},
  [131] = {.lex_state = 158},
  [132] = {.lex_state = 177},
  [133] = {.lex_state = 183},
  [134] = {.lex_state = 185},
  [135] = {.lex_state = 177},
  [136] = {.lex_state = 187},
  [137] = {.lex_state = 177},
  [138] = {.lex_state = 177},
  [139] = {.lex_state = 127},
  [140] = {.lex_state = 177},
  [141] = {.lex_state = 127},
  [142] = {.lex_state = 148},
  [143] = {.lex_state = 127},
  [144] = {.lex_state = 160},
  [145] = {.lex_state = 127},
  [146] = {.lex_state = 175},
  [147] = {.lex_state = 127},
  [148] = {.lex_state = 175},
  [149] = {.lex_state = 146},
  [150] = {.lex_state = 158},
  [151] = {.lex_state = 183},
  [152] = {.lex_state = 113},
  [153] = {.lex_state = 164},
  [154] = {.lex_state = 127},
  [155] = {.lex_state = 127},
  [156] = {.lex_state = 127},
  [157] = {.lex_state = 127},
  [158] = {.lex_state = 175},
  [159] = {.lex_state = 183},
  [160] = {.lex_state = 164},
  [161] = {.lex_state = 113},
  [162] = {.lex_state = 127},
  [163] = {.lex_state = 177},
  [164] = {.lex_state = 164},
  [165] = {.lex_state = 177},
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
    [anon_sym_def] = ACTIONS(3),
    [anon_sym_defp] = ACTIONS(3),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(1),
    [sym_identifier] = ACTIONS(3),
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
    [anon_sym_def] = ACTIONS(47),
    [anon_sym_defp] = ACTIONS(45),
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
    [anon_sym_def] = ACTIONS(51),
    [anon_sym_defp] = ACTIONS(49),
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
    [anon_sym_def] = ACTIONS(55),
    [anon_sym_defp] = ACTIONS(53),
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
    [anon_sym_def] = ACTIONS(59),
    [anon_sym_defp] = ACTIONS(57),
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
    [anon_sym_def] = ACTIONS(105),
    [anon_sym_defp] = ACTIONS(103),
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
    [anon_sym_def] = ACTIONS(115),
    [anon_sym_defp] = ACTIONS(113),
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
    [anon_sym_def] = ACTIONS(127),
    [anon_sym_defp] = ACTIONS(125),
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
    [anon_sym_def] = ACTIONS(135),
    [anon_sym_defp] = ACTIONS(133),
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
    [anon_sym_def] = ACTIONS(143),
    [anon_sym_defp] = ACTIONS(141),
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
    [anon_sym_def] = ACTIONS(155),
    [anon_sym_defp] = ACTIONS(153),
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
    [anon_sym_def] = ACTIONS(171),
    [anon_sym_defp] = ACTIONS(169),
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
    [anon_sym_def] = ACTIONS(247),
    [anon_sym_defp] = ACTIONS(245),
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
    [anon_sym_def] = ACTIONS(260),
    [anon_sym_defp] = ACTIONS(258),
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
    [anon_sym_def] = ACTIONS(266),
    [anon_sym_defp] = ACTIONS(264),
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
    [anon_sym_def] = ACTIONS(281),
    [anon_sym_defp] = ACTIONS(279),
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
    [anon_sym_def] = ACTIONS(287),
    [anon_sym_defp] = ACTIONS(285),
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
    [anon_sym_def] = ACTIONS(293),
    [anon_sym_defp] = ACTIONS(291),
    [sym_comment] = ACTIONS(43),
  },
  [53] = {
    [aux_sym_tuple_repeat1] = STATE(83),
    [anon_sym_COMMA] = ACTIONS(295),
    [anon_sym_RBRACK] = ACTIONS(289),
    [sym_comment] = ACTIONS(43),
  },
  [54] = {
    [sym_keyword] = STATE(85),
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
    [anon_sym_def] = ACTIONS(301),
    [anon_sym_defp] = ACTIONS(299),
    [sym_comment] = ACTIONS(43),
  },
  [56] = {
    [aux_sym_keyword_list_repeat1] = STATE(87),
    [anon_sym_COMMA] = ACTIONS(303),
    [anon_sym_RBRACK] = ACTIONS(297),
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
    [sym_alias] = ACTIONS(305),
    [sym_integer] = ACTIONS(305),
    [sym_float] = ACTIONS(307),
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
    [sym_alias] = ACTIONS(309),
    [sym_integer] = ACTIONS(311),
    [sym_float] = ACTIONS(309),
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
    [anon_sym_RBRACE] = ACTIONS(313),
    [sym_comment] = ACTIONS(43),
  },
  [61] = {
    [aux_sym_keyword_list_repeat1] = STATE(94),
    [anon_sym_COMMA] = ACTIONS(315),
    [anon_sym_RBRACE] = ACTIONS(313),
    [sym_comment] = ACTIONS(43),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(317),
    [sym_alias] = ACTIONS(317),
    [sym_integer] = ACTIONS(319),
    [sym_float] = ACTIONS(317),
    [anon_sym_true] = ACTIONS(317),
    [anon_sym_COLONtrue] = ACTIONS(319),
    [anon_sym_false] = ACTIONS(317),
    [anon_sym_COLONfalse] = ACTIONS(319),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(319),
    [anon_sym_COLON_BANG] = ACTIONS(319),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(319),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(317),
    [anon_sym_COLON_AMP] = ACTIONS(319),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(319),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(317),
    [anon_sym_COLON_STAR] = ACTIONS(317),
    [anon_sym_COLON_PLUS] = ACTIONS(319),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(317),
    [anon_sym_COLON_DASH] = ACTIONS(319),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(317),
    [anon_sym_COLON_DOT] = ACTIONS(319),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(317),
    [anon_sym_COLON_SLASH] = ACTIONS(317),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(317),
    [anon_sym_COLON_LT] = ACTIONS(319),
    [anon_sym_COLON_LT_DASH] = ACTIONS(317),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(317),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(317),
    [anon_sym_COLON_LT_EQ] = ACTIONS(317),
    [anon_sym_COLON_LT_GT] = ACTIONS(317),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(317),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(319),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(317),
    [anon_sym_COLON_EQ] = ACTIONS(319),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(319),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(317),
    [anon_sym_COLON_EQ_GT] = ACTIONS(317),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(317),
    [anon_sym_COLON_GT] = ACTIONS(319),
    [anon_sym_COLON_GT_EQ] = ACTIONS(317),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(317),
    [anon_sym_COLON_AT] = ACTIONS(317),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(317),
    [anon_sym_COLON_CARET] = ACTIONS(317),
    [anon_sym_COLON_PIPE] = ACTIONS(319),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(317),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(319),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(317),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(319),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(317),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(317),
    [anon_sym_nil] = ACTIONS(317),
    [anon_sym_COLONnil] = ACTIONS(319),
    [anon_sym_SQUOTE] = ACTIONS(317),
    [anon_sym_LT_LT] = ACTIONS(317),
    [anon_sym_COMMA] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_RBRACE] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_RBRACK] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(317),
    [anon_sym_EQ_GT] = ACTIONS(317),
    [anon_sym_PERCENT] = ACTIONS(319),
    [anon_sym_defmodule] = ACTIONS(317),
    [anon_sym_end] = ACTIONS(317),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(317),
    [anon_sym_defstruct] = ACTIONS(317),
    [anon_sym_def] = ACTIONS(319),
    [anon_sym_defp] = ACTIONS(317),
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
    [sym_alias] = ACTIONS(305),
    [sym_integer] = ACTIONS(305),
    [sym_float] = ACTIONS(307),
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
    [anon_sym_RBRACE] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [64] = {
    [aux_sym_keyword_list_repeat1] = STATE(97),
    [aux_sym__map_body_repeat1] = STATE(98),
    [anon_sym_COMMA] = ACTIONS(321),
    [anon_sym_RBRACE] = ACTIONS(313),
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
    [sym_alias] = ACTIONS(305),
    [sym_integer] = ACTIONS(305),
    [sym_float] = ACTIONS(307),
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
    [anon_sym_RBRACE] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [66] = {
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
    [anon_sym_defstruct] = ACTIONS(325),
    [anon_sym_def] = ACTIONS(327),
    [anon_sym_defp] = ACTIONS(325),
    [sym_comment] = ACTIONS(43),
  },
  [67] = {
    [sym__module_body] = STATE(107),
    [sym_module_attribute] = STATE(107),
    [sym_defstruct] = STATE(107),
    [sym_def] = STATE(107),
    [sym_defp] = STATE(107),
    [aux_sym_defmodule_repeat1] = STATE(107),
    [anon_sym_end] = ACTIONS(329),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(331),
    [anon_sym_defstruct] = ACTIONS(333),
    [anon_sym_def] = ACTIONS(335),
    [anon_sym_defp] = ACTIONS(337),
    [sym_comment] = ACTIONS(43),
  },
  [68] = {
    [anon_sym_COMMA] = ACTIONS(339),
    [anon_sym_GT_GT] = ACTIONS(339),
    [sym_comment] = ACTIONS(43),
  },
  [69] = {
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
    [anon_sym_def] = ACTIONS(343),
    [anon_sym_defp] = ACTIONS(341),
    [sym_comment] = ACTIONS(43),
  },
  [70] = {
    [anon_sym_COMMA] = ACTIONS(345),
    [anon_sym_GT_GT] = ACTIONS(345),
    [sym_comment] = ACTIONS(43),
  },
  [71] = {
    [sym_charlist] = STATE(19),
    [sym_binary_segment] = STATE(70),
    [sym_string] = STATE(19),
    [sym_integer] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_GT_GT] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(43),
  },
  [72] = {
    [aux_sym_binary_repeat1] = STATE(72),
    [anon_sym_COMMA] = ACTIONS(349),
    [anon_sym_GT_GT] = ACTIONS(345),
    [sym_comment] = ACTIONS(43),
  },
  [73] = {
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
    [anon_sym_def] = ACTIONS(354),
    [anon_sym_defp] = ACTIONS(352),
    [sym_comment] = ACTIONS(43),
  },
  [74] = {
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_RBRACE] = ACTIONS(356),
    [anon_sym_RBRACK] = ACTIONS(356),
    [sym_comment] = ACTIONS(43),
  },
  [75] = {
    [aux_sym_keyword_list_repeat1] = STATE(111),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_RBRACE] = ACTIONS(360),
    [sym_comment] = ACTIONS(43),
  },
  [76] = {
    [anon_sym_COMMA] = ACTIONS(362),
    [anon_sym_RBRACE] = ACTIONS(364),
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
    [sym_implicit_keyword_list] = STATE(114),
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
    [anon_sym_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [78] = {
    [aux_sym_tuple_repeat1] = STATE(78),
    [anon_sym_COMMA] = ACTIONS(366),
    [anon_sym_RBRACE] = ACTIONS(356),
    [sym_comment] = ACTIONS(43),
  },
  [79] = {
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
    [anon_sym_def] = ACTIONS(371),
    [anon_sym_defp] = ACTIONS(369),
    [sym_comment] = ACTIONS(43),
  },
  [80] = {
    [aux_sym_keyword_list_repeat1] = STATE(116),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_RBRACK] = ACTIONS(360),
    [sym_comment] = ACTIONS(43),
  },
  [81] = {
    [anon_sym_COMMA] = ACTIONS(373),
    [anon_sym_RBRACK] = ACTIONS(375),
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
    [sym_implicit_keyword_list] = STATE(119),
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
    [anon_sym_RBRACK] = ACTIONS(375),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [83] = {
    [aux_sym_tuple_repeat1] = STATE(83),
    [anon_sym_COMMA] = ACTIONS(366),
    [anon_sym_RBRACK] = ACTIONS(356),
    [sym_comment] = ACTIONS(43),
  },
  [84] = {
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
    [anon_sym_def] = ACTIONS(379),
    [anon_sym_defp] = ACTIONS(377),
    [sym_comment] = ACTIONS(43),
  },
  [85] = {
    [anon_sym_COMMA] = ACTIONS(381),
    [anon_sym_RBRACE] = ACTIONS(381),
    [anon_sym_RBRACK] = ACTIONS(381),
    [anon_sym_end] = ACTIONS(381),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(381),
    [anon_sym_defstruct] = ACTIONS(381),
    [anon_sym_def] = ACTIONS(383),
    [anon_sym_defp] = ACTIONS(381),
    [sym_comment] = ACTIONS(43),
  },
  [86] = {
    [sym_keyword] = STATE(85),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(385),
    [sym_comment] = ACTIONS(43),
  },
  [87] = {
    [aux_sym_keyword_list_repeat1] = STATE(87),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_RBRACK] = ACTIONS(381),
    [sym_comment] = ACTIONS(43),
  },
  [88] = {
    [anon_sym_RBRACK] = ACTIONS(390),
    [sym_comment] = ACTIONS(43),
  },
  [89] = {
    [anon_sym_RBRACK] = ACTIONS(392),
    [sym_comment] = ACTIONS(43),
  },
  [90] = {
    [anon_sym_EQ_GT] = ACTIONS(175),
    [sym_comment] = ACTIONS(43),
  },
  [91] = {
    [anon_sym_RBRACE] = ACTIONS(394),
    [sym_comment] = ACTIONS(43),
  },
  [92] = {
    [anon_sym_COMMA] = ACTIONS(396),
    [anon_sym_RBRACE] = ACTIONS(396),
    [sym_comment] = ACTIONS(43),
  },
  [93] = {
    [sym_keyword] = STATE(85),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(398),
    [sym_comment] = ACTIONS(43),
  },
  [94] = {
    [aux_sym_keyword_list_repeat1] = STATE(94),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_RBRACE] = ACTIONS(381),
    [sym_comment] = ACTIONS(43),
  },
  [95] = {
    [anon_sym_COMMA] = ACTIONS(400),
    [anon_sym_RBRACE] = ACTIONS(400),
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
    [sym_alias] = ACTIONS(305),
    [sym_integer] = ACTIONS(305),
    [sym_float] = ACTIONS(307),
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
    [anon_sym_RBRACE] = ACTIONS(398),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [97] = {
    [aux_sym_keyword_list_repeat1] = STATE(94),
    [anon_sym_COMMA] = ACTIONS(402),
    [anon_sym_RBRACE] = ACTIONS(398),
    [sym_comment] = ACTIONS(43),
  },
  [98] = {
    [aux_sym__map_body_repeat1] = STATE(98),
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_RBRACE] = ACTIONS(400),
    [sym_comment] = ACTIONS(43),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(407),
    [sym_alias] = ACTIONS(407),
    [sym_integer] = ACTIONS(409),
    [sym_float] = ACTIONS(407),
    [anon_sym_true] = ACTIONS(407),
    [anon_sym_COLONtrue] = ACTIONS(409),
    [anon_sym_false] = ACTIONS(407),
    [anon_sym_COLONfalse] = ACTIONS(409),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(409),
    [anon_sym_COLON_BANG] = ACTIONS(409),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(409),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(407),
    [anon_sym_COLON_AMP] = ACTIONS(409),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(409),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(407),
    [anon_sym_COLON_STAR] = ACTIONS(407),
    [anon_sym_COLON_PLUS] = ACTIONS(409),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(407),
    [anon_sym_COLON_DASH] = ACTIONS(409),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(407),
    [anon_sym_COLON_DOT] = ACTIONS(409),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(407),
    [anon_sym_COLON_SLASH] = ACTIONS(407),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(407),
    [anon_sym_COLON_LT] = ACTIONS(409),
    [anon_sym_COLON_LT_DASH] = ACTIONS(407),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(407),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(407),
    [anon_sym_COLON_LT_EQ] = ACTIONS(407),
    [anon_sym_COLON_LT_GT] = ACTIONS(407),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(407),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(409),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(407),
    [anon_sym_COLON_EQ] = ACTIONS(409),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(409),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(407),
    [anon_sym_COLON_EQ_GT] = ACTIONS(407),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(407),
    [anon_sym_COLON_GT] = ACTIONS(409),
    [anon_sym_COLON_GT_EQ] = ACTIONS(407),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(407),
    [anon_sym_COLON_AT] = ACTIONS(407),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(407),
    [anon_sym_COLON_CARET] = ACTIONS(407),
    [anon_sym_COLON_PIPE] = ACTIONS(409),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(407),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(409),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(407),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(409),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(407),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(407),
    [anon_sym_nil] = ACTIONS(407),
    [anon_sym_COLONnil] = ACTIONS(409),
    [anon_sym_SQUOTE] = ACTIONS(407),
    [anon_sym_LT_LT] = ACTIONS(407),
    [anon_sym_COMMA] = ACTIONS(407),
    [anon_sym_DQUOTE] = ACTIONS(407),
    [anon_sym_LBRACE] = ACTIONS(407),
    [anon_sym_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACK] = ACTIONS(407),
    [anon_sym_RBRACK] = ACTIONS(407),
    [anon_sym_PIPE] = ACTIONS(407),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(407),
    [anon_sym_EQ_GT] = ACTIONS(407),
    [anon_sym_PERCENT] = ACTIONS(409),
    [anon_sym_defmodule] = ACTIONS(407),
    [anon_sym_end] = ACTIONS(407),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(407),
    [anon_sym_defstruct] = ACTIONS(407),
    [anon_sym_def] = ACTIONS(409),
    [anon_sym_defp] = ACTIONS(407),
    [sym_comment] = ACTIONS(43),
  },
  [100] = {
    [aux_sym_keyword_list_repeat1] = STATE(127),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_RBRACE] = ACTIONS(413),
    [sym_comment] = ACTIONS(43),
  },
  [101] = {
    [aux_sym_keyword_list_repeat1] = STATE(130),
    [aux_sym__map_body_repeat1] = STATE(131),
    [anon_sym_COMMA] = ACTIONS(415),
    [anon_sym_RBRACE] = ACTIONS(417),
    [sym_comment] = ACTIONS(43),
  },
  [102] = {
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
    [anon_sym_defstruct] = ACTIONS(419),
    [anon_sym_def] = ACTIONS(421),
    [anon_sym_defp] = ACTIONS(419),
    [sym_comment] = ACTIONS(43),
  },
  [103] = {
    [sym__value] = STATE(132),
    [sym_true] = STATE(132),
    [sym_false] = STATE(132),
    [sym_atom] = STATE(132),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(133),
    [sym_nil] = STATE(132),
    [sym_charlist] = STATE(132),
    [sym_binary] = STATE(132),
    [sym_string] = STATE(132),
    [sym_tuple] = STATE(132),
    [sym__list_or_keyword_list] = STATE(132),
    [sym_list] = STATE(132),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(132),
    [sym__map] = STATE(132),
    [sym_map] = STATE(132),
    [sym_map_update] = STATE(132),
    [sym_struct] = STATE(132),
    [sym_implicit_keyword_list] = STATE(132),
    [sym_defmodule] = STATE(132),
    [sym_alias] = ACTIONS(423),
    [sym_integer] = ACTIONS(423),
    [sym_float] = ACTIONS(425),
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
    [anon_sym_end] = ACTIONS(427),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(429),
    [anon_sym_defstruct] = ACTIONS(427),
    [anon_sym_def] = ACTIONS(427),
    [anon_sym_defp] = ACTIONS(427),
    [sym_comment] = ACTIONS(43),
  },
  [104] = {
    [sym_keyword] = STATE(133),
    [sym_list] = STATE(135),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_implicit_keyword_list] = STATE(135),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(431),
    [sym_comment] = ACTIONS(43),
  },
  [105] = {
    [sym__function] = STATE(137),
    [sym_identifier] = ACTIONS(433),
    [sym_comment] = ACTIONS(43),
  },
  [106] = {
    [sym__function] = STATE(138),
    [sym_identifier] = ACTIONS(433),
    [sym_comment] = ACTIONS(43),
  },
  [107] = {
    [sym__module_body] = STATE(140),
    [sym_module_attribute] = STATE(140),
    [sym_defstruct] = STATE(140),
    [sym_def] = STATE(140),
    [sym_defp] = STATE(140),
    [aux_sym_defmodule_repeat1] = STATE(140),
    [anon_sym_end] = ACTIONS(435),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(331),
    [anon_sym_defstruct] = ACTIONS(333),
    [anon_sym_def] = ACTIONS(335),
    [anon_sym_defp] = ACTIONS(337),
    [sym_comment] = ACTIONS(43),
  },
  [108] = {
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
    [anon_sym_defstruct] = ACTIONS(437),
    [anon_sym_def] = ACTIONS(439),
    [anon_sym_defp] = ACTIONS(437),
    [sym_comment] = ACTIONS(43),
  },
  [109] = {
    [sym_charlist] = STATE(19),
    [sym_binary_segment] = STATE(70),
    [sym_string] = STATE(19),
    [sym_integer] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(43),
  },
  [110] = {
    [sym_keyword] = STATE(85),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [sym_comment] = ACTIONS(43),
  },
  [111] = {
    [aux_sym_keyword_list_repeat1] = STATE(94),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_RBRACE] = ACTIONS(441),
    [sym_comment] = ACTIONS(43),
  },
  [112] = {
    [anon_sym_RBRACE] = ACTIONS(443),
    [sym_comment] = ACTIONS(43),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(445),
    [sym_alias] = ACTIONS(445),
    [sym_integer] = ACTIONS(447),
    [sym_float] = ACTIONS(445),
    [anon_sym_true] = ACTIONS(445),
    [anon_sym_COLONtrue] = ACTIONS(447),
    [anon_sym_false] = ACTIONS(445),
    [anon_sym_COLONfalse] = ACTIONS(447),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(447),
    [anon_sym_COLON_BANG] = ACTIONS(447),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(447),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(445),
    [anon_sym_COLON_AMP] = ACTIONS(447),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(447),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(445),
    [anon_sym_COLON_STAR] = ACTIONS(445),
    [anon_sym_COLON_PLUS] = ACTIONS(447),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(445),
    [anon_sym_COLON_DASH] = ACTIONS(447),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(445),
    [anon_sym_COLON_DOT] = ACTIONS(447),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(445),
    [anon_sym_COLON_SLASH] = ACTIONS(445),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(445),
    [anon_sym_COLON_LT] = ACTIONS(447),
    [anon_sym_COLON_LT_DASH] = ACTIONS(445),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(445),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(445),
    [anon_sym_COLON_LT_EQ] = ACTIONS(445),
    [anon_sym_COLON_LT_GT] = ACTIONS(445),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(445),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(447),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(445),
    [anon_sym_COLON_EQ] = ACTIONS(447),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(447),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(445),
    [anon_sym_COLON_EQ_GT] = ACTIONS(445),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(445),
    [anon_sym_COLON_GT] = ACTIONS(447),
    [anon_sym_COLON_GT_EQ] = ACTIONS(445),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(445),
    [anon_sym_COLON_AT] = ACTIONS(445),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(445),
    [anon_sym_COLON_CARET] = ACTIONS(445),
    [anon_sym_COLON_PIPE] = ACTIONS(447),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(445),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(447),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(445),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(447),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(445),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(445),
    [anon_sym_nil] = ACTIONS(445),
    [anon_sym_COLONnil] = ACTIONS(447),
    [anon_sym_SQUOTE] = ACTIONS(445),
    [anon_sym_LT_LT] = ACTIONS(445),
    [anon_sym_COMMA] = ACTIONS(445),
    [anon_sym_DQUOTE] = ACTIONS(445),
    [anon_sym_LBRACE] = ACTIONS(445),
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(445),
    [anon_sym_RBRACK] = ACTIONS(445),
    [anon_sym_PIPE] = ACTIONS(445),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(445),
    [anon_sym_EQ_GT] = ACTIONS(445),
    [anon_sym_PERCENT] = ACTIONS(447),
    [anon_sym_defmodule] = ACTIONS(445),
    [anon_sym_end] = ACTIONS(445),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(445),
    [anon_sym_defstruct] = ACTIONS(445),
    [anon_sym_def] = ACTIONS(447),
    [anon_sym_defp] = ACTIONS(445),
    [sym_comment] = ACTIONS(43),
  },
  [114] = {
    [anon_sym_COMMA] = ACTIONS(449),
    [anon_sym_RBRACE] = ACTIONS(443),
    [sym_comment] = ACTIONS(43),
  },
  [115] = {
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
  [116] = {
    [aux_sym_keyword_list_repeat1] = STATE(87),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_RBRACK] = ACTIONS(441),
    [sym_comment] = ACTIONS(43),
  },
  [117] = {
    [anon_sym_RBRACK] = ACTIONS(451),
    [sym_comment] = ACTIONS(43),
  },
  [118] = {
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
    [anon_sym_def] = ACTIONS(455),
    [anon_sym_defp] = ACTIONS(453),
    [sym_comment] = ACTIONS(43),
  },
  [119] = {
    [anon_sym_COMMA] = ACTIONS(457),
    [anon_sym_RBRACK] = ACTIONS(451),
    [sym_comment] = ACTIONS(43),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(459),
    [sym_alias] = ACTIONS(459),
    [sym_integer] = ACTIONS(461),
    [sym_float] = ACTIONS(459),
    [anon_sym_true] = ACTIONS(459),
    [anon_sym_COLONtrue] = ACTIONS(461),
    [anon_sym_false] = ACTIONS(459),
    [anon_sym_COLONfalse] = ACTIONS(461),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(461),
    [anon_sym_COLON_BANG] = ACTIONS(461),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(461),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(459),
    [anon_sym_COLON_AMP] = ACTIONS(461),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(461),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(459),
    [anon_sym_COLON_STAR] = ACTIONS(459),
    [anon_sym_COLON_PLUS] = ACTIONS(461),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(459),
    [anon_sym_COLON_DASH] = ACTIONS(461),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(459),
    [anon_sym_COLON_DOT] = ACTIONS(461),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(459),
    [anon_sym_COLON_SLASH] = ACTIONS(459),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(459),
    [anon_sym_COLON_LT] = ACTIONS(461),
    [anon_sym_COLON_LT_DASH] = ACTIONS(459),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(459),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(459),
    [anon_sym_COLON_LT_EQ] = ACTIONS(459),
    [anon_sym_COLON_LT_GT] = ACTIONS(459),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(459),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(461),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(459),
    [anon_sym_COLON_EQ] = ACTIONS(461),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(461),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(459),
    [anon_sym_COLON_EQ_GT] = ACTIONS(459),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(459),
    [anon_sym_COLON_GT] = ACTIONS(461),
    [anon_sym_COLON_GT_EQ] = ACTIONS(459),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(459),
    [anon_sym_COLON_AT] = ACTIONS(459),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(459),
    [anon_sym_COLON_CARET] = ACTIONS(459),
    [anon_sym_COLON_PIPE] = ACTIONS(461),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(459),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(461),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(459),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(461),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(459),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(459),
    [anon_sym_nil] = ACTIONS(459),
    [anon_sym_COLONnil] = ACTIONS(461),
    [anon_sym_SQUOTE] = ACTIONS(459),
    [anon_sym_LT_LT] = ACTIONS(459),
    [anon_sym_COMMA] = ACTIONS(459),
    [anon_sym_DQUOTE] = ACTIONS(459),
    [anon_sym_LBRACE] = ACTIONS(459),
    [anon_sym_RBRACE] = ACTIONS(459),
    [anon_sym_LBRACK] = ACTIONS(459),
    [anon_sym_RBRACK] = ACTIONS(459),
    [anon_sym_PIPE] = ACTIONS(459),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(459),
    [anon_sym_EQ_GT] = ACTIONS(459),
    [anon_sym_PERCENT] = ACTIONS(461),
    [anon_sym_defmodule] = ACTIONS(459),
    [anon_sym_end] = ACTIONS(459),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(459),
    [anon_sym_defstruct] = ACTIONS(459),
    [anon_sym_def] = ACTIONS(461),
    [anon_sym_defp] = ACTIONS(459),
    [sym_comment] = ACTIONS(43),
  },
  [121] = {
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
    [anon_sym_def] = ACTIONS(465),
    [anon_sym_defp] = ACTIONS(463),
    [sym_comment] = ACTIONS(43),
  },
  [122] = {
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
    [anon_sym_def] = ACTIONS(469),
    [anon_sym_defp] = ACTIONS(467),
    [sym_comment] = ACTIONS(43),
  },
  [123] = {
    [sym_keyword] = STATE(85),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(471),
    [sym_comment] = ACTIONS(43),
  },
  [124] = {
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
    [sym_alias] = ACTIONS(307),
    [sym_integer] = ACTIONS(305),
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
  [125] = {
    [sym_keyword] = STATE(85),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(473),
    [sym_comment] = ACTIONS(43),
  },
  [126] = {
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
    [anon_sym_def] = ACTIONS(477),
    [anon_sym_defp] = ACTIONS(475),
    [sym_comment] = ACTIONS(43),
  },
  [127] = {
    [aux_sym_keyword_list_repeat1] = STATE(94),
    [anon_sym_COMMA] = ACTIONS(479),
    [anon_sym_RBRACE] = ACTIONS(473),
    [sym_comment] = ACTIONS(43),
  },
  [128] = {
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
    [sym_alias] = ACTIONS(305),
    [sym_integer] = ACTIONS(305),
    [sym_float] = ACTIONS(307),
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
    [anon_sym_RBRACE] = ACTIONS(481),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [129] = {
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
    [anon_sym_def] = ACTIONS(485),
    [anon_sym_defp] = ACTIONS(483),
    [sym_comment] = ACTIONS(43),
  },
  [130] = {
    [aux_sym_keyword_list_repeat1] = STATE(94),
    [anon_sym_COMMA] = ACTIONS(487),
    [anon_sym_RBRACE] = ACTIONS(481),
    [sym_comment] = ACTIONS(43),
  },
  [131] = {
    [aux_sym_keyword_list_repeat1] = STATE(150),
    [aux_sym__map_body_repeat1] = STATE(98),
    [anon_sym_COMMA] = ACTIONS(489),
    [anon_sym_RBRACE] = ACTIONS(481),
    [sym_comment] = ACTIONS(43),
  },
  [132] = {
    [anon_sym_end] = ACTIONS(491),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(491),
    [anon_sym_defstruct] = ACTIONS(491),
    [anon_sym_def] = ACTIONS(493),
    [anon_sym_defp] = ACTIONS(491),
    [sym_comment] = ACTIONS(43),
  },
  [133] = {
    [aux_sym_keyword_list_repeat1] = STATE(151),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_end] = ACTIONS(360),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(360),
    [anon_sym_defstruct] = ACTIONS(360),
    [anon_sym_def] = ACTIONS(495),
    [anon_sym_defp] = ACTIONS(360),
    [sym_comment] = ACTIONS(43),
  },
  [134] = {
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
  [135] = {
    [anon_sym_end] = ACTIONS(497),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(497),
    [anon_sym_defstruct] = ACTIONS(497),
    [anon_sym_def] = ACTIONS(499),
    [anon_sym_defp] = ACTIONS(497),
    [sym_comment] = ACTIONS(43),
  },
  [136] = {
    [anon_sym_do] = ACTIONS(501),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(503),
    [sym_comment] = ACTIONS(43),
  },
  [137] = {
    [anon_sym_end] = ACTIONS(505),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(505),
    [anon_sym_defstruct] = ACTIONS(505),
    [anon_sym_def] = ACTIONS(507),
    [anon_sym_defp] = ACTIONS(505),
    [sym_comment] = ACTIONS(43),
  },
  [138] = {
    [anon_sym_end] = ACTIONS(509),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(509),
    [anon_sym_defstruct] = ACTIONS(509),
    [anon_sym_def] = ACTIONS(511),
    [anon_sym_defp] = ACTIONS(509),
    [sym_comment] = ACTIONS(43),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(513),
    [sym_alias] = ACTIONS(513),
    [sym_integer] = ACTIONS(515),
    [sym_float] = ACTIONS(513),
    [anon_sym_true] = ACTIONS(513),
    [anon_sym_COLONtrue] = ACTIONS(515),
    [anon_sym_false] = ACTIONS(513),
    [anon_sym_COLONfalse] = ACTIONS(515),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(515),
    [anon_sym_COLON_BANG] = ACTIONS(515),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(515),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(513),
    [anon_sym_COLON_AMP] = ACTIONS(515),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(515),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(513),
    [anon_sym_COLON_STAR] = ACTIONS(513),
    [anon_sym_COLON_PLUS] = ACTIONS(515),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(513),
    [anon_sym_COLON_DASH] = ACTIONS(515),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(513),
    [anon_sym_COLON_DOT] = ACTIONS(515),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(513),
    [anon_sym_COLON_SLASH] = ACTIONS(513),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(513),
    [anon_sym_COLON_LT] = ACTIONS(515),
    [anon_sym_COLON_LT_DASH] = ACTIONS(513),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(513),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(513),
    [anon_sym_COLON_LT_EQ] = ACTIONS(513),
    [anon_sym_COLON_LT_GT] = ACTIONS(513),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(513),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(515),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(513),
    [anon_sym_COLON_EQ] = ACTIONS(515),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(515),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(513),
    [anon_sym_COLON_EQ_GT] = ACTIONS(513),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(513),
    [anon_sym_COLON_GT] = ACTIONS(515),
    [anon_sym_COLON_GT_EQ] = ACTIONS(513),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(513),
    [anon_sym_COLON_AT] = ACTIONS(513),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(513),
    [anon_sym_COLON_CARET] = ACTIONS(513),
    [anon_sym_COLON_PIPE] = ACTIONS(515),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(513),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(515),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(513),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(515),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(513),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(513),
    [anon_sym_nil] = ACTIONS(513),
    [anon_sym_COLONnil] = ACTIONS(515),
    [anon_sym_SQUOTE] = ACTIONS(513),
    [anon_sym_LT_LT] = ACTIONS(513),
    [anon_sym_COMMA] = ACTIONS(513),
    [anon_sym_DQUOTE] = ACTIONS(513),
    [anon_sym_LBRACE] = ACTIONS(513),
    [anon_sym_RBRACE] = ACTIONS(513),
    [anon_sym_LBRACK] = ACTIONS(513),
    [anon_sym_RBRACK] = ACTIONS(513),
    [anon_sym_PIPE] = ACTIONS(513),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(513),
    [anon_sym_EQ_GT] = ACTIONS(513),
    [anon_sym_PERCENT] = ACTIONS(515),
    [anon_sym_defmodule] = ACTIONS(513),
    [anon_sym_end] = ACTIONS(513),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(513),
    [anon_sym_defstruct] = ACTIONS(513),
    [anon_sym_def] = ACTIONS(515),
    [anon_sym_defp] = ACTIONS(513),
    [sym_comment] = ACTIONS(43),
  },
  [140] = {
    [sym__module_body] = STATE(140),
    [sym_module_attribute] = STATE(140),
    [sym_defstruct] = STATE(140),
    [sym_def] = STATE(140),
    [sym_defp] = STATE(140),
    [aux_sym_defmodule_repeat1] = STATE(140),
    [anon_sym_end] = ACTIONS(517),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(519),
    [anon_sym_defstruct] = ACTIONS(522),
    [anon_sym_def] = ACTIONS(525),
    [anon_sym_defp] = ACTIONS(528),
    [sym_comment] = ACTIONS(43),
  },
  [141] = {
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
    [anon_sym_def] = ACTIONS(533),
    [anon_sym_defp] = ACTIONS(531),
    [sym_comment] = ACTIONS(43),
  },
  [142] = {
    [anon_sym_RBRACE] = ACTIONS(535),
    [sym_comment] = ACTIONS(43),
  },
  [143] = {
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
    [anon_sym_def] = ACTIONS(539),
    [anon_sym_defp] = ACTIONS(537),
    [sym_comment] = ACTIONS(43),
  },
  [144] = {
    [anon_sym_RBRACK] = ACTIONS(541),
    [sym_comment] = ACTIONS(43),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(543),
    [sym_alias] = ACTIONS(543),
    [sym_integer] = ACTIONS(545),
    [sym_float] = ACTIONS(543),
    [anon_sym_true] = ACTIONS(543),
    [anon_sym_COLONtrue] = ACTIONS(545),
    [anon_sym_false] = ACTIONS(543),
    [anon_sym_COLONfalse] = ACTIONS(545),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(545),
    [anon_sym_COLON_BANG] = ACTIONS(545),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(545),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(543),
    [anon_sym_COLON_AMP] = ACTIONS(545),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(545),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(543),
    [anon_sym_COLON_STAR] = ACTIONS(543),
    [anon_sym_COLON_PLUS] = ACTIONS(545),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(543),
    [anon_sym_COLON_DASH] = ACTIONS(545),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(543),
    [anon_sym_COLON_DOT] = ACTIONS(545),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(543),
    [anon_sym_COLON_SLASH] = ACTIONS(543),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(543),
    [anon_sym_COLON_LT] = ACTIONS(545),
    [anon_sym_COLON_LT_DASH] = ACTIONS(543),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(543),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(543),
    [anon_sym_COLON_LT_EQ] = ACTIONS(543),
    [anon_sym_COLON_LT_GT] = ACTIONS(543),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(543),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(545),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(543),
    [anon_sym_COLON_EQ] = ACTIONS(545),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(545),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(543),
    [anon_sym_COLON_EQ_GT] = ACTIONS(543),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(543),
    [anon_sym_COLON_GT] = ACTIONS(545),
    [anon_sym_COLON_GT_EQ] = ACTIONS(543),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(543),
    [anon_sym_COLON_AT] = ACTIONS(543),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(543),
    [anon_sym_COLON_CARET] = ACTIONS(543),
    [anon_sym_COLON_PIPE] = ACTIONS(545),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(543),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(545),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(543),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(545),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(543),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(543),
    [anon_sym_nil] = ACTIONS(543),
    [anon_sym_COLONnil] = ACTIONS(545),
    [anon_sym_SQUOTE] = ACTIONS(543),
    [anon_sym_LT_LT] = ACTIONS(543),
    [anon_sym_COMMA] = ACTIONS(543),
    [anon_sym_DQUOTE] = ACTIONS(543),
    [anon_sym_LBRACE] = ACTIONS(543),
    [anon_sym_RBRACE] = ACTIONS(543),
    [anon_sym_LBRACK] = ACTIONS(543),
    [anon_sym_RBRACK] = ACTIONS(543),
    [anon_sym_PIPE] = ACTIONS(543),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(543),
    [anon_sym_EQ_GT] = ACTIONS(543),
    [anon_sym_PERCENT] = ACTIONS(545),
    [anon_sym_defmodule] = ACTIONS(543),
    [anon_sym_end] = ACTIONS(543),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(543),
    [anon_sym_defstruct] = ACTIONS(543),
    [anon_sym_def] = ACTIONS(545),
    [anon_sym_defp] = ACTIONS(543),
    [sym_comment] = ACTIONS(43),
  },
  [146] = {
    [sym_keyword] = STATE(85),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(547),
    [sym_comment] = ACTIONS(43),
  },
  [147] = {
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
    [anon_sym_def] = ACTIONS(551),
    [anon_sym_defp] = ACTIONS(549),
    [sym_comment] = ACTIONS(43),
  },
  [148] = {
    [sym_keyword] = STATE(85),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(553),
    [sym_comment] = ACTIONS(43),
  },
  [149] = {
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
    [sym_alias] = ACTIONS(305),
    [sym_integer] = ACTIONS(305),
    [sym_float] = ACTIONS(307),
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
    [anon_sym_RBRACE] = ACTIONS(553),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [150] = {
    [aux_sym_keyword_list_repeat1] = STATE(94),
    [anon_sym_COMMA] = ACTIONS(555),
    [anon_sym_RBRACE] = ACTIONS(553),
    [sym_comment] = ACTIONS(43),
  },
  [151] = {
    [aux_sym_keyword_list_repeat1] = STATE(159),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_end] = ACTIONS(441),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(441),
    [anon_sym_defstruct] = ACTIONS(441),
    [anon_sym_def] = ACTIONS(557),
    [anon_sym_defp] = ACTIONS(441),
    [sym_comment] = ACTIONS(43),
  },
  [152] = {
    [sym__value] = STATE(160),
    [sym_true] = STATE(160),
    [sym_false] = STATE(160),
    [sym_atom] = STATE(160),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(160),
    [sym_charlist] = STATE(160),
    [sym_binary] = STATE(160),
    [sym_string] = STATE(160),
    [sym_tuple] = STATE(160),
    [sym__list_or_keyword_list] = STATE(160),
    [sym_list] = STATE(160),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(160),
    [sym__map] = STATE(160),
    [sym_map] = STATE(160),
    [sym_map_update] = STATE(160),
    [sym_struct] = STATE(160),
    [sym_defmodule] = STATE(160),
    [sym_alias] = ACTIONS(559),
    [sym_integer] = ACTIONS(561),
    [sym_float] = ACTIONS(559),
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
  [153] = {
    [anon_sym_do] = ACTIONS(563),
    [sym_comment] = ACTIONS(43),
  },
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(565),
    [sym_alias] = ACTIONS(565),
    [sym_integer] = ACTIONS(567),
    [sym_float] = ACTIONS(565),
    [anon_sym_true] = ACTIONS(565),
    [anon_sym_COLONtrue] = ACTIONS(567),
    [anon_sym_false] = ACTIONS(565),
    [anon_sym_COLONfalse] = ACTIONS(567),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(567),
    [anon_sym_COLON_BANG] = ACTIONS(567),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(567),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(565),
    [anon_sym_COLON_AMP] = ACTIONS(567),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(567),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(565),
    [anon_sym_COLON_STAR] = ACTIONS(565),
    [anon_sym_COLON_PLUS] = ACTIONS(567),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(565),
    [anon_sym_COLON_DASH] = ACTIONS(567),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(565),
    [anon_sym_COLON_DOT] = ACTIONS(567),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(565),
    [anon_sym_COLON_SLASH] = ACTIONS(565),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(565),
    [anon_sym_COLON_LT] = ACTIONS(567),
    [anon_sym_COLON_LT_DASH] = ACTIONS(565),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(565),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(565),
    [anon_sym_COLON_LT_EQ] = ACTIONS(565),
    [anon_sym_COLON_LT_GT] = ACTIONS(565),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(565),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(567),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(565),
    [anon_sym_COLON_EQ] = ACTIONS(567),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(567),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(565),
    [anon_sym_COLON_EQ_GT] = ACTIONS(565),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(565),
    [anon_sym_COLON_GT] = ACTIONS(567),
    [anon_sym_COLON_GT_EQ] = ACTIONS(565),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(565),
    [anon_sym_COLON_AT] = ACTIONS(565),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(565),
    [anon_sym_COLON_CARET] = ACTIONS(565),
    [anon_sym_COLON_PIPE] = ACTIONS(567),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(565),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(567),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(565),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(567),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(565),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(565),
    [anon_sym_nil] = ACTIONS(565),
    [anon_sym_COLONnil] = ACTIONS(567),
    [anon_sym_SQUOTE] = ACTIONS(565),
    [anon_sym_LT_LT] = ACTIONS(565),
    [anon_sym_COMMA] = ACTIONS(565),
    [anon_sym_DQUOTE] = ACTIONS(565),
    [anon_sym_LBRACE] = ACTIONS(565),
    [anon_sym_RBRACE] = ACTIONS(565),
    [anon_sym_LBRACK] = ACTIONS(565),
    [anon_sym_RBRACK] = ACTIONS(565),
    [anon_sym_PIPE] = ACTIONS(565),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(565),
    [anon_sym_EQ_GT] = ACTIONS(565),
    [anon_sym_PERCENT] = ACTIONS(567),
    [anon_sym_defmodule] = ACTIONS(565),
    [anon_sym_end] = ACTIONS(565),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(565),
    [anon_sym_defstruct] = ACTIONS(565),
    [anon_sym_def] = ACTIONS(567),
    [anon_sym_defp] = ACTIONS(565),
    [sym_comment] = ACTIONS(43),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(569),
    [sym_alias] = ACTIONS(569),
    [sym_integer] = ACTIONS(571),
    [sym_float] = ACTIONS(569),
    [anon_sym_true] = ACTIONS(569),
    [anon_sym_COLONtrue] = ACTIONS(571),
    [anon_sym_false] = ACTIONS(569),
    [anon_sym_COLONfalse] = ACTIONS(571),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(571),
    [anon_sym_COLON_BANG] = ACTIONS(571),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(571),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(569),
    [anon_sym_COLON_AMP] = ACTIONS(571),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(571),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(569),
    [anon_sym_COLON_STAR] = ACTIONS(569),
    [anon_sym_COLON_PLUS] = ACTIONS(571),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(569),
    [anon_sym_COLON_DASH] = ACTIONS(571),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(569),
    [anon_sym_COLON_DOT] = ACTIONS(571),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(569),
    [anon_sym_COLON_SLASH] = ACTIONS(569),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(569),
    [anon_sym_COLON_LT] = ACTIONS(571),
    [anon_sym_COLON_LT_DASH] = ACTIONS(569),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(569),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(569),
    [anon_sym_COLON_LT_EQ] = ACTIONS(569),
    [anon_sym_COLON_LT_GT] = ACTIONS(569),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(569),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(571),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(569),
    [anon_sym_COLON_EQ] = ACTIONS(571),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(571),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(569),
    [anon_sym_COLON_EQ_GT] = ACTIONS(569),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(569),
    [anon_sym_COLON_GT] = ACTIONS(571),
    [anon_sym_COLON_GT_EQ] = ACTIONS(569),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(569),
    [anon_sym_COLON_AT] = ACTIONS(569),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(569),
    [anon_sym_COLON_CARET] = ACTIONS(569),
    [anon_sym_COLON_PIPE] = ACTIONS(571),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(569),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(571),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(569),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(571),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(569),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(569),
    [anon_sym_nil] = ACTIONS(569),
    [anon_sym_COLONnil] = ACTIONS(571),
    [anon_sym_SQUOTE] = ACTIONS(569),
    [anon_sym_LT_LT] = ACTIONS(569),
    [anon_sym_COMMA] = ACTIONS(569),
    [anon_sym_DQUOTE] = ACTIONS(569),
    [anon_sym_LBRACE] = ACTIONS(569),
    [anon_sym_RBRACE] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(569),
    [anon_sym_RBRACK] = ACTIONS(569),
    [anon_sym_PIPE] = ACTIONS(569),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(569),
    [anon_sym_EQ_GT] = ACTIONS(569),
    [anon_sym_PERCENT] = ACTIONS(571),
    [anon_sym_defmodule] = ACTIONS(569),
    [anon_sym_end] = ACTIONS(569),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(569),
    [anon_sym_defstruct] = ACTIONS(569),
    [anon_sym_def] = ACTIONS(571),
    [anon_sym_defp] = ACTIONS(569),
    [sym_comment] = ACTIONS(43),
  },
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(573),
    [sym_alias] = ACTIONS(573),
    [sym_integer] = ACTIONS(575),
    [sym_float] = ACTIONS(573),
    [anon_sym_true] = ACTIONS(573),
    [anon_sym_COLONtrue] = ACTIONS(575),
    [anon_sym_false] = ACTIONS(573),
    [anon_sym_COLONfalse] = ACTIONS(575),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(575),
    [anon_sym_COLON_BANG] = ACTIONS(575),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(575),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(573),
    [anon_sym_COLON_AMP] = ACTIONS(575),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(575),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(573),
    [anon_sym_COLON_STAR] = ACTIONS(573),
    [anon_sym_COLON_PLUS] = ACTIONS(575),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(573),
    [anon_sym_COLON_DASH] = ACTIONS(575),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(573),
    [anon_sym_COLON_DOT] = ACTIONS(575),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(573),
    [anon_sym_COLON_SLASH] = ACTIONS(573),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(573),
    [anon_sym_COLON_LT] = ACTIONS(575),
    [anon_sym_COLON_LT_DASH] = ACTIONS(573),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(573),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(573),
    [anon_sym_COLON_LT_EQ] = ACTIONS(573),
    [anon_sym_COLON_LT_GT] = ACTIONS(573),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(573),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(575),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(573),
    [anon_sym_COLON_EQ] = ACTIONS(575),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(575),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(573),
    [anon_sym_COLON_EQ_GT] = ACTIONS(573),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(573),
    [anon_sym_COLON_GT] = ACTIONS(575),
    [anon_sym_COLON_GT_EQ] = ACTIONS(573),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(573),
    [anon_sym_COLON_AT] = ACTIONS(573),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(573),
    [anon_sym_COLON_CARET] = ACTIONS(573),
    [anon_sym_COLON_PIPE] = ACTIONS(575),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(573),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(575),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(573),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(575),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(573),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(573),
    [anon_sym_nil] = ACTIONS(573),
    [anon_sym_COLONnil] = ACTIONS(575),
    [anon_sym_SQUOTE] = ACTIONS(573),
    [anon_sym_LT_LT] = ACTIONS(573),
    [anon_sym_COMMA] = ACTIONS(573),
    [anon_sym_DQUOTE] = ACTIONS(573),
    [anon_sym_LBRACE] = ACTIONS(573),
    [anon_sym_RBRACE] = ACTIONS(573),
    [anon_sym_LBRACK] = ACTIONS(573),
    [anon_sym_RBRACK] = ACTIONS(573),
    [anon_sym_PIPE] = ACTIONS(573),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(573),
    [anon_sym_EQ_GT] = ACTIONS(573),
    [anon_sym_PERCENT] = ACTIONS(575),
    [anon_sym_defmodule] = ACTIONS(573),
    [anon_sym_end] = ACTIONS(573),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(573),
    [anon_sym_defstruct] = ACTIONS(573),
    [anon_sym_def] = ACTIONS(575),
    [anon_sym_defp] = ACTIONS(573),
    [sym_comment] = ACTIONS(43),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(577),
    [sym_alias] = ACTIONS(577),
    [sym_integer] = ACTIONS(579),
    [sym_float] = ACTIONS(577),
    [anon_sym_true] = ACTIONS(577),
    [anon_sym_COLONtrue] = ACTIONS(579),
    [anon_sym_false] = ACTIONS(577),
    [anon_sym_COLONfalse] = ACTIONS(579),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(579),
    [anon_sym_COLON_BANG] = ACTIONS(579),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(579),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(577),
    [anon_sym_COLON_AMP] = ACTIONS(579),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(579),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(577),
    [anon_sym_COLON_STAR] = ACTIONS(577),
    [anon_sym_COLON_PLUS] = ACTIONS(579),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(577),
    [anon_sym_COLON_DASH] = ACTIONS(579),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(577),
    [anon_sym_COLON_DOT] = ACTIONS(579),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(577),
    [anon_sym_COLON_SLASH] = ACTIONS(577),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(577),
    [anon_sym_COLON_LT] = ACTIONS(579),
    [anon_sym_COLON_LT_DASH] = ACTIONS(577),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(577),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(577),
    [anon_sym_COLON_LT_EQ] = ACTIONS(577),
    [anon_sym_COLON_LT_GT] = ACTIONS(577),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(577),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(579),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(577),
    [anon_sym_COLON_EQ] = ACTIONS(579),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(579),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(577),
    [anon_sym_COLON_EQ_GT] = ACTIONS(577),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(577),
    [anon_sym_COLON_GT] = ACTIONS(579),
    [anon_sym_COLON_GT_EQ] = ACTIONS(577),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(577),
    [anon_sym_COLON_AT] = ACTIONS(577),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(577),
    [anon_sym_COLON_CARET] = ACTIONS(577),
    [anon_sym_COLON_PIPE] = ACTIONS(579),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(577),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(579),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(577),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(579),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(577),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(577),
    [anon_sym_nil] = ACTIONS(577),
    [anon_sym_COLONnil] = ACTIONS(579),
    [anon_sym_SQUOTE] = ACTIONS(577),
    [anon_sym_LT_LT] = ACTIONS(577),
    [anon_sym_COMMA] = ACTIONS(577),
    [anon_sym_DQUOTE] = ACTIONS(577),
    [anon_sym_LBRACE] = ACTIONS(577),
    [anon_sym_RBRACE] = ACTIONS(577),
    [anon_sym_LBRACK] = ACTIONS(577),
    [anon_sym_RBRACK] = ACTIONS(577),
    [anon_sym_PIPE] = ACTIONS(577),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(577),
    [anon_sym_EQ_GT] = ACTIONS(577),
    [anon_sym_PERCENT] = ACTIONS(579),
    [anon_sym_defmodule] = ACTIONS(577),
    [anon_sym_end] = ACTIONS(577),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(577),
    [anon_sym_defstruct] = ACTIONS(577),
    [anon_sym_def] = ACTIONS(579),
    [anon_sym_defp] = ACTIONS(577),
    [sym_comment] = ACTIONS(43),
  },
  [158] = {
    [sym_keyword] = STATE(85),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(581),
    [sym_comment] = ACTIONS(43),
  },
  [159] = {
    [aux_sym_keyword_list_repeat1] = STATE(159),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_end] = ACTIONS(381),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(381),
    [anon_sym_defstruct] = ACTIONS(381),
    [anon_sym_def] = ACTIONS(383),
    [anon_sym_defp] = ACTIONS(381),
    [sym_comment] = ACTIONS(43),
  },
  [160] = {
    [anon_sym_end] = ACTIONS(583),
    [sym_comment] = ACTIONS(43),
  },
  [161] = {
    [sym__value] = STATE(164),
    [sym_true] = STATE(164),
    [sym_false] = STATE(164),
    [sym_atom] = STATE(164),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(164),
    [sym_charlist] = STATE(164),
    [sym_binary] = STATE(164),
    [sym_string] = STATE(164),
    [sym_tuple] = STATE(164),
    [sym__list_or_keyword_list] = STATE(164),
    [sym_list] = STATE(164),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(164),
    [sym__map] = STATE(164),
    [sym_map] = STATE(164),
    [sym_map_update] = STATE(164),
    [sym_struct] = STATE(164),
    [sym_defmodule] = STATE(164),
    [sym_alias] = ACTIONS(585),
    [sym_integer] = ACTIONS(587),
    [sym_float] = ACTIONS(585),
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
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(589),
    [sym_alias] = ACTIONS(589),
    [sym_integer] = ACTIONS(591),
    [sym_float] = ACTIONS(589),
    [anon_sym_true] = ACTIONS(589),
    [anon_sym_COLONtrue] = ACTIONS(591),
    [anon_sym_false] = ACTIONS(589),
    [anon_sym_COLONfalse] = ACTIONS(591),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(591),
    [anon_sym_COLON_BANG] = ACTIONS(591),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(591),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(589),
    [anon_sym_COLON_AMP] = ACTIONS(591),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(591),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(589),
    [anon_sym_COLON_STAR] = ACTIONS(589),
    [anon_sym_COLON_PLUS] = ACTIONS(591),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(589),
    [anon_sym_COLON_DASH] = ACTIONS(591),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(589),
    [anon_sym_COLON_DOT] = ACTIONS(591),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(589),
    [anon_sym_COLON_SLASH] = ACTIONS(589),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(589),
    [anon_sym_COLON_LT] = ACTIONS(591),
    [anon_sym_COLON_LT_DASH] = ACTIONS(589),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(589),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(589),
    [anon_sym_COLON_LT_EQ] = ACTIONS(589),
    [anon_sym_COLON_LT_GT] = ACTIONS(589),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(589),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(591),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(589),
    [anon_sym_COLON_EQ] = ACTIONS(591),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(591),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(589),
    [anon_sym_COLON_EQ_GT] = ACTIONS(589),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(589),
    [anon_sym_COLON_GT] = ACTIONS(591),
    [anon_sym_COLON_GT_EQ] = ACTIONS(589),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(589),
    [anon_sym_COLON_AT] = ACTIONS(589),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(589),
    [anon_sym_COLON_CARET] = ACTIONS(589),
    [anon_sym_COLON_PIPE] = ACTIONS(591),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(589),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(591),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(589),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(591),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(589),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(589),
    [anon_sym_nil] = ACTIONS(589),
    [anon_sym_COLONnil] = ACTIONS(591),
    [anon_sym_SQUOTE] = ACTIONS(589),
    [anon_sym_LT_LT] = ACTIONS(589),
    [anon_sym_COMMA] = ACTIONS(589),
    [anon_sym_DQUOTE] = ACTIONS(589),
    [anon_sym_LBRACE] = ACTIONS(589),
    [anon_sym_RBRACE] = ACTIONS(589),
    [anon_sym_LBRACK] = ACTIONS(589),
    [anon_sym_RBRACK] = ACTIONS(589),
    [anon_sym_PIPE] = ACTIONS(589),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(589),
    [anon_sym_EQ_GT] = ACTIONS(589),
    [anon_sym_PERCENT] = ACTIONS(591),
    [anon_sym_defmodule] = ACTIONS(589),
    [anon_sym_end] = ACTIONS(589),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(589),
    [anon_sym_defstruct] = ACTIONS(589),
    [anon_sym_def] = ACTIONS(591),
    [anon_sym_defp] = ACTIONS(589),
    [sym_comment] = ACTIONS(43),
  },
  [163] = {
    [anon_sym_end] = ACTIONS(593),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(593),
    [anon_sym_defstruct] = ACTIONS(593),
    [anon_sym_def] = ACTIONS(595),
    [anon_sym_defp] = ACTIONS(593),
    [sym_comment] = ACTIONS(43),
  },
  [164] = {
    [anon_sym_end] = ACTIONS(597),
    [sym_comment] = ACTIONS(43),
  },
  [165] = {
    [anon_sym_end] = ACTIONS(599),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(599),
    [anon_sym_defstruct] = ACTIONS(599),
    [anon_sym_def] = ACTIONS(601),
    [anon_sym_defp] = ACTIONS(599),
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
  [287] = {.count = 1, .reusable = false}, REDUCE(sym_keyword, 2),
  [289] = {.count = 1, .reusable = true}, SHIFT(79),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 3),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 3),
  [295] = {.count = 1, .reusable = true}, SHIFT(82),
  [297] = {.count = 1, .reusable = true}, SHIFT(84),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_keyword_list, 3),
  [301] = {.count = 1, .reusable = false}, REDUCE(sym_keyword_list, 3),
  [303] = {.count = 1, .reusable = true}, SHIFT(86),
  [305] = {.count = 1, .reusable = false}, SHIFT(90),
  [307] = {.count = 1, .reusable = true}, SHIFT(90),
  [309] = {.count = 1, .reusable = true}, SHIFT(92),
  [311] = {.count = 1, .reusable = false}, SHIFT(92),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym__map_body, 2),
  [315] = {.count = 1, .reusable = true}, SHIFT(93),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_map, 3),
  [319] = {.count = 1, .reusable = false}, REDUCE(sym_map, 3),
  [321] = {.count = 1, .reusable = true}, SHIFT(96),
  [323] = {.count = 1, .reusable = true}, SHIFT(99),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_struct, 3),
  [327] = {.count = 1, .reusable = false}, REDUCE(sym_struct, 3),
  [329] = {.count = 1, .reusable = true}, SHIFT(102),
  [331] = {.count = 1, .reusable = true}, SHIFT(103),
  [333] = {.count = 1, .reusable = true}, SHIFT(104),
  [335] = {.count = 1, .reusable = false}, SHIFT(105),
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
  [383] = {.count = 1, .reusable = false}, REDUCE(aux_sym_keyword_list_repeat1, 2),
  [385] = {.count = 1, .reusable = true}, SHIFT(120),
  [387] = {.count = 2, .reusable = true}, REDUCE(aux_sym_keyword_list_repeat1, 2), SHIFT_REPEAT(110),
  [390] = {.count = 1, .reusable = true}, REDUCE(sym_tail, 1),
  [392] = {.count = 1, .reusable = true}, SHIFT(121),
  [394] = {.count = 1, .reusable = true}, SHIFT(122),
  [396] = {.count = 1, .reusable = true}, REDUCE(sym_pair, 3),
  [398] = {.count = 1, .reusable = true}, REDUCE(sym__map_body, 3),
  [400] = {.count = 1, .reusable = true}, REDUCE(aux_sym__map_body_repeat1, 2),
  [402] = {.count = 1, .reusable = true}, SHIFT(123),
  [404] = {.count = 2, .reusable = true}, REDUCE(aux_sym__map_body_repeat1, 2), SHIFT_REPEAT(124),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym__empty_struct_body, 2),
  [409] = {.count = 1, .reusable = false}, REDUCE(sym__empty_struct_body, 2),
  [411] = {.count = 1, .reusable = true}, SHIFT(125),
  [413] = {.count = 1, .reusable = true}, SHIFT(126),
  [415] = {.count = 1, .reusable = true}, SHIFT(128),
  [417] = {.count = 1, .reusable = true}, SHIFT(129),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym_defmodule, 4),
  [421] = {.count = 1, .reusable = false}, REDUCE(sym_defmodule, 4),
  [423] = {.count = 1, .reusable = false}, SHIFT(132),
  [425] = {.count = 1, .reusable = true}, SHIFT(132),
  [427] = {.count = 1, .reusable = false}, REDUCE(sym_module_attribute, 1),
  [429] = {.count = 1, .reusable = true}, REDUCE(sym_module_attribute, 1),
  [431] = {.count = 1, .reusable = true}, SHIFT(134),
  [433] = {.count = 1, .reusable = true}, SHIFT(136),
  [435] = {.count = 1, .reusable = true}, SHIFT(139),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 5),
  [439] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 5),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_implicit_keyword_list, 2),
  [443] = {.count = 1, .reusable = true}, SHIFT(141),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 5),
  [447] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 5),
  [449] = {.count = 1, .reusable = true}, SHIFT(142),
  [451] = {.count = 1, .reusable = true}, SHIFT(143),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 5),
  [455] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 5),
  [457] = {.count = 1, .reusable = true}, SHIFT(144),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym_keyword_list, 5),
  [461] = {.count = 1, .reusable = false}, REDUCE(sym_keyword_list, 5),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym__head_tail_list, 5),
  [465] = {.count = 1, .reusable = false}, REDUCE(sym__head_tail_list, 5),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym_map_update, 5),
  [469] = {.count = 1, .reusable = false}, REDUCE(sym_map_update, 5),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym__map_body, 4),
  [473] = {.count = 1, .reusable = true}, SHIFT(145),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym__keyword_struct_body, 3),
  [477] = {.count = 1, .reusable = false}, REDUCE(sym__keyword_struct_body, 3),
  [479] = {.count = 1, .reusable = true}, SHIFT(146),
  [481] = {.count = 1, .reusable = true}, SHIFT(147),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym__struct_body, 3),
  [485] = {.count = 1, .reusable = false}, REDUCE(sym__struct_body, 3),
  [487] = {.count = 1, .reusable = true}, SHIFT(148),
  [489] = {.count = 1, .reusable = true}, SHIFT(149),
  [491] = {.count = 1, .reusable = true}, REDUCE(sym_module_attribute, 2),
  [493] = {.count = 1, .reusable = false}, REDUCE(sym_module_attribute, 2),
  [495] = {.count = 1, .reusable = false}, REDUCE(sym_implicit_keyword_list, 1),
  [497] = {.count = 1, .reusable = true}, REDUCE(sym_defstruct, 2),
  [499] = {.count = 1, .reusable = false}, REDUCE(sym_defstruct, 2),
  [501] = {.count = 1, .reusable = true}, SHIFT(152),
  [503] = {.count = 1, .reusable = true}, SHIFT(153),
  [505] = {.count = 1, .reusable = true}, REDUCE(sym_def, 2),
  [507] = {.count = 1, .reusable = false}, REDUCE(sym_def, 2),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_defp, 2),
  [511] = {.count = 1, .reusable = false}, REDUCE(sym_defp, 2),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_defmodule, 5),
  [515] = {.count = 1, .reusable = false}, REDUCE(sym_defmodule, 5),
  [517] = {.count = 1, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2),
  [519] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2), SHIFT_REPEAT(103),
  [522] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2), SHIFT_REPEAT(104),
  [525] = {.count = 2, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2), SHIFT_REPEAT(105),
  [528] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2), SHIFT_REPEAT(106),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 6),
  [533] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 6),
  [535] = {.count = 1, .reusable = true}, SHIFT(154),
  [537] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 6),
  [539] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 6),
  [541] = {.count = 1, .reusable = true}, SHIFT(155),
  [543] = {.count = 1, .reusable = true}, REDUCE(sym__keyword_struct_body, 4),
  [545] = {.count = 1, .reusable = false}, REDUCE(sym__keyword_struct_body, 4),
  [547] = {.count = 1, .reusable = true}, SHIFT(156),
  [549] = {.count = 1, .reusable = true}, REDUCE(sym__struct_body, 4),
  [551] = {.count = 1, .reusable = false}, REDUCE(sym__struct_body, 4),
  [553] = {.count = 1, .reusable = true}, SHIFT(157),
  [555] = {.count = 1, .reusable = true}, SHIFT(158),
  [557] = {.count = 1, .reusable = false}, REDUCE(sym_implicit_keyword_list, 2),
  [559] = {.count = 1, .reusable = true}, SHIFT(160),
  [561] = {.count = 1, .reusable = false}, SHIFT(160),
  [563] = {.count = 1, .reusable = true}, SHIFT(161),
  [565] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 7),
  [567] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 7),
  [569] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 7),
  [571] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 7),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym__keyword_struct_body, 5),
  [575] = {.count = 1, .reusable = false}, REDUCE(sym__keyword_struct_body, 5),
  [577] = {.count = 1, .reusable = true}, REDUCE(sym__struct_body, 5),
  [579] = {.count = 1, .reusable = false}, REDUCE(sym__struct_body, 5),
  [581] = {.count = 1, .reusable = true}, SHIFT(162),
  [583] = {.count = 1, .reusable = true}, SHIFT(163),
  [585] = {.count = 1, .reusable = true}, SHIFT(164),
  [587] = {.count = 1, .reusable = false}, SHIFT(164),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym__struct_body, 6),
  [591] = {.count = 1, .reusable = false}, REDUCE(sym__struct_body, 6),
  [593] = {.count = 1, .reusable = true}, REDUCE(sym__function, 4),
  [595] = {.count = 1, .reusable = false}, REDUCE(sym__function, 4),
  [597] = {.count = 1, .reusable = true}, SHIFT(165),
  [599] = {.count = 1, .reusable = true}, REDUCE(sym__function, 5),
  [601] = {.count = 1, .reusable = false}, REDUCE(sym__function, 5),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
