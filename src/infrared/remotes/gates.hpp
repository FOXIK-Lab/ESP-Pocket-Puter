#pragma once

#include "../universal_remote.hpp"

const Remote GATES_REMOTES[] PROGMEM = {
    {
        "Chamberlain",
        REMOTE_TYPE_GATE,
        {
            {"Open", REMOTE_PROTOCOL_RAW, 315000, "300 2700 300 2700 300 2700 300 2700"},
            {"Stop", REMOTE_PROTOCOL_RAW, 315000, "300 2700 300 900 300 900 300 900"},
            {"Close", REMOTE_PROTOCOL_RAW, 315000, "300 900 300 2700 300 2700 300 2700"},
        }
    },
    {
        "LiftMaster",
        REMOTE_TYPE_GATE,
        {
            {"Toggle", REMOTE_PROTOCOL_RAW, 390000, "200 3800 200 3800 200 3800 200 3800"},
        }
    },
    {
        "Genie",
        REMOTE_TYPE_GATE,
        {
            {"Open", REMOTE_PROTOCOL_RAW, 300000, "500 2500 500 2500 500 2500 500 2500"},
            {"Close", REMOTE_PROTOCOL_RAW, 300000, "500 2500 500 750 500 750 500 750"},
        }
    },
    {
        "Nice",
        REMOTE_TYPE_GATE,
        {
            {"Open", REMOTE_PROTOCOL_RAW, 433920, "350 1050 350 1050 350 1050 350 1050"},
            {"Stop", REMOTE_PROTOCOL_RAW, 433920, "350 1050 350 350 350 350 350 350"},
            {"Close", REMOTE_PROTOCOL_RAW, 433920, "350 350 350 1050 350 1050 350 1050"},
        }
    },
    {
        "FAAC",
        REMOTE_TYPE_GATE,
        {
            {"Toggle", REMOTE_PROTOCOL_RAW, 433920, "400 800 400 800 400 800 400 800"},
        }
    },
    {
        "CAME",
        REMOTE_TYPE_GATE,
        {
            {"Open", REMOTE_PROTOCOL_RAW, 433920, "300 900 300 900 300 900 300 900"},
            {"Close", REMOTE_PROTOCOL_RAW, 433920, "300 900 300 300 300 300 300 300"},
        }
    }
};
