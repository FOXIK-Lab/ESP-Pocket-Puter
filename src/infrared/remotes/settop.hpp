#pragma once

#include "../universal_remote.hpp"

const Remote SETTOP_REMOTES[] PROGMEM = {
    {
        "Comcast Xfinity",
        REMOTE_TYPE_SETTOP,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "02 00 00 00"},
            {"Guide", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "05 00 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "10 00 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "12 00 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "13 00 00 00"},
            {"Left", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "14 00 00 00"},
            {"Right", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "15 00 00 00"},
            {"Select", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "16 00 00 00"},
            {"Back", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "20 00 00 00"},
            {"Info", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "21 00 00 00"},
        }
    },
    {
        "Verizon Fios",
        REMOTE_TYPE_SETTOP,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"Guide", REMOTE_PROTOCOL_NEC, "00 00 00 00", "05 00 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC, "00 00 00 00", "10 00 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC, "00 00 00 00", "12 00 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC, "00 00 00 00", "13 00 00 00"},
            {"Left", REMOTE_PROTOCOL_NEC, "00 00 00 00", "14 00 00 00"},
            {"Right", REMOTE_PROTOCOL_NEC, "00 00 00 00", "15 00 00 00"},
            {"OK", REMOTE_PROTOCOL_NEC, "00 00 00 00", "16 00 00 00"},
        }
    },
    {
        "AT&T U-verse",
        REMOTE_TYPE_SETTOP,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "02 00 00 00"},
            {"Guide", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "05 00 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "10 00 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "12 00 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "13 00 00 00"},
            {"Left", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "14 00 00 00"},
            {"Right", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "15 00 00 00"},
            {"Select", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "16 00 00 00"},
        }
    },
    {
        "Dish Network",
        REMOTE_TYPE_SETTOP,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"Guide", REMOTE_PROTOCOL_NEC, "00 00 00 00", "05 00 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC, "00 00 00 00", "10 00 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC, "00 00 00 00", "12 00 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC, "00 00 00 00", "13 00 00 00"},
            {"Left", REMOTE_PROTOCOL_NEC, "00 00 00 00", "14 00 00 00"},
            {"Right", REMOTE_PROTOCOL_NEC, "00 00 00 00", "15 00 00 00"},
            {"Select", REMOTE_PROTOCOL_NEC, "00 00 00 00", "16 00 00 00"},
        }
    }
};
