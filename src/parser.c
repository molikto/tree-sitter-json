#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_ = 1,
  anon_sym_2 = 2,
  anon_sym_3 = 3,
  anon_sym_4 = 4,
  anon_sym_5 = 5,
  anon_sym_6 = 6,
  sym_string = 7,
  sym_number = 8,
  sym_true = 9,
  sym_false = 10,
  sym_null = 11,
  sym_error = 12,
  sym_document = 13,
  sym__value = 14,
  sym_object = 15,
  sym_pair = 16,
  sym_array = 17,
  aux_sym_object_repeat1 = 18,
  aux_sym_array_repeat1 = 19,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = "",
  [anon_sym_2] = "",
  [anon_sym_3] = "",
  [anon_sym_4] = "",
  [anon_sym_5] = "",
  [anon_sym_6] = "",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_error] = "error",
  [sym_document] = "document",
  [sym__value] = "_value",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_array] = "array",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_] = anon_sym_,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_3] = anon_sym_3,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_5] = anon_sym_5,
  [anon_sym_6] = anon_sym_6,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_error] = sym_error,
  [sym_document] = sym_document,
  [sym__value] = sym__value,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym_array] = sym_array,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_6] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
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
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_error] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_value = 2,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[2] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 2},
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1);
      if (lookahead == 1) ADVANCE(2);
      if (lookahead == 2) ADVANCE(3);
      if (lookahead == 3) ADVANCE(4);
      if (lookahead == 4) ADVANCE(5);
      if (lookahead == 5) ADVANCE(6);
      if (lookahead == 6) ADVANCE(7);
      if (lookahead == 7) ADVANCE(8);
      if (lookahead == 8) ADVANCE(9);
      if (lookahead == '\t') ADVANCE(10);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == 11) ADVANCE(12);
      if (lookahead == '\f') ADVANCE(13);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_error);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_error] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(22),
    [sym__value] = STATE(24),
    [sym_object] = STATE(24),
    [sym_array] = STATE(24),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_5] = ACTIONS(5),
    [sym_string] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_null] = ACTIONS(7),
  },
  [2] = {
    [sym__value] = STATE(13),
    [sym_object] = STATE(13),
    [sym_array] = STATE(13),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_5] = ACTIONS(5),
    [anon_sym_6] = ACTIONS(9),
    [sym_string] = ACTIONS(11),
    [sym_number] = ACTIONS(11),
    [sym_true] = ACTIONS(11),
    [sym_false] = ACTIONS(11),
    [sym_null] = ACTIONS(11),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_5,
    STATE(21), 3,
      sym__value,
      sym_object,
      sym_array,
    ACTIONS(13), 5,
      sym_string,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [19] = 4,
    ACTIONS(3), 1,
      anon_sym_,
    ACTIONS(5), 1,
      anon_sym_5,
    STATE(19), 3,
      sym__value,
      sym_object,
      sym_array,
    ACTIONS(15), 5,
      sym_string,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [38] = 3,
    ACTIONS(17), 1,
      anon_sym_3,
    STATE(15), 1,
      sym_pair,
    ACTIONS(19), 2,
      sym_string,
      sym_number,
  [49] = 1,
    ACTIONS(21), 4,
      ts_builtin_sym_end,
      anon_sym_2,
      anon_sym_3,
      anon_sym_6,
  [56] = 1,
    ACTIONS(23), 4,
      ts_builtin_sym_end,
      anon_sym_2,
      anon_sym_3,
      anon_sym_6,
  [63] = 1,
    ACTIONS(25), 4,
      ts_builtin_sym_end,
      anon_sym_2,
      anon_sym_3,
      anon_sym_6,
  [70] = 1,
    ACTIONS(27), 4,
      ts_builtin_sym_end,
      anon_sym_2,
      anon_sym_3,
      anon_sym_6,
  [77] = 1,
    ACTIONS(29), 4,
      ts_builtin_sym_end,
      anon_sym_2,
      anon_sym_3,
      anon_sym_6,
  [84] = 1,
    ACTIONS(31), 4,
      ts_builtin_sym_end,
      anon_sym_2,
      anon_sym_3,
      anon_sym_6,
  [91] = 2,
    STATE(20), 1,
      sym_pair,
    ACTIONS(19), 2,
      sym_string,
      sym_number,
  [99] = 3,
    ACTIONS(33), 1,
      anon_sym_2,
    ACTIONS(35), 1,
      anon_sym_6,
    STATE(16), 1,
      aux_sym_array_repeat1,
  [109] = 3,
    ACTIONS(37), 1,
      anon_sym_2,
    ACTIONS(39), 1,
      anon_sym_3,
    STATE(17), 1,
      aux_sym_object_repeat1,
  [119] = 3,
    ACTIONS(37), 1,
      anon_sym_2,
    ACTIONS(41), 1,
      anon_sym_3,
    STATE(14), 1,
      aux_sym_object_repeat1,
  [129] = 3,
    ACTIONS(33), 1,
      anon_sym_2,
    ACTIONS(43), 1,
      anon_sym_6,
    STATE(18), 1,
      aux_sym_array_repeat1,
  [139] = 3,
    ACTIONS(45), 1,
      anon_sym_2,
    ACTIONS(48), 1,
      anon_sym_3,
    STATE(17), 1,
      aux_sym_object_repeat1,
  [149] = 3,
    ACTIONS(50), 1,
      anon_sym_2,
    ACTIONS(53), 1,
      anon_sym_6,
    STATE(18), 1,
      aux_sym_array_repeat1,
  [159] = 1,
    ACTIONS(55), 2,
      anon_sym_2,
      anon_sym_3,
  [164] = 1,
    ACTIONS(48), 2,
      anon_sym_2,
      anon_sym_3,
  [169] = 1,
    ACTIONS(53), 2,
      anon_sym_2,
      anon_sym_6,
  [174] = 1,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
  [178] = 1,
    ACTIONS(59), 1,
      anon_sym_4,
  [182] = 1,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 19,
  [SMALL_STATE(5)] = 38,
  [SMALL_STATE(6)] = 49,
  [SMALL_STATE(7)] = 56,
  [SMALL_STATE(8)] = 63,
  [SMALL_STATE(9)] = 70,
  [SMALL_STATE(10)] = 77,
  [SMALL_STATE(11)] = 84,
  [SMALL_STATE(12)] = 91,
  [SMALL_STATE(13)] = 99,
  [SMALL_STATE(14)] = 109,
  [SMALL_STATE(15)] = 119,
  [SMALL_STATE(16)] = 129,
  [SMALL_STATE(17)] = 139,
  [SMALL_STATE(18)] = 149,
  [SMALL_STATE(19)] = 159,
  [SMALL_STATE(20)] = 164,
  [SMALL_STATE(21)] = 169,
  [SMALL_STATE(22)] = 174,
  [SMALL_STATE(23)] = 178,
  [SMALL_STATE(24)] = 182,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(12),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_json(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
