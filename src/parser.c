#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum {
  sym_package_clause = 1,
  sym_package_identifier = 2,
  anon_sym_type = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  aux_sym_type_identifier_token1 = 6,
  sym_operator_assign = 7,
  sym_or = 8,
  sym_not = 9,
  sym_none_or_more = 10,
  sym_one_or_more = 11,
  sym_zero_or_one = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  sym_any_char = 15,
  anon_sym_SQUOTE = 16,
  aux_sym_text_case_sen_token1 = 17,
  anon_sym_DQUOTE = 18,
  aux_sym_text_case_insen_token1 = 19,
  sym_source_file = 20,
  sym_go_section = 21,
  sym_type_declaration = 22,
  sym_type_spec = 23,
  sym_block = 24,
  sym_type_identifier = 25,
  sym_peg_section = 26,
  sym_peg_rule = 27,
  sym_rule_name = 28,
  sym_rule_body = 29,
  sym_rule_identifier = 30,
  sym_text = 31,
  sym_text_case_sen = 32,
  sym_text_case_insen = 33,
  aux_sym_peg_section_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_package_clause] = "package_clause",
  [sym_package_identifier] = "package_identifier",
  [anon_sym_type] = "type",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_type_identifier_token1] = "type_identifier_token1",
  [sym_operator_assign] = "operator_assign",
  [sym_or] = "or",
  [sym_not] = "not",
  [sym_none_or_more] = "none_or_more",
  [sym_one_or_more] = "one_or_more",
  [sym_zero_or_one] = "zero_or_one",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_any_char] = "any_char",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_text_case_sen_token1] = "text_case_sen_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_text_case_insen_token1] = "text_case_insen_token1",
  [sym_source_file] = "source_file",
  [sym_go_section] = "go_section",
  [sym_type_declaration] = "type_declaration",
  [sym_type_spec] = "type_spec",
  [sym_block] = "block",
  [sym_type_identifier] = "type_identifier",
  [sym_peg_section] = "peg_section",
  [sym_peg_rule] = "peg_rule",
  [sym_rule_name] = "rule_name",
  [sym_rule_body] = "rule_body",
  [sym_rule_identifier] = "rule_identifier",
  [sym_text] = "text",
  [sym_text_case_sen] = "text_case_sen",
  [sym_text_case_insen] = "text_case_insen",
  [aux_sym_peg_section_repeat1] = "peg_section_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_package_clause] = sym_package_clause,
  [sym_package_identifier] = sym_package_identifier,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_type_identifier_token1] = aux_sym_type_identifier_token1,
  [sym_operator_assign] = sym_operator_assign,
  [sym_or] = sym_or,
  [sym_not] = sym_not,
  [sym_none_or_more] = sym_none_or_more,
  [sym_one_or_more] = sym_one_or_more,
  [sym_zero_or_one] = sym_zero_or_one,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_any_char] = sym_any_char,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_text_case_sen_token1] = aux_sym_text_case_sen_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_text_case_insen_token1] = aux_sym_text_case_insen_token1,
  [sym_source_file] = sym_source_file,
  [sym_go_section] = sym_go_section,
  [sym_type_declaration] = sym_type_declaration,
  [sym_type_spec] = sym_type_spec,
  [sym_block] = sym_block,
  [sym_type_identifier] = sym_type_identifier,
  [sym_peg_section] = sym_peg_section,
  [sym_peg_rule] = sym_peg_rule,
  [sym_rule_name] = sym_rule_name,
  [sym_rule_body] = sym_rule_body,
  [sym_rule_identifier] = sym_rule_identifier,
  [sym_text] = sym_text,
  [sym_text_case_sen] = sym_text_case_sen,
  [sym_text_case_insen] = sym_text_case_insen,
  [aux_sym_peg_section_repeat1] = aux_sym_peg_section_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_package_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_package_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_type] = {
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
  [aux_sym_type_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_operator_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_or] = {
    .visible = true,
    .named = true,
  },
  [sym_not] = {
    .visible = true,
    .named = true,
  },
  [sym_none_or_more] = {
    .visible = true,
    .named = true,
  },
  [sym_one_or_more] = {
    .visible = true,
    .named = true,
  },
  [sym_zero_or_one] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_any_char] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_case_sen_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_case_insen_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_go_section] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_peg_section] = {
    .visible = true,
    .named = true,
  },
  [sym_peg_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_name] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_body] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_text_case_sen] = {
    .visible = true,
    .named = true,
  },
  [sym_text_case_insen] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_peg_section_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
  field_rule = 2,
  field_type = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_rule] = "rule",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_rule, 0},
  [1] =
    {field_name, 0},
    {field_type, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '!') ADVANCE(32);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '+') ADVANCE(34);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '?') ADVANCE(35);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == 'p') ADVANCE(2);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'g') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'k') ADVANCE(3);
      END_STATE();
    case 9:
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 10:
      if (lookahead == 'p') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'y') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(41);
      END_STATE();
    case 13:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_package_clause);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_package_clause);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_package_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'a') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'a') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'c') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'e') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'g') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (lookahead == 'k') ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_type_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_operator_assign);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_not);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_none_or_more);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_one_or_more);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_zero_or_one);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_any_char);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_text_case_sen_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_text_case_sen_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_text_case_insen_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_text_case_insen_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(44);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 15},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_package_clause] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_operator_assign] = ACTIONS(1),
    [sym_or] = ACTIONS(1),
    [sym_not] = ACTIONS(1),
    [sym_none_or_more] = ACTIONS(1),
    [sym_one_or_more] = ACTIONS(1),
    [sym_zero_or_one] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_any_char] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(30),
    [sym_go_section] = STATE(3),
    [sym_peg_section] = STATE(29),
    [sym_peg_rule] = STATE(4),
    [sym_rule_name] = STATE(26),
    [sym_rule_identifier] = STATE(23),
    [aux_sym_peg_section_repeat1] = STATE(4),
    [sym_package_clause] = ACTIONS(3),
    [aux_sym_type_identifier_token1] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_SQUOTE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      sym_rule_body,
    STATE(9), 2,
      sym_rule_identifier,
      sym_text,
    STATE(16), 2,
      sym_text_case_sen,
      sym_text_case_insen,
  [21] = 5,
    ACTIONS(7), 1,
      aux_sym_type_identifier_token1,
    STATE(22), 1,
      sym_peg_section,
    STATE(23), 1,
      sym_rule_identifier,
    STATE(26), 1,
      sym_rule_name,
    STATE(4), 2,
      sym_peg_rule,
      aux_sym_peg_section_repeat1,
  [38] = 5,
    ACTIONS(7), 1,
      aux_sym_type_identifier_token1,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      sym_rule_identifier,
    STATE(26), 1,
      sym_rule_name,
    STATE(5), 2,
      sym_peg_rule,
      aux_sym_peg_section_repeat1,
  [55] = 5,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      aux_sym_type_identifier_token1,
    STATE(23), 1,
      sym_rule_identifier,
    STATE(26), 1,
      sym_rule_name,
    STATE(5), 2,
      sym_peg_rule,
      aux_sym_peg_section_repeat1,
  [72] = 1,
    ACTIONS(20), 3,
      ts_builtin_sym_end,
      aux_sym_type_identifier_token1,
      sym_operator_assign,
  [78] = 1,
    ACTIONS(22), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_type_identifier_token1,
  [84] = 3,
    ACTIONS(24), 1,
      aux_sym_type_identifier_token1,
    STATE(13), 1,
      sym_type_identifier,
    STATE(14), 1,
      sym_type_spec,
  [94] = 1,
    ACTIONS(26), 2,
      ts_builtin_sym_end,
      aux_sym_type_identifier_token1,
  [99] = 1,
    ACTIONS(28), 2,
      ts_builtin_sym_end,
      aux_sym_type_identifier_token1,
  [104] = 1,
    ACTIONS(30), 2,
      ts_builtin_sym_end,
      aux_sym_type_identifier_token1,
  [109] = 2,
    ACTIONS(24), 1,
      aux_sym_type_identifier_token1,
    STATE(31), 1,
      sym_type_identifier,
  [116] = 2,
    ACTIONS(24), 1,
      aux_sym_type_identifier_token1,
    STATE(28), 1,
      sym_type_identifier,
  [123] = 2,
    ACTIONS(32), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_block,
  [130] = 2,
    ACTIONS(34), 1,
      anon_sym_type,
    STATE(21), 1,
      sym_type_declaration,
  [137] = 1,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      aux_sym_type_identifier_token1,
  [142] = 1,
    ACTIONS(38), 2,
      ts_builtin_sym_end,
      aux_sym_type_identifier_token1,
  [147] = 1,
    ACTIONS(40), 1,
      aux_sym_text_case_sen_token1,
  [151] = 1,
    ACTIONS(42), 1,
      aux_sym_text_case_insen_token1,
  [155] = 1,
    ACTIONS(44), 1,
      sym_package_identifier,
  [159] = 1,
    ACTIONS(46), 1,
      aux_sym_type_identifier_token1,
  [163] = 1,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
  [167] = 1,
    ACTIONS(50), 1,
      sym_operator_assign,
  [171] = 1,
    ACTIONS(52), 1,
      anon_sym_SQUOTE,
  [175] = 1,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
  [179] = 1,
    ACTIONS(56), 1,
      sym_operator_assign,
  [183] = 1,
    ACTIONS(58), 1,
      aux_sym_type_identifier_token1,
  [187] = 1,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
  [191] = 1,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
  [195] = 1,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
  [199] = 1,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
  [203] = 1,
    ACTIONS(68), 1,
      aux_sym_type_identifier_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 55,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 78,
  [SMALL_STATE(8)] = 84,
  [SMALL_STATE(9)] = 94,
  [SMALL_STATE(10)] = 99,
  [SMALL_STATE(11)] = 104,
  [SMALL_STATE(12)] = 109,
  [SMALL_STATE(13)] = 116,
  [SMALL_STATE(14)] = 123,
  [SMALL_STATE(15)] = 130,
  [SMALL_STATE(16)] = 137,
  [SMALL_STATE(17)] = 142,
  [SMALL_STATE(18)] = 147,
  [SMALL_STATE(19)] = 151,
  [SMALL_STATE(20)] = 155,
  [SMALL_STATE(21)] = 159,
  [SMALL_STATE(22)] = 163,
  [SMALL_STATE(23)] = 167,
  [SMALL_STATE(24)] = 171,
  [SMALL_STATE(25)] = 175,
  [SMALL_STATE(26)] = 179,
  [SMALL_STATE(27)] = 183,
  [SMALL_STATE(28)] = 187,
  [SMALL_STATE(29)] = 191,
  [SMALL_STATE(30)] = 195,
  [SMALL_STATE(31)] = 199,
  [SMALL_STATE(32)] = 203,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_peg_section, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_peg_section_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_peg_section_repeat1, 2), SHIFT_REPEAT(6),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_identifier, 1),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_case_insen, 3),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_case_sen, 3),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_peg_rule, 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_go_section, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_name, 1, .production_id = 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_spec, 2, .production_id = 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [64] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_peg(void) {
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
