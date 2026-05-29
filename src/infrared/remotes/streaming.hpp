#pragma once

#include "../universal_remote.hpp"

const Remote STREAMING_REMOTES[] PROGMEM = {
    {
        "Netflix Device",
        REMOTE_TYPE_STREAMING,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"Home", REMOTE_PROTOCOL_NEC, "00 00 00 00", "05 00 00 00"},
            {"Back", REMOTE_PROTOCOL_NEC, "00 00 00 00", "06 00 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC, "00 00 00 00", "12 00 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC, "00 00 00 00", "13 00 00 00"},
            {"Left", REMOTE_PROTOCOL_NEC, "00 00 00 00", "14 00 00 00"},
            {"Right", REMOTE_PROTOCOL_NEC, "00 00 00 00", "15 00 00 00"},
            {"Select", REMOTE_PROTOCOL_NEC, "00 00 00 00", "16 00 00 00"},
            {"Play/Pause", REMOTE_PROTOCOL_NEC, "00 00 00 00", "20 00 00 00"},
            {"Netflix", REMOTE_PROTOCOL_NEC, "00 00 00 00", "30 00 00 00"},
        }
    },
    {
        "YouTube Device",
        REMOTE_TYPE_STREAMING,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "02 00 00 00"},
            {"Home", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "05 00 00 00"},
            {"Back", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "06 00 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "12 00 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "13 00 00 00"},
            {"Left", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "14 00 00 00"},
            {"Right", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "15 00 00 00"},
            {"Select", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "16 00 00 00"},
            {"Play/Pause", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "20 00 00 00"},
            {"YouTube", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "30 00 00 00"},
        }
    },
    {
        "Disney+ Device",
        REMOTE_TYPE_STREAMING,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"Home", REMOTE_PROTOCOL_NEC, "00 00 00 00", "05 00 00 00"},
            {"Back", REMOTE_PROTOCOL_NEC, "00 00 00 00", "06 00 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC, "00 00 00 00", "12 00 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC, "00 00 00 00", "13 00 00 00"},
            {"Left", REMOTE_PROTOCOL_NEC, "00 00 00 00", "14 00 00 00"},
            {"Right", REMOTE_PROTOCOL_NEC, "00 00 00 00", "15 00 00 00"},
            {"Select", REMOTE_PROTOCOL_NEC, "00 00 00 00", "16 00 00 00"},
            {"Disney+", REMOTE_PROTOCOL_NEC, "00 00 00 00", "30 00 00 00"},
        }
    },
    {
        "Prime Video Device",
        REMOTE_TYPE_STREAMING,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "02 00 00 00"},
            {"Home", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "05 00 00 00"},
            {"Back", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "06 00 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "12 00 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "13 00 00 00"},
            {"Left", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "14 00 00 00"},
            {"Right", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "15 00 00 00"},
            {"Select", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "16 00 00 00"},
            {"Prime", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "30 00 00 00"},
        }
    }
};
