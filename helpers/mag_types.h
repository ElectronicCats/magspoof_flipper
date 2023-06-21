#pragma once

#define MAG_VERSION_APP "1.0"
#define MAG_DEVELOPER "Electronic Cats"
#define MAG_GITHUB "github.com/electroniccats/magspoof_flipper"

typedef enum {
    MagViewSubmenu,
    MagViewDialogEx,
    MagViewPopup,
    MagViewLoading,
    MagViewWidget,
    MagViewVariableItemList,
    MagViewTextInput,
    MagViewMagTextInput,
} MagView;

typedef enum {
    MagReverseStateOff,
    MagReverseStateOn,
} MagReverseState;

typedef enum {
    MagTrackStateOneAndTwo,
    MagTrackStateOne,
    MagTrackStateTwo,
    MagTrackStateThree,
} MagTrackState;

typedef enum {
    MagTxStateRFID,
    MagTxStateGPIO,
    MagTxStatePiezo,
    MagTxStateLF_P, // combo of RFID and Piezo
    MagTxStateNFC,
    MagTxCC1101_434,
    MagTxCC1101_868,
} MagTxState;
