#pragma once

#include "../universal_remote.hpp"

const Remote SAT_REMOTES[] PROGMEM = {
    {
        "Humax",
        REMOTE_TYPE_SAT,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC, "00 00 00 00", "10 00 00 00"},
            {"Guide", REMOTE_PROTOCOL_NEC, "00 00 00 00", "11 00 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC, "00 00 00 00", "12 00 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC, "00 00 00 00", "13 00 00 00"},
            {"Left", REMOTE_PROTOCOL_NEC, "00 00 00 00", "14 00 00 00"},
            {"Right", REMOTE_PROTOCOL_NEC, "00 00 00 00", "15 00 00 00"},
            {"OK", REMOTE_PROTOCOL_NEC, "00 00 00 00", "16 00 00 00"},
            {"Back", REMOTE_PROTOCOL_NEC, "00 00 00 00", "20 00 00 00"},
            {"Info", REMOTE_PROTOCOL_NEC, "00 00 00 00", "21 00 00 00"},
        }
    },
    {
        "Sky",
        REMOTE_TYPE_SAT,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "02 00 00 00"},
            {"Sky", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "05 00 00 00"},
            {"Guide", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "06 00 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "12 00 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "13 00 00 00"},
            {"Left", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "14 00 00 00"},
            {"Right", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "15 00 00 00"},
            {"Select", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "16 00 00 00"},
            {"Back", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "20 00 00 00"},
        }
    },
    {
        "Technisat",
        REMOTE_TYPE_SAT,
        {
            {"Power", REMOTE_PROTOCOL_RC5, "00 00 00 00", "0C 00 00 00"},
            {"Menu", REMOTE_PROTOCOL_RC5, "00 00 00 00", "30 00 00 00"},
            {"Up", REMOTE_PROTOCOL_RC5, "00 00 00 00", "14 00 00 00"},
            {"Down", REMOTE_PROTOCOL_RC5, "00 00 00 00", "13 00 00 00"},
            {"Left", REMOTE_PROTOCOL_RC5, "00 00 00 00", "15 00 00 00"},
            {"Right", REMOTE_PROTOCOL_RC5, "00 00 00 00", "16 00 00 00"},
            {"OK", REMOTE_PROTOCOL_RC5, "00 00 00 00", "35 00 00 00"},
        }
    },
    {
        "Dreambox",
        REMOTE_TYPE_SAT,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC, "00 00 00 00", "10 00 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC, "00 00 00 00", "12 00 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC, "00 00 00 00", "13 00 00 00"},
            {"Left", REMOTE_PROTOCOL_NEC, "00 00 00 00", "14 00 00 00"},
            {"Right", REMOTE_PROTOCOL_NEC, "00 00 00 00", "15 00 00 00"},
            {"OK", REMOTE_PROTOCOL_NEC, "00 00 00 00", "16 00 00 00"},
        }
    },
    {
        "VU+",
        REMOTE_TYPE_SAT,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "02 00 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "10 00 00 00"},
            {"EPG", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "11 00 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "12 00 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "13 00 00 00"},
            {"Left", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "14 00 00 00"},
            {"Right", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "15 00 00 00"},
            {"OK", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "16 00 00 00"},
        }
    }
};
