#pragma once

#include "../universal_remote.hpp"

const Remote CAMERAS_REMOTES[] PROGMEM = {
    {
        "Canon",
        REMOTE_TYPE_CAMERA,
        {
            {"Shutter", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"AF", REMOTE_PROTOCOL_NEC, "00 00 00 00", "05 00 00 00"},
            {"Playback", REMOTE_PROTOCOL_NEC, "00 00 00 00", "10 00 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC, "00 00 00 00", "11 00 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC, "00 00 00 00", "12 00 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC, "00 00 00 00", "13 00 00 00"},
            {"Left", REMOTE_PROTOCOL_NEC, "00 00 00 00", "14 00 00 00"},
            {"Right", REMOTE_PROTOCOL_NEC, "00 00 00 00", "15 00 00 00"},
            {"Set", REMOTE_PROTOCOL_NEC, "00 00 00 00", "16 00 00 00"},
        }
    },
    {
        "Nikon",
        REMOTE_TYPE_CAMERA,
        {
            {"Shutter", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"AF-On", REMOTE_PROTOCOL_NEC, "00 00 00 00", "05 00 00 00"},
            {"Playback", REMOTE_PROTOCOL_NEC, "00 00 00 00", "10 00 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC, "00 00 00 00", "11 00 00 00"},
            {"OK", REMOTE_PROTOCOL_NEC, "00 00 00 00", "16 00 00 00"},
            {"Delete", REMOTE_PROTOCOL_NEC, "00 00 00 00", "20 00 00 00"},
        }
    },
    {
        "Sony Camera",
        REMOTE_TYPE_CAMERA,
        {
            {"Shutter", REMOTE_PROTOCOL_SONY, "01 00 00 00", "15 00 00 00"},
            {"AF", REMOTE_PROTOCOL_SONY, "01 00 00 00", "20 00 00 00"},
            {"Playback", REMOTE_PROTOCOL_SONY, "01 00 00 00", "25 00 00 00"},
            {"Menu", REMOTE_PROTOCOL_SONY, "01 00 00 00", "30 00 00 00"},
            {"Enter", REMOTE_PROTOCOL_SONY, "01 00 00 00", "35 00 00 00"},
        }
    },
    {
        "Fujifilm",
        REMOTE_TYPE_CAMERA,
        {
            {"Shutter", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"AF", REMOTE_PROTOCOL_NEC, "00 00 00 00", "05 00 00 00"},
            {"Playback", REMOTE_PROTOCOL_NEC, "00 00 00 00", "10 00 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC, "00 00 00 00", "11 00 00 00"},
            {"Q", REMOTE_PROTOCOL_NEC, "00 00 00 00", "15 00 00 00"},
        }
    },
    {
        "Panasonic Camera",
        REMOTE_TYPE_CAMERA,
        {
            {"Shutter", REMOTE_PROTOCOL_KASEIKYO, "80 02 20 00", "D0 03 00 00"},
            {"AF", REMOTE_PROTOCOL_KASEIKYO, "80 02 20 00", "10 05 00 00"},
            {"Playback", REMOTE_PROTOCOL_KASEIKYO, "80 02 20 00", "20 01 00 00"},
            {"Menu", REMOTE_PROTOCOL_KASEIKYO, "80 02 20 00", "30 00 00 00"},
        }
    }
};
