#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 109
#define SYMBOL_COUNT 109
#define ALIAS_COUNT 0
#define TOKEN_COUNT 75
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
  anon_sym_PERCENT = 69,
  anon_sym_defmodule = 70,
  anon_sym_do = 71,
  anon_sym_end = 72,
  aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH = 73,
  sym_comment = 74,
  sym_program = 75,
  sym__expression = 76,
  sym__value = 77,
  sym_true = 78,
  sym_false = 79,
  sym_atom = 80,
  sym__operator_atom = 81,
  sym_keyword = 82,
  sym_nil = 83,
  sym_charlist = 84,
  sym_binary = 85,
  sym_binary_segment = 86,
  sym_string = 87,
  sym_tuple = 88,
  sym__list_or_keyword_list = 89,
  sym_list = 90,
  sym__empty_list = 91,
  sym__simple_list = 92,
  sym__head_tail_list = 93,
  sym_head = 94,
  sym_tail = 95,
  sym_keyword_list = 96,
  sym_map = 97,
  sym_struct = 98,
  sym_implicit_keyword_list = 99,
  sym_module = 100,
  sym_module_attribute = 101,
  aux_sym_program_repeat1 = 102,
  aux_sym_charlist_repeat1 = 103,
  aux_sym_binary_repeat1 = 104,
  aux_sym_string_repeat1 = 105,
  aux_sym_tuple_repeat1 = 106,
  aux_sym_keyword_list_repeat1 = 107,
  aux_sym_module_repeat1 = 108,
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
  [sym_struct] = "struct",
  [sym_implicit_keyword_list] = "implicit_keyword_list",
  [sym_module] = "module",
  [sym_module_attribute] = "module_attribute",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_charlist_repeat1] = "charlist_repeat1",
  [aux_sym_binary_repeat1] = "binary_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym_keyword_list_repeat1] = "keyword_list_repeat1",
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
  [sym_struct] = {
    .visible = true,
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
      if (lookahead == '>')
        ADVANCE(95);
      if (lookahead == '@')
        ADVANCE(97);
      if (lookahead == '[')
        ADVANCE(99);
      if (lookahead == '\\')
        SKIP(100);
      if (lookahead == ']')
        ADVANCE(101);
      if (lookahead == 'd')
        ADVANCE(102);
      if (lookahead == 'e')
        ADVANCE(112);
      if (lookahead == 'f')
        ADVANCE(115);
      if (lookahead == 'n')
        ADVANCE(120);
      if (lookahead == 't')
        ADVANCE(123);
      if (lookahead == '{')
        ADVANCE(127);
      if (lookahead == '|')
        ADVANCE(128);
      if (lookahead == '}')
        ADVANCE(129);
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
        ADVANCE(130);
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
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 100:
      if (lookahead == '\n')
        SKIP(0);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 102:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'e')
        ADVANCE(103);
      if (lookahead == 'o')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 103:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'f')
        ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 104:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'm')
        ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 105:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'o')
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
      if (lookahead == 'd')
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
      if (lookahead == 'u')
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
      if (lookahead == 'l')
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
      if (lookahead == 'e')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_defmodule);
      if (lookahead == ':')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == ':')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 112:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'n')
        ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 113:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'd')
        ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ':')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 115:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'a')
        ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 116:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'l')
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
      if (lookahead == 's')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 118:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'e')
        ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_false);
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
      if (lookahead == 'i')
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
      if (lookahead == 'l')
        ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_nil);
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
      if (lookahead == 'r')
        ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 124:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'u')
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
      if (lookahead == 'e')
        ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ':')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead == '.')
        ADVANCE(131);
      if (lookahead == ':')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 131:
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead == '.')
        ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(132);
      END_STATE();
    case 133:
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
        ADVANCE(134);
      if (lookahead == ':')
        ADVANCE(143);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '[')
        ADVANCE(99);
      if (lookahead == '\\')
        SKIP(145);
      if (lookahead == 'd')
        ADVANCE(146);
      if (lookahead == 'f')
        ADVANCE(155);
      if (lookahead == 'n')
        ADVANCE(160);
      if (lookahead == 't')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(133);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '_')
        ADVANCE(135);
      if (lookahead == 'b')
        ADVANCE(137);
      if (lookahead == 'o')
        ADVANCE(139);
      if (lookahead == 'x')
        ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(136);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '_')
        ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(136);
      END_STATE();
    case 137:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(137);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(138);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(140);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(142);
      END_STATE();
    case 143:
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
        ADVANCE(144);
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
    case 144:
      if (lookahead == ':')
        ADVANCE(45);
      END_STATE();
    case 145:
      if (lookahead == '\n')
        SKIP(133);
      END_STATE();
    case 146:
      if (lookahead == 'e')
        ADVANCE(147);
      END_STATE();
    case 147:
      if (lookahead == 'f')
        ADVANCE(148);
      END_STATE();
    case 148:
      if (lookahead == 'm')
        ADVANCE(149);
      END_STATE();
    case 149:
      if (lookahead == 'o')
        ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'd')
        ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == 'u')
        ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 'l')
        ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == 'e')
        ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_defmodule);
      END_STATE();
    case 155:
      if (lookahead == 'a')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 'l')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 's')
        ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == 'e')
        ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 160:
      if (lookahead == 'i')
        ADVANCE(161);
      END_STATE();
    case 161:
      if (lookahead == 'l')
        ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 163:
      if (lookahead == 'r')
        ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'u')
        ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == 'e')
        ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 167:
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
        ADVANCE(134);
      if (lookahead == ':')
        ADVANCE(143);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '@')
        ADVANCE(97);
      if (lookahead == '[')
        ADVANCE(99);
      if (lookahead == '\\')
        SKIP(168);
      if (lookahead == ']')
        ADVANCE(101);
      if (lookahead == 'd')
        ADVANCE(146);
      if (lookahead == 'e')
        ADVANCE(169);
      if (lookahead == 'f')
        ADVANCE(155);
      if (lookahead == 'n')
        ADVANCE(160);
      if (lookahead == 't')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(127);
      if (lookahead == '|')
        ADVANCE(128);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(167);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(132);
      END_STATE();
    case 168:
      if (lookahead == '\n')
        SKIP(167);
      END_STATE();
    case 169:
      if (lookahead == 'n')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 'd')
        ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 172:
      if (lookahead == '#')
        ADVANCE(173);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '\\')
        ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(175);
      if (lookahead != 0)
        ADVANCE(175);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead == '\'')
        ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      END_STATE();
    case 176:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(177);
      if (lookahead == '>')
        ADVANCE(95);
      if (lookahead == '\\')
        SKIP(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(176);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(179);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(178);
      if (lookahead == 'b')
        ADVANCE(137);
      if (lookahead == 'o')
        ADVANCE(139);
      if (lookahead == 'x')
        ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(179);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(179);
      END_STATE();
    case 180:
      if (lookahead == '\n')
        SKIP(176);
      END_STATE();
    case 181:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(182);
      if (lookahead == '\\')
        ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(184);
      if (lookahead != 0)
        ADVANCE(184);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
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
        ADVANCE(134);
      if (lookahead == ':')
        ADVANCE(143);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '[')
        ADVANCE(99);
      if (lookahead == '\\')
        SKIP(186);
      if (lookahead == 'd')
        ADVANCE(146);
      if (lookahead == 'f')
        ADVANCE(155);
      if (lookahead == 'n')
        ADVANCE(160);
      if (lookahead == 't')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(127);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(185);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(132);
      END_STATE();
    case 186:
      if (lookahead == '\n')
        SKIP(185);
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
        ADVANCE(8);
      if (lookahead == ':')
        ADVANCE(143);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '[')
        ADVANCE(99);
      if (lookahead == '\\')
        SKIP(188);
      if (lookahead == ']')
        ADVANCE(101);
      if (lookahead == 'd')
        ADVANCE(189);
      if (lookahead == 'f')
        ADVANCE(115);
      if (lookahead == 'n')
        ADVANCE(120);
      if (lookahead == 't')
        ADVANCE(123);
      if (lookahead == '{')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(187);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(130);
      END_STATE();
    case 188:
      if (lookahead == '\n')
        SKIP(187);
      END_STATE();
    case 189:
      if (lookahead == ':')
        ADVANCE(14);
      if (lookahead == 'e')
        ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 190:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(190);
      END_STATE();
    case 191:
      if (lookahead == '\n')
        SKIP(190);
      END_STATE();
    case 192:
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
        ADVANCE(134);
      if (lookahead == ':')
        ADVANCE(25);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '>')
        ADVANCE(95);
      if (lookahead == '@')
        ADVANCE(97);
      if (lookahead == '[')
        ADVANCE(99);
      if (lookahead == '\\')
        SKIP(193);
      if (lookahead == ']')
        ADVANCE(101);
      if (lookahead == 'd')
        ADVANCE(146);
      if (lookahead == 'e')
        ADVANCE(169);
      if (lookahead == 'f')
        ADVANCE(155);
      if (lookahead == 'n')
        ADVANCE(160);
      if (lookahead == 't')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(127);
      if (lookahead == '|')
        ADVANCE(128);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(192);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(132);
      END_STATE();
    case 193:
      if (lookahead == '\n')
        SKIP(192);
      END_STATE();
    case 194:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(195);
      if (lookahead == '>')
        ADVANCE(95);
      if (lookahead == '\\')
        SKIP(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(194);
      END_STATE();
    case 195:
      if (lookahead == ':')
        ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 197:
      if (lookahead == '\n')
        SKIP(194);
      END_STATE();
    case 198:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '\\')
        SKIP(199);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(198);
      END_STATE();
    case 199:
      if (lookahead == '\n')
        SKIP(198);
      END_STATE();
    case 200:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '\\')
        SKIP(201);
      if (lookahead == ']')
        ADVANCE(101);
      if (lookahead == '|')
        ADVANCE(128);
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
      if (lookahead == '\\')
        SKIP(203);
      if (lookahead == 'd')
        ADVANCE(204);
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
      if (lookahead == 'o')
        ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_binary_options);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(206);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(208);
      END_STATE();
    case 207:
      if (lookahead == '\n')
        SKIP(206);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_binary_options);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(208);
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
        ADVANCE(143);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '[')
        ADVANCE(99);
      if (lookahead == '\\')
        SKIP(210);
      if (lookahead == 'd')
        ADVANCE(189);
      if (lookahead == 'f')
        ADVANCE(115);
      if (lookahead == 'n')
        ADVANCE(120);
      if (lookahead == 't')
        ADVANCE(123);
      if (lookahead == '{')
        ADVANCE(127);
      if (lookahead == '}')
        ADVANCE(129);
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
        ADVANCE(130);
      END_STATE();
    case 210:
      if (lookahead == '\n')
        SKIP(209);
      END_STATE();
    case 211:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '@')
        ADVANCE(97);
      if (lookahead == '\\')
        SKIP(212);
      if (lookahead == ']')
        ADVANCE(101);
      if (lookahead == 'e')
        ADVANCE(169);
      if (lookahead == '}')
        ADVANCE(129);
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
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(7);
      if (lookahead == '@')
        ADVANCE(97);
      if (lookahead == '\\')
        SKIP(214);
      if (lookahead == 'e')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(213);
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
      if (lookahead == '\\')
        SKIP(216);
      if (lookahead == ']')
        ADVANCE(101);
      if (lookahead == '}')
        ADVANCE(129);
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
        ADVANCE(143);
      if (lookahead == '<')
        ADVANCE(93);
      if (lookahead == '@')
        ADVANCE(97);
      if (lookahead == '[')
        ADVANCE(99);
      if (lookahead == '\\')
        SKIP(218);
      if (lookahead == 'd')
        ADVANCE(189);
      if (lookahead == 'e')
        ADVANCE(112);
      if (lookahead == 'f')
        ADVANCE(115);
      if (lookahead == 'n')
        ADVANCE(120);
      if (lookahead == 't')
        ADVANCE(123);
      if (lookahead == '{')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(217);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(17);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(130);
      END_STATE();
    case 218:
      if (lookahead == '\n')
        SKIP(217);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 133},
  [2] = {.lex_state = 167},
  [3] = {.lex_state = 167},
  [4] = {.lex_state = 167},
  [5] = {.lex_state = 167},
  [6] = {.lex_state = 172},
  [7] = {.lex_state = 176},
  [8] = {.lex_state = 181},
  [9] = {.lex_state = 185},
  [10] = {.lex_state = 187},
  [11] = {.lex_state = 185},
  [12] = {.lex_state = 133},
  [13] = {.lex_state = 133},
  [14] = {.lex_state = 190},
  [15] = {.lex_state = 167},
  [16] = {.lex_state = 133},
  [17] = {.lex_state = 192},
  [18] = {.lex_state = 172},
  [19] = {.lex_state = 194},
  [20] = {.lex_state = 167},
  [21] = {.lex_state = 194},
  [22] = {.lex_state = 192},
  [23] = {.lex_state = 181},
  [24] = {.lex_state = 167},
  [25] = {.lex_state = 198},
  [26] = {.lex_state = 133},
  [27] = {.lex_state = 167},
  [28] = {.lex_state = 200},
  [29] = {.lex_state = 200},
  [30] = {.lex_state = 200},
  [31] = {.lex_state = 167},
  [32] = {.lex_state = 133},
  [33] = {.lex_state = 202},
  [34] = {.lex_state = 133},
  [35] = {.lex_state = 192},
  [36] = {.lex_state = 172},
  [37] = {.lex_state = 206},
  [38] = {.lex_state = 176},
  [39] = {.lex_state = 167},
  [40] = {.lex_state = 194},
  [41] = {.lex_state = 192},
  [42] = {.lex_state = 181},
  [43] = {.lex_state = 209},
  [44] = {.lex_state = 167},
  [45] = {.lex_state = 198},
  [46] = {.lex_state = 211},
  [47] = {.lex_state = 187},
  [48] = {.lex_state = 167},
  [49] = {.lex_state = 200},
  [50] = {.lex_state = 187},
  [51] = {.lex_state = 167},
  [52] = {.lex_state = 200},
  [53] = {.lex_state = 133},
  [54] = {.lex_state = 185},
  [55] = {.lex_state = 213},
  [56] = {.lex_state = 194},
  [57] = {.lex_state = 167},
  [58] = {.lex_state = 194},
  [59] = {.lex_state = 176},
  [60] = {.lex_state = 194},
  [61] = {.lex_state = 167},
  [62] = {.lex_state = 215},
  [63] = {.lex_state = 198},
  [64] = {.lex_state = 198},
  [65] = {.lex_state = 209},
  [66] = {.lex_state = 198},
  [67] = {.lex_state = 167},
  [68] = {.lex_state = 200},
  [69] = {.lex_state = 200},
  [70] = {.lex_state = 187},
  [71] = {.lex_state = 200},
  [72] = {.lex_state = 167},
  [73] = {.lex_state = 211},
  [74] = {.lex_state = 187},
  [75] = {.lex_state = 200},
  [76] = {.lex_state = 187},
  [77] = {.lex_state = 187},
  [78] = {.lex_state = 167},
  [79] = {.lex_state = 167},
  [80] = {.lex_state = 217},
  [81] = {.lex_state = 213},
  [82] = {.lex_state = 167},
  [83] = {.lex_state = 133},
  [84] = {.lex_state = 187},
  [85] = {.lex_state = 198},
  [86] = {.lex_state = 185},
  [87] = {.lex_state = 167},
  [88] = {.lex_state = 198},
  [89] = {.lex_state = 133},
  [90] = {.lex_state = 200},
  [91] = {.lex_state = 187},
  [92] = {.lex_state = 167},
  [93] = {.lex_state = 200},
  [94] = {.lex_state = 167},
  [95] = {.lex_state = 167},
  [96] = {.lex_state = 213},
  [97] = {.lex_state = 213},
  [98] = {.lex_state = 167},
  [99] = {.lex_state = 213},
  [100] = {.lex_state = 198},
  [101] = {.lex_state = 167},
  [102] = {.lex_state = 185},
  [103] = {.lex_state = 167},
  [104] = {.lex_state = 187},
  [105] = {.lex_state = 213},
  [106] = {.lex_state = 167},
  [107] = {.lex_state = 167},
  [108] = {.lex_state = 213},
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
    [anon_sym_PERCENT] = ACTIONS(3),
    [anon_sym_defmodule] = ACTIONS(3),
    [anon_sym_do] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(3),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(1),
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
    [sym_map] = STATE(16),
    [sym_struct] = STATE(16),
    [sym_module] = STATE(16),
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
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_defmodule] = ACTIONS(57),
    [anon_sym_end] = ACTIONS(57),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(57),
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
    [sym_map] = STATE(25),
    [sym_struct] = STATE(25),
    [sym_module] = STATE(25),
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
    [sym_map] = STATE(28),
    [sym_struct] = STATE(28),
    [sym_module] = STATE(28),
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
    [anon_sym_RBRACE] = ACTIONS(91),
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
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_LT_LT] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_RBRACK] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(99),
    [anon_sym_PERCENT] = ACTIONS(101),
    [anon_sym_defmodule] = ACTIONS(99),
    [anon_sym_end] = ACTIONS(99),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(99),
    [sym_comment] = ACTIONS(43),
  },
  [16] = {
    [sym__expression] = STATE(34),
    [sym__value] = STATE(34),
    [sym_true] = STATE(34),
    [sym_false] = STATE(34),
    [sym_atom] = STATE(34),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(34),
    [sym_charlist] = STATE(34),
    [sym_binary] = STATE(34),
    [sym_string] = STATE(34),
    [sym_tuple] = STATE(34),
    [sym__list_or_keyword_list] = STATE(34),
    [sym_list] = STATE(34),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(34),
    [sym_map] = STATE(34),
    [sym_struct] = STATE(34),
    [sym_module] = STATE(34),
    [aux_sym_program_repeat1] = STATE(34),
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
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym_alias] = ACTIONS(109),
    [sym_integer] = ACTIONS(111),
    [sym_float] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_COLONtrue] = ACTIONS(111),
    [anon_sym_false] = ACTIONS(109),
    [anon_sym_COLONfalse] = ACTIONS(111),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(111),
    [anon_sym_COLON_BANG] = ACTIONS(111),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(111),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(109),
    [anon_sym_COLON_AMP] = ACTIONS(111),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(111),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(109),
    [anon_sym_COLON_STAR] = ACTIONS(109),
    [anon_sym_COLON_PLUS] = ACTIONS(111),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(109),
    [anon_sym_COLON_DASH] = ACTIONS(111),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(109),
    [anon_sym_COLON_DOT] = ACTIONS(111),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(109),
    [anon_sym_COLON_SLASH] = ACTIONS(109),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(109),
    [anon_sym_COLON_LT] = ACTIONS(111),
    [anon_sym_COLON_LT_DASH] = ACTIONS(109),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(109),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(109),
    [anon_sym_COLON_LT_EQ] = ACTIONS(109),
    [anon_sym_COLON_LT_GT] = ACTIONS(109),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(109),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(111),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(109),
    [anon_sym_COLON_EQ] = ACTIONS(111),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(111),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(109),
    [anon_sym_COLON_EQ_GT] = ACTIONS(109),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(109),
    [anon_sym_COLON_GT] = ACTIONS(111),
    [anon_sym_COLON_GT_EQ] = ACTIONS(109),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(109),
    [anon_sym_COLON_AT] = ACTIONS(109),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(109),
    [anon_sym_COLON_CARET] = ACTIONS(109),
    [anon_sym_COLON_PIPE] = ACTIONS(111),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(109),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(111),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(109),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(111),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(109),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(109),
    [anon_sym_nil] = ACTIONS(109),
    [anon_sym_COLONnil] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(109),
    [anon_sym_LT_LT] = ACTIONS(109),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_GT_GT] = ACTIONS(109),
    [anon_sym_COLON_COLON] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_RBRACK] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(111),
    [anon_sym_defmodule] = ACTIONS(109),
    [anon_sym_end] = ACTIONS(109),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(109),
    [sym_comment] = ACTIONS(43),
  },
  [18] = {
    [aux_sym_charlist_repeat1] = STATE(36),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(115),
    [sym_comment] = ACTIONS(65),
  },
  [19] = {
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_GT_GT] = ACTIONS(117),
    [anon_sym_COLON_COLON] = ACTIONS(119),
    [sym_comment] = ACTIONS(43),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [sym_alias] = ACTIONS(121),
    [sym_integer] = ACTIONS(123),
    [sym_float] = ACTIONS(121),
    [anon_sym_true] = ACTIONS(121),
    [anon_sym_COLONtrue] = ACTIONS(123),
    [anon_sym_false] = ACTIONS(121),
    [anon_sym_COLONfalse] = ACTIONS(123),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(123),
    [anon_sym_COLON_BANG] = ACTIONS(123),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(123),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(121),
    [anon_sym_COLON_AMP] = ACTIONS(123),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(123),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(121),
    [anon_sym_COLON_STAR] = ACTIONS(121),
    [anon_sym_COLON_PLUS] = ACTIONS(123),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(121),
    [anon_sym_COLON_DASH] = ACTIONS(123),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(121),
    [anon_sym_COLON_DOT] = ACTIONS(123),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(121),
    [anon_sym_COLON_SLASH] = ACTIONS(121),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(121),
    [anon_sym_COLON_LT] = ACTIONS(123),
    [anon_sym_COLON_LT_DASH] = ACTIONS(121),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(121),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(121),
    [anon_sym_COLON_LT_EQ] = ACTIONS(121),
    [anon_sym_COLON_LT_GT] = ACTIONS(121),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(121),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(123),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(121),
    [anon_sym_COLON_EQ] = ACTIONS(123),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(123),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(121),
    [anon_sym_COLON_EQ_GT] = ACTIONS(121),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(121),
    [anon_sym_COLON_GT] = ACTIONS(123),
    [anon_sym_COLON_GT_EQ] = ACTIONS(121),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(121),
    [anon_sym_COLON_AT] = ACTIONS(121),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(121),
    [anon_sym_COLON_CARET] = ACTIONS(121),
    [anon_sym_COLON_PIPE] = ACTIONS(123),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(121),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(123),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(121),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(123),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(121),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(121),
    [anon_sym_nil] = ACTIONS(121),
    [anon_sym_COLONnil] = ACTIONS(123),
    [anon_sym_SQUOTE] = ACTIONS(121),
    [anon_sym_LT_LT] = ACTIONS(121),
    [anon_sym_COMMA] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(121),
    [anon_sym_PERCENT] = ACTIONS(123),
    [anon_sym_defmodule] = ACTIONS(121),
    [anon_sym_end] = ACTIONS(121),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(121),
    [sym_comment] = ACTIONS(43),
  },
  [21] = {
    [aux_sym_binary_repeat1] = STATE(40),
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_GT_GT] = ACTIONS(127),
    [sym_comment] = ACTIONS(43),
  },
  [22] = {
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
    [anon_sym_GT_GT] = ACTIONS(129),
    [anon_sym_COLON_COLON] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_RBRACK] = ACTIONS(129),
    [anon_sym_PIPE] = ACTIONS(129),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(129),
    [anon_sym_PERCENT] = ACTIONS(131),
    [anon_sym_defmodule] = ACTIONS(129),
    [anon_sym_end] = ACTIONS(129),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(129),
    [sym_comment] = ACTIONS(43),
  },
  [23] = {
    [aux_sym_string_repeat1] = STATE(42),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(135),
    [sym_comment] = ACTIONS(65),
  },
  [24] = {
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
    [anon_sym_DQUOTE] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(137),
    [anon_sym_PIPE] = ACTIONS(137),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(137),
    [anon_sym_PERCENT] = ACTIONS(139),
    [anon_sym_defmodule] = ACTIONS(137),
    [anon_sym_end] = ACTIONS(137),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(137),
    [sym_comment] = ACTIONS(43),
  },
  [25] = {
    [aux_sym_tuple_repeat1] = STATE(45),
    [anon_sym_COMMA] = ACTIONS(141),
    [anon_sym_RBRACE] = ACTIONS(143),
    [sym_comment] = ACTIONS(43),
  },
  [26] = {
    [sym__value] = STATE(46),
    [sym_true] = STATE(46),
    [sym_false] = STATE(46),
    [sym_atom] = STATE(46),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(46),
    [sym_charlist] = STATE(46),
    [sym_binary] = STATE(46),
    [sym_string] = STATE(46),
    [sym_tuple] = STATE(46),
    [sym__list_or_keyword_list] = STATE(46),
    [sym_list] = STATE(46),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(46),
    [sym_map] = STATE(46),
    [sym_struct] = STATE(46),
    [sym_module] = STATE(46),
    [sym_alias] = ACTIONS(145),
    [sym_integer] = ACTIONS(147),
    [sym_float] = ACTIONS(145),
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
    [ts_builtin_sym_end] = ACTIONS(149),
    [sym_alias] = ACTIONS(149),
    [sym_integer] = ACTIONS(151),
    [sym_float] = ACTIONS(149),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_COLONtrue] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(149),
    [anon_sym_COLONfalse] = ACTIONS(151),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(151),
    [anon_sym_COLON_BANG] = ACTIONS(151),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(151),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(149),
    [anon_sym_COLON_AMP] = ACTIONS(151),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(151),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(149),
    [anon_sym_COLON_STAR] = ACTIONS(149),
    [anon_sym_COLON_PLUS] = ACTIONS(151),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(149),
    [anon_sym_COLON_DASH] = ACTIONS(151),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(149),
    [anon_sym_COLON_DOT] = ACTIONS(151),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(149),
    [anon_sym_COLON_SLASH] = ACTIONS(149),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(149),
    [anon_sym_COLON_LT] = ACTIONS(151),
    [anon_sym_COLON_LT_DASH] = ACTIONS(149),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(149),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(149),
    [anon_sym_COLON_LT_EQ] = ACTIONS(149),
    [anon_sym_COLON_LT_GT] = ACTIONS(149),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(149),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(151),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(149),
    [anon_sym_COLON_EQ] = ACTIONS(151),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(151),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(149),
    [anon_sym_COLON_EQ_GT] = ACTIONS(149),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(149),
    [anon_sym_COLON_GT] = ACTIONS(151),
    [anon_sym_COLON_GT_EQ] = ACTIONS(149),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(149),
    [anon_sym_COLON_AT] = ACTIONS(149),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(149),
    [anon_sym_COLON_CARET] = ACTIONS(149),
    [anon_sym_COLON_PIPE] = ACTIONS(151),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(149),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(151),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(149),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(151),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(149),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(149),
    [anon_sym_nil] = ACTIONS(149),
    [anon_sym_COLONnil] = ACTIONS(151),
    [anon_sym_SQUOTE] = ACTIONS(149),
    [anon_sym_LT_LT] = ACTIONS(149),
    [anon_sym_COMMA] = ACTIONS(149),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_RBRACK] = ACTIONS(149),
    [anon_sym_PIPE] = ACTIONS(149),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(151),
    [anon_sym_defmodule] = ACTIONS(149),
    [anon_sym_end] = ACTIONS(149),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(149),
    [sym_comment] = ACTIONS(43),
  },
  [28] = {
    [aux_sym_tuple_repeat1] = STATE(49),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(155),
    [anon_sym_PIPE] = ACTIONS(157),
    [sym_comment] = ACTIONS(43),
  },
  [29] = {
    [aux_sym_keyword_list_repeat1] = STATE(52),
    [anon_sym_COMMA] = ACTIONS(159),
    [anon_sym_RBRACK] = ACTIONS(161),
    [sym_comment] = ACTIONS(43),
  },
  [30] = {
    [anon_sym_PIPE] = ACTIONS(163),
    [sym_comment] = ACTIONS(43),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_alias] = ACTIONS(165),
    [sym_integer] = ACTIONS(167),
    [sym_float] = ACTIONS(165),
    [anon_sym_true] = ACTIONS(165),
    [anon_sym_COLONtrue] = ACTIONS(167),
    [anon_sym_false] = ACTIONS(165),
    [anon_sym_COLONfalse] = ACTIONS(167),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(167),
    [anon_sym_COLON_BANG] = ACTIONS(167),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(167),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(165),
    [anon_sym_COLON_AMP] = ACTIONS(167),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(167),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(165),
    [anon_sym_COLON_STAR] = ACTIONS(165),
    [anon_sym_COLON_PLUS] = ACTIONS(167),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(165),
    [anon_sym_COLON_DASH] = ACTIONS(167),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(165),
    [anon_sym_COLON_DOT] = ACTIONS(167),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(165),
    [anon_sym_COLON_SLASH] = ACTIONS(165),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(165),
    [anon_sym_COLON_LT] = ACTIONS(167),
    [anon_sym_COLON_LT_DASH] = ACTIONS(165),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(165),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(165),
    [anon_sym_COLON_LT_EQ] = ACTIONS(165),
    [anon_sym_COLON_LT_GT] = ACTIONS(165),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(165),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(167),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(165),
    [anon_sym_COLON_EQ] = ACTIONS(167),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(167),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(165),
    [anon_sym_COLON_EQ_GT] = ACTIONS(165),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(165),
    [anon_sym_COLON_GT] = ACTIONS(167),
    [anon_sym_COLON_GT_EQ] = ACTIONS(165),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(165),
    [anon_sym_COLON_AT] = ACTIONS(165),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(165),
    [anon_sym_COLON_CARET] = ACTIONS(165),
    [anon_sym_COLON_PIPE] = ACTIONS(167),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(165),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(167),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(165),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(167),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(165),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(165),
    [anon_sym_nil] = ACTIONS(165),
    [anon_sym_COLONnil] = ACTIONS(167),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_LT_LT] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_RBRACK] = ACTIONS(165),
    [anon_sym_PIPE] = ACTIONS(165),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(165),
    [anon_sym_PERCENT] = ACTIONS(167),
    [anon_sym_defmodule] = ACTIONS(165),
    [anon_sym_end] = ACTIONS(165),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(165),
    [sym_comment] = ACTIONS(43),
  },
  [32] = {
    [anon_sym_LBRACE] = ACTIONS(169),
    [sym_comment] = ACTIONS(43),
  },
  [33] = {
    [anon_sym_do] = ACTIONS(171),
    [sym_comment] = ACTIONS(43),
  },
  [34] = {
    [sym__expression] = STATE(34),
    [sym__value] = STATE(34),
    [sym_true] = STATE(34),
    [sym_false] = STATE(34),
    [sym_atom] = STATE(34),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(34),
    [sym_charlist] = STATE(34),
    [sym_binary] = STATE(34),
    [sym_string] = STATE(34),
    [sym_tuple] = STATE(34),
    [sym__list_or_keyword_list] = STATE(34),
    [sym_list] = STATE(34),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(34),
    [sym_map] = STATE(34),
    [sym_struct] = STATE(34),
    [sym_module] = STATE(34),
    [aux_sym_program_repeat1] = STATE(34),
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
    [anon_sym_SQUOTE] = ACTIONS(205),
    [anon_sym_LT_LT] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(211),
    [anon_sym_LBRACE] = ACTIONS(214),
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(220),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_defmodule] = ACTIONS(226),
    [sym_comment] = ACTIONS(43),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [sym_alias] = ACTIONS(229),
    [sym_integer] = ACTIONS(231),
    [sym_float] = ACTIONS(229),
    [anon_sym_true] = ACTIONS(229),
    [anon_sym_COLONtrue] = ACTIONS(231),
    [anon_sym_false] = ACTIONS(229),
    [anon_sym_COLONfalse] = ACTIONS(231),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(231),
    [anon_sym_COLON_BANG] = ACTIONS(231),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(231),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(229),
    [anon_sym_COLON_AMP] = ACTIONS(231),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(231),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(229),
    [anon_sym_COLON_STAR] = ACTIONS(229),
    [anon_sym_COLON_PLUS] = ACTIONS(231),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(229),
    [anon_sym_COLON_DASH] = ACTIONS(231),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(229),
    [anon_sym_COLON_DOT] = ACTIONS(231),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(229),
    [anon_sym_COLON_SLASH] = ACTIONS(229),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(229),
    [anon_sym_COLON_LT] = ACTIONS(231),
    [anon_sym_COLON_LT_DASH] = ACTIONS(229),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(229),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(229),
    [anon_sym_COLON_LT_EQ] = ACTIONS(229),
    [anon_sym_COLON_LT_GT] = ACTIONS(229),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(229),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(231),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(229),
    [anon_sym_COLON_EQ] = ACTIONS(231),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(231),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(229),
    [anon_sym_COLON_EQ_GT] = ACTIONS(229),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(229),
    [anon_sym_COLON_GT] = ACTIONS(231),
    [anon_sym_COLON_GT_EQ] = ACTIONS(229),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(229),
    [anon_sym_COLON_AT] = ACTIONS(229),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(229),
    [anon_sym_COLON_CARET] = ACTIONS(229),
    [anon_sym_COLON_PIPE] = ACTIONS(231),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(229),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(231),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(229),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(231),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(229),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(229),
    [anon_sym_nil] = ACTIONS(229),
    [anon_sym_COLONnil] = ACTIONS(231),
    [anon_sym_SQUOTE] = ACTIONS(229),
    [anon_sym_LT_LT] = ACTIONS(229),
    [anon_sym_COMMA] = ACTIONS(229),
    [anon_sym_GT_GT] = ACTIONS(229),
    [anon_sym_COLON_COLON] = ACTIONS(231),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_LBRACE] = ACTIONS(229),
    [anon_sym_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_RBRACK] = ACTIONS(229),
    [anon_sym_PIPE] = ACTIONS(229),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(229),
    [anon_sym_PERCENT] = ACTIONS(231),
    [anon_sym_defmodule] = ACTIONS(229),
    [anon_sym_end] = ACTIONS(229),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(229),
    [sym_comment] = ACTIONS(43),
  },
  [36] = {
    [aux_sym_charlist_repeat1] = STATE(36),
    [anon_sym_SQUOTE] = ACTIONS(233),
    [aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(235),
    [sym_comment] = ACTIONS(65),
  },
  [37] = {
    [sym_binary_options] = ACTIONS(238),
    [sym_comment] = ACTIONS(43),
  },
  [38] = {
    [sym_charlist] = STATE(19),
    [sym_binary_segment] = STATE(58),
    [sym_string] = STATE(19),
    [sym_integer] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_GT_GT] = ACTIONS(240),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(43),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(242),
    [sym_alias] = ACTIONS(242),
    [sym_integer] = ACTIONS(244),
    [sym_float] = ACTIONS(242),
    [anon_sym_true] = ACTIONS(242),
    [anon_sym_COLONtrue] = ACTIONS(244),
    [anon_sym_false] = ACTIONS(242),
    [anon_sym_COLONfalse] = ACTIONS(244),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(244),
    [anon_sym_COLON_BANG] = ACTIONS(244),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(244),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(242),
    [anon_sym_COLON_AMP] = ACTIONS(244),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(244),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(242),
    [anon_sym_COLON_STAR] = ACTIONS(242),
    [anon_sym_COLON_PLUS] = ACTIONS(244),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(242),
    [anon_sym_COLON_DASH] = ACTIONS(244),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(242),
    [anon_sym_COLON_DOT] = ACTIONS(244),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(242),
    [anon_sym_COLON_SLASH] = ACTIONS(242),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(242),
    [anon_sym_COLON_LT] = ACTIONS(244),
    [anon_sym_COLON_LT_DASH] = ACTIONS(242),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(242),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(242),
    [anon_sym_COLON_LT_EQ] = ACTIONS(242),
    [anon_sym_COLON_LT_GT] = ACTIONS(242),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(242),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(244),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(242),
    [anon_sym_COLON_EQ] = ACTIONS(244),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(244),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(242),
    [anon_sym_COLON_EQ_GT] = ACTIONS(242),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(242),
    [anon_sym_COLON_GT] = ACTIONS(244),
    [anon_sym_COLON_GT_EQ] = ACTIONS(242),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(242),
    [anon_sym_COLON_AT] = ACTIONS(242),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(242),
    [anon_sym_COLON_CARET] = ACTIONS(242),
    [anon_sym_COLON_PIPE] = ACTIONS(244),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(242),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(244),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(242),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(244),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(242),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(242),
    [anon_sym_nil] = ACTIONS(242),
    [anon_sym_COLONnil] = ACTIONS(244),
    [anon_sym_SQUOTE] = ACTIONS(242),
    [anon_sym_LT_LT] = ACTIONS(242),
    [anon_sym_COMMA] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(242),
    [anon_sym_LBRACE] = ACTIONS(242),
    [anon_sym_RBRACE] = ACTIONS(242),
    [anon_sym_LBRACK] = ACTIONS(242),
    [anon_sym_RBRACK] = ACTIONS(242),
    [anon_sym_PIPE] = ACTIONS(242),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(242),
    [anon_sym_PERCENT] = ACTIONS(244),
    [anon_sym_defmodule] = ACTIONS(242),
    [anon_sym_end] = ACTIONS(242),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(242),
    [sym_comment] = ACTIONS(43),
  },
  [40] = {
    [aux_sym_binary_repeat1] = STATE(60),
    [anon_sym_COMMA] = ACTIONS(246),
    [anon_sym_GT_GT] = ACTIONS(240),
    [sym_comment] = ACTIONS(43),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(248),
    [sym_alias] = ACTIONS(248),
    [sym_integer] = ACTIONS(250),
    [sym_float] = ACTIONS(248),
    [anon_sym_true] = ACTIONS(248),
    [anon_sym_COLONtrue] = ACTIONS(250),
    [anon_sym_false] = ACTIONS(248),
    [anon_sym_COLONfalse] = ACTIONS(250),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(250),
    [anon_sym_COLON_BANG] = ACTIONS(250),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(250),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(248),
    [anon_sym_COLON_AMP] = ACTIONS(250),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(250),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(248),
    [anon_sym_COLON_STAR] = ACTIONS(248),
    [anon_sym_COLON_PLUS] = ACTIONS(250),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(248),
    [anon_sym_COLON_DASH] = ACTIONS(250),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(248),
    [anon_sym_COLON_DOT] = ACTIONS(250),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(248),
    [anon_sym_COLON_SLASH] = ACTIONS(248),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(248),
    [anon_sym_COLON_LT] = ACTIONS(250),
    [anon_sym_COLON_LT_DASH] = ACTIONS(248),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(248),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(248),
    [anon_sym_COLON_LT_EQ] = ACTIONS(248),
    [anon_sym_COLON_LT_GT] = ACTIONS(248),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(248),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(250),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(248),
    [anon_sym_COLON_EQ] = ACTIONS(250),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(250),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(248),
    [anon_sym_COLON_EQ_GT] = ACTIONS(248),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(248),
    [anon_sym_COLON_GT] = ACTIONS(250),
    [anon_sym_COLON_GT_EQ] = ACTIONS(248),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(248),
    [anon_sym_COLON_AT] = ACTIONS(248),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(248),
    [anon_sym_COLON_CARET] = ACTIONS(248),
    [anon_sym_COLON_PIPE] = ACTIONS(250),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(248),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(250),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(248),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(250),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(248),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(248),
    [anon_sym_nil] = ACTIONS(248),
    [anon_sym_COLONnil] = ACTIONS(250),
    [anon_sym_SQUOTE] = ACTIONS(248),
    [anon_sym_LT_LT] = ACTIONS(248),
    [anon_sym_COMMA] = ACTIONS(248),
    [anon_sym_GT_GT] = ACTIONS(248),
    [anon_sym_COLON_COLON] = ACTIONS(250),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(248),
    [anon_sym_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACK] = ACTIONS(248),
    [anon_sym_RBRACK] = ACTIONS(248),
    [anon_sym_PIPE] = ACTIONS(248),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(248),
    [anon_sym_PERCENT] = ACTIONS(250),
    [anon_sym_defmodule] = ACTIONS(248),
    [anon_sym_end] = ACTIONS(248),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(248),
    [sym_comment] = ACTIONS(43),
  },
  [42] = {
    [aux_sym_string_repeat1] = STATE(42),
    [anon_sym_DQUOTE] = ACTIONS(252),
    [aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(254),
    [sym_comment] = ACTIONS(65),
  },
  [43] = {
    [sym__expression] = STATE(62),
    [sym__value] = STATE(62),
    [sym_true] = STATE(62),
    [sym_false] = STATE(62),
    [sym_atom] = STATE(62),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(63),
    [sym_nil] = STATE(62),
    [sym_charlist] = STATE(62),
    [sym_binary] = STATE(62),
    [sym_string] = STATE(62),
    [sym_tuple] = STATE(62),
    [sym__list_or_keyword_list] = STATE(62),
    [sym_list] = STATE(62),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(62),
    [sym_map] = STATE(62),
    [sym_struct] = STATE(62),
    [sym_implicit_keyword_list] = STATE(64),
    [sym_module] = STATE(62),
    [sym_alias] = ACTIONS(257),
    [sym_integer] = ACTIONS(257),
    [sym_float] = ACTIONS(259),
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
    [anon_sym_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(263),
    [sym_alias] = ACTIONS(263),
    [sym_integer] = ACTIONS(265),
    [sym_float] = ACTIONS(263),
    [anon_sym_true] = ACTIONS(263),
    [anon_sym_COLONtrue] = ACTIONS(265),
    [anon_sym_false] = ACTIONS(263),
    [anon_sym_COLONfalse] = ACTIONS(265),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(265),
    [anon_sym_COLON_BANG] = ACTIONS(265),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(265),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(263),
    [anon_sym_COLON_AMP] = ACTIONS(265),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(265),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(263),
    [anon_sym_COLON_STAR] = ACTIONS(263),
    [anon_sym_COLON_PLUS] = ACTIONS(265),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(263),
    [anon_sym_COLON_DASH] = ACTIONS(265),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(263),
    [anon_sym_COLON_DOT] = ACTIONS(265),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(263),
    [anon_sym_COLON_SLASH] = ACTIONS(263),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(263),
    [anon_sym_COLON_LT] = ACTIONS(265),
    [anon_sym_COLON_LT_DASH] = ACTIONS(263),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(263),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(263),
    [anon_sym_COLON_LT_EQ] = ACTIONS(263),
    [anon_sym_COLON_LT_GT] = ACTIONS(263),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(263),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(265),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(263),
    [anon_sym_COLON_EQ] = ACTIONS(265),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(265),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(263),
    [anon_sym_COLON_EQ_GT] = ACTIONS(263),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(263),
    [anon_sym_COLON_GT] = ACTIONS(265),
    [anon_sym_COLON_GT_EQ] = ACTIONS(263),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(263),
    [anon_sym_COLON_AT] = ACTIONS(263),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(263),
    [anon_sym_COLON_CARET] = ACTIONS(263),
    [anon_sym_COLON_PIPE] = ACTIONS(265),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(263),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(265),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(263),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(265),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(263),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(263),
    [anon_sym_nil] = ACTIONS(263),
    [anon_sym_COLONnil] = ACTIONS(265),
    [anon_sym_SQUOTE] = ACTIONS(263),
    [anon_sym_LT_LT] = ACTIONS(263),
    [anon_sym_COMMA] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(263),
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_RBRACE] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(263),
    [anon_sym_RBRACK] = ACTIONS(263),
    [anon_sym_PIPE] = ACTIONS(263),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(263),
    [anon_sym_PERCENT] = ACTIONS(265),
    [anon_sym_defmodule] = ACTIONS(263),
    [anon_sym_end] = ACTIONS(263),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(263),
    [sym_comment] = ACTIONS(43),
  },
  [45] = {
    [aux_sym_tuple_repeat1] = STATE(66),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_RBRACE] = ACTIONS(261),
    [sym_comment] = ACTIONS(43),
  },
  [46] = {
    [anon_sym_COMMA] = ACTIONS(269),
    [anon_sym_RBRACE] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [anon_sym_end] = ACTIONS(269),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(269),
    [sym_comment] = ACTIONS(43),
  },
  [47] = {
    [sym__expression] = STATE(62),
    [sym__value] = STATE(62),
    [sym_true] = STATE(62),
    [sym_false] = STATE(62),
    [sym_atom] = STATE(62),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(68),
    [sym_nil] = STATE(62),
    [sym_charlist] = STATE(62),
    [sym_binary] = STATE(62),
    [sym_string] = STATE(62),
    [sym_tuple] = STATE(62),
    [sym__list_or_keyword_list] = STATE(62),
    [sym_list] = STATE(62),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(62),
    [sym_map] = STATE(62),
    [sym_struct] = STATE(62),
    [sym_implicit_keyword_list] = STATE(69),
    [sym_module] = STATE(62),
    [sym_alias] = ACTIONS(257),
    [sym_integer] = ACTIONS(257),
    [sym_float] = ACTIONS(259),
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
    [anon_sym_RBRACK] = ACTIONS(271),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [48] = {
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
    [anon_sym_SQUOTE] = ACTIONS(273),
    [anon_sym_LT_LT] = ACTIONS(273),
    [anon_sym_COMMA] = ACTIONS(273),
    [anon_sym_DQUOTE] = ACTIONS(273),
    [anon_sym_LBRACE] = ACTIONS(273),
    [anon_sym_RBRACE] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_RBRACK] = ACTIONS(273),
    [anon_sym_PIPE] = ACTIONS(273),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(273),
    [anon_sym_PERCENT] = ACTIONS(275),
    [anon_sym_defmodule] = ACTIONS(273),
    [anon_sym_end] = ACTIONS(273),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(273),
    [sym_comment] = ACTIONS(43),
  },
  [49] = {
    [aux_sym_tuple_repeat1] = STATE(71),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(271),
    [sym_comment] = ACTIONS(43),
  },
  [50] = {
    [sym_keyword] = STATE(73),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(279),
    [sym_comment] = ACTIONS(43),
  },
  [51] = {
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
    [anon_sym_PERCENT] = ACTIONS(283),
    [anon_sym_defmodule] = ACTIONS(281),
    [anon_sym_end] = ACTIONS(281),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(281),
    [sym_comment] = ACTIONS(43),
  },
  [52] = {
    [aux_sym_keyword_list_repeat1] = STATE(75),
    [anon_sym_COMMA] = ACTIONS(285),
    [anon_sym_RBRACK] = ACTIONS(279),
    [sym_comment] = ACTIONS(43),
  },
  [53] = {
    [sym__list_or_keyword_list] = STATE(76),
    [sym_list] = STATE(76),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_tail] = STATE(77),
    [sym_keyword_list] = STATE(76),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_comment] = ACTIONS(43),
  },
  [54] = {
    [anon_sym_RBRACE] = ACTIONS(287),
    [sym_comment] = ACTIONS(43),
  },
  [55] = {
    [sym_module_attribute] = STATE(81),
    [aux_sym_module_repeat1] = STATE(81),
    [anon_sym_end] = ACTIONS(289),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(291),
    [sym_comment] = ACTIONS(43),
  },
  [56] = {
    [anon_sym_COMMA] = ACTIONS(293),
    [anon_sym_GT_GT] = ACTIONS(293),
    [sym_comment] = ACTIONS(43),
  },
  [57] = {
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
    [anon_sym_PERCENT] = ACTIONS(297),
    [anon_sym_defmodule] = ACTIONS(295),
    [anon_sym_end] = ACTIONS(295),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(295),
    [sym_comment] = ACTIONS(43),
  },
  [58] = {
    [anon_sym_COMMA] = ACTIONS(299),
    [anon_sym_GT_GT] = ACTIONS(299),
    [sym_comment] = ACTIONS(43),
  },
  [59] = {
    [sym_charlist] = STATE(19),
    [sym_binary_segment] = STATE(58),
    [sym_string] = STATE(19),
    [sym_integer] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_GT_GT] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(43),
  },
  [60] = {
    [aux_sym_binary_repeat1] = STATE(60),
    [anon_sym_COMMA] = ACTIONS(303),
    [anon_sym_GT_GT] = ACTIONS(299),
    [sym_comment] = ACTIONS(43),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(306),
    [sym_alias] = ACTIONS(306),
    [sym_integer] = ACTIONS(308),
    [sym_float] = ACTIONS(306),
    [anon_sym_true] = ACTIONS(306),
    [anon_sym_COLONtrue] = ACTIONS(308),
    [anon_sym_false] = ACTIONS(306),
    [anon_sym_COLONfalse] = ACTIONS(308),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(308),
    [anon_sym_COLON_BANG] = ACTIONS(308),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(308),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(306),
    [anon_sym_COLON_AMP] = ACTIONS(308),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(308),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(306),
    [anon_sym_COLON_STAR] = ACTIONS(306),
    [anon_sym_COLON_PLUS] = ACTIONS(308),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(306),
    [anon_sym_COLON_DASH] = ACTIONS(308),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(306),
    [anon_sym_COLON_DOT] = ACTIONS(308),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(306),
    [anon_sym_COLON_SLASH] = ACTIONS(306),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(306),
    [anon_sym_COLON_LT] = ACTIONS(308),
    [anon_sym_COLON_LT_DASH] = ACTIONS(306),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(306),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(306),
    [anon_sym_COLON_LT_EQ] = ACTIONS(306),
    [anon_sym_COLON_LT_GT] = ACTIONS(306),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(306),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(308),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(306),
    [anon_sym_COLON_EQ] = ACTIONS(308),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(308),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(306),
    [anon_sym_COLON_EQ_GT] = ACTIONS(306),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(306),
    [anon_sym_COLON_GT] = ACTIONS(308),
    [anon_sym_COLON_GT_EQ] = ACTIONS(306),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(306),
    [anon_sym_COLON_AT] = ACTIONS(306),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(306),
    [anon_sym_COLON_CARET] = ACTIONS(306),
    [anon_sym_COLON_PIPE] = ACTIONS(308),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(306),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(308),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(306),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(308),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(306),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(306),
    [anon_sym_nil] = ACTIONS(306),
    [anon_sym_COLONnil] = ACTIONS(308),
    [anon_sym_SQUOTE] = ACTIONS(306),
    [anon_sym_LT_LT] = ACTIONS(306),
    [anon_sym_COMMA] = ACTIONS(306),
    [anon_sym_DQUOTE] = ACTIONS(306),
    [anon_sym_LBRACE] = ACTIONS(306),
    [anon_sym_RBRACE] = ACTIONS(306),
    [anon_sym_LBRACK] = ACTIONS(306),
    [anon_sym_RBRACK] = ACTIONS(306),
    [anon_sym_PIPE] = ACTIONS(306),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(308),
    [anon_sym_defmodule] = ACTIONS(306),
    [anon_sym_end] = ACTIONS(306),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(306),
    [sym_comment] = ACTIONS(43),
  },
  [62] = {
    [anon_sym_COMMA] = ACTIONS(310),
    [anon_sym_RBRACE] = ACTIONS(310),
    [anon_sym_RBRACK] = ACTIONS(310),
    [sym_comment] = ACTIONS(43),
  },
  [63] = {
    [aux_sym_keyword_list_repeat1] = STATE(85),
    [anon_sym_COMMA] = ACTIONS(312),
    [anon_sym_RBRACE] = ACTIONS(314),
    [sym_comment] = ACTIONS(43),
  },
  [64] = {
    [anon_sym_COMMA] = ACTIONS(316),
    [anon_sym_RBRACE] = ACTIONS(318),
    [sym_comment] = ACTIONS(43),
  },
  [65] = {
    [sym__expression] = STATE(62),
    [sym__value] = STATE(62),
    [sym_true] = STATE(62),
    [sym_false] = STATE(62),
    [sym_atom] = STATE(62),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(63),
    [sym_nil] = STATE(62),
    [sym_charlist] = STATE(62),
    [sym_binary] = STATE(62),
    [sym_string] = STATE(62),
    [sym_tuple] = STATE(62),
    [sym__list_or_keyword_list] = STATE(62),
    [sym_list] = STATE(62),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(62),
    [sym_map] = STATE(62),
    [sym_struct] = STATE(62),
    [sym_implicit_keyword_list] = STATE(88),
    [sym_module] = STATE(62),
    [sym_alias] = ACTIONS(257),
    [sym_integer] = ACTIONS(257),
    [sym_float] = ACTIONS(259),
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
    [anon_sym_RBRACE] = ACTIONS(318),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [66] = {
    [aux_sym_tuple_repeat1] = STATE(66),
    [anon_sym_COMMA] = ACTIONS(320),
    [anon_sym_RBRACE] = ACTIONS(310),
    [sym_comment] = ACTIONS(43),
  },
  [67] = {
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
    [anon_sym_PERCENT] = ACTIONS(325),
    [anon_sym_defmodule] = ACTIONS(323),
    [anon_sym_end] = ACTIONS(323),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(323),
    [sym_comment] = ACTIONS(43),
  },
  [68] = {
    [aux_sym_keyword_list_repeat1] = STATE(90),
    [anon_sym_COMMA] = ACTIONS(312),
    [anon_sym_RBRACK] = ACTIONS(314),
    [sym_comment] = ACTIONS(43),
  },
  [69] = {
    [anon_sym_COMMA] = ACTIONS(327),
    [anon_sym_RBRACK] = ACTIONS(329),
    [sym_comment] = ACTIONS(43),
  },
  [70] = {
    [sym__expression] = STATE(62),
    [sym__value] = STATE(62),
    [sym_true] = STATE(62),
    [sym_false] = STATE(62),
    [sym_atom] = STATE(62),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(68),
    [sym_nil] = STATE(62),
    [sym_charlist] = STATE(62),
    [sym_binary] = STATE(62),
    [sym_string] = STATE(62),
    [sym_tuple] = STATE(62),
    [sym__list_or_keyword_list] = STATE(62),
    [sym_list] = STATE(62),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(62),
    [sym_map] = STATE(62),
    [sym_struct] = STATE(62),
    [sym_implicit_keyword_list] = STATE(93),
    [sym_module] = STATE(62),
    [sym_alias] = ACTIONS(257),
    [sym_integer] = ACTIONS(257),
    [sym_float] = ACTIONS(259),
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
    [anon_sym_RBRACK] = ACTIONS(329),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(37),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_defmodule] = ACTIONS(89),
    [sym_comment] = ACTIONS(43),
  },
  [71] = {
    [aux_sym_tuple_repeat1] = STATE(71),
    [anon_sym_COMMA] = ACTIONS(320),
    [anon_sym_RBRACK] = ACTIONS(310),
    [sym_comment] = ACTIONS(43),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(331),
    [sym_alias] = ACTIONS(331),
    [sym_integer] = ACTIONS(333),
    [sym_float] = ACTIONS(331),
    [anon_sym_true] = ACTIONS(331),
    [anon_sym_COLONtrue] = ACTIONS(333),
    [anon_sym_false] = ACTIONS(331),
    [anon_sym_COLONfalse] = ACTIONS(333),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(333),
    [anon_sym_COLON_BANG] = ACTIONS(333),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(333),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(331),
    [anon_sym_COLON_AMP] = ACTIONS(333),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(333),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(331),
    [anon_sym_COLON_STAR] = ACTIONS(331),
    [anon_sym_COLON_PLUS] = ACTIONS(333),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(331),
    [anon_sym_COLON_DASH] = ACTIONS(333),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(331),
    [anon_sym_COLON_DOT] = ACTIONS(333),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(331),
    [anon_sym_COLON_SLASH] = ACTIONS(331),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(331),
    [anon_sym_COLON_LT] = ACTIONS(333),
    [anon_sym_COLON_LT_DASH] = ACTIONS(331),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(331),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(331),
    [anon_sym_COLON_LT_EQ] = ACTIONS(331),
    [anon_sym_COLON_LT_GT] = ACTIONS(331),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(331),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(333),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(331),
    [anon_sym_COLON_EQ] = ACTIONS(333),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(333),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(331),
    [anon_sym_COLON_EQ_GT] = ACTIONS(331),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(331),
    [anon_sym_COLON_GT] = ACTIONS(333),
    [anon_sym_COLON_GT_EQ] = ACTIONS(331),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(331),
    [anon_sym_COLON_AT] = ACTIONS(331),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(331),
    [anon_sym_COLON_CARET] = ACTIONS(331),
    [anon_sym_COLON_PIPE] = ACTIONS(333),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(331),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(333),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(331),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(333),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(331),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(331),
    [anon_sym_nil] = ACTIONS(331),
    [anon_sym_COLONnil] = ACTIONS(333),
    [anon_sym_SQUOTE] = ACTIONS(331),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_COMMA] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(331),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_RBRACE] = ACTIONS(331),
    [anon_sym_LBRACK] = ACTIONS(331),
    [anon_sym_RBRACK] = ACTIONS(331),
    [anon_sym_PIPE] = ACTIONS(331),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(333),
    [anon_sym_defmodule] = ACTIONS(331),
    [anon_sym_end] = ACTIONS(331),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(331),
    [sym_comment] = ACTIONS(43),
  },
  [73] = {
    [anon_sym_COMMA] = ACTIONS(335),
    [anon_sym_RBRACE] = ACTIONS(335),
    [anon_sym_RBRACK] = ACTIONS(335),
    [anon_sym_end] = ACTIONS(335),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(335),
    [sym_comment] = ACTIONS(43),
  },
  [74] = {
    [sym_keyword] = STATE(73),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(337),
    [sym_comment] = ACTIONS(43),
  },
  [75] = {
    [aux_sym_keyword_list_repeat1] = STATE(75),
    [anon_sym_COMMA] = ACTIONS(339),
    [anon_sym_RBRACK] = ACTIONS(335),
    [sym_comment] = ACTIONS(43),
  },
  [76] = {
    [anon_sym_RBRACK] = ACTIONS(342),
    [sym_comment] = ACTIONS(43),
  },
  [77] = {
    [anon_sym_RBRACK] = ACTIONS(344),
    [sym_comment] = ACTIONS(43),
  },
  [78] = {
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
    [anon_sym_PERCENT] = ACTIONS(348),
    [anon_sym_defmodule] = ACTIONS(346),
    [anon_sym_end] = ACTIONS(346),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(346),
    [sym_comment] = ACTIONS(43),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(350),
    [sym_alias] = ACTIONS(350),
    [sym_integer] = ACTIONS(352),
    [sym_float] = ACTIONS(350),
    [anon_sym_true] = ACTIONS(350),
    [anon_sym_COLONtrue] = ACTIONS(352),
    [anon_sym_false] = ACTIONS(350),
    [anon_sym_COLONfalse] = ACTIONS(352),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(352),
    [anon_sym_COLON_BANG] = ACTIONS(352),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(352),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(350),
    [anon_sym_COLON_AMP] = ACTIONS(352),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(352),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(350),
    [anon_sym_COLON_STAR] = ACTIONS(350),
    [anon_sym_COLON_PLUS] = ACTIONS(352),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(350),
    [anon_sym_COLON_DASH] = ACTIONS(352),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(350),
    [anon_sym_COLON_DOT] = ACTIONS(352),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(350),
    [anon_sym_COLON_SLASH] = ACTIONS(350),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(350),
    [anon_sym_COLON_LT] = ACTIONS(352),
    [anon_sym_COLON_LT_DASH] = ACTIONS(350),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(350),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(350),
    [anon_sym_COLON_LT_EQ] = ACTIONS(350),
    [anon_sym_COLON_LT_GT] = ACTIONS(350),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(350),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(352),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(350),
    [anon_sym_COLON_EQ] = ACTIONS(352),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(352),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(350),
    [anon_sym_COLON_EQ_GT] = ACTIONS(350),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(350),
    [anon_sym_COLON_GT] = ACTIONS(352),
    [anon_sym_COLON_GT_EQ] = ACTIONS(350),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(350),
    [anon_sym_COLON_AT] = ACTIONS(350),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(350),
    [anon_sym_COLON_CARET] = ACTIONS(350),
    [anon_sym_COLON_PIPE] = ACTIONS(352),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(350),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(352),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(350),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(352),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(350),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(350),
    [anon_sym_nil] = ACTIONS(350),
    [anon_sym_COLONnil] = ACTIONS(352),
    [anon_sym_SQUOTE] = ACTIONS(350),
    [anon_sym_LT_LT] = ACTIONS(350),
    [anon_sym_COMMA] = ACTIONS(350),
    [anon_sym_DQUOTE] = ACTIONS(350),
    [anon_sym_LBRACE] = ACTIONS(350),
    [anon_sym_RBRACE] = ACTIONS(350),
    [anon_sym_LBRACK] = ACTIONS(350),
    [anon_sym_RBRACK] = ACTIONS(350),
    [anon_sym_PIPE] = ACTIONS(350),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(350),
    [anon_sym_PERCENT] = ACTIONS(352),
    [anon_sym_defmodule] = ACTIONS(350),
    [anon_sym_end] = ACTIONS(350),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(350),
    [sym_comment] = ACTIONS(43),
  },
  [80] = {
    [sym__value] = STATE(96),
    [sym_true] = STATE(96),
    [sym_false] = STATE(96),
    [sym_atom] = STATE(96),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(97),
    [sym_nil] = STATE(96),
    [sym_charlist] = STATE(96),
    [sym_binary] = STATE(96),
    [sym_string] = STATE(96),
    [sym_tuple] = STATE(96),
    [sym__list_or_keyword_list] = STATE(96),
    [sym_list] = STATE(96),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(96),
    [sym_map] = STATE(96),
    [sym_struct] = STATE(96),
    [sym_implicit_keyword_list] = STATE(96),
    [sym_module] = STATE(96),
    [sym_alias] = ACTIONS(354),
    [sym_integer] = ACTIONS(354),
    [sym_float] = ACTIONS(356),
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
    [anon_sym_end] = ACTIONS(358),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(360),
    [sym_comment] = ACTIONS(43),
  },
  [81] = {
    [sym_module_attribute] = STATE(99),
    [aux_sym_module_repeat1] = STATE(99),
    [anon_sym_end] = ACTIONS(362),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(291),
    [sym_comment] = ACTIONS(43),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(364),
    [sym_alias] = ACTIONS(364),
    [sym_integer] = ACTIONS(366),
    [sym_float] = ACTIONS(364),
    [anon_sym_true] = ACTIONS(364),
    [anon_sym_COLONtrue] = ACTIONS(366),
    [anon_sym_false] = ACTIONS(364),
    [anon_sym_COLONfalse] = ACTIONS(366),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(366),
    [anon_sym_COLON_BANG] = ACTIONS(366),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(366),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(364),
    [anon_sym_COLON_AMP] = ACTIONS(366),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(366),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(364),
    [anon_sym_COLON_STAR] = ACTIONS(364),
    [anon_sym_COLON_PLUS] = ACTIONS(366),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(364),
    [anon_sym_COLON_DASH] = ACTIONS(366),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(364),
    [anon_sym_COLON_DOT] = ACTIONS(366),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(364),
    [anon_sym_COLON_SLASH] = ACTIONS(364),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(364),
    [anon_sym_COLON_LT] = ACTIONS(366),
    [anon_sym_COLON_LT_DASH] = ACTIONS(364),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(364),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(364),
    [anon_sym_COLON_LT_EQ] = ACTIONS(364),
    [anon_sym_COLON_LT_GT] = ACTIONS(364),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(364),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(366),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(364),
    [anon_sym_COLON_EQ] = ACTIONS(366),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(366),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(364),
    [anon_sym_COLON_EQ_GT] = ACTIONS(364),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(364),
    [anon_sym_COLON_GT] = ACTIONS(366),
    [anon_sym_COLON_GT_EQ] = ACTIONS(364),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(364),
    [anon_sym_COLON_AT] = ACTIONS(364),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(364),
    [anon_sym_COLON_CARET] = ACTIONS(364),
    [anon_sym_COLON_PIPE] = ACTIONS(366),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(364),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(366),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(364),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(366),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(364),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(364),
    [anon_sym_nil] = ACTIONS(364),
    [anon_sym_COLONnil] = ACTIONS(366),
    [anon_sym_SQUOTE] = ACTIONS(364),
    [anon_sym_LT_LT] = ACTIONS(364),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_DQUOTE] = ACTIONS(364),
    [anon_sym_LBRACE] = ACTIONS(364),
    [anon_sym_RBRACE] = ACTIONS(364),
    [anon_sym_LBRACK] = ACTIONS(364),
    [anon_sym_RBRACK] = ACTIONS(364),
    [anon_sym_PIPE] = ACTIONS(364),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(364),
    [anon_sym_PERCENT] = ACTIONS(366),
    [anon_sym_defmodule] = ACTIONS(364),
    [anon_sym_end] = ACTIONS(364),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(364),
    [sym_comment] = ACTIONS(43),
  },
  [83] = {
    [sym_charlist] = STATE(19),
    [sym_binary_segment] = STATE(58),
    [sym_string] = STATE(19),
    [sym_integer] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(43),
  },
  [84] = {
    [sym_keyword] = STATE(73),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(85),
    [sym_comment] = ACTIONS(43),
  },
  [85] = {
    [aux_sym_keyword_list_repeat1] = STATE(100),
    [anon_sym_COMMA] = ACTIONS(312),
    [anon_sym_RBRACE] = ACTIONS(368),
    [sym_comment] = ACTIONS(43),
  },
  [86] = {
    [anon_sym_RBRACE] = ACTIONS(370),
    [sym_comment] = ACTIONS(43),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(372),
    [sym_alias] = ACTIONS(372),
    [sym_integer] = ACTIONS(374),
    [sym_float] = ACTIONS(372),
    [anon_sym_true] = ACTIONS(372),
    [anon_sym_COLONtrue] = ACTIONS(374),
    [anon_sym_false] = ACTIONS(372),
    [anon_sym_COLONfalse] = ACTIONS(374),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(374),
    [anon_sym_COLON_BANG] = ACTIONS(374),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(374),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(372),
    [anon_sym_COLON_AMP] = ACTIONS(374),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(374),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(372),
    [anon_sym_COLON_STAR] = ACTIONS(372),
    [anon_sym_COLON_PLUS] = ACTIONS(374),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(372),
    [anon_sym_COLON_DASH] = ACTIONS(374),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(372),
    [anon_sym_COLON_DOT] = ACTIONS(374),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(372),
    [anon_sym_COLON_SLASH] = ACTIONS(372),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(372),
    [anon_sym_COLON_LT] = ACTIONS(374),
    [anon_sym_COLON_LT_DASH] = ACTIONS(372),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(372),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(372),
    [anon_sym_COLON_LT_EQ] = ACTIONS(372),
    [anon_sym_COLON_LT_GT] = ACTIONS(372),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(372),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(374),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(372),
    [anon_sym_COLON_EQ] = ACTIONS(374),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(374),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(372),
    [anon_sym_COLON_EQ_GT] = ACTIONS(372),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(372),
    [anon_sym_COLON_GT] = ACTIONS(374),
    [anon_sym_COLON_GT_EQ] = ACTIONS(372),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(372),
    [anon_sym_COLON_AT] = ACTIONS(372),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(372),
    [anon_sym_COLON_CARET] = ACTIONS(372),
    [anon_sym_COLON_PIPE] = ACTIONS(374),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(372),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(374),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(372),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(374),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(372),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(372),
    [anon_sym_nil] = ACTIONS(372),
    [anon_sym_COLONnil] = ACTIONS(374),
    [anon_sym_SQUOTE] = ACTIONS(372),
    [anon_sym_LT_LT] = ACTIONS(372),
    [anon_sym_COMMA] = ACTIONS(372),
    [anon_sym_DQUOTE] = ACTIONS(372),
    [anon_sym_LBRACE] = ACTIONS(372),
    [anon_sym_RBRACE] = ACTIONS(372),
    [anon_sym_LBRACK] = ACTIONS(372),
    [anon_sym_RBRACK] = ACTIONS(372),
    [anon_sym_PIPE] = ACTIONS(372),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(372),
    [anon_sym_PERCENT] = ACTIONS(374),
    [anon_sym_defmodule] = ACTIONS(372),
    [anon_sym_end] = ACTIONS(372),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(372),
    [sym_comment] = ACTIONS(43),
  },
  [88] = {
    [anon_sym_COMMA] = ACTIONS(376),
    [anon_sym_RBRACE] = ACTIONS(370),
    [sym_comment] = ACTIONS(43),
  },
  [89] = {
    [sym__expression] = STATE(62),
    [sym__value] = STATE(62),
    [sym_true] = STATE(62),
    [sym_false] = STATE(62),
    [sym_atom] = STATE(62),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(62),
    [sym_charlist] = STATE(62),
    [sym_binary] = STATE(62),
    [sym_string] = STATE(62),
    [sym_tuple] = STATE(62),
    [sym__list_or_keyword_list] = STATE(62),
    [sym_list] = STATE(62),
    [sym__empty_list] = STATE(15),
    [sym__simple_list] = STATE(15),
    [sym__head_tail_list] = STATE(15),
    [sym_keyword_list] = STATE(62),
    [sym_map] = STATE(62),
    [sym_struct] = STATE(62),
    [sym_module] = STATE(62),
    [sym_alias] = ACTIONS(259),
    [sym_integer] = ACTIONS(257),
    [sym_float] = ACTIONS(259),
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
  [90] = {
    [aux_sym_keyword_list_repeat1] = STATE(75),
    [anon_sym_COMMA] = ACTIONS(312),
    [anon_sym_RBRACK] = ACTIONS(368),
    [sym_comment] = ACTIONS(43),
  },
  [91] = {
    [anon_sym_RBRACK] = ACTIONS(378),
    [sym_comment] = ACTIONS(43),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(380),
    [sym_alias] = ACTIONS(380),
    [sym_integer] = ACTIONS(382),
    [sym_float] = ACTIONS(380),
    [anon_sym_true] = ACTIONS(380),
    [anon_sym_COLONtrue] = ACTIONS(382),
    [anon_sym_false] = ACTIONS(380),
    [anon_sym_COLONfalse] = ACTIONS(382),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(382),
    [anon_sym_COLON_BANG] = ACTIONS(382),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(382),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(380),
    [anon_sym_COLON_AMP] = ACTIONS(382),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(382),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(380),
    [anon_sym_COLON_STAR] = ACTIONS(380),
    [anon_sym_COLON_PLUS] = ACTIONS(382),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(380),
    [anon_sym_COLON_DASH] = ACTIONS(382),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(380),
    [anon_sym_COLON_DOT] = ACTIONS(382),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(380),
    [anon_sym_COLON_SLASH] = ACTIONS(380),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(380),
    [anon_sym_COLON_LT] = ACTIONS(382),
    [anon_sym_COLON_LT_DASH] = ACTIONS(380),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(380),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(380),
    [anon_sym_COLON_LT_EQ] = ACTIONS(380),
    [anon_sym_COLON_LT_GT] = ACTIONS(380),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(380),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(382),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(380),
    [anon_sym_COLON_EQ] = ACTIONS(382),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(382),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(380),
    [anon_sym_COLON_EQ_GT] = ACTIONS(380),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(380),
    [anon_sym_COLON_GT] = ACTIONS(382),
    [anon_sym_COLON_GT_EQ] = ACTIONS(380),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(380),
    [anon_sym_COLON_AT] = ACTIONS(380),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(380),
    [anon_sym_COLON_CARET] = ACTIONS(380),
    [anon_sym_COLON_PIPE] = ACTIONS(382),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(380),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(382),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(380),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(382),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(380),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(380),
    [anon_sym_nil] = ACTIONS(380),
    [anon_sym_COLONnil] = ACTIONS(382),
    [anon_sym_SQUOTE] = ACTIONS(380),
    [anon_sym_LT_LT] = ACTIONS(380),
    [anon_sym_COMMA] = ACTIONS(380),
    [anon_sym_DQUOTE] = ACTIONS(380),
    [anon_sym_LBRACE] = ACTIONS(380),
    [anon_sym_RBRACE] = ACTIONS(380),
    [anon_sym_LBRACK] = ACTIONS(380),
    [anon_sym_RBRACK] = ACTIONS(380),
    [anon_sym_PIPE] = ACTIONS(380),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(380),
    [anon_sym_PERCENT] = ACTIONS(382),
    [anon_sym_defmodule] = ACTIONS(380),
    [anon_sym_end] = ACTIONS(380),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(380),
    [sym_comment] = ACTIONS(43),
  },
  [93] = {
    [anon_sym_COMMA] = ACTIONS(384),
    [anon_sym_RBRACK] = ACTIONS(378),
    [sym_comment] = ACTIONS(43),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(386),
    [sym_alias] = ACTIONS(386),
    [sym_integer] = ACTIONS(388),
    [sym_float] = ACTIONS(386),
    [anon_sym_true] = ACTIONS(386),
    [anon_sym_COLONtrue] = ACTIONS(388),
    [anon_sym_false] = ACTIONS(386),
    [anon_sym_COLONfalse] = ACTIONS(388),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(388),
    [anon_sym_COLON_BANG] = ACTIONS(388),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(388),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(386),
    [anon_sym_COLON_AMP] = ACTIONS(388),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(388),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(386),
    [anon_sym_COLON_STAR] = ACTIONS(386),
    [anon_sym_COLON_PLUS] = ACTIONS(388),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(386),
    [anon_sym_COLON_DASH] = ACTIONS(388),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(386),
    [anon_sym_COLON_DOT] = ACTIONS(388),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(386),
    [anon_sym_COLON_SLASH] = ACTIONS(386),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(386),
    [anon_sym_COLON_LT] = ACTIONS(388),
    [anon_sym_COLON_LT_DASH] = ACTIONS(386),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(386),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(386),
    [anon_sym_COLON_LT_EQ] = ACTIONS(386),
    [anon_sym_COLON_LT_GT] = ACTIONS(386),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(386),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(388),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(386),
    [anon_sym_COLON_EQ] = ACTIONS(388),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(388),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(386),
    [anon_sym_COLON_EQ_GT] = ACTIONS(386),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(386),
    [anon_sym_COLON_GT] = ACTIONS(388),
    [anon_sym_COLON_GT_EQ] = ACTIONS(386),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(386),
    [anon_sym_COLON_AT] = ACTIONS(386),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(386),
    [anon_sym_COLON_CARET] = ACTIONS(386),
    [anon_sym_COLON_PIPE] = ACTIONS(388),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(386),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(388),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(386),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(388),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(386),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(386),
    [anon_sym_nil] = ACTIONS(386),
    [anon_sym_COLONnil] = ACTIONS(388),
    [anon_sym_SQUOTE] = ACTIONS(386),
    [anon_sym_LT_LT] = ACTIONS(386),
    [anon_sym_COMMA] = ACTIONS(386),
    [anon_sym_DQUOTE] = ACTIONS(386),
    [anon_sym_LBRACE] = ACTIONS(386),
    [anon_sym_RBRACE] = ACTIONS(386),
    [anon_sym_LBRACK] = ACTIONS(386),
    [anon_sym_RBRACK] = ACTIONS(386),
    [anon_sym_PIPE] = ACTIONS(386),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(386),
    [anon_sym_PERCENT] = ACTIONS(388),
    [anon_sym_defmodule] = ACTIONS(386),
    [anon_sym_end] = ACTIONS(386),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(386),
    [sym_comment] = ACTIONS(43),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(390),
    [sym_alias] = ACTIONS(390),
    [sym_integer] = ACTIONS(392),
    [sym_float] = ACTIONS(390),
    [anon_sym_true] = ACTIONS(390),
    [anon_sym_COLONtrue] = ACTIONS(392),
    [anon_sym_false] = ACTIONS(390),
    [anon_sym_COLONfalse] = ACTIONS(392),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(392),
    [anon_sym_COLON_BANG] = ACTIONS(392),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(392),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(390),
    [anon_sym_COLON_AMP] = ACTIONS(392),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(392),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(390),
    [anon_sym_COLON_STAR] = ACTIONS(390),
    [anon_sym_COLON_PLUS] = ACTIONS(392),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(390),
    [anon_sym_COLON_DASH] = ACTIONS(392),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(390),
    [anon_sym_COLON_DOT] = ACTIONS(392),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(390),
    [anon_sym_COLON_SLASH] = ACTIONS(390),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(390),
    [anon_sym_COLON_LT] = ACTIONS(392),
    [anon_sym_COLON_LT_DASH] = ACTIONS(390),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(390),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(390),
    [anon_sym_COLON_LT_EQ] = ACTIONS(390),
    [anon_sym_COLON_LT_GT] = ACTIONS(390),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(390),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(392),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(390),
    [anon_sym_COLON_EQ] = ACTIONS(392),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(392),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(390),
    [anon_sym_COLON_EQ_GT] = ACTIONS(390),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(390),
    [anon_sym_COLON_GT] = ACTIONS(392),
    [anon_sym_COLON_GT_EQ] = ACTIONS(390),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(390),
    [anon_sym_COLON_AT] = ACTIONS(390),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(390),
    [anon_sym_COLON_CARET] = ACTIONS(390),
    [anon_sym_COLON_PIPE] = ACTIONS(392),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(390),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(392),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(390),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(392),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(390),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(390),
    [anon_sym_nil] = ACTIONS(390),
    [anon_sym_COLONnil] = ACTIONS(392),
    [anon_sym_SQUOTE] = ACTIONS(390),
    [anon_sym_LT_LT] = ACTIONS(390),
    [anon_sym_COMMA] = ACTIONS(390),
    [anon_sym_DQUOTE] = ACTIONS(390),
    [anon_sym_LBRACE] = ACTIONS(390),
    [anon_sym_RBRACE] = ACTIONS(390),
    [anon_sym_LBRACK] = ACTIONS(390),
    [anon_sym_RBRACK] = ACTIONS(390),
    [anon_sym_PIPE] = ACTIONS(390),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(390),
    [anon_sym_PERCENT] = ACTIONS(392),
    [anon_sym_defmodule] = ACTIONS(390),
    [anon_sym_end] = ACTIONS(390),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(390),
    [sym_comment] = ACTIONS(43),
  },
  [96] = {
    [anon_sym_end] = ACTIONS(394),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(394),
    [sym_comment] = ACTIONS(43),
  },
  [97] = {
    [aux_sym_keyword_list_repeat1] = STATE(105),
    [anon_sym_COMMA] = ACTIONS(312),
    [anon_sym_end] = ACTIONS(314),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(314),
    [sym_comment] = ACTIONS(43),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(396),
    [sym_alias] = ACTIONS(396),
    [sym_integer] = ACTIONS(398),
    [sym_float] = ACTIONS(396),
    [anon_sym_true] = ACTIONS(396),
    [anon_sym_COLONtrue] = ACTIONS(398),
    [anon_sym_false] = ACTIONS(396),
    [anon_sym_COLONfalse] = ACTIONS(398),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(398),
    [anon_sym_COLON_BANG] = ACTIONS(398),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(398),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(396),
    [anon_sym_COLON_AMP] = ACTIONS(398),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(398),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(396),
    [anon_sym_COLON_STAR] = ACTIONS(396),
    [anon_sym_COLON_PLUS] = ACTIONS(398),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(396),
    [anon_sym_COLON_DASH] = ACTIONS(398),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(396),
    [anon_sym_COLON_DOT] = ACTIONS(398),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(396),
    [anon_sym_COLON_SLASH] = ACTIONS(396),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(396),
    [anon_sym_COLON_LT] = ACTIONS(398),
    [anon_sym_COLON_LT_DASH] = ACTIONS(396),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(396),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(396),
    [anon_sym_COLON_LT_EQ] = ACTIONS(396),
    [anon_sym_COLON_LT_GT] = ACTIONS(396),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(396),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(398),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(396),
    [anon_sym_COLON_EQ] = ACTIONS(398),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(398),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(396),
    [anon_sym_COLON_EQ_GT] = ACTIONS(396),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(396),
    [anon_sym_COLON_GT] = ACTIONS(398),
    [anon_sym_COLON_GT_EQ] = ACTIONS(396),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(396),
    [anon_sym_COLON_AT] = ACTIONS(396),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(396),
    [anon_sym_COLON_CARET] = ACTIONS(396),
    [anon_sym_COLON_PIPE] = ACTIONS(398),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(396),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(398),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(396),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(398),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(396),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(396),
    [anon_sym_nil] = ACTIONS(396),
    [anon_sym_COLONnil] = ACTIONS(398),
    [anon_sym_SQUOTE] = ACTIONS(396),
    [anon_sym_LT_LT] = ACTIONS(396),
    [anon_sym_COMMA] = ACTIONS(396),
    [anon_sym_DQUOTE] = ACTIONS(396),
    [anon_sym_LBRACE] = ACTIONS(396),
    [anon_sym_RBRACE] = ACTIONS(396),
    [anon_sym_LBRACK] = ACTIONS(396),
    [anon_sym_RBRACK] = ACTIONS(396),
    [anon_sym_PIPE] = ACTIONS(396),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(396),
    [anon_sym_PERCENT] = ACTIONS(398),
    [anon_sym_defmodule] = ACTIONS(396),
    [anon_sym_end] = ACTIONS(396),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(396),
    [sym_comment] = ACTIONS(43),
  },
  [99] = {
    [sym_module_attribute] = STATE(99),
    [aux_sym_module_repeat1] = STATE(99),
    [anon_sym_end] = ACTIONS(400),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(402),
    [sym_comment] = ACTIONS(43),
  },
  [100] = {
    [aux_sym_keyword_list_repeat1] = STATE(100),
    [anon_sym_COMMA] = ACTIONS(339),
    [anon_sym_RBRACE] = ACTIONS(335),
    [sym_comment] = ACTIONS(43),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(405),
    [sym_alias] = ACTIONS(405),
    [sym_integer] = ACTIONS(407),
    [sym_float] = ACTIONS(405),
    [anon_sym_true] = ACTIONS(405),
    [anon_sym_COLONtrue] = ACTIONS(407),
    [anon_sym_false] = ACTIONS(405),
    [anon_sym_COLONfalse] = ACTIONS(407),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(407),
    [anon_sym_COLON_BANG] = ACTIONS(407),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(407),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(405),
    [anon_sym_COLON_AMP] = ACTIONS(407),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(407),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(405),
    [anon_sym_COLON_STAR] = ACTIONS(405),
    [anon_sym_COLON_PLUS] = ACTIONS(407),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(405),
    [anon_sym_COLON_DASH] = ACTIONS(407),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(405),
    [anon_sym_COLON_DOT] = ACTIONS(407),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(405),
    [anon_sym_COLON_SLASH] = ACTIONS(405),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(405),
    [anon_sym_COLON_LT] = ACTIONS(407),
    [anon_sym_COLON_LT_DASH] = ACTIONS(405),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(405),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(405),
    [anon_sym_COLON_LT_EQ] = ACTIONS(405),
    [anon_sym_COLON_LT_GT] = ACTIONS(405),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(405),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(407),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(405),
    [anon_sym_COLON_EQ] = ACTIONS(407),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(407),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(405),
    [anon_sym_COLON_EQ_GT] = ACTIONS(405),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(405),
    [anon_sym_COLON_GT] = ACTIONS(407),
    [anon_sym_COLON_GT_EQ] = ACTIONS(405),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(405),
    [anon_sym_COLON_AT] = ACTIONS(405),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(405),
    [anon_sym_COLON_CARET] = ACTIONS(405),
    [anon_sym_COLON_PIPE] = ACTIONS(407),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(405),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(407),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(405),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(407),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(405),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(405),
    [anon_sym_nil] = ACTIONS(405),
    [anon_sym_COLONnil] = ACTIONS(407),
    [anon_sym_SQUOTE] = ACTIONS(405),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_COMMA] = ACTIONS(405),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [anon_sym_LBRACE] = ACTIONS(405),
    [anon_sym_RBRACE] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(405),
    [anon_sym_RBRACK] = ACTIONS(405),
    [anon_sym_PIPE] = ACTIONS(405),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(405),
    [anon_sym_PERCENT] = ACTIONS(407),
    [anon_sym_defmodule] = ACTIONS(405),
    [anon_sym_end] = ACTIONS(405),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(405),
    [sym_comment] = ACTIONS(43),
  },
  [102] = {
    [anon_sym_RBRACE] = ACTIONS(409),
    [sym_comment] = ACTIONS(43),
  },
  [103] = {
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
    [anon_sym_PERCENT] = ACTIONS(413),
    [anon_sym_defmodule] = ACTIONS(411),
    [anon_sym_end] = ACTIONS(411),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(411),
    [sym_comment] = ACTIONS(43),
  },
  [104] = {
    [anon_sym_RBRACK] = ACTIONS(415),
    [sym_comment] = ACTIONS(43),
  },
  [105] = {
    [aux_sym_keyword_list_repeat1] = STATE(108),
    [anon_sym_COMMA] = ACTIONS(312),
    [anon_sym_end] = ACTIONS(368),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(368),
    [sym_comment] = ACTIONS(43),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(417),
    [sym_alias] = ACTIONS(417),
    [sym_integer] = ACTIONS(419),
    [sym_float] = ACTIONS(417),
    [anon_sym_true] = ACTIONS(417),
    [anon_sym_COLONtrue] = ACTIONS(419),
    [anon_sym_false] = ACTIONS(417),
    [anon_sym_COLONfalse] = ACTIONS(419),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(419),
    [anon_sym_COLON_BANG] = ACTIONS(419),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(419),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(417),
    [anon_sym_COLON_AMP] = ACTIONS(419),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(419),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(417),
    [anon_sym_COLON_STAR] = ACTIONS(417),
    [anon_sym_COLON_PLUS] = ACTIONS(419),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(417),
    [anon_sym_COLON_DASH] = ACTIONS(419),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(417),
    [anon_sym_COLON_DOT] = ACTIONS(419),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(417),
    [anon_sym_COLON_SLASH] = ACTIONS(417),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(417),
    [anon_sym_COLON_LT] = ACTIONS(419),
    [anon_sym_COLON_LT_DASH] = ACTIONS(417),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(417),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(417),
    [anon_sym_COLON_LT_EQ] = ACTIONS(417),
    [anon_sym_COLON_LT_GT] = ACTIONS(417),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(417),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(419),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(417),
    [anon_sym_COLON_EQ] = ACTIONS(419),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(419),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(417),
    [anon_sym_COLON_EQ_GT] = ACTIONS(417),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(417),
    [anon_sym_COLON_GT] = ACTIONS(419),
    [anon_sym_COLON_GT_EQ] = ACTIONS(417),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(417),
    [anon_sym_COLON_AT] = ACTIONS(417),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(417),
    [anon_sym_COLON_CARET] = ACTIONS(417),
    [anon_sym_COLON_PIPE] = ACTIONS(419),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(417),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(419),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(417),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(419),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(417),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(417),
    [anon_sym_nil] = ACTIONS(417),
    [anon_sym_COLONnil] = ACTIONS(419),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(417),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(417),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_RBRACK] = ACTIONS(417),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(417),
    [anon_sym_PERCENT] = ACTIONS(419),
    [anon_sym_defmodule] = ACTIONS(417),
    [anon_sym_end] = ACTIONS(417),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(417),
    [sym_comment] = ACTIONS(43),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(421),
    [sym_alias] = ACTIONS(421),
    [sym_integer] = ACTIONS(423),
    [sym_float] = ACTIONS(421),
    [anon_sym_true] = ACTIONS(421),
    [anon_sym_COLONtrue] = ACTIONS(423),
    [anon_sym_false] = ACTIONS(421),
    [anon_sym_COLONfalse] = ACTIONS(423),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(423),
    [anon_sym_COLON_BANG] = ACTIONS(423),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(423),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(421),
    [anon_sym_COLON_AMP] = ACTIONS(423),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(423),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(421),
    [anon_sym_COLON_STAR] = ACTIONS(421),
    [anon_sym_COLON_PLUS] = ACTIONS(423),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(421),
    [anon_sym_COLON_DASH] = ACTIONS(423),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(421),
    [anon_sym_COLON_DOT] = ACTIONS(423),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(421),
    [anon_sym_COLON_SLASH] = ACTIONS(421),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(421),
    [anon_sym_COLON_LT] = ACTIONS(423),
    [anon_sym_COLON_LT_DASH] = ACTIONS(421),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(421),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(421),
    [anon_sym_COLON_LT_EQ] = ACTIONS(421),
    [anon_sym_COLON_LT_GT] = ACTIONS(421),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(421),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(423),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(421),
    [anon_sym_COLON_EQ] = ACTIONS(423),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(423),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(421),
    [anon_sym_COLON_EQ_GT] = ACTIONS(421),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(421),
    [anon_sym_COLON_GT] = ACTIONS(423),
    [anon_sym_COLON_GT_EQ] = ACTIONS(421),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(421),
    [anon_sym_COLON_AT] = ACTIONS(421),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(421),
    [anon_sym_COLON_CARET] = ACTIONS(421),
    [anon_sym_COLON_PIPE] = ACTIONS(423),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(421),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(423),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(421),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(423),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(421),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(421),
    [anon_sym_nil] = ACTIONS(421),
    [anon_sym_COLONnil] = ACTIONS(423),
    [anon_sym_SQUOTE] = ACTIONS(421),
    [anon_sym_LT_LT] = ACTIONS(421),
    [anon_sym_COMMA] = ACTIONS(421),
    [anon_sym_DQUOTE] = ACTIONS(421),
    [anon_sym_LBRACE] = ACTIONS(421),
    [anon_sym_RBRACE] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(421),
    [anon_sym_RBRACK] = ACTIONS(421),
    [anon_sym_PIPE] = ACTIONS(421),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(421),
    [anon_sym_PERCENT] = ACTIONS(423),
    [anon_sym_defmodule] = ACTIONS(421),
    [anon_sym_end] = ACTIONS(421),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(421),
    [sym_comment] = ACTIONS(43),
  },
  [108] = {
    [aux_sym_keyword_list_repeat1] = STATE(108),
    [anon_sym_COMMA] = ACTIONS(339),
    [anon_sym_end] = ACTIONS(335),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(335),
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
  [91] = {.count = 1, .reusable = true}, SHIFT(31),
  [93] = {.count = 1, .reusable = true}, SHIFT(32),
  [95] = {.count = 1, .reusable = true}, SHIFT(33),
  [97] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_list, 1),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym_list, 1),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [105] = {.count = 1, .reusable = true}, SHIFT(34),
  [107] = {.count = 1, .reusable = false}, SHIFT(34),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_charlist, 2),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_charlist, 2),
  [113] = {.count = 1, .reusable = false}, SHIFT(35),
  [115] = {.count = 1, .reusable = false}, SHIFT(36),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_binary_segment, 1),
  [119] = {.count = 1, .reusable = true}, SHIFT(37),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 2),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 2),
  [125] = {.count = 1, .reusable = true}, SHIFT(38),
  [127] = {.count = 1, .reusable = true}, SHIFT(39),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [133] = {.count = 1, .reusable = false}, SHIFT(41),
  [135] = {.count = 1, .reusable = false}, SHIFT(42),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 2),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 2),
  [141] = {.count = 1, .reusable = true}, SHIFT(43),
  [143] = {.count = 1, .reusable = true}, SHIFT(44),
  [145] = {.count = 1, .reusable = true}, SHIFT(46),
  [147] = {.count = 1, .reusable = false}, SHIFT(46),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym__empty_list, 2),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym__empty_list, 2),
  [153] = {.count = 1, .reusable = true}, SHIFT(47),
  [155] = {.count = 1, .reusable = true}, SHIFT(48),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_head, 1),
  [159] = {.count = 1, .reusable = true}, SHIFT(50),
  [161] = {.count = 1, .reusable = true}, SHIFT(51),
  [163] = {.count = 1, .reusable = true}, SHIFT(53),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_map, 2),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_map, 2),
  [169] = {.count = 1, .reusable = true}, SHIFT(54),
  [171] = {.count = 1, .reusable = true}, SHIFT(55),
  [173] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [175] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(34),
  [178] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(34),
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
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_charlist, 3),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym_charlist, 3),
  [233] = {.count = 1, .reusable = false}, REDUCE(aux_sym_charlist_repeat1, 2),
  [235] = {.count = 2, .reusable = false}, REDUCE(aux_sym_charlist_repeat1, 2), SHIFT_REPEAT(36),
  [238] = {.count = 1, .reusable = true}, SHIFT(56),
  [240] = {.count = 1, .reusable = true}, SHIFT(57),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 3),
  [244] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 3),
  [246] = {.count = 1, .reusable = true}, SHIFT(59),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [250] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [252] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2),
  [254] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(42),
  [257] = {.count = 1, .reusable = false}, SHIFT(62),
  [259] = {.count = 1, .reusable = true}, SHIFT(62),
  [261] = {.count = 1, .reusable = true}, SHIFT(61),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 3),
  [265] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 3),
  [267] = {.count = 1, .reusable = true}, SHIFT(65),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_keyword, 2),
  [271] = {.count = 1, .reusable = true}, SHIFT(67),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 3),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 3),
  [277] = {.count = 1, .reusable = true}, SHIFT(70),
  [279] = {.count = 1, .reusable = true}, SHIFT(72),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_keyword_list, 3),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym_keyword_list, 3),
  [285] = {.count = 1, .reusable = true}, SHIFT(74),
  [287] = {.count = 1, .reusable = true}, SHIFT(78),
  [289] = {.count = 1, .reusable = true}, SHIFT(79),
  [291] = {.count = 1, .reusable = true}, SHIFT(80),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_binary_segment, 3),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 4),
  [297] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 4),
  [299] = {.count = 1, .reusable = true}, REDUCE(aux_sym_binary_repeat1, 2),
  [301] = {.count = 1, .reusable = true}, SHIFT(82),
  [303] = {.count = 2, .reusable = true}, REDUCE(aux_sym_binary_repeat1, 2), SHIFT_REPEAT(83),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 4),
  [308] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 4),
  [310] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [312] = {.count = 1, .reusable = true}, SHIFT(84),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_implicit_keyword_list, 1),
  [316] = {.count = 1, .reusable = true}, SHIFT(86),
  [318] = {.count = 1, .reusable = true}, SHIFT(87),
  [320] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(89),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 4),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 4),
  [327] = {.count = 1, .reusable = true}, SHIFT(91),
  [329] = {.count = 1, .reusable = true}, SHIFT(92),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_keyword_list, 4),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym_keyword_list, 4),
  [335] = {.count = 1, .reusable = true}, REDUCE(aux_sym_keyword_list_repeat1, 2),
  [337] = {.count = 1, .reusable = true}, SHIFT(94),
  [339] = {.count = 2, .reusable = true}, REDUCE(aux_sym_keyword_list_repeat1, 2), SHIFT_REPEAT(84),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym_tail, 1),
  [344] = {.count = 1, .reusable = true}, SHIFT(95),
  [346] = {.count = 1, .reusable = true}, REDUCE(sym_struct, 4),
  [348] = {.count = 1, .reusable = false}, REDUCE(sym_struct, 4),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_module, 4),
  [352] = {.count = 1, .reusable = false}, REDUCE(sym_module, 4),
  [354] = {.count = 1, .reusable = false}, SHIFT(96),
  [356] = {.count = 1, .reusable = true}, SHIFT(96),
  [358] = {.count = 1, .reusable = false}, REDUCE(sym_module_attribute, 1),
  [360] = {.count = 1, .reusable = true}, REDUCE(sym_module_attribute, 1),
  [362] = {.count = 1, .reusable = true}, SHIFT(98),
  [364] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 5),
  [366] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 5),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym_implicit_keyword_list, 2),
  [370] = {.count = 1, .reusable = true}, SHIFT(101),
  [372] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 5),
  [374] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 5),
  [376] = {.count = 1, .reusable = true}, SHIFT(102),
  [378] = {.count = 1, .reusable = true}, SHIFT(103),
  [380] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 5),
  [382] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 5),
  [384] = {.count = 1, .reusable = true}, SHIFT(104),
  [386] = {.count = 1, .reusable = true}, REDUCE(sym_keyword_list, 5),
  [388] = {.count = 1, .reusable = false}, REDUCE(sym_keyword_list, 5),
  [390] = {.count = 1, .reusable = true}, REDUCE(sym__head_tail_list, 5),
  [392] = {.count = 1, .reusable = false}, REDUCE(sym__head_tail_list, 5),
  [394] = {.count = 1, .reusable = true}, REDUCE(sym_module_attribute, 2),
  [396] = {.count = 1, .reusable = true}, REDUCE(sym_module, 5),
  [398] = {.count = 1, .reusable = false}, REDUCE(sym_module, 5),
  [400] = {.count = 1, .reusable = true}, REDUCE(aux_sym_module_repeat1, 2),
  [402] = {.count = 2, .reusable = true}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(80),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 6),
  [407] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 6),
  [409] = {.count = 1, .reusable = true}, SHIFT(106),
  [411] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 6),
  [413] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 6),
  [415] = {.count = 1, .reusable = true}, SHIFT(107),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 7),
  [419] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 7),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 7),
  [423] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 7),
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
