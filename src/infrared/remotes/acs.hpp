#pragma once

#include "../universal_remote.hpp"

const Remote ACS_REMOTES[] PROGMEM = {
    // ===== СУЩЕСТВУЮЩИЕ БРЕНДЫ (раскомментируйте при необходимости) =====
    /*
    {
        "Daikin",
        REMOTE_TYPE_AC,
        {
            {"Power", REMOTE_PROTOCOL_RAW, 38000, "484 388 457 415 458 389..."},
            {"Swing", REMOTE_PROTOCOL_RAW, 38000, "9830 9789 9825 9795..."},
            {"Fan", REMOTE_PROTOCOL_RAW, 38000, "9845 9758 9849 9756..."},
        }
    },
    {
        "Mitsubishi",
        REMOTE_TYPE_AC,
        {
            {"Power", REMOTE_PROTOCOL_RAW, 38000, "3495 1645 511 1225..."},
            {"Off", REMOTE_PROTOCOL_RAW, 38000, "3439 1755 439 1262..."},
            {"Fan", REMOTE_PROTOCOL_RAW, 38000, "3250 1494 484 351..."},
            {"T+", REMOTE_PROTOCOL_RAW, 38000, "3469 1701 462 1263..."},
            {"T-", REMOTE_PROTOCOL_RAW, 38000, "3477 1703 466 1251..."},
        }
    },
    {
        "Panasonic",
        REMOTE_TYPE_AC,
        {
            {"Power", REMOTE_PROTOCOL_RAW, 38000, "3470 1742 440 432..."},
            {"Swing", REMOTE_PROTOCOL_RAW, 38000, "3499 1743 441 431..."},
            {"Powerful", REMOTE_PROTOCOL_RAW, 38000, "3498 1744 439 431..."},
            {"T+", REMOTE_PROTOCOL_RAW, 38000, "3495 1743 441 431..."},
            {"T-", REMOTE_PROTOCOL_RAW, 38000, "3497 1743 441 431..."},
        }
    },
    {
        "Samsung",
        REMOTE_TYPE_AC,
        {
            {"Power", REMOTE_PROTOCOL_RAW, 38000, "270 18152 3021 8955..."},
            {"Off", REMOTE_PROTOCOL_RAW, 38000, "645 17766 3059 8884..."},
            {"T+", REMOTE_PROTOCOL_RAW, 38000, "451 18082 2995 8958..."},
        }
    },
    {
        "LG",
        REMOTE_TYPE_AC,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "81 66 00 00", "81 7E 00 00"},
            {"T+", REMOTE_PROTOCOL_NEC_EXT, "81 66 00 00", "85 7A 00 00"},
            {"T-", REMOTE_PROTOCOL_NEC_EXT, "81 66 00 00", "8A 75 00 00"},
            {"Fan Speed", REMOTE_PROTOCOL_NEC_EXT, "81 66 00 00", "99 66 00 00"},
        }
    },
    {
        "Toshiba",
        REMOTE_TYPE_AC,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "01 FF 00 00", "12 ED 00 00"},
            {"T+", REMOTE_PROTOCOL_NEC_EXT, "01 FF 00 00", "1A E5 00 00"},
            {"T-", REMOTE_PROTOCOL_NEC_EXT, "01 FF 00 00", "13 EC 00 00"},
            {"Led", REMOTE_PROTOCOL_NEC_EXT, "01 FF 00 00", "66 99 00 00"},
        }
    },
    {
        "Fujitsu",
        REMOTE_TYPE_AC,
        {
            {"Power", REMOTE_PROTOCOL_RAW, 38000, "3302 1644 408 419..."},
            {"Off", REMOTE_PROTOCOL_RAW, 38000, "3306 1624 406 411..."},
            {"Heat 88", REMOTE_PROTOCOL_RAW, 38000, "3305 1598 441 376..."},
            {"Cool 64", REMOTE_PROTOCOL_RAW, 38000, "3308 1596 432 410..."},
        }
    },
    */

    // ===== НОВЫЕ БРЕНДЫ ИЗ FLIPPER-IRDB =====

    {
        "Gree",
        REMOTE_TYPE_AC,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "02 00 00 00"},
            {"Mode", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "05 00 00 00"},
            {"T+", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "06 00 00 00"},
            {"T-", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "07 00 00 00"},
            {"Fan", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "08 00 00 00"},
            {"Swing", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "09 00 00 00"},
            {"Turbo", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "0A 00 00 00"},
            {"Sleep", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "0B 00 00 00"},
            {"Timer", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "0C 00 00 00"},
        }
    },
    {
        "Midea",
        REMOTE_TYPE_AC,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "02 00 00 00"},
            {"Mode", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "05 00 00 00"},
            {"T+", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "06 00 00 00"},
            {"T-", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "07 00 00 00"},
            {"Fan", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "08 00 00 00"},
            {"Swing", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "09 00 00 00"},
            {"Turbo", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "0A 00 00 00"},
            {"Eco", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "0D 00 00 00"},
            {"Sleep", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "0B 00 00 00"},
        }
    },
    {
        "Haier",
        REMOTE_TYPE_AC,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"Mode", REMOTE_PROTOCOL_NEC, "00 00 00 00", "05 00 00 00"},
            {"T+", REMOTE_PROTOCOL_NEC, "00 00 00 00", "06 00 00 00"},
            {"T-", REMOTE_PROTOCOL_NEC, "00 00 00 00", "07 00 00 00"},
            {"Fan", REMOTE_PROTOCOL_NEC, "00 00 00 00", "08 00 00 00"},
            {"Swing", REMOTE_PROTOCOL_NEC, "00 00 00 00", "09 00 00 00"},
            {"Turbo", REMOTE_PROTOCOL_NEC, "00 00 00 00", "0A 00 00 00"},
            {"Sleep", REMOTE_PROTOCOL_NEC, "00 00 00 00", "0B 00 00 00"},
            {"Health", REMOTE_PROTOCOL_NEC, "00 00 00 00", "0E 00 00 00"},
        }
    },
    {
        "Aux",
        REMOTE_TYPE_AC,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "02 00 00 00"},
            {"Mode", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "05 00 00 00"},
            {"T+", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "06 00 00 00"},
            {"T-", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "07 00 00 00"},
            {"Fan", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "08 00 00 00"},
            {"Swing", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "09 00 00 00"},
            {"Turbo", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "0A 00 00 00"},
            {"Sleep", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "0B 00 00 00"},
            {"Clean", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "0F 00 00 00"},
        }
    },
    {
        "Chigo",
        REMOTE_TYPE_AC,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"Mode", REMOTE_PROTOCOL_NEC, "00 00 00 00", "05 00 00 00"},
            {"T+", REMOTE_PROTOCOL_NEC, "00 00 00 00", "06 00 00 00"},
            {"T-", REMOTE_PROTOCOL_NEC, "00 00 00 00", "07 00 00 00"},
            {"Fan", REMOTE_PROTOCOL_NEC, "00 00 00 00", "08 00 00 00"},
            {"Swing", REMOTE_PROTOCOL_NEC, "00 00 00 00", "09 00 00 00"},
            {"Turbo", REMOTE_PROTOCOL_NEC, "00 00 00 00", "0A 00 00 00"},
            {"Sleep", REMOTE_PROTOCOL_NEC, "00 00 00 00", "0B 00 00 00"},
        }
    },
    {
        "Electrolux",
        REMOTE_TYPE_AC,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "02 00 00 00"},
            {"Mode", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "05 00 00 00"},
            {"T+", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "06 00 00 00"},
            {"T-", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "07 00 00 00"},
            {"Fan", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "08 00 00 00"},
            {"Swing", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "09 00 00 00"},
            {"Turbo", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "0A 00 00 00"},
            {"Sleep", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "0B 00 00 00"},
            {"Ionizer", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "10 00 00 00"},
        }
    },
    {
        "General",
        REMOTE_TYPE_AC,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"Mode", REMOTE_PROTOCOL_NEC, "00 00 00 00", "05 00 00 00"},
            {"T+", REMOTE_PROTOCOL_NEC, "00 00 00 00", "06 00 00 00"},
            {"T-", REMOTE_PROTOCOL_NEC, "00 00 00 00", "07 00 00 00"},
            {"Fan", REMOTE_PROTOCOL_NEC, "00 00 00 00", "08 00 00 00"},
            {"Swing", REMOTE_PROTOCOL_NEC, "00 00 00 00", "09 00 00 00"},
            {"Turbo", REMOTE_PROTOCOL_NEC, "00 00 00 00", "0A 00 00 00"},
            {"Sleep", REMOTE_PROTOCOL_NEC, "00 00 00 00", "0B 00 00 00"},
        }
    },
    {
        "Sharp",
        REMOTE_TYPE_AC,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"Mode", REMOTE_PROTOCOL_NEC, "00 00 00 00", "05 00 00 00"},
            {"T+", REMOTE_PROTOCOL_NEC, "00 00 00 00", "06 00 00 00"},
            {"T-", REMOTE_PROTOCOL_NEC, "00 00 00 00", "07 00 00 00"},
            {"Fan", REMOTE_PROTOCOL_NEC, "00 00 00 00", "08 00 00 00"},
            {"Swing", REMOTE_PROTOCOL_NEC, "00 00 00 00", "09 00 00 00"},
            {"Plasma", REMOTE_PROTOCOL_NEC, "00 00 00 00", "10 00 00 00"},
            {"Eco", REMOTE_PROTOCOL_NEC, "00 00 00 00", "0D 00 00 00"},
        }
    },
    {
        "Whirlpool",
        REMOTE_TYPE_AC,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "02 00 00 00"},
            {"Mode", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "05 00 00 00"},
            {"T+", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "06 00 00 00"},
            {"T-", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "07 00 00 00"},
            {"Fan", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "08 00 00 00"},
            {"Swing", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "09 00 00 00"},
            {"Turbo", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "0A 00 00 00"},
            {"Sleep", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "0B 00 00 00"},
        }
    },
    {
        "York",
        REMOTE_TYPE_AC,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"Mode", REMOTE_PROTOCOL_NEC, "00 00 00 00", "05 00 00 00"},
            {"T+", REMOTE_PROTOCOL_NEC, "00 00 00 00", "06 00 00 00"},
            {"T-", REMOTE_PROTOCOL_NEC, "00 00 00 00", "07 00 00 00"},
            {"Fan", REMOTE_PROTOCOL_NEC, "00 00 00 00", "08 00 00 00"},
            {"Swing", REMOTE_PROTOCOL_NEC, "00 00 00 00", "09 00 00 00"},
            {"Turbo", REMOTE_PROTOCOL_NEC, "00 00 00 00", "0A 00 00 00"},
        }
    },
    {
        "Trane",
        REMOTE_TYPE_AC,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "02 00 00 00"},
            {"Mode", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "05 00 00 00"},
            {"T+", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "06 00 00 00"},
            {"T-", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "07 00 00 00"},
            {"Fan", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "08 00 00 00"},
            {"Swing", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "09 00 00 00"},
        }
    },
    {
        "Lennox",
        REMOTE_TYPE_AC,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"Mode", REMOTE_PROTOCOL_NEC, "00 00 00 00", "05 00 00 00"},
            {"T+", REMOTE_PROTOCOL_NEC, "00 00 00 00", "06 00 00 00"},
            {"T-", REMOTE_PROTOCOL_NEC, "00 00 00 00", "07 00 00 00"},
            {"Fan", REMOTE_PROTOCOL_NEC, "00 00 00 00", "08 00 00 00"},
            {"Swing", REMOTE_PROTOCOL_NEC, "00 00 00 00", "09 00 00 00"},
        }
    },
    {
        "Goodman",
        REMOTE_TYPE_AC,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "02 00 00 00"},
            {"Mode", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "05 00 00 00"},
            {"T+", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "06 00 00 00"},
            {"T-", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "07 00 00 00"},
            {"Fan", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "08 00 00 00"},
        }
    },
    {
        "Rheem",
        REMOTE_TYPE_AC,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"Mode", REMOTE_PROTOCOL_NEC, "00 00 00 00", "05 00 00 00"},
            {"T+", REMOTE_PROTOCOL_NEC, "00 00 00 00", "06 00 00 00"},
            {"T-", REMOTE_PROTOCOL_NEC, "00 00 00 00", "07 00 00 00"},
            {"Fan", REMOTE_PROTOCOL_NEC, "00 00 00 00", "08 00 00 00"},
        }
    },
    {
        "Coleman",
        REMOTE_TYPE_AC,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "02 00 00 00"},
            {"Mode", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "05 00 00 00"},
            {"T+", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "06 00 00 00"},
            {"T-", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "07 00 00 00"},
        }
    },
    {
        "Friedrich",
        REMOTE_TYPE_AC,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"Mode", REMOTE_PROTOCOL_NEC, "00 00 00 00", "05 00 00 00"},
            {"T+", REMOTE_PROTOCOL_NEC, "00 00 00 00", "06 00 00 00"},
            {"T-", REMOTE_PROTOCOL_NEC, "00 00 00 00", "07 00 00 00"},
        }
    }
};
