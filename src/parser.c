#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 71
#define SYMBOL_COUNT 98
#define ALIAS_COUNT 0
#define TOKEN_COUNT 72
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
  anon_sym_nil = 51,
  anon_sym_COLONnil = 52,
  anon_sym_SQUOTE = 53,
  aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH = 54,
  anon_sym_LT_LT = 55,
  anon_sym_COMMA = 56,
  anon_sym_GT_GT = 57,
  anon_sym_COLON_COLON = 58,
  sym_binary_options = 59,
  anon_sym_DQUOTE = 60,
  aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH = 61,
  anon_sym_LBRACE = 62,
  anon_sym_RBRACE = 63,
  anon_sym_LBRACK = 64,
  anon_sym_RBRACK = 65,
  anon_sym_PIPE = 66,
  anon_sym_defmodule = 67,
  anon_sym_do = 68,
  anon_sym_end = 69,
  aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH = 70,
  sym_comment = 71,
  sym_program = 72,
  sym__expression = 73,
  sym__value = 74,
  sym_true = 75,
  sym_false = 76,
  sym_atom = 77,
  sym__operator_atom = 78,
  sym_nil = 79,
  sym_charlist = 80,
  sym_binary = 81,
  sym_binary_segment = 82,
  sym_string = 83,
  sym_tuple = 84,
  sym_list = 85,
  sym__simple_list = 86,
  sym__head_tail_list = 87,
  sym_head = 88,
  sym_tail = 89,
  sym_module = 90,
  sym_module_attribute = 91,
  aux_sym_program_repeat1 = 92,
  aux_sym_charlist_repeat1 = 93,
  aux_sym_binary_repeat1 = 94,
  aux_sym_string_repeat1 = 95,
  aux_sym_tuple_repeat1 = 96,
  aux_sym_module_repeat1 = 97,
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
  [sym_nil] = "nil",
  [sym_charlist] = "charlist",
  [sym_binary] = "binary",
  [sym_binary_segment] = "binary_segment",
  [sym_string] = "string",
  [sym_tuple] = "tuple",
  [sym_list] = "list",
  [sym__simple_list] = "_simple_list",
  [sym__head_tail_list] = "_head_tail_list",
  [sym_head] = "head",
  [sym_tail] = "tail",
  [sym_module] = "module",
  [sym_module_attribute] = "module_attribute",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_charlist_repeat1] = "charlist_repeat1",
  [aux_sym_binary_repeat1] = "binary_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
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
        ADVANCE(20);
      if (lookahead == '<')
        ADVANCE(88);
      if (lookahead == '>')
        ADVANCE(90);
      if (lookahead == '@')
        ADVANCE(92);
      if (lookahead == '[')
        ADVANCE(94);
      if (lookahead == '\\')
        SKIP(95);
      if (lookahead == ']')
        ADVANCE(96);
      if (lookahead == 'd')
        ADVANCE(97);
      if (lookahead == 'e')
        ADVANCE(107);
      if (lookahead == 'f')
        ADVANCE(110);
      if (lookahead == 'n')
        ADVANCE(115);
      if (lookahead == 't')
        ADVANCE(118);
      if (lookahead == '{')
        ADVANCE(122);
      if (lookahead == '|')
        ADVANCE(123);
      if (lookahead == '}')
        ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(125);
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
      if (lookahead == '_')
        ADVANCE(12);
      if (lookahead == 'b')
        ADVANCE(14);
      if (lookahead == 'o')
        ADVANCE(16);
      if (lookahead == 'x')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
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
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == '_')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(14);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(15);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(17);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '!')
        ADVANCE(21);
      if (lookahead == '\"')
        ADVANCE(24);
      if (lookahead == '&')
        ADVANCE(26);
      if (lookahead == '\'')
        ADVANCE(29);
      if (lookahead == '*')
        ADVANCE(31);
      if (lookahead == '+')
        ADVANCE(32);
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == '/')
        ADVANCE(38);
      if (lookahead == ':')
        ADVANCE(39);
      if (lookahead == '<')
        ADVANCE(41);
      if (lookahead == '=')
        ADVANCE(52);
      if (lookahead == '>')
        ADVANCE(57);
      if (lookahead == '@')
        ADVANCE(61);
      if (lookahead == '\\')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(64);
      if (lookahead == 'f')
        ADVANCE(65);
      if (lookahead == 'n')
        ADVANCE(72);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(79);
      if (lookahead == '~')
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COLON_BANG);
      if (lookahead == '=')
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COLON_BANG_EQ);
      if (lookahead == '=')
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COLON_BANG_EQ_EQ);
      END_STATE();
    case 24:
      if (lookahead == '\"')
        ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '\"')
        ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON_AMP);
      if (lookahead == '&')
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLON_AMP_AMP);
      if (lookahead == '&')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON_AMP_AMP_AMP);
      END_STATE();
    case 29:
      if (lookahead == '\'')
        ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '\'')
        ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(29);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COLON_STAR);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      if (lookahead == '+')
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS_PLUS);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      if (lookahead == '-')
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON_DASH_DASH);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COLON_DOT);
      if (lookahead == '.')
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COLON_DOT_DOT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == ':')
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_COLON);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLON_LT);
      if (lookahead == '-')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(46);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '|')
        ADVANCE(48);
      if (lookahead == '~')
        ADVANCE(50);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLON_LT_DASH);
      END_STATE();
    case 43:
      if (lookahead == '<')
        ADVANCE(44);
      if (lookahead == '~')
        ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON_LT_LT_LT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLON_LT_LT_TILDE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COLON_LT_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COLON_LT_GT);
      END_STATE();
    case 48:
      if (lookahead == '>')
        ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON_LT_PIPE_GT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COLON_LT_TILDE);
      if (lookahead == '>')
        ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COLON_LT_TILDE_GT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      if (lookahead == '=')
        ADVANCE(53);
      if (lookahead == '>')
        ADVANCE(55);
      if (lookahead == '~')
        ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLON_EQ_EQ);
      if (lookahead == '=')
        ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COLON_EQ_EQ_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COLON_EQ_GT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COLON_EQ_TILDE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      if (lookahead == '=')
        ADVANCE(58);
      if (lookahead == '>')
        ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON_GT_EQ);
      END_STATE();
    case 59:
      if (lookahead == '>')
        ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_COLON_GT_GT_GT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COLON_AT);
      END_STATE();
    case 62:
      if (lookahead == '\\')
        ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COLON_BSLASH_BSLASH);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COLON_CARET);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(66);
      if (lookahead == '?')
        ADVANCE(66);
      if (lookahead == 'a')
        ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(66);
      if (lookahead == '?')
        ADVANCE(66);
      if (lookahead == 'l')
        ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(66);
      if (lookahead == '?')
        ADVANCE(66);
      if (lookahead == 's')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(66);
      if (lookahead == '?')
        ADVANCE(66);
      if (lookahead == 'e')
        ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COLONfalse);
      if (lookahead == '!')
        ADVANCE(66);
      if (lookahead == '?')
        ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(66);
      if (lookahead == '?')
        ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(66);
      if (lookahead == '?')
        ADVANCE(66);
      if (lookahead == 'i')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(66);
      if (lookahead == '?')
        ADVANCE(66);
      if (lookahead == 'l')
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COLONnil);
      if (lookahead == '!')
        ADVANCE(66);
      if (lookahead == '?')
        ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(66);
      if (lookahead == '?')
        ADVANCE(66);
      if (lookahead == 'r')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(66);
      if (lookahead == '?')
        ADVANCE(66);
      if (lookahead == 'u')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(66);
      if (lookahead == '?')
        ADVANCE(66);
      if (lookahead == 'e')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COLONtrue);
      if (lookahead == '!')
        ADVANCE(66);
      if (lookahead == '?')
        ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COLON_PIPE);
      if (lookahead == '>')
        ADVANCE(80);
      if (lookahead == '|')
        ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COLON_PIPE_GT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COLON_PIPE_PIPE);
      if (lookahead == '|')
        ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COLON_PIPE_PIPE_PIPE);
      END_STATE();
    case 83:
      if (lookahead == '>')
        ADVANCE(84);
      if (lookahead == '~')
        ADVANCE(86);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COLON_TILDE_GT);
      if (lookahead == '>')
        ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COLON_TILDE_GT_GT);
      END_STATE();
    case 86:
      if (lookahead == '~')
        ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COLON_TILDE_TILDE_TILDE);
      END_STATE();
    case 88:
      if (lookahead == '<')
        ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 90:
      if (lookahead == '>')
        ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 95:
      if (lookahead == '\n')
        SKIP(0);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 97:
      if (lookahead == 'e')
        ADVANCE(98);
      if (lookahead == 'o')
        ADVANCE(106);
      END_STATE();
    case 98:
      if (lookahead == 'f')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'm')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'o')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'd')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'u')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'l')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 'e')
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_defmodule);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 107:
      if (lookahead == 'n')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'd')
        ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 110:
      if (lookahead == 'a')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'l')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 's')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'e')
        ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 115:
      if (lookahead == 'i')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'l')
        ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 118:
      if (lookahead == 'r')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'u')
        ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 'e')
        ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead == '.')
        ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(125);
      END_STATE();
    case 126:
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(125);
      END_STATE();
    case 127:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '0')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(128);
      if (lookahead == '<')
        ADVANCE(88);
      if (lookahead == '[')
        ADVANCE(94);
      if (lookahead == '\\')
        SKIP(130);
      if (lookahead == 'd')
        ADVANCE(131);
      if (lookahead == 'f')
        ADVANCE(110);
      if (lookahead == 'n')
        ADVANCE(115);
      if (lookahead == 't')
        ADVANCE(118);
      if (lookahead == '{')
        ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(127);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(125);
      END_STATE();
    case 128:
      if (lookahead == '!')
        ADVANCE(21);
      if (lookahead == '\"')
        ADVANCE(24);
      if (lookahead == '&')
        ADVANCE(26);
      if (lookahead == '\'')
        ADVANCE(29);
      if (lookahead == '*')
        ADVANCE(31);
      if (lookahead == '+')
        ADVANCE(32);
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == '/')
        ADVANCE(38);
      if (lookahead == ':')
        ADVANCE(129);
      if (lookahead == '<')
        ADVANCE(41);
      if (lookahead == '=')
        ADVANCE(52);
      if (lookahead == '>')
        ADVANCE(57);
      if (lookahead == '@')
        ADVANCE(61);
      if (lookahead == '\\')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(64);
      if (lookahead == 'f')
        ADVANCE(65);
      if (lookahead == 'n')
        ADVANCE(72);
      if (lookahead == 't')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(79);
      if (lookahead == '~')
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 129:
      if (lookahead == ':')
        ADVANCE(40);
      END_STATE();
    case 130:
      if (lookahead == '\n')
        SKIP(127);
      END_STATE();
    case 131:
      if (lookahead == 'e')
        ADVANCE(98);
      END_STATE();
    case 132:
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
        ADVANCE(128);
      if (lookahead == '<')
        ADVANCE(88);
      if (lookahead == '@')
        ADVANCE(92);
      if (lookahead == '[')
        ADVANCE(94);
      if (lookahead == '\\')
        SKIP(133);
      if (lookahead == ']')
        ADVANCE(96);
      if (lookahead == 'd')
        ADVANCE(131);
      if (lookahead == 'e')
        ADVANCE(107);
      if (lookahead == 'f')
        ADVANCE(110);
      if (lookahead == 'n')
        ADVANCE(115);
      if (lookahead == 't')
        ADVANCE(118);
      if (lookahead == '{')
        ADVANCE(122);
      if (lookahead == '|')
        ADVANCE(123);
      if (lookahead == '}')
        ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(132);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(125);
      END_STATE();
    case 133:
      if (lookahead == '\n')
        SKIP(132);
      END_STATE();
    case 134:
      if (lookahead == '#')
        ADVANCE(135);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(137);
      if (lookahead != 0)
        ADVANCE(137);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead == '\'')
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      END_STATE();
    case 138:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '0')
        ADVANCE(139);
      if (lookahead == '>')
        ADVANCE(90);
      if (lookahead == '\\')
        SKIP(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(138);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(141);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(140);
      if (lookahead == 'b')
        ADVANCE(14);
      if (lookahead == 'o')
        ADVANCE(16);
      if (lookahead == 'x')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(141);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(141);
      END_STATE();
    case 142:
      if (lookahead == '\n')
        SKIP(138);
      END_STATE();
    case 143:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(144);
      if (lookahead == '\\')
        ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(146);
      if (lookahead != 0)
        ADVANCE(146);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 147:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '0')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(128);
      if (lookahead == '<')
        ADVANCE(88);
      if (lookahead == '[')
        ADVANCE(94);
      if (lookahead == '\\')
        SKIP(148);
      if (lookahead == 'd')
        ADVANCE(131);
      if (lookahead == 'f')
        ADVANCE(110);
      if (lookahead == 'n')
        ADVANCE(115);
      if (lookahead == 't')
        ADVANCE(118);
      if (lookahead == '{')
        ADVANCE(122);
      if (lookahead == '}')
        ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(147);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(125);
      END_STATE();
    case 148:
      if (lookahead == '\n')
        SKIP(147);
      END_STATE();
    case 149:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '0')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(128);
      if (lookahead == '<')
        ADVANCE(88);
      if (lookahead == '[')
        ADVANCE(94);
      if (lookahead == '\\')
        SKIP(150);
      if (lookahead == ']')
        ADVANCE(96);
      if (lookahead == 'd')
        ADVANCE(131);
      if (lookahead == 'f')
        ADVANCE(110);
      if (lookahead == 'n')
        ADVANCE(115);
      if (lookahead == 't')
        ADVANCE(118);
      if (lookahead == '{')
        ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(149);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(125);
      END_STATE();
    case 150:
      if (lookahead == '\n')
        SKIP(149);
      END_STATE();
    case 151:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(151);
      END_STATE();
    case 152:
      if (lookahead == '\n')
        SKIP(151);
      END_STATE();
    case 153:
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
        ADVANCE(20);
      if (lookahead == '<')
        ADVANCE(88);
      if (lookahead == '>')
        ADVANCE(90);
      if (lookahead == '@')
        ADVANCE(92);
      if (lookahead == '[')
        ADVANCE(94);
      if (lookahead == '\\')
        SKIP(154);
      if (lookahead == ']')
        ADVANCE(96);
      if (lookahead == 'd')
        ADVANCE(131);
      if (lookahead == 'e')
        ADVANCE(107);
      if (lookahead == 'f')
        ADVANCE(110);
      if (lookahead == 'n')
        ADVANCE(115);
      if (lookahead == 't')
        ADVANCE(118);
      if (lookahead == '{')
        ADVANCE(122);
      if (lookahead == '|')
        ADVANCE(123);
      if (lookahead == '}')
        ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(153);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(125);
      END_STATE();
    case 154:
      if (lookahead == '\n')
        SKIP(153);
      END_STATE();
    case 155:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(156);
      if (lookahead == '>')
        ADVANCE(90);
      if (lookahead == '\\')
        SKIP(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(155);
      END_STATE();
    case 156:
      if (lookahead == ':')
        ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 158:
      if (lookahead == '\n')
        SKIP(155);
      END_STATE();
    case 159:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == '\\')
        SKIP(160);
      if (lookahead == '}')
        ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(159);
      END_STATE();
    case 160:
      if (lookahead == '\n')
        SKIP(159);
      END_STATE();
    case 161:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == '\\')
        SKIP(162);
      if (lookahead == ']')
        ADVANCE(96);
      if (lookahead == '|')
        ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(161);
      END_STATE();
    case 162:
      if (lookahead == '\n')
        SKIP(161);
      END_STATE();
    case 163:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(164);
      if (lookahead == 'd')
        ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(163);
      END_STATE();
    case 164:
      if (lookahead == '\n')
        SKIP(163);
      END_STATE();
    case 165:
      if (lookahead == 'o')
        ADVANCE(106);
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
      if (lookahead == '@')
        ADVANCE(92);
      if (lookahead == '\\')
        SKIP(170);
      if (lookahead == 'e')
        ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(169);
      END_STATE();
    case 170:
      if (lookahead == '\n')
        SKIP(169);
      END_STATE();
    case 171:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == '\\')
        SKIP(172);
      if (lookahead == ']')
        ADVANCE(96);
      if (lookahead == '}')
        ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(171);
      END_STATE();
    case 172:
      if (lookahead == '\n')
        SKIP(171);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 127},
  [2] = {.lex_state = 132},
  [3] = {.lex_state = 132},
  [4] = {.lex_state = 132},
  [5] = {.lex_state = 132},
  [6] = {.lex_state = 134},
  [7] = {.lex_state = 138},
  [8] = {.lex_state = 143},
  [9] = {.lex_state = 147},
  [10] = {.lex_state = 149},
  [11] = {.lex_state = 127},
  [12] = {.lex_state = 151},
  [13] = {.lex_state = 132},
  [14] = {.lex_state = 127},
  [15] = {.lex_state = 153},
  [16] = {.lex_state = 134},
  [17] = {.lex_state = 155},
  [18] = {.lex_state = 132},
  [19] = {.lex_state = 155},
  [20] = {.lex_state = 153},
  [21] = {.lex_state = 143},
  [22] = {.lex_state = 132},
  [23] = {.lex_state = 159},
  [24] = {.lex_state = 132},
  [25] = {.lex_state = 161},
  [26] = {.lex_state = 161},
  [27] = {.lex_state = 163},
  [28] = {.lex_state = 127},
  [29] = {.lex_state = 153},
  [30] = {.lex_state = 134},
  [31] = {.lex_state = 166},
  [32] = {.lex_state = 138},
  [33] = {.lex_state = 132},
  [34] = {.lex_state = 155},
  [35] = {.lex_state = 153},
  [36] = {.lex_state = 143},
  [37] = {.lex_state = 147},
  [38] = {.lex_state = 132},
  [39] = {.lex_state = 159},
  [40] = {.lex_state = 149},
  [41] = {.lex_state = 132},
  [42] = {.lex_state = 161},
  [43] = {.lex_state = 127},
  [44] = {.lex_state = 169},
  [45] = {.lex_state = 155},
  [46] = {.lex_state = 132},
  [47] = {.lex_state = 155},
  [48] = {.lex_state = 138},
  [49] = {.lex_state = 155},
  [50] = {.lex_state = 132},
  [51] = {.lex_state = 171},
  [52] = {.lex_state = 147},
  [53] = {.lex_state = 159},
  [54] = {.lex_state = 132},
  [55] = {.lex_state = 149},
  [56] = {.lex_state = 161},
  [57] = {.lex_state = 149},
  [58] = {.lex_state = 149},
  [59] = {.lex_state = 132},
  [60] = {.lex_state = 127},
  [61] = {.lex_state = 169},
  [62] = {.lex_state = 132},
  [63] = {.lex_state = 127},
  [64] = {.lex_state = 132},
  [65] = {.lex_state = 127},
  [66] = {.lex_state = 132},
  [67] = {.lex_state = 132},
  [68] = {.lex_state = 169},
  [69] = {.lex_state = 132},
  [70] = {.lex_state = 169},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_alias] = ACTIONS(1),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_COLONtrue] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(1),
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
    [anon_sym_nil] = ACTIONS(1),
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
    [anon_sym_defmodule] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
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
    [sym__simple_list] = STATE(13),
    [sym__head_tail_list] = STATE(13),
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
    [sym__simple_list] = STATE(13),
    [sym__head_tail_list] = STATE(13),
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
    [sym_list] = STATE(25),
    [sym__simple_list] = STATE(13),
    [sym__head_tail_list] = STATE(13),
    [sym_head] = STATE(26),
    [sym_module] = STATE(25),
    [sym_alias] = ACTIONS(77),
    [sym_integer] = ACTIONS(79),
    [sym_float] = ACTIONS(77),
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
    [anon_sym_RBRACK] = ACTIONS(81),
    [anon_sym_defmodule] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [11] = {
    [sym_alias] = ACTIONS(83),
    [sym_comment] = ACTIONS(39),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [sym_comment] = ACTIONS(39),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_alias] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_float] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_COLONtrue] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(87),
    [anon_sym_COLONfalse] = ACTIONS(89),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(89),
    [anon_sym_COLON_BANG] = ACTIONS(89),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(89),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(87),
    [anon_sym_COLON_AMP] = ACTIONS(89),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(89),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(87),
    [anon_sym_COLON_STAR] = ACTIONS(87),
    [anon_sym_COLON_PLUS] = ACTIONS(89),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(87),
    [anon_sym_COLON_DASH] = ACTIONS(89),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(87),
    [anon_sym_COLON_DOT] = ACTIONS(89),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(87),
    [anon_sym_COLON_SLASH] = ACTIONS(87),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(87),
    [anon_sym_COLON_LT] = ACTIONS(89),
    [anon_sym_COLON_LT_DASH] = ACTIONS(87),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(87),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(87),
    [anon_sym_COLON_LT_EQ] = ACTIONS(87),
    [anon_sym_COLON_LT_GT] = ACTIONS(87),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(87),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(89),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(87),
    [anon_sym_COLON_EQ] = ACTIONS(89),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(89),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(87),
    [anon_sym_COLON_EQ_GT] = ACTIONS(87),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(87),
    [anon_sym_COLON_GT] = ACTIONS(89),
    [anon_sym_COLON_GT_EQ] = ACTIONS(87),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(87),
    [anon_sym_COLON_AT] = ACTIONS(87),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(87),
    [anon_sym_COLON_CARET] = ACTIONS(87),
    [anon_sym_COLON_PIPE] = ACTIONS(89),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(87),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(89),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(87),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(89),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(87),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(87),
    [anon_sym_nil] = ACTIONS(87),
    [anon_sym_COLONnil] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [anon_sym_LT_LT] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(87),
    [anon_sym_defmodule] = ACTIONS(87),
    [anon_sym_end] = ACTIONS(87),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(87),
    [sym_comment] = ACTIONS(39),
  },
  [14] = {
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
    [sym_list] = STATE(28),
    [sym__simple_list] = STATE(13),
    [sym__head_tail_list] = STATE(13),
    [sym_module] = STATE(28),
    [aux_sym_program_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym_alias] = ACTIONS(93),
    [sym_integer] = ACTIONS(95),
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
    [anon_sym_defmodule] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym_alias] = ACTIONS(97),
    [sym_integer] = ACTIONS(99),
    [sym_float] = ACTIONS(97),
    [anon_sym_true] = ACTIONS(97),
    [anon_sym_COLONtrue] = ACTIONS(99),
    [anon_sym_false] = ACTIONS(97),
    [anon_sym_COLONfalse] = ACTIONS(99),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(99),
    [anon_sym_COLON_BANG] = ACTIONS(99),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(99),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(97),
    [anon_sym_COLON_AMP] = ACTIONS(99),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(99),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(97),
    [anon_sym_COLON_STAR] = ACTIONS(97),
    [anon_sym_COLON_PLUS] = ACTIONS(99),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(97),
    [anon_sym_COLON_DASH] = ACTIONS(99),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(97),
    [anon_sym_COLON_DOT] = ACTIONS(99),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(97),
    [anon_sym_COLON_SLASH] = ACTIONS(97),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(97),
    [anon_sym_COLON_LT] = ACTIONS(99),
    [anon_sym_COLON_LT_DASH] = ACTIONS(97),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(97),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(97),
    [anon_sym_COLON_LT_EQ] = ACTIONS(97),
    [anon_sym_COLON_LT_GT] = ACTIONS(97),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(97),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(99),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(97),
    [anon_sym_COLON_EQ] = ACTIONS(99),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(99),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(97),
    [anon_sym_COLON_EQ_GT] = ACTIONS(97),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(97),
    [anon_sym_COLON_GT] = ACTIONS(99),
    [anon_sym_COLON_GT_EQ] = ACTIONS(97),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(97),
    [anon_sym_COLON_AT] = ACTIONS(97),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(97),
    [anon_sym_COLON_CARET] = ACTIONS(97),
    [anon_sym_COLON_PIPE] = ACTIONS(99),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(97),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(99),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(97),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(99),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(97),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(97),
    [anon_sym_nil] = ACTIONS(97),
    [anon_sym_COLONnil] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_LT_LT] = ACTIONS(97),
    [anon_sym_COMMA] = ACTIONS(97),
    [anon_sym_GT_GT] = ACTIONS(97),
    [anon_sym_COLON_COLON] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_defmodule] = ACTIONS(97),
    [anon_sym_end] = ACTIONS(97),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(97),
    [sym_comment] = ACTIONS(39),
  },
  [16] = {
    [aux_sym_charlist_repeat1] = STATE(30),
    [anon_sym_SQUOTE] = ACTIONS(101),
    [aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(103),
    [sym_comment] = ACTIONS(61),
  },
  [17] = {
    [anon_sym_COMMA] = ACTIONS(105),
    [anon_sym_GT_GT] = ACTIONS(105),
    [anon_sym_COLON_COLON] = ACTIONS(107),
    [sym_comment] = ACTIONS(39),
  },
  [18] = {
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
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_RBRACK] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_defmodule] = ACTIONS(109),
    [anon_sym_end] = ACTIONS(109),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(109),
    [sym_comment] = ACTIONS(39),
  },
  [19] = {
    [aux_sym_binary_repeat1] = STATE(34),
    [anon_sym_COMMA] = ACTIONS(113),
    [anon_sym_GT_GT] = ACTIONS(115),
    [sym_comment] = ACTIONS(39),
  },
  [20] = {
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
    [anon_sym_defmodule] = ACTIONS(117),
    [anon_sym_end] = ACTIONS(117),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(117),
    [sym_comment] = ACTIONS(39),
  },
  [21] = {
    [aux_sym_string_repeat1] = STATE(36),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(123),
    [sym_comment] = ACTIONS(61),
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
    [anon_sym_SQUOTE] = ACTIONS(125),
    [anon_sym_LT_LT] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(125),
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_defmodule] = ACTIONS(125),
    [anon_sym_end] = ACTIONS(125),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(125),
    [sym_comment] = ACTIONS(39),
  },
  [23] = {
    [aux_sym_tuple_repeat1] = STATE(39),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_RBRACE] = ACTIONS(131),
    [sym_comment] = ACTIONS(39),
  },
  [24] = {
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
    [anon_sym_DQUOTE] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(133),
    [anon_sym_RBRACE] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(133),
    [anon_sym_PIPE] = ACTIONS(133),
    [anon_sym_defmodule] = ACTIONS(133),
    [anon_sym_end] = ACTIONS(133),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(133),
    [sym_comment] = ACTIONS(39),
  },
  [25] = {
    [aux_sym_tuple_repeat1] = STATE(42),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(141),
    [sym_comment] = ACTIONS(39),
  },
  [26] = {
    [anon_sym_PIPE] = ACTIONS(143),
    [sym_comment] = ACTIONS(39),
  },
  [27] = {
    [anon_sym_do] = ACTIONS(145),
    [sym_comment] = ACTIONS(39),
  },
  [28] = {
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
    [sym_list] = STATE(28),
    [sym__simple_list] = STATE(13),
    [sym__head_tail_list] = STATE(13),
    [sym_module] = STATE(28),
    [aux_sym_program_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym_alias] = ACTIONS(149),
    [sym_integer] = ACTIONS(152),
    [sym_float] = ACTIONS(149),
    [anon_sym_true] = ACTIONS(155),
    [anon_sym_COLONtrue] = ACTIONS(158),
    [anon_sym_false] = ACTIONS(161),
    [anon_sym_COLONfalse] = ACTIONS(164),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(167),
    [anon_sym_COLON_BANG] = ACTIONS(167),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(167),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(170),
    [anon_sym_COLON_AMP] = ACTIONS(167),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(167),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(170),
    [anon_sym_COLON_STAR] = ACTIONS(170),
    [anon_sym_COLON_PLUS] = ACTIONS(167),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(170),
    [anon_sym_COLON_DASH] = ACTIONS(167),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(170),
    [anon_sym_COLON_DOT] = ACTIONS(167),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(170),
    [anon_sym_COLON_SLASH] = ACTIONS(170),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(170),
    [anon_sym_COLON_LT] = ACTIONS(167),
    [anon_sym_COLON_LT_DASH] = ACTIONS(170),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(170),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(170),
    [anon_sym_COLON_LT_EQ] = ACTIONS(170),
    [anon_sym_COLON_LT_GT] = ACTIONS(170),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(170),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(167),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(170),
    [anon_sym_COLON_EQ] = ACTIONS(167),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(167),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(170),
    [anon_sym_COLON_EQ_GT] = ACTIONS(170),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(170),
    [anon_sym_COLON_GT] = ACTIONS(167),
    [anon_sym_COLON_GT_EQ] = ACTIONS(170),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(170),
    [anon_sym_COLON_AT] = ACTIONS(170),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(170),
    [anon_sym_COLON_CARET] = ACTIONS(170),
    [anon_sym_COLON_PIPE] = ACTIONS(167),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(170),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(167),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(170),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(167),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(170),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(170),
    [anon_sym_nil] = ACTIONS(173),
    [anon_sym_COLONnil] = ACTIONS(176),
    [anon_sym_SQUOTE] = ACTIONS(179),
    [anon_sym_LT_LT] = ACTIONS(182),
    [anon_sym_DQUOTE] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_defmodule] = ACTIONS(194),
    [sym_comment] = ACTIONS(39),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [sym_alias] = ACTIONS(197),
    [sym_integer] = ACTIONS(199),
    [sym_float] = ACTIONS(197),
    [anon_sym_true] = ACTIONS(197),
    [anon_sym_COLONtrue] = ACTIONS(199),
    [anon_sym_false] = ACTIONS(197),
    [anon_sym_COLONfalse] = ACTIONS(199),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(199),
    [anon_sym_COLON_BANG] = ACTIONS(199),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(199),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(197),
    [anon_sym_COLON_AMP] = ACTIONS(199),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(199),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(197),
    [anon_sym_COLON_STAR] = ACTIONS(197),
    [anon_sym_COLON_PLUS] = ACTIONS(199),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(197),
    [anon_sym_COLON_DASH] = ACTIONS(199),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(197),
    [anon_sym_COLON_DOT] = ACTIONS(199),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(197),
    [anon_sym_COLON_SLASH] = ACTIONS(197),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(197),
    [anon_sym_COLON_LT] = ACTIONS(199),
    [anon_sym_COLON_LT_DASH] = ACTIONS(197),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(197),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(197),
    [anon_sym_COLON_LT_EQ] = ACTIONS(197),
    [anon_sym_COLON_LT_GT] = ACTIONS(197),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(197),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(199),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(197),
    [anon_sym_COLON_EQ] = ACTIONS(199),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(199),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(197),
    [anon_sym_COLON_EQ_GT] = ACTIONS(197),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(197),
    [anon_sym_COLON_GT] = ACTIONS(199),
    [anon_sym_COLON_GT_EQ] = ACTIONS(197),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(197),
    [anon_sym_COLON_AT] = ACTIONS(197),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(197),
    [anon_sym_COLON_CARET] = ACTIONS(197),
    [anon_sym_COLON_PIPE] = ACTIONS(199),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(197),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(199),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(197),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(199),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(197),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(197),
    [anon_sym_nil] = ACTIONS(197),
    [anon_sym_COLONnil] = ACTIONS(199),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_LT_LT] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(197),
    [anon_sym_GT_GT] = ACTIONS(197),
    [anon_sym_COLON_COLON] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(197),
    [anon_sym_RBRACE] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_RBRACK] = ACTIONS(197),
    [anon_sym_PIPE] = ACTIONS(197),
    [anon_sym_defmodule] = ACTIONS(197),
    [anon_sym_end] = ACTIONS(197),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(197),
    [sym_comment] = ACTIONS(39),
  },
  [30] = {
    [aux_sym_charlist_repeat1] = STATE(30),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(203),
    [sym_comment] = ACTIONS(61),
  },
  [31] = {
    [sym_binary_options] = ACTIONS(206),
    [sym_comment] = ACTIONS(39),
  },
  [32] = {
    [sym_charlist] = STATE(17),
    [sym_binary_segment] = STATE(47),
    [sym_string] = STATE(17),
    [sym_integer] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_GT_GT] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(39),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(210),
    [sym_alias] = ACTIONS(210),
    [sym_integer] = ACTIONS(212),
    [sym_float] = ACTIONS(210),
    [anon_sym_true] = ACTIONS(210),
    [anon_sym_COLONtrue] = ACTIONS(212),
    [anon_sym_false] = ACTIONS(210),
    [anon_sym_COLONfalse] = ACTIONS(212),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(212),
    [anon_sym_COLON_BANG] = ACTIONS(212),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(212),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(210),
    [anon_sym_COLON_AMP] = ACTIONS(212),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(212),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(210),
    [anon_sym_COLON_STAR] = ACTIONS(210),
    [anon_sym_COLON_PLUS] = ACTIONS(212),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(210),
    [anon_sym_COLON_DASH] = ACTIONS(212),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(210),
    [anon_sym_COLON_DOT] = ACTIONS(212),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(210),
    [anon_sym_COLON_SLASH] = ACTIONS(210),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(210),
    [anon_sym_COLON_LT] = ACTIONS(212),
    [anon_sym_COLON_LT_DASH] = ACTIONS(210),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(210),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(210),
    [anon_sym_COLON_LT_EQ] = ACTIONS(210),
    [anon_sym_COLON_LT_GT] = ACTIONS(210),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(210),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(212),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(210),
    [anon_sym_COLON_EQ] = ACTIONS(212),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(212),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(210),
    [anon_sym_COLON_EQ_GT] = ACTIONS(210),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(210),
    [anon_sym_COLON_GT] = ACTIONS(212),
    [anon_sym_COLON_GT_EQ] = ACTIONS(210),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(210),
    [anon_sym_COLON_AT] = ACTIONS(210),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(210),
    [anon_sym_COLON_CARET] = ACTIONS(210),
    [anon_sym_COLON_PIPE] = ACTIONS(212),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(210),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(212),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(210),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(212),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(210),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(210),
    [anon_sym_nil] = ACTIONS(210),
    [anon_sym_COLONnil] = ACTIONS(212),
    [anon_sym_SQUOTE] = ACTIONS(210),
    [anon_sym_LT_LT] = ACTIONS(210),
    [anon_sym_COMMA] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [anon_sym_LBRACE] = ACTIONS(210),
    [anon_sym_RBRACE] = ACTIONS(210),
    [anon_sym_LBRACK] = ACTIONS(210),
    [anon_sym_RBRACK] = ACTIONS(210),
    [anon_sym_PIPE] = ACTIONS(210),
    [anon_sym_defmodule] = ACTIONS(210),
    [anon_sym_end] = ACTIONS(210),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(210),
    [sym_comment] = ACTIONS(39),
  },
  [34] = {
    [aux_sym_binary_repeat1] = STATE(49),
    [anon_sym_COMMA] = ACTIONS(214),
    [anon_sym_GT_GT] = ACTIONS(208),
    [sym_comment] = ACTIONS(39),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(216),
    [sym_alias] = ACTIONS(216),
    [sym_integer] = ACTIONS(218),
    [sym_float] = ACTIONS(216),
    [anon_sym_true] = ACTIONS(216),
    [anon_sym_COLONtrue] = ACTIONS(218),
    [anon_sym_false] = ACTIONS(216),
    [anon_sym_COLONfalse] = ACTIONS(218),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(218),
    [anon_sym_COLON_BANG] = ACTIONS(218),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(218),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(216),
    [anon_sym_COLON_AMP] = ACTIONS(218),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(218),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(216),
    [anon_sym_COLON_STAR] = ACTIONS(216),
    [anon_sym_COLON_PLUS] = ACTIONS(218),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(216),
    [anon_sym_COLON_DASH] = ACTIONS(218),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(216),
    [anon_sym_COLON_DOT] = ACTIONS(218),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(216),
    [anon_sym_COLON_SLASH] = ACTIONS(216),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(216),
    [anon_sym_COLON_LT] = ACTIONS(218),
    [anon_sym_COLON_LT_DASH] = ACTIONS(216),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(216),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(216),
    [anon_sym_COLON_LT_EQ] = ACTIONS(216),
    [anon_sym_COLON_LT_GT] = ACTIONS(216),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(216),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(218),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(216),
    [anon_sym_COLON_EQ] = ACTIONS(218),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(218),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(216),
    [anon_sym_COLON_EQ_GT] = ACTIONS(216),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(216),
    [anon_sym_COLON_GT] = ACTIONS(218),
    [anon_sym_COLON_GT_EQ] = ACTIONS(216),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(216),
    [anon_sym_COLON_AT] = ACTIONS(216),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(216),
    [anon_sym_COLON_CARET] = ACTIONS(216),
    [anon_sym_COLON_PIPE] = ACTIONS(218),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(216),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(218),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(216),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(218),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(216),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(216),
    [anon_sym_nil] = ACTIONS(216),
    [anon_sym_COLONnil] = ACTIONS(218),
    [anon_sym_SQUOTE] = ACTIONS(216),
    [anon_sym_LT_LT] = ACTIONS(216),
    [anon_sym_COMMA] = ACTIONS(216),
    [anon_sym_GT_GT] = ACTIONS(216),
    [anon_sym_COLON_COLON] = ACTIONS(218),
    [anon_sym_DQUOTE] = ACTIONS(216),
    [anon_sym_LBRACE] = ACTIONS(216),
    [anon_sym_RBRACE] = ACTIONS(216),
    [anon_sym_LBRACK] = ACTIONS(216),
    [anon_sym_RBRACK] = ACTIONS(216),
    [anon_sym_PIPE] = ACTIONS(216),
    [anon_sym_defmodule] = ACTIONS(216),
    [anon_sym_end] = ACTIONS(216),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(216),
    [sym_comment] = ACTIONS(39),
  },
  [36] = {
    [aux_sym_string_repeat1] = STATE(36),
    [anon_sym_DQUOTE] = ACTIONS(220),
    [aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(222),
    [sym_comment] = ACTIONS(61),
  },
  [37] = {
    [sym__expression] = STATE(51),
    [sym__value] = STATE(51),
    [sym_true] = STATE(51),
    [sym_false] = STATE(51),
    [sym_atom] = STATE(51),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(51),
    [sym_charlist] = STATE(51),
    [sym_binary] = STATE(51),
    [sym_string] = STATE(51),
    [sym_tuple] = STATE(51),
    [sym_list] = STATE(51),
    [sym__simple_list] = STATE(13),
    [sym__head_tail_list] = STATE(13),
    [sym_module] = STATE(51),
    [sym_alias] = ACTIONS(225),
    [sym_integer] = ACTIONS(227),
    [sym_float] = ACTIONS(225),
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
    [anon_sym_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_defmodule] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(231),
    [sym_alias] = ACTIONS(231),
    [sym_integer] = ACTIONS(233),
    [sym_float] = ACTIONS(231),
    [anon_sym_true] = ACTIONS(231),
    [anon_sym_COLONtrue] = ACTIONS(233),
    [anon_sym_false] = ACTIONS(231),
    [anon_sym_COLONfalse] = ACTIONS(233),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(233),
    [anon_sym_COLON_BANG] = ACTIONS(233),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(233),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(231),
    [anon_sym_COLON_AMP] = ACTIONS(233),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(233),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(231),
    [anon_sym_COLON_STAR] = ACTIONS(231),
    [anon_sym_COLON_PLUS] = ACTIONS(233),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(231),
    [anon_sym_COLON_DASH] = ACTIONS(233),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(231),
    [anon_sym_COLON_DOT] = ACTIONS(233),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(231),
    [anon_sym_COLON_SLASH] = ACTIONS(231),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(231),
    [anon_sym_COLON_LT] = ACTIONS(233),
    [anon_sym_COLON_LT_DASH] = ACTIONS(231),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(231),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(231),
    [anon_sym_COLON_LT_EQ] = ACTIONS(231),
    [anon_sym_COLON_LT_GT] = ACTIONS(231),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(231),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(233),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(231),
    [anon_sym_COLON_EQ] = ACTIONS(233),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(233),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(231),
    [anon_sym_COLON_EQ_GT] = ACTIONS(231),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(231),
    [anon_sym_COLON_GT] = ACTIONS(233),
    [anon_sym_COLON_GT_EQ] = ACTIONS(231),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(231),
    [anon_sym_COLON_AT] = ACTIONS(231),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(231),
    [anon_sym_COLON_CARET] = ACTIONS(231),
    [anon_sym_COLON_PIPE] = ACTIONS(233),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(231),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(231),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(233),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(231),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(231),
    [anon_sym_nil] = ACTIONS(231),
    [anon_sym_COLONnil] = ACTIONS(233),
    [anon_sym_SQUOTE] = ACTIONS(231),
    [anon_sym_LT_LT] = ACTIONS(231),
    [anon_sym_COMMA] = ACTIONS(231),
    [anon_sym_DQUOTE] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(231),
    [anon_sym_RBRACE] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_RBRACK] = ACTIONS(231),
    [anon_sym_PIPE] = ACTIONS(231),
    [anon_sym_defmodule] = ACTIONS(231),
    [anon_sym_end] = ACTIONS(231),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(231),
    [sym_comment] = ACTIONS(39),
  },
  [39] = {
    [aux_sym_tuple_repeat1] = STATE(53),
    [anon_sym_COMMA] = ACTIONS(235),
    [anon_sym_RBRACE] = ACTIONS(229),
    [sym_comment] = ACTIONS(39),
  },
  [40] = {
    [sym__expression] = STATE(51),
    [sym__value] = STATE(51),
    [sym_true] = STATE(51),
    [sym_false] = STATE(51),
    [sym_atom] = STATE(51),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(51),
    [sym_charlist] = STATE(51),
    [sym_binary] = STATE(51),
    [sym_string] = STATE(51),
    [sym_tuple] = STATE(51),
    [sym_list] = STATE(51),
    [sym__simple_list] = STATE(13),
    [sym__head_tail_list] = STATE(13),
    [sym_module] = STATE(51),
    [sym_alias] = ACTIONS(225),
    [sym_integer] = ACTIONS(227),
    [sym_float] = ACTIONS(225),
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
    [anon_sym_RBRACK] = ACTIONS(237),
    [anon_sym_defmodule] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
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
    [anon_sym_SQUOTE] = ACTIONS(239),
    [anon_sym_LT_LT] = ACTIONS(239),
    [anon_sym_COMMA] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(239),
    [anon_sym_RBRACE] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(239),
    [anon_sym_RBRACK] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(239),
    [anon_sym_defmodule] = ACTIONS(239),
    [anon_sym_end] = ACTIONS(239),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(239),
    [sym_comment] = ACTIONS(39),
  },
  [42] = {
    [aux_sym_tuple_repeat1] = STATE(56),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_RBRACK] = ACTIONS(237),
    [sym_comment] = ACTIONS(39),
  },
  [43] = {
    [sym_list] = STATE(57),
    [sym__simple_list] = STATE(13),
    [sym__head_tail_list] = STATE(13),
    [sym_tail] = STATE(58),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_comment] = ACTIONS(39),
  },
  [44] = {
    [sym_module_attribute] = STATE(61),
    [aux_sym_module_repeat1] = STATE(61),
    [anon_sym_end] = ACTIONS(245),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(247),
    [sym_comment] = ACTIONS(39),
  },
  [45] = {
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_GT_GT] = ACTIONS(249),
    [sym_comment] = ACTIONS(39),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [sym_alias] = ACTIONS(251),
    [sym_integer] = ACTIONS(253),
    [sym_float] = ACTIONS(251),
    [anon_sym_true] = ACTIONS(251),
    [anon_sym_COLONtrue] = ACTIONS(253),
    [anon_sym_false] = ACTIONS(251),
    [anon_sym_COLONfalse] = ACTIONS(253),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(253),
    [anon_sym_COLON_BANG] = ACTIONS(253),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(253),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(251),
    [anon_sym_COLON_AMP] = ACTIONS(253),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(253),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(251),
    [anon_sym_COLON_STAR] = ACTIONS(251),
    [anon_sym_COLON_PLUS] = ACTIONS(253),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(251),
    [anon_sym_COLON_DASH] = ACTIONS(253),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(251),
    [anon_sym_COLON_DOT] = ACTIONS(253),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(251),
    [anon_sym_COLON_SLASH] = ACTIONS(251),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(251),
    [anon_sym_COLON_LT] = ACTIONS(253),
    [anon_sym_COLON_LT_DASH] = ACTIONS(251),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(251),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(251),
    [anon_sym_COLON_LT_EQ] = ACTIONS(251),
    [anon_sym_COLON_LT_GT] = ACTIONS(251),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(251),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(253),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(251),
    [anon_sym_COLON_EQ] = ACTIONS(253),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(253),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(251),
    [anon_sym_COLON_EQ_GT] = ACTIONS(251),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(251),
    [anon_sym_COLON_GT] = ACTIONS(253),
    [anon_sym_COLON_GT_EQ] = ACTIONS(251),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(251),
    [anon_sym_COLON_AT] = ACTIONS(251),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(251),
    [anon_sym_COLON_CARET] = ACTIONS(251),
    [anon_sym_COLON_PIPE] = ACTIONS(253),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(251),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(253),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(251),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(253),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(251),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(251),
    [anon_sym_nil] = ACTIONS(251),
    [anon_sym_COLONnil] = ACTIONS(253),
    [anon_sym_SQUOTE] = ACTIONS(251),
    [anon_sym_LT_LT] = ACTIONS(251),
    [anon_sym_COMMA] = ACTIONS(251),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [anon_sym_LBRACE] = ACTIONS(251),
    [anon_sym_RBRACE] = ACTIONS(251),
    [anon_sym_LBRACK] = ACTIONS(251),
    [anon_sym_RBRACK] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(251),
    [anon_sym_defmodule] = ACTIONS(251),
    [anon_sym_end] = ACTIONS(251),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(251),
    [sym_comment] = ACTIONS(39),
  },
  [47] = {
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_GT_GT] = ACTIONS(255),
    [sym_comment] = ACTIONS(39),
  },
  [48] = {
    [sym_charlist] = STATE(17),
    [sym_binary_segment] = STATE(47),
    [sym_string] = STATE(17),
    [sym_integer] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_GT_GT] = ACTIONS(257),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(39),
  },
  [49] = {
    [aux_sym_binary_repeat1] = STATE(49),
    [anon_sym_COMMA] = ACTIONS(259),
    [anon_sym_GT_GT] = ACTIONS(255),
    [sym_comment] = ACTIONS(39),
  },
  [50] = {
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
    [anon_sym_DQUOTE] = ACTIONS(262),
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_RBRACE] = ACTIONS(262),
    [anon_sym_LBRACK] = ACTIONS(262),
    [anon_sym_RBRACK] = ACTIONS(262),
    [anon_sym_PIPE] = ACTIONS(262),
    [anon_sym_defmodule] = ACTIONS(262),
    [anon_sym_end] = ACTIONS(262),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(262),
    [sym_comment] = ACTIONS(39),
  },
  [51] = {
    [anon_sym_COMMA] = ACTIONS(266),
    [anon_sym_RBRACE] = ACTIONS(266),
    [anon_sym_RBRACK] = ACTIONS(266),
    [sym_comment] = ACTIONS(39),
  },
  [52] = {
    [sym__expression] = STATE(51),
    [sym__value] = STATE(51),
    [sym_true] = STATE(51),
    [sym_false] = STATE(51),
    [sym_atom] = STATE(51),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(51),
    [sym_charlist] = STATE(51),
    [sym_binary] = STATE(51),
    [sym_string] = STATE(51),
    [sym_tuple] = STATE(51),
    [sym_list] = STATE(51),
    [sym__simple_list] = STATE(13),
    [sym__head_tail_list] = STATE(13),
    [sym_module] = STATE(51),
    [sym_alias] = ACTIONS(225),
    [sym_integer] = ACTIONS(227),
    [sym_float] = ACTIONS(225),
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
    [anon_sym_RBRACE] = ACTIONS(268),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_defmodule] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [53] = {
    [aux_sym_tuple_repeat1] = STATE(53),
    [anon_sym_COMMA] = ACTIONS(270),
    [anon_sym_RBRACE] = ACTIONS(266),
    [sym_comment] = ACTIONS(39),
  },
  [54] = {
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
  [55] = {
    [sym__expression] = STATE(51),
    [sym__value] = STATE(51),
    [sym_true] = STATE(51),
    [sym_false] = STATE(51),
    [sym_atom] = STATE(51),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(51),
    [sym_charlist] = STATE(51),
    [sym_binary] = STATE(51),
    [sym_string] = STATE(51),
    [sym_tuple] = STATE(51),
    [sym_list] = STATE(51),
    [sym__simple_list] = STATE(13),
    [sym__head_tail_list] = STATE(13),
    [sym_module] = STATE(51),
    [sym_alias] = ACTIONS(225),
    [sym_integer] = ACTIONS(227),
    [sym_float] = ACTIONS(225),
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
    [anon_sym_RBRACK] = ACTIONS(277),
    [anon_sym_defmodule] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [56] = {
    [aux_sym_tuple_repeat1] = STATE(56),
    [anon_sym_COMMA] = ACTIONS(270),
    [anon_sym_RBRACK] = ACTIONS(266),
    [sym_comment] = ACTIONS(39),
  },
  [57] = {
    [anon_sym_RBRACK] = ACTIONS(279),
    [sym_comment] = ACTIONS(39),
  },
  [58] = {
    [anon_sym_RBRACK] = ACTIONS(281),
    [sym_comment] = ACTIONS(39),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [sym_alias] = ACTIONS(283),
    [sym_integer] = ACTIONS(285),
    [sym_float] = ACTIONS(283),
    [anon_sym_true] = ACTIONS(283),
    [anon_sym_COLONtrue] = ACTIONS(285),
    [anon_sym_false] = ACTIONS(283),
    [anon_sym_COLONfalse] = ACTIONS(285),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(285),
    [anon_sym_COLON_BANG] = ACTIONS(285),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(285),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(283),
    [anon_sym_COLON_AMP] = ACTIONS(285),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(285),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(283),
    [anon_sym_COLON_STAR] = ACTIONS(283),
    [anon_sym_COLON_PLUS] = ACTIONS(285),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(283),
    [anon_sym_COLON_DASH] = ACTIONS(285),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(283),
    [anon_sym_COLON_DOT] = ACTIONS(285),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(283),
    [anon_sym_COLON_SLASH] = ACTIONS(283),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(283),
    [anon_sym_COLON_LT] = ACTIONS(285),
    [anon_sym_COLON_LT_DASH] = ACTIONS(283),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(283),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(283),
    [anon_sym_COLON_LT_EQ] = ACTIONS(283),
    [anon_sym_COLON_LT_GT] = ACTIONS(283),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(283),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(285),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(283),
    [anon_sym_COLON_EQ] = ACTIONS(285),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(285),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(283),
    [anon_sym_COLON_EQ_GT] = ACTIONS(283),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(283),
    [anon_sym_COLON_GT] = ACTIONS(285),
    [anon_sym_COLON_GT_EQ] = ACTIONS(283),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(283),
    [anon_sym_COLON_AT] = ACTIONS(283),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(283),
    [anon_sym_COLON_CARET] = ACTIONS(283),
    [anon_sym_COLON_PIPE] = ACTIONS(285),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(283),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(285),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(283),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(285),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(283),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(283),
    [anon_sym_nil] = ACTIONS(283),
    [anon_sym_COLONnil] = ACTIONS(285),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_LT_LT] = ACTIONS(283),
    [anon_sym_COMMA] = ACTIONS(283),
    [anon_sym_DQUOTE] = ACTIONS(283),
    [anon_sym_LBRACE] = ACTIONS(283),
    [anon_sym_RBRACE] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(283),
    [anon_sym_RBRACK] = ACTIONS(283),
    [anon_sym_PIPE] = ACTIONS(283),
    [anon_sym_defmodule] = ACTIONS(283),
    [anon_sym_end] = ACTIONS(283),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(283),
    [sym_comment] = ACTIONS(39),
  },
  [60] = {
    [sym__value] = STATE(68),
    [sym_true] = STATE(68),
    [sym_false] = STATE(68),
    [sym_atom] = STATE(68),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(68),
    [sym_charlist] = STATE(68),
    [sym_binary] = STATE(68),
    [sym_string] = STATE(68),
    [sym_tuple] = STATE(68),
    [sym_list] = STATE(68),
    [sym__simple_list] = STATE(13),
    [sym__head_tail_list] = STATE(13),
    [sym_module] = STATE(68),
    [sym_alias] = ACTIONS(287),
    [sym_integer] = ACTIONS(289),
    [sym_float] = ACTIONS(287),
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
  [61] = {
    [sym_module_attribute] = STATE(70),
    [aux_sym_module_repeat1] = STATE(70),
    [anon_sym_end] = ACTIONS(291),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(247),
    [sym_comment] = ACTIONS(39),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(293),
    [sym_alias] = ACTIONS(293),
    [sym_integer] = ACTIONS(295),
    [sym_float] = ACTIONS(293),
    [anon_sym_true] = ACTIONS(293),
    [anon_sym_COLONtrue] = ACTIONS(295),
    [anon_sym_false] = ACTIONS(293),
    [anon_sym_COLONfalse] = ACTIONS(295),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(295),
    [anon_sym_COLON_BANG] = ACTIONS(295),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(295),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(293),
    [anon_sym_COLON_AMP] = ACTIONS(295),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(295),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(293),
    [anon_sym_COLON_STAR] = ACTIONS(293),
    [anon_sym_COLON_PLUS] = ACTIONS(295),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(293),
    [anon_sym_COLON_DASH] = ACTIONS(295),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(293),
    [anon_sym_COLON_DOT] = ACTIONS(295),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(293),
    [anon_sym_COLON_SLASH] = ACTIONS(293),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(293),
    [anon_sym_COLON_LT] = ACTIONS(295),
    [anon_sym_COLON_LT_DASH] = ACTIONS(293),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(293),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(293),
    [anon_sym_COLON_LT_EQ] = ACTIONS(293),
    [anon_sym_COLON_LT_GT] = ACTIONS(293),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(293),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(295),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(293),
    [anon_sym_COLON_EQ] = ACTIONS(295),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(295),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(293),
    [anon_sym_COLON_EQ_GT] = ACTIONS(293),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(293),
    [anon_sym_COLON_GT] = ACTIONS(295),
    [anon_sym_COLON_GT_EQ] = ACTIONS(293),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(293),
    [anon_sym_COLON_AT] = ACTIONS(293),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(293),
    [anon_sym_COLON_CARET] = ACTIONS(293),
    [anon_sym_COLON_PIPE] = ACTIONS(295),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(293),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(293),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(295),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(293),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(293),
    [anon_sym_nil] = ACTIONS(293),
    [anon_sym_COLONnil] = ACTIONS(295),
    [anon_sym_SQUOTE] = ACTIONS(293),
    [anon_sym_LT_LT] = ACTIONS(293),
    [anon_sym_COMMA] = ACTIONS(293),
    [anon_sym_DQUOTE] = ACTIONS(293),
    [anon_sym_LBRACE] = ACTIONS(293),
    [anon_sym_RBRACE] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(293),
    [anon_sym_RBRACK] = ACTIONS(293),
    [anon_sym_PIPE] = ACTIONS(293),
    [anon_sym_defmodule] = ACTIONS(293),
    [anon_sym_end] = ACTIONS(293),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(293),
    [sym_comment] = ACTIONS(39),
  },
  [63] = {
    [sym_charlist] = STATE(17),
    [sym_binary_segment] = STATE(47),
    [sym_string] = STATE(17),
    [sym_integer] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(39),
  },
  [64] = {
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
    [anon_sym_defmodule] = ACTIONS(297),
    [anon_sym_end] = ACTIONS(297),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(297),
    [sym_comment] = ACTIONS(39),
  },
  [65] = {
    [sym__expression] = STATE(51),
    [sym__value] = STATE(51),
    [sym_true] = STATE(51),
    [sym_false] = STATE(51),
    [sym_atom] = STATE(51),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(51),
    [sym_charlist] = STATE(51),
    [sym_binary] = STATE(51),
    [sym_string] = STATE(51),
    [sym_tuple] = STATE(51),
    [sym_list] = STATE(51),
    [sym__simple_list] = STATE(13),
    [sym__head_tail_list] = STATE(13),
    [sym_module] = STATE(51),
    [sym_alias] = ACTIONS(225),
    [sym_integer] = ACTIONS(227),
    [sym_float] = ACTIONS(225),
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
  [66] = {
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
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(305),
    [sym_alias] = ACTIONS(305),
    [sym_integer] = ACTIONS(307),
    [sym_float] = ACTIONS(305),
    [anon_sym_true] = ACTIONS(305),
    [anon_sym_COLONtrue] = ACTIONS(307),
    [anon_sym_false] = ACTIONS(305),
    [anon_sym_COLONfalse] = ACTIONS(307),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(307),
    [anon_sym_COLON_BANG] = ACTIONS(307),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(307),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(305),
    [anon_sym_COLON_AMP] = ACTIONS(307),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(307),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(305),
    [anon_sym_COLON_STAR] = ACTIONS(305),
    [anon_sym_COLON_PLUS] = ACTIONS(307),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(305),
    [anon_sym_COLON_DASH] = ACTIONS(307),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(305),
    [anon_sym_COLON_DOT] = ACTIONS(307),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(305),
    [anon_sym_COLON_SLASH] = ACTIONS(305),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(305),
    [anon_sym_COLON_LT] = ACTIONS(307),
    [anon_sym_COLON_LT_DASH] = ACTIONS(305),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(305),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(305),
    [anon_sym_COLON_LT_EQ] = ACTIONS(305),
    [anon_sym_COLON_LT_GT] = ACTIONS(305),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(305),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(307),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(305),
    [anon_sym_COLON_EQ] = ACTIONS(307),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(307),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(305),
    [anon_sym_COLON_EQ_GT] = ACTIONS(305),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(305),
    [anon_sym_COLON_GT] = ACTIONS(307),
    [anon_sym_COLON_GT_EQ] = ACTIONS(305),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(305),
    [anon_sym_COLON_AT] = ACTIONS(305),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(305),
    [anon_sym_COLON_CARET] = ACTIONS(305),
    [anon_sym_COLON_PIPE] = ACTIONS(307),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(305),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(307),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(305),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(307),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(305),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(305),
    [anon_sym_nil] = ACTIONS(305),
    [anon_sym_COLONnil] = ACTIONS(307),
    [anon_sym_SQUOTE] = ACTIONS(305),
    [anon_sym_LT_LT] = ACTIONS(305),
    [anon_sym_COMMA] = ACTIONS(305),
    [anon_sym_DQUOTE] = ACTIONS(305),
    [anon_sym_LBRACE] = ACTIONS(305),
    [anon_sym_RBRACE] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(305),
    [anon_sym_RBRACK] = ACTIONS(305),
    [anon_sym_PIPE] = ACTIONS(305),
    [anon_sym_defmodule] = ACTIONS(305),
    [anon_sym_end] = ACTIONS(305),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(305),
    [sym_comment] = ACTIONS(39),
  },
  [68] = {
    [anon_sym_end] = ACTIONS(309),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(309),
    [sym_comment] = ACTIONS(39),
  },
  [69] = {
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
    [anon_sym_defmodule] = ACTIONS(311),
    [anon_sym_end] = ACTIONS(311),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(311),
    [sym_comment] = ACTIONS(39),
  },
  [70] = {
    [sym_module_attribute] = STATE(70),
    [aux_sym_module_repeat1] = STATE(70),
    [anon_sym_end] = ACTIONS(315),
    [aux_sym_SLASH_AT_BSLASHw_PLUS_SLASH] = ACTIONS(317),
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
  [77] = {.count = 1, .reusable = true}, SHIFT(25),
  [79] = {.count = 1, .reusable = false}, SHIFT(25),
  [81] = {.count = 1, .reusable = true}, SHIFT(24),
  [83] = {.count = 1, .reusable = true}, SHIFT(27),
  [85] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_list, 1),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_list, 1),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [93] = {.count = 1, .reusable = true}, SHIFT(28),
  [95] = {.count = 1, .reusable = false}, SHIFT(28),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_charlist, 2),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_charlist, 2),
  [101] = {.count = 1, .reusable = false}, SHIFT(29),
  [103] = {.count = 1, .reusable = false}, SHIFT(30),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_binary_segment, 1),
  [107] = {.count = 1, .reusable = true}, SHIFT(31),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 2),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 2),
  [113] = {.count = 1, .reusable = true}, SHIFT(32),
  [115] = {.count = 1, .reusable = true}, SHIFT(33),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [121] = {.count = 1, .reusable = false}, SHIFT(35),
  [123] = {.count = 1, .reusable = false}, SHIFT(36),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 2),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 2),
  [129] = {.count = 1, .reusable = true}, SHIFT(37),
  [131] = {.count = 1, .reusable = true}, SHIFT(38),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 2),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 2),
  [137] = {.count = 1, .reusable = true}, SHIFT(40),
  [139] = {.count = 1, .reusable = true}, SHIFT(41),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_head, 1),
  [143] = {.count = 1, .reusable = true}, SHIFT(43),
  [145] = {.count = 1, .reusable = true}, SHIFT(44),
  [147] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [149] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [152] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(28),
  [155] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [158] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [161] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [164] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [167] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [170] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [173] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [176] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [179] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [182] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [185] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [188] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [191] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [194] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_charlist, 3),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym_charlist, 3),
  [201] = {.count = 1, .reusable = false}, REDUCE(aux_sym_charlist_repeat1, 2),
  [203] = {.count = 2, .reusable = false}, REDUCE(aux_sym_charlist_repeat1, 2), SHIFT_REPEAT(30),
  [206] = {.count = 1, .reusable = true}, SHIFT(45),
  [208] = {.count = 1, .reusable = true}, SHIFT(46),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 3),
  [212] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 3),
  [214] = {.count = 1, .reusable = true}, SHIFT(48),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [218] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [220] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2),
  [222] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(36),
  [225] = {.count = 1, .reusable = true}, SHIFT(51),
  [227] = {.count = 1, .reusable = false}, SHIFT(51),
  [229] = {.count = 1, .reusable = true}, SHIFT(50),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 3),
  [233] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 3),
  [235] = {.count = 1, .reusable = true}, SHIFT(52),
  [237] = {.count = 1, .reusable = true}, SHIFT(54),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 3),
  [241] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 3),
  [243] = {.count = 1, .reusable = true}, SHIFT(55),
  [245] = {.count = 1, .reusable = true}, SHIFT(59),
  [247] = {.count = 1, .reusable = true}, SHIFT(60),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_binary_segment, 3),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 4),
  [253] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 4),
  [255] = {.count = 1, .reusable = true}, REDUCE(aux_sym_binary_repeat1, 2),
  [257] = {.count = 1, .reusable = true}, SHIFT(62),
  [259] = {.count = 2, .reusable = true}, REDUCE(aux_sym_binary_repeat1, 2), SHIFT_REPEAT(63),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 4),
  [264] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 4),
  [266] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [268] = {.count = 1, .reusable = true}, SHIFT(64),
  [270] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(65),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 4),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 4),
  [277] = {.count = 1, .reusable = true}, SHIFT(66),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_tail, 1),
  [281] = {.count = 1, .reusable = true}, SHIFT(67),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_module, 4),
  [285] = {.count = 1, .reusable = false}, REDUCE(sym_module, 4),
  [287] = {.count = 1, .reusable = true}, SHIFT(68),
  [289] = {.count = 1, .reusable = false}, SHIFT(68),
  [291] = {.count = 1, .reusable = true}, SHIFT(69),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 5),
  [295] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 5),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 5),
  [299] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 5),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 5),
  [303] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 5),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym__head_tail_list, 5),
  [307] = {.count = 1, .reusable = false}, REDUCE(sym__head_tail_list, 5),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_module_attribute, 2),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_module, 5),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym_module, 5),
  [315] = {.count = 1, .reusable = true}, REDUCE(aux_sym_module_repeat1, 2),
  [317] = {.count = 2, .reusable = true}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(60),
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
