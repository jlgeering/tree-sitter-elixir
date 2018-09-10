#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 103
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 0
#define TOKEN_COUNT 73
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
  anon_sym_defmodule = 68,
  anon_sym_do = 69,
  anon_sym_end = 70,
  aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH = 71,
  sym_comment = 72,
  sym_program = 73,
  sym__expression = 74,
  sym__value = 75,
  sym_true = 76,
  sym_false = 77,
  sym_atom = 78,
  sym__operator_atom = 79,
  sym_keyword = 80,
  sym_nil = 81,
  sym_charlist = 82,
  sym_binary = 83,
  sym_binary_segment = 84,
  sym_string = 85,
  sym_tuple = 86,
  sym_list = 87,
  sym__empty_list = 88,
  sym__simple_list = 89,
  sym__head_tail_list = 90,
  sym_head = 91,
  sym_tail = 92,
  sym_keyword_list = 93,
  sym_implicit_keyword_list = 94,
  sym_module = 95,
  sym_module_attribute = 96,
  aux_sym_program_repeat1 = 97,
  aux_sym_charlist_repeat1 = 98,
  aux_sym_binary_repeat1 = 99,
  aux_sym_string_repeat1 = 100,
  aux_sym_tuple_repeat1 = 101,
  aux_sym_keyword_list_repeat1 = 102,
  aux_sym_module_repeat1 = 103,
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
  [sym_list] = "list",
  [sym__empty_list] = "_empty_list",
  [sym__simple_list] = "_simple_list",
  [sym__head_tail_list] = "_head_tail_list",
  [sym_head] = "head",
  [sym_tail] = "tail",
  [sym_keyword_list] = "keyword_list",
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
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == '0')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(23);
      if (lookahead == '<')
        ADVANCE(91);
      if (lookahead == '>')
        ADVANCE(93);
      if (lookahead == '@')
        ADVANCE(95);
      if (lookahead == '[')
        ADVANCE(97);
      if (lookahead == '\\')
        SKIP(98);
      if (lookahead == ']')
        ADVANCE(99);
      if (lookahead == 'd')
        ADVANCE(100);
      if (lookahead == 'e')
        ADVANCE(110);
      if (lookahead == 'f')
        ADVANCE(113);
      if (lookahead == 'n')
        ADVANCE(118);
      if (lookahead == 't')
        ADVANCE(121);
      if (lookahead == '{')
        ADVANCE(125);
      if (lookahead == '|')
        ADVANCE(126);
      if (lookahead == '}')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(128);
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
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == '_')
        ADVANCE(14);
      if (lookahead == 'b')
        ADVANCE(17);
      if (lookahead == 'o')
        ADVANCE(19);
      if (lookahead == 'x')
        ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_')
        ADVANCE(7);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_')
        ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == ' ')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH);
      END_STATE();
    case 14:
      if (lookahead == ':')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == '_')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == ':')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(18);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == '_')
        ADVANCE(17);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(18);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == ':')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(20);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == '_')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(20);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == ':')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(22);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == '_')
        ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(22);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 23:
      if (lookahead == '!')
        ADVANCE(24);
      if (lookahead == '\"')
        ADVANCE(27);
      if (lookahead == '&')
        ADVANCE(29);
      if (lookahead == '\'')
        ADVANCE(32);
      if (lookahead == '*')
        ADVANCE(34);
      if (lookahead == '+')
        ADVANCE(35);
      if (lookahead == '-')
        ADVANCE(37);
      if (lookahead == '.')
        ADVANCE(39);
      if (lookahead == '/')
        ADVANCE(41);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(44);
      if (lookahead == '=')
        ADVANCE(55);
      if (lookahead == '>')
        ADVANCE(60);
      if (lookahead == '@')
        ADVANCE(64);
      if (lookahead == '\\')
        ADVANCE(65);
      if (lookahead == '^')
        ADVANCE(67);
      if (lookahead == 'f')
        ADVANCE(68);
      if (lookahead == 'n')
        ADVANCE(75);
      if (lookahead == 't')
        ADVANCE(78);
      if (lookahead == '|')
        ADVANCE(82);
      if (lookahead == '~')
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COLON_BANG);
      if (lookahead == '=')
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COLON_BANG_EQ);
      if (lookahead == '=')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON_BANG_EQ_EQ);
      END_STATE();
    case 27:
      if (lookahead == '\"')
        ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '\"')
        ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(27);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COLON_AMP);
      if (lookahead == '&')
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COLON_AMP_AMP);
      if (lookahead == '&')
        ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COLON_AMP_AMP_AMP);
      END_STATE();
    case 32:
      if (lookahead == '\'')
        ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '\'')
        ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(32);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON_STAR);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      if (lookahead == '+')
        ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS_PLUS);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      if (lookahead == '-')
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COLON_DASH_DASH);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON_DOT);
      if (lookahead == '.')
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COLON_DOT_DOT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == ':')
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_COLON);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON_LT);
      if (lookahead == '-')
        ADVANCE(45);
      if (lookahead == '<')
        ADVANCE(46);
      if (lookahead == '=')
        ADVANCE(49);
      if (lookahead == '>')
        ADVANCE(50);
      if (lookahead == '|')
        ADVANCE(51);
      if (lookahead == '~')
        ADVANCE(53);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLON_LT_DASH);
      END_STATE();
    case 46:
      if (lookahead == '<')
        ADVANCE(47);
      if (lookahead == '~')
        ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COLON_LT_LT_LT);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COLON_LT_LT_TILDE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON_LT_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COLON_LT_GT);
      END_STATE();
    case 51:
      if (lookahead == '>')
        ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COLON_LT_PIPE_GT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLON_LT_TILDE);
      if (lookahead == '>')
        ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COLON_LT_TILDE_GT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      if (lookahead == '=')
        ADVANCE(56);
      if (lookahead == '>')
        ADVANCE(58);
      if (lookahead == '~')
        ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COLON_EQ_EQ);
      if (lookahead == '=')
        ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON_EQ_EQ_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON_EQ_GT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COLON_EQ_TILDE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      if (lookahead == '=')
        ADVANCE(61);
      if (lookahead == '>')
        ADVANCE(62);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COLON_GT_EQ);
      END_STATE();
    case 62:
      if (lookahead == '>')
        ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COLON_GT_GT_GT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COLON_AT);
      END_STATE();
    case 65:
      if (lookahead == '\\')
        ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COLON_BSLASH_BSLASH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLON_CARET);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(69);
      if (lookahead == '?')
        ADVANCE(69);
      if (lookahead == 'a')
        ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(69);
      if (lookahead == '?')
        ADVANCE(69);
      if (lookahead == 'l')
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(69);
      if (lookahead == '?')
        ADVANCE(69);
      if (lookahead == 's')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(69);
      if (lookahead == '?')
        ADVANCE(69);
      if (lookahead == 'e')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COLONfalse);
      if (lookahead == '!')
        ADVANCE(69);
      if (lookahead == '?')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(69);
      if (lookahead == '?')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(69);
      if (lookahead == '?')
        ADVANCE(69);
      if (lookahead == 'i')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(69);
      if (lookahead == '?')
        ADVANCE(69);
      if (lookahead == 'l')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COLONnil);
      if (lookahead == '!')
        ADVANCE(69);
      if (lookahead == '?')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(69);
      if (lookahead == '?')
        ADVANCE(69);
      if (lookahead == 'r')
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(69);
      if (lookahead == '?')
        ADVANCE(69);
      if (lookahead == 'u')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(69);
      if (lookahead == '?')
        ADVANCE(69);
      if (lookahead == 'e')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COLONtrue);
      if (lookahead == '!')
        ADVANCE(69);
      if (lookahead == '?')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COLON_PIPE);
      if (lookahead == '>')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COLON_PIPE_GT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COLON_PIPE_PIPE);
      if (lookahead == '|')
        ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COLON_PIPE_PIPE_PIPE);
      END_STATE();
    case 86:
      if (lookahead == '>')
        ADVANCE(87);
      if (lookahead == '~')
        ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COLON_TILDE_GT);
      if (lookahead == '>')
        ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_COLON_TILDE_GT_GT);
      END_STATE();
    case 89:
      if (lookahead == '~')
        ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COLON_TILDE_TILDE_TILDE);
      END_STATE();
    case 91:
      if (lookahead == '<')
        ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 93:
      if (lookahead == '>')
        ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 98:
      if (lookahead == '\n')
        SKIP(0);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 100:
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == 'e')
        ADVANCE(101);
      if (lookahead == 'o')
        ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 101:
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == 'f')
        ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 102:
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == 'm')
        ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 103:
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == 'o')
        ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 104:
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == 'd')
        ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 105:
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == 'u')
        ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 106:
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == 'l')
        ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 107:
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == 'e')
        ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_defmodule);
      if (lookahead == ':')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == ':')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 110:
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == 'n')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 111:
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == 'd')
        ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ':')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 113:
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == 'a')
        ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 114:
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == 'l')
        ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 115:
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == 's')
        ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 116:
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == 'e')
        ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ':')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 118:
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == 'i')
        ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 119:
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == 'l')
        ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_nil);
      if (lookahead == ':')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 121:
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == 'r')
        ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 122:
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == 'u')
        ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 123:
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == 'e')
        ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ':')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead == '.')
        ADVANCE(129);
      if (lookahead == ':')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 129:
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead == '.')
        ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 131:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '0')
        ADVANCE(132);
      if (lookahead == ':')
        ADVANCE(141);
      if (lookahead == '<')
        ADVANCE(91);
      if (lookahead == '[')
        ADVANCE(97);
      if (lookahead == '\\')
        SKIP(143);
      if (lookahead == 'd')
        ADVANCE(144);
      if (lookahead == 'f')
        ADVANCE(153);
      if (lookahead == 'n')
        ADVANCE(158);
      if (lookahead == 't')
        ADVANCE(161);
      if (lookahead == '{')
        ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(131);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == '_')
        ADVANCE(133);
      if (lookahead == 'b')
        ADVANCE(135);
      if (lookahead == 'o')
        ADVANCE(137);
      if (lookahead == 'x')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(134);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == '_')
        ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(134);
      END_STATE();
    case 135:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(135);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(136);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(138);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(140);
      END_STATE();
    case 141:
      if (lookahead == '!')
        ADVANCE(24);
      if (lookahead == '\"')
        ADVANCE(27);
      if (lookahead == '&')
        ADVANCE(29);
      if (lookahead == '\'')
        ADVANCE(32);
      if (lookahead == '*')
        ADVANCE(34);
      if (lookahead == '+')
        ADVANCE(35);
      if (lookahead == '-')
        ADVANCE(37);
      if (lookahead == '.')
        ADVANCE(39);
      if (lookahead == '/')
        ADVANCE(41);
      if (lookahead == ':')
        ADVANCE(142);
      if (lookahead == '<')
        ADVANCE(44);
      if (lookahead == '=')
        ADVANCE(55);
      if (lookahead == '>')
        ADVANCE(60);
      if (lookahead == '@')
        ADVANCE(64);
      if (lookahead == '\\')
        ADVANCE(65);
      if (lookahead == '^')
        ADVANCE(67);
      if (lookahead == 'f')
        ADVANCE(68);
      if (lookahead == 'n')
        ADVANCE(75);
      if (lookahead == 't')
        ADVANCE(78);
      if (lookahead == '|')
        ADVANCE(82);
      if (lookahead == '~')
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(74);
      END_STATE();
    case 142:
      if (lookahead == ':')
        ADVANCE(43);
      END_STATE();
    case 143:
      if (lookahead == '\n')
        SKIP(131);
      END_STATE();
    case 144:
      if (lookahead == 'e')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'f')
        ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'm')
        ADVANCE(147);
      END_STATE();
    case 147:
      if (lookahead == 'o')
        ADVANCE(148);
      END_STATE();
    case 148:
      if (lookahead == 'd')
        ADVANCE(149);
      END_STATE();
    case 149:
      if (lookahead == 'u')
        ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'l')
        ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == 'e')
        ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_defmodule);
      END_STATE();
    case 153:
      if (lookahead == 'a')
        ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == 'l')
        ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == 's')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 'e')
        ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 158:
      if (lookahead == 'i')
        ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 'l')
        ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 161:
      if (lookahead == 'r')
        ADVANCE(162);
      END_STATE();
    case 162:
      if (lookahead == 'u')
        ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == 'e')
        ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 165:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == '0')
        ADVANCE(132);
      if (lookahead == ':')
        ADVANCE(141);
      if (lookahead == '<')
        ADVANCE(91);
      if (lookahead == '@')
        ADVANCE(95);
      if (lookahead == '[')
        ADVANCE(97);
      if (lookahead == '\\')
        SKIP(166);
      if (lookahead == ']')
        ADVANCE(99);
      if (lookahead == 'd')
        ADVANCE(144);
      if (lookahead == 'e')
        ADVANCE(167);
      if (lookahead == 'f')
        ADVANCE(153);
      if (lookahead == 'n')
        ADVANCE(158);
      if (lookahead == 't')
        ADVANCE(161);
      if (lookahead == '{')
        ADVANCE(125);
      if (lookahead == '|')
        ADVANCE(126);
      if (lookahead == '}')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(165);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(130);
      END_STATE();
    case 166:
      if (lookahead == '\n')
        SKIP(165);
      END_STATE();
    case 167:
      if (lookahead == 'n')
        ADVANCE(168);
      END_STATE();
    case 168:
      if (lookahead == 'd')
        ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 170:
      if (lookahead == '#')
        ADVANCE(171);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(173);
      if (lookahead != 0)
        ADVANCE(173);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead == '\'')
        ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      END_STATE();
    case 174:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '0')
        ADVANCE(175);
      if (lookahead == '>')
        ADVANCE(93);
      if (lookahead == '\\')
        SKIP(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(174);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(177);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(176);
      if (lookahead == 'b')
        ADVANCE(135);
      if (lookahead == 'o')
        ADVANCE(137);
      if (lookahead == 'x')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(177);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(177);
      END_STATE();
    case 178:
      if (lookahead == '\n')
        SKIP(174);
      END_STATE();
    case 179:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(180);
      if (lookahead == '\\')
        ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(182);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 183:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '0')
        ADVANCE(132);
      if (lookahead == ':')
        ADVANCE(141);
      if (lookahead == '<')
        ADVANCE(91);
      if (lookahead == '[')
        ADVANCE(97);
      if (lookahead == '\\')
        SKIP(184);
      if (lookahead == 'd')
        ADVANCE(144);
      if (lookahead == 'f')
        ADVANCE(153);
      if (lookahead == 'n')
        ADVANCE(158);
      if (lookahead == 't')
        ADVANCE(161);
      if (lookahead == '{')
        ADVANCE(125);
      if (lookahead == '}')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(183);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(130);
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
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '0')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(141);
      if (lookahead == '<')
        ADVANCE(91);
      if (lookahead == '[')
        ADVANCE(97);
      if (lookahead == '\\')
        SKIP(186);
      if (lookahead == ']')
        ADVANCE(99);
      if (lookahead == 'd')
        ADVANCE(187);
      if (lookahead == 'f')
        ADVANCE(113);
      if (lookahead == 'n')
        ADVANCE(118);
      if (lookahead == 't')
        ADVANCE(121);
      if (lookahead == '{')
        ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(185);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(128);
      END_STATE();
    case 186:
      if (lookahead == '\n')
        SKIP(185);
      END_STATE();
    case 187:
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == 'e')
        ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      END_STATE();
    case 188:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(188);
      END_STATE();
    case 189:
      if (lookahead == '\n')
        SKIP(188);
      END_STATE();
    case 190:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == '0')
        ADVANCE(132);
      if (lookahead == ':')
        ADVANCE(23);
      if (lookahead == '<')
        ADVANCE(91);
      if (lookahead == '>')
        ADVANCE(93);
      if (lookahead == '@')
        ADVANCE(95);
      if (lookahead == '[')
        ADVANCE(97);
      if (lookahead == '\\')
        SKIP(191);
      if (lookahead == ']')
        ADVANCE(99);
      if (lookahead == 'd')
        ADVANCE(144);
      if (lookahead == 'e')
        ADVANCE(167);
      if (lookahead == 'f')
        ADVANCE(153);
      if (lookahead == 'n')
        ADVANCE(158);
      if (lookahead == 't')
        ADVANCE(161);
      if (lookahead == '{')
        ADVANCE(125);
      if (lookahead == '|')
        ADVANCE(126);
      if (lookahead == '}')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(190);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(130);
      END_STATE();
    case 191:
      if (lookahead == '\n')
        SKIP(190);
      END_STATE();
    case 192:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(193);
      if (lookahead == '>')
        ADVANCE(93);
      if (lookahead == '\\')
        SKIP(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(192);
      END_STATE();
    case 193:
      if (lookahead == ':')
        ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 195:
      if (lookahead == '\n')
        SKIP(192);
      END_STATE();
    case 196:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == '\\')
        SKIP(197);
      if (lookahead == '}')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(196);
      END_STATE();
    case 197:
      if (lookahead == '\n')
        SKIP(196);
      END_STATE();
    case 198:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == '\\')
        SKIP(199);
      if (lookahead == ']')
        ADVANCE(99);
      if (lookahead == '|')
        ADVANCE(126);
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
      if (lookahead == '\\')
        SKIP(201);
      if (lookahead == 'd')
        ADVANCE(202);
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
      if (lookahead == 'o')
        ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_binary_options);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(204);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      END_STATE();
    case 205:
      if (lookahead == '\n')
        SKIP(204);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_binary_options);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(206);
      END_STATE();
    case 207:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '0')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(141);
      if (lookahead == '<')
        ADVANCE(91);
      if (lookahead == '[')
        ADVANCE(97);
      if (lookahead == '\\')
        SKIP(208);
      if (lookahead == 'd')
        ADVANCE(187);
      if (lookahead == 'f')
        ADVANCE(113);
      if (lookahead == 'n')
        ADVANCE(118);
      if (lookahead == 't')
        ADVANCE(121);
      if (lookahead == '{')
        ADVANCE(125);
      if (lookahead == '}')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(207);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(128);
      END_STATE();
    case 208:
      if (lookahead == '\n')
        SKIP(207);
      END_STATE();
    case 209:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == '@')
        ADVANCE(95);
      if (lookahead == '\\')
        SKIP(210);
      if (lookahead == ']')
        ADVANCE(99);
      if (lookahead == 'e')
        ADVANCE(167);
      if (lookahead == '}')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(209);
      END_STATE();
    case 210:
      if (lookahead == '\n')
        SKIP(209);
      END_STATE();
    case 211:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == '@')
        ADVANCE(95);
      if (lookahead == '\\')
        SKIP(212);
      if (lookahead == 'e')
        ADVANCE(167);
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
        ADVANCE(5);
      if (lookahead == '\\')
        SKIP(214);
      if (lookahead == ']')
        ADVANCE(99);
      if (lookahead == '}')
        ADVANCE(127);
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
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '0')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(141);
      if (lookahead == '<')
        ADVANCE(91);
      if (lookahead == '@')
        ADVANCE(95);
      if (lookahead == '[')
        ADVANCE(97);
      if (lookahead == '\\')
        SKIP(216);
      if (lookahead == 'd')
        ADVANCE(187);
      if (lookahead == 'e')
        ADVANCE(110);
      if (lookahead == 'f')
        ADVANCE(113);
      if (lookahead == 'n')
        ADVANCE(118);
      if (lookahead == 't')
        ADVANCE(121);
      if (lookahead == '{')
        ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(215);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(128);
      END_STATE();
    case 216:
      if (lookahead == '\n')
        SKIP(215);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 131},
  [2] = {.lex_state = 165},
  [3] = {.lex_state = 165},
  [4] = {.lex_state = 165},
  [5] = {.lex_state = 165},
  [6] = {.lex_state = 170},
  [7] = {.lex_state = 174},
  [8] = {.lex_state = 179},
  [9] = {.lex_state = 183},
  [10] = {.lex_state = 185},
  [11] = {.lex_state = 131},
  [12] = {.lex_state = 188},
  [13] = {.lex_state = 165},
  [14] = {.lex_state = 131},
  [15] = {.lex_state = 190},
  [16] = {.lex_state = 170},
  [17] = {.lex_state = 192},
  [18] = {.lex_state = 165},
  [19] = {.lex_state = 192},
  [20] = {.lex_state = 190},
  [21] = {.lex_state = 179},
  [22] = {.lex_state = 165},
  [23] = {.lex_state = 196},
  [24] = {.lex_state = 131},
  [25] = {.lex_state = 165},
  [26] = {.lex_state = 198},
  [27] = {.lex_state = 198},
  [28] = {.lex_state = 198},
  [29] = {.lex_state = 200},
  [30] = {.lex_state = 131},
  [31] = {.lex_state = 190},
  [32] = {.lex_state = 170},
  [33] = {.lex_state = 204},
  [34] = {.lex_state = 174},
  [35] = {.lex_state = 165},
  [36] = {.lex_state = 192},
  [37] = {.lex_state = 190},
  [38] = {.lex_state = 179},
  [39] = {.lex_state = 207},
  [40] = {.lex_state = 165},
  [41] = {.lex_state = 196},
  [42] = {.lex_state = 209},
  [43] = {.lex_state = 185},
  [44] = {.lex_state = 165},
  [45] = {.lex_state = 198},
  [46] = {.lex_state = 185},
  [47] = {.lex_state = 165},
  [48] = {.lex_state = 198},
  [49] = {.lex_state = 131},
  [50] = {.lex_state = 211},
  [51] = {.lex_state = 192},
  [52] = {.lex_state = 165},
  [53] = {.lex_state = 192},
  [54] = {.lex_state = 174},
  [55] = {.lex_state = 192},
  [56] = {.lex_state = 165},
  [57] = {.lex_state = 213},
  [58] = {.lex_state = 196},
  [59] = {.lex_state = 196},
  [60] = {.lex_state = 207},
  [61] = {.lex_state = 196},
  [62] = {.lex_state = 165},
  [63] = {.lex_state = 198},
  [64] = {.lex_state = 198},
  [65] = {.lex_state = 185},
  [66] = {.lex_state = 198},
  [67] = {.lex_state = 165},
  [68] = {.lex_state = 209},
  [69] = {.lex_state = 185},
  [70] = {.lex_state = 198},
  [71] = {.lex_state = 185},
  [72] = {.lex_state = 185},
  [73] = {.lex_state = 165},
  [74] = {.lex_state = 215},
  [75] = {.lex_state = 211},
  [76] = {.lex_state = 165},
  [77] = {.lex_state = 131},
  [78] = {.lex_state = 185},
  [79] = {.lex_state = 196},
  [80] = {.lex_state = 183},
  [81] = {.lex_state = 165},
  [82] = {.lex_state = 196},
  [83] = {.lex_state = 131},
  [84] = {.lex_state = 198},
  [85] = {.lex_state = 185},
  [86] = {.lex_state = 165},
  [87] = {.lex_state = 198},
  [88] = {.lex_state = 165},
  [89] = {.lex_state = 165},
  [90] = {.lex_state = 211},
  [91] = {.lex_state = 211},
  [92] = {.lex_state = 165},
  [93] = {.lex_state = 211},
  [94] = {.lex_state = 196},
  [95] = {.lex_state = 165},
  [96] = {.lex_state = 183},
  [97] = {.lex_state = 165},
  [98] = {.lex_state = 185},
  [99] = {.lex_state = 211},
  [100] = {.lex_state = 165},
  [101] = {.lex_state = 165},
  [102] = {.lex_state = 211},
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
    [anon_sym_defmodule] = ACTIONS(3),
    [anon_sym_do] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(3),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(12),
    [sym__expression] = STATE(14),
    [sym__value] = STATE(14),
    [sym_true] = STATE(14),
    [sym_false] = STATE(14),
    [sym_atom] = STATE(14),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(14),
    [sym_charlist] = STATE(14),
    [sym_binary] = STATE(14),
    [sym_string] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_list] = STATE(14),
    [sym__empty_list] = STATE(13),
    [sym__simple_list] = STATE(13),
    [sym__head_tail_list] = STATE(13),
    [sym_keyword_list] = STATE(14),
    [sym_module] = STATE(14),
    [aux_sym_program_repeat1] = STATE(14),
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
    [anon_sym_defmodule] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_alias] = ACTIONS(41),
    [sym_integer] = ACTIONS(43),
    [sym_float] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_COLONtrue] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_COLONfalse] = ACTIONS(43),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(43),
    [anon_sym_COLON_BANG] = ACTIONS(43),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(43),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(41),
    [anon_sym_COLON_AMP] = ACTIONS(43),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(43),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(41),
    [anon_sym_COLON_STAR] = ACTIONS(41),
    [anon_sym_COLON_PLUS] = ACTIONS(43),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(41),
    [anon_sym_COLON_DASH] = ACTIONS(43),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(41),
    [anon_sym_COLON_DOT] = ACTIONS(43),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(41),
    [anon_sym_COLON_SLASH] = ACTIONS(41),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(41),
    [anon_sym_COLON_LT] = ACTIONS(43),
    [anon_sym_COLON_LT_DASH] = ACTIONS(41),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(41),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(41),
    [anon_sym_COLON_LT_EQ] = ACTIONS(41),
    [anon_sym_COLON_LT_GT] = ACTIONS(41),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(41),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(43),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(41),
    [anon_sym_COLON_EQ] = ACTIONS(43),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(43),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(41),
    [anon_sym_COLON_EQ_GT] = ACTIONS(41),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(41),
    [anon_sym_COLON_GT] = ACTIONS(43),
    [anon_sym_COLON_GT_EQ] = ACTIONS(41),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(41),
    [anon_sym_COLON_AT] = ACTIONS(41),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(41),
    [anon_sym_COLON_CARET] = ACTIONS(41),
    [anon_sym_COLON_PIPE] = ACTIONS(43),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(41),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(43),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(41),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(43),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(41),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(41),
    [anon_sym_nil] = ACTIONS(41),
    [anon_sym_COLONnil] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_LT_LT] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(41),
    [anon_sym_defmodule] = ACTIONS(41),
    [anon_sym_end] = ACTIONS(41),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(41),
    [sym_comment] = ACTIONS(39),
  },
  [3] = {
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
    [anon_sym_defmodule] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(45),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(45),
    [sym_comment] = ACTIONS(39),
  },
  [4] = {
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
    [anon_sym_defmodule] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(49),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(49),
    [sym_comment] = ACTIONS(39),
  },
  [5] = {
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
    [anon_sym_defmodule] = ACTIONS(53),
    [anon_sym_end] = ACTIONS(53),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(53),
    [sym_comment] = ACTIONS(39),
  },
  [6] = {
    [aux_sym_charlist_repeat1] = STATE(16),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(59),
    [sym_comment] = ACTIONS(61),
  },
  [7] = {
    [sym_charlist] = STATE(17),
    [sym_binary_segment] = STATE(19),
    [sym_string] = STATE(17),
    [sym_integer] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_GT_GT] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(39),
  },
  [8] = {
    [aux_sym_string_repeat1] = STATE(21),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(69),
    [sym_comment] = ACTIONS(61),
  },
  [9] = {
    [sym__expression] = STATE(23),
    [sym__value] = STATE(23),
    [sym_true] = STATE(23),
    [sym_false] = STATE(23),
    [sym_atom] = STATE(23),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(23),
    [sym_charlist] = STATE(23),
    [sym_binary] = STATE(23),
    [sym_string] = STATE(23),
    [sym_tuple] = STATE(23),
    [sym_list] = STATE(23),
    [sym__empty_list] = STATE(13),
    [sym__simple_list] = STATE(13),
    [sym__head_tail_list] = STATE(13),
    [sym_keyword_list] = STATE(23),
    [sym_module] = STATE(23),
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
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_defmodule] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
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
    [sym_charlist] = STATE(26),
    [sym_binary] = STATE(26),
    [sym_string] = STATE(26),
    [sym_tuple] = STATE(26),
    [sym_list] = STATE(26),
    [sym__empty_list] = STATE(13),
    [sym__simple_list] = STATE(13),
    [sym__head_tail_list] = STATE(13),
    [sym_head] = STATE(28),
    [sym_keyword_list] = STATE(26),
    [sym_module] = STATE(26),
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
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(83),
    [anon_sym_defmodule] = ACTIONS(85),
    [sym_comment] = ACTIONS(39),
  },
  [11] = {
    [sym_alias] = ACTIONS(87),
    [sym_comment] = ACTIONS(39),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_comment] = ACTIONS(39),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym_alias] = ACTIONS(91),
    [sym_integer] = ACTIONS(93),
    [sym_float] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_COLONtrue] = ACTIONS(93),
    [anon_sym_false] = ACTIONS(91),
    [anon_sym_COLONfalse] = ACTIONS(93),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(93),
    [anon_sym_COLON_BANG] = ACTIONS(93),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(93),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(91),
    [anon_sym_COLON_AMP] = ACTIONS(93),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(93),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(91),
    [anon_sym_COLON_STAR] = ACTIONS(91),
    [anon_sym_COLON_PLUS] = ACTIONS(93),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(91),
    [anon_sym_COLON_DASH] = ACTIONS(93),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(91),
    [anon_sym_COLON_DOT] = ACTIONS(93),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(91),
    [anon_sym_COLON_SLASH] = ACTIONS(91),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(91),
    [anon_sym_COLON_LT] = ACTIONS(93),
    [anon_sym_COLON_LT_DASH] = ACTIONS(91),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(91),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(91),
    [anon_sym_COLON_LT_EQ] = ACTIONS(91),
    [anon_sym_COLON_LT_GT] = ACTIONS(91),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(91),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(93),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(91),
    [anon_sym_COLON_EQ] = ACTIONS(93),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(93),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(91),
    [anon_sym_COLON_EQ_GT] = ACTIONS(91),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(91),
    [anon_sym_COLON_GT] = ACTIONS(93),
    [anon_sym_COLON_GT_EQ] = ACTIONS(91),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(91),
    [anon_sym_COLON_AT] = ACTIONS(91),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(91),
    [anon_sym_COLON_CARET] = ACTIONS(91),
    [anon_sym_COLON_PIPE] = ACTIONS(93),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(91),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(93),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(91),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(93),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(91),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(91),
    [anon_sym_nil] = ACTIONS(91),
    [anon_sym_COLONnil] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_LT_LT] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_defmodule] = ACTIONS(91),
    [anon_sym_end] = ACTIONS(91),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(91),
    [sym_comment] = ACTIONS(39),
  },
  [14] = {
    [sym__expression] = STATE(30),
    [sym__value] = STATE(30),
    [sym_true] = STATE(30),
    [sym_false] = STATE(30),
    [sym_atom] = STATE(30),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(30),
    [sym_charlist] = STATE(30),
    [sym_binary] = STATE(30),
    [sym_string] = STATE(30),
    [sym_tuple] = STATE(30),
    [sym_list] = STATE(30),
    [sym__empty_list] = STATE(13),
    [sym__simple_list] = STATE(13),
    [sym__head_tail_list] = STATE(13),
    [sym_keyword_list] = STATE(30),
    [sym_module] = STATE(30),
    [aux_sym_program_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_alias] = ACTIONS(97),
    [sym_integer] = ACTIONS(99),
    [sym_float] = ACTIONS(97),
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
    [anon_sym_defmodule] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [sym_alias] = ACTIONS(101),
    [sym_integer] = ACTIONS(103),
    [sym_float] = ACTIONS(101),
    [anon_sym_true] = ACTIONS(101),
    [anon_sym_COLONtrue] = ACTIONS(103),
    [anon_sym_false] = ACTIONS(101),
    [anon_sym_COLONfalse] = ACTIONS(103),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(103),
    [anon_sym_COLON_BANG] = ACTIONS(103),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(103),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(101),
    [anon_sym_COLON_AMP] = ACTIONS(103),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(103),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(101),
    [anon_sym_COLON_STAR] = ACTIONS(101),
    [anon_sym_COLON_PLUS] = ACTIONS(103),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(101),
    [anon_sym_COLON_DASH] = ACTIONS(103),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(101),
    [anon_sym_COLON_DOT] = ACTIONS(103),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(101),
    [anon_sym_COLON_SLASH] = ACTIONS(101),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(101),
    [anon_sym_COLON_LT] = ACTIONS(103),
    [anon_sym_COLON_LT_DASH] = ACTIONS(101),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(101),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(101),
    [anon_sym_COLON_LT_EQ] = ACTIONS(101),
    [anon_sym_COLON_LT_GT] = ACTIONS(101),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(101),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(103),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(101),
    [anon_sym_COLON_EQ] = ACTIONS(103),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(103),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(101),
    [anon_sym_COLON_EQ_GT] = ACTIONS(101),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(101),
    [anon_sym_COLON_GT] = ACTIONS(103),
    [anon_sym_COLON_GT_EQ] = ACTIONS(101),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(101),
    [anon_sym_COLON_AT] = ACTIONS(101),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(101),
    [anon_sym_COLON_CARET] = ACTIONS(101),
    [anon_sym_COLON_PIPE] = ACTIONS(103),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(101),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(103),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(101),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(103),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(101),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(101),
    [anon_sym_nil] = ACTIONS(101),
    [anon_sym_COLONnil] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(101),
    [anon_sym_LT_LT] = ACTIONS(101),
    [anon_sym_COMMA] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_COLON_COLON] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_RBRACK] = ACTIONS(101),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_defmodule] = ACTIONS(101),
    [anon_sym_end] = ACTIONS(101),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(101),
    [sym_comment] = ACTIONS(39),
  },
  [16] = {
    [aux_sym_charlist_repeat1] = STATE(32),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(107),
    [sym_comment] = ACTIONS(61),
  },
  [17] = {
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_GT_GT] = ACTIONS(109),
    [anon_sym_COLON_COLON] = ACTIONS(111),
    [sym_comment] = ACTIONS(39),
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
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_LT_LT] = ACTIONS(113),
    [anon_sym_COMMA] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_RBRACK] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_defmodule] = ACTIONS(113),
    [anon_sym_end] = ACTIONS(113),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(113),
    [sym_comment] = ACTIONS(39),
  },
  [19] = {
    [aux_sym_binary_repeat1] = STATE(36),
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_GT_GT] = ACTIONS(119),
    [sym_comment] = ACTIONS(39),
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
    [anon_sym_GT_GT] = ACTIONS(121),
    [anon_sym_COLON_COLON] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_defmodule] = ACTIONS(121),
    [anon_sym_end] = ACTIONS(121),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(121),
    [sym_comment] = ACTIONS(39),
  },
  [21] = {
    [aux_sym_string_repeat1] = STATE(38),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(127),
    [sym_comment] = ACTIONS(61),
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
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_RBRACK] = ACTIONS(129),
    [anon_sym_PIPE] = ACTIONS(129),
    [anon_sym_defmodule] = ACTIONS(129),
    [anon_sym_end] = ACTIONS(129),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(129),
    [sym_comment] = ACTIONS(39),
  },
  [23] = {
    [aux_sym_tuple_repeat1] = STATE(41),
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_RBRACE] = ACTIONS(135),
    [sym_comment] = ACTIONS(39),
  },
  [24] = {
    [sym__value] = STATE(42),
    [sym_true] = STATE(42),
    [sym_false] = STATE(42),
    [sym_atom] = STATE(42),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(42),
    [sym_charlist] = STATE(42),
    [sym_binary] = STATE(42),
    [sym_string] = STATE(42),
    [sym_tuple] = STATE(42),
    [sym_list] = STATE(42),
    [sym__empty_list] = STATE(13),
    [sym__simple_list] = STATE(13),
    [sym__head_tail_list] = STATE(13),
    [sym_keyword_list] = STATE(42),
    [sym_module] = STATE(42),
    [sym_alias] = ACTIONS(137),
    [sym_integer] = ACTIONS(139),
    [sym_float] = ACTIONS(137),
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
    [anon_sym_defmodule] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [25] = {
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
    [anon_sym_defmodule] = ACTIONS(141),
    [anon_sym_end] = ACTIONS(141),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(141),
    [sym_comment] = ACTIONS(39),
  },
  [26] = {
    [aux_sym_tuple_repeat1] = STATE(45),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_RBRACK] = ACTIONS(147),
    [anon_sym_PIPE] = ACTIONS(149),
    [sym_comment] = ACTIONS(39),
  },
  [27] = {
    [aux_sym_keyword_list_repeat1] = STATE(48),
    [anon_sym_COMMA] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(153),
    [sym_comment] = ACTIONS(39),
  },
  [28] = {
    [anon_sym_PIPE] = ACTIONS(155),
    [sym_comment] = ACTIONS(39),
  },
  [29] = {
    [anon_sym_do] = ACTIONS(157),
    [sym_comment] = ACTIONS(39),
  },
  [30] = {
    [sym__expression] = STATE(30),
    [sym__value] = STATE(30),
    [sym_true] = STATE(30),
    [sym_false] = STATE(30),
    [sym_atom] = STATE(30),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(30),
    [sym_charlist] = STATE(30),
    [sym_binary] = STATE(30),
    [sym_string] = STATE(30),
    [sym_tuple] = STATE(30),
    [sym_list] = STATE(30),
    [sym__empty_list] = STATE(13),
    [sym__simple_list] = STATE(13),
    [sym__head_tail_list] = STATE(13),
    [sym_keyword_list] = STATE(30),
    [sym_module] = STATE(30),
    [aux_sym_program_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym_alias] = ACTIONS(161),
    [sym_integer] = ACTIONS(164),
    [sym_float] = ACTIONS(161),
    [anon_sym_true] = ACTIONS(167),
    [anon_sym_COLONtrue] = ACTIONS(170),
    [anon_sym_false] = ACTIONS(173),
    [anon_sym_COLONfalse] = ACTIONS(176),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(179),
    [anon_sym_COLON_BANG] = ACTIONS(179),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(179),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(182),
    [anon_sym_COLON_AMP] = ACTIONS(179),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(179),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(182),
    [anon_sym_COLON_STAR] = ACTIONS(182),
    [anon_sym_COLON_PLUS] = ACTIONS(179),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(182),
    [anon_sym_COLON_DASH] = ACTIONS(179),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(182),
    [anon_sym_COLON_DOT] = ACTIONS(179),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(182),
    [anon_sym_COLON_SLASH] = ACTIONS(182),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(182),
    [anon_sym_COLON_LT] = ACTIONS(179),
    [anon_sym_COLON_LT_DASH] = ACTIONS(182),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(182),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(182),
    [anon_sym_COLON_LT_EQ] = ACTIONS(182),
    [anon_sym_COLON_LT_GT] = ACTIONS(182),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(182),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(179),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(182),
    [anon_sym_COLON_EQ] = ACTIONS(179),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(179),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(182),
    [anon_sym_COLON_EQ_GT] = ACTIONS(182),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(182),
    [anon_sym_COLON_GT] = ACTIONS(179),
    [anon_sym_COLON_GT_EQ] = ACTIONS(182),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(182),
    [anon_sym_COLON_AT] = ACTIONS(182),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(182),
    [anon_sym_COLON_CARET] = ACTIONS(182),
    [anon_sym_COLON_PIPE] = ACTIONS(179),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(182),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(179),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(182),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(179),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(182),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(182),
    [anon_sym_nil] = ACTIONS(185),
    [anon_sym_COLONnil] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_LT_LT] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(200),
    [anon_sym_LBRACK] = ACTIONS(203),
    [anon_sym_defmodule] = ACTIONS(206),
    [sym_comment] = ACTIONS(39),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [sym_alias] = ACTIONS(209),
    [sym_integer] = ACTIONS(211),
    [sym_float] = ACTIONS(209),
    [anon_sym_true] = ACTIONS(209),
    [anon_sym_COLONtrue] = ACTIONS(211),
    [anon_sym_false] = ACTIONS(209),
    [anon_sym_COLONfalse] = ACTIONS(211),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(211),
    [anon_sym_COLON_BANG] = ACTIONS(211),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(211),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(209),
    [anon_sym_COLON_AMP] = ACTIONS(211),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(211),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(209),
    [anon_sym_COLON_STAR] = ACTIONS(209),
    [anon_sym_COLON_PLUS] = ACTIONS(211),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(209),
    [anon_sym_COLON_DASH] = ACTIONS(211),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(209),
    [anon_sym_COLON_DOT] = ACTIONS(211),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(209),
    [anon_sym_COLON_SLASH] = ACTIONS(209),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(209),
    [anon_sym_COLON_LT] = ACTIONS(211),
    [anon_sym_COLON_LT_DASH] = ACTIONS(209),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(209),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(209),
    [anon_sym_COLON_LT_EQ] = ACTIONS(209),
    [anon_sym_COLON_LT_GT] = ACTIONS(209),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(209),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(211),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(209),
    [anon_sym_COLON_EQ] = ACTIONS(211),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(211),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(209),
    [anon_sym_COLON_EQ_GT] = ACTIONS(209),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(209),
    [anon_sym_COLON_GT] = ACTIONS(211),
    [anon_sym_COLON_GT_EQ] = ACTIONS(209),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(209),
    [anon_sym_COLON_AT] = ACTIONS(209),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(209),
    [anon_sym_COLON_CARET] = ACTIONS(209),
    [anon_sym_COLON_PIPE] = ACTIONS(211),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(209),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(211),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(209),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(211),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(209),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(209),
    [anon_sym_nil] = ACTIONS(209),
    [anon_sym_COLONnil] = ACTIONS(211),
    [anon_sym_SQUOTE] = ACTIONS(209),
    [anon_sym_LT_LT] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_GT_GT] = ACTIONS(209),
    [anon_sym_COLON_COLON] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_RBRACK] = ACTIONS(209),
    [anon_sym_PIPE] = ACTIONS(209),
    [anon_sym_defmodule] = ACTIONS(209),
    [anon_sym_end] = ACTIONS(209),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(209),
    [sym_comment] = ACTIONS(39),
  },
  [32] = {
    [aux_sym_charlist_repeat1] = STATE(32),
    [anon_sym_SQUOTE] = ACTIONS(213),
    [aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(215),
    [sym_comment] = ACTIONS(61),
  },
  [33] = {
    [sym_binary_options] = ACTIONS(218),
    [sym_comment] = ACTIONS(39),
  },
  [34] = {
    [sym_charlist] = STATE(17),
    [sym_binary_segment] = STATE(53),
    [sym_string] = STATE(17),
    [sym_integer] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_GT_GT] = ACTIONS(220),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(39),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(222),
    [sym_alias] = ACTIONS(222),
    [sym_integer] = ACTIONS(224),
    [sym_float] = ACTIONS(222),
    [anon_sym_true] = ACTIONS(222),
    [anon_sym_COLONtrue] = ACTIONS(224),
    [anon_sym_false] = ACTIONS(222),
    [anon_sym_COLONfalse] = ACTIONS(224),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(224),
    [anon_sym_COLON_BANG] = ACTIONS(224),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(224),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(222),
    [anon_sym_COLON_AMP] = ACTIONS(224),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(224),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(222),
    [anon_sym_COLON_STAR] = ACTIONS(222),
    [anon_sym_COLON_PLUS] = ACTIONS(224),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(222),
    [anon_sym_COLON_DASH] = ACTIONS(224),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(222),
    [anon_sym_COLON_DOT] = ACTIONS(224),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(222),
    [anon_sym_COLON_SLASH] = ACTIONS(222),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(222),
    [anon_sym_COLON_LT] = ACTIONS(224),
    [anon_sym_COLON_LT_DASH] = ACTIONS(222),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(222),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(222),
    [anon_sym_COLON_LT_EQ] = ACTIONS(222),
    [anon_sym_COLON_LT_GT] = ACTIONS(222),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(222),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(224),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(222),
    [anon_sym_COLON_EQ] = ACTIONS(224),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(224),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(222),
    [anon_sym_COLON_EQ_GT] = ACTIONS(222),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(222),
    [anon_sym_COLON_GT] = ACTIONS(224),
    [anon_sym_COLON_GT_EQ] = ACTIONS(222),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(222),
    [anon_sym_COLON_AT] = ACTIONS(222),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(222),
    [anon_sym_COLON_CARET] = ACTIONS(222),
    [anon_sym_COLON_PIPE] = ACTIONS(224),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(222),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(224),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(222),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(224),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(222),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(222),
    [anon_sym_nil] = ACTIONS(222),
    [anon_sym_COLONnil] = ACTIONS(224),
    [anon_sym_SQUOTE] = ACTIONS(222),
    [anon_sym_LT_LT] = ACTIONS(222),
    [anon_sym_COMMA] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(222),
    [anon_sym_LBRACE] = ACTIONS(222),
    [anon_sym_RBRACE] = ACTIONS(222),
    [anon_sym_LBRACK] = ACTIONS(222),
    [anon_sym_RBRACK] = ACTIONS(222),
    [anon_sym_PIPE] = ACTIONS(222),
    [anon_sym_defmodule] = ACTIONS(222),
    [anon_sym_end] = ACTIONS(222),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(222),
    [sym_comment] = ACTIONS(39),
  },
  [36] = {
    [aux_sym_binary_repeat1] = STATE(55),
    [anon_sym_COMMA] = ACTIONS(226),
    [anon_sym_GT_GT] = ACTIONS(220),
    [sym_comment] = ACTIONS(39),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(228),
    [sym_alias] = ACTIONS(228),
    [sym_integer] = ACTIONS(230),
    [sym_float] = ACTIONS(228),
    [anon_sym_true] = ACTIONS(228),
    [anon_sym_COLONtrue] = ACTIONS(230),
    [anon_sym_false] = ACTIONS(228),
    [anon_sym_COLONfalse] = ACTIONS(230),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(230),
    [anon_sym_COLON_BANG] = ACTIONS(230),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(230),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(228),
    [anon_sym_COLON_AMP] = ACTIONS(230),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(230),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(228),
    [anon_sym_COLON_STAR] = ACTIONS(228),
    [anon_sym_COLON_PLUS] = ACTIONS(230),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(228),
    [anon_sym_COLON_DASH] = ACTIONS(230),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(228),
    [anon_sym_COLON_DOT] = ACTIONS(230),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(228),
    [anon_sym_COLON_SLASH] = ACTIONS(228),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(228),
    [anon_sym_COLON_LT] = ACTIONS(230),
    [anon_sym_COLON_LT_DASH] = ACTIONS(228),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(228),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(228),
    [anon_sym_COLON_LT_EQ] = ACTIONS(228),
    [anon_sym_COLON_LT_GT] = ACTIONS(228),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(228),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(230),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(228),
    [anon_sym_COLON_EQ] = ACTIONS(230),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(230),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(228),
    [anon_sym_COLON_EQ_GT] = ACTIONS(228),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(228),
    [anon_sym_COLON_GT] = ACTIONS(230),
    [anon_sym_COLON_GT_EQ] = ACTIONS(228),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(228),
    [anon_sym_COLON_AT] = ACTIONS(228),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(228),
    [anon_sym_COLON_CARET] = ACTIONS(228),
    [anon_sym_COLON_PIPE] = ACTIONS(230),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(228),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(230),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(228),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(230),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(228),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(228),
    [anon_sym_nil] = ACTIONS(228),
    [anon_sym_COLONnil] = ACTIONS(230),
    [anon_sym_SQUOTE] = ACTIONS(228),
    [anon_sym_LT_LT] = ACTIONS(228),
    [anon_sym_COMMA] = ACTIONS(228),
    [anon_sym_GT_GT] = ACTIONS(228),
    [anon_sym_COLON_COLON] = ACTIONS(230),
    [anon_sym_DQUOTE] = ACTIONS(228),
    [anon_sym_LBRACE] = ACTIONS(228),
    [anon_sym_RBRACE] = ACTIONS(228),
    [anon_sym_LBRACK] = ACTIONS(228),
    [anon_sym_RBRACK] = ACTIONS(228),
    [anon_sym_PIPE] = ACTIONS(228),
    [anon_sym_defmodule] = ACTIONS(228),
    [anon_sym_end] = ACTIONS(228),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(228),
    [sym_comment] = ACTIONS(39),
  },
  [38] = {
    [aux_sym_string_repeat1] = STATE(38),
    [anon_sym_DQUOTE] = ACTIONS(232),
    [aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(234),
    [sym_comment] = ACTIONS(61),
  },
  [39] = {
    [sym__expression] = STATE(57),
    [sym__value] = STATE(57),
    [sym_true] = STATE(57),
    [sym_false] = STATE(57),
    [sym_atom] = STATE(57),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(58),
    [sym_nil] = STATE(57),
    [sym_charlist] = STATE(57),
    [sym_binary] = STATE(57),
    [sym_string] = STATE(57),
    [sym_tuple] = STATE(57),
    [sym_list] = STATE(57),
    [sym__empty_list] = STATE(13),
    [sym__simple_list] = STATE(13),
    [sym__head_tail_list] = STATE(13),
    [sym_keyword_list] = STATE(57),
    [sym_implicit_keyword_list] = STATE(59),
    [sym_module] = STATE(57),
    [sym_alias] = ACTIONS(237),
    [sym_integer] = ACTIONS(237),
    [sym_float] = ACTIONS(239),
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
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(241),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_defmodule] = ACTIONS(85),
    [sym_comment] = ACTIONS(39),
  },
  [40] = {
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
    [anon_sym_DQUOTE] = ACTIONS(243),
    [anon_sym_LBRACE] = ACTIONS(243),
    [anon_sym_RBRACE] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(243),
    [anon_sym_RBRACK] = ACTIONS(243),
    [anon_sym_PIPE] = ACTIONS(243),
    [anon_sym_defmodule] = ACTIONS(243),
    [anon_sym_end] = ACTIONS(243),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(243),
    [sym_comment] = ACTIONS(39),
  },
  [41] = {
    [aux_sym_tuple_repeat1] = STATE(61),
    [anon_sym_COMMA] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(241),
    [sym_comment] = ACTIONS(39),
  },
  [42] = {
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_RBRACK] = ACTIONS(249),
    [anon_sym_end] = ACTIONS(249),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(249),
    [sym_comment] = ACTIONS(39),
  },
  [43] = {
    [sym__expression] = STATE(57),
    [sym__value] = STATE(57),
    [sym_true] = STATE(57),
    [sym_false] = STATE(57),
    [sym_atom] = STATE(57),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(63),
    [sym_nil] = STATE(57),
    [sym_charlist] = STATE(57),
    [sym_binary] = STATE(57),
    [sym_string] = STATE(57),
    [sym_tuple] = STATE(57),
    [sym_list] = STATE(57),
    [sym__empty_list] = STATE(13),
    [sym__simple_list] = STATE(13),
    [sym__head_tail_list] = STATE(13),
    [sym_keyword_list] = STATE(57),
    [sym_implicit_keyword_list] = STATE(64),
    [sym_module] = STATE(57),
    [sym_alias] = ACTIONS(237),
    [sym_integer] = ACTIONS(237),
    [sym_float] = ACTIONS(239),
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
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(251),
    [anon_sym_defmodule] = ACTIONS(85),
    [sym_comment] = ACTIONS(39),
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
    [anon_sym_SQUOTE] = ACTIONS(253),
    [anon_sym_LT_LT] = ACTIONS(253),
    [anon_sym_COMMA] = ACTIONS(253),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [anon_sym_LBRACE] = ACTIONS(253),
    [anon_sym_RBRACE] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(253),
    [anon_sym_RBRACK] = ACTIONS(253),
    [anon_sym_PIPE] = ACTIONS(253),
    [anon_sym_defmodule] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(253),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(253),
    [sym_comment] = ACTIONS(39),
  },
  [45] = {
    [aux_sym_tuple_repeat1] = STATE(66),
    [anon_sym_COMMA] = ACTIONS(257),
    [anon_sym_RBRACK] = ACTIONS(251),
    [sym_comment] = ACTIONS(39),
  },
  [46] = {
    [sym_keyword] = STATE(68),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(259),
    [sym_comment] = ACTIONS(39),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [sym_alias] = ACTIONS(261),
    [sym_integer] = ACTIONS(263),
    [sym_float] = ACTIONS(261),
    [anon_sym_true] = ACTIONS(261),
    [anon_sym_COLONtrue] = ACTIONS(263),
    [anon_sym_false] = ACTIONS(261),
    [anon_sym_COLONfalse] = ACTIONS(263),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(263),
    [anon_sym_COLON_BANG] = ACTIONS(263),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(263),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(261),
    [anon_sym_COLON_AMP] = ACTIONS(263),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(263),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(261),
    [anon_sym_COLON_STAR] = ACTIONS(261),
    [anon_sym_COLON_PLUS] = ACTIONS(263),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(261),
    [anon_sym_COLON_DASH] = ACTIONS(263),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(261),
    [anon_sym_COLON_DOT] = ACTIONS(263),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(261),
    [anon_sym_COLON_SLASH] = ACTIONS(261),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(261),
    [anon_sym_COLON_LT] = ACTIONS(263),
    [anon_sym_COLON_LT_DASH] = ACTIONS(261),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(261),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(261),
    [anon_sym_COLON_LT_EQ] = ACTIONS(261),
    [anon_sym_COLON_LT_GT] = ACTIONS(261),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(261),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(263),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(261),
    [anon_sym_COLON_EQ] = ACTIONS(263),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(263),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(261),
    [anon_sym_COLON_EQ_GT] = ACTIONS(261),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(261),
    [anon_sym_COLON_GT] = ACTIONS(263),
    [anon_sym_COLON_GT_EQ] = ACTIONS(261),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(261),
    [anon_sym_COLON_AT] = ACTIONS(261),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(261),
    [anon_sym_COLON_CARET] = ACTIONS(261),
    [anon_sym_COLON_PIPE] = ACTIONS(263),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(261),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(263),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(261),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(263),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(261),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(261),
    [anon_sym_nil] = ACTIONS(261),
    [anon_sym_COLONnil] = ACTIONS(263),
    [anon_sym_SQUOTE] = ACTIONS(261),
    [anon_sym_LT_LT] = ACTIONS(261),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [anon_sym_LBRACE] = ACTIONS(261),
    [anon_sym_RBRACE] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(261),
    [anon_sym_RBRACK] = ACTIONS(261),
    [anon_sym_PIPE] = ACTIONS(261),
    [anon_sym_defmodule] = ACTIONS(261),
    [anon_sym_end] = ACTIONS(261),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(261),
    [sym_comment] = ACTIONS(39),
  },
  [48] = {
    [aux_sym_keyword_list_repeat1] = STATE(70),
    [anon_sym_COMMA] = ACTIONS(265),
    [anon_sym_RBRACK] = ACTIONS(259),
    [sym_comment] = ACTIONS(39),
  },
  [49] = {
    [sym_list] = STATE(71),
    [sym__empty_list] = STATE(13),
    [sym__simple_list] = STATE(13),
    [sym__head_tail_list] = STATE(13),
    [sym_tail] = STATE(72),
    [sym_keyword_list] = STATE(71),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_comment] = ACTIONS(39),
  },
  [50] = {
    [sym_module_attribute] = STATE(75),
    [aux_sym_module_repeat1] = STATE(75),
    [anon_sym_end] = ACTIONS(267),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(269),
    [sym_comment] = ACTIONS(39),
  },
  [51] = {
    [anon_sym_COMMA] = ACTIONS(271),
    [anon_sym_GT_GT] = ACTIONS(271),
    [sym_comment] = ACTIONS(39),
  },
  [52] = {
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
    [anon_sym_defmodule] = ACTIONS(273),
    [anon_sym_end] = ACTIONS(273),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(273),
    [sym_comment] = ACTIONS(39),
  },
  [53] = {
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_GT_GT] = ACTIONS(277),
    [sym_comment] = ACTIONS(39),
  },
  [54] = {
    [sym_charlist] = STATE(17),
    [sym_binary_segment] = STATE(53),
    [sym_string] = STATE(17),
    [sym_integer] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_GT_GT] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(39),
  },
  [55] = {
    [aux_sym_binary_repeat1] = STATE(55),
    [anon_sym_COMMA] = ACTIONS(281),
    [anon_sym_GT_GT] = ACTIONS(277),
    [sym_comment] = ACTIONS(39),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(284),
    [sym_alias] = ACTIONS(284),
    [sym_integer] = ACTIONS(286),
    [sym_float] = ACTIONS(284),
    [anon_sym_true] = ACTIONS(284),
    [anon_sym_COLONtrue] = ACTIONS(286),
    [anon_sym_false] = ACTIONS(284),
    [anon_sym_COLONfalse] = ACTIONS(286),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(286),
    [anon_sym_COLON_BANG] = ACTIONS(286),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(286),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(284),
    [anon_sym_COLON_AMP] = ACTIONS(286),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(286),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(284),
    [anon_sym_COLON_STAR] = ACTIONS(284),
    [anon_sym_COLON_PLUS] = ACTIONS(286),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(284),
    [anon_sym_COLON_DASH] = ACTIONS(286),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(284),
    [anon_sym_COLON_DOT] = ACTIONS(286),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(284),
    [anon_sym_COLON_SLASH] = ACTIONS(284),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(284),
    [anon_sym_COLON_LT] = ACTIONS(286),
    [anon_sym_COLON_LT_DASH] = ACTIONS(284),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(284),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(284),
    [anon_sym_COLON_LT_EQ] = ACTIONS(284),
    [anon_sym_COLON_LT_GT] = ACTIONS(284),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(284),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(286),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(284),
    [anon_sym_COLON_EQ] = ACTIONS(286),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(286),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(284),
    [anon_sym_COLON_EQ_GT] = ACTIONS(284),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(284),
    [anon_sym_COLON_GT] = ACTIONS(286),
    [anon_sym_COLON_GT_EQ] = ACTIONS(284),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(284),
    [anon_sym_COLON_AT] = ACTIONS(284),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(284),
    [anon_sym_COLON_CARET] = ACTIONS(284),
    [anon_sym_COLON_PIPE] = ACTIONS(286),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(284),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(286),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(284),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(286),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(284),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(284),
    [anon_sym_nil] = ACTIONS(284),
    [anon_sym_COLONnil] = ACTIONS(286),
    [anon_sym_SQUOTE] = ACTIONS(284),
    [anon_sym_LT_LT] = ACTIONS(284),
    [anon_sym_COMMA] = ACTIONS(284),
    [anon_sym_DQUOTE] = ACTIONS(284),
    [anon_sym_LBRACE] = ACTIONS(284),
    [anon_sym_RBRACE] = ACTIONS(284),
    [anon_sym_LBRACK] = ACTIONS(284),
    [anon_sym_RBRACK] = ACTIONS(284),
    [anon_sym_PIPE] = ACTIONS(284),
    [anon_sym_defmodule] = ACTIONS(284),
    [anon_sym_end] = ACTIONS(284),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(284),
    [sym_comment] = ACTIONS(39),
  },
  [57] = {
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_RBRACE] = ACTIONS(288),
    [anon_sym_RBRACK] = ACTIONS(288),
    [sym_comment] = ACTIONS(39),
  },
  [58] = {
    [aux_sym_keyword_list_repeat1] = STATE(79),
    [anon_sym_COMMA] = ACTIONS(290),
    [anon_sym_RBRACE] = ACTIONS(292),
    [sym_comment] = ACTIONS(39),
  },
  [59] = {
    [anon_sym_COMMA] = ACTIONS(294),
    [anon_sym_RBRACE] = ACTIONS(296),
    [sym_comment] = ACTIONS(39),
  },
  [60] = {
    [sym__expression] = STATE(57),
    [sym__value] = STATE(57),
    [sym_true] = STATE(57),
    [sym_false] = STATE(57),
    [sym_atom] = STATE(57),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(58),
    [sym_nil] = STATE(57),
    [sym_charlist] = STATE(57),
    [sym_binary] = STATE(57),
    [sym_string] = STATE(57),
    [sym_tuple] = STATE(57),
    [sym_list] = STATE(57),
    [sym__empty_list] = STATE(13),
    [sym__simple_list] = STATE(13),
    [sym__head_tail_list] = STATE(13),
    [sym_keyword_list] = STATE(57),
    [sym_implicit_keyword_list] = STATE(82),
    [sym_module] = STATE(57),
    [sym_alias] = ACTIONS(237),
    [sym_integer] = ACTIONS(237),
    [sym_float] = ACTIONS(239),
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
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(296),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_defmodule] = ACTIONS(85),
    [sym_comment] = ACTIONS(39),
  },
  [61] = {
    [aux_sym_tuple_repeat1] = STATE(61),
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_RBRACE] = ACTIONS(288),
    [sym_comment] = ACTIONS(39),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(301),
    [sym_alias] = ACTIONS(301),
    [sym_integer] = ACTIONS(303),
    [sym_float] = ACTIONS(301),
    [anon_sym_true] = ACTIONS(301),
    [anon_sym_COLONtrue] = ACTIONS(303),
    [anon_sym_false] = ACTIONS(301),
    [anon_sym_COLONfalse] = ACTIONS(303),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(303),
    [anon_sym_COLON_BANG] = ACTIONS(303),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(303),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(301),
    [anon_sym_COLON_AMP] = ACTIONS(303),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(303),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(301),
    [anon_sym_COLON_STAR] = ACTIONS(301),
    [anon_sym_COLON_PLUS] = ACTIONS(303),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(301),
    [anon_sym_COLON_DASH] = ACTIONS(303),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(301),
    [anon_sym_COLON_DOT] = ACTIONS(303),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(301),
    [anon_sym_COLON_SLASH] = ACTIONS(301),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(301),
    [anon_sym_COLON_LT] = ACTIONS(303),
    [anon_sym_COLON_LT_DASH] = ACTIONS(301),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(301),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(301),
    [anon_sym_COLON_LT_EQ] = ACTIONS(301),
    [anon_sym_COLON_LT_GT] = ACTIONS(301),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(301),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(303),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(301),
    [anon_sym_COLON_EQ] = ACTIONS(303),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(303),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(301),
    [anon_sym_COLON_EQ_GT] = ACTIONS(301),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(301),
    [anon_sym_COLON_GT] = ACTIONS(303),
    [anon_sym_COLON_GT_EQ] = ACTIONS(301),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(301),
    [anon_sym_COLON_AT] = ACTIONS(301),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(301),
    [anon_sym_COLON_CARET] = ACTIONS(301),
    [anon_sym_COLON_PIPE] = ACTIONS(303),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(301),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(303),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(303),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(301),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(301),
    [anon_sym_nil] = ACTIONS(301),
    [anon_sym_COLONnil] = ACTIONS(303),
    [anon_sym_SQUOTE] = ACTIONS(301),
    [anon_sym_LT_LT] = ACTIONS(301),
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(301),
    [anon_sym_LBRACE] = ACTIONS(301),
    [anon_sym_RBRACE] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(301),
    [anon_sym_RBRACK] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(301),
    [anon_sym_defmodule] = ACTIONS(301),
    [anon_sym_end] = ACTIONS(301),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(301),
    [sym_comment] = ACTIONS(39),
  },
  [63] = {
    [aux_sym_keyword_list_repeat1] = STATE(84),
    [anon_sym_COMMA] = ACTIONS(290),
    [anon_sym_RBRACK] = ACTIONS(292),
    [sym_comment] = ACTIONS(39),
  },
  [64] = {
    [anon_sym_COMMA] = ACTIONS(305),
    [anon_sym_RBRACK] = ACTIONS(307),
    [sym_comment] = ACTIONS(39),
  },
  [65] = {
    [sym__expression] = STATE(57),
    [sym__value] = STATE(57),
    [sym_true] = STATE(57),
    [sym_false] = STATE(57),
    [sym_atom] = STATE(57),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(63),
    [sym_nil] = STATE(57),
    [sym_charlist] = STATE(57),
    [sym_binary] = STATE(57),
    [sym_string] = STATE(57),
    [sym_tuple] = STATE(57),
    [sym_list] = STATE(57),
    [sym__empty_list] = STATE(13),
    [sym__simple_list] = STATE(13),
    [sym__head_tail_list] = STATE(13),
    [sym_keyword_list] = STATE(57),
    [sym_implicit_keyword_list] = STATE(87),
    [sym_module] = STATE(57),
    [sym_alias] = ACTIONS(237),
    [sym_integer] = ACTIONS(237),
    [sym_float] = ACTIONS(239),
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
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(307),
    [anon_sym_defmodule] = ACTIONS(85),
    [sym_comment] = ACTIONS(39),
  },
  [66] = {
    [aux_sym_tuple_repeat1] = STATE(66),
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_RBRACK] = ACTIONS(288),
    [sym_comment] = ACTIONS(39),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(309),
    [sym_alias] = ACTIONS(309),
    [sym_integer] = ACTIONS(311),
    [sym_float] = ACTIONS(309),
    [anon_sym_true] = ACTIONS(309),
    [anon_sym_COLONtrue] = ACTIONS(311),
    [anon_sym_false] = ACTIONS(309),
    [anon_sym_COLONfalse] = ACTIONS(311),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(311),
    [anon_sym_COLON_BANG] = ACTIONS(311),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(311),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(309),
    [anon_sym_COLON_AMP] = ACTIONS(311),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(311),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(309),
    [anon_sym_COLON_STAR] = ACTIONS(309),
    [anon_sym_COLON_PLUS] = ACTIONS(311),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(309),
    [anon_sym_COLON_DASH] = ACTIONS(311),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(309),
    [anon_sym_COLON_DOT] = ACTIONS(311),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(309),
    [anon_sym_COLON_SLASH] = ACTIONS(309),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(309),
    [anon_sym_COLON_LT] = ACTIONS(311),
    [anon_sym_COLON_LT_DASH] = ACTIONS(309),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(309),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(309),
    [anon_sym_COLON_LT_EQ] = ACTIONS(309),
    [anon_sym_COLON_LT_GT] = ACTIONS(309),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(309),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(311),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(309),
    [anon_sym_COLON_EQ] = ACTIONS(311),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(311),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(309),
    [anon_sym_COLON_EQ_GT] = ACTIONS(309),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(309),
    [anon_sym_COLON_GT] = ACTIONS(311),
    [anon_sym_COLON_GT_EQ] = ACTIONS(309),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(309),
    [anon_sym_COLON_AT] = ACTIONS(309),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(309),
    [anon_sym_COLON_CARET] = ACTIONS(309),
    [anon_sym_COLON_PIPE] = ACTIONS(311),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(309),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(311),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(309),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(311),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(309),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(309),
    [anon_sym_nil] = ACTIONS(309),
    [anon_sym_COLONnil] = ACTIONS(311),
    [anon_sym_SQUOTE] = ACTIONS(309),
    [anon_sym_LT_LT] = ACTIONS(309),
    [anon_sym_COMMA] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(309),
    [anon_sym_LBRACE] = ACTIONS(309),
    [anon_sym_RBRACE] = ACTIONS(309),
    [anon_sym_LBRACK] = ACTIONS(309),
    [anon_sym_RBRACK] = ACTIONS(309),
    [anon_sym_PIPE] = ACTIONS(309),
    [anon_sym_defmodule] = ACTIONS(309),
    [anon_sym_end] = ACTIONS(309),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(309),
    [sym_comment] = ACTIONS(39),
  },
  [68] = {
    [anon_sym_COMMA] = ACTIONS(313),
    [anon_sym_RBRACE] = ACTIONS(313),
    [anon_sym_RBRACK] = ACTIONS(313),
    [anon_sym_end] = ACTIONS(313),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(313),
    [sym_comment] = ACTIONS(39),
  },
  [69] = {
    [sym_keyword] = STATE(68),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(315),
    [sym_comment] = ACTIONS(39),
  },
  [70] = {
    [aux_sym_keyword_list_repeat1] = STATE(70),
    [anon_sym_COMMA] = ACTIONS(317),
    [anon_sym_RBRACK] = ACTIONS(313),
    [sym_comment] = ACTIONS(39),
  },
  [71] = {
    [anon_sym_RBRACK] = ACTIONS(320),
    [sym_comment] = ACTIONS(39),
  },
  [72] = {
    [anon_sym_RBRACK] = ACTIONS(322),
    [sym_comment] = ACTIONS(39),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(324),
    [sym_alias] = ACTIONS(324),
    [sym_integer] = ACTIONS(326),
    [sym_float] = ACTIONS(324),
    [anon_sym_true] = ACTIONS(324),
    [anon_sym_COLONtrue] = ACTIONS(326),
    [anon_sym_false] = ACTIONS(324),
    [anon_sym_COLONfalse] = ACTIONS(326),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(326),
    [anon_sym_COLON_BANG] = ACTIONS(326),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(326),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(324),
    [anon_sym_COLON_AMP] = ACTIONS(326),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(326),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(324),
    [anon_sym_COLON_STAR] = ACTIONS(324),
    [anon_sym_COLON_PLUS] = ACTIONS(326),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(324),
    [anon_sym_COLON_DASH] = ACTIONS(326),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(324),
    [anon_sym_COLON_DOT] = ACTIONS(326),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(324),
    [anon_sym_COLON_SLASH] = ACTIONS(324),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(324),
    [anon_sym_COLON_LT] = ACTIONS(326),
    [anon_sym_COLON_LT_DASH] = ACTIONS(324),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(324),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(324),
    [anon_sym_COLON_LT_EQ] = ACTIONS(324),
    [anon_sym_COLON_LT_GT] = ACTIONS(324),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(324),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(326),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(324),
    [anon_sym_COLON_EQ] = ACTIONS(326),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(326),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(324),
    [anon_sym_COLON_EQ_GT] = ACTIONS(324),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(324),
    [anon_sym_COLON_GT] = ACTIONS(326),
    [anon_sym_COLON_GT_EQ] = ACTIONS(324),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(324),
    [anon_sym_COLON_AT] = ACTIONS(324),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(324),
    [anon_sym_COLON_CARET] = ACTIONS(324),
    [anon_sym_COLON_PIPE] = ACTIONS(326),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(324),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(326),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(324),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(326),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(324),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(324),
    [anon_sym_nil] = ACTIONS(324),
    [anon_sym_COLONnil] = ACTIONS(326),
    [anon_sym_SQUOTE] = ACTIONS(324),
    [anon_sym_LT_LT] = ACTIONS(324),
    [anon_sym_COMMA] = ACTIONS(324),
    [anon_sym_DQUOTE] = ACTIONS(324),
    [anon_sym_LBRACE] = ACTIONS(324),
    [anon_sym_RBRACE] = ACTIONS(324),
    [anon_sym_LBRACK] = ACTIONS(324),
    [anon_sym_RBRACK] = ACTIONS(324),
    [anon_sym_PIPE] = ACTIONS(324),
    [anon_sym_defmodule] = ACTIONS(324),
    [anon_sym_end] = ACTIONS(324),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(324),
    [sym_comment] = ACTIONS(39),
  },
  [74] = {
    [sym__value] = STATE(90),
    [sym_true] = STATE(90),
    [sym_false] = STATE(90),
    [sym_atom] = STATE(90),
    [sym__operator_atom] = STATE(4),
    [sym_keyword] = STATE(91),
    [sym_nil] = STATE(90),
    [sym_charlist] = STATE(90),
    [sym_binary] = STATE(90),
    [sym_string] = STATE(90),
    [sym_tuple] = STATE(90),
    [sym_list] = STATE(90),
    [sym__empty_list] = STATE(13),
    [sym__simple_list] = STATE(13),
    [sym__head_tail_list] = STATE(13),
    [sym_keyword_list] = STATE(90),
    [sym_implicit_keyword_list] = STATE(90),
    [sym_module] = STATE(90),
    [sym_alias] = ACTIONS(328),
    [sym_integer] = ACTIONS(328),
    [sym_float] = ACTIONS(330),
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
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_defmodule] = ACTIONS(85),
    [anon_sym_end] = ACTIONS(332),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(334),
    [sym_comment] = ACTIONS(39),
  },
  [75] = {
    [sym_module_attribute] = STATE(93),
    [aux_sym_module_repeat1] = STATE(93),
    [anon_sym_end] = ACTIONS(336),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(269),
    [sym_comment] = ACTIONS(39),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(338),
    [sym_alias] = ACTIONS(338),
    [sym_integer] = ACTIONS(340),
    [sym_float] = ACTIONS(338),
    [anon_sym_true] = ACTIONS(338),
    [anon_sym_COLONtrue] = ACTIONS(340),
    [anon_sym_false] = ACTIONS(338),
    [anon_sym_COLONfalse] = ACTIONS(340),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(340),
    [anon_sym_COLON_BANG] = ACTIONS(340),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(340),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(338),
    [anon_sym_COLON_AMP] = ACTIONS(340),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(340),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(338),
    [anon_sym_COLON_STAR] = ACTIONS(338),
    [anon_sym_COLON_PLUS] = ACTIONS(340),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(338),
    [anon_sym_COLON_DASH] = ACTIONS(340),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(338),
    [anon_sym_COLON_DOT] = ACTIONS(340),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(338),
    [anon_sym_COLON_SLASH] = ACTIONS(338),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(338),
    [anon_sym_COLON_LT] = ACTIONS(340),
    [anon_sym_COLON_LT_DASH] = ACTIONS(338),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(338),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(338),
    [anon_sym_COLON_LT_EQ] = ACTIONS(338),
    [anon_sym_COLON_LT_GT] = ACTIONS(338),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(338),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(340),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(338),
    [anon_sym_COLON_EQ] = ACTIONS(340),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(340),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(338),
    [anon_sym_COLON_EQ_GT] = ACTIONS(338),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(338),
    [anon_sym_COLON_GT] = ACTIONS(340),
    [anon_sym_COLON_GT_EQ] = ACTIONS(338),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(338),
    [anon_sym_COLON_AT] = ACTIONS(338),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(338),
    [anon_sym_COLON_CARET] = ACTIONS(338),
    [anon_sym_COLON_PIPE] = ACTIONS(340),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(338),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(340),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(338),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(340),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(338),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(338),
    [anon_sym_nil] = ACTIONS(338),
    [anon_sym_COLONnil] = ACTIONS(340),
    [anon_sym_SQUOTE] = ACTIONS(338),
    [anon_sym_LT_LT] = ACTIONS(338),
    [anon_sym_COMMA] = ACTIONS(338),
    [anon_sym_DQUOTE] = ACTIONS(338),
    [anon_sym_LBRACE] = ACTIONS(338),
    [anon_sym_RBRACE] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(338),
    [anon_sym_RBRACK] = ACTIONS(338),
    [anon_sym_PIPE] = ACTIONS(338),
    [anon_sym_defmodule] = ACTIONS(338),
    [anon_sym_end] = ACTIONS(338),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(338),
    [sym_comment] = ACTIONS(39),
  },
  [77] = {
    [sym_charlist] = STATE(17),
    [sym_binary_segment] = STATE(53),
    [sym_string] = STATE(17),
    [sym_integer] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(39),
  },
  [78] = {
    [sym_keyword] = STATE(68),
    [aux_sym_SLASH_BSLASHw_PLUS_COLON_SLASH] = ACTIONS(81),
    [sym_comment] = ACTIONS(39),
  },
  [79] = {
    [aux_sym_keyword_list_repeat1] = STATE(94),
    [anon_sym_COMMA] = ACTIONS(290),
    [anon_sym_RBRACE] = ACTIONS(342),
    [sym_comment] = ACTIONS(39),
  },
  [80] = {
    [anon_sym_RBRACE] = ACTIONS(344),
    [sym_comment] = ACTIONS(39),
  },
  [81] = {
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
    [anon_sym_defmodule] = ACTIONS(346),
    [anon_sym_end] = ACTIONS(346),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(346),
    [sym_comment] = ACTIONS(39),
  },
  [82] = {
    [anon_sym_COMMA] = ACTIONS(350),
    [anon_sym_RBRACE] = ACTIONS(344),
    [sym_comment] = ACTIONS(39),
  },
  [83] = {
    [sym__expression] = STATE(57),
    [sym__value] = STATE(57),
    [sym_true] = STATE(57),
    [sym_false] = STATE(57),
    [sym_atom] = STATE(57),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(57),
    [sym_charlist] = STATE(57),
    [sym_binary] = STATE(57),
    [sym_string] = STATE(57),
    [sym_tuple] = STATE(57),
    [sym_list] = STATE(57),
    [sym__empty_list] = STATE(13),
    [sym__simple_list] = STATE(13),
    [sym__head_tail_list] = STATE(13),
    [sym_keyword_list] = STATE(57),
    [sym_module] = STATE(57),
    [sym_alias] = ACTIONS(239),
    [sym_integer] = ACTIONS(237),
    [sym_float] = ACTIONS(239),
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
    [anon_sym_defmodule] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [84] = {
    [aux_sym_keyword_list_repeat1] = STATE(70),
    [anon_sym_COMMA] = ACTIONS(290),
    [anon_sym_RBRACK] = ACTIONS(342),
    [sym_comment] = ACTIONS(39),
  },
  [85] = {
    [anon_sym_RBRACK] = ACTIONS(352),
    [sym_comment] = ACTIONS(39),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(354),
    [sym_alias] = ACTIONS(354),
    [sym_integer] = ACTIONS(356),
    [sym_float] = ACTIONS(354),
    [anon_sym_true] = ACTIONS(354),
    [anon_sym_COLONtrue] = ACTIONS(356),
    [anon_sym_false] = ACTIONS(354),
    [anon_sym_COLONfalse] = ACTIONS(356),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(356),
    [anon_sym_COLON_BANG] = ACTIONS(356),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(356),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(354),
    [anon_sym_COLON_AMP] = ACTIONS(356),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(356),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(354),
    [anon_sym_COLON_STAR] = ACTIONS(354),
    [anon_sym_COLON_PLUS] = ACTIONS(356),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(354),
    [anon_sym_COLON_DASH] = ACTIONS(356),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(354),
    [anon_sym_COLON_DOT] = ACTIONS(356),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(354),
    [anon_sym_COLON_SLASH] = ACTIONS(354),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(354),
    [anon_sym_COLON_LT] = ACTIONS(356),
    [anon_sym_COLON_LT_DASH] = ACTIONS(354),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(354),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(354),
    [anon_sym_COLON_LT_EQ] = ACTIONS(354),
    [anon_sym_COLON_LT_GT] = ACTIONS(354),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(354),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(356),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(354),
    [anon_sym_COLON_EQ] = ACTIONS(356),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(356),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(354),
    [anon_sym_COLON_EQ_GT] = ACTIONS(354),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(354),
    [anon_sym_COLON_GT] = ACTIONS(356),
    [anon_sym_COLON_GT_EQ] = ACTIONS(354),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(354),
    [anon_sym_COLON_AT] = ACTIONS(354),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(354),
    [anon_sym_COLON_CARET] = ACTIONS(354),
    [anon_sym_COLON_PIPE] = ACTIONS(356),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(354),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(356),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(354),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(356),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(354),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(354),
    [anon_sym_nil] = ACTIONS(354),
    [anon_sym_COLONnil] = ACTIONS(356),
    [anon_sym_SQUOTE] = ACTIONS(354),
    [anon_sym_LT_LT] = ACTIONS(354),
    [anon_sym_COMMA] = ACTIONS(354),
    [anon_sym_DQUOTE] = ACTIONS(354),
    [anon_sym_LBRACE] = ACTIONS(354),
    [anon_sym_RBRACE] = ACTIONS(354),
    [anon_sym_LBRACK] = ACTIONS(354),
    [anon_sym_RBRACK] = ACTIONS(354),
    [anon_sym_PIPE] = ACTIONS(354),
    [anon_sym_defmodule] = ACTIONS(354),
    [anon_sym_end] = ACTIONS(354),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(354),
    [sym_comment] = ACTIONS(39),
  },
  [87] = {
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_RBRACK] = ACTIONS(352),
    [sym_comment] = ACTIONS(39),
  },
  [88] = {
    [ts_builtin_sym_end] = ACTIONS(360),
    [sym_alias] = ACTIONS(360),
    [sym_integer] = ACTIONS(362),
    [sym_float] = ACTIONS(360),
    [anon_sym_true] = ACTIONS(360),
    [anon_sym_COLONtrue] = ACTIONS(362),
    [anon_sym_false] = ACTIONS(360),
    [anon_sym_COLONfalse] = ACTIONS(362),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(362),
    [anon_sym_COLON_BANG] = ACTIONS(362),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(362),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(360),
    [anon_sym_COLON_AMP] = ACTIONS(362),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(362),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(360),
    [anon_sym_COLON_STAR] = ACTIONS(360),
    [anon_sym_COLON_PLUS] = ACTIONS(362),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(360),
    [anon_sym_COLON_DASH] = ACTIONS(362),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(360),
    [anon_sym_COLON_DOT] = ACTIONS(362),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(360),
    [anon_sym_COLON_SLASH] = ACTIONS(360),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(360),
    [anon_sym_COLON_LT] = ACTIONS(362),
    [anon_sym_COLON_LT_DASH] = ACTIONS(360),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(360),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(360),
    [anon_sym_COLON_LT_EQ] = ACTIONS(360),
    [anon_sym_COLON_LT_GT] = ACTIONS(360),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(360),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(362),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(360),
    [anon_sym_COLON_EQ] = ACTIONS(362),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(362),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(360),
    [anon_sym_COLON_EQ_GT] = ACTIONS(360),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(360),
    [anon_sym_COLON_GT] = ACTIONS(362),
    [anon_sym_COLON_GT_EQ] = ACTIONS(360),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(360),
    [anon_sym_COLON_AT] = ACTIONS(360),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(360),
    [anon_sym_COLON_CARET] = ACTIONS(360),
    [anon_sym_COLON_PIPE] = ACTIONS(362),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(360),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(362),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(360),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(362),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(360),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(360),
    [anon_sym_nil] = ACTIONS(360),
    [anon_sym_COLONnil] = ACTIONS(362),
    [anon_sym_SQUOTE] = ACTIONS(360),
    [anon_sym_LT_LT] = ACTIONS(360),
    [anon_sym_COMMA] = ACTIONS(360),
    [anon_sym_DQUOTE] = ACTIONS(360),
    [anon_sym_LBRACE] = ACTIONS(360),
    [anon_sym_RBRACE] = ACTIONS(360),
    [anon_sym_LBRACK] = ACTIONS(360),
    [anon_sym_RBRACK] = ACTIONS(360),
    [anon_sym_PIPE] = ACTIONS(360),
    [anon_sym_defmodule] = ACTIONS(360),
    [anon_sym_end] = ACTIONS(360),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(360),
    [sym_comment] = ACTIONS(39),
  },
  [89] = {
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
    [anon_sym_defmodule] = ACTIONS(364),
    [anon_sym_end] = ACTIONS(364),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(364),
    [sym_comment] = ACTIONS(39),
  },
  [90] = {
    [anon_sym_end] = ACTIONS(368),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(368),
    [sym_comment] = ACTIONS(39),
  },
  [91] = {
    [aux_sym_keyword_list_repeat1] = STATE(99),
    [anon_sym_COMMA] = ACTIONS(290),
    [anon_sym_end] = ACTIONS(292),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(292),
    [sym_comment] = ACTIONS(39),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(370),
    [sym_alias] = ACTIONS(370),
    [sym_integer] = ACTIONS(372),
    [sym_float] = ACTIONS(370),
    [anon_sym_true] = ACTIONS(370),
    [anon_sym_COLONtrue] = ACTIONS(372),
    [anon_sym_false] = ACTIONS(370),
    [anon_sym_COLONfalse] = ACTIONS(372),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(372),
    [anon_sym_COLON_BANG] = ACTIONS(372),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(372),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(370),
    [anon_sym_COLON_AMP] = ACTIONS(372),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(372),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(370),
    [anon_sym_COLON_STAR] = ACTIONS(370),
    [anon_sym_COLON_PLUS] = ACTIONS(372),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(370),
    [anon_sym_COLON_DASH] = ACTIONS(372),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(370),
    [anon_sym_COLON_DOT] = ACTIONS(372),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(370),
    [anon_sym_COLON_SLASH] = ACTIONS(370),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(370),
    [anon_sym_COLON_LT] = ACTIONS(372),
    [anon_sym_COLON_LT_DASH] = ACTIONS(370),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(370),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(370),
    [anon_sym_COLON_LT_EQ] = ACTIONS(370),
    [anon_sym_COLON_LT_GT] = ACTIONS(370),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(370),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(372),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(370),
    [anon_sym_COLON_EQ] = ACTIONS(372),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(372),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(370),
    [anon_sym_COLON_EQ_GT] = ACTIONS(370),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(370),
    [anon_sym_COLON_GT] = ACTIONS(372),
    [anon_sym_COLON_GT_EQ] = ACTIONS(370),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(370),
    [anon_sym_COLON_AT] = ACTIONS(370),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(370),
    [anon_sym_COLON_CARET] = ACTIONS(370),
    [anon_sym_COLON_PIPE] = ACTIONS(372),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(370),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(372),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(370),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(372),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(370),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(370),
    [anon_sym_nil] = ACTIONS(370),
    [anon_sym_COLONnil] = ACTIONS(372),
    [anon_sym_SQUOTE] = ACTIONS(370),
    [anon_sym_LT_LT] = ACTIONS(370),
    [anon_sym_COMMA] = ACTIONS(370),
    [anon_sym_DQUOTE] = ACTIONS(370),
    [anon_sym_LBRACE] = ACTIONS(370),
    [anon_sym_RBRACE] = ACTIONS(370),
    [anon_sym_LBRACK] = ACTIONS(370),
    [anon_sym_RBRACK] = ACTIONS(370),
    [anon_sym_PIPE] = ACTIONS(370),
    [anon_sym_defmodule] = ACTIONS(370),
    [anon_sym_end] = ACTIONS(370),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(370),
    [sym_comment] = ACTIONS(39),
  },
  [93] = {
    [sym_module_attribute] = STATE(93),
    [aux_sym_module_repeat1] = STATE(93),
    [anon_sym_end] = ACTIONS(374),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(376),
    [sym_comment] = ACTIONS(39),
  },
  [94] = {
    [aux_sym_keyword_list_repeat1] = STATE(94),
    [anon_sym_COMMA] = ACTIONS(317),
    [anon_sym_RBRACE] = ACTIONS(313),
    [sym_comment] = ACTIONS(39),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(379),
    [sym_alias] = ACTIONS(379),
    [sym_integer] = ACTIONS(381),
    [sym_float] = ACTIONS(379),
    [anon_sym_true] = ACTIONS(379),
    [anon_sym_COLONtrue] = ACTIONS(381),
    [anon_sym_false] = ACTIONS(379),
    [anon_sym_COLONfalse] = ACTIONS(381),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(381),
    [anon_sym_COLON_BANG] = ACTIONS(381),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(381),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(379),
    [anon_sym_COLON_AMP] = ACTIONS(381),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(381),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(379),
    [anon_sym_COLON_STAR] = ACTIONS(379),
    [anon_sym_COLON_PLUS] = ACTIONS(381),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(379),
    [anon_sym_COLON_DASH] = ACTIONS(381),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(379),
    [anon_sym_COLON_DOT] = ACTIONS(381),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(379),
    [anon_sym_COLON_SLASH] = ACTIONS(379),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(379),
    [anon_sym_COLON_LT] = ACTIONS(381),
    [anon_sym_COLON_LT_DASH] = ACTIONS(379),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(379),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(379),
    [anon_sym_COLON_LT_EQ] = ACTIONS(379),
    [anon_sym_COLON_LT_GT] = ACTIONS(379),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(379),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(381),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(379),
    [anon_sym_COLON_EQ] = ACTIONS(381),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(381),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(379),
    [anon_sym_COLON_EQ_GT] = ACTIONS(379),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(379),
    [anon_sym_COLON_GT] = ACTIONS(381),
    [anon_sym_COLON_GT_EQ] = ACTIONS(379),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(379),
    [anon_sym_COLON_AT] = ACTIONS(379),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(379),
    [anon_sym_COLON_CARET] = ACTIONS(379),
    [anon_sym_COLON_PIPE] = ACTIONS(381),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(379),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(381),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(379),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(381),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(379),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(379),
    [anon_sym_nil] = ACTIONS(379),
    [anon_sym_COLONnil] = ACTIONS(381),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_LT_LT] = ACTIONS(379),
    [anon_sym_COMMA] = ACTIONS(379),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(379),
    [anon_sym_RBRACE] = ACTIONS(379),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_RBRACK] = ACTIONS(379),
    [anon_sym_PIPE] = ACTIONS(379),
    [anon_sym_defmodule] = ACTIONS(379),
    [anon_sym_end] = ACTIONS(379),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(379),
    [sym_comment] = ACTIONS(39),
  },
  [96] = {
    [anon_sym_RBRACE] = ACTIONS(383),
    [sym_comment] = ACTIONS(39),
  },
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(385),
    [sym_alias] = ACTIONS(385),
    [sym_integer] = ACTIONS(387),
    [sym_float] = ACTIONS(385),
    [anon_sym_true] = ACTIONS(385),
    [anon_sym_COLONtrue] = ACTIONS(387),
    [anon_sym_false] = ACTIONS(385),
    [anon_sym_COLONfalse] = ACTIONS(387),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(387),
    [anon_sym_COLON_BANG] = ACTIONS(387),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(387),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(385),
    [anon_sym_COLON_AMP] = ACTIONS(387),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(387),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(385),
    [anon_sym_COLON_STAR] = ACTIONS(385),
    [anon_sym_COLON_PLUS] = ACTIONS(387),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(385),
    [anon_sym_COLON_DASH] = ACTIONS(387),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(385),
    [anon_sym_COLON_DOT] = ACTIONS(387),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(385),
    [anon_sym_COLON_SLASH] = ACTIONS(385),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(385),
    [anon_sym_COLON_LT] = ACTIONS(387),
    [anon_sym_COLON_LT_DASH] = ACTIONS(385),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(385),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(385),
    [anon_sym_COLON_LT_EQ] = ACTIONS(385),
    [anon_sym_COLON_LT_GT] = ACTIONS(385),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(385),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(387),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(385),
    [anon_sym_COLON_EQ] = ACTIONS(387),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(387),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(385),
    [anon_sym_COLON_EQ_GT] = ACTIONS(385),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(385),
    [anon_sym_COLON_GT] = ACTIONS(387),
    [anon_sym_COLON_GT_EQ] = ACTIONS(385),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(385),
    [anon_sym_COLON_AT] = ACTIONS(385),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(385),
    [anon_sym_COLON_CARET] = ACTIONS(385),
    [anon_sym_COLON_PIPE] = ACTIONS(387),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(385),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(387),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(387),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(385),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(385),
    [anon_sym_nil] = ACTIONS(385),
    [anon_sym_COLONnil] = ACTIONS(387),
    [anon_sym_SQUOTE] = ACTIONS(385),
    [anon_sym_LT_LT] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(385),
    [anon_sym_DQUOTE] = ACTIONS(385),
    [anon_sym_LBRACE] = ACTIONS(385),
    [anon_sym_RBRACE] = ACTIONS(385),
    [anon_sym_LBRACK] = ACTIONS(385),
    [anon_sym_RBRACK] = ACTIONS(385),
    [anon_sym_PIPE] = ACTIONS(385),
    [anon_sym_defmodule] = ACTIONS(385),
    [anon_sym_end] = ACTIONS(385),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(385),
    [sym_comment] = ACTIONS(39),
  },
  [98] = {
    [anon_sym_RBRACK] = ACTIONS(389),
    [sym_comment] = ACTIONS(39),
  },
  [99] = {
    [aux_sym_keyword_list_repeat1] = STATE(102),
    [anon_sym_COMMA] = ACTIONS(290),
    [anon_sym_end] = ACTIONS(342),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(342),
    [sym_comment] = ACTIONS(39),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(391),
    [sym_alias] = ACTIONS(391),
    [sym_integer] = ACTIONS(393),
    [sym_float] = ACTIONS(391),
    [anon_sym_true] = ACTIONS(391),
    [anon_sym_COLONtrue] = ACTIONS(393),
    [anon_sym_false] = ACTIONS(391),
    [anon_sym_COLONfalse] = ACTIONS(393),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(393),
    [anon_sym_COLON_BANG] = ACTIONS(393),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(393),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(391),
    [anon_sym_COLON_AMP] = ACTIONS(393),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(393),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(391),
    [anon_sym_COLON_STAR] = ACTIONS(391),
    [anon_sym_COLON_PLUS] = ACTIONS(393),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(391),
    [anon_sym_COLON_DASH] = ACTIONS(393),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(391),
    [anon_sym_COLON_DOT] = ACTIONS(393),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(391),
    [anon_sym_COLON_SLASH] = ACTIONS(391),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(391),
    [anon_sym_COLON_LT] = ACTIONS(393),
    [anon_sym_COLON_LT_DASH] = ACTIONS(391),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(391),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(391),
    [anon_sym_COLON_LT_EQ] = ACTIONS(391),
    [anon_sym_COLON_LT_GT] = ACTIONS(391),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(391),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(393),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(391),
    [anon_sym_COLON_EQ] = ACTIONS(393),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(393),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(391),
    [anon_sym_COLON_EQ_GT] = ACTIONS(391),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(391),
    [anon_sym_COLON_GT] = ACTIONS(393),
    [anon_sym_COLON_GT_EQ] = ACTIONS(391),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(391),
    [anon_sym_COLON_AT] = ACTIONS(391),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(391),
    [anon_sym_COLON_CARET] = ACTIONS(391),
    [anon_sym_COLON_PIPE] = ACTIONS(393),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(391),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(393),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(391),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(393),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(391),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(391),
    [anon_sym_nil] = ACTIONS(391),
    [anon_sym_COLONnil] = ACTIONS(393),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [anon_sym_LT_LT] = ACTIONS(391),
    [anon_sym_COMMA] = ACTIONS(391),
    [anon_sym_DQUOTE] = ACTIONS(391),
    [anon_sym_LBRACE] = ACTIONS(391),
    [anon_sym_RBRACE] = ACTIONS(391),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_RBRACK] = ACTIONS(391),
    [anon_sym_PIPE] = ACTIONS(391),
    [anon_sym_defmodule] = ACTIONS(391),
    [anon_sym_end] = ACTIONS(391),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(391),
    [sym_comment] = ACTIONS(39),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(395),
    [sym_alias] = ACTIONS(395),
    [sym_integer] = ACTIONS(397),
    [sym_float] = ACTIONS(395),
    [anon_sym_true] = ACTIONS(395),
    [anon_sym_COLONtrue] = ACTIONS(397),
    [anon_sym_false] = ACTIONS(395),
    [anon_sym_COLONfalse] = ACTIONS(397),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(397),
    [anon_sym_COLON_BANG] = ACTIONS(397),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(397),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(395),
    [anon_sym_COLON_AMP] = ACTIONS(397),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(397),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(395),
    [anon_sym_COLON_STAR] = ACTIONS(395),
    [anon_sym_COLON_PLUS] = ACTIONS(397),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(395),
    [anon_sym_COLON_DASH] = ACTIONS(397),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(395),
    [anon_sym_COLON_DOT] = ACTIONS(397),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(395),
    [anon_sym_COLON_SLASH] = ACTIONS(395),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(395),
    [anon_sym_COLON_LT] = ACTIONS(397),
    [anon_sym_COLON_LT_DASH] = ACTIONS(395),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(395),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(395),
    [anon_sym_COLON_LT_EQ] = ACTIONS(395),
    [anon_sym_COLON_LT_GT] = ACTIONS(395),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(395),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(397),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(395),
    [anon_sym_COLON_EQ] = ACTIONS(397),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(397),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(395),
    [anon_sym_COLON_EQ_GT] = ACTIONS(395),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(395),
    [anon_sym_COLON_GT] = ACTIONS(397),
    [anon_sym_COLON_GT_EQ] = ACTIONS(395),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(395),
    [anon_sym_COLON_AT] = ACTIONS(395),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(395),
    [anon_sym_COLON_CARET] = ACTIONS(395),
    [anon_sym_COLON_PIPE] = ACTIONS(397),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(395),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(397),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(395),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(397),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(395),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(395),
    [anon_sym_nil] = ACTIONS(395),
    [anon_sym_COLONnil] = ACTIONS(397),
    [anon_sym_SQUOTE] = ACTIONS(395),
    [anon_sym_LT_LT] = ACTIONS(395),
    [anon_sym_COMMA] = ACTIONS(395),
    [anon_sym_DQUOTE] = ACTIONS(395),
    [anon_sym_LBRACE] = ACTIONS(395),
    [anon_sym_RBRACE] = ACTIONS(395),
    [anon_sym_LBRACK] = ACTIONS(395),
    [anon_sym_RBRACK] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(395),
    [anon_sym_defmodule] = ACTIONS(395),
    [anon_sym_end] = ACTIONS(395),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(395),
    [sym_comment] = ACTIONS(39),
  },
  [102] = {
    [aux_sym_keyword_list_repeat1] = STATE(102),
    [anon_sym_COMMA] = ACTIONS(317),
    [anon_sym_end] = ACTIONS(313),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(313),
    [sym_comment] = ACTIONS(39),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(14),
  [9] = {.count = 1, .reusable = false}, SHIFT(14),
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
  [39] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_true, 1),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym_true, 1),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_false, 1),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym_false, 1),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 1),
  [51] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 1),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_nil, 1),
  [55] = {.count = 1, .reusable = false}, REDUCE(sym_nil, 1),
  [57] = {.count = 1, .reusable = false}, SHIFT(15),
  [59] = {.count = 1, .reusable = false}, SHIFT(16),
  [61] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [63] = {.count = 1, .reusable = true}, SHIFT(17),
  [65] = {.count = 1, .reusable = true}, SHIFT(18),
  [67] = {.count = 1, .reusable = false}, SHIFT(20),
  [69] = {.count = 1, .reusable = false}, SHIFT(21),
  [71] = {.count = 1, .reusable = true}, SHIFT(23),
  [73] = {.count = 1, .reusable = false}, SHIFT(23),
  [75] = {.count = 1, .reusable = true}, SHIFT(22),
  [77] = {.count = 1, .reusable = false}, SHIFT(26),
  [79] = {.count = 1, .reusable = true}, SHIFT(26),
  [81] = {.count = 1, .reusable = true}, SHIFT(24),
  [83] = {.count = 1, .reusable = true}, SHIFT(25),
  [85] = {.count = 1, .reusable = false}, SHIFT(11),
  [87] = {.count = 1, .reusable = true}, SHIFT(29),
  [89] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_list, 1),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_list, 1),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [97] = {.count = 1, .reusable = true}, SHIFT(30),
  [99] = {.count = 1, .reusable = false}, SHIFT(30),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_charlist, 2),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym_charlist, 2),
  [105] = {.count = 1, .reusable = false}, SHIFT(31),
  [107] = {.count = 1, .reusable = false}, SHIFT(32),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_binary_segment, 1),
  [111] = {.count = 1, .reusable = true}, SHIFT(33),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 2),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 2),
  [117] = {.count = 1, .reusable = true}, SHIFT(34),
  [119] = {.count = 1, .reusable = true}, SHIFT(35),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [125] = {.count = 1, .reusable = false}, SHIFT(37),
  [127] = {.count = 1, .reusable = false}, SHIFT(38),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 2),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 2),
  [133] = {.count = 1, .reusable = true}, SHIFT(39),
  [135] = {.count = 1, .reusable = true}, SHIFT(40),
  [137] = {.count = 1, .reusable = true}, SHIFT(42),
  [139] = {.count = 1, .reusable = false}, SHIFT(42),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym__empty_list, 2),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym__empty_list, 2),
  [145] = {.count = 1, .reusable = true}, SHIFT(43),
  [147] = {.count = 1, .reusable = true}, SHIFT(44),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_head, 1),
  [151] = {.count = 1, .reusable = true}, SHIFT(46),
  [153] = {.count = 1, .reusable = true}, SHIFT(47),
  [155] = {.count = 1, .reusable = true}, SHIFT(49),
  [157] = {.count = 1, .reusable = true}, SHIFT(50),
  [159] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [161] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(30),
  [164] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(30),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [170] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [173] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [176] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [179] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [182] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [185] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [188] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [191] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [194] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [197] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [200] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [203] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [206] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_charlist, 3),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_charlist, 3),
  [213] = {.count = 1, .reusable = false}, REDUCE(aux_sym_charlist_repeat1, 2),
  [215] = {.count = 2, .reusable = false}, REDUCE(aux_sym_charlist_repeat1, 2), SHIFT_REPEAT(32),
  [218] = {.count = 1, .reusable = true}, SHIFT(51),
  [220] = {.count = 1, .reusable = true}, SHIFT(52),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 3),
  [224] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 3),
  [226] = {.count = 1, .reusable = true}, SHIFT(54),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [230] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [232] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2),
  [234] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(38),
  [237] = {.count = 1, .reusable = false}, SHIFT(57),
  [239] = {.count = 1, .reusable = true}, SHIFT(57),
  [241] = {.count = 1, .reusable = true}, SHIFT(56),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 3),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 3),
  [247] = {.count = 1, .reusable = true}, SHIFT(60),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_keyword, 2),
  [251] = {.count = 1, .reusable = true}, SHIFT(62),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 3),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 3),
  [257] = {.count = 1, .reusable = true}, SHIFT(65),
  [259] = {.count = 1, .reusable = true}, SHIFT(67),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_keyword_list, 3),
  [263] = {.count = 1, .reusable = false}, REDUCE(sym_keyword_list, 3),
  [265] = {.count = 1, .reusable = true}, SHIFT(69),
  [267] = {.count = 1, .reusable = true}, SHIFT(73),
  [269] = {.count = 1, .reusable = true}, SHIFT(74),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_binary_segment, 3),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 4),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 4),
  [277] = {.count = 1, .reusable = true}, REDUCE(aux_sym_binary_repeat1, 2),
  [279] = {.count = 1, .reusable = true}, SHIFT(76),
  [281] = {.count = 2, .reusable = true}, REDUCE(aux_sym_binary_repeat1, 2), SHIFT_REPEAT(77),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 4),
  [286] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 4),
  [288] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [290] = {.count = 1, .reusable = true}, SHIFT(78),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym_implicit_keyword_list, 1),
  [294] = {.count = 1, .reusable = true}, SHIFT(80),
  [296] = {.count = 1, .reusable = true}, SHIFT(81),
  [298] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(83),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 4),
  [303] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 4),
  [305] = {.count = 1, .reusable = true}, SHIFT(85),
  [307] = {.count = 1, .reusable = true}, SHIFT(86),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_keyword_list, 4),
  [311] = {.count = 1, .reusable = false}, REDUCE(sym_keyword_list, 4),
  [313] = {.count = 1, .reusable = true}, REDUCE(aux_sym_keyword_list_repeat1, 2),
  [315] = {.count = 1, .reusable = true}, SHIFT(88),
  [317] = {.count = 2, .reusable = true}, REDUCE(aux_sym_keyword_list_repeat1, 2), SHIFT_REPEAT(78),
  [320] = {.count = 1, .reusable = true}, REDUCE(sym_tail, 1),
  [322] = {.count = 1, .reusable = true}, SHIFT(89),
  [324] = {.count = 1, .reusable = true}, REDUCE(sym_module, 4),
  [326] = {.count = 1, .reusable = false}, REDUCE(sym_module, 4),
  [328] = {.count = 1, .reusable = false}, SHIFT(90),
  [330] = {.count = 1, .reusable = true}, SHIFT(90),
  [332] = {.count = 1, .reusable = false}, REDUCE(sym_module_attribute, 1),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym_module_attribute, 1),
  [336] = {.count = 1, .reusable = true}, SHIFT(92),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 5),
  [340] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 5),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym_implicit_keyword_list, 2),
  [344] = {.count = 1, .reusable = true}, SHIFT(95),
  [346] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 5),
  [348] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 5),
  [350] = {.count = 1, .reusable = true}, SHIFT(96),
  [352] = {.count = 1, .reusable = true}, SHIFT(97),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 5),
  [356] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 5),
  [358] = {.count = 1, .reusable = true}, SHIFT(98),
  [360] = {.count = 1, .reusable = true}, REDUCE(sym_keyword_list, 5),
  [362] = {.count = 1, .reusable = false}, REDUCE(sym_keyword_list, 5),
  [364] = {.count = 1, .reusable = true}, REDUCE(sym__head_tail_list, 5),
  [366] = {.count = 1, .reusable = false}, REDUCE(sym__head_tail_list, 5),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym_module_attribute, 2),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym_module, 5),
  [372] = {.count = 1, .reusable = false}, REDUCE(sym_module, 5),
  [374] = {.count = 1, .reusable = true}, REDUCE(aux_sym_module_repeat1, 2),
  [376] = {.count = 2, .reusable = true}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(74),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 6),
  [381] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 6),
  [383] = {.count = 1, .reusable = true}, SHIFT(100),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 6),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 6),
  [389] = {.count = 1, .reusable = true}, SHIFT(101),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 7),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 7),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 7),
  [397] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 7),
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
