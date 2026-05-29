#pragma once

#include "../universal_remote.hpp"

const Remote IPTV_REMOTES[] PROGMEM = {
    {
        "Apple TV",
        REMOTE_TYPE_IPTV,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC, "00 00 00 00", "10 00 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC, "00 00 00 00", "12 00 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC, "00 00 00 00", "13 00 00 00"},
            {"Left", REMOTE_PROTOCOL_NEC, "00 00 00 00", "14 00 00 00"},
            {"Right", REMOTE_PROTOCOL_NEC, "00 00 00 00", "15 00 00 00"},
            {"Select", REMOTE_PROTOCOL_NEC, "00 00 00 00", "16 00 00 00"},
            {"Play/Pause", REMOTE_PROTOCOL_NEC, "00 00 00 00", "20 00 00 00"},
            {"Home", REMOTE_PROTOCOL_NEC, "00 00 00 00", "25 00 00 00"},
        }
    },
    {
        "Roku",
        REMOTE_TYPE_IPTV,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "02 00 00 00"},
            {"Home", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "05 00 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "12 00 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "13 00 00 00"},
            {"Left", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "14 00 00 00"},
            {"Right", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "15 00 00 00"},
            {"OK", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "16 00 00 00"},
            {"Back", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "20 00 00 00"},
            {"Play", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "21 00 00 00"},
        }
    },
    {
        "Nvidia Shield",
        REMOTE_TYPE_IPTV,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"Home", REMOTE_PROTOCOL_NEC, "00 00 00 00", "05 00 00 00"},
            {"Back", REMOTE_PROTOCOL_NEC, "00 00 00 00", "06 00 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC, "00 00 00 00", "12 00 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC, "00 00 00 00", "13 00 00 00"},
            {"Left", REMOTE_PROTOCOL_NEC, "00 00 00 00", "14 00 00 00"},
            {"Right", REMOTE_PROTOCOL_NEC, "00 00 00 00", "15 00 00 00"},
            {"Select", REMOTE_PROTOCOL_NEC, "00 00 00 00", "16 00 00 00"},
        }
    },
    {
        "Amazon Fire TV",
        REMOTE_TYPE_IPTV,
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
        }
    },
    {
        "Xiaomi Mi Box",
        REMOTE_TYPE_IPTV,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "DF 20 00 00", "7C 83 00 00"},
            {"Home", REMOTE_PROTOCOL_NEC, "DF 20 00 00", "51 AE 00 00"},
            {"Back", REMOTE_PROTOCOL_NEC, "DF 20 00 00", "BA 45 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC, "DF 20 00 00", "08 F7 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC, "DF 20 00 00", "18 E7 00 00"},
            {"Left", REMOTE_PROTOCOL_NEC, "DF 20 00 00", "28 D7 00 00"},
            {"Right", REMOTE_PROTOCOL_NEC, "DF 20 00 00", "38 C7 00 00"},
            {"OK", REMOTE_PROTOCOL_NEC, "DF 20 00 00", "48 B7 00 00"},
        }
    }
};
