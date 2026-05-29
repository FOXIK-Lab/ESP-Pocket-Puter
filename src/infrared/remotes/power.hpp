#pragma once

#include "../universal_remote.hpp"

const Remote POWER_REMOTES[] PROGMEM = {
    {
        "Broadlink",
        REMOTE_TYPE_POWER,
        {
            {"Toggle", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "02 00 00 00"},
            {"On", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "04 00 00 00"},
            {"Off", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "06 00 00 00"},
        }
    },
    {
        "Sonoff",
        REMOTE_TYPE_POWER,
        {
            {"Toggle", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"On", REMOTE_PROTOCOL_NEC, "00 00 00 00", "04 00 00 00"},
            {"Off", REMOTE_PROTOCOL_NEC, "00 00 00 00", "06 00 00 00"},
        }
    },
    {
        "TP-Link",
        REMOTE_TYPE_POWER,
        {
            {"Toggle", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "02 00 00 00"},
            {"On", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "04 00 00 00"},
            {"Off", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "06 00 00 00"},
        }
    },
    {
        "Xiaomi Socket",
        REMOTE_TYPE_POWER,
        {
            {"Toggle", REMOTE_PROTOCOL_NEC, "DF 20 00 00", "7C 83 00 00"},
            {"On", REMOTE_PROTOCOL_NEC, "DF 20 00 00", "E8 17 00 00"},
            {"Off", REMOTE_PROTOCOL_NEC, "DF 20 00 00", "F0 0F 00 00"},
        }
    },
    {
        "Meross",
        REMOTE_TYPE_POWER,
        {
            {"Toggle", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "02 00 00 00"},
            {"On", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "04 00 00 00"},
            {"Off", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "06 00 00 00"},
        }
    }
};
