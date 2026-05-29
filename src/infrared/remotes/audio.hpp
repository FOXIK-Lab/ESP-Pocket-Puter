#pragma once

#include "../universal_remote.hpp"

const Remote AUDIO_REMOTES[] PROGMEM = {
    {
        "Denon",
        REMOTE_TYPE_AUDIO,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"VOL+", REMOTE_PROTOCOL_NEC, "00 00 00 00", "42 00 00 00"},
            {"VOL-", REMOTE_PROTOCOL_NEC, "00 00 00 00", "C2 00 00 00"},
            {"Mute", REMOTE_PROTOCOL_NEC, "00 00 00 00", "82 00 00 00"},
            {"Input", REMOTE_PROTOCOL_NEC, "00 00 00 00", "0F 00 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC, "00 00 00 00", "10 00 00 00"},
            {"Up", REMOTE_PROTOCOL_NEC, "00 00 00 00", "12 00 00 00"},
            {"Down", REMOTE_PROTOCOL_NEC, "00 00 00 00", "13 00 00 00"},
            {"Enter", REMOTE_PROTOCOL_NEC, "00 00 00 00", "11 00 00 00"},
        }
    },
    {
        "Yamaha",
        REMOTE_TYPE_AUDIO,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "02 00 00 00"},
            {"VOL+", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "42 00 00 00"},
            {"VOL-", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "C2 00 00 00"},
            {"Mute", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "82 00 00 00"},
            {"Input", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "0F 00 00 00"},
            {"Menu", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "10 00 00 00"},
            {"Scene", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "20 00 00 00"},
        }
    },
    {
        "Onkyo",
        REMOTE_TYPE_AUDIO,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"VOL+", REMOTE_PROTOCOL_NEC, "00 00 00 00", "42 00 00 00"},
            {"VOL-", REMOTE_PROTOCOL_NEC, "00 00 00 00", "C2 00 00 00"},
            {"Mute", REMOTE_PROTOCOL_NEC, "00 00 00 00", "82 00 00 00"},
            {"Input", REMOTE_PROTOCOL_NEC, "00 00 00 00", "0F 00 00 00"},
            {"Dimmer", REMOTE_PROTOCOL_NEC, "00 00 00 00", "30 00 00 00"},
        }
    },
    {
        "Marantz",
        REMOTE_TYPE_AUDIO,
        {
            {"Power", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "02 00 00 00"},
            {"VOL+", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "42 00 00 00"},
            {"VOL-", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "C2 00 00 00"},
            {"Mute", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "82 00 00 00"},
            {"Input", REMOTE_PROTOCOL_NEC_EXT, "00 00 00 00", "0F 00 00 00"},
        }
    },
    {
        "Sony Audio",
        REMOTE_TYPE_AUDIO,
        {
            {"Power", REMOTE_PROTOCOL_SONY, "01 00 00 00", "15 00 00 00"},
            {"VOL+", REMOTE_PROTOCOL_SONY, "01 00 00 00", "12 00 00 00"},
            {"VOL-", REMOTE_PROTOCOL_SONY, "01 00 00 00", "13 00 00 00"},
            {"Mute", REMOTE_PROTOCOL_SONY, "01 00 00 00", "14 00 00 00"},
            {"Input", REMOTE_PROTOCOL_SONY, "01 00 00 00", "25 00 00 00"},
            {"Menu", REMOTE_PROTOCOL_SONY, "01 00 00 00", "30 00 00 00"},
        }
    },
    {
        "Bose",
        REMOTE_TYPE_AUDIO,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"VOL+", REMOTE_PROTOCOL_NEC, "00 00 00 00", "42 00 00 00"},
            {"VOL-", REMOTE_PROTOCOL_NEC, "00 00 00 00", "C2 00 00 00"},
            {"Mute", REMOTE_PROTOCOL_NEC, "00 00 00 00", "82 00 00 00"},
            {"Input", REMOTE_PROTOCOL_NEC, "00 00 00 00", "0F 00 00 00"},
            {"Setup", REMOTE_PROTOCOL_NEC, "00 00 00 00", "30 00 00 00"},
        }
    },
    {
        "JBL",
        REMOTE_TYPE_AUDIO,
        {
            {"Power", REMOTE_PROTOCOL_NEC, "00 00 00 00", "02 00 00 00"},
            {"VOL+", REMOTE_PROTOCOL_NEC, "00 00 00 00", "42 00 00 00"},
            {"VOL-", REMOTE_PROTOCOL_NEC, "00 00 00 00", "C2 00 00 00"},
            {"Play/Pause", REMOTE_PROTOCOL_NEC, "00 00 00 00", "10 00 00 00"},
            {"Next", REMOTE_PROTOCOL_NEC, "00 00 00 00", "12 00 00 00"},
            {"Prev", REMOTE_PROTOCOL_NEC, "00 00 00 00", "13 00 00 00"},
        }
    }
};
