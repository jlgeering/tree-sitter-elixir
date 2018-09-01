#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 62
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 0
#define TOKEN_COUNT 67
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_integer = 1,
  sym_float = 2,
  anon_sym_true = 3,
  anon_sym_COLONtrue = 4,
  anon_sym_false = 5,
  anon_sym_COLONfalse = 6,
  aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH = 7,
  anon_sym_COLON_BANG = 8,
  anon_sym_COLON_BANG_EQ = 9,
  anon_sym_COLON_BANG_EQ_EQ = 10,
  anon_sym_COLON_AMP = 11,
  anon_sym_COLON_AMP_AMP = 12,
  anon_sym_COLON_AMP_AMP_AMP = 13,
  anon_sym_COLON_STAR = 14,
  anon_sym_COLON_PLUS = 15,
  anon_sym_COLON_PLUS_PLUS = 16,
  anon_sym_COLON_DASH = 17,
  anon_sym_COLON_DASH_DASH = 18,
  anon_sym_COLON_DOT = 19,
  anon_sym_COLON_DOT_DOT = 20,
  anon_sym_COLON_SLASH = 21,
  anon_sym_COLON_COLON_COLON = 22,
  anon_sym_COLON_LT = 23,
  anon_sym_COLON_LT_DASH = 24,
  anon_sym_COLON_LT_LT_LT = 25,
  anon_sym_COLON_LT_LT_TILDE = 26,
  anon_sym_COLON_LT_EQ = 27,
  anon_sym_COLON_LT_GT = 28,
  anon_sym_COLON_LT_PIPE_GT = 29,
  anon_sym_COLON_LT_TILDE = 30,
  anon_sym_COLON_LT_TILDE_GT = 31,
  anon_sym_COLON_EQ = 32,
  anon_sym_COLON_EQ_EQ = 33,
  anon_sym_COLON_EQ_EQ_EQ = 34,
  anon_sym_COLON_EQ_GT = 35,
  anon_sym_COLON_EQ_TILDE = 36,
  anon_sym_COLON_GT = 37,
  anon_sym_COLON_GT_EQ = 38,
  anon_sym_COLON_GT_GT_GT = 39,
  anon_sym_COLON_AT = 40,
  anon_sym_COLON_BSLASH_BSLASH = 41,
  anon_sym_COLON_CARET = 42,
  anon_sym_COLON_PIPE = 43,
  anon_sym_COLON_PIPE_GT = 44,
  anon_sym_COLON_PIPE_PIPE = 45,
  anon_sym_COLON_PIPE_PIPE_PIPE = 46,
  anon_sym_COLON_TILDE_GT = 47,
  anon_sym_COLON_TILDE_GT_GT = 48,
  anon_sym_COLON_TILDE_TILDE_TILDE = 49,
  anon_sym_nil = 50,
  anon_sym_COLONnil = 51,
  anon_sym_SQUOTE = 52,
  aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH = 53,
  anon_sym_LT_LT = 54,
  anon_sym_COMMA = 55,
  anon_sym_GT_GT = 56,
  anon_sym_COLON_COLON = 57,
  sym_binary_options = 58,
  anon_sym_DQUOTE = 59,
  aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH = 60,
  anon_sym_LBRACE = 61,
  anon_sym_RBRACE = 62,
  anon_sym_LBRACK = 63,
  anon_sym_RBRACK = 64,
  anon_sym_PIPE = 65,
  sym_comment = 66,
  sym_program = 67,
  sym__expression = 68,
  sym_true = 69,
  sym_false = 70,
  sym_atom = 71,
  sym__operator_atom = 72,
  sym_nil = 73,
  sym_charlist = 74,
  sym_binary = 75,
  sym_binary_segment = 76,
  sym_string = 77,
  sym_tuple = 78,
  sym_list = 79,
  sym__simple_list = 80,
  sym__head_tail_list = 81,
  sym_head = 82,
  sym_tail = 83,
  aux_sym_program_repeat1 = 84,
  aux_sym_charlist_repeat1 = 85,
  aux_sym_binary_repeat1 = 86,
  aux_sym_string_repeat1 = 87,
  aux_sym_tuple_repeat1 = 88,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
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
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym__expression] = "_expression",
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
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_charlist_repeat1] = "charlist_repeat1",
  [aux_sym_binary_repeat1] = "binary_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
      if (lookahead == '[')
        ADVANCE(92);
      if (lookahead == '\\')
        SKIP(93);
      if (lookahead == ']')
        ADVANCE(94);
      if (lookahead == 'f')
        ADVANCE(95);
      if (lookahead == 'n')
        ADVANCE(100);
      if (lookahead == 't')
        ADVANCE(103);
      if (lookahead == '{')
        ADVANCE(107);
      if (lookahead == '|')
        ADVANCE(108);
      if (lookahead == '}')
        ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
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
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 93:
      if (lookahead == '\n')
        SKIP(0);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 95:
      if (lookahead == 'a')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'l')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 's')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'e')
        ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 100:
      if (lookahead == 'i')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'l')
        ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 103:
      if (lookahead == 'r')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 'u')
        ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 'e')
        ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 110:
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
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(88);
      if (lookahead == '[')
        ADVANCE(92);
      if (lookahead == '\\')
        SKIP(113);
      if (lookahead == 'f')
        ADVANCE(95);
      if (lookahead == 'n')
        ADVANCE(100);
      if (lookahead == 't')
        ADVANCE(103);
      if (lookahead == '{')
        ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(110);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      END_STATE();
    case 111:
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
        ADVANCE(112);
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
    case 112:
      if (lookahead == ':')
        ADVANCE(40);
      END_STATE();
    case 113:
      if (lookahead == '\n')
        SKIP(110);
      END_STATE();
    case 114:
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
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(88);
      if (lookahead == '[')
        ADVANCE(92);
      if (lookahead == '\\')
        SKIP(115);
      if (lookahead == ']')
        ADVANCE(94);
      if (lookahead == 'f')
        ADVANCE(95);
      if (lookahead == 'n')
        ADVANCE(100);
      if (lookahead == 't')
        ADVANCE(103);
      if (lookahead == '{')
        ADVANCE(107);
      if (lookahead == '|')
        ADVANCE(108);
      if (lookahead == '}')
        ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(114);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      END_STATE();
    case 115:
      if (lookahead == '\n')
        SKIP(114);
      END_STATE();
    case 116:
      if (lookahead == '#')
        ADVANCE(117);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(119);
      if (lookahead != 0)
        ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead == '\'')
        ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      END_STATE();
    case 120:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '0')
        ADVANCE(121);
      if (lookahead == '>')
        ADVANCE(90);
      if (lookahead == '\\')
        SKIP(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(120);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(123);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(122);
      if (lookahead == 'b')
        ADVANCE(14);
      if (lookahead == 'o')
        ADVANCE(16);
      if (lookahead == 'x')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(123);
      END_STATE();
    case 122:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(123);
      END_STATE();
    case 124:
      if (lookahead == '\n')
        SKIP(120);
      END_STATE();
    case 125:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(126);
      if (lookahead == '\\')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(128);
      if (lookahead != 0)
        ADVANCE(128);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 129:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '0')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(88);
      if (lookahead == '[')
        ADVANCE(92);
      if (lookahead == '\\')
        SKIP(130);
      if (lookahead == 'f')
        ADVANCE(95);
      if (lookahead == 'n')
        ADVANCE(100);
      if (lookahead == 't')
        ADVANCE(103);
      if (lookahead == '{')
        ADVANCE(107);
      if (lookahead == '}')
        ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(129);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      END_STATE();
    case 130:
      if (lookahead == '\n')
        SKIP(129);
      END_STATE();
    case 131:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(4);
      if (lookahead == '0')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(111);
      if (lookahead == '<')
        ADVANCE(88);
      if (lookahead == '[')
        ADVANCE(92);
      if (lookahead == '\\')
        SKIP(132);
      if (lookahead == ']')
        ADVANCE(94);
      if (lookahead == 'f')
        ADVANCE(95);
      if (lookahead == 'n')
        ADVANCE(100);
      if (lookahead == 't')
        ADVANCE(103);
      if (lookahead == '{')
        ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(131);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(13);
      END_STATE();
    case 132:
      if (lookahead == '\n')
        SKIP(131);
      END_STATE();
    case 133:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(133);
      END_STATE();
    case 134:
      if (lookahead == '\n')
        SKIP(133);
      END_STATE();
    case 135:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(136);
      if (lookahead == '>')
        ADVANCE(90);
      if (lookahead == '\\')
        SKIP(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(135);
      END_STATE();
    case 136:
      if (lookahead == ':')
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 138:
      if (lookahead == '\n')
        SKIP(135);
      END_STATE();
    case 139:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == '\\')
        SKIP(140);
      if (lookahead == '}')
        ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(139);
      END_STATE();
    case 140:
      if (lookahead == '\n')
        SKIP(139);
      END_STATE();
    case 141:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == '\\')
        SKIP(142);
      if (lookahead == ']')
        ADVANCE(94);
      if (lookahead == '|')
        ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(141);
      END_STATE();
    case 142:
      if (lookahead == '\n')
        SKIP(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_binary_options);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(143);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(145);
      END_STATE();
    case 144:
      if (lookahead == '\n')
        SKIP(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_binary_options);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(145);
      END_STATE();
    case 146:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == '\\')
        SKIP(147);
      if (lookahead == ']')
        ADVANCE(94);
      if (lookahead == '}')
        ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(146);
      END_STATE();
    case 147:
      if (lookahead == '\n')
        SKIP(146);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 110},
  [2] = {.lex_state = 114},
  [3] = {.lex_state = 114},
  [4] = {.lex_state = 114},
  [5] = {.lex_state = 114},
  [6] = {.lex_state = 116},
  [7] = {.lex_state = 120},
  [8] = {.lex_state = 125},
  [9] = {.lex_state = 129},
  [10] = {.lex_state = 131},
  [11] = {.lex_state = 133},
  [12] = {.lex_state = 114},
  [13] = {.lex_state = 110},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 116},
  [16] = {.lex_state = 135},
  [17] = {.lex_state = 114},
  [18] = {.lex_state = 135},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 125},
  [21] = {.lex_state = 114},
  [22] = {.lex_state = 139},
  [23] = {.lex_state = 114},
  [24] = {.lex_state = 141},
  [25] = {.lex_state = 141},
  [26] = {.lex_state = 110},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 116},
  [29] = {.lex_state = 143},
  [30] = {.lex_state = 120},
  [31] = {.lex_state = 114},
  [32] = {.lex_state = 135},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 125},
  [35] = {.lex_state = 129},
  [36] = {.lex_state = 114},
  [37] = {.lex_state = 139},
  [38] = {.lex_state = 131},
  [39] = {.lex_state = 114},
  [40] = {.lex_state = 141},
  [41] = {.lex_state = 110},
  [42] = {.lex_state = 135},
  [43] = {.lex_state = 114},
  [44] = {.lex_state = 135},
  [45] = {.lex_state = 120},
  [46] = {.lex_state = 135},
  [47] = {.lex_state = 114},
  [48] = {.lex_state = 146},
  [49] = {.lex_state = 129},
  [50] = {.lex_state = 139},
  [51] = {.lex_state = 114},
  [52] = {.lex_state = 131},
  [53] = {.lex_state = 141},
  [54] = {.lex_state = 131},
  [55] = {.lex_state = 131},
  [56] = {.lex_state = 114},
  [57] = {.lex_state = 110},
  [58] = {.lex_state = 114},
  [59] = {.lex_state = 110},
  [60] = {.lex_state = 114},
  [61] = {.lex_state = 114},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(11),
    [sym__expression] = STATE(13),
    [sym_true] = STATE(13),
    [sym_false] = STATE(13),
    [sym_atom] = STATE(13),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(13),
    [sym_charlist] = STATE(13),
    [sym_binary] = STATE(13),
    [sym_string] = STATE(13),
    [sym_tuple] = STATE(13),
    [sym_list] = STATE(13),
    [sym__simple_list] = STATE(12),
    [sym__head_tail_list] = STATE(12),
    [aux_sym_program_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_integer] = ACTIONS(7),
    [sym_float] = ACTIONS(9),
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
    [sym_comment] = ACTIONS(37),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_integer] = ACTIONS(41),
    [sym_float] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_COLONtrue] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_COLONfalse] = ACTIONS(41),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(41),
    [anon_sym_COLON_BANG] = ACTIONS(41),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(41),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(39),
    [anon_sym_COLON_AMP] = ACTIONS(41),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(41),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(39),
    [anon_sym_COLON_STAR] = ACTIONS(39),
    [anon_sym_COLON_PLUS] = ACTIONS(41),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(39),
    [anon_sym_COLON_DASH] = ACTIONS(41),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(39),
    [anon_sym_COLON_DOT] = ACTIONS(41),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(39),
    [anon_sym_COLON_SLASH] = ACTIONS(39),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(39),
    [anon_sym_COLON_LT] = ACTIONS(41),
    [anon_sym_COLON_LT_DASH] = ACTIONS(39),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(39),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(39),
    [anon_sym_COLON_LT_EQ] = ACTIONS(39),
    [anon_sym_COLON_LT_GT] = ACTIONS(39),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(39),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(41),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(39),
    [anon_sym_COLON_EQ] = ACTIONS(41),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(41),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(39),
    [anon_sym_COLON_EQ_GT] = ACTIONS(39),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(39),
    [anon_sym_COLON_GT] = ACTIONS(41),
    [anon_sym_COLON_GT_EQ] = ACTIONS(39),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(39),
    [anon_sym_COLON_AT] = ACTIONS(39),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(39),
    [anon_sym_COLON_CARET] = ACTIONS(39),
    [anon_sym_COLON_PIPE] = ACTIONS(41),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(39),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(41),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(39),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(41),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(39),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(39),
    [anon_sym_nil] = ACTIONS(39),
    [anon_sym_COLONnil] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_LT_LT] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(39),
    [sym_comment] = ACTIONS(37),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_integer] = ACTIONS(45),
    [sym_float] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_COLONtrue] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_COLONfalse] = ACTIONS(45),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(45),
    [anon_sym_COLON_BANG] = ACTIONS(45),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(45),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(43),
    [anon_sym_COLON_AMP] = ACTIONS(45),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(45),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(43),
    [anon_sym_COLON_STAR] = ACTIONS(43),
    [anon_sym_COLON_PLUS] = ACTIONS(45),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(43),
    [anon_sym_COLON_DASH] = ACTIONS(45),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(43),
    [anon_sym_COLON_DOT] = ACTIONS(45),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(43),
    [anon_sym_COLON_SLASH] = ACTIONS(43),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(43),
    [anon_sym_COLON_LT] = ACTIONS(45),
    [anon_sym_COLON_LT_DASH] = ACTIONS(43),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(43),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(43),
    [anon_sym_COLON_LT_EQ] = ACTIONS(43),
    [anon_sym_COLON_LT_GT] = ACTIONS(43),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(43),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(45),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(43),
    [anon_sym_COLON_EQ] = ACTIONS(45),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(45),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(43),
    [anon_sym_COLON_EQ_GT] = ACTIONS(43),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(43),
    [anon_sym_COLON_GT] = ACTIONS(45),
    [anon_sym_COLON_GT_EQ] = ACTIONS(43),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(43),
    [anon_sym_COLON_AT] = ACTIONS(43),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(43),
    [anon_sym_COLON_CARET] = ACTIONS(43),
    [anon_sym_COLON_PIPE] = ACTIONS(45),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(43),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(45),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(43),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(45),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(43),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(43),
    [anon_sym_nil] = ACTIONS(43),
    [anon_sym_COLONnil] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_LT_LT] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(43),
    [anon_sym_PIPE] = ACTIONS(43),
    [sym_comment] = ACTIONS(37),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [sym_float] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_COLONtrue] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_COLONfalse] = ACTIONS(49),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(49),
    [anon_sym_COLON_BANG] = ACTIONS(49),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(49),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(47),
    [anon_sym_COLON_AMP] = ACTIONS(49),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(49),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(47),
    [anon_sym_COLON_STAR] = ACTIONS(47),
    [anon_sym_COLON_PLUS] = ACTIONS(49),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(47),
    [anon_sym_COLON_DASH] = ACTIONS(49),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(47),
    [anon_sym_COLON_DOT] = ACTIONS(49),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(47),
    [anon_sym_COLON_SLASH] = ACTIONS(47),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(47),
    [anon_sym_COLON_LT] = ACTIONS(49),
    [anon_sym_COLON_LT_DASH] = ACTIONS(47),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(47),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(47),
    [anon_sym_COLON_LT_EQ] = ACTIONS(47),
    [anon_sym_COLON_LT_GT] = ACTIONS(47),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(47),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(49),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(47),
    [anon_sym_COLON_EQ] = ACTIONS(49),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(49),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(47),
    [anon_sym_COLON_EQ_GT] = ACTIONS(47),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(47),
    [anon_sym_COLON_GT] = ACTIONS(49),
    [anon_sym_COLON_GT_EQ] = ACTIONS(47),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(47),
    [anon_sym_COLON_AT] = ACTIONS(47),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(47),
    [anon_sym_COLON_CARET] = ACTIONS(47),
    [anon_sym_COLON_PIPE] = ACTIONS(49),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(47),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(47),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(49),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(47),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(47),
    [anon_sym_nil] = ACTIONS(47),
    [anon_sym_COLONnil] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_LT_LT] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(47),
    [sym_comment] = ACTIONS(37),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_integer] = ACTIONS(53),
    [sym_float] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_COLONtrue] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_COLONfalse] = ACTIONS(53),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(53),
    [anon_sym_COLON_BANG] = ACTIONS(53),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(53),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(51),
    [anon_sym_COLON_AMP] = ACTIONS(53),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(53),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(51),
    [anon_sym_COLON_STAR] = ACTIONS(51),
    [anon_sym_COLON_PLUS] = ACTIONS(53),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(51),
    [anon_sym_COLON_DASH] = ACTIONS(53),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(51),
    [anon_sym_COLON_DOT] = ACTIONS(53),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(51),
    [anon_sym_COLON_SLASH] = ACTIONS(51),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(51),
    [anon_sym_COLON_LT] = ACTIONS(53),
    [anon_sym_COLON_LT_DASH] = ACTIONS(51),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(51),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(51),
    [anon_sym_COLON_LT_EQ] = ACTIONS(51),
    [anon_sym_COLON_LT_GT] = ACTIONS(51),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(51),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(53),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(51),
    [anon_sym_COLON_EQ] = ACTIONS(53),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(53),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(51),
    [anon_sym_COLON_EQ_GT] = ACTIONS(51),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(51),
    [anon_sym_COLON_GT] = ACTIONS(53),
    [anon_sym_COLON_GT_EQ] = ACTIONS(51),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(51),
    [anon_sym_COLON_AT] = ACTIONS(51),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(51),
    [anon_sym_COLON_CARET] = ACTIONS(51),
    [anon_sym_COLON_PIPE] = ACTIONS(53),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(51),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(53),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(51),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(53),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(51),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(51),
    [anon_sym_nil] = ACTIONS(51),
    [anon_sym_COLONnil] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_LT_LT] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(51),
    [sym_comment] = ACTIONS(37),
  },
  [6] = {
    [aux_sym_charlist_repeat1] = STATE(15),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(57),
    [sym_comment] = ACTIONS(59),
  },
  [7] = {
    [sym_charlist] = STATE(16),
    [sym_binary_segment] = STATE(18),
    [sym_string] = STATE(16),
    [sym_integer] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_GT_GT] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(37),
  },
  [8] = {
    [aux_sym_string_repeat1] = STATE(20),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(67),
    [sym_comment] = ACTIONS(59),
  },
  [9] = {
    [sym__expression] = STATE(22),
    [sym_true] = STATE(22),
    [sym_false] = STATE(22),
    [sym_atom] = STATE(22),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(22),
    [sym_charlist] = STATE(22),
    [sym_binary] = STATE(22),
    [sym_string] = STATE(22),
    [sym_tuple] = STATE(22),
    [sym_list] = STATE(22),
    [sym__simple_list] = STATE(12),
    [sym__head_tail_list] = STATE(12),
    [sym_integer] = ACTIONS(69),
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
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [10] = {
    [sym__expression] = STATE(24),
    [sym_true] = STATE(24),
    [sym_false] = STATE(24),
    [sym_atom] = STATE(24),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(24),
    [sym_charlist] = STATE(24),
    [sym_binary] = STATE(24),
    [sym_string] = STATE(24),
    [sym_tuple] = STATE(24),
    [sym_list] = STATE(24),
    [sym__simple_list] = STATE(12),
    [sym__head_tail_list] = STATE(12),
    [sym_head] = STATE(25),
    [sym_integer] = ACTIONS(75),
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
    [anon_sym_RBRACK] = ACTIONS(79),
    [sym_comment] = ACTIONS(37),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_comment] = ACTIONS(37),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [sym_integer] = ACTIONS(85),
    [sym_float] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(83),
    [anon_sym_COLONtrue] = ACTIONS(85),
    [anon_sym_false] = ACTIONS(83),
    [anon_sym_COLONfalse] = ACTIONS(85),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(85),
    [anon_sym_COLON_BANG] = ACTIONS(85),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(85),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(83),
    [anon_sym_COLON_AMP] = ACTIONS(85),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(85),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(83),
    [anon_sym_COLON_STAR] = ACTIONS(83),
    [anon_sym_COLON_PLUS] = ACTIONS(85),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(83),
    [anon_sym_COLON_DASH] = ACTIONS(85),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(83),
    [anon_sym_COLON_DOT] = ACTIONS(85),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(83),
    [anon_sym_COLON_SLASH] = ACTIONS(83),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(83),
    [anon_sym_COLON_LT] = ACTIONS(85),
    [anon_sym_COLON_LT_DASH] = ACTIONS(83),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(83),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(83),
    [anon_sym_COLON_LT_EQ] = ACTIONS(83),
    [anon_sym_COLON_LT_GT] = ACTIONS(83),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(83),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(85),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(83),
    [anon_sym_COLON_EQ] = ACTIONS(85),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(85),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(83),
    [anon_sym_COLON_EQ_GT] = ACTIONS(83),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(83),
    [anon_sym_COLON_GT] = ACTIONS(85),
    [anon_sym_COLON_GT_EQ] = ACTIONS(83),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(83),
    [anon_sym_COLON_AT] = ACTIONS(83),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(83),
    [anon_sym_COLON_CARET] = ACTIONS(83),
    [anon_sym_COLON_PIPE] = ACTIONS(85),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(83),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(85),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(83),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(85),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(83),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(83),
    [anon_sym_nil] = ACTIONS(83),
    [anon_sym_COLONnil] = ACTIONS(85),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_RBRACK] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(83),
    [sym_comment] = ACTIONS(37),
  },
  [13] = {
    [sym__expression] = STATE(26),
    [sym_true] = STATE(26),
    [sym_false] = STATE(26),
    [sym_atom] = STATE(26),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(26),
    [sym_charlist] = STATE(26),
    [sym_binary] = STATE(26),
    [sym_string] = STATE(26),
    [sym_tuple] = STATE(26),
    [sym_list] = STATE(26),
    [sym__simple_list] = STATE(12),
    [sym__head_tail_list] = STATE(12),
    [aux_sym_program_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
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
    [sym_comment] = ACTIONS(37),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_integer] = ACTIONS(95),
    [sym_float] = ACTIONS(93),
    [anon_sym_true] = ACTIONS(93),
    [anon_sym_COLONtrue] = ACTIONS(95),
    [anon_sym_false] = ACTIONS(93),
    [anon_sym_COLONfalse] = ACTIONS(95),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(95),
    [anon_sym_COLON_BANG] = ACTIONS(95),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(95),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(93),
    [anon_sym_COLON_AMP] = ACTIONS(95),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(95),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(93),
    [anon_sym_COLON_STAR] = ACTIONS(93),
    [anon_sym_COLON_PLUS] = ACTIONS(95),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(93),
    [anon_sym_COLON_DASH] = ACTIONS(95),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(93),
    [anon_sym_COLON_DOT] = ACTIONS(95),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(93),
    [anon_sym_COLON_SLASH] = ACTIONS(93),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(93),
    [anon_sym_COLON_LT] = ACTIONS(95),
    [anon_sym_COLON_LT_DASH] = ACTIONS(93),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(93),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(93),
    [anon_sym_COLON_LT_EQ] = ACTIONS(93),
    [anon_sym_COLON_LT_GT] = ACTIONS(93),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(93),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(95),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(93),
    [anon_sym_COLON_EQ] = ACTIONS(95),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(95),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(93),
    [anon_sym_COLON_EQ_GT] = ACTIONS(93),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(93),
    [anon_sym_COLON_GT] = ACTIONS(95),
    [anon_sym_COLON_GT_EQ] = ACTIONS(93),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(93),
    [anon_sym_COLON_AT] = ACTIONS(93),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(93),
    [anon_sym_COLON_CARET] = ACTIONS(93),
    [anon_sym_COLON_PIPE] = ACTIONS(95),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(93),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(95),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(93),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(95),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(93),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(93),
    [anon_sym_nil] = ACTIONS(93),
    [anon_sym_COLONnil] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(93),
    [anon_sym_LT_LT] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_COLON_COLON] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_RBRACE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(93),
    [sym_comment] = ACTIONS(37),
  },
  [15] = {
    [aux_sym_charlist_repeat1] = STATE(28),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(99),
    [sym_comment] = ACTIONS(59),
  },
  [16] = {
    [anon_sym_COMMA] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_COLON_COLON] = ACTIONS(103),
    [sym_comment] = ACTIONS(37),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [sym_integer] = ACTIONS(107),
    [sym_float] = ACTIONS(105),
    [anon_sym_true] = ACTIONS(105),
    [anon_sym_COLONtrue] = ACTIONS(107),
    [anon_sym_false] = ACTIONS(105),
    [anon_sym_COLONfalse] = ACTIONS(107),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(107),
    [anon_sym_COLON_BANG] = ACTIONS(107),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(107),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(105),
    [anon_sym_COLON_AMP] = ACTIONS(107),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(107),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(105),
    [anon_sym_COLON_STAR] = ACTIONS(105),
    [anon_sym_COLON_PLUS] = ACTIONS(107),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(105),
    [anon_sym_COLON_DASH] = ACTIONS(107),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(105),
    [anon_sym_COLON_DOT] = ACTIONS(107),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(105),
    [anon_sym_COLON_SLASH] = ACTIONS(105),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(105),
    [anon_sym_COLON_LT] = ACTIONS(107),
    [anon_sym_COLON_LT_DASH] = ACTIONS(105),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(105),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(105),
    [anon_sym_COLON_LT_EQ] = ACTIONS(105),
    [anon_sym_COLON_LT_GT] = ACTIONS(105),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(105),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(107),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(105),
    [anon_sym_COLON_EQ] = ACTIONS(107),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(107),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(105),
    [anon_sym_COLON_EQ_GT] = ACTIONS(105),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(105),
    [anon_sym_COLON_GT] = ACTIONS(107),
    [anon_sym_COLON_GT_EQ] = ACTIONS(105),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(105),
    [anon_sym_COLON_AT] = ACTIONS(105),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(105),
    [anon_sym_COLON_CARET] = ACTIONS(105),
    [anon_sym_COLON_PIPE] = ACTIONS(107),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(105),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(107),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(105),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(107),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(105),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(105),
    [anon_sym_nil] = ACTIONS(105),
    [anon_sym_COLONnil] = ACTIONS(107),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_LT_LT] = ACTIONS(105),
    [anon_sym_COMMA] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_PIPE] = ACTIONS(105),
    [sym_comment] = ACTIONS(37),
  },
  [18] = {
    [aux_sym_binary_repeat1] = STATE(32),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_GT_GT] = ACTIONS(111),
    [sym_comment] = ACTIONS(37),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(113),
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
    [sym_comment] = ACTIONS(37),
  },
  [20] = {
    [aux_sym_string_repeat1] = STATE(34),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(119),
    [sym_comment] = ACTIONS(59),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(121),
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
    [sym_comment] = ACTIONS(37),
  },
  [22] = {
    [aux_sym_tuple_repeat1] = STATE(37),
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_RBRACE] = ACTIONS(127),
    [sym_comment] = ACTIONS(37),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(129),
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
    [sym_comment] = ACTIONS(37),
  },
  [24] = {
    [aux_sym_tuple_repeat1] = STATE(40),
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(135),
    [anon_sym_PIPE] = ACTIONS(137),
    [sym_comment] = ACTIONS(37),
  },
  [25] = {
    [anon_sym_PIPE] = ACTIONS(139),
    [sym_comment] = ACTIONS(37),
  },
  [26] = {
    [sym__expression] = STATE(26),
    [sym_true] = STATE(26),
    [sym_false] = STATE(26),
    [sym_atom] = STATE(26),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(26),
    [sym_charlist] = STATE(26),
    [sym_binary] = STATE(26),
    [sym_string] = STATE(26),
    [sym_tuple] = STATE(26),
    [sym_list] = STATE(26),
    [sym__simple_list] = STATE(12),
    [sym__head_tail_list] = STATE(12),
    [aux_sym_program_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(141),
    [sym_integer] = ACTIONS(143),
    [sym_float] = ACTIONS(146),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_COLONtrue] = ACTIONS(152),
    [anon_sym_false] = ACTIONS(155),
    [anon_sym_COLONfalse] = ACTIONS(158),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(161),
    [anon_sym_COLON_BANG] = ACTIONS(161),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(161),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(164),
    [anon_sym_COLON_AMP] = ACTIONS(161),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(161),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(164),
    [anon_sym_COLON_STAR] = ACTIONS(164),
    [anon_sym_COLON_PLUS] = ACTIONS(161),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(164),
    [anon_sym_COLON_DASH] = ACTIONS(161),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(164),
    [anon_sym_COLON_DOT] = ACTIONS(161),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(164),
    [anon_sym_COLON_SLASH] = ACTIONS(164),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(164),
    [anon_sym_COLON_LT] = ACTIONS(161),
    [anon_sym_COLON_LT_DASH] = ACTIONS(164),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(164),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(164),
    [anon_sym_COLON_LT_EQ] = ACTIONS(164),
    [anon_sym_COLON_LT_GT] = ACTIONS(164),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(164),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(161),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(164),
    [anon_sym_COLON_EQ] = ACTIONS(161),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(161),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(164),
    [anon_sym_COLON_EQ_GT] = ACTIONS(164),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(164),
    [anon_sym_COLON_GT] = ACTIONS(161),
    [anon_sym_COLON_GT_EQ] = ACTIONS(164),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(164),
    [anon_sym_COLON_AT] = ACTIONS(164),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(164),
    [anon_sym_COLON_CARET] = ACTIONS(164),
    [anon_sym_COLON_PIPE] = ACTIONS(161),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(164),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(161),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(164),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(161),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(164),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(164),
    [anon_sym_nil] = ACTIONS(167),
    [anon_sym_COLONnil] = ACTIONS(170),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_LT_LT] = ACTIONS(176),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(182),
    [anon_sym_LBRACK] = ACTIONS(185),
    [sym_comment] = ACTIONS(37),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(188),
    [sym_integer] = ACTIONS(190),
    [sym_float] = ACTIONS(188),
    [anon_sym_true] = ACTIONS(188),
    [anon_sym_COLONtrue] = ACTIONS(190),
    [anon_sym_false] = ACTIONS(188),
    [anon_sym_COLONfalse] = ACTIONS(190),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(190),
    [anon_sym_COLON_BANG] = ACTIONS(190),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(190),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(188),
    [anon_sym_COLON_AMP] = ACTIONS(190),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(190),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(188),
    [anon_sym_COLON_STAR] = ACTIONS(188),
    [anon_sym_COLON_PLUS] = ACTIONS(190),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(188),
    [anon_sym_COLON_DASH] = ACTIONS(190),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(188),
    [anon_sym_COLON_DOT] = ACTIONS(190),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(188),
    [anon_sym_COLON_SLASH] = ACTIONS(188),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(188),
    [anon_sym_COLON_LT] = ACTIONS(190),
    [anon_sym_COLON_LT_DASH] = ACTIONS(188),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(188),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(188),
    [anon_sym_COLON_LT_EQ] = ACTIONS(188),
    [anon_sym_COLON_LT_GT] = ACTIONS(188),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(188),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(190),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(188),
    [anon_sym_COLON_EQ] = ACTIONS(190),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(190),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(188),
    [anon_sym_COLON_EQ_GT] = ACTIONS(188),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(188),
    [anon_sym_COLON_GT] = ACTIONS(190),
    [anon_sym_COLON_GT_EQ] = ACTIONS(188),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(188),
    [anon_sym_COLON_AT] = ACTIONS(188),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(188),
    [anon_sym_COLON_CARET] = ACTIONS(188),
    [anon_sym_COLON_PIPE] = ACTIONS(190),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(188),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(190),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(188),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(190),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(188),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(188),
    [anon_sym_nil] = ACTIONS(188),
    [anon_sym_COLONnil] = ACTIONS(190),
    [anon_sym_SQUOTE] = ACTIONS(188),
    [anon_sym_LT_LT] = ACTIONS(188),
    [anon_sym_COMMA] = ACTIONS(188),
    [anon_sym_GT_GT] = ACTIONS(188),
    [anon_sym_COLON_COLON] = ACTIONS(190),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [anon_sym_LBRACE] = ACTIONS(188),
    [anon_sym_RBRACE] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(188),
    [anon_sym_RBRACK] = ACTIONS(188),
    [anon_sym_PIPE] = ACTIONS(188),
    [sym_comment] = ACTIONS(37),
  },
  [28] = {
    [aux_sym_charlist_repeat1] = STATE(28),
    [anon_sym_SQUOTE] = ACTIONS(192),
    [aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(194),
    [sym_comment] = ACTIONS(59),
  },
  [29] = {
    [sym_binary_options] = ACTIONS(197),
    [sym_comment] = ACTIONS(37),
  },
  [30] = {
    [sym_charlist] = STATE(16),
    [sym_binary_segment] = STATE(44),
    [sym_string] = STATE(16),
    [sym_integer] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_GT_GT] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(37),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [sym_integer] = ACTIONS(203),
    [sym_float] = ACTIONS(201),
    [anon_sym_true] = ACTIONS(201),
    [anon_sym_COLONtrue] = ACTIONS(203),
    [anon_sym_false] = ACTIONS(201),
    [anon_sym_COLONfalse] = ACTIONS(203),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(203),
    [anon_sym_COLON_BANG] = ACTIONS(203),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(203),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(201),
    [anon_sym_COLON_AMP] = ACTIONS(203),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(203),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(201),
    [anon_sym_COLON_STAR] = ACTIONS(201),
    [anon_sym_COLON_PLUS] = ACTIONS(203),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(201),
    [anon_sym_COLON_DASH] = ACTIONS(203),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(201),
    [anon_sym_COLON_DOT] = ACTIONS(203),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(201),
    [anon_sym_COLON_SLASH] = ACTIONS(201),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(201),
    [anon_sym_COLON_LT] = ACTIONS(203),
    [anon_sym_COLON_LT_DASH] = ACTIONS(201),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(201),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(201),
    [anon_sym_COLON_LT_EQ] = ACTIONS(201),
    [anon_sym_COLON_LT_GT] = ACTIONS(201),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(201),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(203),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(201),
    [anon_sym_COLON_EQ] = ACTIONS(203),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(203),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(201),
    [anon_sym_COLON_EQ_GT] = ACTIONS(201),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(201),
    [anon_sym_COLON_GT] = ACTIONS(203),
    [anon_sym_COLON_GT_EQ] = ACTIONS(201),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(201),
    [anon_sym_COLON_AT] = ACTIONS(201),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(201),
    [anon_sym_COLON_CARET] = ACTIONS(201),
    [anon_sym_COLON_PIPE] = ACTIONS(203),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(201),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(203),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(201),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(203),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(201),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(201),
    [anon_sym_nil] = ACTIONS(201),
    [anon_sym_COLONnil] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [anon_sym_LT_LT] = ACTIONS(201),
    [anon_sym_COMMA] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(201),
    [anon_sym_RBRACE] = ACTIONS(201),
    [anon_sym_LBRACK] = ACTIONS(201),
    [anon_sym_RBRACK] = ACTIONS(201),
    [anon_sym_PIPE] = ACTIONS(201),
    [sym_comment] = ACTIONS(37),
  },
  [32] = {
    [aux_sym_binary_repeat1] = STATE(46),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_GT_GT] = ACTIONS(199),
    [sym_comment] = ACTIONS(37),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [sym_integer] = ACTIONS(209),
    [sym_float] = ACTIONS(207),
    [anon_sym_true] = ACTIONS(207),
    [anon_sym_COLONtrue] = ACTIONS(209),
    [anon_sym_false] = ACTIONS(207),
    [anon_sym_COLONfalse] = ACTIONS(209),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(209),
    [anon_sym_COLON_BANG] = ACTIONS(209),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(209),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(207),
    [anon_sym_COLON_AMP] = ACTIONS(209),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(209),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(207),
    [anon_sym_COLON_STAR] = ACTIONS(207),
    [anon_sym_COLON_PLUS] = ACTIONS(209),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(207),
    [anon_sym_COLON_DASH] = ACTIONS(209),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(207),
    [anon_sym_COLON_DOT] = ACTIONS(209),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(207),
    [anon_sym_COLON_SLASH] = ACTIONS(207),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(207),
    [anon_sym_COLON_LT] = ACTIONS(209),
    [anon_sym_COLON_LT_DASH] = ACTIONS(207),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(207),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(207),
    [anon_sym_COLON_LT_EQ] = ACTIONS(207),
    [anon_sym_COLON_LT_GT] = ACTIONS(207),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(207),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(209),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(207),
    [anon_sym_COLON_EQ] = ACTIONS(209),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(209),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(207),
    [anon_sym_COLON_EQ_GT] = ACTIONS(207),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(207),
    [anon_sym_COLON_GT] = ACTIONS(209),
    [anon_sym_COLON_GT_EQ] = ACTIONS(207),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(207),
    [anon_sym_COLON_AT] = ACTIONS(207),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(207),
    [anon_sym_COLON_CARET] = ACTIONS(207),
    [anon_sym_COLON_PIPE] = ACTIONS(209),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(207),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(209),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(207),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(209),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(207),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(207),
    [anon_sym_nil] = ACTIONS(207),
    [anon_sym_COLONnil] = ACTIONS(209),
    [anon_sym_SQUOTE] = ACTIONS(207),
    [anon_sym_LT_LT] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_GT_GT] = ACTIONS(207),
    [anon_sym_COLON_COLON] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(207),
    [anon_sym_LBRACE] = ACTIONS(207),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_RBRACK] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(207),
    [sym_comment] = ACTIONS(37),
  },
  [34] = {
    [aux_sym_string_repeat1] = STATE(34),
    [anon_sym_DQUOTE] = ACTIONS(211),
    [aux_sym_SLASH_BSLASH_BSLASH_DQUOTE_PIPE_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(213),
    [sym_comment] = ACTIONS(59),
  },
  [35] = {
    [sym__expression] = STATE(48),
    [sym_true] = STATE(48),
    [sym_false] = STATE(48),
    [sym_atom] = STATE(48),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(48),
    [sym_charlist] = STATE(48),
    [sym_binary] = STATE(48),
    [sym_string] = STATE(48),
    [sym_tuple] = STATE(48),
    [sym_list] = STATE(48),
    [sym__simple_list] = STATE(12),
    [sym__head_tail_list] = STATE(12),
    [sym_integer] = ACTIONS(216),
    [sym_float] = ACTIONS(218),
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
    [anon_sym_RBRACE] = ACTIONS(220),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(222),
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
    [sym_comment] = ACTIONS(37),
  },
  [37] = {
    [aux_sym_tuple_repeat1] = STATE(50),
    [anon_sym_COMMA] = ACTIONS(226),
    [anon_sym_RBRACE] = ACTIONS(220),
    [sym_comment] = ACTIONS(37),
  },
  [38] = {
    [sym__expression] = STATE(48),
    [sym_true] = STATE(48),
    [sym_false] = STATE(48),
    [sym_atom] = STATE(48),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(48),
    [sym_charlist] = STATE(48),
    [sym_binary] = STATE(48),
    [sym_string] = STATE(48),
    [sym_tuple] = STATE(48),
    [sym_list] = STATE(48),
    [sym__simple_list] = STATE(12),
    [sym__head_tail_list] = STATE(12),
    [sym_integer] = ACTIONS(216),
    [sym_float] = ACTIONS(218),
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
    [anon_sym_RBRACK] = ACTIONS(228),
    [sym_comment] = ACTIONS(37),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(230),
    [sym_integer] = ACTIONS(232),
    [sym_float] = ACTIONS(230),
    [anon_sym_true] = ACTIONS(230),
    [anon_sym_COLONtrue] = ACTIONS(232),
    [anon_sym_false] = ACTIONS(230),
    [anon_sym_COLONfalse] = ACTIONS(232),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(232),
    [anon_sym_COLON_BANG] = ACTIONS(232),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(232),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(230),
    [anon_sym_COLON_AMP] = ACTIONS(232),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(232),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(230),
    [anon_sym_COLON_STAR] = ACTIONS(230),
    [anon_sym_COLON_PLUS] = ACTIONS(232),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(230),
    [anon_sym_COLON_DASH] = ACTIONS(232),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(230),
    [anon_sym_COLON_DOT] = ACTIONS(232),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(230),
    [anon_sym_COLON_SLASH] = ACTIONS(230),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(230),
    [anon_sym_COLON_LT] = ACTIONS(232),
    [anon_sym_COLON_LT_DASH] = ACTIONS(230),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(230),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(230),
    [anon_sym_COLON_LT_EQ] = ACTIONS(230),
    [anon_sym_COLON_LT_GT] = ACTIONS(230),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(230),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(232),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(230),
    [anon_sym_COLON_EQ] = ACTIONS(232),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(232),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(230),
    [anon_sym_COLON_EQ_GT] = ACTIONS(230),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(230),
    [anon_sym_COLON_GT] = ACTIONS(232),
    [anon_sym_COLON_GT_EQ] = ACTIONS(230),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(230),
    [anon_sym_COLON_AT] = ACTIONS(230),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(230),
    [anon_sym_COLON_CARET] = ACTIONS(230),
    [anon_sym_COLON_PIPE] = ACTIONS(232),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(230),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(232),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(230),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(232),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(230),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(230),
    [anon_sym_nil] = ACTIONS(230),
    [anon_sym_COLONnil] = ACTIONS(232),
    [anon_sym_SQUOTE] = ACTIONS(230),
    [anon_sym_LT_LT] = ACTIONS(230),
    [anon_sym_COMMA] = ACTIONS(230),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [anon_sym_LBRACE] = ACTIONS(230),
    [anon_sym_RBRACE] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(230),
    [anon_sym_RBRACK] = ACTIONS(230),
    [anon_sym_PIPE] = ACTIONS(230),
    [sym_comment] = ACTIONS(37),
  },
  [40] = {
    [aux_sym_tuple_repeat1] = STATE(53),
    [anon_sym_COMMA] = ACTIONS(234),
    [anon_sym_RBRACK] = ACTIONS(228),
    [sym_comment] = ACTIONS(37),
  },
  [41] = {
    [sym_list] = STATE(54),
    [sym__simple_list] = STATE(12),
    [sym__head_tail_list] = STATE(12),
    [sym_tail] = STATE(55),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [42] = {
    [anon_sym_COMMA] = ACTIONS(236),
    [anon_sym_GT_GT] = ACTIONS(236),
    [sym_comment] = ACTIONS(37),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(238),
    [sym_integer] = ACTIONS(240),
    [sym_float] = ACTIONS(238),
    [anon_sym_true] = ACTIONS(238),
    [anon_sym_COLONtrue] = ACTIONS(240),
    [anon_sym_false] = ACTIONS(238),
    [anon_sym_COLONfalse] = ACTIONS(240),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(240),
    [anon_sym_COLON_BANG] = ACTIONS(240),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(240),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(238),
    [anon_sym_COLON_AMP] = ACTIONS(240),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(240),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(238),
    [anon_sym_COLON_STAR] = ACTIONS(238),
    [anon_sym_COLON_PLUS] = ACTIONS(240),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(238),
    [anon_sym_COLON_DASH] = ACTIONS(240),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(238),
    [anon_sym_COLON_DOT] = ACTIONS(240),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(238),
    [anon_sym_COLON_SLASH] = ACTIONS(238),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(238),
    [anon_sym_COLON_LT] = ACTIONS(240),
    [anon_sym_COLON_LT_DASH] = ACTIONS(238),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(238),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(238),
    [anon_sym_COLON_LT_EQ] = ACTIONS(238),
    [anon_sym_COLON_LT_GT] = ACTIONS(238),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(238),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(240),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(238),
    [anon_sym_COLON_EQ] = ACTIONS(240),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(240),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(238),
    [anon_sym_COLON_EQ_GT] = ACTIONS(238),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(238),
    [anon_sym_COLON_GT] = ACTIONS(240),
    [anon_sym_COLON_GT_EQ] = ACTIONS(238),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(238),
    [anon_sym_COLON_AT] = ACTIONS(238),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(238),
    [anon_sym_COLON_CARET] = ACTIONS(238),
    [anon_sym_COLON_PIPE] = ACTIONS(240),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(238),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(240),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(238),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(240),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(238),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(238),
    [anon_sym_nil] = ACTIONS(238),
    [anon_sym_COLONnil] = ACTIONS(240),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [anon_sym_LT_LT] = ACTIONS(238),
    [anon_sym_COMMA] = ACTIONS(238),
    [anon_sym_DQUOTE] = ACTIONS(238),
    [anon_sym_LBRACE] = ACTIONS(238),
    [anon_sym_RBRACE] = ACTIONS(238),
    [anon_sym_LBRACK] = ACTIONS(238),
    [anon_sym_RBRACK] = ACTIONS(238),
    [anon_sym_PIPE] = ACTIONS(238),
    [sym_comment] = ACTIONS(37),
  },
  [44] = {
    [anon_sym_COMMA] = ACTIONS(242),
    [anon_sym_GT_GT] = ACTIONS(242),
    [sym_comment] = ACTIONS(37),
  },
  [45] = {
    [sym_charlist] = STATE(16),
    [sym_binary_segment] = STATE(44),
    [sym_string] = STATE(16),
    [sym_integer] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_GT_GT] = ACTIONS(244),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(37),
  },
  [46] = {
    [aux_sym_binary_repeat1] = STATE(46),
    [anon_sym_COMMA] = ACTIONS(246),
    [anon_sym_GT_GT] = ACTIONS(242),
    [sym_comment] = ACTIONS(37),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [sym_integer] = ACTIONS(251),
    [sym_float] = ACTIONS(249),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_COLONtrue] = ACTIONS(251),
    [anon_sym_false] = ACTIONS(249),
    [anon_sym_COLONfalse] = ACTIONS(251),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(251),
    [anon_sym_COLON_BANG] = ACTIONS(251),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(251),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(249),
    [anon_sym_COLON_AMP] = ACTIONS(251),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(251),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(249),
    [anon_sym_COLON_STAR] = ACTIONS(249),
    [anon_sym_COLON_PLUS] = ACTIONS(251),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(249),
    [anon_sym_COLON_DASH] = ACTIONS(251),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(249),
    [anon_sym_COLON_DOT] = ACTIONS(251),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(249),
    [anon_sym_COLON_SLASH] = ACTIONS(249),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(249),
    [anon_sym_COLON_LT] = ACTIONS(251),
    [anon_sym_COLON_LT_DASH] = ACTIONS(249),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(249),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(249),
    [anon_sym_COLON_LT_EQ] = ACTIONS(249),
    [anon_sym_COLON_LT_GT] = ACTIONS(249),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(249),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(251),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(249),
    [anon_sym_COLON_EQ] = ACTIONS(251),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(251),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(249),
    [anon_sym_COLON_EQ_GT] = ACTIONS(249),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(249),
    [anon_sym_COLON_GT] = ACTIONS(251),
    [anon_sym_COLON_GT_EQ] = ACTIONS(249),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(249),
    [anon_sym_COLON_AT] = ACTIONS(249),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(249),
    [anon_sym_COLON_CARET] = ACTIONS(249),
    [anon_sym_COLON_PIPE] = ACTIONS(251),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(249),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(251),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(249),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(251),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(249),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(249),
    [anon_sym_nil] = ACTIONS(249),
    [anon_sym_COLONnil] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(249),
    [anon_sym_RBRACE] = ACTIONS(249),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_RBRACK] = ACTIONS(249),
    [anon_sym_PIPE] = ACTIONS(249),
    [sym_comment] = ACTIONS(37),
  },
  [48] = {
    [anon_sym_COMMA] = ACTIONS(253),
    [anon_sym_RBRACE] = ACTIONS(253),
    [anon_sym_RBRACK] = ACTIONS(253),
    [sym_comment] = ACTIONS(37),
  },
  [49] = {
    [sym__expression] = STATE(48),
    [sym_true] = STATE(48),
    [sym_false] = STATE(48),
    [sym_atom] = STATE(48),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(48),
    [sym_charlist] = STATE(48),
    [sym_binary] = STATE(48),
    [sym_string] = STATE(48),
    [sym_tuple] = STATE(48),
    [sym_list] = STATE(48),
    [sym__simple_list] = STATE(12),
    [sym__head_tail_list] = STATE(12),
    [sym_integer] = ACTIONS(216),
    [sym_float] = ACTIONS(218),
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
    [anon_sym_RBRACE] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [50] = {
    [aux_sym_tuple_repeat1] = STATE(50),
    [anon_sym_COMMA] = ACTIONS(257),
    [anon_sym_RBRACE] = ACTIONS(253),
    [sym_comment] = ACTIONS(37),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(260),
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
    [sym_comment] = ACTIONS(37),
  },
  [52] = {
    [sym__expression] = STATE(48),
    [sym_true] = STATE(48),
    [sym_false] = STATE(48),
    [sym_atom] = STATE(48),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(48),
    [sym_charlist] = STATE(48),
    [sym_binary] = STATE(48),
    [sym_string] = STATE(48),
    [sym_tuple] = STATE(48),
    [sym_list] = STATE(48),
    [sym__simple_list] = STATE(12),
    [sym__head_tail_list] = STATE(12),
    [sym_integer] = ACTIONS(216),
    [sym_float] = ACTIONS(218),
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
    [anon_sym_RBRACK] = ACTIONS(264),
    [sym_comment] = ACTIONS(37),
  },
  [53] = {
    [aux_sym_tuple_repeat1] = STATE(53),
    [anon_sym_COMMA] = ACTIONS(257),
    [anon_sym_RBRACK] = ACTIONS(253),
    [sym_comment] = ACTIONS(37),
  },
  [54] = {
    [anon_sym_RBRACK] = ACTIONS(266),
    [sym_comment] = ACTIONS(37),
  },
  [55] = {
    [anon_sym_RBRACK] = ACTIONS(268),
    [sym_comment] = ACTIONS(37),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(270),
    [sym_integer] = ACTIONS(272),
    [sym_float] = ACTIONS(270),
    [anon_sym_true] = ACTIONS(270),
    [anon_sym_COLONtrue] = ACTIONS(272),
    [anon_sym_false] = ACTIONS(270),
    [anon_sym_COLONfalse] = ACTIONS(272),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(272),
    [anon_sym_COLON_BANG] = ACTIONS(272),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(272),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(270),
    [anon_sym_COLON_AMP] = ACTIONS(272),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(272),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(270),
    [anon_sym_COLON_STAR] = ACTIONS(270),
    [anon_sym_COLON_PLUS] = ACTIONS(272),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(270),
    [anon_sym_COLON_DASH] = ACTIONS(272),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(270),
    [anon_sym_COLON_DOT] = ACTIONS(272),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(270),
    [anon_sym_COLON_SLASH] = ACTIONS(270),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(270),
    [anon_sym_COLON_LT] = ACTIONS(272),
    [anon_sym_COLON_LT_DASH] = ACTIONS(270),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(270),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(270),
    [anon_sym_COLON_LT_EQ] = ACTIONS(270),
    [anon_sym_COLON_LT_GT] = ACTIONS(270),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(270),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(272),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(270),
    [anon_sym_COLON_EQ] = ACTIONS(272),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(272),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(270),
    [anon_sym_COLON_EQ_GT] = ACTIONS(270),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(270),
    [anon_sym_COLON_GT] = ACTIONS(272),
    [anon_sym_COLON_GT_EQ] = ACTIONS(270),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(270),
    [anon_sym_COLON_AT] = ACTIONS(270),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(270),
    [anon_sym_COLON_CARET] = ACTIONS(270),
    [anon_sym_COLON_PIPE] = ACTIONS(272),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(270),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(272),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(270),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(272),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(270),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(270),
    [anon_sym_nil] = ACTIONS(270),
    [anon_sym_COLONnil] = ACTIONS(272),
    [anon_sym_SQUOTE] = ACTIONS(270),
    [anon_sym_LT_LT] = ACTIONS(270),
    [anon_sym_COMMA] = ACTIONS(270),
    [anon_sym_DQUOTE] = ACTIONS(270),
    [anon_sym_LBRACE] = ACTIONS(270),
    [anon_sym_RBRACE] = ACTIONS(270),
    [anon_sym_LBRACK] = ACTIONS(270),
    [anon_sym_RBRACK] = ACTIONS(270),
    [anon_sym_PIPE] = ACTIONS(270),
    [sym_comment] = ACTIONS(37),
  },
  [57] = {
    [sym_charlist] = STATE(16),
    [sym_binary_segment] = STATE(44),
    [sym_string] = STATE(16),
    [sym_integer] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_comment] = ACTIONS(37),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(274),
    [sym_integer] = ACTIONS(276),
    [sym_float] = ACTIONS(274),
    [anon_sym_true] = ACTIONS(274),
    [anon_sym_COLONtrue] = ACTIONS(276),
    [anon_sym_false] = ACTIONS(274),
    [anon_sym_COLONfalse] = ACTIONS(276),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(276),
    [anon_sym_COLON_BANG] = ACTIONS(276),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(276),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(274),
    [anon_sym_COLON_AMP] = ACTIONS(276),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(276),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(274),
    [anon_sym_COLON_STAR] = ACTIONS(274),
    [anon_sym_COLON_PLUS] = ACTIONS(276),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(274),
    [anon_sym_COLON_DASH] = ACTIONS(276),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(274),
    [anon_sym_COLON_DOT] = ACTIONS(276),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(274),
    [anon_sym_COLON_SLASH] = ACTIONS(274),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(274),
    [anon_sym_COLON_LT] = ACTIONS(276),
    [anon_sym_COLON_LT_DASH] = ACTIONS(274),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(274),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(274),
    [anon_sym_COLON_LT_EQ] = ACTIONS(274),
    [anon_sym_COLON_LT_GT] = ACTIONS(274),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(274),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(276),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(274),
    [anon_sym_COLON_EQ] = ACTIONS(276),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(276),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(274),
    [anon_sym_COLON_EQ_GT] = ACTIONS(274),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(274),
    [anon_sym_COLON_GT] = ACTIONS(276),
    [anon_sym_COLON_GT_EQ] = ACTIONS(274),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(274),
    [anon_sym_COLON_AT] = ACTIONS(274),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(274),
    [anon_sym_COLON_CARET] = ACTIONS(274),
    [anon_sym_COLON_PIPE] = ACTIONS(276),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(274),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(276),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(274),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(276),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(274),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(274),
    [anon_sym_nil] = ACTIONS(274),
    [anon_sym_COLONnil] = ACTIONS(276),
    [anon_sym_SQUOTE] = ACTIONS(274),
    [anon_sym_LT_LT] = ACTIONS(274),
    [anon_sym_COMMA] = ACTIONS(274),
    [anon_sym_DQUOTE] = ACTIONS(274),
    [anon_sym_LBRACE] = ACTIONS(274),
    [anon_sym_RBRACE] = ACTIONS(274),
    [anon_sym_LBRACK] = ACTIONS(274),
    [anon_sym_RBRACK] = ACTIONS(274),
    [anon_sym_PIPE] = ACTIONS(274),
    [sym_comment] = ACTIONS(37),
  },
  [59] = {
    [sym__expression] = STATE(48),
    [sym_true] = STATE(48),
    [sym_false] = STATE(48),
    [sym_atom] = STATE(48),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(48),
    [sym_charlist] = STATE(48),
    [sym_binary] = STATE(48),
    [sym_string] = STATE(48),
    [sym_tuple] = STATE(48),
    [sym_list] = STATE(48),
    [sym__simple_list] = STATE(12),
    [sym__head_tail_list] = STATE(12),
    [sym_integer] = ACTIONS(216),
    [sym_float] = ACTIONS(218),
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
    [sym_comment] = ACTIONS(37),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(278),
    [sym_integer] = ACTIONS(280),
    [sym_float] = ACTIONS(278),
    [anon_sym_true] = ACTIONS(278),
    [anon_sym_COLONtrue] = ACTIONS(280),
    [anon_sym_false] = ACTIONS(278),
    [anon_sym_COLONfalse] = ACTIONS(280),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(280),
    [anon_sym_COLON_BANG] = ACTIONS(280),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(280),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(278),
    [anon_sym_COLON_AMP] = ACTIONS(280),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(280),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(278),
    [anon_sym_COLON_STAR] = ACTIONS(278),
    [anon_sym_COLON_PLUS] = ACTIONS(280),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(278),
    [anon_sym_COLON_DASH] = ACTIONS(280),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(278),
    [anon_sym_COLON_DOT] = ACTIONS(280),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(278),
    [anon_sym_COLON_SLASH] = ACTIONS(278),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(278),
    [anon_sym_COLON_LT] = ACTIONS(280),
    [anon_sym_COLON_LT_DASH] = ACTIONS(278),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(278),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(278),
    [anon_sym_COLON_LT_EQ] = ACTIONS(278),
    [anon_sym_COLON_LT_GT] = ACTIONS(278),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(278),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(280),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(278),
    [anon_sym_COLON_EQ] = ACTIONS(280),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(280),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(278),
    [anon_sym_COLON_EQ_GT] = ACTIONS(278),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(278),
    [anon_sym_COLON_GT] = ACTIONS(280),
    [anon_sym_COLON_GT_EQ] = ACTIONS(278),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(278),
    [anon_sym_COLON_AT] = ACTIONS(278),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(278),
    [anon_sym_COLON_CARET] = ACTIONS(278),
    [anon_sym_COLON_PIPE] = ACTIONS(280),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(278),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(280),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(278),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(280),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(278),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(278),
    [anon_sym_nil] = ACTIONS(278),
    [anon_sym_COLONnil] = ACTIONS(280),
    [anon_sym_SQUOTE] = ACTIONS(278),
    [anon_sym_LT_LT] = ACTIONS(278),
    [anon_sym_COMMA] = ACTIONS(278),
    [anon_sym_DQUOTE] = ACTIONS(278),
    [anon_sym_LBRACE] = ACTIONS(278),
    [anon_sym_RBRACE] = ACTIONS(278),
    [anon_sym_LBRACK] = ACTIONS(278),
    [anon_sym_RBRACK] = ACTIONS(278),
    [anon_sym_PIPE] = ACTIONS(278),
    [sym_comment] = ACTIONS(37),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(282),
    [sym_integer] = ACTIONS(284),
    [sym_float] = ACTIONS(282),
    [anon_sym_true] = ACTIONS(282),
    [anon_sym_COLONtrue] = ACTIONS(284),
    [anon_sym_false] = ACTIONS(282),
    [anon_sym_COLONfalse] = ACTIONS(284),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(284),
    [anon_sym_COLON_BANG] = ACTIONS(284),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(284),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(282),
    [anon_sym_COLON_AMP] = ACTIONS(284),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(284),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(282),
    [anon_sym_COLON_STAR] = ACTIONS(282),
    [anon_sym_COLON_PLUS] = ACTIONS(284),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(282),
    [anon_sym_COLON_DASH] = ACTIONS(284),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(282),
    [anon_sym_COLON_DOT] = ACTIONS(284),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(282),
    [anon_sym_COLON_SLASH] = ACTIONS(282),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(282),
    [anon_sym_COLON_LT] = ACTIONS(284),
    [anon_sym_COLON_LT_DASH] = ACTIONS(282),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(282),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(282),
    [anon_sym_COLON_LT_EQ] = ACTIONS(282),
    [anon_sym_COLON_LT_GT] = ACTIONS(282),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(282),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(284),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(282),
    [anon_sym_COLON_EQ] = ACTIONS(284),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(284),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(282),
    [anon_sym_COLON_EQ_GT] = ACTIONS(282),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(282),
    [anon_sym_COLON_GT] = ACTIONS(284),
    [anon_sym_COLON_GT_EQ] = ACTIONS(282),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(282),
    [anon_sym_COLON_AT] = ACTIONS(282),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(282),
    [anon_sym_COLON_CARET] = ACTIONS(282),
    [anon_sym_COLON_PIPE] = ACTIONS(284),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(282),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(284),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(282),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(284),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(282),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(282),
    [anon_sym_nil] = ACTIONS(282),
    [anon_sym_COLONnil] = ACTIONS(284),
    [anon_sym_SQUOTE] = ACTIONS(282),
    [anon_sym_LT_LT] = ACTIONS(282),
    [anon_sym_COMMA] = ACTIONS(282),
    [anon_sym_DQUOTE] = ACTIONS(282),
    [anon_sym_LBRACE] = ACTIONS(282),
    [anon_sym_RBRACE] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(282),
    [anon_sym_RBRACK] = ACTIONS(282),
    [anon_sym_PIPE] = ACTIONS(282),
    [sym_comment] = ACTIONS(37),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(13),
  [9] = {.count = 1, .reusable = true}, SHIFT(13),
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
  [37] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_true, 1),
  [41] = {.count = 1, .reusable = false}, REDUCE(sym_true, 1),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_false, 1),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym_false, 1),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 1),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 1),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_nil, 1),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym_nil, 1),
  [55] = {.count = 1, .reusable = false}, SHIFT(14),
  [57] = {.count = 1, .reusable = false}, SHIFT(15),
  [59] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [61] = {.count = 1, .reusable = true}, SHIFT(16),
  [63] = {.count = 1, .reusable = true}, SHIFT(17),
  [65] = {.count = 1, .reusable = false}, SHIFT(19),
  [67] = {.count = 1, .reusable = false}, SHIFT(20),
  [69] = {.count = 1, .reusable = false}, SHIFT(22),
  [71] = {.count = 1, .reusable = true}, SHIFT(22),
  [73] = {.count = 1, .reusable = true}, SHIFT(21),
  [75] = {.count = 1, .reusable = false}, SHIFT(24),
  [77] = {.count = 1, .reusable = true}, SHIFT(24),
  [79] = {.count = 1, .reusable = true}, SHIFT(23),
  [81] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_list, 1),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_list, 1),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [89] = {.count = 1, .reusable = false}, SHIFT(26),
  [91] = {.count = 1, .reusable = true}, SHIFT(26),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_charlist, 2),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_charlist, 2),
  [97] = {.count = 1, .reusable = false}, SHIFT(27),
  [99] = {.count = 1, .reusable = false}, SHIFT(28),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_binary_segment, 1),
  [103] = {.count = 1, .reusable = true}, SHIFT(29),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 2),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 2),
  [109] = {.count = 1, .reusable = true}, SHIFT(30),
  [111] = {.count = 1, .reusable = true}, SHIFT(31),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [117] = {.count = 1, .reusable = false}, SHIFT(33),
  [119] = {.count = 1, .reusable = false}, SHIFT(34),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 2),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 2),
  [125] = {.count = 1, .reusable = true}, SHIFT(35),
  [127] = {.count = 1, .reusable = true}, SHIFT(36),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 2),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 2),
  [133] = {.count = 1, .reusable = true}, SHIFT(38),
  [135] = {.count = 1, .reusable = true}, SHIFT(39),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_head, 1),
  [139] = {.count = 1, .reusable = true}, SHIFT(41),
  [141] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [143] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [146] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [149] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [152] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [155] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [158] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [161] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [164] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [170] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [173] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [176] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [179] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [182] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [185] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [188] = {.count = 1, .reusable = true}, REDUCE(sym_charlist, 3),
  [190] = {.count = 1, .reusable = false}, REDUCE(sym_charlist, 3),
  [192] = {.count = 1, .reusable = false}, REDUCE(aux_sym_charlist_repeat1, 2),
  [194] = {.count = 2, .reusable = false}, REDUCE(aux_sym_charlist_repeat1, 2), SHIFT_REPEAT(28),
  [197] = {.count = 1, .reusable = true}, SHIFT(42),
  [199] = {.count = 1, .reusable = true}, SHIFT(43),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 3),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 3),
  [205] = {.count = 1, .reusable = true}, SHIFT(45),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [211] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2),
  [213] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(34),
  [216] = {.count = 1, .reusable = false}, SHIFT(48),
  [218] = {.count = 1, .reusable = true}, SHIFT(48),
  [220] = {.count = 1, .reusable = true}, SHIFT(47),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 3),
  [224] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 3),
  [226] = {.count = 1, .reusable = true}, SHIFT(49),
  [228] = {.count = 1, .reusable = true}, SHIFT(51),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 3),
  [232] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 3),
  [234] = {.count = 1, .reusable = true}, SHIFT(52),
  [236] = {.count = 1, .reusable = true}, REDUCE(sym_binary_segment, 3),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 4),
  [240] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 4),
  [242] = {.count = 1, .reusable = true}, REDUCE(aux_sym_binary_repeat1, 2),
  [244] = {.count = 1, .reusable = true}, SHIFT(56),
  [246] = {.count = 2, .reusable = true}, REDUCE(aux_sym_binary_repeat1, 2), SHIFT_REPEAT(57),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 4),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 4),
  [253] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [255] = {.count = 1, .reusable = true}, SHIFT(58),
  [257] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(59),
  [260] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 4),
  [262] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 4),
  [264] = {.count = 1, .reusable = true}, SHIFT(60),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_tail, 1),
  [268] = {.count = 1, .reusable = true}, SHIFT(61),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 5),
  [272] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 5),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 5),
  [276] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 5),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 5),
  [280] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 5),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym__head_tail_list, 5),
  [284] = {.count = 1, .reusable = false}, REDUCE(sym__head_tail_list, 5),
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
