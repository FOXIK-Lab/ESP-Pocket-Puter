#pragma once

#include "../universal_remote.hpp"

const Remote FANS_REMOTES[] PROGMEM = {
    {
        "Dyson",
        REMOTE_TYPE_FAN,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "02 00 00 00"},
            {"Speed+", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "06 00 00 00"},
            {"Speed-", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "07 00 00 00"},
            {"Oscillate", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "09 00 00 00"},
            {"Timer", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "0C 00 00 00"},
            {"Night", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "0B 00 00 00"},
        }
    },
    {
        "Honeywell",
        REMOTE_TYPE_FAN,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"Speed+", REMOTE_PROTOCOL_NEC, "00 00 00 00", "06 00 00 00"},
            {"Speed-", REMOTE_PROTOCOL_NEC, "00 00 00 00", "07 00 00 00"},
            {"Oscillate", REMOTE_PROTOCOL_NEC, "00 00 00 00", "09 00 00 00"},
            {"Timer", REMOTE_PROTOCOL_NEC, "00 00 00 00", "0C 00 00 00"},
        }
    },
    {
        "Lasko",
        REMOTE_TYPE_FAN,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"Speed", REMOTE_PROTOCOL_NEC, "00 00 00 00", "05 00 00 00"},
            {"Oscillate", REMOTE_PROTOCOL_NEC, "00 00 00 00", "09 00 00 00"},
            {"Timer", REMOTE_PROTOCOL_NEC, "00 00 00 00", "0C 00 00 00"},
        }
    },
    {
        "Vornado",
        REMOTE_TYPE_FAN,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "02 00 00 00"},
            {"Speed+", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "06 00 00 00"},
            {"Speed-", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "07 00 00 00"},
            {"Mode", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "05 00 00 00"},
        }
    },
    {
        "Xiaomi Fan",
        REMOTE_TYPE_FAN,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "DF 20 00 00", "7C 83 00 00"},
            {"Speed+", REMOTE_PROTOCOL_NEC, "DF 20 00 00", "E8 17 00 00"},
            {"Speed-", REMOTE_PROTOCOL_NEC, "DF 20 00 00", "F0 0F 00 00"},
            {"Oscillate", REMOTE_PROTOCOL_NEC, "DF 20 00 00", "BA 45 00 00"},
            {"Timer", REMOTE_PROTOCOL_NEC, "DF 20 00 00", "A5 5A 00 00"},
        }
    }
};
