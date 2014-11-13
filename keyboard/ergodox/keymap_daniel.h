static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(  // Layer0: Assetmak layout
        // left hand
        GRV, 1,   2,   3,   4,   5,   6,
        NO,  Q,   W,   F,   P,   G,   VOLU,
        TAB, A,   S,   E,   T,   D,
        LSFT,Z,   X,   C,   V,   B,   VOLD,
        LGUI,MPRV,MPLY,MNXT,LBRC,
                                      NO,  NO,
                                           NO,
                                 SPC, FN1, LALT,
        // right hand
             FN0, 7,   8,   9,   0,   MINS,EQL,
             FN4, J,   L,   U,   Y,   SCLN,BSLS,
                  H,   N,   I,   O,   R,   QUOT,
             FN5, K,   M,   COMM,DOT, SLSH,RSFT,
                       RBRC,NO  ,NO,  NO,  RGUI,
        PGUP,DEL,
        PGDN,
        RALT,FN2, FN3
    ),

    KEYMAP(  // Layer1: F-keys, arrows, etc
        // left hand
        TRNS,F1,  F2,  F3,  F4,  F5,  F6,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 SPC, ESC, TRNS,
        // right hand
             NO,  F7,  F8,  F9, F10, F11,   F12,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                  LEFT,DOWN,UP,  RGHT,NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,BSPC,TRNS
    ),

    KEYMAP(  // Layer2: numpad
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,NLCK,P7,  P8,  P9,  PMNS,PGUP,
                  PAST,P4,  P5,  P6,  PPLS,PGDN,
             TRNS,FN17,P1,  P2,  P3,  PSLS,PENT,
                       P0,  PDOT,SLSH,NO,  NO,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // Layer3: Qwerty layout
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,Q,   W,   E,   R,   T,   TRNS,
        TRNS,A,   S,   H,   T,   G,
        TRNS,Z,   X,   M,   C,   V,   TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,Y,   U,   I,   O,   P,   TRNS,
                  H,   J,   K,   L,   SCLN,TRNS,
             TRNS,N,   M,   TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

/*
    // templates to copy from

    KEYMAP(  // LayerN: transparent on edges + hard-defined thumb keys, all others are empty
        // left hand
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 SPC, ESC, TRNS,
        // right hand
             NO,  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,BSPC,ENT
    ),
    KEYMAP(  // LayerN: fully transparent
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
*/
};

/* id for user defined functions */
enum function_id {
    TEENSY_KEY,
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    ACTION_FUNCTION(TEENSY_KEY),                    // FN0

    // Dual-role keys on thumbs
    ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC),          // FN1
    ACTION_LAYER_TAP_KEY(2, KC_BSPC),               // FN2
    ACTION_LAYER_TAP_KEY(1, KC_ENT),                // FN3

    ACTION_LAYER_SET(0, ON_BOTH),                   // FN4 - Assetmak Layout
    ACTION_LAYER_SET(3, ON_BOTH),                   // FN5 - Qwerty Layout
};

void action_function(keyrecord_t *event, uint8_t id, uint8_t opt)
{
    print("action_function called\n");
    print("id  = "); phex(id); print("\n");
    print("opt = "); phex(opt); print("\n");
    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(250);
        bootloader_jump(); // should not return
        print("not supported.\n");
    }
}

