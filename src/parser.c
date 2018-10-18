#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 162
#define SYMBOL_COUNT 126
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
  anon_sym_LT_LT = 54,
  anon_sym_COMMA = 55,
  anon_sym_GT_GT = 56,
  anon_sym_COLON_COLON = 57,
  sym_binary_options = 58,
  anon_sym_SQUOTE = 59,
  aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH = 60,
  anon_sym_DQUOTE = 61,
  aux_sym_SLASH_LPAREN_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_RPAREN_STAR_SLASH = 62,
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
  sym_binary = 90,
  sym_binary_segment = 91,
  sym_charlist = 92,
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
  aux_sym_binary_repeat1 = 121,
  aux_sym_tuple_repeat1 = 122,
  aux_sym_keyword_list_repeat1 = 123,
  aux_sym__map_body_repeat1 = 124,
  aux_sym_defmodule_repeat1 = 125,
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
  [anon_sym_LT_LT] = "<<",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_COLON_COLON] = "::",
  [sym_binary_options] = "binary_options",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH] = "/(\\\\'|[^'])*/",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_LPAREN_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_RPAREN_STAR_SLASH] = "/(\\\\\"|[^\"])*/",
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
  [sym_binary] = "binary",
  [sym_binary_segment] = "binary_segment",
  [sym_charlist] = "charlist",
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
  [aux_sym_binary_repeat1] = "binary_repeat1",
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LPAREN_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_RPAREN_STAR_SLASH] = {
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
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_segment] = {
    .visible = true,
    .named = true,
  },
  [sym_charlist] = {
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
  [aux_sym_binary_repeat1] = {
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
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(6);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(2);
      if (lookahead == '0')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(23);
      if (lookahead == '<')
        ADVANCE(53);
      if (lookahead == '=')
        ADVANCE(36);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(54);
      if (lookahead == '[')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(55);
      if (lookahead == ']')
        ADVANCE(2);
      if (lookahead == '{')
        ADVANCE(2);
      if (lookahead == '|')
        ADVANCE(2);
      if (lookahead == '}')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(56);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(57);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      ADVANCE(2);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(2);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(4);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead == '{')
        ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == ')')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead == '_')
        ADVANCE(15);
      if (lookahead == 'b')
        ADVANCE(17);
      if (lookahead == 'o')
        ADVANCE(19);
      if (lookahead == 'x')
        ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\\')
        ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead == '_')
        ADVANCE(10);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\\')
        ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead == '_')
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\\')
        ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead == '_')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead == '_')
        ADVANCE(17);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\\')
        ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead == '_')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\\')
        ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead == '_')
        ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '!')
        ADVANCE(24);
      if (lookahead == '\"')
        ADVANCE(26);
      if (lookahead == '&')
        ADVANCE(28);
      if (lookahead == '*')
        ADVANCE(2);
      if (lookahead == '+')
        ADVANCE(30);
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == '.')
        ADVANCE(32);
      if (lookahead == '/')
        ADVANCE(2);
      if (lookahead == ':')
        ADVANCE(33);
      if (lookahead == '<')
        ADVANCE(34);
      if (lookahead == '=')
        ADVANCE(37);
      if (lookahead == '>')
        ADVANCE(38);
      if (lookahead == '@')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(39);
      if (lookahead == '^')
        ADVANCE(2);
      if (lookahead == 'f')
        ADVANCE(40);
      if (lookahead == 'n')
        ADVANCE(45);
      if (lookahead == 't')
        ADVANCE(47);
      if (lookahead == '|')
        ADVANCE(49);
      if (lookahead == '~')
        ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '=')
        ADVANCE(25);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '=')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(26);
      if (lookahead == '\\')
        ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(26);
      if (lookahead == '\'')
        ADVANCE(26);
      if (lookahead == '\\')
        ADVANCE(27);
      if (lookahead != 0)
        ADVANCE(26);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '&')
        ADVANCE(29);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '&')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '+')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '-')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '.')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == ':')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '-')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == '=')
        ADVANCE(2);
      if (lookahead == '>')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead == '|')
        ADVANCE(36);
      if (lookahead == '~')
        ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '<')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead == '~')
        ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '>')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '=')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead == '~')
        ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '=')
        ADVANCE(2);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\'')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(2);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '?')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead == 'a')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '?')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead == 'l')
        ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '?')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead == 's')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '?')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead == 'e')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '?')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '?')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead == 'i')
        ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '?')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead == 'l')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '?')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead == 'r')
        ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '?')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead == 'u')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '>')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead == '|')
        ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead == '|')
        ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead == '~')
        ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead == '~')
        ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '<')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\\')
        ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(56);
      if (lookahead == '\'')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(2);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(2);
      if (lookahead == '0')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(23);
      if (lookahead == '<')
        ADVANCE(53);
      if (lookahead == '=')
        ADVANCE(36);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(54);
      if (lookahead == '[')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(55);
      if (lookahead == ']')
        ADVANCE(2);
      if (lookahead == '{')
        ADVANCE(2);
      if (lookahead == '|')
        ADVANCE(2);
      if (lookahead == '}')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(56);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(57);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '(')
        ADVANCE(2);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '.')
        ADVANCE(58);
      if (lookahead == '\\')
        ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\\')
        ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\\')
        ADVANCE(3);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 60:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(61);
      if (lookahead == '#')
        ADVANCE(62);
      if (lookahead == '%')
        ADVANCE(63);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '0')
        ADVANCE(65);
      if (lookahead == ':')
        ADVANCE(79);
      if (lookahead == '<')
        ADVANCE(147);
      if (lookahead == '[')
        ADVANCE(149);
      if (lookahead == '\\')
        SKIP(150);
      if (lookahead == '{')
        ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(60);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(154);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '{')
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_PERCENT_LBRACE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(66);
      if (lookahead == '_')
        ADVANCE(71);
      if (lookahead == 'b')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(75);
      if (lookahead == 'x')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(72);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_')
        ADVANCE(66);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(70);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(70);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(66);
      if (lookahead == '_')
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(72);
      END_STATE();
    case 73:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(73);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(74);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(76);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(78);
      END_STATE();
    case 79:
      if (lookahead == '!')
        ADVANCE(80);
      if (lookahead == '\"')
        ADVANCE(83);
      if (lookahead == '&')
        ADVANCE(85);
      if (lookahead == '\'')
        ADVANCE(88);
      if (lookahead == '*')
        ADVANCE(90);
      if (lookahead == '+')
        ADVANCE(91);
      if (lookahead == '-')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(95);
      if (lookahead == '/')
        ADVANCE(97);
      if (lookahead == ':')
        ADVANCE(98);
      if (lookahead == '<')
        ADVANCE(100);
      if (lookahead == '=')
        ADVANCE(111);
      if (lookahead == '>')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(120);
      if (lookahead == '\\')
        ADVANCE(121);
      if (lookahead == '^')
        ADVANCE(123);
      if (lookahead == 'f')
        ADVANCE(124);
      if (lookahead == 'n')
        ADVANCE(131);
      if (lookahead == 't')
        ADVANCE(134);
      if (lookahead == '|')
        ADVANCE(138);
      if (lookahead == '~')
        ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COLON_BANG);
      if (lookahead == '=')
        ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COLON_BANG_EQ);
      if (lookahead == '=')
        ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COLON_BANG_EQ_EQ);
      END_STATE();
    case 83:
      if (lookahead == '\"')
        ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '\"')
        ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COLON_AMP);
      if (lookahead == '&')
        ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COLON_AMP_AMP);
      if (lookahead == '&')
        ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COLON_AMP_AMP_AMP);
      END_STATE();
    case 88:
      if (lookahead == '\'')
        ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '\'')
        ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COLON_STAR);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      if (lookahead == '+')
        ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS_PLUS);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      if (lookahead == '-')
        ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COLON_DASH_DASH);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_COLON_DOT);
      if (lookahead == '.')
        ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_COLON_DOT_DOT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH);
      END_STATE();
    case 98:
      if (lookahead == ':')
        ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_COLON);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_COLON_LT);
      if (lookahead == '-')
        ADVANCE(101);
      if (lookahead == '<')
        ADVANCE(102);
      if (lookahead == '=')
        ADVANCE(105);
      if (lookahead == '>')
        ADVANCE(106);
      if (lookahead == '|')
        ADVANCE(107);
      if (lookahead == '~')
        ADVANCE(109);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_COLON_LT_DASH);
      END_STATE();
    case 102:
      if (lookahead == '<')
        ADVANCE(103);
      if (lookahead == '~')
        ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_COLON_LT_LT_LT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COLON_LT_LT_TILDE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_COLON_LT_EQ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_COLON_LT_GT);
      END_STATE();
    case 107:
      if (lookahead == '>')
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_COLON_LT_PIPE_GT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_COLON_LT_TILDE);
      if (lookahead == '>')
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_COLON_LT_TILDE_GT);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      if (lookahead == '=')
        ADVANCE(112);
      if (lookahead == '>')
        ADVANCE(114);
      if (lookahead == '~')
        ADVANCE(115);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COLON_EQ_EQ);
      if (lookahead == '=')
        ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_COLON_EQ_EQ_EQ);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_COLON_EQ_GT);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_COLON_EQ_TILDE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      if (lookahead == '=')
        ADVANCE(117);
      if (lookahead == '>')
        ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_COLON_GT_EQ);
      END_STATE();
    case 118:
      if (lookahead == '>')
        ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_COLON_GT_GT_GT);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_COLON_AT);
      END_STATE();
    case 121:
      if (lookahead == '\\')
        ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_COLON_BSLASH_BSLASH);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_COLON_CARET);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(125);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == 'a')
        ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(125);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == 'l')
        ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(125);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == 's')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(125);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == 'e')
        ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_COLONfalse);
      if (lookahead == '!')
        ADVANCE(125);
      if (lookahead == '?')
        ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(125);
      if (lookahead == '?')
        ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(125);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == 'i')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(125);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == 'l')
        ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_COLONnil);
      if (lookahead == '!')
        ADVANCE(125);
      if (lookahead == '?')
        ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(125);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == 'r')
        ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(125);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == 'u')
        ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(125);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == 'e')
        ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_COLONtrue);
      if (lookahead == '!')
        ADVANCE(125);
      if (lookahead == '?')
        ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_COLON_PIPE);
      if (lookahead == '>')
        ADVANCE(139);
      if (lookahead == '|')
        ADVANCE(140);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_COLON_PIPE_GT);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_COLON_PIPE_PIPE);
      if (lookahead == '|')
        ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_COLON_PIPE_PIPE_PIPE);
      END_STATE();
    case 142:
      if (lookahead == '>')
        ADVANCE(143);
      if (lookahead == '~')
        ADVANCE(145);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_COLON_TILDE_GT);
      if (lookahead == '>')
        ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_COLON_TILDE_GT_GT);
      END_STATE();
    case 145:
      if (lookahead == '~')
        ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_COLON_TILDE_TILDE_TILDE);
      END_STATE();
    case 147:
      if (lookahead == '<')
        ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 150:
      if (lookahead == '\n')
        SKIP(60);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead == '.')
        ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(152);
      END_STATE();
    case 153:
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(152);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(154);
      END_STATE();
    case 155:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(61);
      if (lookahead == '#')
        ADVANCE(62);
      if (lookahead == '%')
        ADVANCE(63);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(156);
      if (lookahead == '0')
        ADVANCE(65);
      if (lookahead == ':')
        ADVANCE(79);
      if (lookahead == '<')
        ADVANCE(147);
      if (lookahead == '=')
        ADVANCE(157);
      if (lookahead == '@')
        ADVANCE(159);
      if (lookahead == '[')
        ADVANCE(149);
      if (lookahead == '\\')
        SKIP(161);
      if (lookahead == ']')
        ADVANCE(162);
      if (lookahead == '{')
        ADVANCE(151);
      if (lookahead == '|')
        ADVANCE(163);
      if (lookahead == '}')
        ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(155);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(154);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 157:
      if (lookahead == '>')
        ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(160);
      END_STATE();
    case 161:
      if (lookahead == '\n')
        SKIP(155);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 165:
      if (lookahead == '\"')
        ADVANCE(61);
      if (lookahead == '#')
        ADVANCE(62);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '0')
        ADVANCE(166);
      if (lookahead == '>')
        ADVANCE(169);
      if (lookahead == '\\')
        SKIP(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(165);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(168);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(167);
      if (lookahead == 'b')
        ADVANCE(73);
      if (lookahead == 'o')
        ADVANCE(75);
      if (lookahead == 'x')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(168);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(168);
      END_STATE();
    case 169:
      if (lookahead == '>')
        ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 171:
      if (lookahead == '\n')
        SKIP(165);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(174);
      if (lookahead == '\'')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(2);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(2);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '#')
        ADVANCE(176);
      if (lookahead == '\\')
        ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#')
        ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(177);
      if (lookahead == '\"')
        ADVANCE(62);
      if (lookahead == '\\')
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\\')
        ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\"')
        ADVANCE(177);
      if (lookahead == '\\')
        ADVANCE(178);
      if (lookahead != 0)
        ADVANCE(177);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(177);
      if (lookahead == '\"')
        ADVANCE(176);
      if (lookahead == '\\')
        ADVANCE(179);
      if (lookahead != 0)
        ADVANCE(176);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '\n')
        ADVANCE(181);
      if (lookahead == '\"')
        ADVANCE(177);
      if (lookahead == '\\')
        ADVANCE(178);
      if (lookahead != 0)
        ADVANCE(177);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_RPAREN_STAR_SLASH);
      if (lookahead == '#')
        ADVANCE(176);
      if (lookahead == '\\')
        ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#')
        ADVANCE(177);
      END_STATE();
    case 182:
      if (lookahead == '\"')
        ADVANCE(61);
      if (lookahead == '#')
        ADVANCE(62);
      if (lookahead == '%')
        ADVANCE(63);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '0')
        ADVANCE(65);
      if (lookahead == ':')
        ADVANCE(79);
      if (lookahead == '<')
        ADVANCE(147);
      if (lookahead == '[')
        ADVANCE(149);
      if (lookahead == '\\')
        SKIP(183);
      if (lookahead == '{')
        ADVANCE(151);
      if (lookahead == '}')
        ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(182);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(154);
      END_STATE();
    case 183:
      if (lookahead == '\n')
        SKIP(182);
      END_STATE();
    case 184:
      if (lookahead == '\"')
        ADVANCE(61);
      if (lookahead == '#')
        ADVANCE(62);
      if (lookahead == '%')
        ADVANCE(63);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '0')
        ADVANCE(185);
      if (lookahead == ':')
        ADVANCE(79);
      if (lookahead == '<')
        ADVANCE(147);
      if (lookahead == '[')
        ADVANCE(149);
      if (lookahead == '\\')
        SKIP(197);
      if (lookahead == ']')
        ADVANCE(162);
      if (lookahead == '{')
        ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(184);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(198);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(199);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(66);
      if (lookahead == ':')
        ADVANCE(186);
      if (lookahead == '_')
        ADVANCE(188);
      if (lookahead == 'b')
        ADVANCE(191);
      if (lookahead == 'o')
        ADVANCE(193);
      if (lookahead == 'x')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(190);
      END_STATE();
    case 186:
      if (lookahead == ' ')
        ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH);
      END_STATE();
    case 188:
      if (lookahead == ':')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(190);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(66);
      if (lookahead == ':')
        ADVANCE(186);
      if (lookahead == '_')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(190);
      END_STATE();
    case 190:
      if (lookahead == ':')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(190);
      END_STATE();
    case 191:
      if (lookahead == ':')
        ADVANCE(186);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(192);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(190);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == ':')
        ADVANCE(186);
      if (lookahead == '_')
        ADVANCE(191);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(192);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(190);
      END_STATE();
    case 193:
      if (lookahead == ':')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(194);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(190);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == ':')
        ADVANCE(186);
      if (lookahead == '_')
        ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(194);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(190);
      END_STATE();
    case 195:
      if (lookahead == ':')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(196);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(190);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == ':')
        ADVANCE(186);
      if (lookahead == '_')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(196);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(190);
      END_STATE();
    case 197:
      if (lookahead == '\n')
        SKIP(184);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead == '.')
        ADVANCE(153);
      if (lookahead == ':')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0')
        ADVANCE(190);
      if (lookahead == ':')
        ADVANCE(186);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(199);
      END_STATE();
    case 200:
      if (lookahead == '\"')
        ADVANCE(61);
      if (lookahead == '#')
        ADVANCE(62);
      if (lookahead == '%')
        ADVANCE(63);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '0')
        ADVANCE(185);
      if (lookahead == ':')
        ADVANCE(79);
      if (lookahead == '<')
        ADVANCE(147);
      if (lookahead == '[')
        ADVANCE(149);
      if (lookahead == '\\')
        SKIP(201);
      if (lookahead == '{')
        ADVANCE(151);
      if (lookahead == '}')
        ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(200);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(198);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(199);
      END_STATE();
    case 201:
      if (lookahead == '\n')
        SKIP(200);
      END_STATE();
    case 202:
      if (lookahead == '#')
        ADVANCE(62);
      if (lookahead == '[')
        ADVANCE(149);
      if (lookahead == '\\')
        SKIP(203);
      if (lookahead == '{')
        ADVANCE(151);
      if (lookahead == '}')
        ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(202);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(152);
      END_STATE();
    case 203:
      if (lookahead == '\n')
        SKIP(202);
      END_STATE();
    case 204:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(62);
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
        ADVANCE(62);
      if (lookahead == ',')
        ADVANCE(156);
      if (lookahead == ':')
        ADVANCE(207);
      if (lookahead == '>')
        ADVANCE(169);
      if (lookahead == '\\')
        SKIP(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(206);
      END_STATE();
    case 207:
      if (lookahead == ':')
        ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 209:
      if (lookahead == '\n')
        SKIP(206);
      END_STATE();
    case 210:
      if (lookahead == '#')
        ADVANCE(62);
      if (lookahead == ',')
        ADVANCE(156);
      if (lookahead == '\\')
        SKIP(211);
      if (lookahead == '}')
        ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(210);
      END_STATE();
    case 211:
      if (lookahead == '\n')
        SKIP(210);
      END_STATE();
    case 212:
      if (lookahead == '#')
        ADVANCE(62);
      if (lookahead == ',')
        ADVANCE(156);
      if (lookahead == '\\')
        SKIP(213);
      if (lookahead == ']')
        ADVANCE(162);
      if (lookahead == '|')
        ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(212);
      END_STATE();
    case 213:
      if (lookahead == '\n')
        SKIP(212);
      END_STATE();
    case 214:
      if (lookahead == '#')
        ADVANCE(62);
      if (lookahead == '=')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(215);
      if (lookahead == '|')
        ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(214);
      END_STATE();
    case 215:
      if (lookahead == '\n')
        SKIP(214);
      END_STATE();
    case 216:
      if (lookahead == '#')
        ADVANCE(62);
      if (lookahead == '\\')
        SKIP(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(216);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(154);
      END_STATE();
    case 217:
      if (lookahead == '\n')
        SKIP(216);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_binary_options);
      if (lookahead == '#')
        ADVANCE(62);
      if (lookahead == '\\')
        SKIP(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(218);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(220);
      END_STATE();
    case 219:
      if (lookahead == '\n')
        SKIP(218);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_binary_options);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(220);
      END_STATE();
    case 221:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(61);
      if (lookahead == '#')
        ADVANCE(62);
      if (lookahead == '%')
        ADVANCE(63);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(156);
      if (lookahead == '0')
        ADVANCE(65);
      if (lookahead == ':')
        ADVANCE(222);
      if (lookahead == '<')
        ADVANCE(147);
      if (lookahead == '=')
        ADVANCE(157);
      if (lookahead == '>')
        ADVANCE(169);
      if (lookahead == '@')
        ADVANCE(159);
      if (lookahead == '[')
        ADVANCE(149);
      if (lookahead == '\\')
        SKIP(224);
      if (lookahead == ']')
        ADVANCE(162);
      if (lookahead == '{')
        ADVANCE(151);
      if (lookahead == '|')
        ADVANCE(163);
      if (lookahead == '}')
        ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(221);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(154);
      END_STATE();
    case 222:
      if (lookahead == '!')
        ADVANCE(80);
      if (lookahead == '\"')
        ADVANCE(83);
      if (lookahead == '&')
        ADVANCE(85);
      if (lookahead == '\'')
        ADVANCE(88);
      if (lookahead == '*')
        ADVANCE(90);
      if (lookahead == '+')
        ADVANCE(91);
      if (lookahead == '-')
        ADVANCE(93);
      if (lookahead == '.')
        ADVANCE(95);
      if (lookahead == '/')
        ADVANCE(97);
      if (lookahead == ':')
        ADVANCE(223);
      if (lookahead == '<')
        ADVANCE(100);
      if (lookahead == '=')
        ADVANCE(111);
      if (lookahead == '>')
        ADVANCE(116);
      if (lookahead == '@')
        ADVANCE(120);
      if (lookahead == '\\')
        ADVANCE(121);
      if (lookahead == '^')
        ADVANCE(123);
      if (lookahead == 'f')
        ADVANCE(124);
      if (lookahead == 'n')
        ADVANCE(131);
      if (lookahead == 't')
        ADVANCE(134);
      if (lookahead == '|')
        ADVANCE(138);
      if (lookahead == '~')
        ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == ':')
        ADVANCE(99);
      END_STATE();
    case 224:
      if (lookahead == '\n')
        SKIP(221);
      END_STATE();
    case 225:
      if (lookahead == '#')
        ADVANCE(62);
      if (lookahead == ',')
        ADVANCE(156);
      if (lookahead == '@')
        ADVANCE(159);
      if (lookahead == '\\')
        SKIP(226);
      if (lookahead == ']')
        ADVANCE(162);
      if (lookahead == '}')
        ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(225);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(154);
      END_STATE();
    case 226:
      if (lookahead == '\n')
        SKIP(225);
      END_STATE();
    case 227:
      if (lookahead == '#')
        ADVANCE(62);
      if (lookahead == '[')
        ADVANCE(149);
      if (lookahead == '\\')
        SKIP(228);
      if (lookahead == ']')
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(190);
      END_STATE();
    case 228:
      if (lookahead == '\n')
        SKIP(227);
      END_STATE();
    case 229:
      if (lookahead == '\"')
        ADVANCE(61);
      if (lookahead == '#')
        ADVANCE(62);
      if (lookahead == '%')
        ADVANCE(63);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '0')
        ADVANCE(185);
      if (lookahead == ':')
        ADVANCE(79);
      if (lookahead == '<')
        ADVANCE(147);
      if (lookahead == '[')
        ADVANCE(149);
      if (lookahead == '\\')
        SKIP(230);
      if (lookahead == '{')
        ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(229);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(198);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(199);
      END_STATE();
    case 230:
      if (lookahead == '\n')
        SKIP(229);
      END_STATE();
    case 231:
      if (lookahead == '#')
        ADVANCE(62);
      if (lookahead == '\\')
        SKIP(232);
      if (lookahead == '}')
        ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(190);
      END_STATE();
    case 232:
      if (lookahead == '\n')
        SKIP(231);
      END_STATE();
    case 233:
      if (lookahead == '#')
        ADVANCE(62);
      if (lookahead == '@')
        ADVANCE(159);
      if (lookahead == '\\')
        SKIP(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(233);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(154);
      END_STATE();
    case 234:
      if (lookahead == '\n')
        SKIP(233);
      END_STATE();
    case 235:
      if (lookahead == '#')
        ADVANCE(62);
      if (lookahead == ',')
        ADVANCE(156);
      if (lookahead == '\\')
        SKIP(236);
      if (lookahead == ']')
        ADVANCE(162);
      if (lookahead == '}')
        ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(235);
      END_STATE();
    case 236:
      if (lookahead == '\n')
        SKIP(235);
      END_STATE();
    case 237:
      if (lookahead == '\"')
        ADVANCE(61);
      if (lookahead == '#')
        ADVANCE(62);
      if (lookahead == '%')
        ADVANCE(63);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '0')
        ADVANCE(185);
      if (lookahead == ':')
        ADVANCE(79);
      if (lookahead == '<')
        ADVANCE(147);
      if (lookahead == '@')
        ADVANCE(159);
      if (lookahead == '[')
        ADVANCE(149);
      if (lookahead == '\\')
        SKIP(238);
      if (lookahead == '{')
        ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(237);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(198);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(199);
      END_STATE();
    case 238:
      if (lookahead == '\n')
        SKIP(237);
      END_STATE();
    case 239:
      if (lookahead == '#')
        ADVANCE(62);
      if (lookahead == ',')
        ADVANCE(156);
      if (lookahead == '@')
        ADVANCE(159);
      if (lookahead == '\\')
        SKIP(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(239);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(154);
      END_STATE();
    case 240:
      if (lookahead == '\n')
        SKIP(239);
      END_STATE();
    case 241:
      if (lookahead == '\"')
        ADVANCE(61);
      if (lookahead == '#')
        ADVANCE(62);
      if (lookahead == '%')
        ADVANCE(63);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '0')
        ADVANCE(65);
      if (lookahead == ':')
        ADVANCE(79);
      if (lookahead == '<')
        ADVANCE(147);
      if (lookahead == '[')
        ADVANCE(149);
      if (lookahead == '\\')
        SKIP(242);
      if (lookahead == ']')
        ADVANCE(162);
      if (lookahead == '{')
        ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(241);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(154);
      END_STATE();
    case 242:
      if (lookahead == '\n')
        SKIP(241);
      END_STATE();
    case 243:
      if (lookahead == '#')
        ADVANCE(62);
      if (lookahead == '(')
        ADVANCE(244);
      if (lookahead == '\\')
        SKIP(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(243);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(154);
      END_STATE();
    case 244:
      if (lookahead == ')')
        ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 246:
      if (lookahead == '\n')
        SKIP(243);
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
  [1] = {.lex_state = 60},
  [2] = {.lex_state = 155},
  [3] = {.lex_state = 155},
  [4] = {.lex_state = 155},
  [5] = {.lex_state = 155},
  [6] = {.lex_state = 165},
  [7] = {.lex_state = 172},
  [8] = {.lex_state = 175},
  [9] = {.lex_state = 182},
  [10] = {.lex_state = 184},
  [11] = {.lex_state = 200},
  [12] = {.lex_state = 202},
  [13] = {.lex_state = 202},
  [14] = {.lex_state = 204},
  [15] = {.lex_state = 155},
  [16] = {.lex_state = 60},
  [17] = {.lex_state = 206},
  [18] = {.lex_state = 155},
  [19] = {.lex_state = 206},
  [20] = {.lex_state = 165},
  [21] = {.lex_state = 165},
  [22] = {.lex_state = 155},
  [23] = {.lex_state = 210},
  [24] = {.lex_state = 60},
  [25] = {.lex_state = 155},
  [26] = {.lex_state = 212},
  [27] = {.lex_state = 212},
  [28] = {.lex_state = 212},
  [29] = {.lex_state = 155},
  [30] = {.lex_state = 214},
  [31] = {.lex_state = 210},
  [32] = {.lex_state = 202},
  [33] = {.lex_state = 210},
  [34] = {.lex_state = 202},
  [35] = {.lex_state = 216},
  [36] = {.lex_state = 60},
  [37] = {.lex_state = 218},
  [38] = {.lex_state = 165},
  [39] = {.lex_state = 155},
  [40] = {.lex_state = 206},
  [41] = {.lex_state = 221},
  [42] = {.lex_state = 221},
  [43] = {.lex_state = 200},
  [44] = {.lex_state = 155},
  [45] = {.lex_state = 210},
  [46] = {.lex_state = 225},
  [47] = {.lex_state = 184},
  [48] = {.lex_state = 155},
  [49] = {.lex_state = 212},
  [50] = {.lex_state = 227},
  [51] = {.lex_state = 155},
  [52] = {.lex_state = 212},
  [53] = {.lex_state = 202},
  [54] = {.lex_state = 229},
  [55] = {.lex_state = 60},
  [56] = {.lex_state = 231},
  [57] = {.lex_state = 210},
  [58] = {.lex_state = 155},
  [59] = {.lex_state = 200},
  [60] = {.lex_state = 210},
  [61] = {.lex_state = 200},
  [62] = {.lex_state = 155},
  [63] = {.lex_state = 233},
  [64] = {.lex_state = 206},
  [65] = {.lex_state = 155},
  [66] = {.lex_state = 206},
  [67] = {.lex_state = 165},
  [68] = {.lex_state = 206},
  [69] = {.lex_state = 155},
  [70] = {.lex_state = 235},
  [71] = {.lex_state = 210},
  [72] = {.lex_state = 210},
  [73] = {.lex_state = 200},
  [74] = {.lex_state = 210},
  [75] = {.lex_state = 155},
  [76] = {.lex_state = 212},
  [77] = {.lex_state = 212},
  [78] = {.lex_state = 184},
  [79] = {.lex_state = 212},
  [80] = {.lex_state = 155},
  [81] = {.lex_state = 225},
  [82] = {.lex_state = 227},
  [83] = {.lex_state = 212},
  [84] = {.lex_state = 212},
  [85] = {.lex_state = 212},
  [86] = {.lex_state = 214},
  [87] = {.lex_state = 202},
  [88] = {.lex_state = 210},
  [89] = {.lex_state = 231},
  [90] = {.lex_state = 210},
  [91] = {.lex_state = 210},
  [92] = {.lex_state = 200},
  [93] = {.lex_state = 210},
  [94] = {.lex_state = 210},
  [95] = {.lex_state = 155},
  [96] = {.lex_state = 210},
  [97] = {.lex_state = 210},
  [98] = {.lex_state = 155},
  [99] = {.lex_state = 237},
  [100] = {.lex_state = 227},
  [101] = {.lex_state = 216},
  [102] = {.lex_state = 216},
  [103] = {.lex_state = 233},
  [104] = {.lex_state = 155},
  [105] = {.lex_state = 165},
  [106] = {.lex_state = 227},
  [107] = {.lex_state = 210},
  [108] = {.lex_state = 202},
  [109] = {.lex_state = 155},
  [110] = {.lex_state = 210},
  [111] = {.lex_state = 60},
  [112] = {.lex_state = 212},
  [113] = {.lex_state = 212},
  [114] = {.lex_state = 155},
  [115] = {.lex_state = 212},
  [116] = {.lex_state = 155},
  [117] = {.lex_state = 155},
  [118] = {.lex_state = 155},
  [119] = {.lex_state = 231},
  [120] = {.lex_state = 60},
  [121] = {.lex_state = 231},
  [122] = {.lex_state = 155},
  [123] = {.lex_state = 210},
  [124] = {.lex_state = 200},
  [125] = {.lex_state = 155},
  [126] = {.lex_state = 210},
  [127] = {.lex_state = 210},
  [128] = {.lex_state = 233},
  [129] = {.lex_state = 239},
  [130] = {.lex_state = 241},
  [131] = {.lex_state = 233},
  [132] = {.lex_state = 243},
  [133] = {.lex_state = 233},
  [134] = {.lex_state = 233},
  [135] = {.lex_state = 155},
  [136] = {.lex_state = 233},
  [137] = {.lex_state = 155},
  [138] = {.lex_state = 202},
  [139] = {.lex_state = 155},
  [140] = {.lex_state = 212},
  [141] = {.lex_state = 155},
  [142] = {.lex_state = 231},
  [143] = {.lex_state = 155},
  [144] = {.lex_state = 231},
  [145] = {.lex_state = 200},
  [146] = {.lex_state = 210},
  [147] = {.lex_state = 239},
  [148] = {.lex_state = 60},
  [149] = {.lex_state = 216},
  [150] = {.lex_state = 155},
  [151] = {.lex_state = 155},
  [152] = {.lex_state = 155},
  [153] = {.lex_state = 155},
  [154] = {.lex_state = 231},
  [155] = {.lex_state = 239},
  [156] = {.lex_state = 216},
  [157] = {.lex_state = 60},
  [158] = {.lex_state = 155},
  [159] = {.lex_state = 233},
  [160] = {.lex_state = 216},
  [161] = {.lex_state = 233},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_alias] = ACTIONS(3),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(3),
    [anon_sym_COLONtrue] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(3),
    [anon_sym_COLONfalse] = ACTIONS(3),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(3),
    [anon_sym_COLON_BANG] = ACTIONS(3),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(3),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(3),
    [anon_sym_COLON_AMP] = ACTIONS(3),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(3),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(3),
    [anon_sym_COLON_STAR] = ACTIONS(3),
    [anon_sym_COLON_PLUS] = ACTIONS(3),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(3),
    [anon_sym_COLON_DASH] = ACTIONS(3),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(3),
    [anon_sym_COLON_DOT] = ACTIONS(3),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(3),
    [anon_sym_COLON_SLASH] = ACTIONS(3),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(3),
    [anon_sym_COLON_LT] = ACTIONS(3),
    [anon_sym_COLON_LT_DASH] = ACTIONS(3),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(3),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(3),
    [anon_sym_COLON_LT_EQ] = ACTIONS(3),
    [anon_sym_COLON_LT_GT] = ACTIONS(3),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(3),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(3),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(3),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(3),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(3),
    [anon_sym_COLON_EQ_GT] = ACTIONS(3),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(3),
    [anon_sym_COLON_GT] = ACTIONS(3),
    [anon_sym_COLON_GT_EQ] = ACTIONS(3),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(3),
    [anon_sym_COLON_AT] = ACTIONS(3),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(3),
    [anon_sym_COLON_CARET] = ACTIONS(3),
    [anon_sym_COLON_PIPE] = ACTIONS(3),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(3),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(3),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(3),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(3),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(3),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(3),
    [anon_sym_nil] = ACTIONS(3),
    [anon_sym_COLONnil] = ACTIONS(3),
    [anon_sym_LT_LT] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(3),
    [anon_sym_GT_GT] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(3),
    [aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(3),
    [anon_sym_EQ_GT] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(3),
    [anon_sym_defmodule] = ACTIONS(3),
    [anon_sym_do] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(3),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(3),
    [anon_sym_defstruct] = ACTIONS(3),
    [anon_sym_def] = ACTIONS(3),
    [anon_sym_defp] = ACTIONS(3),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(3),
    [sym_identifier] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
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
    [sym_binary] = STATE(16),
    [sym_charlist] = STATE(16),
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
    [anon_sym_LT_LT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
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
    [anon_sym_LT_LT] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(45),
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
    [anon_sym_LT_LT] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(49),
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
    [anon_sym_LT_LT] = ACTIONS(53),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(53),
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
    [anon_sym_LT_LT] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_SQUOTE] = ACTIONS(57),
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
    [sym_binary_segment] = STATE(19),
    [sym_charlist] = STATE(17),
    [sym_string] = STATE(17),
    [sym_integer] = ACTIONS(61),
    [anon_sym_GT_GT] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(43),
  },
  [7] = {
    [aux_sym_SLASH_LPAREN_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_RPAREN_STAR_SLASH] = ACTIONS(65),
    [sym_comment] = ACTIONS(67),
  },
  [8] = {
    [aux_sym_SLASH_LPAREN_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_RPAREN_STAR_SLASH] = ACTIONS(69),
    [sym_comment] = ACTIONS(67),
  },
  [9] = {
    [sym__expression] = STATE(23),
    [sym__value] = STATE(23),
    [sym_true] = STATE(23),
    [sym_false] = STATE(23),
    [sym_atom] = STATE(23),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(23),
    [sym_binary] = STATE(23),
    [sym_charlist] = STATE(23),
    [sym_string] = STATE(23),
    [sym_tuple] = STATE(23),
    [sym__list_or_keyword_list] = STATE(23),
    [sym_list] = STATE(23),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(23),
    [sym__map] = STATE(23),
    [sym_map] = STATE(23),
    [sym_map_update] = STATE(23),
    [sym_struct] = STATE(23),
    [sym_defmodule] = STATE(23),
    [sym_alias] = ACTIONS(71),
    [sym_integer] = ACTIONS(73),
    [sym_float] = ACTIONS(71),
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
    [anon_sym_LT_LT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(41),
    [sym_comment] = ACTIONS(43),
  },
  [10] = {
    [sym__expression] = STATE(26),
    [sym__value] = STATE(26),
    [sym_true] = STATE(26),
    [sym_false] = STATE(26),
    [sym_atom] = STATE(26),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(27),
    [sym_nil] = STATE(26),
    [sym_binary] = STATE(26),
    [sym_charlist] = STATE(26),
    [sym_string] = STATE(26),
    [sym_tuple] = STATE(26),
    [sym__list_or_keyword_list] = STATE(26),
    [sym_list] = STATE(26),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_head] = STATE(28),
    [sym_keyword_list] = STATE(26),
    [sym__map] = STATE(26),
    [sym_map] = STATE(26),
    [sym_map_update] = STATE(26),
    [sym_struct] = STATE(26),
    [sym_defmodule] = STATE(26),
    [sym_alias] = ACTIONS(77),
    [sym_integer] = ACTIONS(77),
    [sym_float] = ACTIONS(79),
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
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(81),
    [anon_sym_nil] = ACTIONS(25),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_LT_LT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(83),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(85),
    [sym_comment] = ACTIONS(43),
  },
  [11] = {
    [sym__value] = STATE(30),
    [sym_true] = STATE(30),
    [sym_false] = STATE(30),
    [sym_atom] = STATE(30),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(31),
    [sym_nil] = STATE(30),
    [sym_binary] = STATE(30),
    [sym_charlist] = STATE(30),
    [sym_string] = STATE(30),
    [sym_tuple] = STATE(30),
    [sym__list_or_keyword_list] = STATE(30),
    [sym_list] = STATE(30),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(30),
    [sym__map] = STATE(30),
    [sym_map] = STATE(30),
    [sym__map_body] = STATE(32),
    [sym_map_update] = STATE(30),
    [sym_pair] = STATE(33),
    [sym_struct] = STATE(30),
    [sym_defmodule] = STATE(30),
    [sym_alias] = ACTIONS(87),
    [sym_integer] = ACTIONS(87),
    [sym_float] = ACTIONS(89),
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
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(81),
    [anon_sym_nil] = ACTIONS(25),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_LT_LT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(85),
    [sym_comment] = ACTIONS(43),
  },
  [12] = {
    [sym_alias] = ACTIONS(93),
    [sym_comment] = ACTIONS(43),
  },
  [13] = {
    [sym_alias] = ACTIONS(95),
    [sym_comment] = ACTIONS(43),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym_comment] = ACTIONS(43),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_alias] = ACTIONS(99),
    [sym_integer] = ACTIONS(101),
    [sym_float] = ACTIONS(99),
    [anon_sym_true] = ACTIONS(99),
    [anon_sym_COLONtrue] = ACTIONS(101),
    [anon_sym_false] = ACTIONS(99),
    [anon_sym_COLONfalse] = ACTIONS(101),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(101),
    [anon_sym_COLON_BANG] = ACTIONS(101),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(101),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(99),
    [anon_sym_COLON_AMP] = ACTIONS(101),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(101),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(99),
    [anon_sym_COLON_STAR] = ACTIONS(99),
    [anon_sym_COLON_PLUS] = ACTIONS(101),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(99),
    [anon_sym_COLON_DASH] = ACTIONS(101),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(99),
    [anon_sym_COLON_DOT] = ACTIONS(101),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(99),
    [anon_sym_COLON_SLASH] = ACTIONS(99),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(99),
    [anon_sym_COLON_LT] = ACTIONS(101),
    [anon_sym_COLON_LT_DASH] = ACTIONS(99),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(99),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(99),
    [anon_sym_COLON_LT_EQ] = ACTIONS(99),
    [anon_sym_COLON_LT_GT] = ACTIONS(99),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(99),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(101),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(99),
    [anon_sym_COLON_EQ] = ACTIONS(101),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(101),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(99),
    [anon_sym_COLON_EQ_GT] = ACTIONS(99),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(99),
    [anon_sym_COLON_GT] = ACTIONS(101),
    [anon_sym_COLON_GT_EQ] = ACTIONS(99),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(99),
    [anon_sym_COLON_AT] = ACTIONS(99),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(99),
    [anon_sym_COLON_CARET] = ACTIONS(99),
    [anon_sym_COLON_PIPE] = ACTIONS(101),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(99),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(101),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(99),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(101),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(99),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(99),
    [anon_sym_nil] = ACTIONS(99),
    [anon_sym_COLONnil] = ACTIONS(101),
    [anon_sym_LT_LT] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_RBRACK] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(99),
    [anon_sym_EQ_GT] = ACTIONS(99),
    [anon_sym_PERCENT] = ACTIONS(101),
    [anon_sym_defmodule] = ACTIONS(99),
    [anon_sym_end] = ACTIONS(99),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(99),
    [anon_sym_defstruct] = ACTIONS(99),
    [anon_sym_def] = ACTIONS(101),
    [anon_sym_defp] = ACTIONS(99),
    [sym_comment] = ACTIONS(43),
  },
  [16] = {
    [sym__expression] = STATE(36),
    [sym__value] = STATE(36),
    [sym_true] = STATE(36),
    [sym_false] = STATE(36),
    [sym_atom] = STATE(36),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(36),
    [sym_binary] = STATE(36),
    [sym_charlist] = STATE(36),
    [sym_string] = STATE(36),
    [sym_tuple] = STATE(36),
    [sym__list_or_keyword_list] = STATE(36),
    [sym_list] = STATE(36),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(36),
    [sym__map] = STATE(36),
    [sym_map] = STATE(36),
    [sym_map_update] = STATE(36),
    [sym_struct] = STATE(36),
    [sym_defmodule] = STATE(36),
    [aux_sym_program_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(103),
    [sym_alias] = ACTIONS(105),
    [sym_integer] = ACTIONS(107),
    [sym_float] = ACTIONS(105),
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
    [anon_sym_LT_LT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(41),
    [sym_comment] = ACTIONS(43),
  },
  [17] = {
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_GT_GT] = ACTIONS(109),
    [anon_sym_COLON_COLON] = ACTIONS(111),
    [sym_comment] = ACTIONS(43),
  },
  [18] = {
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
    [anon_sym_LT_LT] = ACTIONS(113),
    [anon_sym_COMMA] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(113),
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
  [19] = {
    [aux_sym_binary_repeat1] = STATE(40),
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_GT_GT] = ACTIONS(119),
    [sym_comment] = ACTIONS(43),
  },
  [20] = {
    [anon_sym_SQUOTE] = ACTIONS(121),
    [sym_comment] = ACTIONS(43),
  },
  [21] = {
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_comment] = ACTIONS(43),
  },
  [22] = {
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
    [anon_sym_LT_LT] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_SQUOTE] = ACTIONS(125),
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
  [23] = {
    [aux_sym_tuple_repeat1] = STATE(45),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_RBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(43),
  },
  [24] = {
    [sym__value] = STATE(46),
    [sym_true] = STATE(46),
    [sym_false] = STATE(46),
    [sym_atom] = STATE(46),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(46),
    [sym_binary] = STATE(46),
    [sym_charlist] = STATE(46),
    [sym_string] = STATE(46),
    [sym_tuple] = STATE(46),
    [sym__list_or_keyword_list] = STATE(46),
    [sym_list] = STATE(46),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(46),
    [sym__map] = STATE(46),
    [sym_map] = STATE(46),
    [sym_map_update] = STATE(46),
    [sym_struct] = STATE(46),
    [sym_defmodule] = STATE(46),
    [sym_alias] = ACTIONS(133),
    [sym_integer] = ACTIONS(135),
    [sym_float] = ACTIONS(133),
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
    [anon_sym_LT_LT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(41),
    [sym_comment] = ACTIONS(43),
  },
  [25] = {
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
    [anon_sym_LT_LT] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_SQUOTE] = ACTIONS(137),
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
    [anon_sym_def] = ACTIONS(139),
    [anon_sym_defp] = ACTIONS(137),
    [sym_comment] = ACTIONS(43),
  },
  [26] = {
    [aux_sym_tuple_repeat1] = STATE(49),
    [anon_sym_COMMA] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(143),
    [anon_sym_PIPE] = ACTIONS(145),
    [sym_comment] = ACTIONS(43),
  },
  [27] = {
    [aux_sym_keyword_list_repeat1] = STATE(52),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_RBRACK] = ACTIONS(149),
    [sym_comment] = ACTIONS(43),
  },
  [28] = {
    [anon_sym_PIPE] = ACTIONS(151),
    [sym_comment] = ACTIONS(43),
  },
  [29] = {
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
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(153),
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
  [30] = {
    [anon_sym_PIPE] = ACTIONS(157),
    [anon_sym_EQ_GT] = ACTIONS(159),
    [sym_comment] = ACTIONS(43),
  },
  [31] = {
    [aux_sym_keyword_list_repeat1] = STATE(57),
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_RBRACE] = ACTIONS(163),
    [sym_comment] = ACTIONS(43),
  },
  [32] = {
    [anon_sym_RBRACE] = ACTIONS(165),
    [sym_comment] = ACTIONS(43),
  },
  [33] = {
    [aux_sym_keyword_list_repeat1] = STATE(57),
    [aux_sym__map_body_repeat1] = STATE(60),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_RBRACE] = ACTIONS(163),
    [sym_comment] = ACTIONS(43),
  },
  [34] = {
    [sym__empty_struct_body] = STATE(62),
    [sym__struct_body] = STATE(62),
    [sym__keyword_struct_body] = STATE(62),
    [anon_sym_LBRACE] = ACTIONS(169),
    [sym_comment] = ACTIONS(43),
  },
  [35] = {
    [anon_sym_do] = ACTIONS(171),
    [sym_comment] = ACTIONS(43),
  },
  [36] = {
    [sym__expression] = STATE(36),
    [sym__value] = STATE(36),
    [sym_true] = STATE(36),
    [sym_false] = STATE(36),
    [sym_atom] = STATE(36),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(36),
    [sym_binary] = STATE(36),
    [sym_charlist] = STATE(36),
    [sym_string] = STATE(36),
    [sym_tuple] = STATE(36),
    [sym__list_or_keyword_list] = STATE(36),
    [sym_list] = STATE(36),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(36),
    [sym__map] = STATE(36),
    [sym_map] = STATE(36),
    [sym_map_update] = STATE(36),
    [sym_struct] = STATE(36),
    [sym_defmodule] = STATE(36),
    [aux_sym_program_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(173),
    [sym_alias] = ACTIONS(175),
    [sym_integer] = ACTIONS(178),
    [sym_float] = ACTIONS(175),
    [anon_sym_true] = ACTIONS(181),
    [anon_sym_COLONtrue] = ACTIONS(184),
    [anon_sym_false] = ACTIONS(187),
    [anon_sym_COLONfalse] = ACTIONS(190),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(193),
    [anon_sym_COLON_BANG] = ACTIONS(193),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(193),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(196),
    [anon_sym_COLON_AMP] = ACTIONS(193),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(193),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(196),
    [anon_sym_COLON_STAR] = ACTIONS(196),
    [anon_sym_COLON_PLUS] = ACTIONS(193),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(196),
    [anon_sym_COLON_DASH] = ACTIONS(193),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(196),
    [anon_sym_COLON_DOT] = ACTIONS(193),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(196),
    [anon_sym_COLON_SLASH] = ACTIONS(196),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(196),
    [anon_sym_COLON_LT] = ACTIONS(193),
    [anon_sym_COLON_LT_DASH] = ACTIONS(196),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(196),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(196),
    [anon_sym_COLON_LT_EQ] = ACTIONS(196),
    [anon_sym_COLON_LT_GT] = ACTIONS(196),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(196),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(193),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(196),
    [anon_sym_COLON_EQ] = ACTIONS(193),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(193),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(196),
    [anon_sym_COLON_EQ_GT] = ACTIONS(196),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(196),
    [anon_sym_COLON_GT] = ACTIONS(193),
    [anon_sym_COLON_GT_EQ] = ACTIONS(196),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(196),
    [anon_sym_COLON_AT] = ACTIONS(196),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(196),
    [anon_sym_COLON_CARET] = ACTIONS(196),
    [anon_sym_COLON_PIPE] = ACTIONS(193),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(196),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(193),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(196),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(193),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(196),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(196),
    [anon_sym_nil] = ACTIONS(199),
    [anon_sym_COLONnil] = ACTIONS(202),
    [anon_sym_LT_LT] = ACTIONS(205),
    [anon_sym_SQUOTE] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(211),
    [anon_sym_LBRACE] = ACTIONS(214),
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(220),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_defmodule] = ACTIONS(226),
    [sym_comment] = ACTIONS(43),
  },
  [37] = {
    [sym_binary_options] = ACTIONS(229),
    [sym_comment] = ACTIONS(43),
  },
  [38] = {
    [sym_binary_segment] = STATE(66),
    [sym_charlist] = STATE(17),
    [sym_string] = STATE(17),
    [sym_integer] = ACTIONS(61),
    [anon_sym_GT_GT] = ACTIONS(231),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(43),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(233),
    [sym_alias] = ACTIONS(233),
    [sym_integer] = ACTIONS(235),
    [sym_float] = ACTIONS(233),
    [anon_sym_true] = ACTIONS(233),
    [anon_sym_COLONtrue] = ACTIONS(235),
    [anon_sym_false] = ACTIONS(233),
    [anon_sym_COLONfalse] = ACTIONS(235),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(235),
    [anon_sym_COLON_BANG] = ACTIONS(235),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(235),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(233),
    [anon_sym_COLON_AMP] = ACTIONS(235),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(235),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(233),
    [anon_sym_COLON_STAR] = ACTIONS(233),
    [anon_sym_COLON_PLUS] = ACTIONS(235),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(233),
    [anon_sym_COLON_DASH] = ACTIONS(235),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(233),
    [anon_sym_COLON_DOT] = ACTIONS(235),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(233),
    [anon_sym_COLON_SLASH] = ACTIONS(233),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(233),
    [anon_sym_COLON_LT] = ACTIONS(235),
    [anon_sym_COLON_LT_DASH] = ACTIONS(233),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(233),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(233),
    [anon_sym_COLON_LT_EQ] = ACTIONS(233),
    [anon_sym_COLON_LT_GT] = ACTIONS(233),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(233),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(235),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(233),
    [anon_sym_COLON_EQ] = ACTIONS(235),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(235),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(233),
    [anon_sym_COLON_EQ_GT] = ACTIONS(233),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(233),
    [anon_sym_COLON_GT] = ACTIONS(235),
    [anon_sym_COLON_GT_EQ] = ACTIONS(233),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(233),
    [anon_sym_COLON_AT] = ACTIONS(233),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(233),
    [anon_sym_COLON_CARET] = ACTIONS(233),
    [anon_sym_COLON_PIPE] = ACTIONS(235),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(233),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(235),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(235),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(233),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(233),
    [anon_sym_nil] = ACTIONS(233),
    [anon_sym_COLONnil] = ACTIONS(235),
    [anon_sym_LT_LT] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_SQUOTE] = ACTIONS(233),
    [anon_sym_DQUOTE] = ACTIONS(233),
    [anon_sym_LBRACE] = ACTIONS(233),
    [anon_sym_RBRACE] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(233),
    [anon_sym_RBRACK] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(233),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(233),
    [anon_sym_EQ_GT] = ACTIONS(233),
    [anon_sym_PERCENT] = ACTIONS(235),
    [anon_sym_defmodule] = ACTIONS(233),
    [anon_sym_end] = ACTIONS(233),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(233),
    [anon_sym_defstruct] = ACTIONS(233),
    [anon_sym_def] = ACTIONS(235),
    [anon_sym_defp] = ACTIONS(233),
    [sym_comment] = ACTIONS(43),
  },
  [40] = {
    [aux_sym_binary_repeat1] = STATE(68),
    [anon_sym_COMMA] = ACTIONS(237),
    [anon_sym_GT_GT] = ACTIONS(231),
    [sym_comment] = ACTIONS(43),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [sym_alias] = ACTIONS(239),
    [sym_integer] = ACTIONS(241),
    [sym_float] = ACTIONS(239),
    [anon_sym_true] = ACTIONS(239),
    [anon_sym_COLONtrue] = ACTIONS(241),
    [anon_sym_false] = ACTIONS(239),
    [anon_sym_COLONfalse] = ACTIONS(241),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(241),
    [anon_sym_COLON_BANG] = ACTIONS(241),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(241),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(239),
    [anon_sym_COLON_AMP] = ACTIONS(241),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(241),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(239),
    [anon_sym_COLON_STAR] = ACTIONS(239),
    [anon_sym_COLON_PLUS] = ACTIONS(241),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(239),
    [anon_sym_COLON_DASH] = ACTIONS(241),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(239),
    [anon_sym_COLON_DOT] = ACTIONS(241),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(239),
    [anon_sym_COLON_SLASH] = ACTIONS(239),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(239),
    [anon_sym_COLON_LT] = ACTIONS(241),
    [anon_sym_COLON_LT_DASH] = ACTIONS(239),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(239),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(239),
    [anon_sym_COLON_LT_EQ] = ACTIONS(239),
    [anon_sym_COLON_LT_GT] = ACTIONS(239),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(239),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(241),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(239),
    [anon_sym_COLON_EQ] = ACTIONS(241),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(241),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(239),
    [anon_sym_COLON_EQ_GT] = ACTIONS(239),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(239),
    [anon_sym_COLON_GT] = ACTIONS(241),
    [anon_sym_COLON_GT_EQ] = ACTIONS(239),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(239),
    [anon_sym_COLON_AT] = ACTIONS(239),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(239),
    [anon_sym_COLON_CARET] = ACTIONS(239),
    [anon_sym_COLON_PIPE] = ACTIONS(241),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(239),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(241),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(239),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(241),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(239),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(239),
    [anon_sym_nil] = ACTIONS(239),
    [anon_sym_COLONnil] = ACTIONS(241),
    [anon_sym_LT_LT] = ACTIONS(239),
    [anon_sym_COMMA] = ACTIONS(239),
    [anon_sym_GT_GT] = ACTIONS(239),
    [anon_sym_COLON_COLON] = ACTIONS(241),
    [anon_sym_SQUOTE] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(239),
    [anon_sym_RBRACK] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(239),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(239),
    [anon_sym_EQ_GT] = ACTIONS(239),
    [anon_sym_PERCENT] = ACTIONS(241),
    [anon_sym_defmodule] = ACTIONS(239),
    [anon_sym_end] = ACTIONS(239),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(239),
    [anon_sym_defstruct] = ACTIONS(239),
    [anon_sym_def] = ACTIONS(241),
    [anon_sym_defp] = ACTIONS(239),
    [sym_comment] = ACTIONS(43),
  },
  [42] = {
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
    [anon_sym_LT_LT] = ACTIONS(243),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_GT_GT] = ACTIONS(243),
    [anon_sym_COLON_COLON] = ACTIONS(245),
    [anon_sym_SQUOTE] = ACTIONS(243),
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
    [anon_sym_defstruct] = ACTIONS(243),
    [anon_sym_def] = ACTIONS(245),
    [anon_sym_defp] = ACTIONS(243),
    [sym_comment] = ACTIONS(43),
  },
  [43] = {
    [sym__expression] = STATE(70),
    [sym__value] = STATE(70),
    [sym_true] = STATE(70),
    [sym_false] = STATE(70),
    [sym_atom] = STATE(70),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(71),
    [sym_nil] = STATE(70),
    [sym_binary] = STATE(70),
    [sym_charlist] = STATE(70),
    [sym_string] = STATE(70),
    [sym_tuple] = STATE(70),
    [sym__list_or_keyword_list] = STATE(70),
    [sym_list] = STATE(70),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(70),
    [sym__map] = STATE(70),
    [sym_map] = STATE(70),
    [sym_map_update] = STATE(70),
    [sym_struct] = STATE(70),
    [sym_implicit_keyword_list] = STATE(72),
    [sym_defmodule] = STATE(70),
    [sym_alias] = ACTIONS(247),
    [sym_integer] = ACTIONS(247),
    [sym_float] = ACTIONS(249),
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
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(81),
    [anon_sym_nil] = ACTIONS(25),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_LT_LT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(85),
    [sym_comment] = ACTIONS(43),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [sym_alias] = ACTIONS(253),
    [sym_integer] = ACTIONS(255),
    [sym_float] = ACTIONS(253),
    [anon_sym_true] = ACTIONS(253),
    [anon_sym_COLONtrue] = ACTIONS(255),
    [anon_sym_false] = ACTIONS(253),
    [anon_sym_COLONfalse] = ACTIONS(255),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(255),
    [anon_sym_COLON_BANG] = ACTIONS(255),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(255),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(253),
    [anon_sym_COLON_AMP] = ACTIONS(255),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(255),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(253),
    [anon_sym_COLON_STAR] = ACTIONS(253),
    [anon_sym_COLON_PLUS] = ACTIONS(255),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(253),
    [anon_sym_COLON_DASH] = ACTIONS(255),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(253),
    [anon_sym_COLON_DOT] = ACTIONS(255),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(253),
    [anon_sym_COLON_SLASH] = ACTIONS(253),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(253),
    [anon_sym_COLON_LT] = ACTIONS(255),
    [anon_sym_COLON_LT_DASH] = ACTIONS(253),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(253),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(253),
    [anon_sym_COLON_LT_EQ] = ACTIONS(253),
    [anon_sym_COLON_LT_GT] = ACTIONS(253),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(253),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(255),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(253),
    [anon_sym_COLON_EQ] = ACTIONS(255),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(255),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(253),
    [anon_sym_COLON_EQ_GT] = ACTIONS(253),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(253),
    [anon_sym_COLON_GT] = ACTIONS(255),
    [anon_sym_COLON_GT_EQ] = ACTIONS(253),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(253),
    [anon_sym_COLON_AT] = ACTIONS(253),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(253),
    [anon_sym_COLON_CARET] = ACTIONS(253),
    [anon_sym_COLON_PIPE] = ACTIONS(255),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(253),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(255),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(253),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(255),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(253),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(253),
    [anon_sym_nil] = ACTIONS(253),
    [anon_sym_COLONnil] = ACTIONS(255),
    [anon_sym_LT_LT] = ACTIONS(253),
    [anon_sym_COMMA] = ACTIONS(253),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [anon_sym_LBRACE] = ACTIONS(253),
    [anon_sym_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(253),
    [anon_sym_RBRACK] = ACTIONS(253),
    [anon_sym_PIPE] = ACTIONS(253),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(253),
    [anon_sym_EQ_GT] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(255),
    [anon_sym_defmodule] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(253),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(253),
    [anon_sym_defstruct] = ACTIONS(253),
    [anon_sym_def] = ACTIONS(255),
    [anon_sym_defp] = ACTIONS(253),
    [sym_comment] = ACTIONS(43),
  },
  [45] = {
    [aux_sym_tuple_repeat1] = STATE(74),
    [anon_sym_COMMA] = ACTIONS(257),
    [anon_sym_RBRACE] = ACTIONS(251),
    [sym_comment] = ACTIONS(43),
  },
  [46] = {
    [anon_sym_COMMA] = ACTIONS(259),
    [anon_sym_RBRACE] = ACTIONS(259),
    [anon_sym_RBRACK] = ACTIONS(259),
    [anon_sym_end] = ACTIONS(259),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(259),
    [anon_sym_defstruct] = ACTIONS(259),
    [anon_sym_def] = ACTIONS(261),
    [anon_sym_defp] = ACTIONS(259),
    [sym_comment] = ACTIONS(43),
  },
  [47] = {
    [sym__expression] = STATE(70),
    [sym__value] = STATE(70),
    [sym_true] = STATE(70),
    [sym_false] = STATE(70),
    [sym_atom] = STATE(70),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(76),
    [sym_nil] = STATE(70),
    [sym_binary] = STATE(70),
    [sym_charlist] = STATE(70),
    [sym_string] = STATE(70),
    [sym_tuple] = STATE(70),
    [sym__list_or_keyword_list] = STATE(70),
    [sym_list] = STATE(70),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(70),
    [sym__map] = STATE(70),
    [sym_map] = STATE(70),
    [sym_map_update] = STATE(70),
    [sym_struct] = STATE(70),
    [sym_implicit_keyword_list] = STATE(77),
    [sym_defmodule] = STATE(70),
    [sym_alias] = ACTIONS(247),
    [sym_integer] = ACTIONS(247),
    [sym_float] = ACTIONS(249),
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
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(81),
    [anon_sym_nil] = ACTIONS(25),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_LT_LT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(263),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(85),
    [sym_comment] = ACTIONS(43),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [sym_alias] = ACTIONS(265),
    [sym_integer] = ACTIONS(267),
    [sym_float] = ACTIONS(265),
    [anon_sym_true] = ACTIONS(265),
    [anon_sym_COLONtrue] = ACTIONS(267),
    [anon_sym_false] = ACTIONS(265),
    [anon_sym_COLONfalse] = ACTIONS(267),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(267),
    [anon_sym_COLON_BANG] = ACTIONS(267),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(267),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(265),
    [anon_sym_COLON_AMP] = ACTIONS(267),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(267),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(265),
    [anon_sym_COLON_STAR] = ACTIONS(265),
    [anon_sym_COLON_PLUS] = ACTIONS(267),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(265),
    [anon_sym_COLON_DASH] = ACTIONS(267),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(265),
    [anon_sym_COLON_DOT] = ACTIONS(267),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(265),
    [anon_sym_COLON_SLASH] = ACTIONS(265),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(265),
    [anon_sym_COLON_LT] = ACTIONS(267),
    [anon_sym_COLON_LT_DASH] = ACTIONS(265),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(265),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(265),
    [anon_sym_COLON_LT_EQ] = ACTIONS(265),
    [anon_sym_COLON_LT_GT] = ACTIONS(265),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(265),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(267),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(265),
    [anon_sym_COLON_EQ] = ACTIONS(267),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(267),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(265),
    [anon_sym_COLON_EQ_GT] = ACTIONS(265),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(265),
    [anon_sym_COLON_GT] = ACTIONS(267),
    [anon_sym_COLON_GT_EQ] = ACTIONS(265),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(265),
    [anon_sym_COLON_AT] = ACTIONS(265),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(265),
    [anon_sym_COLON_CARET] = ACTIONS(265),
    [anon_sym_COLON_PIPE] = ACTIONS(267),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(265),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(267),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(265),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(267),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(265),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(265),
    [anon_sym_nil] = ACTIONS(265),
    [anon_sym_COLONnil] = ACTIONS(267),
    [anon_sym_LT_LT] = ACTIONS(265),
    [anon_sym_COMMA] = ACTIONS(265),
    [anon_sym_SQUOTE] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [anon_sym_LBRACE] = ACTIONS(265),
    [anon_sym_RBRACE] = ACTIONS(265),
    [anon_sym_LBRACK] = ACTIONS(265),
    [anon_sym_RBRACK] = ACTIONS(265),
    [anon_sym_PIPE] = ACTIONS(265),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(265),
    [anon_sym_EQ_GT] = ACTIONS(265),
    [anon_sym_PERCENT] = ACTIONS(267),
    [anon_sym_defmodule] = ACTIONS(265),
    [anon_sym_end] = ACTIONS(265),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(265),
    [anon_sym_defstruct] = ACTIONS(265),
    [anon_sym_def] = ACTIONS(267),
    [anon_sym_defp] = ACTIONS(265),
    [sym_comment] = ACTIONS(43),
  },
  [49] = {
    [aux_sym_tuple_repeat1] = STATE(79),
    [anon_sym_COMMA] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(263),
    [sym_comment] = ACTIONS(43),
  },
  [50] = {
    [sym_keyword] = STATE(81),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(271),
    [sym_comment] = ACTIONS(43),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(273),
    [sym_alias] = ACTIONS(273),
    [sym_integer] = ACTIONS(275),
    [sym_float] = ACTIONS(273),
    [anon_sym_true] = ACTIONS(273),
    [anon_sym_COLONtrue] = ACTIONS(275),
    [anon_sym_false] = ACTIONS(273),
    [anon_sym_COLONfalse] = ACTIONS(275),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(275),
    [anon_sym_COLON_BANG] = ACTIONS(275),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(275),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(273),
    [anon_sym_COLON_AMP] = ACTIONS(275),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(275),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(273),
    [anon_sym_COLON_STAR] = ACTIONS(273),
    [anon_sym_COLON_PLUS] = ACTIONS(275),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(273),
    [anon_sym_COLON_DASH] = ACTIONS(275),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(273),
    [anon_sym_COLON_DOT] = ACTIONS(275),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(273),
    [anon_sym_COLON_SLASH] = ACTIONS(273),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(273),
    [anon_sym_COLON_LT] = ACTIONS(275),
    [anon_sym_COLON_LT_DASH] = ACTIONS(273),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(273),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(273),
    [anon_sym_COLON_LT_EQ] = ACTIONS(273),
    [anon_sym_COLON_LT_GT] = ACTIONS(273),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(273),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(275),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(273),
    [anon_sym_COLON_EQ] = ACTIONS(275),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(275),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(273),
    [anon_sym_COLON_EQ_GT] = ACTIONS(273),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(273),
    [anon_sym_COLON_GT] = ACTIONS(275),
    [anon_sym_COLON_GT_EQ] = ACTIONS(273),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(273),
    [anon_sym_COLON_AT] = ACTIONS(273),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(273),
    [anon_sym_COLON_CARET] = ACTIONS(273),
    [anon_sym_COLON_PIPE] = ACTIONS(275),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(273),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(275),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(273),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(275),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(273),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(273),
    [anon_sym_nil] = ACTIONS(273),
    [anon_sym_COLONnil] = ACTIONS(275),
    [anon_sym_LT_LT] = ACTIONS(273),
    [anon_sym_COMMA] = ACTIONS(273),
    [anon_sym_SQUOTE] = ACTIONS(273),
    [anon_sym_DQUOTE] = ACTIONS(273),
    [anon_sym_LBRACE] = ACTIONS(273),
    [anon_sym_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_RBRACK] = ACTIONS(273),
    [anon_sym_PIPE] = ACTIONS(273),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(273),
    [anon_sym_EQ_GT] = ACTIONS(273),
    [anon_sym_PERCENT] = ACTIONS(275),
    [anon_sym_defmodule] = ACTIONS(273),
    [anon_sym_end] = ACTIONS(273),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(273),
    [anon_sym_defstruct] = ACTIONS(273),
    [anon_sym_def] = ACTIONS(275),
    [anon_sym_defp] = ACTIONS(273),
    [sym_comment] = ACTIONS(43),
  },
  [52] = {
    [aux_sym_keyword_list_repeat1] = STATE(83),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(271),
    [sym_comment] = ACTIONS(43),
  },
  [53] = {
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
  [54] = {
    [sym__value] = STATE(86),
    [sym_true] = STATE(86),
    [sym_false] = STATE(86),
    [sym_atom] = STATE(86),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(31),
    [sym_nil] = STATE(86),
    [sym_binary] = STATE(86),
    [sym_charlist] = STATE(86),
    [sym_string] = STATE(86),
    [sym_tuple] = STATE(86),
    [sym__list_or_keyword_list] = STATE(86),
    [sym_list] = STATE(86),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(86),
    [sym__map] = STATE(86),
    [sym_map] = STATE(86),
    [sym__map_body] = STATE(87),
    [sym_map_update] = STATE(86),
    [sym_pair] = STATE(33),
    [sym_struct] = STATE(86),
    [sym_defmodule] = STATE(86),
    [sym_alias] = ACTIONS(279),
    [sym_integer] = ACTIONS(279),
    [sym_float] = ACTIONS(281),
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
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(81),
    [anon_sym_nil] = ACTIONS(25),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_LT_LT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(85),
    [sym_comment] = ACTIONS(43),
  },
  [55] = {
    [sym__value] = STATE(88),
    [sym_true] = STATE(88),
    [sym_false] = STATE(88),
    [sym_atom] = STATE(88),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(88),
    [sym_binary] = STATE(88),
    [sym_charlist] = STATE(88),
    [sym_string] = STATE(88),
    [sym_tuple] = STATE(88),
    [sym__list_or_keyword_list] = STATE(88),
    [sym_list] = STATE(88),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(88),
    [sym__map] = STATE(88),
    [sym_map] = STATE(88),
    [sym_map_update] = STATE(88),
    [sym_struct] = STATE(88),
    [sym_defmodule] = STATE(88),
    [sym_alias] = ACTIONS(283),
    [sym_integer] = ACTIONS(285),
    [sym_float] = ACTIONS(283),
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
    [anon_sym_LT_LT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(41),
    [sym_comment] = ACTIONS(43),
  },
  [56] = {
    [sym_keyword] = STATE(81),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(287),
    [sym_comment] = ACTIONS(43),
  },
  [57] = {
    [aux_sym_keyword_list_repeat1] = STATE(90),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_RBRACE] = ACTIONS(287),
    [sym_comment] = ACTIONS(43),
  },
  [58] = {
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
    [anon_sym_LT_LT] = ACTIONS(291),
    [anon_sym_COMMA] = ACTIONS(291),
    [anon_sym_SQUOTE] = ACTIONS(291),
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
  [59] = {
    [sym__value] = STATE(86),
    [sym_true] = STATE(86),
    [sym_false] = STATE(86),
    [sym_atom] = STATE(86),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(81),
    [sym_nil] = STATE(86),
    [sym_binary] = STATE(86),
    [sym_charlist] = STATE(86),
    [sym_string] = STATE(86),
    [sym_tuple] = STATE(86),
    [sym__list_or_keyword_list] = STATE(86),
    [sym_list] = STATE(86),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(86),
    [sym__map] = STATE(86),
    [sym_map] = STATE(86),
    [sym_map_update] = STATE(86),
    [sym_pair] = STATE(91),
    [sym_struct] = STATE(86),
    [sym_defmodule] = STATE(86),
    [sym_alias] = ACTIONS(279),
    [sym_integer] = ACTIONS(279),
    [sym_float] = ACTIONS(281),
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
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(81),
    [anon_sym_nil] = ACTIONS(25),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_LT_LT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(287),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(85),
    [sym_comment] = ACTIONS(43),
  },
  [60] = {
    [aux_sym_keyword_list_repeat1] = STATE(93),
    [aux_sym__map_body_repeat1] = STATE(94),
    [anon_sym_COMMA] = ACTIONS(295),
    [anon_sym_RBRACE] = ACTIONS(287),
    [sym_comment] = ACTIONS(43),
  },
  [61] = {
    [sym__value] = STATE(86),
    [sym_true] = STATE(86),
    [sym_false] = STATE(86),
    [sym_atom] = STATE(86),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(96),
    [sym_nil] = STATE(86),
    [sym_binary] = STATE(86),
    [sym_charlist] = STATE(86),
    [sym_string] = STATE(86),
    [sym_tuple] = STATE(86),
    [sym__list_or_keyword_list] = STATE(86),
    [sym_list] = STATE(86),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(86),
    [sym__map] = STATE(86),
    [sym_map] = STATE(86),
    [sym_map_update] = STATE(86),
    [sym_pair] = STATE(97),
    [sym_struct] = STATE(86),
    [sym_defmodule] = STATE(86),
    [sym_alias] = ACTIONS(279),
    [sym_integer] = ACTIONS(279),
    [sym_float] = ACTIONS(281),
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
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(81),
    [anon_sym_nil] = ACTIONS(25),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_LT_LT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(297),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(85),
    [sym_comment] = ACTIONS(43),
  },
  [62] = {
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
    [anon_sym_LT_LT] = ACTIONS(299),
    [anon_sym_COMMA] = ACTIONS(299),
    [anon_sym_SQUOTE] = ACTIONS(299),
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
  [63] = {
    [sym__module_body] = STATE(103),
    [sym_module_attribute] = STATE(103),
    [sym_defstruct] = STATE(103),
    [sym_def] = STATE(103),
    [sym_defp] = STATE(103),
    [aux_sym_defmodule_repeat1] = STATE(103),
    [anon_sym_end] = ACTIONS(303),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(305),
    [anon_sym_defstruct] = ACTIONS(307),
    [anon_sym_def] = ACTIONS(309),
    [anon_sym_defp] = ACTIONS(311),
    [sym_comment] = ACTIONS(43),
  },
  [64] = {
    [anon_sym_COMMA] = ACTIONS(313),
    [anon_sym_GT_GT] = ACTIONS(313),
    [sym_comment] = ACTIONS(43),
  },
  [65] = {
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
    [anon_sym_LT_LT] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(315),
    [anon_sym_SQUOTE] = ACTIONS(315),
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
    [anon_sym_def] = ACTIONS(317),
    [anon_sym_defp] = ACTIONS(315),
    [sym_comment] = ACTIONS(43),
  },
  [66] = {
    [anon_sym_COMMA] = ACTIONS(319),
    [anon_sym_GT_GT] = ACTIONS(319),
    [sym_comment] = ACTIONS(43),
  },
  [67] = {
    [sym_binary_segment] = STATE(66),
    [sym_charlist] = STATE(17),
    [sym_string] = STATE(17),
    [sym_integer] = ACTIONS(61),
    [anon_sym_GT_GT] = ACTIONS(321),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(43),
  },
  [68] = {
    [aux_sym_binary_repeat1] = STATE(68),
    [anon_sym_COMMA] = ACTIONS(323),
    [anon_sym_GT_GT] = ACTIONS(319),
    [sym_comment] = ACTIONS(43),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(326),
    [sym_alias] = ACTIONS(326),
    [sym_integer] = ACTIONS(328),
    [sym_float] = ACTIONS(326),
    [anon_sym_true] = ACTIONS(326),
    [anon_sym_COLONtrue] = ACTIONS(328),
    [anon_sym_false] = ACTIONS(326),
    [anon_sym_COLONfalse] = ACTIONS(328),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(328),
    [anon_sym_COLON_BANG] = ACTIONS(328),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(328),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(326),
    [anon_sym_COLON_AMP] = ACTIONS(328),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(328),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(326),
    [anon_sym_COLON_STAR] = ACTIONS(326),
    [anon_sym_COLON_PLUS] = ACTIONS(328),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(326),
    [anon_sym_COLON_DASH] = ACTIONS(328),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(326),
    [anon_sym_COLON_DOT] = ACTIONS(328),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(326),
    [anon_sym_COLON_SLASH] = ACTIONS(326),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(326),
    [anon_sym_COLON_LT] = ACTIONS(328),
    [anon_sym_COLON_LT_DASH] = ACTIONS(326),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(326),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(326),
    [anon_sym_COLON_LT_EQ] = ACTIONS(326),
    [anon_sym_COLON_LT_GT] = ACTIONS(326),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(326),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(328),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(326),
    [anon_sym_COLON_EQ] = ACTIONS(328),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(328),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(326),
    [anon_sym_COLON_EQ_GT] = ACTIONS(326),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(326),
    [anon_sym_COLON_GT] = ACTIONS(328),
    [anon_sym_COLON_GT_EQ] = ACTIONS(326),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(326),
    [anon_sym_COLON_AT] = ACTIONS(326),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(326),
    [anon_sym_COLON_CARET] = ACTIONS(326),
    [anon_sym_COLON_PIPE] = ACTIONS(328),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(326),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(328),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(326),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(328),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(326),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(326),
    [anon_sym_nil] = ACTIONS(326),
    [anon_sym_COLONnil] = ACTIONS(328),
    [anon_sym_LT_LT] = ACTIONS(326),
    [anon_sym_COMMA] = ACTIONS(326),
    [anon_sym_SQUOTE] = ACTIONS(326),
    [anon_sym_DQUOTE] = ACTIONS(326),
    [anon_sym_LBRACE] = ACTIONS(326),
    [anon_sym_RBRACE] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(326),
    [anon_sym_RBRACK] = ACTIONS(326),
    [anon_sym_PIPE] = ACTIONS(326),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(326),
    [anon_sym_EQ_GT] = ACTIONS(326),
    [anon_sym_PERCENT] = ACTIONS(328),
    [anon_sym_defmodule] = ACTIONS(326),
    [anon_sym_end] = ACTIONS(326),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(326),
    [anon_sym_defstruct] = ACTIONS(326),
    [anon_sym_def] = ACTIONS(328),
    [anon_sym_defp] = ACTIONS(326),
    [sym_comment] = ACTIONS(43),
  },
  [70] = {
    [anon_sym_COMMA] = ACTIONS(330),
    [anon_sym_RBRACE] = ACTIONS(330),
    [anon_sym_RBRACK] = ACTIONS(330),
    [sym_comment] = ACTIONS(43),
  },
  [71] = {
    [aux_sym_keyword_list_repeat1] = STATE(107),
    [anon_sym_COMMA] = ACTIONS(332),
    [anon_sym_RBRACE] = ACTIONS(334),
    [sym_comment] = ACTIONS(43),
  },
  [72] = {
    [anon_sym_COMMA] = ACTIONS(336),
    [anon_sym_RBRACE] = ACTIONS(338),
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
    [sym_binary] = STATE(70),
    [sym_charlist] = STATE(70),
    [sym_string] = STATE(70),
    [sym_tuple] = STATE(70),
    [sym__list_or_keyword_list] = STATE(70),
    [sym_list] = STATE(70),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(70),
    [sym__map] = STATE(70),
    [sym_map] = STATE(70),
    [sym_map_update] = STATE(70),
    [sym_struct] = STATE(70),
    [sym_implicit_keyword_list] = STATE(110),
    [sym_defmodule] = STATE(70),
    [sym_alias] = ACTIONS(247),
    [sym_integer] = ACTIONS(247),
    [sym_float] = ACTIONS(249),
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
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(81),
    [anon_sym_nil] = ACTIONS(25),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_LT_LT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(85),
    [sym_comment] = ACTIONS(43),
  },
  [74] = {
    [aux_sym_tuple_repeat1] = STATE(74),
    [anon_sym_COMMA] = ACTIONS(340),
    [anon_sym_RBRACE] = ACTIONS(330),
    [sym_comment] = ACTIONS(43),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(343),
    [sym_alias] = ACTIONS(343),
    [sym_integer] = ACTIONS(345),
    [sym_float] = ACTIONS(343),
    [anon_sym_true] = ACTIONS(343),
    [anon_sym_COLONtrue] = ACTIONS(345),
    [anon_sym_false] = ACTIONS(343),
    [anon_sym_COLONfalse] = ACTIONS(345),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(345),
    [anon_sym_COLON_BANG] = ACTIONS(345),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(345),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(343),
    [anon_sym_COLON_AMP] = ACTIONS(345),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(345),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(343),
    [anon_sym_COLON_STAR] = ACTIONS(343),
    [anon_sym_COLON_PLUS] = ACTIONS(345),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(343),
    [anon_sym_COLON_DASH] = ACTIONS(345),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(343),
    [anon_sym_COLON_DOT] = ACTIONS(345),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(343),
    [anon_sym_COLON_SLASH] = ACTIONS(343),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(343),
    [anon_sym_COLON_LT] = ACTIONS(345),
    [anon_sym_COLON_LT_DASH] = ACTIONS(343),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(343),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(343),
    [anon_sym_COLON_LT_EQ] = ACTIONS(343),
    [anon_sym_COLON_LT_GT] = ACTIONS(343),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(343),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(345),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(343),
    [anon_sym_COLON_EQ] = ACTIONS(345),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(345),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(343),
    [anon_sym_COLON_EQ_GT] = ACTIONS(343),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(343),
    [anon_sym_COLON_GT] = ACTIONS(345),
    [anon_sym_COLON_GT_EQ] = ACTIONS(343),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(343),
    [anon_sym_COLON_AT] = ACTIONS(343),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(343),
    [anon_sym_COLON_CARET] = ACTIONS(343),
    [anon_sym_COLON_PIPE] = ACTIONS(345),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(343),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(345),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(343),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(345),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(343),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(343),
    [anon_sym_nil] = ACTIONS(343),
    [anon_sym_COLONnil] = ACTIONS(345),
    [anon_sym_LT_LT] = ACTIONS(343),
    [anon_sym_COMMA] = ACTIONS(343),
    [anon_sym_SQUOTE] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(343),
    [anon_sym_LBRACE] = ACTIONS(343),
    [anon_sym_RBRACE] = ACTIONS(343),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_RBRACK] = ACTIONS(343),
    [anon_sym_PIPE] = ACTIONS(343),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(343),
    [anon_sym_EQ_GT] = ACTIONS(343),
    [anon_sym_PERCENT] = ACTIONS(345),
    [anon_sym_defmodule] = ACTIONS(343),
    [anon_sym_end] = ACTIONS(343),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(343),
    [anon_sym_defstruct] = ACTIONS(343),
    [anon_sym_def] = ACTIONS(345),
    [anon_sym_defp] = ACTIONS(343),
    [sym_comment] = ACTIONS(43),
  },
  [76] = {
    [aux_sym_keyword_list_repeat1] = STATE(112),
    [anon_sym_COMMA] = ACTIONS(332),
    [anon_sym_RBRACK] = ACTIONS(334),
    [sym_comment] = ACTIONS(43),
  },
  [77] = {
    [anon_sym_COMMA] = ACTIONS(347),
    [anon_sym_RBRACK] = ACTIONS(349),
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
    [sym_binary] = STATE(70),
    [sym_charlist] = STATE(70),
    [sym_string] = STATE(70),
    [sym_tuple] = STATE(70),
    [sym__list_or_keyword_list] = STATE(70),
    [sym_list] = STATE(70),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(70),
    [sym__map] = STATE(70),
    [sym_map] = STATE(70),
    [sym_map_update] = STATE(70),
    [sym_struct] = STATE(70),
    [sym_implicit_keyword_list] = STATE(115),
    [sym_defmodule] = STATE(70),
    [sym_alias] = ACTIONS(247),
    [sym_integer] = ACTIONS(247),
    [sym_float] = ACTIONS(249),
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
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(81),
    [anon_sym_nil] = ACTIONS(25),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_LT_LT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(349),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(85),
    [sym_comment] = ACTIONS(43),
  },
  [79] = {
    [aux_sym_tuple_repeat1] = STATE(79),
    [anon_sym_COMMA] = ACTIONS(340),
    [anon_sym_RBRACK] = ACTIONS(330),
    [sym_comment] = ACTIONS(43),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(351),
    [sym_alias] = ACTIONS(351),
    [sym_integer] = ACTIONS(353),
    [sym_float] = ACTIONS(351),
    [anon_sym_true] = ACTIONS(351),
    [anon_sym_COLONtrue] = ACTIONS(353),
    [anon_sym_false] = ACTIONS(351),
    [anon_sym_COLONfalse] = ACTIONS(353),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(353),
    [anon_sym_COLON_BANG] = ACTIONS(353),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(353),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(351),
    [anon_sym_COLON_AMP] = ACTIONS(353),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(353),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(351),
    [anon_sym_COLON_STAR] = ACTIONS(351),
    [anon_sym_COLON_PLUS] = ACTIONS(353),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(351),
    [anon_sym_COLON_DASH] = ACTIONS(353),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(351),
    [anon_sym_COLON_DOT] = ACTIONS(353),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(351),
    [anon_sym_COLON_SLASH] = ACTIONS(351),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(351),
    [anon_sym_COLON_LT] = ACTIONS(353),
    [anon_sym_COLON_LT_DASH] = ACTIONS(351),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(351),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(351),
    [anon_sym_COLON_LT_EQ] = ACTIONS(351),
    [anon_sym_COLON_LT_GT] = ACTIONS(351),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(351),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(353),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(351),
    [anon_sym_COLON_EQ] = ACTIONS(353),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(353),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(351),
    [anon_sym_COLON_EQ_GT] = ACTIONS(351),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(351),
    [anon_sym_COLON_GT] = ACTIONS(353),
    [anon_sym_COLON_GT_EQ] = ACTIONS(351),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(351),
    [anon_sym_COLON_AT] = ACTIONS(351),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(351),
    [anon_sym_COLON_CARET] = ACTIONS(351),
    [anon_sym_COLON_PIPE] = ACTIONS(353),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(351),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(353),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(351),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(353),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(351),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(351),
    [anon_sym_nil] = ACTIONS(351),
    [anon_sym_COLONnil] = ACTIONS(353),
    [anon_sym_LT_LT] = ACTIONS(351),
    [anon_sym_COMMA] = ACTIONS(351),
    [anon_sym_SQUOTE] = ACTIONS(351),
    [anon_sym_DQUOTE] = ACTIONS(351),
    [anon_sym_LBRACE] = ACTIONS(351),
    [anon_sym_RBRACE] = ACTIONS(351),
    [anon_sym_LBRACK] = ACTIONS(351),
    [anon_sym_RBRACK] = ACTIONS(351),
    [anon_sym_PIPE] = ACTIONS(351),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(351),
    [anon_sym_EQ_GT] = ACTIONS(351),
    [anon_sym_PERCENT] = ACTIONS(353),
    [anon_sym_defmodule] = ACTIONS(351),
    [anon_sym_end] = ACTIONS(351),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(351),
    [anon_sym_defstruct] = ACTIONS(351),
    [anon_sym_def] = ACTIONS(353),
    [anon_sym_defp] = ACTIONS(351),
    [sym_comment] = ACTIONS(43),
  },
  [81] = {
    [anon_sym_COMMA] = ACTIONS(355),
    [anon_sym_RBRACE] = ACTIONS(355),
    [anon_sym_RBRACK] = ACTIONS(355),
    [anon_sym_end] = ACTIONS(355),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(355),
    [anon_sym_defstruct] = ACTIONS(355),
    [anon_sym_def] = ACTIONS(357),
    [anon_sym_defp] = ACTIONS(355),
    [sym_comment] = ACTIONS(43),
  },
  [82] = {
    [sym_keyword] = STATE(81),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(359),
    [sym_comment] = ACTIONS(43),
  },
  [83] = {
    [aux_sym_keyword_list_repeat1] = STATE(83),
    [anon_sym_COMMA] = ACTIONS(361),
    [anon_sym_RBRACK] = ACTIONS(355),
    [sym_comment] = ACTIONS(43),
  },
  [84] = {
    [anon_sym_RBRACK] = ACTIONS(364),
    [sym_comment] = ACTIONS(43),
  },
  [85] = {
    [anon_sym_RBRACK] = ACTIONS(366),
    [sym_comment] = ACTIONS(43),
  },
  [86] = {
    [anon_sym_EQ_GT] = ACTIONS(159),
    [sym_comment] = ACTIONS(43),
  },
  [87] = {
    [anon_sym_RBRACE] = ACTIONS(368),
    [sym_comment] = ACTIONS(43),
  },
  [88] = {
    [anon_sym_COMMA] = ACTIONS(370),
    [anon_sym_RBRACE] = ACTIONS(370),
    [sym_comment] = ACTIONS(43),
  },
  [89] = {
    [sym_keyword] = STATE(81),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(372),
    [sym_comment] = ACTIONS(43),
  },
  [90] = {
    [aux_sym_keyword_list_repeat1] = STATE(90),
    [anon_sym_COMMA] = ACTIONS(361),
    [anon_sym_RBRACE] = ACTIONS(355),
    [sym_comment] = ACTIONS(43),
  },
  [91] = {
    [anon_sym_COMMA] = ACTIONS(374),
    [anon_sym_RBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(43),
  },
  [92] = {
    [sym__value] = STATE(86),
    [sym_true] = STATE(86),
    [sym_false] = STATE(86),
    [sym_atom] = STATE(86),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(81),
    [sym_nil] = STATE(86),
    [sym_binary] = STATE(86),
    [sym_charlist] = STATE(86),
    [sym_string] = STATE(86),
    [sym_tuple] = STATE(86),
    [sym__list_or_keyword_list] = STATE(86),
    [sym_list] = STATE(86),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(86),
    [sym__map] = STATE(86),
    [sym_map] = STATE(86),
    [sym_map_update] = STATE(86),
    [sym_pair] = STATE(91),
    [sym_struct] = STATE(86),
    [sym_defmodule] = STATE(86),
    [sym_alias] = ACTIONS(279),
    [sym_integer] = ACTIONS(279),
    [sym_float] = ACTIONS(281),
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
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(81),
    [anon_sym_nil] = ACTIONS(25),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_LT_LT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(85),
    [sym_comment] = ACTIONS(43),
  },
  [93] = {
    [aux_sym_keyword_list_repeat1] = STATE(90),
    [anon_sym_COMMA] = ACTIONS(376),
    [anon_sym_RBRACE] = ACTIONS(372),
    [sym_comment] = ACTIONS(43),
  },
  [94] = {
    [aux_sym__map_body_repeat1] = STATE(94),
    [anon_sym_COMMA] = ACTIONS(378),
    [anon_sym_RBRACE] = ACTIONS(374),
    [sym_comment] = ACTIONS(43),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(381),
    [sym_alias] = ACTIONS(381),
    [sym_integer] = ACTIONS(383),
    [sym_float] = ACTIONS(381),
    [anon_sym_true] = ACTIONS(381),
    [anon_sym_COLONtrue] = ACTIONS(383),
    [anon_sym_false] = ACTIONS(381),
    [anon_sym_COLONfalse] = ACTIONS(383),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(383),
    [anon_sym_COLON_BANG] = ACTIONS(383),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(383),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(381),
    [anon_sym_COLON_AMP] = ACTIONS(383),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(383),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(381),
    [anon_sym_COLON_STAR] = ACTIONS(381),
    [anon_sym_COLON_PLUS] = ACTIONS(383),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(381),
    [anon_sym_COLON_DASH] = ACTIONS(383),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(381),
    [anon_sym_COLON_DOT] = ACTIONS(383),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(381),
    [anon_sym_COLON_SLASH] = ACTIONS(381),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(381),
    [anon_sym_COLON_LT] = ACTIONS(383),
    [anon_sym_COLON_LT_DASH] = ACTIONS(381),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(381),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(381),
    [anon_sym_COLON_LT_EQ] = ACTIONS(381),
    [anon_sym_COLON_LT_GT] = ACTIONS(381),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(381),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(383),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(381),
    [anon_sym_COLON_EQ] = ACTIONS(383),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(383),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(381),
    [anon_sym_COLON_EQ_GT] = ACTIONS(381),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(381),
    [anon_sym_COLON_GT] = ACTIONS(383),
    [anon_sym_COLON_GT_EQ] = ACTIONS(381),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(381),
    [anon_sym_COLON_AT] = ACTIONS(381),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(381),
    [anon_sym_COLON_CARET] = ACTIONS(381),
    [anon_sym_COLON_PIPE] = ACTIONS(383),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(381),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(383),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(381),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(383),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(381),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(381),
    [anon_sym_nil] = ACTIONS(381),
    [anon_sym_COLONnil] = ACTIONS(383),
    [anon_sym_LT_LT] = ACTIONS(381),
    [anon_sym_COMMA] = ACTIONS(381),
    [anon_sym_SQUOTE] = ACTIONS(381),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [anon_sym_LBRACE] = ACTIONS(381),
    [anon_sym_RBRACE] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_RBRACK] = ACTIONS(381),
    [anon_sym_PIPE] = ACTIONS(381),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(381),
    [anon_sym_EQ_GT] = ACTIONS(381),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_defmodule] = ACTIONS(381),
    [anon_sym_end] = ACTIONS(381),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(381),
    [anon_sym_defstruct] = ACTIONS(381),
    [anon_sym_def] = ACTIONS(383),
    [anon_sym_defp] = ACTIONS(381),
    [sym_comment] = ACTIONS(43),
  },
  [96] = {
    [aux_sym_keyword_list_repeat1] = STATE(123),
    [anon_sym_COMMA] = ACTIONS(385),
    [anon_sym_RBRACE] = ACTIONS(387),
    [sym_comment] = ACTIONS(43),
  },
  [97] = {
    [aux_sym_keyword_list_repeat1] = STATE(126),
    [aux_sym__map_body_repeat1] = STATE(127),
    [anon_sym_COMMA] = ACTIONS(389),
    [anon_sym_RBRACE] = ACTIONS(391),
    [sym_comment] = ACTIONS(43),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(393),
    [sym_alias] = ACTIONS(393),
    [sym_integer] = ACTIONS(395),
    [sym_float] = ACTIONS(393),
    [anon_sym_true] = ACTIONS(393),
    [anon_sym_COLONtrue] = ACTIONS(395),
    [anon_sym_false] = ACTIONS(393),
    [anon_sym_COLONfalse] = ACTIONS(395),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(395),
    [anon_sym_COLON_BANG] = ACTIONS(395),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(395),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(393),
    [anon_sym_COLON_AMP] = ACTIONS(395),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(395),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(393),
    [anon_sym_COLON_STAR] = ACTIONS(393),
    [anon_sym_COLON_PLUS] = ACTIONS(395),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(393),
    [anon_sym_COLON_DASH] = ACTIONS(395),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(393),
    [anon_sym_COLON_DOT] = ACTIONS(395),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(393),
    [anon_sym_COLON_SLASH] = ACTIONS(393),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(393),
    [anon_sym_COLON_LT] = ACTIONS(395),
    [anon_sym_COLON_LT_DASH] = ACTIONS(393),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(393),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(393),
    [anon_sym_COLON_LT_EQ] = ACTIONS(393),
    [anon_sym_COLON_LT_GT] = ACTIONS(393),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(393),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(395),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(393),
    [anon_sym_COLON_EQ] = ACTIONS(395),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(395),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(393),
    [anon_sym_COLON_EQ_GT] = ACTIONS(393),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(393),
    [anon_sym_COLON_GT] = ACTIONS(395),
    [anon_sym_COLON_GT_EQ] = ACTIONS(393),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(393),
    [anon_sym_COLON_AT] = ACTIONS(393),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(393),
    [anon_sym_COLON_CARET] = ACTIONS(393),
    [anon_sym_COLON_PIPE] = ACTIONS(395),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(393),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(395),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(393),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(395),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(393),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(393),
    [anon_sym_nil] = ACTIONS(393),
    [anon_sym_COLONnil] = ACTIONS(395),
    [anon_sym_LT_LT] = ACTIONS(393),
    [anon_sym_COMMA] = ACTIONS(393),
    [anon_sym_SQUOTE] = ACTIONS(393),
    [anon_sym_DQUOTE] = ACTIONS(393),
    [anon_sym_LBRACE] = ACTIONS(393),
    [anon_sym_RBRACE] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(393),
    [anon_sym_RBRACK] = ACTIONS(393),
    [anon_sym_PIPE] = ACTIONS(393),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(393),
    [anon_sym_EQ_GT] = ACTIONS(393),
    [anon_sym_PERCENT] = ACTIONS(395),
    [anon_sym_defmodule] = ACTIONS(393),
    [anon_sym_end] = ACTIONS(393),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(393),
    [anon_sym_defstruct] = ACTIONS(393),
    [anon_sym_def] = ACTIONS(395),
    [anon_sym_defp] = ACTIONS(393),
    [sym_comment] = ACTIONS(43),
  },
  [99] = {
    [sym__value] = STATE(128),
    [sym_true] = STATE(128),
    [sym_false] = STATE(128),
    [sym_atom] = STATE(128),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(129),
    [sym_nil] = STATE(128),
    [sym_binary] = STATE(128),
    [sym_charlist] = STATE(128),
    [sym_string] = STATE(128),
    [sym_tuple] = STATE(128),
    [sym__list_or_keyword_list] = STATE(128),
    [sym_list] = STATE(128),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(128),
    [sym__map] = STATE(128),
    [sym_map] = STATE(128),
    [sym_map_update] = STATE(128),
    [sym_struct] = STATE(128),
    [sym_implicit_keyword_list] = STATE(128),
    [sym_defmodule] = STATE(128),
    [sym_alias] = ACTIONS(397),
    [sym_integer] = ACTIONS(397),
    [sym_float] = ACTIONS(399),
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
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(81),
    [anon_sym_nil] = ACTIONS(25),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_LT_LT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(85),
    [anon_sym_end] = ACTIONS(401),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(403),
    [anon_sym_defstruct] = ACTIONS(401),
    [anon_sym_def] = ACTIONS(401),
    [anon_sym_defp] = ACTIONS(401),
    [sym_comment] = ACTIONS(43),
  },
  [100] = {
    [sym_keyword] = STATE(129),
    [sym_list] = STATE(131),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_implicit_keyword_list] = STATE(131),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(405),
    [sym_comment] = ACTIONS(43),
  },
  [101] = {
    [sym__function] = STATE(133),
    [sym_identifier] = ACTIONS(407),
    [sym_comment] = ACTIONS(43),
  },
  [102] = {
    [sym__function] = STATE(134),
    [sym_identifier] = ACTIONS(407),
    [sym_comment] = ACTIONS(43),
  },
  [103] = {
    [sym__module_body] = STATE(136),
    [sym_module_attribute] = STATE(136),
    [sym_defstruct] = STATE(136),
    [sym_def] = STATE(136),
    [sym_defp] = STATE(136),
    [aux_sym_defmodule_repeat1] = STATE(136),
    [anon_sym_end] = ACTIONS(409),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(305),
    [anon_sym_defstruct] = ACTIONS(307),
    [anon_sym_def] = ACTIONS(309),
    [anon_sym_defp] = ACTIONS(311),
    [sym_comment] = ACTIONS(43),
  },
  [104] = {
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
    [anon_sym_LT_LT] = ACTIONS(411),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_SQUOTE] = ACTIONS(411),
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
    [anon_sym_def] = ACTIONS(413),
    [anon_sym_defp] = ACTIONS(411),
    [sym_comment] = ACTIONS(43),
  },
  [105] = {
    [sym_binary_segment] = STATE(66),
    [sym_charlist] = STATE(17),
    [sym_string] = STATE(17),
    [sym_integer] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(43),
  },
  [106] = {
    [sym_keyword] = STATE(81),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(81),
    [sym_comment] = ACTIONS(43),
  },
  [107] = {
    [aux_sym_keyword_list_repeat1] = STATE(90),
    [anon_sym_COMMA] = ACTIONS(332),
    [anon_sym_RBRACE] = ACTIONS(415),
    [sym_comment] = ACTIONS(43),
  },
  [108] = {
    [anon_sym_RBRACE] = ACTIONS(417),
    [sym_comment] = ACTIONS(43),
  },
  [109] = {
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
    [anon_sym_LT_LT] = ACTIONS(419),
    [anon_sym_COMMA] = ACTIONS(419),
    [anon_sym_SQUOTE] = ACTIONS(419),
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
  [110] = {
    [anon_sym_COMMA] = ACTIONS(423),
    [anon_sym_RBRACE] = ACTIONS(417),
    [sym_comment] = ACTIONS(43),
  },
  [111] = {
    [sym__expression] = STATE(70),
    [sym__value] = STATE(70),
    [sym_true] = STATE(70),
    [sym_false] = STATE(70),
    [sym_atom] = STATE(70),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(70),
    [sym_binary] = STATE(70),
    [sym_charlist] = STATE(70),
    [sym_string] = STATE(70),
    [sym_tuple] = STATE(70),
    [sym__list_or_keyword_list] = STATE(70),
    [sym_list] = STATE(70),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(70),
    [sym__map] = STATE(70),
    [sym_map] = STATE(70),
    [sym_map_update] = STATE(70),
    [sym_struct] = STATE(70),
    [sym_defmodule] = STATE(70),
    [sym_alias] = ACTIONS(249),
    [sym_integer] = ACTIONS(247),
    [sym_float] = ACTIONS(249),
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
    [anon_sym_LT_LT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(41),
    [sym_comment] = ACTIONS(43),
  },
  [112] = {
    [aux_sym_keyword_list_repeat1] = STATE(83),
    [anon_sym_COMMA] = ACTIONS(332),
    [anon_sym_RBRACK] = ACTIONS(415),
    [sym_comment] = ACTIONS(43),
  },
  [113] = {
    [anon_sym_RBRACK] = ACTIONS(425),
    [sym_comment] = ACTIONS(43),
  },
  [114] = {
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
    [anon_sym_LT_LT] = ACTIONS(427),
    [anon_sym_COMMA] = ACTIONS(427),
    [anon_sym_SQUOTE] = ACTIONS(427),
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
    [anon_sym_def] = ACTIONS(429),
    [anon_sym_defp] = ACTIONS(427),
    [sym_comment] = ACTIONS(43),
  },
  [115] = {
    [anon_sym_COMMA] = ACTIONS(431),
    [anon_sym_RBRACK] = ACTIONS(425),
    [sym_comment] = ACTIONS(43),
  },
  [116] = {
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
    [anon_sym_LT_LT] = ACTIONS(433),
    [anon_sym_COMMA] = ACTIONS(433),
    [anon_sym_SQUOTE] = ACTIONS(433),
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
    [anon_sym_defstruct] = ACTIONS(433),
    [anon_sym_def] = ACTIONS(435),
    [anon_sym_defp] = ACTIONS(433),
    [sym_comment] = ACTIONS(43),
  },
  [117] = {
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
    [anon_sym_LT_LT] = ACTIONS(437),
    [anon_sym_COMMA] = ACTIONS(437),
    [anon_sym_SQUOTE] = ACTIONS(437),
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
  [118] = {
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
    [anon_sym_LT_LT] = ACTIONS(441),
    [anon_sym_COMMA] = ACTIONS(441),
    [anon_sym_SQUOTE] = ACTIONS(441),
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
    [anon_sym_def] = ACTIONS(443),
    [anon_sym_defp] = ACTIONS(441),
    [sym_comment] = ACTIONS(43),
  },
  [119] = {
    [sym_keyword] = STATE(81),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(445),
    [sym_comment] = ACTIONS(43),
  },
  [120] = {
    [sym__value] = STATE(86),
    [sym_true] = STATE(86),
    [sym_false] = STATE(86),
    [sym_atom] = STATE(86),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(86),
    [sym_binary] = STATE(86),
    [sym_charlist] = STATE(86),
    [sym_string] = STATE(86),
    [sym_tuple] = STATE(86),
    [sym__list_or_keyword_list] = STATE(86),
    [sym_list] = STATE(86),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(86),
    [sym__map] = STATE(86),
    [sym_map] = STATE(86),
    [sym_map_update] = STATE(86),
    [sym_pair] = STATE(91),
    [sym_struct] = STATE(86),
    [sym_defmodule] = STATE(86),
    [sym_alias] = ACTIONS(281),
    [sym_integer] = ACTIONS(279),
    [sym_float] = ACTIONS(281),
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
    [anon_sym_LT_LT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(41),
    [sym_comment] = ACTIONS(43),
  },
  [121] = {
    [sym_keyword] = STATE(81),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(447),
    [sym_comment] = ACTIONS(43),
  },
  [122] = {
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
    [anon_sym_LT_LT] = ACTIONS(449),
    [anon_sym_COMMA] = ACTIONS(449),
    [anon_sym_SQUOTE] = ACTIONS(449),
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
    [anon_sym_def] = ACTIONS(451),
    [anon_sym_defp] = ACTIONS(449),
    [sym_comment] = ACTIONS(43),
  },
  [123] = {
    [aux_sym_keyword_list_repeat1] = STATE(90),
    [anon_sym_COMMA] = ACTIONS(453),
    [anon_sym_RBRACE] = ACTIONS(447),
    [sym_comment] = ACTIONS(43),
  },
  [124] = {
    [sym__value] = STATE(86),
    [sym_true] = STATE(86),
    [sym_false] = STATE(86),
    [sym_atom] = STATE(86),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(81),
    [sym_nil] = STATE(86),
    [sym_binary] = STATE(86),
    [sym_charlist] = STATE(86),
    [sym_string] = STATE(86),
    [sym_tuple] = STATE(86),
    [sym__list_or_keyword_list] = STATE(86),
    [sym_list] = STATE(86),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(86),
    [sym__map] = STATE(86),
    [sym_map] = STATE(86),
    [sym_map_update] = STATE(86),
    [sym_pair] = STATE(91),
    [sym_struct] = STATE(86),
    [sym_defmodule] = STATE(86),
    [sym_alias] = ACTIONS(279),
    [sym_integer] = ACTIONS(279),
    [sym_float] = ACTIONS(281),
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
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(81),
    [anon_sym_nil] = ACTIONS(25),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_LT_LT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(455),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(85),
    [sym_comment] = ACTIONS(43),
  },
  [125] = {
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
    [anon_sym_LT_LT] = ACTIONS(457),
    [anon_sym_COMMA] = ACTIONS(457),
    [anon_sym_SQUOTE] = ACTIONS(457),
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
    [anon_sym_def] = ACTIONS(459),
    [anon_sym_defp] = ACTIONS(457),
    [sym_comment] = ACTIONS(43),
  },
  [126] = {
    [aux_sym_keyword_list_repeat1] = STATE(90),
    [anon_sym_COMMA] = ACTIONS(461),
    [anon_sym_RBRACE] = ACTIONS(455),
    [sym_comment] = ACTIONS(43),
  },
  [127] = {
    [aux_sym_keyword_list_repeat1] = STATE(146),
    [aux_sym__map_body_repeat1] = STATE(94),
    [anon_sym_COMMA] = ACTIONS(463),
    [anon_sym_RBRACE] = ACTIONS(455),
    [sym_comment] = ACTIONS(43),
  },
  [128] = {
    [anon_sym_end] = ACTIONS(465),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(465),
    [anon_sym_defstruct] = ACTIONS(465),
    [anon_sym_def] = ACTIONS(467),
    [anon_sym_defp] = ACTIONS(465),
    [sym_comment] = ACTIONS(43),
  },
  [129] = {
    [aux_sym_keyword_list_repeat1] = STATE(147),
    [anon_sym_COMMA] = ACTIONS(332),
    [anon_sym_end] = ACTIONS(334),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(334),
    [anon_sym_defstruct] = ACTIONS(334),
    [anon_sym_def] = ACTIONS(469),
    [anon_sym_defp] = ACTIONS(334),
    [sym_comment] = ACTIONS(43),
  },
  [130] = {
    [sym__expression] = STATE(26),
    [sym__value] = STATE(26),
    [sym_true] = STATE(26),
    [sym_false] = STATE(26),
    [sym_atom] = STATE(26),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(26),
    [sym_binary] = STATE(26),
    [sym_charlist] = STATE(26),
    [sym_string] = STATE(26),
    [sym_tuple] = STATE(26),
    [sym__list_or_keyword_list] = STATE(26),
    [sym_list] = STATE(26),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_head] = STATE(28),
    [sym_keyword_list] = STATE(26),
    [sym__map] = STATE(26),
    [sym_map] = STATE(26),
    [sym_map_update] = STATE(26),
    [sym_struct] = STATE(26),
    [sym_defmodule] = STATE(26),
    [sym_alias] = ACTIONS(79),
    [sym_integer] = ACTIONS(77),
    [sym_float] = ACTIONS(79),
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
    [anon_sym_LT_LT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(83),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(41),
    [sym_comment] = ACTIONS(43),
  },
  [131] = {
    [anon_sym_end] = ACTIONS(471),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(471),
    [anon_sym_defstruct] = ACTIONS(471),
    [anon_sym_def] = ACTIONS(473),
    [anon_sym_defp] = ACTIONS(471),
    [sym_comment] = ACTIONS(43),
  },
  [132] = {
    [anon_sym_do] = ACTIONS(475),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(477),
    [sym_comment] = ACTIONS(43),
  },
  [133] = {
    [anon_sym_end] = ACTIONS(479),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(479),
    [anon_sym_defstruct] = ACTIONS(479),
    [anon_sym_def] = ACTIONS(481),
    [anon_sym_defp] = ACTIONS(479),
    [sym_comment] = ACTIONS(43),
  },
  [134] = {
    [anon_sym_end] = ACTIONS(483),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(483),
    [anon_sym_defstruct] = ACTIONS(483),
    [anon_sym_def] = ACTIONS(485),
    [anon_sym_defp] = ACTIONS(483),
    [sym_comment] = ACTIONS(43),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(487),
    [sym_alias] = ACTIONS(487),
    [sym_integer] = ACTIONS(489),
    [sym_float] = ACTIONS(487),
    [anon_sym_true] = ACTIONS(487),
    [anon_sym_COLONtrue] = ACTIONS(489),
    [anon_sym_false] = ACTIONS(487),
    [anon_sym_COLONfalse] = ACTIONS(489),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(489),
    [anon_sym_COLON_BANG] = ACTIONS(489),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(489),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(487),
    [anon_sym_COLON_AMP] = ACTIONS(489),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(489),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(487),
    [anon_sym_COLON_STAR] = ACTIONS(487),
    [anon_sym_COLON_PLUS] = ACTIONS(489),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(487),
    [anon_sym_COLON_DASH] = ACTIONS(489),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(487),
    [anon_sym_COLON_DOT] = ACTIONS(489),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(487),
    [anon_sym_COLON_SLASH] = ACTIONS(487),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(487),
    [anon_sym_COLON_LT] = ACTIONS(489),
    [anon_sym_COLON_LT_DASH] = ACTIONS(487),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(487),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(487),
    [anon_sym_COLON_LT_EQ] = ACTIONS(487),
    [anon_sym_COLON_LT_GT] = ACTIONS(487),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(487),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(489),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(487),
    [anon_sym_COLON_EQ] = ACTIONS(489),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(489),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(487),
    [anon_sym_COLON_EQ_GT] = ACTIONS(487),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(487),
    [anon_sym_COLON_GT] = ACTIONS(489),
    [anon_sym_COLON_GT_EQ] = ACTIONS(487),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(487),
    [anon_sym_COLON_AT] = ACTIONS(487),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(487),
    [anon_sym_COLON_CARET] = ACTIONS(487),
    [anon_sym_COLON_PIPE] = ACTIONS(489),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(487),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(489),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(489),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(487),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(487),
    [anon_sym_nil] = ACTIONS(487),
    [anon_sym_COLONnil] = ACTIONS(489),
    [anon_sym_LT_LT] = ACTIONS(487),
    [anon_sym_COMMA] = ACTIONS(487),
    [anon_sym_SQUOTE] = ACTIONS(487),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [anon_sym_LBRACE] = ACTIONS(487),
    [anon_sym_RBRACE] = ACTIONS(487),
    [anon_sym_LBRACK] = ACTIONS(487),
    [anon_sym_RBRACK] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(487),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(487),
    [anon_sym_EQ_GT] = ACTIONS(487),
    [anon_sym_PERCENT] = ACTIONS(489),
    [anon_sym_defmodule] = ACTIONS(487),
    [anon_sym_end] = ACTIONS(487),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(487),
    [anon_sym_defstruct] = ACTIONS(487),
    [anon_sym_def] = ACTIONS(489),
    [anon_sym_defp] = ACTIONS(487),
    [sym_comment] = ACTIONS(43),
  },
  [136] = {
    [sym__module_body] = STATE(136),
    [sym_module_attribute] = STATE(136),
    [sym_defstruct] = STATE(136),
    [sym_def] = STATE(136),
    [sym_defp] = STATE(136),
    [aux_sym_defmodule_repeat1] = STATE(136),
    [anon_sym_end] = ACTIONS(491),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(493),
    [anon_sym_defstruct] = ACTIONS(496),
    [anon_sym_def] = ACTIONS(499),
    [anon_sym_defp] = ACTIONS(502),
    [sym_comment] = ACTIONS(43),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(505),
    [sym_alias] = ACTIONS(505),
    [sym_integer] = ACTIONS(507),
    [sym_float] = ACTIONS(505),
    [anon_sym_true] = ACTIONS(505),
    [anon_sym_COLONtrue] = ACTIONS(507),
    [anon_sym_false] = ACTIONS(505),
    [anon_sym_COLONfalse] = ACTIONS(507),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(507),
    [anon_sym_COLON_BANG] = ACTIONS(507),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(507),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(505),
    [anon_sym_COLON_AMP] = ACTIONS(507),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(507),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(505),
    [anon_sym_COLON_STAR] = ACTIONS(505),
    [anon_sym_COLON_PLUS] = ACTIONS(507),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(505),
    [anon_sym_COLON_DASH] = ACTIONS(507),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(505),
    [anon_sym_COLON_DOT] = ACTIONS(507),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(505),
    [anon_sym_COLON_SLASH] = ACTIONS(505),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(505),
    [anon_sym_COLON_LT] = ACTIONS(507),
    [anon_sym_COLON_LT_DASH] = ACTIONS(505),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(505),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(505),
    [anon_sym_COLON_LT_EQ] = ACTIONS(505),
    [anon_sym_COLON_LT_GT] = ACTIONS(505),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(505),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(507),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(505),
    [anon_sym_COLON_EQ] = ACTIONS(507),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(507),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(505),
    [anon_sym_COLON_EQ_GT] = ACTIONS(505),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(505),
    [anon_sym_COLON_GT] = ACTIONS(507),
    [anon_sym_COLON_GT_EQ] = ACTIONS(505),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(505),
    [anon_sym_COLON_AT] = ACTIONS(505),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(505),
    [anon_sym_COLON_CARET] = ACTIONS(505),
    [anon_sym_COLON_PIPE] = ACTIONS(507),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(505),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(507),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(505),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(507),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(505),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(505),
    [anon_sym_nil] = ACTIONS(505),
    [anon_sym_COLONnil] = ACTIONS(507),
    [anon_sym_LT_LT] = ACTIONS(505),
    [anon_sym_COMMA] = ACTIONS(505),
    [anon_sym_SQUOTE] = ACTIONS(505),
    [anon_sym_DQUOTE] = ACTIONS(505),
    [anon_sym_LBRACE] = ACTIONS(505),
    [anon_sym_RBRACE] = ACTIONS(505),
    [anon_sym_LBRACK] = ACTIONS(505),
    [anon_sym_RBRACK] = ACTIONS(505),
    [anon_sym_PIPE] = ACTIONS(505),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(505),
    [anon_sym_EQ_GT] = ACTIONS(505),
    [anon_sym_PERCENT] = ACTIONS(507),
    [anon_sym_defmodule] = ACTIONS(505),
    [anon_sym_end] = ACTIONS(505),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(505),
    [anon_sym_defstruct] = ACTIONS(505),
    [anon_sym_def] = ACTIONS(507),
    [anon_sym_defp] = ACTIONS(505),
    [sym_comment] = ACTIONS(43),
  },
  [138] = {
    [anon_sym_RBRACE] = ACTIONS(509),
    [sym_comment] = ACTIONS(43),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(511),
    [sym_alias] = ACTIONS(511),
    [sym_integer] = ACTIONS(513),
    [sym_float] = ACTIONS(511),
    [anon_sym_true] = ACTIONS(511),
    [anon_sym_COLONtrue] = ACTIONS(513),
    [anon_sym_false] = ACTIONS(511),
    [anon_sym_COLONfalse] = ACTIONS(513),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(513),
    [anon_sym_COLON_BANG] = ACTIONS(513),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(513),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(511),
    [anon_sym_COLON_AMP] = ACTIONS(513),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(513),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(511),
    [anon_sym_COLON_STAR] = ACTIONS(511),
    [anon_sym_COLON_PLUS] = ACTIONS(513),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(511),
    [anon_sym_COLON_DASH] = ACTIONS(513),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(511),
    [anon_sym_COLON_DOT] = ACTIONS(513),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(511),
    [anon_sym_COLON_SLASH] = ACTIONS(511),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(511),
    [anon_sym_COLON_LT] = ACTIONS(513),
    [anon_sym_COLON_LT_DASH] = ACTIONS(511),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(511),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(511),
    [anon_sym_COLON_LT_EQ] = ACTIONS(511),
    [anon_sym_COLON_LT_GT] = ACTIONS(511),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(511),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(513),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(511),
    [anon_sym_COLON_EQ] = ACTIONS(513),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(513),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(511),
    [anon_sym_COLON_EQ_GT] = ACTIONS(511),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(511),
    [anon_sym_COLON_GT] = ACTIONS(513),
    [anon_sym_COLON_GT_EQ] = ACTIONS(511),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(511),
    [anon_sym_COLON_AT] = ACTIONS(511),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(511),
    [anon_sym_COLON_CARET] = ACTIONS(511),
    [anon_sym_COLON_PIPE] = ACTIONS(513),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(511),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(513),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(511),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(513),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(511),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(511),
    [anon_sym_nil] = ACTIONS(511),
    [anon_sym_COLONnil] = ACTIONS(513),
    [anon_sym_LT_LT] = ACTIONS(511),
    [anon_sym_COMMA] = ACTIONS(511),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_DQUOTE] = ACTIONS(511),
    [anon_sym_LBRACE] = ACTIONS(511),
    [anon_sym_RBRACE] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(511),
    [anon_sym_RBRACK] = ACTIONS(511),
    [anon_sym_PIPE] = ACTIONS(511),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(511),
    [anon_sym_EQ_GT] = ACTIONS(511),
    [anon_sym_PERCENT] = ACTIONS(513),
    [anon_sym_defmodule] = ACTIONS(511),
    [anon_sym_end] = ACTIONS(511),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(511),
    [anon_sym_defstruct] = ACTIONS(511),
    [anon_sym_def] = ACTIONS(513),
    [anon_sym_defp] = ACTIONS(511),
    [sym_comment] = ACTIONS(43),
  },
  [140] = {
    [anon_sym_RBRACK] = ACTIONS(515),
    [sym_comment] = ACTIONS(43),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(517),
    [sym_alias] = ACTIONS(517),
    [sym_integer] = ACTIONS(519),
    [sym_float] = ACTIONS(517),
    [anon_sym_true] = ACTIONS(517),
    [anon_sym_COLONtrue] = ACTIONS(519),
    [anon_sym_false] = ACTIONS(517),
    [anon_sym_COLONfalse] = ACTIONS(519),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(519),
    [anon_sym_COLON_BANG] = ACTIONS(519),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(519),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(517),
    [anon_sym_COLON_AMP] = ACTIONS(519),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(519),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(517),
    [anon_sym_COLON_STAR] = ACTIONS(517),
    [anon_sym_COLON_PLUS] = ACTIONS(519),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(517),
    [anon_sym_COLON_DASH] = ACTIONS(519),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(517),
    [anon_sym_COLON_DOT] = ACTIONS(519),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(517),
    [anon_sym_COLON_SLASH] = ACTIONS(517),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(517),
    [anon_sym_COLON_LT] = ACTIONS(519),
    [anon_sym_COLON_LT_DASH] = ACTIONS(517),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(517),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(517),
    [anon_sym_COLON_LT_EQ] = ACTIONS(517),
    [anon_sym_COLON_LT_GT] = ACTIONS(517),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(517),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(519),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(517),
    [anon_sym_COLON_EQ] = ACTIONS(519),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(519),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(517),
    [anon_sym_COLON_EQ_GT] = ACTIONS(517),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(517),
    [anon_sym_COLON_GT] = ACTIONS(519),
    [anon_sym_COLON_GT_EQ] = ACTIONS(517),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(517),
    [anon_sym_COLON_AT] = ACTIONS(517),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(517),
    [anon_sym_COLON_CARET] = ACTIONS(517),
    [anon_sym_COLON_PIPE] = ACTIONS(519),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(517),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(519),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(517),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(519),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(517),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(517),
    [anon_sym_nil] = ACTIONS(517),
    [anon_sym_COLONnil] = ACTIONS(519),
    [anon_sym_LT_LT] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(517),
    [anon_sym_SQUOTE] = ACTIONS(517),
    [anon_sym_DQUOTE] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_RBRACE] = ACTIONS(517),
    [anon_sym_LBRACK] = ACTIONS(517),
    [anon_sym_RBRACK] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(517),
    [anon_sym_EQ_GT] = ACTIONS(517),
    [anon_sym_PERCENT] = ACTIONS(519),
    [anon_sym_defmodule] = ACTIONS(517),
    [anon_sym_end] = ACTIONS(517),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(517),
    [anon_sym_defstruct] = ACTIONS(517),
    [anon_sym_def] = ACTIONS(519),
    [anon_sym_defp] = ACTIONS(517),
    [sym_comment] = ACTIONS(43),
  },
  [142] = {
    [sym_keyword] = STATE(81),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(521),
    [sym_comment] = ACTIONS(43),
  },
  [143] = {
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
    [anon_sym_LT_LT] = ACTIONS(523),
    [anon_sym_COMMA] = ACTIONS(523),
    [anon_sym_SQUOTE] = ACTIONS(523),
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
    [anon_sym_def] = ACTIONS(525),
    [anon_sym_defp] = ACTIONS(523),
    [sym_comment] = ACTIONS(43),
  },
  [144] = {
    [sym_keyword] = STATE(81),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(527),
    [sym_comment] = ACTIONS(43),
  },
  [145] = {
    [sym__value] = STATE(86),
    [sym_true] = STATE(86),
    [sym_false] = STATE(86),
    [sym_atom] = STATE(86),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(81),
    [sym_nil] = STATE(86),
    [sym_binary] = STATE(86),
    [sym_charlist] = STATE(86),
    [sym_string] = STATE(86),
    [sym_tuple] = STATE(86),
    [sym__list_or_keyword_list] = STATE(86),
    [sym_list] = STATE(86),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(86),
    [sym__map] = STATE(86),
    [sym_map] = STATE(86),
    [sym_map_update] = STATE(86),
    [sym_pair] = STATE(91),
    [sym_struct] = STATE(86),
    [sym_defmodule] = STATE(86),
    [sym_alias] = ACTIONS(279),
    [sym_integer] = ACTIONS(279),
    [sym_float] = ACTIONS(281),
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
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(81),
    [anon_sym_nil] = ACTIONS(25),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_LT_LT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(527),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(85),
    [sym_comment] = ACTIONS(43),
  },
  [146] = {
    [aux_sym_keyword_list_repeat1] = STATE(90),
    [anon_sym_COMMA] = ACTIONS(529),
    [anon_sym_RBRACE] = ACTIONS(527),
    [sym_comment] = ACTIONS(43),
  },
  [147] = {
    [aux_sym_keyword_list_repeat1] = STATE(155),
    [anon_sym_COMMA] = ACTIONS(332),
    [anon_sym_end] = ACTIONS(415),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(415),
    [anon_sym_defstruct] = ACTIONS(415),
    [anon_sym_def] = ACTIONS(531),
    [anon_sym_defp] = ACTIONS(415),
    [sym_comment] = ACTIONS(43),
  },
  [148] = {
    [sym__value] = STATE(156),
    [sym_true] = STATE(156),
    [sym_false] = STATE(156),
    [sym_atom] = STATE(156),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(156),
    [sym_binary] = STATE(156),
    [sym_charlist] = STATE(156),
    [sym_string] = STATE(156),
    [sym_tuple] = STATE(156),
    [sym__list_or_keyword_list] = STATE(156),
    [sym_list] = STATE(156),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(156),
    [sym__map] = STATE(156),
    [sym_map] = STATE(156),
    [sym_map_update] = STATE(156),
    [sym_struct] = STATE(156),
    [sym_defmodule] = STATE(156),
    [sym_alias] = ACTIONS(533),
    [sym_integer] = ACTIONS(535),
    [sym_float] = ACTIONS(533),
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
    [anon_sym_LT_LT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(41),
    [sym_comment] = ACTIONS(43),
  },
  [149] = {
    [anon_sym_do] = ACTIONS(537),
    [sym_comment] = ACTIONS(43),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(539),
    [sym_alias] = ACTIONS(539),
    [sym_integer] = ACTIONS(541),
    [sym_float] = ACTIONS(539),
    [anon_sym_true] = ACTIONS(539),
    [anon_sym_COLONtrue] = ACTIONS(541),
    [anon_sym_false] = ACTIONS(539),
    [anon_sym_COLONfalse] = ACTIONS(541),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(541),
    [anon_sym_COLON_BANG] = ACTIONS(541),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(541),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(539),
    [anon_sym_COLON_AMP] = ACTIONS(541),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(541),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(539),
    [anon_sym_COLON_STAR] = ACTIONS(539),
    [anon_sym_COLON_PLUS] = ACTIONS(541),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(539),
    [anon_sym_COLON_DASH] = ACTIONS(541),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(539),
    [anon_sym_COLON_DOT] = ACTIONS(541),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(539),
    [anon_sym_COLON_SLASH] = ACTIONS(539),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(539),
    [anon_sym_COLON_LT] = ACTIONS(541),
    [anon_sym_COLON_LT_DASH] = ACTIONS(539),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(539),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(539),
    [anon_sym_COLON_LT_EQ] = ACTIONS(539),
    [anon_sym_COLON_LT_GT] = ACTIONS(539),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(539),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(541),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(539),
    [anon_sym_COLON_EQ] = ACTIONS(541),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(541),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(539),
    [anon_sym_COLON_EQ_GT] = ACTIONS(539),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(539),
    [anon_sym_COLON_GT] = ACTIONS(541),
    [anon_sym_COLON_GT_EQ] = ACTIONS(539),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(539),
    [anon_sym_COLON_AT] = ACTIONS(539),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(539),
    [anon_sym_COLON_CARET] = ACTIONS(539),
    [anon_sym_COLON_PIPE] = ACTIONS(541),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(539),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(541),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(539),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(541),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(539),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(539),
    [anon_sym_nil] = ACTIONS(539),
    [anon_sym_COLONnil] = ACTIONS(541),
    [anon_sym_LT_LT] = ACTIONS(539),
    [anon_sym_COMMA] = ACTIONS(539),
    [anon_sym_SQUOTE] = ACTIONS(539),
    [anon_sym_DQUOTE] = ACTIONS(539),
    [anon_sym_LBRACE] = ACTIONS(539),
    [anon_sym_RBRACE] = ACTIONS(539),
    [anon_sym_LBRACK] = ACTIONS(539),
    [anon_sym_RBRACK] = ACTIONS(539),
    [anon_sym_PIPE] = ACTIONS(539),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(539),
    [anon_sym_EQ_GT] = ACTIONS(539),
    [anon_sym_PERCENT] = ACTIONS(541),
    [anon_sym_defmodule] = ACTIONS(539),
    [anon_sym_end] = ACTIONS(539),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(539),
    [anon_sym_defstruct] = ACTIONS(539),
    [anon_sym_def] = ACTIONS(541),
    [anon_sym_defp] = ACTIONS(539),
    [sym_comment] = ACTIONS(43),
  },
  [151] = {
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
    [anon_sym_LT_LT] = ACTIONS(543),
    [anon_sym_COMMA] = ACTIONS(543),
    [anon_sym_SQUOTE] = ACTIONS(543),
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
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(547),
    [sym_alias] = ACTIONS(547),
    [sym_integer] = ACTIONS(549),
    [sym_float] = ACTIONS(547),
    [anon_sym_true] = ACTIONS(547),
    [anon_sym_COLONtrue] = ACTIONS(549),
    [anon_sym_false] = ACTIONS(547),
    [anon_sym_COLONfalse] = ACTIONS(549),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(549),
    [anon_sym_COLON_BANG] = ACTIONS(549),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(549),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(547),
    [anon_sym_COLON_AMP] = ACTIONS(549),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(549),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(547),
    [anon_sym_COLON_STAR] = ACTIONS(547),
    [anon_sym_COLON_PLUS] = ACTIONS(549),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(547),
    [anon_sym_COLON_DASH] = ACTIONS(549),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(547),
    [anon_sym_COLON_DOT] = ACTIONS(549),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(547),
    [anon_sym_COLON_SLASH] = ACTIONS(547),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(547),
    [anon_sym_COLON_LT] = ACTIONS(549),
    [anon_sym_COLON_LT_DASH] = ACTIONS(547),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(547),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(547),
    [anon_sym_COLON_LT_EQ] = ACTIONS(547),
    [anon_sym_COLON_LT_GT] = ACTIONS(547),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(547),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(549),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(547),
    [anon_sym_COLON_EQ] = ACTIONS(549),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(549),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(547),
    [anon_sym_COLON_EQ_GT] = ACTIONS(547),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(547),
    [anon_sym_COLON_GT] = ACTIONS(549),
    [anon_sym_COLON_GT_EQ] = ACTIONS(547),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(547),
    [anon_sym_COLON_AT] = ACTIONS(547),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(547),
    [anon_sym_COLON_CARET] = ACTIONS(547),
    [anon_sym_COLON_PIPE] = ACTIONS(549),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(547),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(549),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(547),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(549),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(547),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(547),
    [anon_sym_nil] = ACTIONS(547),
    [anon_sym_COLONnil] = ACTIONS(549),
    [anon_sym_LT_LT] = ACTIONS(547),
    [anon_sym_COMMA] = ACTIONS(547),
    [anon_sym_SQUOTE] = ACTIONS(547),
    [anon_sym_DQUOTE] = ACTIONS(547),
    [anon_sym_LBRACE] = ACTIONS(547),
    [anon_sym_RBRACE] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(547),
    [anon_sym_RBRACK] = ACTIONS(547),
    [anon_sym_PIPE] = ACTIONS(547),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(547),
    [anon_sym_EQ_GT] = ACTIONS(547),
    [anon_sym_PERCENT] = ACTIONS(549),
    [anon_sym_defmodule] = ACTIONS(547),
    [anon_sym_end] = ACTIONS(547),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(547),
    [anon_sym_defstruct] = ACTIONS(547),
    [anon_sym_def] = ACTIONS(549),
    [anon_sym_defp] = ACTIONS(547),
    [sym_comment] = ACTIONS(43),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(551),
    [sym_alias] = ACTIONS(551),
    [sym_integer] = ACTIONS(553),
    [sym_float] = ACTIONS(551),
    [anon_sym_true] = ACTIONS(551),
    [anon_sym_COLONtrue] = ACTIONS(553),
    [anon_sym_false] = ACTIONS(551),
    [anon_sym_COLONfalse] = ACTIONS(553),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(553),
    [anon_sym_COLON_BANG] = ACTIONS(553),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(553),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(551),
    [anon_sym_COLON_AMP] = ACTIONS(553),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(553),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(551),
    [anon_sym_COLON_STAR] = ACTIONS(551),
    [anon_sym_COLON_PLUS] = ACTIONS(553),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(551),
    [anon_sym_COLON_DASH] = ACTIONS(553),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(551),
    [anon_sym_COLON_DOT] = ACTIONS(553),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(551),
    [anon_sym_COLON_SLASH] = ACTIONS(551),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(551),
    [anon_sym_COLON_LT] = ACTIONS(553),
    [anon_sym_COLON_LT_DASH] = ACTIONS(551),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(551),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(551),
    [anon_sym_COLON_LT_EQ] = ACTIONS(551),
    [anon_sym_COLON_LT_GT] = ACTIONS(551),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(551),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(553),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(551),
    [anon_sym_COLON_EQ] = ACTIONS(553),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(553),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(551),
    [anon_sym_COLON_EQ_GT] = ACTIONS(551),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(551),
    [anon_sym_COLON_GT] = ACTIONS(553),
    [anon_sym_COLON_GT_EQ] = ACTIONS(551),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(551),
    [anon_sym_COLON_AT] = ACTIONS(551),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(551),
    [anon_sym_COLON_CARET] = ACTIONS(551),
    [anon_sym_COLON_PIPE] = ACTIONS(553),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(551),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(553),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(551),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(553),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(551),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(551),
    [anon_sym_nil] = ACTIONS(551),
    [anon_sym_COLONnil] = ACTIONS(553),
    [anon_sym_LT_LT] = ACTIONS(551),
    [anon_sym_COMMA] = ACTIONS(551),
    [anon_sym_SQUOTE] = ACTIONS(551),
    [anon_sym_DQUOTE] = ACTIONS(551),
    [anon_sym_LBRACE] = ACTIONS(551),
    [anon_sym_RBRACE] = ACTIONS(551),
    [anon_sym_LBRACK] = ACTIONS(551),
    [anon_sym_RBRACK] = ACTIONS(551),
    [anon_sym_PIPE] = ACTIONS(551),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(551),
    [anon_sym_EQ_GT] = ACTIONS(551),
    [anon_sym_PERCENT] = ACTIONS(553),
    [anon_sym_defmodule] = ACTIONS(551),
    [anon_sym_end] = ACTIONS(551),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(551),
    [anon_sym_defstruct] = ACTIONS(551),
    [anon_sym_def] = ACTIONS(553),
    [anon_sym_defp] = ACTIONS(551),
    [sym_comment] = ACTIONS(43),
  },
  [154] = {
    [sym_keyword] = STATE(81),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(555),
    [sym_comment] = ACTIONS(43),
  },
  [155] = {
    [aux_sym_keyword_list_repeat1] = STATE(155),
    [anon_sym_COMMA] = ACTIONS(361),
    [anon_sym_end] = ACTIONS(355),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(355),
    [anon_sym_defstruct] = ACTIONS(355),
    [anon_sym_def] = ACTIONS(357),
    [anon_sym_defp] = ACTIONS(355),
    [sym_comment] = ACTIONS(43),
  },
  [156] = {
    [anon_sym_end] = ACTIONS(557),
    [sym_comment] = ACTIONS(43),
  },
  [157] = {
    [sym__value] = STATE(160),
    [sym_true] = STATE(160),
    [sym_false] = STATE(160),
    [sym_atom] = STATE(160),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(160),
    [sym_binary] = STATE(160),
    [sym_charlist] = STATE(160),
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
    [anon_sym_LT_LT] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(41),
    [sym_comment] = ACTIONS(43),
  },
  [158] = {
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
    [anon_sym_LT_LT] = ACTIONS(563),
    [anon_sym_COMMA] = ACTIONS(563),
    [anon_sym_SQUOTE] = ACTIONS(563),
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
    [anon_sym_def] = ACTIONS(565),
    [anon_sym_defp] = ACTIONS(563),
    [sym_comment] = ACTIONS(43),
  },
  [159] = {
    [anon_sym_end] = ACTIONS(567),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(567),
    [anon_sym_defstruct] = ACTIONS(567),
    [anon_sym_def] = ACTIONS(569),
    [anon_sym_defp] = ACTIONS(567),
    [sym_comment] = ACTIONS(43),
  },
  [160] = {
    [anon_sym_end] = ACTIONS(571),
    [sym_comment] = ACTIONS(43),
  },
  [161] = {
    [anon_sym_end] = ACTIONS(573),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(573),
    [anon_sym_defstruct] = ACTIONS(573),
    [anon_sym_def] = ACTIONS(575),
    [anon_sym_defp] = ACTIONS(573),
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
  [61] = {.count = 1, .reusable = true}, SHIFT(17),
  [63] = {.count = 1, .reusable = true}, SHIFT(18),
  [65] = {.count = 1, .reusable = false}, SHIFT(20),
  [67] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [69] = {.count = 1, .reusable = false}, SHIFT(21),
  [71] = {.count = 1, .reusable = true}, SHIFT(23),
  [73] = {.count = 1, .reusable = false}, SHIFT(23),
  [75] = {.count = 1, .reusable = true}, SHIFT(22),
  [77] = {.count = 1, .reusable = false}, SHIFT(26),
  [79] = {.count = 1, .reusable = true}, SHIFT(26),
  [81] = {.count = 1, .reusable = true}, SHIFT(24),
  [83] = {.count = 1, .reusable = true}, SHIFT(25),
  [85] = {.count = 1, .reusable = false}, SHIFT(13),
  [87] = {.count = 1, .reusable = false}, SHIFT(30),
  [89] = {.count = 1, .reusable = true}, SHIFT(30),
  [91] = {.count = 1, .reusable = true}, SHIFT(29),
  [93] = {.count = 1, .reusable = true}, SHIFT(34),
  [95] = {.count = 1, .reusable = true}, SHIFT(35),
  [97] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_list, 1),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym_list, 1),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [105] = {.count = 1, .reusable = true}, SHIFT(36),
  [107] = {.count = 1, .reusable = false}, SHIFT(36),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_binary_segment, 1),
  [111] = {.count = 1, .reusable = true}, SHIFT(37),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 2),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 2),
  [117] = {.count = 1, .reusable = true}, SHIFT(38),
  [119] = {.count = 1, .reusable = true}, SHIFT(39),
  [121] = {.count = 1, .reusable = true}, SHIFT(41),
  [123] = {.count = 1, .reusable = true}, SHIFT(42),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 2),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 2),
  [129] = {.count = 1, .reusable = true}, SHIFT(43),
  [131] = {.count = 1, .reusable = true}, SHIFT(44),
  [133] = {.count = 1, .reusable = true}, SHIFT(46),
  [135] = {.count = 1, .reusable = false}, SHIFT(46),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym__empty_list, 2),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym__empty_list, 2),
  [141] = {.count = 1, .reusable = true}, SHIFT(47),
  [143] = {.count = 1, .reusable = true}, SHIFT(48),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_head, 1),
  [147] = {.count = 1, .reusable = true}, SHIFT(50),
  [149] = {.count = 1, .reusable = true}, SHIFT(51),
  [151] = {.count = 1, .reusable = true}, SHIFT(53),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_map, 2),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym_map, 2),
  [157] = {.count = 1, .reusable = true}, SHIFT(54),
  [159] = {.count = 1, .reusable = true}, SHIFT(55),
  [161] = {.count = 1, .reusable = true}, SHIFT(56),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym__map_body, 1),
  [165] = {.count = 1, .reusable = true}, SHIFT(58),
  [167] = {.count = 1, .reusable = true}, SHIFT(59),
  [169] = {.count = 1, .reusable = true}, SHIFT(61),
  [171] = {.count = 1, .reusable = true}, SHIFT(63),
  [173] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [175] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(36),
  [178] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(36),
  [181] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [184] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [187] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [190] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [193] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [196] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [199] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [202] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [205] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [208] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [211] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [214] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [217] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [220] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [223] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [226] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [229] = {.count = 1, .reusable = true}, SHIFT(64),
  [231] = {.count = 1, .reusable = true}, SHIFT(65),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 3),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 3),
  [237] = {.count = 1, .reusable = true}, SHIFT(67),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_charlist, 3),
  [241] = {.count = 1, .reusable = false}, REDUCE(sym_charlist, 3),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [247] = {.count = 1, .reusable = false}, SHIFT(70),
  [249] = {.count = 1, .reusable = true}, SHIFT(70),
  [251] = {.count = 1, .reusable = true}, SHIFT(69),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 3),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 3),
  [257] = {.count = 1, .reusable = true}, SHIFT(73),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_keyword, 2),
  [261] = {.count = 1, .reusable = false}, REDUCE(sym_keyword, 2),
  [263] = {.count = 1, .reusable = true}, SHIFT(75),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 3),
  [267] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 3),
  [269] = {.count = 1, .reusable = true}, SHIFT(78),
  [271] = {.count = 1, .reusable = true}, SHIFT(80),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_keyword_list, 3),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym_keyword_list, 3),
  [277] = {.count = 1, .reusable = true}, SHIFT(82),
  [279] = {.count = 1, .reusable = false}, SHIFT(86),
  [281] = {.count = 1, .reusable = true}, SHIFT(86),
  [283] = {.count = 1, .reusable = true}, SHIFT(88),
  [285] = {.count = 1, .reusable = false}, SHIFT(88),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym__map_body, 2),
  [289] = {.count = 1, .reusable = true}, SHIFT(89),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_map, 3),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_map, 3),
  [295] = {.count = 1, .reusable = true}, SHIFT(92),
  [297] = {.count = 1, .reusable = true}, SHIFT(95),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_struct, 3),
  [301] = {.count = 1, .reusable = false}, REDUCE(sym_struct, 3),
  [303] = {.count = 1, .reusable = true}, SHIFT(98),
  [305] = {.count = 1, .reusable = true}, SHIFT(99),
  [307] = {.count = 1, .reusable = true}, SHIFT(100),
  [309] = {.count = 1, .reusable = false}, SHIFT(101),
  [311] = {.count = 1, .reusable = true}, SHIFT(102),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym_binary_segment, 3),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 4),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 4),
  [319] = {.count = 1, .reusable = true}, REDUCE(aux_sym_binary_repeat1, 2),
  [321] = {.count = 1, .reusable = true}, SHIFT(104),
  [323] = {.count = 2, .reusable = true}, REDUCE(aux_sym_binary_repeat1, 2), SHIFT_REPEAT(105),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 4),
  [328] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 4),
  [330] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [332] = {.count = 1, .reusable = true}, SHIFT(106),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym_implicit_keyword_list, 1),
  [336] = {.count = 1, .reusable = true}, SHIFT(108),
  [338] = {.count = 1, .reusable = true}, SHIFT(109),
  [340] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(111),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 4),
  [345] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 4),
  [347] = {.count = 1, .reusable = true}, SHIFT(113),
  [349] = {.count = 1, .reusable = true}, SHIFT(114),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_keyword_list, 4),
  [353] = {.count = 1, .reusable = false}, REDUCE(sym_keyword_list, 4),
  [355] = {.count = 1, .reusable = true}, REDUCE(aux_sym_keyword_list_repeat1, 2),
  [357] = {.count = 1, .reusable = false}, REDUCE(aux_sym_keyword_list_repeat1, 2),
  [359] = {.count = 1, .reusable = true}, SHIFT(116),
  [361] = {.count = 2, .reusable = true}, REDUCE(aux_sym_keyword_list_repeat1, 2), SHIFT_REPEAT(106),
  [364] = {.count = 1, .reusable = true}, REDUCE(sym_tail, 1),
  [366] = {.count = 1, .reusable = true}, SHIFT(117),
  [368] = {.count = 1, .reusable = true}, SHIFT(118),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym_pair, 3),
  [372] = {.count = 1, .reusable = true}, REDUCE(sym__map_body, 3),
  [374] = {.count = 1, .reusable = true}, REDUCE(aux_sym__map_body_repeat1, 2),
  [376] = {.count = 1, .reusable = true}, SHIFT(119),
  [378] = {.count = 2, .reusable = true}, REDUCE(aux_sym__map_body_repeat1, 2), SHIFT_REPEAT(120),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym__empty_struct_body, 2),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym__empty_struct_body, 2),
  [385] = {.count = 1, .reusable = true}, SHIFT(121),
  [387] = {.count = 1, .reusable = true}, SHIFT(122),
  [389] = {.count = 1, .reusable = true}, SHIFT(124),
  [391] = {.count = 1, .reusable = true}, SHIFT(125),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_defmodule, 4),
  [395] = {.count = 1, .reusable = false}, REDUCE(sym_defmodule, 4),
  [397] = {.count = 1, .reusable = false}, SHIFT(128),
  [399] = {.count = 1, .reusable = true}, SHIFT(128),
  [401] = {.count = 1, .reusable = false}, REDUCE(sym_module_attribute, 1),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym_module_attribute, 1),
  [405] = {.count = 1, .reusable = true}, SHIFT(130),
  [407] = {.count = 1, .reusable = true}, SHIFT(132),
  [409] = {.count = 1, .reusable = true}, SHIFT(135),
  [411] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 5),
  [413] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 5),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_implicit_keyword_list, 2),
  [417] = {.count = 1, .reusable = true}, SHIFT(137),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 5),
  [421] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 5),
  [423] = {.count = 1, .reusable = true}, SHIFT(138),
  [425] = {.count = 1, .reusable = true}, SHIFT(139),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 5),
  [429] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 5),
  [431] = {.count = 1, .reusable = true}, SHIFT(140),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_keyword_list, 5),
  [435] = {.count = 1, .reusable = false}, REDUCE(sym_keyword_list, 5),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym__head_tail_list, 5),
  [439] = {.count = 1, .reusable = false}, REDUCE(sym__head_tail_list, 5),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_map_update, 5),
  [443] = {.count = 1, .reusable = false}, REDUCE(sym_map_update, 5),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym__map_body, 4),
  [447] = {.count = 1, .reusable = true}, SHIFT(141),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym__keyword_struct_body, 3),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym__keyword_struct_body, 3),
  [453] = {.count = 1, .reusable = true}, SHIFT(142),
  [455] = {.count = 1, .reusable = true}, SHIFT(143),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym__struct_body, 3),
  [459] = {.count = 1, .reusable = false}, REDUCE(sym__struct_body, 3),
  [461] = {.count = 1, .reusable = true}, SHIFT(144),
  [463] = {.count = 1, .reusable = true}, SHIFT(145),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_module_attribute, 2),
  [467] = {.count = 1, .reusable = false}, REDUCE(sym_module_attribute, 2),
  [469] = {.count = 1, .reusable = false}, REDUCE(sym_implicit_keyword_list, 1),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_defstruct, 2),
  [473] = {.count = 1, .reusable = false}, REDUCE(sym_defstruct, 2),
  [475] = {.count = 1, .reusable = true}, SHIFT(148),
  [477] = {.count = 1, .reusable = true}, SHIFT(149),
  [479] = {.count = 1, .reusable = true}, REDUCE(sym_def, 2),
  [481] = {.count = 1, .reusable = false}, REDUCE(sym_def, 2),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym_defp, 2),
  [485] = {.count = 1, .reusable = false}, REDUCE(sym_defp, 2),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym_defmodule, 5),
  [489] = {.count = 1, .reusable = false}, REDUCE(sym_defmodule, 5),
  [491] = {.count = 1, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2),
  [493] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2), SHIFT_REPEAT(99),
  [496] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2), SHIFT_REPEAT(100),
  [499] = {.count = 2, .reusable = false}, REDUCE(aux_sym_defmodule_repeat1, 2), SHIFT_REPEAT(101),
  [502] = {.count = 2, .reusable = true}, REDUCE(aux_sym_defmodule_repeat1, 2), SHIFT_REPEAT(102),
  [505] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 6),
  [507] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 6),
  [509] = {.count = 1, .reusable = true}, SHIFT(150),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 6),
  [513] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 6),
  [515] = {.count = 1, .reusable = true}, SHIFT(151),
  [517] = {.count = 1, .reusable = true}, REDUCE(sym__keyword_struct_body, 4),
  [519] = {.count = 1, .reusable = false}, REDUCE(sym__keyword_struct_body, 4),
  [521] = {.count = 1, .reusable = true}, SHIFT(152),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym__struct_body, 4),
  [525] = {.count = 1, .reusable = false}, REDUCE(sym__struct_body, 4),
  [527] = {.count = 1, .reusable = true}, SHIFT(153),
  [529] = {.count = 1, .reusable = true}, SHIFT(154),
  [531] = {.count = 1, .reusable = false}, REDUCE(sym_implicit_keyword_list, 2),
  [533] = {.count = 1, .reusable = true}, SHIFT(156),
  [535] = {.count = 1, .reusable = false}, SHIFT(156),
  [537] = {.count = 1, .reusable = true}, SHIFT(157),
  [539] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 7),
  [541] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 7),
  [543] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 7),
  [545] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 7),
  [547] = {.count = 1, .reusable = true}, REDUCE(sym__keyword_struct_body, 5),
  [549] = {.count = 1, .reusable = false}, REDUCE(sym__keyword_struct_body, 5),
  [551] = {.count = 1, .reusable = true}, REDUCE(sym__struct_body, 5),
  [553] = {.count = 1, .reusable = false}, REDUCE(sym__struct_body, 5),
  [555] = {.count = 1, .reusable = true}, SHIFT(158),
  [557] = {.count = 1, .reusable = true}, SHIFT(159),
  [559] = {.count = 1, .reusable = true}, SHIFT(160),
  [561] = {.count = 1, .reusable = false}, SHIFT(160),
  [563] = {.count = 1, .reusable = true}, REDUCE(sym__struct_body, 6),
  [565] = {.count = 1, .reusable = false}, REDUCE(sym__struct_body, 6),
  [567] = {.count = 1, .reusable = true}, REDUCE(sym__function, 4),
  [569] = {.count = 1, .reusable = false}, REDUCE(sym__function, 4),
  [571] = {.count = 1, .reusable = true}, SHIFT(161),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym__function, 5),
  [575] = {.count = 1, .reusable = false}, REDUCE(sym__function, 5),
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
